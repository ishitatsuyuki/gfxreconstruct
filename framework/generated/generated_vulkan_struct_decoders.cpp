/*
** Copyright (c) 2018-2021 Valve Corporation
** Copyright (c) 2018-2022 LunarG, Inc.
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

/*
** This file is generated from the Khronos Vulkan XML API Registry.
**
*/

#include "generated/generated_vulkan_struct_decoders.h"

#include "decode/custom_vulkan_struct_decoders.h"
#include "decode/decode_allocator.h"

#include <cassert>

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(decode)

size_t DecodePNextStruct(const uint8_t* buffer, size_t buffer_size, PNextNode** pNext);

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExtent2D* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExtent2D* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExtent3D* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExtent3D* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depth));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOffset2D* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOffset2D* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOffset3D* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOffset3D* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->z));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRect2D* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRect2D* value = wrapper->decoded_value;

    wrapper->offset = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->offset->decoded_value = &(value->offset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->offset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferMemoryBarrier* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferMemoryBarrier* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDispatchIndirectCommand* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDispatchIndirectCommand* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->z));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrawIndexedIndirectCommand* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrawIndexedIndirectCommand* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->instanceCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstIndex));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstInstance));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrawIndirectCommand* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrawIndirectCommand* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->instanceCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstVertex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstInstance));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSubresourceRange* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSubresourceRange* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseMipLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->levelCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseArrayLayer));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layerCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageMemoryBarrier* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageMemoryBarrier* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->oldLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->newLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    wrapper->subresourceRange = DecodeAllocator::Allocate<Decoded_VkImageSubresourceRange>();
    wrapper->subresourceRange->decoded_value = &(value->subresourceRange);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->subresourceRange);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryBarrier* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryBarrier* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCacheHeaderVersionOne* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCacheHeaderVersionOne* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->headerSize));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->headerVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorID));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceID));
    wrapper->pipelineCacheUUID.SetExternalMemory(value->pipelineCacheUUID, VK_UUID_SIZE);
    bytes_read += wrapper->pipelineCacheUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAllocationCallbacks* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAllocationCallbacks* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pUserData));
    value->pUserData = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnAllocation));
    value->pfnAllocation = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnReallocation));
    value->pfnReallocation = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnFree));
    value->pfnFree = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnInternalAllocation));
    value->pfnInternalAllocation = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnInternalFree));
    value->pfnInternalFree = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkApplicationInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkApplicationInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += wrapper->pApplicationName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pApplicationName = wrapper->pApplicationName.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->applicationVersion));
    bytes_read += wrapper->pEngineName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pEngineName = wrapper->pEngineName.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->engineVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->apiVersion));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFormatProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFormatProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->linearTilingFeatures));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->optimalTilingFeatures));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageFormatProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageFormatProperties* value = wrapper->decoded_value;

    wrapper->maxExtent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->maxExtent->decoded_value = &(value->maxExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxExtent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMipLevels));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxArrayLayers));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleCounts));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxResourceSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkInstanceCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkInstanceCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->pApplicationInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkApplicationInfo>>();
    bytes_read += wrapper->pApplicationInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pApplicationInfo = wrapper->pApplicationInfo->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enabledLayerCount));
    bytes_read += wrapper->ppEnabledLayerNames.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppEnabledLayerNames = wrapper->ppEnabledLayerNames.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enabledExtensionCount));
    bytes_read += wrapper->ppEnabledExtensionNames.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppEnabledExtensionNames = wrapper->ppEnabledExtensionNames.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryHeap* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryHeap* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryType* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryType* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->propertyFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->heapIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustBufferAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fullDrawIndexUint32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageCubeArray));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->independentBlend));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->geometryShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tessellationShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleRateShading));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dualSrcBlend));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->logicOp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiDrawIndirect));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drawIndirectFirstInstance));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClamp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBiasClamp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fillModeNonSolid));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBounds));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->wideLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->largePoints));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaToOne));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiViewport));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerAnisotropy));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureCompressionETC2));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureCompressionASTC_LDR));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureCompressionBC));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->occlusionQueryPrecise));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineStatisticsQuery));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexPipelineStoresAndAtomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentStoresAndAtomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderTessellationAndGeometryPointSize));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderImageGatherExtended));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageExtendedFormats));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageMultisample));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageReadWithoutFormat));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageWriteWithoutFormat));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampledImageArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderClipDistance));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderCullDistance));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInt64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInt16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderResourceResidency));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderResourceMinLod));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseBinding));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidencyBuffer));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidencyImage2D));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidencyImage3D));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidency2Samples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidency4Samples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidency8Samples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidency16Samples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseResidencyAliased));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variableMultisampleRate));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inheritedQueries));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceLimits* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceLimits* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageDimension1D));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageDimension2D));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageDimension3D));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageDimensionCube));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageArrayLayers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTexelBufferElements));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxUniformBufferRange));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxStorageBufferRange));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPushConstantsSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMemoryAllocationCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSamplerAllocationCount));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferImageGranularity));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseAddressSpaceSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxBoundDescriptorSets));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorInputAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageResources));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUniformBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetStorageBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetInputAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexInputAttributes));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexInputBindings));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexInputAttributeOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexInputBindingStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationGenerationLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationPatchSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationControlPerVertexInputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationControlPerVertexOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationControlPerPatchOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationControlTotalOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationEvaluationInputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTessellationEvaluationOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryShaderInvocations));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryInputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryOutputVertices));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryTotalOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentInputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentOutputAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentDualSrcAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentCombinedOutputResources));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxComputeSharedMemorySize));
    wrapper->maxComputeWorkGroupCount.SetExternalMemory(value->maxComputeWorkGroupCount, 3);
    bytes_read += wrapper->maxComputeWorkGroupCount.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxComputeWorkGroupInvocations));
    wrapper->maxComputeWorkGroupSize.SetExternalMemory(value->maxComputeWorkGroupSize, 3);
    bytes_read += wrapper->maxComputeWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subPixelPrecisionBits));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subTexelPrecisionBits));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipmapPrecisionBits));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDrawIndexedIndexValue));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDrawIndirectCount));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSamplerLodBias));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSamplerAnisotropy));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxViewports));
    wrapper->maxViewportDimensions.SetExternalMemory(value->maxViewportDimensions, 2);
    bytes_read += wrapper->maxViewportDimensions.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->viewportBoundsRange.SetExternalMemory(value->viewportBoundsRange, 2);
    bytes_read += wrapper->viewportBoundsRange.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportSubPixelBits));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minMemoryMapAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minTexelBufferOffsetAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minUniformBufferOffsetAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minStorageBufferOffsetAlignment));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minTexelOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTexelOffset));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minTexelGatherOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTexelGatherOffset));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minInterpolationOffset));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInterpolationOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subPixelInterpolationOffsetBits));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFramebufferWidth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFramebufferHeight));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFramebufferLayers));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->framebufferColorSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->framebufferDepthSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->framebufferStencilSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->framebufferNoAttachmentsSampleCounts));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxColorAttachments));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampledImageColorSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampledImageIntegerSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampledImageDepthSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampledImageStencilSampleCounts));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageImageSampleCounts));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSampleMaskWords));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timestampComputeAndGraphics));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->timestampPeriod));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxClipDistances));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxCullDistances));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxCombinedClipAndCullDistances));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->discreteQueuePriorities));
    wrapper->pointSizeRange.SetExternalMemory(value->pointSizeRange, 2);
    bytes_read += wrapper->pointSizeRange.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->lineWidthRange.SetExternalMemory(value->lineWidthRange, 2);
    bytes_read += wrapper->lineWidthRange.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pointSizeGranularity));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineWidthGranularity));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->strictLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->standardSampleLocations));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->optimalBufferCopyOffsetAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->optimalBufferCopyRowPitchAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->nonCoherentAtomSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMemoryProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMemoryProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeCount));
    wrapper->memoryTypes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMemoryType>>();
    wrapper->memoryTypes->SetExternalMemory(value->memoryTypes, VK_MAX_MEMORY_TYPES);
    bytes_read += wrapper->memoryTypes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryHeapCount));
    wrapper->memoryHeaps = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMemoryHeap>>();
    wrapper->memoryHeaps->SetExternalMemory(value->memoryHeaps, VK_MAX_MEMORY_HEAPS);
    bytes_read += wrapper->memoryHeaps->Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSparseProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSparseProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->residencyStandard2DBlockShape));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->residencyStandard2DMultisampleBlockShape));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->residencyStandard3DBlockShape));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->residencyAlignedMipSize));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->residencyNonResidentStrict));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->apiVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->driverVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorID));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceID));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceType));
    wrapper->deviceName.SetExternalMemory(value->deviceName, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE);
    bytes_read += wrapper->deviceName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->pipelineCacheUUID.SetExternalMemory(value->pipelineCacheUUID, VK_UUID_SIZE);
    bytes_read += wrapper->pipelineCacheUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->limits = DecodeAllocator::Allocate<Decoded_VkPhysicalDeviceLimits>();
    wrapper->limits->decoded_value = &(value->limits);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->limits);
    wrapper->sparseProperties = DecodeAllocator::Allocate<Decoded_VkPhysicalDeviceSparseProperties>();
    wrapper->sparseProperties->decoded_value = &(value->sparseProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->sparseProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueueFamilyProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueueFamilyProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timestampValidBits));
    wrapper->minImageTransferGranularity = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->minImageTransferGranularity->decoded_value = &(value->minImageTransferGranularity);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minImageTransferGranularity);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceQueueCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceQueueCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueCount));
    bytes_read += wrapper->pQueuePriorities.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueuePriorities = wrapper->pQueuePriorities.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueCreateInfoCount));
    wrapper->pQueueCreateInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDeviceQueueCreateInfo>>();
    bytes_read += wrapper->pQueueCreateInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueCreateInfos = wrapper->pQueueCreateInfos->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enabledLayerCount));
    bytes_read += wrapper->ppEnabledLayerNames.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppEnabledLayerNames = wrapper->ppEnabledLayerNames.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enabledExtensionCount));
    bytes_read += wrapper->ppEnabledExtensionNames.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppEnabledExtensionNames = wrapper->ppEnabledExtensionNames.GetPointer();
    wrapper->pEnabledFeatures = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPhysicalDeviceFeatures>>();
    bytes_read += wrapper->pEnabledFeatures->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pEnabledFeatures = wrapper->pEnabledFeatures->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExtensionProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExtensionProperties* value = wrapper->decoded_value;

    wrapper->extensionName.SetExternalMemory(value->extensionName, VK_MAX_EXTENSION_NAME_SIZE);
    bytes_read += wrapper->extensionName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->specVersion));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkLayerProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkLayerProperties* value = wrapper->decoded_value;

    wrapper->layerName.SetExternalMemory(value->layerName, VK_MAX_EXTENSION_NAME_SIZE);
    bytes_read += wrapper->layerName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->specVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->implementationVersion));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreCount));
    bytes_read += wrapper->pWaitSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphores = nullptr;
    bytes_read += wrapper->pWaitDstStageMask.DecodeFlags((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitDstStageMask = wrapper->pWaitDstStageMask.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->commandBufferCount));
    bytes_read += wrapper->pCommandBuffers.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCommandBuffers = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreCount));
    bytes_read += wrapper->pSignalSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphores = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMappedMemoryRange* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMappedMemoryRange* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->allocationSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryRequirements* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryRequirements* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->alignment));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseMemoryBind* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseMemoryBind* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->resourceOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryOffset));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseBufferMemoryBindInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseBufferMemoryBindInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindCount));
    wrapper->pBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseMemoryBind>>();
    bytes_read += wrapper->pBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBinds = wrapper->pBinds->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageOpaqueMemoryBindInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageOpaqueMemoryBindInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindCount));
    wrapper->pBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseMemoryBind>>();
    bytes_read += wrapper->pBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBinds = wrapper->pBinds->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSubresource* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSubresource* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->arrayLayer));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageMemoryBind* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageMemoryBind* value = wrapper->decoded_value;

    wrapper->subresource = DecodeAllocator::Allocate<Decoded_VkImageSubresource>();
    wrapper->subresource->decoded_value = &(value->subresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->subresource);
    wrapper->offset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->offset->decoded_value = &(value->offset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->offset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryOffset));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageMemoryBindInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageMemoryBindInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindCount));
    wrapper->pBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseImageMemoryBind>>();
    bytes_read += wrapper->pBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBinds = wrapper->pBinds->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindSparseInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindSparseInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreCount));
    bytes_read += wrapper->pWaitSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphores = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferBindCount));
    wrapper->pBufferBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseBufferMemoryBindInfo>>();
    bytes_read += wrapper->pBufferBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBufferBinds = wrapper->pBufferBinds->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageOpaqueBindCount));
    wrapper->pImageOpaqueBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseImageOpaqueMemoryBindInfo>>();
    bytes_read += wrapper->pImageOpaqueBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pImageOpaqueBinds = wrapper->pImageOpaqueBinds->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageBindCount));
    wrapper->pImageBinds = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSparseImageMemoryBindInfo>>();
    bytes_read += wrapper->pImageBinds->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pImageBinds = wrapper->pImageBinds->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreCount));
    bytes_read += wrapper->pSignalSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphores = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageFormatProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageFormatProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));
    wrapper->imageGranularity = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->imageGranularity->decoded_value = &(value->imageGranularity);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageGranularity);
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageMemoryRequirements* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageMemoryRequirements* value = wrapper->decoded_value;

    wrapper->formatProperties = DecodeAllocator::Allocate<Decoded_VkSparseImageFormatProperties>();
    wrapper->formatProperties->decoded_value = &(value->formatProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->formatProperties);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageMipTailFirstLod));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageMipTailSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageMipTailOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageMipTailStride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFenceCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFenceCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkEventCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkEventCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueryPoolCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueryPoolCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->queryType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queryCount));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineStatistics));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sharingMode));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndexCount));
    bytes_read += wrapper->pQueueFamilyIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueFamilyIndices = wrapper->pQueueFamilyIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferViewCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferViewCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->range));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipLevels));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->arrayLayers));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->samples));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tiling));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sharingMode));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndexCount));
    bytes_read += wrapper->pQueueFamilyIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueFamilyIndices = wrapper->pQueueFamilyIndices.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubresourceLayout* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubresourceLayout* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rowPitch));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->arrayPitch));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthPitch));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkComponentMapping* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkComponentMapping* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->r));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->g));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->b));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->a));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    wrapper->components = DecodeAllocator::Allocate<Decoded_VkComponentMapping>();
    wrapper->components->decoded_value = &(value->components);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->components);
    wrapper->subresourceRange = DecodeAllocator::Allocate<Decoded_VkImageSubresourceRange>();
    wrapper->subresourceRange->decoded_value = &(value->subresourceRange);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->subresourceRange);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShaderModuleCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShaderModuleCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->codeSize));
    bytes_read += wrapper->pCode.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCode = wrapper->pCode.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCacheCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCacheCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialDataSize));
    bytes_read += wrapper->pInitialData.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInitialData = wrapper->pInitialData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSpecializationMapEntry* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSpecializationMapEntry* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->constantID));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSpecializationInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSpecializationInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mapEntryCount));
    wrapper->pMapEntries = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSpecializationMapEntry>>();
    bytes_read += wrapper->pMapEntries->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMapEntries = wrapper->pMapEntries->GetPointer();
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dataSize));
    bytes_read += wrapper->pData.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pData = wrapper->pData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineShaderStageCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineShaderStageCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stage));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->module));
    value->module = VK_NULL_HANDLE;
    bytes_read += wrapper->pName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pName = wrapper->pName.GetPointer();
    wrapper->pSpecializationInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSpecializationInfo>>();
    bytes_read += wrapper->pSpecializationInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSpecializationInfo = wrapper->pSpecializationInfo->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkComputePipelineCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkComputePipelineCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->stage = DecodeAllocator::Allocate<Decoded_VkPipelineShaderStageCreateInfo>();
    wrapper->stage->decoded_value = &(value->stage);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->stage);
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->layout));
    value->layout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->basePipelineHandle));
    value->basePipelineHandle = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->basePipelineIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkVertexInputBindingDescription* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkVertexInputBindingDescription* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->inputRate));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkVertexInputAttributeDescription* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkVertexInputAttributeDescription* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->location));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineVertexInputStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineVertexInputStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexBindingDescriptionCount));
    wrapper->pVertexBindingDescriptions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkVertexInputBindingDescription>>();
    bytes_read += wrapper->pVertexBindingDescriptions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVertexBindingDescriptions = wrapper->pVertexBindingDescriptions->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexAttributeDescriptionCount));
    wrapper->pVertexAttributeDescriptions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkVertexInputAttributeDescription>>();
    bytes_read += wrapper->pVertexAttributeDescriptions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVertexAttributeDescriptions = wrapper->pVertexAttributeDescriptions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineInputAssemblyStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineInputAssemblyStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->topology));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveRestartEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineTessellationStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineTessellationStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->patchControlPoints));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkViewport* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkViewport* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minDepth));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDepth));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportCount));
    wrapper->pViewports = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkViewport>>();
    bytes_read += wrapper->pViewports->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewports = wrapper->pViewports->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->scissorCount));
    wrapper->pScissors = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pScissors->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pScissors = wrapper->pScissors->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClampEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizerDiscardEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->polygonMode));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->cullMode));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->frontFace));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBiasEnable));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBiasConstantFactor));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBiasClamp));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBiasSlopeFactor));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineWidth));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineMultisampleStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineMultisampleStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationSamples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleShadingEnable));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSampleShading));
    bytes_read += wrapper->pSampleMask.DecodeVkSampleMask((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSampleMask = wrapper->pSampleMask.GetPointer();
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaToCoverageEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaToOneEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkStencilOpState* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkStencilOpState* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->failOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->passOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthFailOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compareOp));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->compareMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->writeMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->reference));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineDepthStencilStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineDepthStencilStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthTestEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthWriteEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthCompareOp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthBoundsTestEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilTestEnable));
    wrapper->front = DecodeAllocator::Allocate<Decoded_VkStencilOpState>();
    wrapper->front->decoded_value = &(value->front);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->front);
    wrapper->back = DecodeAllocator::Allocate<Decoded_VkStencilOpState>();
    wrapper->back->decoded_value = &(value->back);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->back);
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minDepthBounds));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDepthBounds));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineColorBlendAttachmentState* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineColorBlendAttachmentState* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->blendEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcColorBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstColorBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorBlendOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAlphaBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAlphaBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaBlendOp));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorWriteMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineColorBlendStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineColorBlendStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->logicOpEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->logicOp));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    wrapper->pAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineColorBlendAttachmentState>>();
    bytes_read += wrapper->pAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachments = wrapper->pAttachments->GetPointer();
    wrapper->blendConstants.SetExternalMemory(value->blendConstants, 4);
    bytes_read += wrapper->blendConstants.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineDynamicStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineDynamicStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dynamicStateCount));
    bytes_read += wrapper->pDynamicStates.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDynamicStates = wrapper->pDynamicStates.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGraphicsPipelineCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGraphicsPipelineCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageCount));
    wrapper->pStages = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>>();
    bytes_read += wrapper->pStages->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStages = wrapper->pStages->GetPointer();
    wrapper->pVertexInputState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineVertexInputStateCreateInfo>>();
    bytes_read += wrapper->pVertexInputState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVertexInputState = wrapper->pVertexInputState->GetPointer();
    wrapper->pInputAssemblyState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineInputAssemblyStateCreateInfo>>();
    bytes_read += wrapper->pInputAssemblyState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInputAssemblyState = wrapper->pInputAssemblyState->GetPointer();
    wrapper->pTessellationState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineTessellationStateCreateInfo>>();
    bytes_read += wrapper->pTessellationState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTessellationState = wrapper->pTessellationState->GetPointer();
    wrapper->pViewportState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineViewportStateCreateInfo>>();
    bytes_read += wrapper->pViewportState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewportState = wrapper->pViewportState->GetPointer();
    wrapper->pRasterizationState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineRasterizationStateCreateInfo>>();
    bytes_read += wrapper->pRasterizationState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRasterizationState = wrapper->pRasterizationState->GetPointer();
    wrapper->pMultisampleState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineMultisampleStateCreateInfo>>();
    bytes_read += wrapper->pMultisampleState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMultisampleState = wrapper->pMultisampleState->GetPointer();
    wrapper->pDepthStencilState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineDepthStencilStateCreateInfo>>();
    bytes_read += wrapper->pDepthStencilState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDepthStencilState = wrapper->pDepthStencilState->GetPointer();
    wrapper->pColorBlendState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineColorBlendStateCreateInfo>>();
    bytes_read += wrapper->pColorBlendState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorBlendState = wrapper->pColorBlendState->GetPointer();
    wrapper->pDynamicState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineDynamicStateCreateInfo>>();
    bytes_read += wrapper->pDynamicState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDynamicState = wrapper->pDynamicState->GetPointer();
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->layout));
    value->layout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->renderPass));
    value->renderPass = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpass));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->basePipelineHandle));
    value->basePipelineHandle = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->basePipelineIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPushConstantRange* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPushConstantRange* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineLayoutCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineLayoutCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->setLayoutCount));
    bytes_read += wrapper->pSetLayouts.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSetLayouts = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pushConstantRangeCount));
    wrapper->pPushConstantRanges = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPushConstantRange>>();
    bytes_read += wrapper->pPushConstantRanges->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPushConstantRanges = wrapper->pPushConstantRanges->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->magFilter));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minFilter));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipmapMode));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressModeU));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressModeV));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressModeW));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipLodBias));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->anisotropyEnable));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxAnisotropy));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->compareEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compareOp));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minLod));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxLod));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->borderColor));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->unnormalizedCoordinates));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyDescriptorSet* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyDescriptorSet* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcSet));
    value->srcSet = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcBinding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcArrayElement));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstSet));
    value->dstSet = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstBinding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstArrayElement));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorBufferInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorBufferInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->range));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorPoolSize* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorPoolSize* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorPoolCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorPoolCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSets));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->poolSizeCount));
    wrapper->pPoolSizes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDescriptorPoolSize>>();
    bytes_read += wrapper->pPoolSizes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPoolSizes = wrapper->pPoolSizes->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->descriptorPool));
    value->descriptorPool = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorSetCount));
    bytes_read += wrapper->pSetLayouts.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSetLayouts = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetLayoutBinding* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetLayoutBinding* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorCount));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageFlags));
    bytes_read += wrapper->pImmutableSamplers.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pImmutableSamplers = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetLayoutCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetLayoutCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindingCount));
    wrapper->pBindings = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDescriptorSetLayoutBinding>>();
    bytes_read += wrapper->pBindings->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBindings = wrapper->pBindings->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentDescription* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentDescription* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->samples));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->loadOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storeOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilLoadOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilStoreOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->finalLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentReference* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentReference* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachment));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->layout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFramebufferCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFramebufferCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->renderPass));
    value->renderPass = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    bytes_read += wrapper->pAttachments.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachments = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layers));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassDescription* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassDescription* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inputAttachmentCount));
    wrapper->pInputAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference>>();
    bytes_read += wrapper->pInputAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInputAttachments = wrapper->pInputAttachments->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    wrapper->pColorAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference>>();
    bytes_read += wrapper->pColorAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachments = wrapper->pColorAttachments->GetPointer();
    wrapper->pResolveAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference>>();
    bytes_read += wrapper->pResolveAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pResolveAttachments = wrapper->pResolveAttachments->GetPointer();
    wrapper->pDepthStencilAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference>>();
    bytes_read += wrapper->pDepthStencilAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDepthStencilAttachment = wrapper->pDepthStencilAttachment->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->preserveAttachmentCount));
    bytes_read += wrapper->pPreserveAttachments.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPreserveAttachments = wrapper->pPreserveAttachments.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassDependency* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassDependency* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcSubpass));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstSubpass));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcStageMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstStageMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyFlags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    wrapper->pAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentDescription>>();
    bytes_read += wrapper->pAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachments = wrapper->pAttachments->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassCount));
    wrapper->pSubpasses = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubpassDescription>>();
    bytes_read += wrapper->pSubpasses->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSubpasses = wrapper->pSubpasses->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyCount));
    wrapper->pDependencies = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubpassDependency>>();
    bytes_read += wrapper->pDependencies->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDependencies = wrapper->pDependencies->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandPoolCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandPoolCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->commandPool));
    value->commandPool = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->level));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->commandBufferCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferInheritanceInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferInheritanceInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->renderPass));
    value->renderPass = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpass));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->framebuffer));
    value->framebuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->occlusionQueryEnable));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->queryFlags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineStatistics));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->pInheritanceInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkCommandBufferInheritanceInfo>>();
    bytes_read += wrapper->pInheritanceInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInheritanceInfo = wrapper->pInheritanceInfo->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferCopy* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferCopy* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSubresourceLayers* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSubresourceLayers* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mipLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseArrayLayer));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layerCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferImageCopy* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferImageCopy* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferRowLength));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferImageHeight));
    wrapper->imageSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->imageSubresource->decoded_value = &(value->imageSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageSubresource);
    wrapper->imageOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->imageOffset->decoded_value = &(value->imageOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageOffset);
    wrapper->imageExtent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->imageExtent->decoded_value = &(value->imageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageExtent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkClearDepthStencilValue* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkClearDepthStencilValue* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencil));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkClearAttachment* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkClearAttachment* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachment));
    wrapper->clearValue = DecodeAllocator::Allocate<Decoded_VkClearValue>();
    wrapper->clearValue->decoded_value = &(value->clearValue);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->clearValue);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkClearRect* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkClearRect* value = wrapper->decoded_value;

    wrapper->rect = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->rect->decoded_value = &(value->rect);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->rect);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseArrayLayer));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layerCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageBlit* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageBlit* value = wrapper->decoded_value;

    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffsets = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkOffset3D>>();
    wrapper->srcOffsets->SetExternalMemory(value->srcOffsets, 2);
    bytes_read += wrapper->srcOffsets->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffsets = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkOffset3D>>();
    wrapper->dstOffsets->SetExternalMemory(value->dstOffsets, 2);
    bytes_read += wrapper->dstOffsets->Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageCopy* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageCopy* value = wrapper->decoded_value;

    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->srcOffset->decoded_value = &(value->srcOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcOffset);
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->dstOffset->decoded_value = &(value->dstOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstOffset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageResolve* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageResolve* value = wrapper->decoded_value;

    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->srcOffset->decoded_value = &(value->srcOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcOffset);
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->dstOffset->decoded_value = &(value->dstOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstOffset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->renderPass));
    value->renderPass = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->framebuffer));
    value->framebuffer = VK_NULL_HANDLE;
    wrapper->renderArea = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->renderArea->decoded_value = &(value->renderArea);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->renderArea);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->clearValueCount));
    wrapper->pClearValues = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkClearValue>>();
    bytes_read += wrapper->pClearValues->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pClearValues = wrapper->pClearValues->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSubgroupProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSubgroupProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSize));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedStages));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedOperations));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->quadOperationsInAllStages));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindBufferMemoryInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindBufferMemoryInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindImageMemoryInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindImageMemoryInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevice16BitStorageFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevice16BitStorageFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageBuffer16BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformAndStorageBuffer16BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storagePushConstant16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageInputOutput16));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryDedicatedRequirements* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryDedicatedRequirements* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->prefersDedicatedAllocation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->requiresDedicatedAllocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryDedicatedAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryDedicatedAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryAllocateFlagsInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryAllocateFlagsInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupRenderPassBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupRenderPassBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceRenderAreaCount));
    wrapper->pDeviceRenderAreas = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pDeviceRenderAreas->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDeviceRenderAreas = wrapper->pDeviceRenderAreas->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupCommandBufferBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupCommandBufferBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreCount));
    bytes_read += wrapper->pWaitSemaphoreDeviceIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphoreDeviceIndices = wrapper->pWaitSemaphoreDeviceIndices.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->commandBufferCount));
    bytes_read += wrapper->pCommandBufferDeviceMasks.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCommandBufferDeviceMasks = wrapper->pCommandBufferDeviceMasks.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreCount));
    bytes_read += wrapper->pSignalSemaphoreDeviceIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphoreDeviceIndices = wrapper->pSignalSemaphoreDeviceIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupBindSparseInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupBindSparseInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->resourceDeviceIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryDeviceIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindBufferMemoryDeviceGroupInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindBufferMemoryDeviceGroupInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceIndexCount));
    bytes_read += wrapper->pDeviceIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDeviceIndices = wrapper->pDeviceIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindImageMemoryDeviceGroupInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindImageMemoryDeviceGroupInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceIndexCount));
    bytes_read += wrapper->pDeviceIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDeviceIndices = wrapper->pDeviceIndices.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->splitInstanceBindRegionCount));
    wrapper->pSplitInstanceBindRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pSplitInstanceBindRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSplitInstanceBindRegions = wrapper->pSplitInstanceBindRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceGroupProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceGroupProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->physicalDeviceCount));
    wrapper->physicalDevices.SetExternalMemory(value->physicalDevices, VK_MAX_DEVICE_GROUP_SIZE);
    bytes_read += wrapper->physicalDevices.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subsetAllocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupDeviceCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupDeviceCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->physicalDeviceCount));
    bytes_read += wrapper->pPhysicalDevices.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPhysicalDevices = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferMemoryRequirementsInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferMemoryRequirementsInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageMemoryRequirementsInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageMemoryRequirementsInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSparseMemoryRequirementsInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSparseMemoryRequirementsInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryRequirements2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryRequirements2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->memoryRequirements = DecodeAllocator::Allocate<Decoded_VkMemoryRequirements>();
    wrapper->memoryRequirements->decoded_value = &(value->memoryRequirements);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->memoryRequirements);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageMemoryRequirements2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageMemoryRequirements2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->memoryRequirements = DecodeAllocator::Allocate<Decoded_VkSparseImageMemoryRequirements>();
    wrapper->memoryRequirements->decoded_value = &(value->memoryRequirements);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->memoryRequirements);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFeatures2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFeatures2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->features = DecodeAllocator::Allocate<Decoded_VkPhysicalDeviceFeatures>();
    wrapper->features->decoded_value = &(value->features);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->features);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->properties = DecodeAllocator::Allocate<Decoded_VkPhysicalDeviceProperties>();
    wrapper->properties->decoded_value = &(value->properties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->properties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFormatProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFormatProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->formatProperties = DecodeAllocator::Allocate<Decoded_VkFormatProperties>();
    wrapper->formatProperties->decoded_value = &(value->formatProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->formatProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageFormatProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageFormatProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->imageFormatProperties = DecodeAllocator::Allocate<Decoded_VkImageFormatProperties>();
    wrapper->imageFormatProperties->decoded_value = &(value->imageFormatProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageFormatProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageFormatInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageFormatInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tiling));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueueFamilyProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueueFamilyProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->queueFamilyProperties = DecodeAllocator::Allocate<Decoded_VkQueueFamilyProperties>();
    wrapper->queueFamilyProperties->decoded_value = &(value->queueFamilyProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->queueFamilyProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMemoryProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMemoryProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->memoryProperties = DecodeAllocator::Allocate<Decoded_VkPhysicalDeviceMemoryProperties>();
    wrapper->memoryProperties->decoded_value = &(value->memoryProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->memoryProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSparseImageFormatProperties2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSparseImageFormatProperties2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->properties = DecodeAllocator::Allocate<Decoded_VkSparseImageFormatProperties>();
    wrapper->properties->decoded_value = &(value->properties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->properties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSparseImageFormatInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSparseImageFormatInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->samples));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tiling));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePointClippingProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePointClippingProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pointClippingBehavior));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkInputAttachmentAspectReference* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkInputAttachmentAspectReference* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpass));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inputAttachmentIndex));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassInputAttachmentAspectCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassInputAttachmentAspectCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectReferenceCount));
    wrapper->pAspectReferences = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkInputAttachmentAspectReference>>();
    bytes_read += wrapper->pAspectReferences->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAspectReferences = wrapper->pAspectReferences->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewUsageCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewUsageCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineTessellationDomainOriginStateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineTessellationDomainOriginStateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->domainOrigin));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassMultiviewCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassMultiviewCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassCount));
    bytes_read += wrapper->pViewMasks.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewMasks = wrapper->pViewMasks.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyCount));
    bytes_read += wrapper->pViewOffsets.DecodeInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewOffsets = wrapper->pViewOffsets.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->correlationMaskCount));
    bytes_read += wrapper->pCorrelationMasks.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCorrelationMasks = wrapper->pCorrelationMasks.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultiviewFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultiviewFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiview));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiviewGeometryShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiviewTessellationShader));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultiviewProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultiviewProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMultiviewViewCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMultiviewInstanceIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVariablePointersFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVariablePointersFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variablePointersStorageBuffer));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variablePointers));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProtectedMemoryFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProtectedMemoryFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->protectedMemory));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProtectedMemoryProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProtectedMemoryProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->protectedNoFault));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceQueueInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceQueueInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkProtectedSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkProtectedSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->protectedSubmit));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerYcbcrConversionCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerYcbcrConversionCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->ycbcrModel));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->ycbcrRange));
    wrapper->components = DecodeAllocator::Allocate<Decoded_VkComponentMapping>();
    wrapper->components->decoded_value = &(value->components);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->components);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->xChromaOffset));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->yChromaOffset));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->chromaFilter));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->forceExplicitReconstruction));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerYcbcrConversionInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerYcbcrConversionInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->conversion));
    value->conversion = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindImagePlaneMemoryInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindImagePlaneMemoryInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeAspect));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImagePlaneMemoryRequirementsInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImagePlaneMemoryRequirementsInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeAspect));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSamplerYcbcrConversionFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSamplerYcbcrConversionFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerYcbcrConversion));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerYcbcrConversionImageFormatProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerYcbcrConversionImageFormatProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->combinedImageSamplerDescriptorCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorUpdateTemplateEntry* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorUpdateTemplateEntry* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstBinding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstArrayElement));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorCount));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorType));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorUpdateTemplateCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorUpdateTemplateCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorUpdateEntryCount));
    wrapper->pDescriptorUpdateEntries = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDescriptorUpdateTemplateEntry>>();
    bytes_read += wrapper->pDescriptorUpdateEntries->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDescriptorUpdateEntries = wrapper->pDescriptorUpdateEntries->GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->templateType));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->descriptorSetLayout));
    value->descriptorSetLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pipelineLayout));
    value->pipelineLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->set));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalMemoryProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalMemoryProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalMemoryFeatures));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->exportFromImportedHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compatibleHandleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalImageFormatInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalImageFormatInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalImageFormatProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalImageFormatProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->externalMemoryProperties = DecodeAllocator::Allocate<Decoded_VkExternalMemoryProperties>();
    wrapper->externalMemoryProperties->decoded_value = &(value->externalMemoryProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->externalMemoryProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalBufferInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalBufferInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalBufferProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalBufferProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->externalMemoryProperties = DecodeAllocator::Allocate<Decoded_VkExternalMemoryProperties>();
    wrapper->externalMemoryProperties->decoded_value = &(value->externalMemoryProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->externalMemoryProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceIDProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceIDProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->deviceUUID.SetExternalMemory(value->deviceUUID, VK_UUID_SIZE);
    bytes_read += wrapper->deviceUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->driverUUID.SetExternalMemory(value->driverUUID, VK_UUID_SIZE);
    bytes_read += wrapper->driverUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->deviceLUID.SetExternalMemory(value->deviceLUID, VK_LUID_SIZE);
    bytes_read += wrapper->deviceLUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceNodeMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceLUIDValid));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalMemoryImageCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalMemoryImageCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalMemoryBufferCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalMemoryBufferCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportMemoryAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportMemoryAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalFenceInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalFenceInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalFenceProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalFenceProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->exportFromImportedHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compatibleHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalFenceFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportFenceCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportFenceCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportSemaphoreCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportSemaphoreCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalSemaphoreInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalSemaphoreInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalSemaphoreProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalSemaphoreProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->exportFromImportedHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compatibleHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalSemaphoreFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMaintenance3Properties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMaintenance3Properties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerSetDescriptors));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMemoryAllocationSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetLayoutSupport* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetLayoutSupport* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->supported));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderDrawParametersFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderDrawParametersFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDrawParameters));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan11Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan11Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageBuffer16BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformAndStorageBuffer16BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storagePushConstant16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageInputOutput16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiview));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiviewGeometryShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiviewTessellationShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variablePointersStorageBuffer));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variablePointers));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->protectedMemory));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerYcbcrConversion));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDrawParameters));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan11Properties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan11Properties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->deviceUUID.SetExternalMemory(value->deviceUUID, VK_UUID_SIZE);
    bytes_read += wrapper->deviceUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->driverUUID.SetExternalMemory(value->driverUUID, VK_UUID_SIZE);
    bytes_read += wrapper->driverUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->deviceLUID.SetExternalMemory(value->deviceLUID, VK_LUID_SIZE);
    bytes_read += wrapper->deviceLUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceNodeMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceLUIDValid));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSize));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSupportedStages));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSupportedOperations));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupQuadOperationsInAllStages));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pointClippingBehavior));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMultiviewViewCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMultiviewInstanceIndex));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->protectedNoFault));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerSetDescriptors));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMemoryAllocationSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan12Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan12Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerMirrorClampToEdge));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drawIndirectCount));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageBuffer8BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformAndStorageBuffer8BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storagePushConstant8));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferInt64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedInt64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInt8));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformTexelBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageTexelBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampledImageArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformTexelBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageTexelBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUniformBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingSampledImageUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageImageUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUniformTexelBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageTexelBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUpdateUnusedWhilePending));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingPartiallyBound));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingVariableDescriptorCount));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->runtimeDescriptorArray));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerFilterMinmax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->scalarBlockLayout));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imagelessFramebuffer));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformBufferStandardLayout));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSubgroupExtendedTypes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->separateDepthStencilLayouts));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->hostQueryReset));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timelineSemaphore));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddress));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressMultiDevice));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModel));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModelDeviceScope));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModelAvailabilityVisibilityChains));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderOutputViewportIndex));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderOutputLayer));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupBroadcastDynamicId));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkConformanceVersion* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkConformanceVersion* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt8Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->major));
    bytes_read += ValueDecoder::DecodeUInt8Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minor));
    bytes_read += ValueDecoder::DecodeUInt8Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subminor));
    bytes_read += ValueDecoder::DecodeUInt8Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->patch));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan12Properties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan12Properties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->driverID));
    wrapper->driverName.SetExternalMemory(value->driverName, VK_MAX_DRIVER_NAME_SIZE);
    bytes_read += wrapper->driverName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->driverInfo.SetExternalMemory(value->driverInfo, VK_MAX_DRIVER_INFO_SIZE);
    bytes_read += wrapper->driverInfo.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->conformanceVersion = DecodeAllocator::Allocate<Decoded_VkConformanceVersion>();
    wrapper->conformanceVersion->decoded_value = &(value->conformanceVersion);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->conformanceVersion);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->denormBehaviorIndependence));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->roundingModeIndependence));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat64));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxUpdateAfterBindDescriptorsInAllPools));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformBufferArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampledImageArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageBufferArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustBufferAccessUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->quadDivergentImplicitLod));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindInputAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageUpdateAfterBindResources));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindInputAttachments));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedDepthResolveModes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedStencilResolveModes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->independentResolveNone));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->independentResolve));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterMinmaxSingleComponentFormats));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterMinmaxImageComponentMapping));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTimelineSemaphoreValueDifference));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->framebufferIntegerColorSampleCounts));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageFormatListCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageFormatListCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewFormatCount));
    bytes_read += wrapper->pViewFormats.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewFormats = wrapper->pViewFormats.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentDescription2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentDescription2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->samples));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->loadOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storeOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilLoadOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilStoreOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->finalLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentReference2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentReference2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachment));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->layout));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->aspectMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassDescription2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassDescription2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inputAttachmentCount));
    wrapper->pInputAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pInputAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInputAttachments = wrapper->pInputAttachments->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    wrapper->pColorAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pColorAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachments = wrapper->pColorAttachments->GetPointer();
    wrapper->pResolveAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pResolveAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pResolveAttachments = wrapper->pResolveAttachments->GetPointer();
    wrapper->pDepthStencilAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pDepthStencilAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDepthStencilAttachment = wrapper->pDepthStencilAttachment->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->preserveAttachmentCount));
    bytes_read += wrapper->pPreserveAttachments.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPreserveAttachments = wrapper->pPreserveAttachments.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassDependency2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassDependency2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcSubpass));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstSubpass));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcStageMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstStageMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyFlags));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassCreateInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassCreateInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    wrapper->pAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentDescription2>>();
    bytes_read += wrapper->pAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachments = wrapper->pAttachments->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassCount));
    wrapper->pSubpasses = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubpassDescription2>>();
    bytes_read += wrapper->pSubpasses->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSubpasses = wrapper->pSubpasses->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyCount));
    wrapper->pDependencies = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubpassDependency2>>();
    bytes_read += wrapper->pDependencies->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDependencies = wrapper->pDependencies->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->correlatedViewMaskCount));
    bytes_read += wrapper->pCorrelatedViewMasks.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCorrelatedViewMasks = wrapper->pCorrelatedViewMasks.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->contents));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassEndInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassEndInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevice8BitStorageFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevice8BitStorageFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageBuffer8BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformAndStorageBuffer8BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storagePushConstant8));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDriverProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDriverProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->driverID));
    wrapper->driverName.SetExternalMemory(value->driverName, VK_MAX_DRIVER_NAME_SIZE);
    bytes_read += wrapper->driverName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->driverInfo.SetExternalMemory(value->driverInfo, VK_MAX_DRIVER_INFO_SIZE);
    bytes_read += wrapper->driverInfo.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->conformanceVersion = DecodeAllocator::Allocate<Decoded_VkConformanceVersion>();
    wrapper->conformanceVersion->decoded_value = &(value->conformanceVersion);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->conformanceVersion);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderAtomicInt64Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderAtomicInt64Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferInt64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedInt64Atomics));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderFloat16Int8Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderFloat16Int8Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInt8));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFloatControlsProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFloatControlsProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->denormBehaviorIndependence));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->roundingModeIndependence));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSignedZeroInfNanPreserveFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormPreserveFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDenormFlushToZeroFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTEFloat64));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat16));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat32));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderRoundingModeRTZFloat64));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetLayoutBindingFlagsCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetLayoutBindingFlagsCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindingCount));
    bytes_read += wrapper->pBindingFlags.DecodeFlags((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBindingFlags = wrapper->pBindingFlags.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDescriptorIndexingFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDescriptorIndexingFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformTexelBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageTexelBufferArrayDynamicIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampledImageArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformTexelBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageTexelBufferArrayNonUniformIndexing));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUniformBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingSampledImageUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageImageUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUniformTexelBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingStorageTexelBufferUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingUpdateUnusedWhilePending));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingPartiallyBound));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingVariableDescriptorCount));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->runtimeDescriptorArray));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDescriptorIndexingProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDescriptorIndexingProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxUpdateAfterBindDescriptorsInAllPools));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderUniformBufferArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampledImageArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageBufferArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStorageImageArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderInputAttachmentArrayNonUniformIndexingNative));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustBufferAccessUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->quadDivergentImplicitLod));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindInputAttachments));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageUpdateAfterBindResources));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindSamplers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindUniformBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindUniformBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageBuffers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageBuffersDynamic));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindSampledImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindStorageImages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindInputAttachments));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetVariableDescriptorCountAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetVariableDescriptorCountAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorSetCount));
    bytes_read += wrapper->pDescriptorCounts.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDescriptorCounts = wrapper->pDescriptorCounts.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetVariableDescriptorCountLayoutSupport* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetVariableDescriptorCountLayoutSupport* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVariableDescriptorCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassDescriptionDepthStencilResolve* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassDescriptionDepthStencilResolve* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthResolveMode));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilResolveMode));
    wrapper->pDepthStencilResolveAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pDepthStencilResolveAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDepthStencilResolveAttachment = wrapper->pDepthStencilResolveAttachment->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDepthStencilResolveProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDepthStencilResolveProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedDepthResolveModes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedStencilResolveModes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->independentResolveNone));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->independentResolve));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceScalarBlockLayoutFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceScalarBlockLayoutFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->scalarBlockLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageStencilUsageCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageStencilUsageCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilUsage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerReductionModeCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerReductionModeCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->reductionMode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSamplerFilterMinmaxProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSamplerFilterMinmaxProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterMinmaxSingleComponentFormats));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterMinmaxImageComponentMapping));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkanMemoryModelFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkanMemoryModelFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModel));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModelDeviceScope));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vulkanMemoryModelAvailabilityVisibilityChains));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImagelessFramebufferFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImagelessFramebufferFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imagelessFramebuffer));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFramebufferAttachmentImageInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFramebufferAttachmentImageInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layerCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewFormatCount));
    bytes_read += wrapper->pViewFormats.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewFormats = wrapper->pViewFormats.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFramebufferAttachmentsCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFramebufferAttachmentsCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentImageInfoCount));
    wrapper->pAttachmentImageInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkFramebufferAttachmentImageInfo>>();
    bytes_read += wrapper->pAttachmentImageInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachmentImageInfos = wrapper->pAttachmentImageInfos->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassAttachmentBeginInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassAttachmentBeginInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    bytes_read += wrapper->pAttachments.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachments = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceUniformBufferStandardLayoutFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceUniformBufferStandardLayoutFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformBufferStandardLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSubgroupExtendedTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->separateDepthStencilLayouts));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentReferenceStencilLayout* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentReferenceStencilLayout* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentDescriptionStencilLayout* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentDescriptionStencilLayout* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilInitialLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilFinalLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceHostQueryResetFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceHostQueryResetFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->hostQueryReset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTimelineSemaphoreFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTimelineSemaphoreFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timelineSemaphore));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTimelineSemaphoreProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTimelineSemaphoreProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTimelineSemaphoreValueDifference));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreTypeCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreTypeCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->semaphoreType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialValue));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTimelineSemaphoreSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTimelineSemaphoreSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreValueCount));
    bytes_read += wrapper->pWaitSemaphoreValues.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphoreValues = wrapper->pWaitSemaphoreValues.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreValueCount));
    bytes_read += wrapper->pSignalSemaphoreValues.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphoreValues = wrapper->pSignalSemaphoreValues.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreWaitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreWaitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->semaphoreCount));
    bytes_read += wrapper->pSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSemaphores = nullptr;
    bytes_read += wrapper->pValues.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pValues = wrapper->pValues.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreSignalInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreSignalInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->value));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceBufferDeviceAddressFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceBufferDeviceAddressFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddress));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressMultiDevice));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferDeviceAddressInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferDeviceAddressInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferOpaqueCaptureAddressCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferOpaqueCaptureAddressCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->opaqueCaptureAddress));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryOpaqueCaptureAddressAllocateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryOpaqueCaptureAddressAllocateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->opaqueCaptureAddress));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceMemoryOpaqueCaptureAddressInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceMemoryOpaqueCaptureAddressInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan13Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan13Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustImageAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inlineUniformBlock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingInlineUniformBlockUpdateAfterBind));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineCreationCacheControl));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->privateData));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDemoteToHelperInvocation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderTerminateInvocation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSizeControl));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->computeFullSubgroups));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->synchronization2));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureCompressionASTC_HDR));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderZeroInitializeWorkgroupMemory));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dynamicRendering));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderIntegerDotProduct));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maintenance4));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVulkan13Properties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVulkan13Properties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSubgroupSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSubgroupSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxComputeWorkgroupSubgroups));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->requiredSubgroupSizeStages));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInlineUniformBlockSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInlineUniformTotalSize));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageTexelBufferOffsetAlignmentBytes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageTexelBufferOffsetSingleTexelAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformTexelBufferOffsetAlignmentBytes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformTexelBufferOffsetSingleTexelAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxBufferSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCreationFeedback* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCreationFeedback* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->duration));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCreationFeedbackCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCreationFeedbackCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pPipelineCreationFeedback = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineCreationFeedback>>();
    bytes_read += wrapper->pPipelineCreationFeedback->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPipelineCreationFeedback = wrapper->pPipelineCreationFeedback->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineStageCreationFeedbackCount));
    wrapper->pPipelineStageCreationFeedbacks = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineCreationFeedback>>();
    bytes_read += wrapper->pPipelineStageCreationFeedbacks->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPipelineStageCreationFeedbacks = wrapper->pPipelineStageCreationFeedbacks->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderTerminateInvocationFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderTerminateInvocationFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderTerminateInvocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceToolProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceToolProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->name.SetExternalMemory(value->name, VK_MAX_EXTENSION_NAME_SIZE);
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->version.SetExternalMemory(value->version, VK_MAX_EXTENSION_NAME_SIZE);
    bytes_read += wrapper->version.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->purposes));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->layer.SetExternalMemory(value->layer, VK_MAX_EXTENSION_NAME_SIZE);
    bytes_read += wrapper->layer.Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDemoteToHelperInvocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePrivateDataFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePrivateDataFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->privateData));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDevicePrivateDataCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDevicePrivateDataCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->privateDataSlotRequestCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPrivateDataSlotCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPrivateDataSlotCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePipelineCreationCacheControlFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePipelineCreationCacheControlFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineCreationCacheControl));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryBarrier2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryBarrier2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferMemoryBarrier2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferMemoryBarrier2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageMemoryBarrier2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageMemoryBarrier2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAccessMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstStageMask));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAccessMask));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->oldLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->newLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstQueueFamilyIndex));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    wrapper->subresourceRange = DecodeAllocator::Allocate<Decoded_VkImageSubresourceRange>();
    wrapper->subresourceRange->decoded_value = &(value->subresourceRange);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->subresourceRange);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDependencyInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDependencyInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dependencyFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryBarrierCount));
    wrapper->pMemoryBarriers = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMemoryBarrier2>>();
    bytes_read += wrapper->pMemoryBarriers->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMemoryBarriers = wrapper->pMemoryBarriers->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferMemoryBarrierCount));
    wrapper->pBufferMemoryBarriers = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkBufferMemoryBarrier2>>();
    bytes_read += wrapper->pBufferMemoryBarriers->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pBufferMemoryBarriers = wrapper->pBufferMemoryBarriers->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageMemoryBarrierCount));
    wrapper->pImageMemoryBarriers = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkImageMemoryBarrier2>>();
    bytes_read += wrapper->pImageMemoryBarriers->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pImageMemoryBarriers = wrapper->pImageMemoryBarriers->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->value));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferSubmitInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferSubmitInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->commandBuffer));
    value->commandBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubmitInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubmitInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreInfoCount));
    wrapper->pWaitSemaphoreInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSemaphoreSubmitInfo>>();
    bytes_read += wrapper->pWaitSemaphoreInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphoreInfos = wrapper->pWaitSemaphoreInfos->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->commandBufferInfoCount));
    wrapper->pCommandBufferInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkCommandBufferSubmitInfo>>();
    bytes_read += wrapper->pCommandBufferInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCommandBufferInfos = wrapper->pCommandBufferInfos->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreInfoCount));
    wrapper->pSignalSemaphoreInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSemaphoreSubmitInfo>>();
    bytes_read += wrapper->pSignalSemaphoreInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphoreInfos = wrapper->pSignalSemaphoreInfos->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSynchronization2Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSynchronization2Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->synchronization2));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderZeroInitializeWorkgroupMemory));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageRobustnessFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageRobustnessFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustImageAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferCopy2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferCopy2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyBufferInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyBufferInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcBuffer));
    value->srcBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstBuffer));
    value->dstBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkBufferCopy2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageCopy2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageCopy2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->srcOffset->decoded_value = &(value->srcOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcOffset);
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->dstOffset->decoded_value = &(value->dstOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstOffset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyImageInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyImageInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcImage));
    value->srcImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcImageLayout));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstImage));
    value->dstImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstImageLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkImageCopy2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferImageCopy2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferImageCopy2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferRowLength));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferImageHeight));
    wrapper->imageSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->imageSubresource->decoded_value = &(value->imageSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageSubresource);
    wrapper->imageOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->imageOffset->decoded_value = &(value->imageOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageOffset);
    wrapper->imageExtent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->imageExtent->decoded_value = &(value->imageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageExtent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyBufferToImageInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyBufferToImageInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcBuffer));
    value->srcBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstImage));
    value->dstImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstImageLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkBufferImageCopy2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyImageToBufferInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyImageToBufferInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcImage));
    value->srcImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcImageLayout));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstBuffer));
    value->dstBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkBufferImageCopy2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageBlit2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageBlit2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffsets = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkOffset3D>>();
    wrapper->srcOffsets->SetExternalMemory(value->srcOffsets, 2);
    bytes_read += wrapper->srcOffsets->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffsets = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkOffset3D>>();
    wrapper->dstOffsets->SetExternalMemory(value->dstOffsets, 2);
    bytes_read += wrapper->dstOffsets->Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBlitImageInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBlitImageInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcImage));
    value->srcImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcImageLayout));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstImage));
    value->dstImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstImageLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkImageBlit2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->filter));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageResolve2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageResolve2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->srcSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->srcSubresource->decoded_value = &(value->srcSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcSubresource);
    wrapper->srcOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->srcOffset->decoded_value = &(value->srcOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcOffset);
    wrapper->dstSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresourceLayers>();
    wrapper->dstSubresource->decoded_value = &(value->dstSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstSubresource);
    wrapper->dstOffset = DecodeAllocator::Allocate<Decoded_VkOffset3D>();
    wrapper->dstOffset->decoded_value = &(value->dstOffset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstOffset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkResolveImageInfo2* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkResolveImageInfo2* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcImage));
    value->srcImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcImageLayout));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstImage));
    value->dstImage = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstImageLayout));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkImageResolve2>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSubgroupSizeControlFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSubgroupSizeControlFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSizeControl));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->computeFullSubgroups));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSubgroupSizeControlProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSubgroupSizeControlProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSubgroupSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSubgroupSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxComputeWorkgroupSubgroups));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->requiredSubgroupSizeStages));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineShaderStageRequiredSubgroupSizeCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->requiredSubgroupSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceInlineUniformBlockFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceInlineUniformBlockFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inlineUniformBlock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingInlineUniformBlockUpdateAfterBind));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceInlineUniformBlockProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceInlineUniformBlockProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInlineUniformBlockSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetInlineUniformBlocks));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindInlineUniformBlocks));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWriteDescriptorSetInlineUniformBlock* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWriteDescriptorSetInlineUniformBlock* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dataSize));
    bytes_read += wrapper->pData.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pData = wrapper->pData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorPoolInlineUniformBlockCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorPoolInlineUniformBlockCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInlineUniformBlockBindings));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTextureCompressionASTCHDRFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTextureCompressionASTCHDRFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureCompressionASTC_HDR));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderingAttachmentInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderingAttachmentInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->imageView));
    value->imageView = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->resolveMode));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->resolveImageView));
    value->resolveImageView = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->resolveImageLayout));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->loadOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storeOp));
    wrapper->clearValue = DecodeAllocator::Allocate<Decoded_VkClearValue>();
    wrapper->clearValue->decoded_value = &(value->clearValue);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->clearValue);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderingInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderingInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->renderArea = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->renderArea->decoded_value = &(value->renderArea);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->renderArea);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layerCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    wrapper->pColorAttachments = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRenderingAttachmentInfo>>();
    bytes_read += wrapper->pColorAttachments->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachments = wrapper->pColorAttachments->GetPointer();
    wrapper->pDepthAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRenderingAttachmentInfo>>();
    bytes_read += wrapper->pDepthAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDepthAttachment = wrapper->pDepthAttachment->GetPointer();
    wrapper->pStencilAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRenderingAttachmentInfo>>();
    bytes_read += wrapper->pStencilAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStencilAttachment = wrapper->pStencilAttachment->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRenderingCreateInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRenderingCreateInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    bytes_read += wrapper->pColorAttachmentFormats.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachmentFormats = wrapper->pColorAttachmentFormats.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthAttachmentFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilAttachmentFormat));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDynamicRenderingFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDynamicRenderingFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dynamicRendering));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferInheritanceRenderingInfo* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferInheritanceRenderingInfo* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewMask));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    bytes_read += wrapper->pColorAttachmentFormats.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachmentFormats = wrapper->pColorAttachmentFormats.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthAttachmentFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stencilAttachmentFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationSamples));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderIntegerDotProductFeatures* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderIntegerDotProductFeatures* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderIntegerDotProduct));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderIntegerDotProductProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderIntegerDotProductProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct8BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct4x8BitPackedMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct16BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct32BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProduct64BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitUnsignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitSignedAccelerated));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTexelBufferAlignmentProperties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTexelBufferAlignmentProperties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageTexelBufferOffsetAlignmentBytes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageTexelBufferOffsetSingleTexelAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformTexelBufferOffsetAlignmentBytes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformTexelBufferOffsetSingleTexelAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFormatProperties3* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFormatProperties3* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->linearTilingFeatures));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->optimalTilingFeatures));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMaintenance4Features* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMaintenance4Features* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maintenance4));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMaintenance4Properties* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMaintenance4Properties* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxBufferSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceBufferMemoryRequirements* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceBufferMemoryRequirements* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pCreateInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkBufferCreateInfo>>();
    bytes_read += wrapper->pCreateInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCreateInfo = wrapper->pCreateInfo->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceImageMemoryRequirements* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceImageMemoryRequirements* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pCreateInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkImageCreateInfo>>();
    bytes_read += wrapper->pCreateInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCreateInfo = wrapper->pCreateInfo->GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeAspect));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceCapabilitiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceCapabilitiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minImageCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageCount));
    wrapper->currentExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->currentExtent->decoded_value = &(value->currentExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->currentExtent);
    wrapper->minImageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minImageExtent->decoded_value = &(value->minImageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minImageExtent);
    wrapper->maxImageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxImageExtent->decoded_value = &(value->maxImageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxImageExtent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageArrayLayers));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedTransforms));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->currentTransform));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedCompositeAlpha));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedUsageFlags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceFormatKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceFormatKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorSpace));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSwapchainCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSwapchainCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->surface));
    value->surface = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minImageCount));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageColorSpace));
    wrapper->imageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->imageExtent->decoded_value = &(value->imageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageExtent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageArrayLayers));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageUsage));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageSharingMode));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndexCount));
    bytes_read += wrapper->pQueueFamilyIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueFamilyIndices = wrapper->pQueueFamilyIndices.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->preTransform));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compositeAlpha));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->clipped));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->oldSwapchain));
    value->oldSwapchain = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreCount));
    bytes_read += wrapper->pWaitSemaphores.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphores = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapchainCount));
    bytes_read += wrapper->pSwapchains.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSwapchains = nullptr;
    bytes_read += wrapper->pImageIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pImageIndices = wrapper->pImageIndices.GetPointer();
    bytes_read += wrapper->pResults.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pResults = wrapper->pResults.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSwapchainCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSwapchainCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->swapchain));
    value->swapchain = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindImageMemorySwapchainInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindImageMemorySwapchainInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->swapchain));
    value->swapchain = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAcquireNextImageInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAcquireNextImageInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->swapchain));
    value->swapchain = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timeout));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->fence));
    value->fence = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupPresentCapabilitiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupPresentCapabilitiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->presentMask.SetExternalMemory(value->presentMask, VK_MAX_DEVICE_GROUP_SIZE);
    bytes_read += wrapper->presentMask.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->modes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupPresentInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupPresentInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapchainCount));
    bytes_read += wrapper->pDeviceMasks.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDeviceMasks = wrapper->pDeviceMasks.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceGroupSwapchainCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceGroupSwapchainCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->modes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayModeParametersKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayModeParametersKHR* value = wrapper->decoded_value;

    wrapper->visibleRegion = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->visibleRegion->decoded_value = &(value->visibleRegion);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->visibleRegion);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->refreshRate));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayModeCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayModeCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->parameters = DecodeAllocator::Allocate<Decoded_VkDisplayModeParametersKHR>();
    wrapper->parameters->decoded_value = &(value->parameters);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->parameters);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayModePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayModePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->displayMode));
    value->displayMode = VK_NULL_HANDLE;
    wrapper->parameters = DecodeAllocator::Allocate<Decoded_VkDisplayModeParametersKHR>();
    wrapper->parameters->decoded_value = &(value->parameters);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->parameters);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPlaneCapabilitiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPlaneCapabilitiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedAlpha));
    wrapper->minSrcPosition = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->minSrcPosition->decoded_value = &(value->minSrcPosition);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minSrcPosition);
    wrapper->maxSrcPosition = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->maxSrcPosition->decoded_value = &(value->maxSrcPosition);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxSrcPosition);
    wrapper->minSrcExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minSrcExtent->decoded_value = &(value->minSrcExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minSrcExtent);
    wrapper->maxSrcExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxSrcExtent->decoded_value = &(value->maxSrcExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxSrcExtent);
    wrapper->minDstPosition = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->minDstPosition->decoded_value = &(value->minDstPosition);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minDstPosition);
    wrapper->maxDstPosition = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->maxDstPosition->decoded_value = &(value->maxDstPosition);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxDstPosition);
    wrapper->minDstExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minDstExtent->decoded_value = &(value->minDstExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minDstExtent);
    wrapper->maxDstExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxDstExtent->decoded_value = &(value->maxDstExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxDstExtent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPlanePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPlanePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->currentDisplay));
    value->currentDisplay = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->currentStackIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->display));
    value->display = VK_NULL_HANDLE;
    bytes_read += wrapper->displayName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->displayName = wrapper->displayName.GetPointer();
    wrapper->physicalDimensions = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->physicalDimensions->decoded_value = &(value->physicalDimensions);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->physicalDimensions);
    wrapper->physicalResolution = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->physicalResolution->decoded_value = &(value->physicalResolution);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->physicalResolution);
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedTransforms));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeReorderPossible));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->persistentContent));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplaySurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplaySurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->displayMode));
    value->displayMode = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeStackIndex));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->transform));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->globalAlpha));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaMode));
    wrapper->imageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->imageExtent->decoded_value = &(value->imageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageExtent);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPresentInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPresentInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->srcRect = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->srcRect->decoded_value = &(value->srcRect);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->srcRect);
    wrapper->dstRect = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->dstRect->decoded_value = &(value->dstRect);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dstRect);
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->persistent));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkXlibSurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkXlibSurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dpy));
    value->dpy = nullptr;
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->window));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkXcbSurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkXcbSurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->connection));
    value->connection = nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->window));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWaylandSurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWaylandSurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->display));
    value->display = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->surface));
    value->surface = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAndroidSurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAndroidSurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->window));
    value->window = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWin32SurfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWin32SurfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->hinstance));
    value->hinstance = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->hwnd));
    value->hwnd = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderingFragmentShadingRateAttachmentInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderingFragmentShadingRateAttachmentInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->imageView));
    value->imageView = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageLayout));
    wrapper->shadingRateAttachmentTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->shadingRateAttachmentTexelSize->decoded_value = &(value->shadingRateAttachmentTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->shadingRateAttachmentTexelSize);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderingFragmentDensityMapAttachmentInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderingFragmentDensityMapAttachmentInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->imageView));
    value->imageView = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentSampleCountInfoAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentSampleCountInfoAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorAttachmentCount));
    bytes_read += wrapper->pColorAttachmentSamples.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorAttachmentSamples = wrapper->pColorAttachmentSamples.GetPointer();
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthStencilAttachmentSamples));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMultiviewPerViewAttributesInfoNVX* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMultiviewPerViewAttributesInfoNVX* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->perViewAttributes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->perViewAttributesPositionXOnly));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportMemoryWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportMemoryWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->handle));
    value->handle = nullptr;
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportMemoryWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportMemoryWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pAttributes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>>();
    bytes_read += wrapper->pAttributes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttributes = wrapper->pAttributes->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dwAccess));
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryWin32HandlePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryWin32HandlePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryGetWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryGetWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportMemoryFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportMemoryFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fd));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryFdPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryFdPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryGetFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryGetFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWin32KeyedMutexAcquireReleaseInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWin32KeyedMutexAcquireReleaseInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->acquireCount));
    bytes_read += wrapper->pAcquireSyncs.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireSyncs = nullptr;
    bytes_read += wrapper->pAcquireKeys.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireKeys = wrapper->pAcquireKeys.GetPointer();
    bytes_read += wrapper->pAcquireTimeouts.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireTimeouts = wrapper->pAcquireTimeouts.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->releaseCount));
    bytes_read += wrapper->pReleaseSyncs.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pReleaseSyncs = nullptr;
    bytes_read += wrapper->pReleaseKeys.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pReleaseKeys = wrapper->pReleaseKeys.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportSemaphoreWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportSemaphoreWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->handle));
    value->handle = nullptr;
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportSemaphoreWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportSemaphoreWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pAttributes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>>();
    bytes_read += wrapper->pAttributes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttributes = wrapper->pAttributes->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dwAccess));
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkD3D12FenceSubmitInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkD3D12FenceSubmitInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->waitSemaphoreValuesCount));
    bytes_read += wrapper->pWaitSemaphoreValues.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pWaitSemaphoreValues = wrapper->pWaitSemaphoreValues.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->signalSemaphoreValuesCount));
    bytes_read += wrapper->pSignalSemaphoreValues.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSignalSemaphoreValues = wrapper->pSignalSemaphoreValues.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreGetWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreGetWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportSemaphoreFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportSemaphoreFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fd));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreGetFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreGetFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePushDescriptorPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePushDescriptorPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPushDescriptors));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRectLayerKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRectLayerKHR* value = wrapper->decoded_value;

    wrapper->offset = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->offset->decoded_value = &(value->offset);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->offset);
    wrapper->extent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->extent->decoded_value = &(value->extent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->extent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layer));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentRegionKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentRegionKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rectangleCount));
    wrapper->pRectangles = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRectLayerKHR>>();
    bytes_read += wrapper->pRectangles->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRectangles = wrapper->pRectangles->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentRegionsKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentRegionsKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapchainCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPresentRegionKHR>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSharedPresentSurfaceCapabilitiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSharedPresentSurfaceCapabilitiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sharedPresentSupportedUsageFlags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportFenceWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportFenceWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->fence));
    value->fence = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->handle));
    value->handle = nullptr;
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportFenceWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportFenceWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pAttributes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>>();
    bytes_read += wrapper->pAttributes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttributes = wrapper->pAttributes->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dwAccess));
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->name = wrapper->name.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFenceGetWin32HandleInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFenceGetWin32HandleInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->fence));
    value->fence = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportFenceFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportFenceFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->fence));
    value->fence = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fd));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFenceGetFdInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFenceGetFdInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->fence));
    value->fence = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePerformanceQueryFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePerformanceQueryFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->performanceCounterQueryPools));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->performanceCounterMultipleQueryPools));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePerformanceQueryPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePerformanceQueryPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->allowCommandBufferQueryCopies));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceCounterKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceCounterKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->unit));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->scope));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storage));
    wrapper->uuid.SetExternalMemory(value->uuid, VK_UUID_SIZE);
    bytes_read += wrapper->uuid.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceCounterDescriptionKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceCounterDescriptionKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    wrapper->name.SetExternalMemory(value->name, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->category.SetExternalMemory(value->category, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->category.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueryPoolPerformanceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueryPoolPerformanceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->counterIndexCount));
    bytes_read += wrapper->pCounterIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCounterIndices = wrapper->pCounterIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAcquireProfilingLockInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAcquireProfilingLockInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->timeout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceQuerySubmitInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceQuerySubmitInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->counterPassIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSurfaceInfo2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSurfaceInfo2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->surface));
    value->surface = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceCapabilities2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceCapabilities2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->surfaceCapabilities = DecodeAllocator::Allocate<Decoded_VkSurfaceCapabilitiesKHR>();
    wrapper->surfaceCapabilities->decoded_value = &(value->surfaceCapabilities);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->surfaceCapabilities);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceFormat2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceFormat2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->surfaceFormat = DecodeAllocator::Allocate<Decoded_VkSurfaceFormatKHR>();
    wrapper->surfaceFormat->decoded_value = &(value->surfaceFormat);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->surfaceFormat);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayProperties2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayProperties2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->displayProperties = DecodeAllocator::Allocate<Decoded_VkDisplayPropertiesKHR>();
    wrapper->displayProperties->decoded_value = &(value->displayProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPlaneProperties2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPlaneProperties2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->displayPlaneProperties = DecodeAllocator::Allocate<Decoded_VkDisplayPlanePropertiesKHR>();
    wrapper->displayPlaneProperties->decoded_value = &(value->displayPlaneProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayPlaneProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayModeProperties2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayModeProperties2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->displayModeProperties = DecodeAllocator::Allocate<Decoded_VkDisplayModePropertiesKHR>();
    wrapper->displayModeProperties->decoded_value = &(value->displayModeProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayModeProperties);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPlaneInfo2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPlaneInfo2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->mode));
    value->mode = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->planeIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPlaneCapabilities2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPlaneCapabilities2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->capabilities = DecodeAllocator::Allocate<Decoded_VkDisplayPlaneCapabilitiesKHR>();
    wrapper->capabilities->decoded_value = &(value->capabilities);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->capabilities);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePortabilitySubsetFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePortabilitySubsetFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->constantAlphaColorBlendFactors));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->events));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageViewFormatReinterpretation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageViewFormatSwizzle));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageView2DOn3DImage));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multisampleArrayImage));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mutableComparisonSamplers));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pointPolygons));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->samplerMipLodBias));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->separateStencilMaskRef));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSampleRateInterpolationFunctions));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tessellationIsolines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tessellationPointMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->triangleFans));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexAttributeAccessBeyondStride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePortabilitySubsetPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePortabilitySubsetPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minVertexInputBindingStrideAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderClockFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderClockFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSubgroupClock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderDeviceClock));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceQueueGlobalPriorityCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceQueueGlobalPriorityCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->globalPriority));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->globalPriorityQuery));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueueFamilyGlobalPriorityPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueueFamilyGlobalPriorityPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->priorityCount));
    wrapper->priorities.SetExternalMemory(value->priorities, VK_MAX_GLOBAL_PRIORITY_SIZE_KHR);
    bytes_read += wrapper->priorities.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFragmentShadingRateAttachmentInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFragmentShadingRateAttachmentInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pFragmentShadingRateAttachment = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentReference2>>();
    bytes_read += wrapper->pFragmentShadingRateAttachment->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pFragmentShadingRateAttachment = wrapper->pFragmentShadingRateAttachment->GetPointer();
    wrapper->shadingRateAttachmentTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->shadingRateAttachmentTexelSize->decoded_value = &(value->shadingRateAttachmentTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->shadingRateAttachmentTexelSize);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineFragmentShadingRateStateCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineFragmentShadingRateStateCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->fragmentSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->fragmentSize->decoded_value = &(value->fragmentSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->fragmentSize);
    wrapper->combinerOps.SetExternalMemory(value->combinerOps, 2);
    bytes_read += wrapper->combinerOps.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShadingRateFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShadingRateFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineFragmentShadingRate));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveFragmentShadingRate));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentFragmentShadingRate));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShadingRatePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShadingRatePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->minFragmentShadingRateAttachmentTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minFragmentShadingRateAttachmentTexelSize->decoded_value = &(value->minFragmentShadingRateAttachmentTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minFragmentShadingRateAttachmentTexelSize);
    wrapper->maxFragmentShadingRateAttachmentTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxFragmentShadingRateAttachmentTexelSize->decoded_value = &(value->maxFragmentShadingRateAttachmentTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxFragmentShadingRateAttachmentTexelSize);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentShadingRateAttachmentTexelSizeAspectRatio));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveFragmentShadingRateWithMultipleViewports));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->layeredShadingRateAttachments));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateNonTrivialCombinerOps));
    wrapper->maxFragmentSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxFragmentSize->decoded_value = &(value->maxFragmentSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxFragmentSize);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentSizeAspectRatio));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentShadingRateCoverageSamples));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentShadingRateRasterizationSamples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithShaderDepthStencilWrites));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithSampleMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithShaderSampleMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithConservativeRasterization));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithFragmentShaderInterlock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateWithCustomSampleLocations));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateStrictMultiplyCombiner));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShadingRateKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShadingRateKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleCounts));
    wrapper->fragmentSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->fragmentSize->decoded_value = &(value->fragmentSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->fragmentSize);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceProtectedCapabilitiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceProtectedCapabilitiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportsProtected));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePresentWaitFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePresentWaitFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentWait));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineExecutableInfo));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pipeline));
    value->pipeline = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineExecutablePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineExecutablePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stages));
    wrapper->name.SetExternalMemory(value->name, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subgroupSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineExecutableInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineExecutableInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pipeline));
    value->pipeline = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->executableIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineExecutableStatisticKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineExecutableStatisticKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->name.SetExternalMemory(value->name, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    wrapper->value = DecodeAllocator::Allocate<Decoded_VkPipelineExecutableStatisticValueKHR>();
    wrapper->value->decoded_value = &(value->value);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->value);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineExecutableInternalRepresentationKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineExecutableInternalRepresentationKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->name.SetExternalMemory(value->name, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->name.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->isText));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dataSize));
    bytes_read += wrapper->pData.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pData = wrapper->pData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineLibraryCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineLibraryCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->libraryCount));
    bytes_read += wrapper->pLibraries.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pLibraries = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentIdKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentIdKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapchainCount));
    bytes_read += wrapper->pPresentIds.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPresentIds = wrapper->pPresentIds.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePresentIdFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePresentIdFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentId));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueueFamilyCheckpointProperties2NV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueueFamilyCheckpointProperties2NV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->checkpointExecutionStageMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCheckpointData2NV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCheckpointData2NV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stage));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pCheckpointMarker));
    value->pCheckpointMarker = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShaderBarycentric));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->triStripVertexOrderIndependentOfProvokingVertex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSubgroupUniformControlFlow));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->workgroupMemoryExplicitLayout));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->workgroupMemoryExplicitLayoutScalarBlockLayout));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->workgroupMemoryExplicitLayout8BitAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->workgroupMemoryExplicitLayout16BitAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingMaintenance1));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingPipelineTraceRaysIndirect2));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTraceRaysIndirectCommand2KHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTraceRaysIndirectCommand2KHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->raygenShaderRecordAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->raygenShaderRecordSize));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->missShaderBindingTableAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->missShaderBindingTableSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->missShaderBindingTableStride));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->hitShaderBindingTableAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->hitShaderBindingTableSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->hitShaderBindingTableStride));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->callableShaderBindingTableAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->callableShaderBindingTableSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->callableShaderBindingTableStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depth));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugReportCallbackCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugReportCallbackCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnCallback));
    value->pfnCallback = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pUserData));
    value->pUserData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationStateRasterizationOrderAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationStateRasterizationOrderAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationOrder));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugMarkerObjectNameInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugMarkerObjectNameInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->object));
    value->object = 0;
    bytes_read += wrapper->pObjectName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pObjectName = wrapper->pObjectName.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugMarkerObjectTagInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugMarkerObjectTagInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->object));
    value->object = 0;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tagName));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tagSize));
    bytes_read += wrapper->pTag.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTag = wrapper->pTag.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugMarkerMarkerInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugMarkerMarkerInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += wrapper->pMarkerName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMarkerName = wrapper->pMarkerName.GetPointer();
    wrapper->color.SetExternalMemory(value->color, 4);
    bytes_read += wrapper->color.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDedicatedAllocationImageCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDedicatedAllocationImageCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dedicatedAllocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDedicatedAllocationBufferCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDedicatedAllocationBufferCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dedicatedAllocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDedicatedAllocationMemoryAllocateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDedicatedAllocationMemoryAllocateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->image));
    value->image = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTransformFeedbackFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTransformFeedbackFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedback));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->geometryStreams));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTransformFeedbackPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTransformFeedbackPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackStreams));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackBuffers));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackBufferSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackStreamDataSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackBufferDataSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTransformFeedbackBufferDataStride));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackQueries));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackStreamsLinesTriangles));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackRasterizationStreamSelect));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackDraw));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationStateStreamCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationStateStreamCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationStream));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewHandleInfoNVX* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewHandleInfoNVX* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->imageView));
    value->imageView = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorType));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->sampler));
    value->sampler = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewAddressPropertiesNVX* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewAddressPropertiesNVX* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTextureLODGatherFormatPropertiesAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTextureLODGatherFormatPropertiesAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportsTextureGatherLODBiasAMD));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShaderResourceUsageAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShaderResourceUsageAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numUsedVgprs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numUsedSgprs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->ldsSizePerLocalWorkGroup));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->ldsUsageSizeInBytes));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->scratchMemUsageInBytes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShaderStatisticsInfoAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShaderStatisticsInfoAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderStageMask));
    wrapper->resourceUsage = DecodeAllocator::Allocate<Decoded_VkShaderResourceUsageAMD>();
    wrapper->resourceUsage->decoded_value = &(value->resourceUsage);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->resourceUsage);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numPhysicalVgprs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numPhysicalSgprs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numAvailableVgprs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numAvailableSgprs));
    wrapper->computeWorkGroupSize.SetExternalMemory(value->computeWorkGroupSize, 3);
    bytes_read += wrapper->computeWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkStreamDescriptorSurfaceCreateInfoGGP* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkStreamDescriptorSurfaceCreateInfoGGP* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->streamDescriptor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCornerSampledImageFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCornerSampledImageFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->cornerSampledImage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalImageFormatPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalImageFormatPropertiesNV* value = wrapper->decoded_value;

    wrapper->imageFormatProperties = DecodeAllocator::Allocate<Decoded_VkImageFormatProperties>();
    wrapper->imageFormatProperties->decoded_value = &(value->imageFormatProperties);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageFormatProperties);
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalMemoryFeatures));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->exportFromImportedHandleTypes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compatibleHandleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalMemoryImageCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalMemoryImageCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportMemoryAllocateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportMemoryAllocateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleTypes));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportMemoryWin32HandleInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportMemoryWin32HandleInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->handle));
    value->handle = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExportMemoryWin32HandleInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExportMemoryWin32HandleInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pAttributes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_SECURITY_ATTRIBUTES>>();
    bytes_read += wrapper->pAttributes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttributes = wrapper->pAttributes->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dwAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWin32KeyedMutexAcquireReleaseInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWin32KeyedMutexAcquireReleaseInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->acquireCount));
    bytes_read += wrapper->pAcquireSyncs.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireSyncs = nullptr;
    bytes_read += wrapper->pAcquireKeys.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireKeys = wrapper->pAcquireKeys.GetPointer();
    bytes_read += wrapper->pAcquireTimeoutMilliseconds.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAcquireTimeoutMilliseconds = wrapper->pAcquireTimeoutMilliseconds.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->releaseCount));
    bytes_read += wrapper->pReleaseSyncs.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pReleaseSyncs = nullptr;
    bytes_read += wrapper->pReleaseKeys.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pReleaseKeys = wrapper->pReleaseKeys.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkValidationFlagsEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkValidationFlagsEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->disabledValidationCheckCount));
    bytes_read += wrapper->pDisabledValidationChecks.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDisabledValidationChecks = wrapper->pDisabledValidationChecks.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkViSurfaceCreateInfoNN* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkViSurfaceCreateInfoNN* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->window));
    value->window = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewASTCDecodeModeEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewASTCDecodeModeEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->decodeMode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceASTCDecodeFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceASTCDecodeFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->decodeModeSharedExponent));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePipelineRobustnessFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePipelineRobustnessFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineRobustness));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePipelineRobustnessPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePipelineRobustnessPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->defaultRobustnessStorageBuffers));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->defaultRobustnessUniformBuffers));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->defaultRobustnessVertexInputs));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->defaultRobustnessImages));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRobustnessCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRobustnessCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->storageBuffers));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->uniformBuffers));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexInputs));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->images));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkConditionalRenderingBeginInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkConditionalRenderingBeginInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceConditionalRenderingFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceConditionalRenderingFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->conditionalRendering));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inheritedConditionalRendering));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferInheritanceConditionalRenderingInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferInheritanceConditionalRenderingInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->conditionalRenderingEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkViewportWScalingNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkViewportWScalingNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->xcoeff));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->ycoeff));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportWScalingStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportWScalingStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportWScalingEnable));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportCount));
    wrapper->pViewportWScalings = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkViewportWScalingNV>>();
    bytes_read += wrapper->pViewportWScalings->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewportWScalings = wrapper->pViewportWScalings->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceCapabilities2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceCapabilities2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minImageCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageCount));
    wrapper->currentExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->currentExtent->decoded_value = &(value->currentExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->currentExtent);
    wrapper->minImageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minImageExtent->decoded_value = &(value->minImageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minImageExtent);
    wrapper->maxImageExtent = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxImageExtent->decoded_value = &(value->maxImageExtent);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxImageExtent);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxImageArrayLayers));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedTransforms));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->currentTransform));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedCompositeAlpha));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedUsageFlags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedSurfaceCounters));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayPowerInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayPowerInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->powerState));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceEventInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceEventInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceEvent));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayEventInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayEventInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->displayEvent));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSwapchainCounterCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSwapchainCounterCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->surfaceCounters));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRefreshCycleDurationGOOGLE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRefreshCycleDurationGOOGLE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->refreshDuration));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPastPresentationTimingGOOGLE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPastPresentationTimingGOOGLE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentID));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->desiredPresentTime));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->actualPresentTime));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->earliestPresentTime));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentMargin));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentTimeGOOGLE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentTimeGOOGLE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentID));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->desiredPresentTime));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentTimesInfoGOOGLE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentTimesInfoGOOGLE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapchainCount));
    wrapper->pTimes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPresentTimeGOOGLE>>();
    bytes_read += wrapper->pTimes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTimes = wrapper->pTimes->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->perViewPositionAllComponents));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkViewportSwizzleNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkViewportSwizzleNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->z));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->w));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportSwizzleStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportSwizzleStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportCount));
    wrapper->pViewportSwizzles = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkViewportSwizzleNV>>();
    bytes_read += wrapper->pViewportSwizzles->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewportSwizzles = wrapper->pViewportSwizzles->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDiscardRectanglePropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDiscardRectanglePropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDiscardRectangles));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineDiscardRectangleStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineDiscardRectangleStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->discardRectangleMode));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->discardRectangleCount));
    wrapper->pDiscardRectangles = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pDiscardRectangles->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDiscardRectangles = wrapper->pDiscardRectangles->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceConservativeRasterizationPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceConservativeRasterizationPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveOverestimationSize));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxExtraPrimitiveOverestimationSize));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->extraPrimitiveOverestimationSizeGranularity));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveUnderestimation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->conservativePointAndLineRasterization));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->degenerateTrianglesRasterized));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->degenerateLinesRasterized));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fullyCoveredFragmentShaderInputVariable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->conservativeRasterizationPostDepthCoverage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationConservativeStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationConservativeStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->conservativeRasterizationMode));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->extraPrimitiveOverestimationSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDepthClipEnableFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDepthClipEnableFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClipEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationDepthClipStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationDepthClipStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClipEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkXYColorEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkXYColorEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkHdrMetadataEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkHdrMetadataEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->displayPrimaryRed = DecodeAllocator::Allocate<Decoded_VkXYColorEXT>();
    wrapper->displayPrimaryRed->decoded_value = &(value->displayPrimaryRed);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayPrimaryRed);
    wrapper->displayPrimaryGreen = DecodeAllocator::Allocate<Decoded_VkXYColorEXT>();
    wrapper->displayPrimaryGreen->decoded_value = &(value->displayPrimaryGreen);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayPrimaryGreen);
    wrapper->displayPrimaryBlue = DecodeAllocator::Allocate<Decoded_VkXYColorEXT>();
    wrapper->displayPrimaryBlue->decoded_value = &(value->displayPrimaryBlue);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->displayPrimaryBlue);
    wrapper->whitePoint = DecodeAllocator::Allocate<Decoded_VkXYColorEXT>();
    wrapper->whitePoint->decoded_value = &(value->whitePoint);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->whitePoint);
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxLuminance));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minLuminance));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxContentLightLevel));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFrameAverageLightLevel));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkIOSSurfaceCreateInfoMVK* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkIOSSurfaceCreateInfoMVK* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pView));
    value->pView = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMacOSSurfaceCreateInfoMVK* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMacOSSurfaceCreateInfoMVK* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pView));
    value->pView = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugUtilsLabelEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugUtilsLabelEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += wrapper->pLabelName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pLabelName = wrapper->pLabelName.GetPointer();
    wrapper->color.SetExternalMemory(value->color, 4);
    bytes_read += wrapper->color.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugUtilsObjectNameInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugUtilsObjectNameInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->objectHandle));
    value->objectHandle = 0;
    bytes_read += wrapper->pObjectName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pObjectName = wrapper->pObjectName.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugUtilsMessengerCallbackDataEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugUtilsMessengerCallbackDataEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += wrapper->pMessageIdName.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMessageIdName = wrapper->pMessageIdName.GetPointer();
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->messageIdNumber));
    bytes_read += wrapper->pMessage.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMessage = wrapper->pMessage.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueLabelCount));
    wrapper->pQueueLabels = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>>();
    bytes_read += wrapper->pQueueLabels->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueLabels = wrapper->pQueueLabels->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->cmdBufLabelCount));
    wrapper->pCmdBufLabels = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDebugUtilsLabelEXT>>();
    bytes_read += wrapper->pCmdBufLabels->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCmdBufLabels = wrapper->pCmdBufLabels->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectCount));
    wrapper->pObjects = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDebugUtilsObjectNameInfoEXT>>();
    bytes_read += wrapper->pObjects->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pObjects = wrapper->pObjects->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugUtilsMessengerCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugUtilsMessengerCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->messageSeverity));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->messageType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnUserCallback));
    value->pfnUserCallback = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pUserData));
    value->pUserData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDebugUtilsObjectTagInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDebugUtilsObjectTagInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->objectHandle));
    value->objectHandle = 0;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tagName));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tagSize));
    bytes_read += wrapper->pTag.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTag = wrapper->pTag.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAndroidHardwareBufferUsageANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAndroidHardwareBufferUsageANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->androidHardwareBufferUsage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAndroidHardwareBufferPropertiesANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAndroidHardwareBufferPropertiesANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->allocationSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAndroidHardwareBufferFormatPropertiesANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAndroidHardwareBufferFormatPropertiesANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalFormat));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->formatFeatures));
    wrapper->samplerYcbcrConversionComponents = DecodeAllocator::Allocate<Decoded_VkComponentMapping>();
    wrapper->samplerYcbcrConversionComponents->decoded_value = &(value->samplerYcbcrConversionComponents);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->samplerYcbcrConversionComponents);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYcbcrModel));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYcbcrRange));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedXChromaOffset));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYChromaOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportAndroidHardwareBufferInfoANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportAndroidHardwareBufferInfoANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryGetAndroidHardwareBufferInfoANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryGetAndroidHardwareBufferInfoANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkExternalFormatANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkExternalFormatANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalFormat));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAndroidHardwareBufferFormatProperties2ANDROID* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAndroidHardwareBufferFormatProperties2ANDROID* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalFormat));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->formatFeatures));
    wrapper->samplerYcbcrConversionComponents = DecodeAllocator::Allocate<Decoded_VkComponentMapping>();
    wrapper->samplerYcbcrConversionComponents->decoded_value = &(value->samplerYcbcrConversionComponents);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->samplerYcbcrConversionComponents);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYcbcrModel));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYcbcrRange));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedXChromaOffset));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->suggestedYChromaOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSampleLocationEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSampleLocationEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->x));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->y));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSampleLocationsInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSampleLocationsInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationsPerPixel));
    wrapper->sampleLocationGridSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->sampleLocationGridSize->decoded_value = &(value->sampleLocationGridSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->sampleLocationGridSize);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationsCount));
    wrapper->pSampleLocations = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSampleLocationEXT>>();
    bytes_read += wrapper->pSampleLocations->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSampleLocations = wrapper->pSampleLocations->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAttachmentSampleLocationsEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAttachmentSampleLocationsEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentIndex));
    wrapper->sampleLocationsInfo = DecodeAllocator::Allocate<Decoded_VkSampleLocationsInfoEXT>();
    wrapper->sampleLocationsInfo->decoded_value = &(value->sampleLocationsInfo);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->sampleLocationsInfo);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassSampleLocationsEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassSampleLocationsEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassIndex));
    wrapper->sampleLocationsInfo = DecodeAllocator::Allocate<Decoded_VkSampleLocationsInfoEXT>();
    wrapper->sampleLocationsInfo->decoded_value = &(value->sampleLocationsInfo);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->sampleLocationsInfo);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassSampleLocationsBeginInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassSampleLocationsBeginInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentInitialSampleLocationsCount));
    wrapper->pAttachmentInitialSampleLocations = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAttachmentSampleLocationsEXT>>();
    bytes_read += wrapper->pAttachmentInitialSampleLocations->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAttachmentInitialSampleLocations = wrapper->pAttachmentInitialSampleLocations->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->postSubpassSampleLocationsCount));
    wrapper->pPostSubpassSampleLocations = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubpassSampleLocationsEXT>>();
    bytes_read += wrapper->pPostSubpassSampleLocations->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPostSubpassSampleLocations = wrapper->pPostSubpassSampleLocations->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineSampleLocationsStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineSampleLocationsStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationsEnable));
    wrapper->sampleLocationsInfo = DecodeAllocator::Allocate<Decoded_VkSampleLocationsInfoEXT>();
    wrapper->sampleLocationsInfo->decoded_value = &(value->sampleLocationsInfo);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->sampleLocationsInfo);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSampleLocationsPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSampleLocationsPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationSampleCounts));
    wrapper->maxSampleLocationGridSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxSampleLocationGridSize->decoded_value = &(value->maxSampleLocationGridSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxSampleLocationGridSize);
    wrapper->sampleLocationCoordinateRange.SetExternalMemory(value->sampleLocationCoordinateRange, 2);
    bytes_read += wrapper->sampleLocationCoordinateRange.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationSubPixelBits));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->variableSampleLocations));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMultisamplePropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMultisamplePropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->maxSampleLocationGridSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxSampleLocationGridSize->decoded_value = &(value->maxSampleLocationGridSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxSampleLocationGridSize);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendCoherentOperations));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendMaxColorAttachments));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendIndependentBlend));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendNonPremultipliedSrcColor));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendNonPremultipliedDstColor));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendCorrelatedOverlap));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendAllOperations));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineColorBlendAdvancedStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineColorBlendAdvancedStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcPremultiplied));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstPremultiplied));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->blendOverlap));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCoverageToColorStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCoverageToColorStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageToColorEnable));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageToColorLocation));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCoverageModulationStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCoverageModulationStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageModulationMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageModulationTableEnable));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageModulationTableCount));
    bytes_read += wrapper->pCoverageModulationTable.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCoverageModulationTable = wrapper->pCoverageModulationTable.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderSMBuiltinsPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSMCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderWarpsPerSM));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderSMBuiltinsFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSMBuiltins));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrmFormatModifierPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrmFormatModifierPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifier));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierPlaneCount));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierTilingFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrmFormatModifierPropertiesListEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrmFormatModifierPropertiesListEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierCount));
    wrapper->pDrmFormatModifierProperties = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDrmFormatModifierPropertiesEXT>>();
    bytes_read += wrapper->pDrmFormatModifierProperties->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDrmFormatModifierProperties = wrapper->pDrmFormatModifierProperties->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageDrmFormatModifierInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageDrmFormatModifierInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifier));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sharingMode));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->queueFamilyIndexCount));
    bytes_read += wrapper->pQueueFamilyIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pQueueFamilyIndices = wrapper->pQueueFamilyIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageDrmFormatModifierListCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageDrmFormatModifierListCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierCount));
    bytes_read += wrapper->pDrmFormatModifiers.DecodeUInt64((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDrmFormatModifiers = wrapper->pDrmFormatModifiers.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageDrmFormatModifierExplicitCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageDrmFormatModifierExplicitCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifier));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierPlaneCount));
    wrapper->pPlaneLayouts = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkSubresourceLayout>>();
    bytes_read += wrapper->pPlaneLayouts->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPlaneLayouts = wrapper->pPlaneLayouts->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageDrmFormatModifierPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageDrmFormatModifierPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifier));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrmFormatModifierProperties2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrmFormatModifierProperties2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifier));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierPlaneCount));
    bytes_read += ValueDecoder::DecodeFlags64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierTilingFeatures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrmFormatModifierPropertiesList2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrmFormatModifierPropertiesList2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->drmFormatModifierCount));
    wrapper->pDrmFormatModifierProperties = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDrmFormatModifierProperties2EXT>>();
    bytes_read += wrapper->pDrmFormatModifierProperties->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDrmFormatModifierProperties = wrapper->pDrmFormatModifierProperties->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkValidationCacheCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkValidationCacheCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->initialDataSize));
    bytes_read += wrapper->pInitialData.DecodeVoid((buffer + bytes_read), (buffer_size - bytes_read));
    value->pInitialData = wrapper->pInitialData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShaderModuleValidationCacheCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShaderModuleValidationCacheCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->validationCache));
    value->validationCache = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShadingRatePaletteNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShadingRatePaletteNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRatePaletteEntryCount));
    bytes_read += wrapper->pShadingRatePaletteEntries.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pShadingRatePaletteEntries = wrapper->pShadingRatePaletteEntries.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportShadingRateImageStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportShadingRateImageStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRateImageEnable));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportCount));
    wrapper->pShadingRatePalettes = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkShadingRatePaletteNV>>();
    bytes_read += wrapper->pShadingRatePalettes->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pShadingRatePalettes = wrapper->pShadingRatePalettes->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShadingRateImageFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShadingRateImageFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRateImage));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRateCoarseSampleOrder));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShadingRateImagePropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShadingRateImagePropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->shadingRateTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->shadingRateTexelSize->decoded_value = &(value->shadingRateTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->shadingRateTexelSize);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRatePaletteSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRateMaxCoarseSamples));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCoarseSampleLocationNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCoarseSampleLocationNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pixelX));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pixelY));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sample));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCoarseSampleOrderCustomNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCoarseSampleOrderCustomNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRate));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleLocationCount));
    wrapper->pSampleLocations = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkCoarseSampleLocationNV>>();
    bytes_read += wrapper->pSampleLocations->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSampleLocations = wrapper->pSampleLocations->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportCoarseSampleOrderStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampleOrderType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->customSampleOrderCount));
    wrapper->pCustomSampleOrders = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkCoarseSampleOrderCustomNV>>();
    bytes_read += wrapper->pCustomSampleOrders->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pCustomSampleOrders = wrapper->pCustomSampleOrders->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRayTracingShaderGroupCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRayTracingShaderGroupCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->generalShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->closestHitShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->anyHitShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->intersectionShader));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRayTracingPipelineCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRayTracingPipelineCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageCount));
    wrapper->pStages = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>>();
    bytes_read += wrapper->pStages->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStages = wrapper->pStages->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCount));
    wrapper->pGroups = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRayTracingShaderGroupCreateInfoNV>>();
    bytes_read += wrapper->pGroups->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pGroups = wrapper->pGroups->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxRecursionDepth));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->layout));
    value->layout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->basePipelineHandle));
    value->basePipelineHandle = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->basePipelineIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeometryTrianglesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeometryTrianglesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->vertexData));
    value->vertexData = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexCount));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexStride));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexFormat));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->indexData));
    value->indexData = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexCount));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexType));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->transformData));
    value->transformData = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeometryAABBNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeometryAABBNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->aabbData));
    value->aabbData = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numAABBs));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeometryDataNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeometryDataNV* value = wrapper->decoded_value;

    wrapper->triangles = DecodeAllocator::Allocate<Decoded_VkGeometryTrianglesNV>();
    wrapper->triangles->decoded_value = &(value->triangles);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->triangles);
    wrapper->aabbs = DecodeAllocator::Allocate<Decoded_VkGeometryAABBNV>();
    wrapper->aabbs->decoded_value = &(value->aabbs);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->aabbs);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeometryNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeometryNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->geometryType));
    wrapper->geometry = DecodeAllocator::Allocate<Decoded_VkGeometryDataNV>();
    wrapper->geometry->decoded_value = &(value->geometry);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->geometry);
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->instanceCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->geometryCount));
    wrapper->pGeometries = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkGeometryNV>>();
    bytes_read += wrapper->pGeometries->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pGeometries = wrapper->pGeometries->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compactedSize));
    wrapper->info = DecodeAllocator::Allocate<Decoded_VkAccelerationStructureInfoNV>();
    wrapper->info->decoded_value = &(value->info);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->info);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindAccelerationStructureMemoryInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindAccelerationStructureMemoryInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->accelerationStructure));
    value->accelerationStructure = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceIndexCount));
    bytes_read += wrapper->pDeviceIndices.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDeviceIndices = wrapper->pDeviceIndices.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWriteDescriptorSetAccelerationStructureNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWriteDescriptorSetAccelerationStructureNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureCount));
    bytes_read += wrapper->pAccelerationStructures.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAccelerationStructures = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureMemoryRequirementsInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureMemoryRequirementsInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->accelerationStructure));
    value->accelerationStructure = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayTracingPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayTracingPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupHandleSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxRecursionDepth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxShaderGroupStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupBaseAlignment));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryCount));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInstanceCount));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTriangleCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetAccelerationStructures));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTransformMatrixKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTransformMatrixKHR* value = wrapper->decoded_value;

    wrapper->matrix.SetExternalMemory(value->matrix, 3, 4);
    bytes_read += wrapper->matrix.DecodeFloat((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAabbPositionsKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAabbPositionsKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minX));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minY));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minZ));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxX));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxY));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxZ));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureInstanceKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureInstanceKHR* value = wrapper->decoded_value;

    wrapper->transform = DecodeAllocator::Allocate<Decoded_VkTransformMatrixKHR>();
    wrapper->transform->decoded_value = &(value->transform);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transform);
    uint32_t temp_instanceCustomIndex;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceCustomIndex);
    value->instanceCustomIndex = temp_instanceCustomIndex;
    uint32_t temp_mask;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_mask);
    value->mask = temp_mask;
    uint32_t temp_instanceShaderBindingTableRecordOffset;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceShaderBindingTableRecordOffset);
    value->instanceShaderBindingTableRecordOffset = temp_instanceShaderBindingTableRecordOffset;
    VkGeometryInstanceFlagsKHR temp_flags;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &temp_flags);
    value->flags = temp_flags;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureReference));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->representativeFragmentTest));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRepresentativeFragmentTestStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRepresentativeFragmentTestStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->representativeFragmentTestEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageViewImageFormatInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageViewImageFormatInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageViewType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFilterCubicImageViewImageFormatPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFilterCubicImageViewImageFormatPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterCubic));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->filterCubicMinmax));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportMemoryHostPointerInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportMemoryHostPointerInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pHostPointer));
    value->pHostPointer = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryHostPointerPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryHostPointerPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalMemoryHostPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalMemoryHostPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minImportedHostPointerAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCompilerControlCreateInfoAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCompilerControlCreateInfoAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->compilerControlFlags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCalibratedTimestampInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCalibratedTimestampInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->timeDomain));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderCorePropertiesAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderCorePropertiesAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderEngineCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderArraysPerEngineCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->computeUnitsPerShaderArray));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->simdPerComputeUnit));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->wavefrontsPerSimd));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->wavefrontSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sgprsPerSimd));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSgprAllocation));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSgprAllocation));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sgprAllocationGranularity));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vgprsPerSimd));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minVgprAllocation));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVgprAllocation));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vgprAllocationGranularity));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceMemoryOverallocationCreateInfoAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceMemoryOverallocationCreateInfoAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->overallocationBehavior));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertexAttribDivisor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkVertexInputBindingDivisorDescriptionEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkVertexInputBindingDivisorDescriptionEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->divisor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineVertexInputDivisorStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineVertexInputDivisorStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexBindingDivisorCount));
    wrapper->pVertexBindingDivisors = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkVertexInputBindingDivisorDescriptionEXT>>();
    bytes_read += wrapper->pVertexBindingDivisors->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVertexBindingDivisors = wrapper->pVertexBindingDivisors->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexAttributeInstanceRateDivisor));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexAttributeInstanceRateZeroDivisor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPresentFrameTokenGGP* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPresentFrameTokenGGP* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->frameToken));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceComputeShaderDerivativesFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->computeDerivativeGroupQuads));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->computeDerivativeGroupLinear));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMeshShaderFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMeshShaderFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->taskShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshShader));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMeshShaderPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMeshShaderPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDrawMeshTasksCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskWorkGroupInvocations));
    wrapper->maxTaskWorkGroupSize.SetExternalMemory(value->maxTaskWorkGroupSize, 3);
    bytes_read += wrapper->maxTaskWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskTotalMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskOutputCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshWorkGroupInvocations));
    wrapper->maxMeshWorkGroupSize.SetExternalMemory(value->maxMeshWorkGroupSize, 3);
    bytes_read += wrapper->maxMeshWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshTotalMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputVertices));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputPrimitives));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshMultiviewViewCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshOutputPerVertexGranularity));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshOutputPerPrimitiveGranularity));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrawMeshTasksIndirectCommandNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrawMeshTasksIndirectCommandNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->taskCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstTask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderImageFootprintFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderImageFootprintFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageFootprint));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportExclusiveScissorStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportExclusiveScissorStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->exclusiveScissorCount));
    wrapper->pExclusiveScissors = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pExclusiveScissors->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pExclusiveScissors = wrapper->pExclusiveScissors->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExclusiveScissorFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExclusiveScissorFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->exclusiveScissor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueueFamilyCheckpointPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueueFamilyCheckpointPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->checkpointExecutionStageMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCheckpointDataNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCheckpointDataNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stage));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pCheckpointMarker));
    value->pCheckpointMarker = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderIntegerFunctions2));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkInitializePerformanceApiInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkInitializePerformanceApiInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pUserData));
    value->pUserData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkQueryPoolPerformanceQueryCreateInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkQueryPoolPerformanceQueryCreateInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->performanceCountersSampling));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceMarkerInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceMarkerInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->marker));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceStreamMarkerInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceStreamMarkerInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->marker));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceOverrideInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceOverrideInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enable));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->parameter));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPerformanceConfigurationAcquireInfoINTEL* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPerformanceConfigurationAcquireInfoINTEL* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePCIBusInfoPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePCIBusInfoPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pciDomain));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pciBus));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pciDevice));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pciFunction));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDisplayNativeHdrSurfaceCapabilitiesAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDisplayNativeHdrSurfaceCapabilitiesAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->localDimmingSupport));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSwapchainDisplayNativeHdrCreateInfoAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSwapchainDisplayNativeHdrCreateInfoAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->localDimmingEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImagePipeSurfaceCreateInfoFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImagePipeSurfaceCreateInfoFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imagePipeHandle));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMetalSurfaceCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMetalSurfaceCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pLayer));
    value->pLayer = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMapFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMapFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityMap));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityMapDynamic));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityMapNonSubsampledImages));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMapPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMapPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->minFragmentDensityTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->minFragmentDensityTexelSize->decoded_value = &(value->minFragmentDensityTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->minFragmentDensityTexelSize);
    wrapper->maxFragmentDensityTexelSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxFragmentDensityTexelSize->decoded_value = &(value->maxFragmentDensityTexelSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxFragmentDensityTexelSize);
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityInvocations));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassFragmentDensityMapCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassFragmentDensityMapCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->fragmentDensityMapAttachment = DecodeAllocator::Allocate<Decoded_VkAttachmentReference>();
    wrapper->fragmentDensityMapAttachment->decoded_value = &(value->fragmentDensityMapAttachment);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->fragmentDensityMapAttachment);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderCoreProperties2AMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderCoreProperties2AMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderCoreFeatures));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->activeComputeUnitCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCoherentMemoryFeaturesAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCoherentMemoryFeaturesAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceCoherentMemory));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderImageInt64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseImageInt64Atomics));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMemoryBudgetPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMemoryBudgetPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->heapBudget.SetExternalMemory(value->heapBudget, VK_MAX_MEMORY_HEAPS);
    bytes_read += wrapper->heapBudget.DecodeVkDeviceSize((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->heapUsage.SetExternalMemory(value->heapUsage, VK_MAX_MEMORY_HEAPS);
    bytes_read += wrapper->heapUsage.DecodeVkDeviceSize((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMemoryPriorityFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMemoryPriorityFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryPriority));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryPriorityAllocateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryPriorityAllocateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->priority));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dedicatedAllocationImageAliasing));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceBufferDeviceAddressFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddress));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferDeviceAddressMultiDevice));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBufferDeviceAddressCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBufferDeviceAddressCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceAddress));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkValidationFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkValidationFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->enabledValidationFeatureCount));
    bytes_read += wrapper->pEnabledValidationFeatures.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pEnabledValidationFeatures = wrapper->pEnabledValidationFeatures.GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->disabledValidationFeatureCount));
    bytes_read += wrapper->pDisabledValidationFeatures.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDisabledValidationFeatures = wrapper->pDisabledValidationFeatures.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCooperativeMatrixPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCooperativeMatrixPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->MSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->NSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->KSize));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->AType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->BType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->CType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->DType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->scope));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCooperativeMatrixFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCooperativeMatrixFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->cooperativeMatrix));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->cooperativeMatrixRobustBufferAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCooperativeMatrixPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCooperativeMatrixPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->cooperativeMatrixSupportedStages));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCoverageReductionModeFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCoverageReductionModeFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageReductionMode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineCoverageReductionStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineCoverageReductionStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageReductionMode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkFramebufferMixedSamplesCombinationNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkFramebufferMixedSamplesCombinationNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->coverageReductionMode));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationSamples));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthStencilSamples));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorSamples));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShaderSampleInterlock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShaderPixelInterlock));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShaderShadingRateInterlock));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceYcbcrImageArraysFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->ycbcrImageArrays));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProvokingVertexFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProvokingVertexFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->provokingVertexLast));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackPreservesProvokingVertex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceProvokingVertexPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceProvokingVertexPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->provokingVertexModePerPipeline));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformFeedbackPreservesTriangleFanProvokingVertex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationProvokingVertexStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->provokingVertexMode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceFullScreenExclusiveInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceFullScreenExclusiveInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->fullScreenExclusive));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceCapabilitiesFullScreenExclusiveEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceCapabilitiesFullScreenExclusiveEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fullScreenExclusiveSupported));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceFullScreenExclusiveWin32InfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceFullScreenExclusiveWin32InfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->hmonitor));
    value->hmonitor = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkHeadlessSurfaceCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkHeadlessSurfaceCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceLineRasterizationFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceLineRasterizationFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rectangularLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bresenhamLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->smoothLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stippledRectangularLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stippledBresenhamLines));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stippledSmoothLines));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceLineRasterizationPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceLineRasterizationPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineSubPixelPrecisionBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineRasterizationLineStateCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineRasterizationLineStateCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineRasterizationMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stippledLineEnable));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineStippleFactor));
    bytes_read += ValueDecoder::DecodeUInt16Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->lineStipplePattern));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderAtomicFloatFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat32Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat32AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat64AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat32Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat32AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat64Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat64AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderImageFloat32Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderImageFloat32AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseImageFloat32Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseImageFloat32AtomicAdd));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceIndexTypeUint8FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceIndexTypeUint8FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexTypeUint8));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExtendedDynamicStateFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat16Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat16AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat16AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat32AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderBufferFloat64AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat16Atomics));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat16AtomicAdd));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat16AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat32AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderSharedFloat64AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderImageFloat32AtomicMinMax));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sparseImageFloat32AtomicMinMax));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGraphicsShaderGroupCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxIndirectSequenceCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxIndirectCommandsTokenCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxIndirectCommandsStreamCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxIndirectCommandsTokenOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxIndirectCommandsStreamStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSequencesCountBufferOffsetAlignment));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minSequencesIndexBufferOffsetAlignment));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minIndirectCommandsBufferOffsetAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceGeneratedCommands));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGraphicsShaderGroupCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGraphicsShaderGroupCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageCount));
    wrapper->pStages = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>>();
    bytes_read += wrapper->pStages->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStages = wrapper->pStages->GetPointer();
    wrapper->pVertexInputState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineVertexInputStateCreateInfo>>();
    bytes_read += wrapper->pVertexInputState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVertexInputState = wrapper->pVertexInputState->GetPointer();
    wrapper->pTessellationState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineTessellationStateCreateInfo>>();
    bytes_read += wrapper->pTessellationState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTessellationState = wrapper->pTessellationState->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGraphicsPipelineShaderGroupsCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGraphicsPipelineShaderGroupsCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCount));
    wrapper->pGroups = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkGraphicsShaderGroupCreateInfoNV>>();
    bytes_read += wrapper->pGroups->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pGroups = wrapper->pGroups->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineCount));
    bytes_read += wrapper->pPipelines.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pPipelines = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindShaderGroupIndirectCommandNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindShaderGroupIndirectCommandNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindIndexBufferIndirectCommandNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindIndexBufferIndirectCommandNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferAddress));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkBindVertexBufferIndirectCommandNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkBindVertexBufferIndirectCommandNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bufferAddress));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSetStateFlagsIndirectCommandNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSetStateFlagsIndirectCommandNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->data));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkIndirectCommandsStreamNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkIndirectCommandsStreamNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkIndirectCommandsLayoutTokenNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkIndirectCommandsLayoutTokenNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tokenType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stream));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexBindingUnit));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexDynamicStride));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pushconstantPipelineLayout));
    value->pushconstantPipelineLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pushconstantShaderStageFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pushconstantOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pushconstantSize));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indirectStateFlags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexTypeCount));
    bytes_read += wrapper->pIndexTypes.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pIndexTypes = wrapper->pIndexTypes.GetPointer();
    bytes_read += wrapper->pIndexTypeValues.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pIndexTypeValues = wrapper->pIndexTypeValues.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkIndirectCommandsLayoutCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkIndirectCommandsLayoutCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tokenCount));
    wrapper->pTokens = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkIndirectCommandsLayoutTokenNV>>();
    bytes_read += wrapper->pTokens->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pTokens = wrapper->pTokens->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->streamCount));
    bytes_read += wrapper->pStreamStrides.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStreamStrides = wrapper->pStreamStrides.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeneratedCommandsInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeneratedCommandsInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pipeline));
    value->pipeline = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->indirectCommandsLayout));
    value->indirectCommandsLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->streamCount));
    wrapper->pStreams = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkIndirectCommandsStreamNV>>();
    bytes_read += wrapper->pStreams->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStreams = wrapper->pStreams->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sequencesCount));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->preprocessBuffer));
    value->preprocessBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->preprocessOffset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->preprocessSize));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->sequencesCountBuffer));
    value->sequencesCountBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sequencesCountOffset));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->sequencesIndexBuffer));
    value->sequencesIndexBuffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sequencesIndexOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGeneratedCommandsMemoryRequirementsInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGeneratedCommandsMemoryRequirementsInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineBindPoint));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pipeline));
    value->pipeline = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->indirectCommandsLayout));
    value->indirectCommandsLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSequencesCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceInheritedViewportScissorFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceInheritedViewportScissorFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->inheritedViewportScissor2D));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferInheritanceViewportScissorInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferInheritanceViewportScissorInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportScissor2D));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->viewportDepthCount));
    wrapper->pViewportDepths = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkViewport>>();
    bytes_read += wrapper->pViewportDepths->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pViewportDepths = wrapper->pViewportDepths->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->texelBufferAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassTransformBeginInfoQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassTransformBeginInfoQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->transform));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCommandBufferInheritanceRenderPassTransformInfoQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCommandBufferInheritanceRenderPassTransformInfoQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->transform));
    wrapper->renderArea = DecodeAllocator::Allocate<Decoded_VkRect2D>();
    wrapper->renderArea->decoded_value = &(value->renderArea);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->renderArea);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDeviceMemoryReportFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceMemoryReport));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceMemoryReportCallbackDataEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceMemoryReportCallbackDataEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryObjectId));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectType));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->objectHandle));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->heapIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceDeviceMemoryReportCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceDeviceMemoryReportCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pfnUserCallback));
    value->pfnUserCallback = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pUserData));
    value->pUserData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRobustness2FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRobustness2FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustBufferAccess2));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustImageAccess2));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->nullDescriptor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRobustness2PropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRobustness2PropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustStorageBufferAccessSizeAlignment));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->robustUniformBufferAccessSizeAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerCustomBorderColorCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerCustomBorderColorCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->customBorderColor = DecodeAllocator::Allocate<Decoded_VkClearColorValue>();
    wrapper->customBorderColor->decoded_value = &(value->customBorderColor);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->customBorderColor);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCustomBorderColorPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCustomBorderColorPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxCustomBorderColorSamplers));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceCustomBorderColorFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceCustomBorderColorFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->customBorderColors));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->customBorderColorWithoutFormat));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePresentBarrierFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePresentBarrierFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentBarrier));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSurfaceCapabilitiesPresentBarrierNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSurfaceCapabilitiesPresentBarrierNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentBarrierSupported));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSwapchainPresentBarrierCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSwapchainPresentBarrierCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->presentBarrierEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDiagnosticsConfigFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDiagnosticsConfigFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->diagnosticsConfig));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceDiagnosticsConfigCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceDiagnosticsConfigCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->graphicsPipelineLibrary));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->graphicsPipelineLibraryFastLinking));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->graphicsPipelineLibraryIndependentInterpolationDecoration));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkGraphicsPipelineLibraryCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkGraphicsPipelineLibraryCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderEarlyAndLateFragmentTests));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentShadingRateEnums));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->supersampleFragmentShadingRates));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->noInvocationFragmentShadingRates));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxFragmentShadingRateInvocationCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineFragmentShadingRateEnumStateCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineFragmentShadingRateEnumStateCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRateType));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->shadingRate));
    wrapper->combinerOps.SetExternalMemory(value->combinerOps, 2);
    bytes_read += wrapper->combinerOps.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureGeometryMotionTrianglesDataNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureGeometryMotionTrianglesDataNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->vertexData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->vertexData->decoded_value = &(value->vertexData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->vertexData);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureMotionInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureMotionInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInstances));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureMatrixMotionInstanceNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureMatrixMotionInstanceNV* value = wrapper->decoded_value;

    wrapper->transformT0 = DecodeAllocator::Allocate<Decoded_VkTransformMatrixKHR>();
    wrapper->transformT0->decoded_value = &(value->transformT0);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transformT0);
    wrapper->transformT1 = DecodeAllocator::Allocate<Decoded_VkTransformMatrixKHR>();
    wrapper->transformT1->decoded_value = &(value->transformT1);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transformT1);
    uint32_t temp_instanceCustomIndex;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceCustomIndex);
    value->instanceCustomIndex = temp_instanceCustomIndex;
    uint32_t temp_mask;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_mask);
    value->mask = temp_mask;
    uint32_t temp_instanceShaderBindingTableRecordOffset;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceShaderBindingTableRecordOffset);
    value->instanceShaderBindingTableRecordOffset = temp_instanceShaderBindingTableRecordOffset;
    VkGeometryInstanceFlagsKHR temp_flags;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &temp_flags);
    value->flags = temp_flags;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureReference));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSRTDataNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSRTDataNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sx));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->a));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->b));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pvx));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sy));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->c));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pvy));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sz));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->pvz));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->qx));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->qy));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->qz));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->qw));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tx));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->ty));
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->tz));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureSRTMotionInstanceNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureSRTMotionInstanceNV* value = wrapper->decoded_value;

    wrapper->transformT0 = DecodeAllocator::Allocate<Decoded_VkSRTDataNV>();
    wrapper->transformT0->decoded_value = &(value->transformT0);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transformT0);
    wrapper->transformT1 = DecodeAllocator::Allocate<Decoded_VkSRTDataNV>();
    wrapper->transformT1->decoded_value = &(value->transformT1);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transformT1);
    uint32_t temp_instanceCustomIndex;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceCustomIndex);
    value->instanceCustomIndex = temp_instanceCustomIndex;
    uint32_t temp_mask;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_mask);
    value->mask = temp_mask;
    uint32_t temp_instanceShaderBindingTableRecordOffset;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &temp_instanceShaderBindingTableRecordOffset);
    value->instanceShaderBindingTableRecordOffset = temp_instanceShaderBindingTableRecordOffset;
    VkGeometryInstanceFlagsKHR temp_flags;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &temp_flags);
    value->flags = temp_flags;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureReference));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayTracingMotionBlurFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingMotionBlur));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingMotionBlurPipelineTraceRaysIndirect));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->ycbcr2plane444Formats));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMap2FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityMapDeferred));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMap2PropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subsampledLoads));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subsampledCoarseReconstructionEarlyAccess));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxSubsampledArrayLayers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetSubsampledSamplers));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyCommandTransformInfoQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyCommandTransformInfoQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->transform));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageCompressionControlFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageCompressionControlFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageCompressionControl));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageCompressionControlEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageCompressionControlEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->compressionControlPlaneCount));
    bytes_read += wrapper->pFixedRateFlags.DecodeFlags((buffer + bytes_read), (buffer_size - bytes_read));
    value->pFixedRateFlags = wrapper->pFixedRateFlags.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubresourceLayout2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubresourceLayout2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->subresourceLayout = DecodeAllocator::Allocate<Decoded_VkSubresourceLayout>();
    wrapper->subresourceLayout->decoded_value = &(value->subresourceLayout);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->subresourceLayout);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageSubresource2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageSubresource2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->imageSubresource = DecodeAllocator::Allocate<Decoded_VkImageSubresource>();
    wrapper->imageSubresource->decoded_value = &(value->imageSubresource);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->imageSubresource);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageCompressionPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageCompressionPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageCompressionFlags));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageCompressionFixedRateFlags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentFeedbackLoopLayout));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevice4444FormatsFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevice4444FormatsFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->formatA4R4G4B4));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->formatA4B4G4R4));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFaultFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFaultFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceFault));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceFaultVendorBinary));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceFaultCountsEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceFaultCountsEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressInfoCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorInfoCount));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorBinarySize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceFaultAddressInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceFaultAddressInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressType));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->reportedAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->addressPrecision));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceFaultVendorInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceFaultVendorInfoEXT* value = wrapper->decoded_value;

    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorFaultCode));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorFaultData));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceFaultInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceFaultInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    wrapper->pAddressInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDeviceFaultAddressInfoEXT>>();
    bytes_read += wrapper->pAddressInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAddressInfos = wrapper->pAddressInfos->GetPointer();
    wrapper->pVendorInfos = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkDeviceFaultVendorInfoEXT>>();
    bytes_read += wrapper->pVendorInfos->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVendorInfos = wrapper->pVendorInfos->GetPointer();
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pVendorBinaryData));
    value->pVendorBinaryData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceFaultVendorBinaryHeaderVersionOneEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceFaultVendorBinaryHeaderVersionOneEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->headerSize));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->headerVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vendorID));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceID));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->driverVersion));
    wrapper->pipelineCacheUUID.SetExternalMemory(value->pipelineCacheUUID, VK_UUID_SIZE);
    bytes_read += wrapper->pipelineCacheUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->applicationNameOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->applicationVersion));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->engineNameOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationOrderColorAttachmentAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationOrderDepthAttachmentAccess));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationOrderStencilAttachmentAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->formatRgba10x6WithoutYCbCrSampler));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDirectFBSurfaceCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDirectFBSurfaceCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dfb));
    value->dfb = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->surface));
    value->surface = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mutableDescriptorType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMutableDescriptorTypeListEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMutableDescriptorTypeListEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorTypeCount));
    bytes_read += wrapper->pDescriptorTypes.DecodeEnum((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDescriptorTypes = wrapper->pDescriptorTypes.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMutableDescriptorTypeCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMutableDescriptorTypeCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->mutableDescriptorTypeListCount));
    wrapper->pMutableDescriptorTypeLists = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMutableDescriptorTypeListEXT>>();
    bytes_read += wrapper->pMutableDescriptorTypeLists->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pMutableDescriptorTypeLists = wrapper->pMutableDescriptorTypeLists->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexInputDynamicState));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkVertexInputBindingDescription2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkVertexInputBindingDescription2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->inputRate));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->divisor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkVertexInputAttributeDescription2EXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkVertexInputAttributeDescription2EXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->location));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDrmPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDrmPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->hasPrimary));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->hasRender));
    bytes_read += ValueDecoder::DecodeInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primaryMajor));
    bytes_read += ValueDecoder::DecodeInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primaryMinor));
    bytes_read += ValueDecoder::DecodeInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->renderMajor));
    bytes_read += ValueDecoder::DecodeInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->renderMinor));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceAddressBindingReportFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceAddressBindingReportFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->reportAddressBinding));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDeviceAddressBindingCallbackDataEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDeviceAddressBindingCallbackDataEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->bindingType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDepthClipControlFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDepthClipControlFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClipControl));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineViewportDepthClipControlCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineViewportDepthClipControlCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->negativeOneToOne));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveTopologyListRestart));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveTopologyPatchListRestart));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportMemoryZirconHandleInfoFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportMemoryZirconHandleInfoFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->handle));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryZirconHandlePropertiesFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryZirconHandlePropertiesFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->memoryTypeBits));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryGetZirconHandleInfoFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryGetZirconHandleInfoFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImportSemaphoreZirconHandleInfoFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImportSemaphoreZirconHandleInfoFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->zirconHandle));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSemaphoreGetZirconHandleInfoFUCHSIA* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSemaphoreGetZirconHandleInfoFUCHSIA* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->semaphore));
    value->semaphore = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceInvocationMaskFeaturesHUAWEI* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->invocationMask));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMemoryGetRemoteAddressInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMemoryGetRemoteAddressInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->memory));
    value->memory = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->handleType));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExternalMemoryRDMAFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->externalMemoryRDMA));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multisampledRenderToSingleSampled));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassResolvePerformanceQueryEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassResolvePerformanceQueryEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->optimal));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMultisampledRenderToSingleSampledInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMultisampledRenderToSingleSampledInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multisampledRenderToSingleSampledEnable));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->rasterizationSamples));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExtendedDynamicState2FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState2));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState2LogicOp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState2PatchControlPoints));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkScreenSurfaceCreateInfoQNX* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkScreenSurfaceCreateInfoQNX* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->context));
    value->context = nullptr;
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->window));
    value->window = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceColorWriteEnableFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceColorWriteEnableFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorWriteEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineColorWriteCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineColorWriteCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->attachmentCount));
    bytes_read += wrapper->pColorWriteEnables.DecodeVkBool32((buffer + bytes_read), (buffer_size - bytes_read));
    value->pColorWriteEnables = wrapper->pColorWriteEnables.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitivesGeneratedQuery));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitivesGeneratedQueryWithRasterizerDiscard));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitivesGeneratedQueryWithNonZeroStreams));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageViewMinLodFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageViewMinLodFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minLod));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewMinLodCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewMinLodCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFloatValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->minLod));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultiDrawFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultiDrawFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiDraw));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMultiDrawPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMultiDrawPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMultiDrawCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMultiDrawInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMultiDrawInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstVertex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMultiDrawIndexedInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMultiDrawIndexedInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstIndex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexCount));
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImage2DViewOf3DFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->image2DViewOf3D));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->sampler2DViewOf3D));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapUsageEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapUsageEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->count));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subdivisionLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapBuildInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapBuildInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstMicromap));
    value->dstMicromap = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->usageCountsCount));
    wrapper->pUsageCounts = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMicromapUsageEXT>>();
    bytes_read += wrapper->pUsageCounts->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pUsageCounts = wrapper->pUsageCounts->GetPointer();
    wrapper->ppUsageCounts = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMicromapUsageEXT*>>();
    bytes_read += wrapper->ppUsageCounts->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppUsageCounts = wrapper->ppUsageCounts->GetPointer();
    wrapper->data = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->data->decoded_value = &(value->data);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->data);
    wrapper->scratchData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressKHR>();
    wrapper->scratchData->decoded_value = &(value->scratchData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->scratchData);
    wrapper->triangleArray = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->triangleArray->decoded_value = &(value->triangleArray);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->triangleArray);
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->triangleArrayStride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->createFlags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceAddress));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceOpacityMicromapFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceOpacityMicromapFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->micromap));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->micromapCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->micromapHostCommands));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceOpacityMicromapPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceOpacityMicromapPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxOpacity2StateSubdivisionLevel));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxOpacity4StateSubdivisionLevel));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapVersionInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapVersionInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += wrapper->pVersionData.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVersionData = wrapper->pVersionData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyMicromapToMemoryInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyMicromapToMemoryInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->src));
    value->src = VK_NULL_HANDLE;
    wrapper->dst = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressKHR>();
    wrapper->dst->decoded_value = &(value->dst);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dst);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyMemoryToMicromapInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyMemoryToMicromapInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->src = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->src->decoded_value = &(value->src);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->src);
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dst));
    value->dst = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyMicromapInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyMicromapInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->src));
    value->src = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dst));
    value->dst = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapBuildSizesInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapBuildSizesInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->micromapSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->buildScratchSize));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->discardable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureTrianglesOpacityMicromapEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureTrianglesOpacityMicromapEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexType));
    wrapper->indexBuffer = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->indexBuffer->decoded_value = &(value->indexBuffer);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->indexBuffer);
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->baseTriangle));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->usageCountsCount));
    wrapper->pUsageCounts = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMicromapUsageEXT>>();
    bytes_read += wrapper->pUsageCounts->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pUsageCounts = wrapper->pUsageCounts->GetPointer();
    wrapper->ppUsageCounts = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkMicromapUsageEXT*>>();
    bytes_read += wrapper->ppUsageCounts->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppUsageCounts = wrapper->ppUsageCounts->GetPointer();
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->micromap));
    value->micromap = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkMicromapTriangleEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkMicromapTriangleEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dataOffset));
    bytes_read += ValueDecoder::DecodeUInt16Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subdivisionLevel));
    bytes_read += ValueDecoder::DecodeUInt16Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceBorderColorSwizzleFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->borderColorSwizzle));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->borderColorSwizzleFromImage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSamplerBorderColorComponentMappingCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSamplerBorderColorComponentMappingCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->components = DecodeAllocator::Allocate<Decoded_VkComponentMapping>();
    wrapper->components->decoded_value = &(value->components);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->components);
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srgb));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pageableDeviceLocalMemory));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorSetHostMapping));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetBindingReferenceVALVE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetBindingReferenceVALVE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->descriptorSetLayout));
    value->descriptorSetLayout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->binding));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDescriptorSetLayoutHostMappingInfoVALVE* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDescriptorSetLayoutHostMappingInfoVALVE* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeSizeTValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceDepthClampZeroOneFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depthClampZeroOne));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->nonSeamlessCubeMap));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityMapOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->fragmentDensityOffsetGranularity = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->fragmentDensityOffsetGranularity->decoded_value = &(value->fragmentDensityOffsetGranularity);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->fragmentDensityOffsetGranularity);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkSubpassFragmentDensityMapOffsetEndInfoQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkSubpassFragmentDensityMapOffsetEndInfoQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->fragmentDensityOffsetCount));
    wrapper->pFragmentDensityOffsets = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkOffset2D>>();
    bytes_read += wrapper->pFragmentDensityOffsets->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pFragmentDensityOffsets = wrapper->pFragmentDensityOffsets->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceLinearColorAttachmentFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceLinearColorAttachmentFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->linearColorAttachment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageCompressionControlSwapchain));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkImageViewSampleWeightCreateInfoQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkImageViewSampleWeightCreateInfoQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->filterCenter = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->filterCenter->decoded_value = &(value->filterCenter);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->filterCenter);
    wrapper->filterSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->filterSize->decoded_value = &(value->filterSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->filterSize);
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->numPhases));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageProcessingFeaturesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageProcessingFeaturesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureSampleWeighted));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureBoxFilter));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->textureBlockMatch));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceImageProcessingPropertiesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceImageProcessingPropertiesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxWeightFilterPhases));
    wrapper->maxWeightFilterDimension = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxWeightFilterDimension->decoded_value = &(value->maxWeightFilterDimension);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxWeightFilterDimension);
    wrapper->maxBlockMatchRegion = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxBlockMatchRegion->decoded_value = &(value->maxBlockMatchRegion);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxBlockMatchRegion);
    wrapper->maxBoxFilterBlockSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->maxBoxFilterBlockSize->decoded_value = &(value->maxBoxFilterBlockSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->maxBoxFilterBlockSize);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExtendedDynamicState3FeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3TessellationDomainOrigin));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3DepthClampEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3PolygonMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3RasterizationSamples));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3SampleMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3AlphaToCoverageEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3AlphaToOneEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3LogicOpEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ColorBlendEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ColorBlendEquation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ColorWriteMask));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3RasterizationStream));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ConservativeRasterizationMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ExtraPrimitiveOverestimationSize));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3DepthClipEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3SampleLocationsEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ColorBlendAdvanced));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ProvokingVertexMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3LineRasterizationMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3LineStippleEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3DepthClipNegativeOneToOne));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ViewportWScalingEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ViewportSwizzle));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageToColorEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageToColorLocation));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageModulationMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageModulationTableEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageModulationTable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3CoverageReductionMode));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3RepresentativeFragmentTestEnable));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->extendedDynamicState3ShadingRateImageEnable));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceExtendedDynamicState3PropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dynamicPrimitiveTopologyUnrestricted));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkColorBlendEquationEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkColorBlendEquationEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcColorBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstColorBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->colorBlendOp));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcAlphaBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstAlphaBlendFactor));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->alphaBlendOp));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkColorBlendAdvancedEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkColorBlendAdvancedEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->advancedBlendOp));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->srcPremultiplied));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->dstPremultiplied));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->blendOverlap));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->clampResults));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassMergeFeedback));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassCreationControlEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassCreationControlEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->disallowMerging));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassCreationFeedbackInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassCreationFeedbackInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->postMergeSubpassCount));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassCreationFeedbackCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassCreationFeedbackCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pRenderPassFeedback = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRenderPassCreationFeedbackInfoEXT>>();
    bytes_read += wrapper->pRenderPassFeedback->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRenderPassFeedback = wrapper->pRenderPassFeedback->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassSubpassFeedbackInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassSubpassFeedbackInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->subpassMergeStatus));
    wrapper->description.SetExternalMemory(value->description, VK_MAX_DESCRIPTION_SIZE);
    bytes_read += wrapper->description.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->postMergeIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRenderPassSubpassFeedbackCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRenderPassSubpassFeedbackCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->pSubpassFeedback = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRenderPassSubpassFeedbackInfoEXT>>();
    bytes_read += wrapper->pSubpassFeedback->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pSubpassFeedback = wrapper->pSubpassFeedback->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderModuleIdentifier));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->shaderModuleIdentifierAlgorithmUUID.SetExternalMemory(value->shaderModuleIdentifierAlgorithmUUID, VK_UUID_SIZE);
    bytes_read += wrapper->shaderModuleIdentifierAlgorithmUUID.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPipelineShaderStageModuleIdentifierCreateInfoEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPipelineShaderStageModuleIdentifierCreateInfoEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->identifierSize));
    bytes_read += wrapper->pIdentifier.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    value->pIdentifier = wrapper->pIdentifier.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkShaderModuleIdentifierEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkShaderModuleIdentifierEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->identifierSize));
    wrapper->identifier.SetExternalMemory(value->identifier, VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT);
    bytes_read += wrapper->identifier.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceOpticalFlowFeaturesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceOpticalFlowFeaturesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->opticalFlow));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceOpticalFlowPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceOpticalFlowPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedOutputGridSizes));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->supportedHintGridSizes));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->hintSupported));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->costSupported));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->bidirectionalFlowSupported));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->globalFlowSupported));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minWidth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minHeight));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxWidth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxHeight));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxNumRegionsOfInterest));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOpticalFlowImageFormatInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOpticalFlowImageFormatInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->usage));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOpticalFlowImageFormatPropertiesNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOpticalFlowImageFormatPropertiesNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->format));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOpticalFlowSessionCreateInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOpticalFlowSessionCreateInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->imageFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flowVectorFormat));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->costFormat));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->outputGridSize));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->hintGridSize));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->performanceLevel));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOpticalFlowSessionCreatePrivateDataInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOpticalFlowSessionCreatePrivateDataInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->id));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pPrivateData));
    value->pPrivateData = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkOpticalFlowExecuteInfoNV* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkOpticalFlowExecuteInfoNV* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->regionCount));
    wrapper->pRegions = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRect2D>>();
    bytes_read += wrapper->pRegions->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pRegions = wrapper->pRegions->GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceLegacyDitheringFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceLegacyDitheringFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->legacyDithering));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDevicePipelineProtectedAccessFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->pipelineProtectedAccess));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceTilePropertiesFeaturesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceTilePropertiesFeaturesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->tileProperties));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTilePropertiesQCOM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTilePropertiesQCOM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->tileSize = DecodeAllocator::Allocate<Decoded_VkExtent3D>();
    wrapper->tileSize->decoded_value = &(value->tileSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->tileSize);
    wrapper->apronSize = DecodeAllocator::Allocate<Decoded_VkExtent2D>();
    wrapper->apronSize->decoded_value = &(value->apronSize);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->apronSize);
    wrapper->origin = DecodeAllocator::Allocate<Decoded_VkOffset2D>();
    wrapper->origin->decoded_value = &(value->origin);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->origin);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceAmigoProfilingFeaturesSEC* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceAmigoProfilingFeaturesSEC* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->amigoProfiling));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAmigoProfilingSubmitInfoSEC* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAmigoProfilingSubmitInfoSEC* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstDrawTimestamp));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->swapBufferTimestamp));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderCoreBuiltins));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderCoreCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderWarpsPerCore));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureBuildRangeInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureBuildRangeInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveOffset));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->firstVertex));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->transformOffset));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureGeometryTrianglesDataKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureGeometryTrianglesDataKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexFormat));
    wrapper->vertexData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->vertexData->decoded_value = &(value->vertexData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->vertexData);
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->vertexStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxVertex));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->indexType));
    wrapper->indexData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->indexData->decoded_value = &(value->indexData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->indexData);
    wrapper->transformData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->transformData->decoded_value = &(value->transformData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->transformData);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureGeometryAabbsDataKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureGeometryAabbsDataKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->data = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->data->decoded_value = &(value->data);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->data);
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureGeometryInstancesDataKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureGeometryInstancesDataKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->arrayOfPointers));
    wrapper->data = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->data->decoded_value = &(value->data);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->data);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureBuildGeometryInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureBuildGeometryInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->srcAccelerationStructure));
    value->srcAccelerationStructure = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dstAccelerationStructure));
    value->dstAccelerationStructure = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->geometryCount));
    wrapper->pGeometries = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAccelerationStructureGeometryKHR>>();
    bytes_read += wrapper->pGeometries->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pGeometries = wrapper->pGeometries->GetPointer();
    wrapper->ppGeometries = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkAccelerationStructureGeometryKHR*>>();
    bytes_read += wrapper->ppGeometries->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->ppGeometries = wrapper->ppGeometries->GetPointer();
    wrapper->scratchData = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressKHR>();
    wrapper->scratchData->decoded_value = &(value->scratchData);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->scratchData);

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->createFlags));
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->buffer));
    value->buffer = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->offset));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceAddress));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkWriteDescriptorSetAccelerationStructureKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkWriteDescriptorSetAccelerationStructureKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureCount));
    bytes_read += wrapper->pAccelerationStructures.Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pAccelerationStructures = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceAccelerationStructureFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceAccelerationStructureFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructure));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureIndirectBuild));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureHostCommands));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->descriptorBindingAccelerationStructureUpdateAfterBind));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceAccelerationStructurePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceAccelerationStructurePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxGeometryCount));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxInstanceCount));
    bytes_read += ValueDecoder::DecodeUInt64Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPrimitiveCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorAccelerationStructures));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPerStageDescriptorUpdateAfterBindAccelerationStructures));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetAccelerationStructures));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxDescriptorSetUpdateAfterBindAccelerationStructures));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->minAccelerationStructureScratchOffsetAlignment));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureDeviceAddressInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureDeviceAddressInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->accelerationStructure));
    value->accelerationStructure = VK_NULL_HANDLE;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureVersionInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureVersionInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += wrapper->pVersionData.DecodeUInt8((buffer + bytes_read), (buffer_size - bytes_read));
    value->pVersionData = wrapper->pVersionData.GetPointer();

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyAccelerationStructureToMemoryInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyAccelerationStructureToMemoryInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->src));
    value->src = VK_NULL_HANDLE;
    wrapper->dst = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressKHR>();
    wrapper->dst->decoded_value = &(value->dst);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->dst);
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyMemoryToAccelerationStructureInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyMemoryToAccelerationStructureInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    wrapper->src = DecodeAllocator::Allocate<Decoded_VkDeviceOrHostAddressConstKHR>();
    wrapper->src->decoded_value = &(value->src);
    bytes_read += DecodeStruct((buffer + bytes_read), (buffer_size - bytes_read), wrapper->src);
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dst));
    value->dst = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkCopyAccelerationStructureInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkCopyAccelerationStructureInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->src));
    value->src = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->dst));
    value->dst = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->mode));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkAccelerationStructureBuildSizesInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkAccelerationStructureBuildSizesInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->accelerationStructureSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->updateScratchSize));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->buildScratchSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRayTracingShaderGroupCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRayTracingShaderGroupCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->type));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->generalShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->closestHitShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->anyHitShader));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->intersectionShader));
    bytes_read += ValueDecoder::DecodeAddress((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pShaderGroupCaptureReplayHandle));
    value->pShaderGroupCaptureReplayHandle = nullptr;

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRayTracingPipelineInterfaceCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPipelineRayPayloadSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPipelineRayHitAttributeSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkRayTracingPipelineCreateInfoKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkRayTracingPipelineCreateInfoKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeFlagsValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->flags));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->stageCount));
    wrapper->pStages = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineShaderStageCreateInfo>>();
    bytes_read += wrapper->pStages->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pStages = wrapper->pStages->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCount));
    wrapper->pGroups = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRayTracingShaderGroupCreateInfoKHR>>();
    bytes_read += wrapper->pGroups->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pGroups = wrapper->pGroups->GetPointer();
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPipelineRayRecursionDepth));
    wrapper->pLibraryInfo = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineLibraryCreateInfoKHR>>();
    bytes_read += wrapper->pLibraryInfo->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pLibraryInfo = wrapper->pLibraryInfo->GetPointer();
    wrapper->pLibraryInterface = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkRayTracingPipelineInterfaceCreateInfoKHR>>();
    bytes_read += wrapper->pLibraryInterface->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pLibraryInterface = wrapper->pLibraryInterface->GetPointer();
    wrapper->pDynamicState = DecodeAllocator::Allocate<StructPointerDecoder<Decoded_VkPipelineDynamicStateCreateInfo>>();
    bytes_read += wrapper->pDynamicState->Decode((buffer + bytes_read), (buffer_size - bytes_read));
    value->pDynamicState = wrapper->pDynamicState->GetPointer();
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->layout));
    value->layout = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeHandleIdValue((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->basePipelineHandle));
    value->basePipelineHandle = VK_NULL_HANDLE;
    bytes_read += ValueDecoder::DecodeInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->basePipelineIndex));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayTracingPipelineFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayTracingPipelineFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingPipeline));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingPipelineShaderGroupHandleCaptureReplay));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingPipelineShaderGroupHandleCaptureReplayMixed));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTracingPipelineTraceRaysIndirect));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayTraversalPrimitiveCulling));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayTracingPipelinePropertiesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayTracingPipelinePropertiesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupHandleSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxRayRecursionDepth));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxShaderGroupStride));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupBaseAlignment));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupHandleCaptureReplaySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxRayDispatchInvocationCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->shaderGroupHandleAlignment));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxRayHitAttributeSize));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkStridedDeviceAddressRegionKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkStridedDeviceAddressRegionKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeVkDeviceAddressValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->deviceAddress));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->stride));
    bytes_read += ValueDecoder::DecodeVkDeviceSizeValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->size));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkTraceRaysIndirectCommandKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkTraceRaysIndirectCommandKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->width));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->height));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->depth));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceRayQueryFeaturesKHR* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceRayQueryFeaturesKHR* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->rayQuery));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMeshShaderFeaturesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMeshShaderFeaturesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->taskShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->multiviewMeshShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->primitiveFragmentShadingRateMeshShader));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshShaderQueries));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkPhysicalDeviceMeshShaderPropertiesEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkPhysicalDeviceMeshShaderPropertiesEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeEnumValue((buffer + bytes_read), (buffer_size - bytes_read), &(value->sType));
    bytes_read += DecodePNextStruct((buffer + bytes_read), (buffer_size - bytes_read), &(wrapper->pNext));
    value->pNext = wrapper->pNext ? wrapper->pNext->GetPointer() : nullptr;
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskWorkGroupTotalCount));
    wrapper->maxTaskWorkGroupCount.SetExternalMemory(value->maxTaskWorkGroupCount, 3);
    bytes_read += wrapper->maxTaskWorkGroupCount.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskWorkGroupInvocations));
    wrapper->maxTaskWorkGroupSize.SetExternalMemory(value->maxTaskWorkGroupSize, 3);
    bytes_read += wrapper->maxTaskWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskPayloadSize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskSharedMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxTaskPayloadAndSharedMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshWorkGroupTotalCount));
    wrapper->maxMeshWorkGroupCount.SetExternalMemory(value->maxMeshWorkGroupCount, 3);
    bytes_read += wrapper->maxMeshWorkGroupCount.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshWorkGroupInvocations));
    wrapper->maxMeshWorkGroupSize.SetExternalMemory(value->maxMeshWorkGroupSize, 3);
    bytes_read += wrapper->maxMeshWorkGroupSize.DecodeUInt32((buffer + bytes_read), (buffer_size - bytes_read));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshSharedMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshPayloadAndSharedMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshPayloadAndOutputMemorySize));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputComponents));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputVertices));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputPrimitives));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshOutputLayers));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxMeshMultiviewViewCount));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshOutputPerVertexGranularity));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->meshOutputPerPrimitiveGranularity));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPreferredTaskWorkGroupInvocations));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->maxPreferredMeshWorkGroupInvocations));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->prefersLocalInvocationVertexOutput));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->prefersLocalInvocationPrimitiveOutput));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->prefersCompactVertexOutput));
    bytes_read += ValueDecoder::DecodeVkBool32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->prefersCompactPrimitiveOutput));

    return bytes_read;
}

size_t DecodeStruct(const uint8_t* buffer, size_t buffer_size, Decoded_VkDrawMeshTasksIndirectCommandEXT* wrapper)
{
    assert((wrapper != nullptr) && (wrapper->decoded_value != nullptr));

    size_t bytes_read = 0;
    VkDrawMeshTasksIndirectCommandEXT* value = wrapper->decoded_value;

    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCountX));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCountY));
    bytes_read += ValueDecoder::DecodeUInt32Value((buffer + bytes_read), (buffer_size - bytes_read), &(value->groupCountZ));

    return bytes_read;
}

GFXRECON_END_NAMESPACE(decode)
GFXRECON_END_NAMESPACE(gfxrecon)
