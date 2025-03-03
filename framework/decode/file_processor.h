/*
** Copyright (c) 2018 Valve Corporation
** Copyright (c) 2018 LunarG, Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included in
** all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
*/

#ifndef GFXRECON_DECODE_FILE_PROCESSOR_H
#define GFXRECON_DECODE_FILE_PROCESSOR_H

#include "format/api_call_id.h"
#include "format/format.h"
#include "decode/annotation_handler.h"
#include "decode/api_decoder.h"
#include "util/compressor.h"
#include "util/defines.h"

#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

class FileProcessor
{
  public:
    enum Error : int32_t
    {
        kErrorNone                         = 0,
        kErrorInvalidFileDescriptor        = -1,
        kErrorOpeningFile                  = -2,
        kErrorReadingFile                  = -3, // ferror() returned true at start of frame processing.
        kErrorReadingFileHeader            = -4,
        kErrorReadingBlockHeader           = -5,
        kErrorReadingCompressedBlockHeader = -6,
        kErrorReadingBlockData             = -7,
        kErrorReadingCompressedBlockData   = -8,
        kErrorInvalidFourCC                = -9,
        kErrorUnsupportedCompressionType   = -10
    };

  public:
    FileProcessor();

    ~FileProcessor();

    void WaitDecodersIdle();

    void SetAnnotationProcessor(AnnotationHandler* handler) { annotation_handler_ = handler; }

    void AddDecoder(ApiDecoder* decoder) { decoders_.push_back(decoder); }

    void RemoveDecoder(ApiDecoder* decoder)
    {
        decoders_.erase(std::remove(decoders_.begin(), decoders_.end(), decoder), decoders_.end());
    }

    bool Initialize(const std::string& filename);

    // Returns true if there are more frames to process, false if all frames have been processed or an error has
    // occurred.  Use GetErrorState() to determine error condition.
    bool ProcessNextFrame();

    // Returns false if processing failed.  Use GetErrorState() to determine error condition for failure case.
    bool ProcessAllFrames();

    const format::FileHeader& GetFileHeader() const { return file_header_; }

    const std::vector<format::FileOptionPair>& GetFileOptions() const { return file_options_; }

    uint32_t GetCurrentFrameNumber() const { return current_frame_number_; }

    uint64_t GetNumBytesRead() const { return bytes_read_; }

    Error GetErrorState() const { return error_state_; }

  private:
    bool ProcessFileHeader();

    bool ProcessBlocks();

    bool ReadBlockHeader(format::BlockHeader* block_header);

    bool ReadParameterBuffer(size_t buffer_size);

    bool ReadCompressedParameterBuffer(size_t  compressed_buffer_size,
                                       size_t  expected_uncompressed_size,
                                       size_t* uncompressed_buffer_size);

    bool ReadBytes(void* buffer, size_t buffer_size);

    bool SkipBytes(size_t skip_size);

    void HandleBlockReadError(Error error_code, const char* error_message);

    bool ProcessFunctionCall(const format::BlockHeader& block_header, format::ApiCallId call_id);

    bool ProcessMetaData(const format::BlockHeader& block_header, format::MetaDataId meta_data_id);

    bool ProcessStateMarker(const format::BlockHeader& block_header, format::MarkerType marker_type);

    bool ProcessAnnotation(const format::BlockHeader& block_header, format::AnnotationType annotation_type);

    bool IsFrameDelimiter(format::ApiCallId call_id) const;

    bool IsFileHeaderValid() const { return (file_header_.fourcc == GFXRECON_FOURCC); }

    bool IsFileValid() const { return (file_descriptor_ && !feof(file_descriptor_) && !ferror(file_descriptor_)); }

  private:
    FILE*                               file_descriptor_;
    std::string                         filename_;
    format::FileHeader                  file_header_;
    std::vector<format::FileOptionPair> file_options_;
    format::EnabledOptions              enabled_options_;
    uint32_t                            current_frame_number_;
    uint64_t                            bytes_read_;
    Error                               error_state_;
    AnnotationHandler*                  annotation_handler_;
    std::vector<ApiDecoder*>            decoders_;
    std::vector<uint8_t>                parameter_buffer_;
    std::vector<uint8_t>                compressed_parameter_buffer_;
    util::Compressor*                   compressor_;
    /// @brief Incremented at the end of every block successfully processed.
    uint64_t block_index_;
};

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)

#endif // GFXRECON_DECODE_FILE_PROCESSOR_H
