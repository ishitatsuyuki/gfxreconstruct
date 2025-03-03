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

#include "generated/generated_vulkan_struct_encoders.h"

#include "encode/custom_vulkan_struct_encoders.h"
#include "encode/parameter_encoder.h"
#include "encode/struct_pointer_encoder.h"
#include "util/defines.h"

#include "vulkan/vulkan.h"

GFXRECON_BEGIN_NAMESPACE(gfxrecon)
GFXRECON_BEGIN_NAMESPACE(encode)

void EncodeStruct(ParameterEncoder* encoder, const VkExtent2D& value)
{
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExtent3D& value)
{
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeUInt32Value(value.depth);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOffset2D& value)
{
    encoder->EncodeInt32Value(value.x);
    encoder->EncodeInt32Value(value.y);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOffset3D& value)
{
    encoder->EncodeInt32Value(value.x);
    encoder->EncodeInt32Value(value.y);
    encoder->EncodeInt32Value(value.z);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRect2D& value)
{
    EncodeStruct(encoder, value.offset);
    EncodeStruct(encoder, value.extent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferMemoryBarrier& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.srcAccessMask);
    encoder->EncodeFlagsValue(value.dstAccessMask);
    encoder->EncodeUInt32Value(value.srcQueueFamilyIndex);
    encoder->EncodeUInt32Value(value.dstQueueFamilyIndex);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDispatchIndirectCommand& value)
{
    encoder->EncodeUInt32Value(value.x);
    encoder->EncodeUInt32Value(value.y);
    encoder->EncodeUInt32Value(value.z);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrawIndexedIndirectCommand& value)
{
    encoder->EncodeUInt32Value(value.indexCount);
    encoder->EncodeUInt32Value(value.instanceCount);
    encoder->EncodeUInt32Value(value.firstIndex);
    encoder->EncodeInt32Value(value.vertexOffset);
    encoder->EncodeUInt32Value(value.firstInstance);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrawIndirectCommand& value)
{
    encoder->EncodeUInt32Value(value.vertexCount);
    encoder->EncodeUInt32Value(value.instanceCount);
    encoder->EncodeUInt32Value(value.firstVertex);
    encoder->EncodeUInt32Value(value.firstInstance);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSubresourceRange& value)
{
    encoder->EncodeFlagsValue(value.aspectMask);
    encoder->EncodeUInt32Value(value.baseMipLevel);
    encoder->EncodeUInt32Value(value.levelCount);
    encoder->EncodeUInt32Value(value.baseArrayLayer);
    encoder->EncodeUInt32Value(value.layerCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageMemoryBarrier& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.srcAccessMask);
    encoder->EncodeFlagsValue(value.dstAccessMask);
    encoder->EncodeEnumValue(value.oldLayout);
    encoder->EncodeEnumValue(value.newLayout);
    encoder->EncodeUInt32Value(value.srcQueueFamilyIndex);
    encoder->EncodeUInt32Value(value.dstQueueFamilyIndex);
    encoder->EncodeHandleValue(value.image);
    EncodeStruct(encoder, value.subresourceRange);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryBarrier& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.srcAccessMask);
    encoder->EncodeFlagsValue(value.dstAccessMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCacheHeaderVersionOne& value)
{
    encoder->EncodeUInt32Value(value.headerSize);
    encoder->EncodeEnumValue(value.headerVersion);
    encoder->EncodeUInt32Value(value.vendorID);
    encoder->EncodeUInt32Value(value.deviceID);
    encoder->EncodeUInt8Array(value.pipelineCacheUUID, VK_UUID_SIZE);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAllocationCallbacks& value)
{
    encoder->EncodeVoidPtr(value.pUserData);
    encoder->EncodeFunctionPtr(value.pfnAllocation);
    encoder->EncodeFunctionPtr(value.pfnReallocation);
    encoder->EncodeFunctionPtr(value.pfnFree);
    encoder->EncodeFunctionPtr(value.pfnInternalAllocation);
    encoder->EncodeFunctionPtr(value.pfnInternalFree);
}

void EncodeStruct(ParameterEncoder* encoder, const VkApplicationInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.pApplicationName);
    encoder->EncodeUInt32Value(value.applicationVersion);
    encoder->EncodeString(value.pEngineName);
    encoder->EncodeUInt32Value(value.engineVersion);
    encoder->EncodeUInt32Value(value.apiVersion);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFormatProperties& value)
{
    encoder->EncodeFlagsValue(value.linearTilingFeatures);
    encoder->EncodeFlagsValue(value.optimalTilingFeatures);
    encoder->EncodeFlagsValue(value.bufferFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageFormatProperties& value)
{
    EncodeStruct(encoder, value.maxExtent);
    encoder->EncodeUInt32Value(value.maxMipLevels);
    encoder->EncodeUInt32Value(value.maxArrayLayers);
    encoder->EncodeFlagsValue(value.sampleCounts);
    encoder->EncodeVkDeviceSizeValue(value.maxResourceSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkInstanceCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    EncodeStructPtr(encoder, value.pApplicationInfo);
    encoder->EncodeUInt32Value(value.enabledLayerCount);
    encoder->EncodeStringArray(value.ppEnabledLayerNames, value.enabledLayerCount);
    encoder->EncodeUInt32Value(value.enabledExtensionCount);
    encoder->EncodeStringArray(value.ppEnabledExtensionNames, value.enabledExtensionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryHeap& value)
{
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryType& value)
{
    encoder->EncodeFlagsValue(value.propertyFlags);
    encoder->EncodeUInt32Value(value.heapIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFeatures& value)
{
    encoder->EncodeVkBool32Value(value.robustBufferAccess);
    encoder->EncodeVkBool32Value(value.fullDrawIndexUint32);
    encoder->EncodeVkBool32Value(value.imageCubeArray);
    encoder->EncodeVkBool32Value(value.independentBlend);
    encoder->EncodeVkBool32Value(value.geometryShader);
    encoder->EncodeVkBool32Value(value.tessellationShader);
    encoder->EncodeVkBool32Value(value.sampleRateShading);
    encoder->EncodeVkBool32Value(value.dualSrcBlend);
    encoder->EncodeVkBool32Value(value.logicOp);
    encoder->EncodeVkBool32Value(value.multiDrawIndirect);
    encoder->EncodeVkBool32Value(value.drawIndirectFirstInstance);
    encoder->EncodeVkBool32Value(value.depthClamp);
    encoder->EncodeVkBool32Value(value.depthBiasClamp);
    encoder->EncodeVkBool32Value(value.fillModeNonSolid);
    encoder->EncodeVkBool32Value(value.depthBounds);
    encoder->EncodeVkBool32Value(value.wideLines);
    encoder->EncodeVkBool32Value(value.largePoints);
    encoder->EncodeVkBool32Value(value.alphaToOne);
    encoder->EncodeVkBool32Value(value.multiViewport);
    encoder->EncodeVkBool32Value(value.samplerAnisotropy);
    encoder->EncodeVkBool32Value(value.textureCompressionETC2);
    encoder->EncodeVkBool32Value(value.textureCompressionASTC_LDR);
    encoder->EncodeVkBool32Value(value.textureCompressionBC);
    encoder->EncodeVkBool32Value(value.occlusionQueryPrecise);
    encoder->EncodeVkBool32Value(value.pipelineStatisticsQuery);
    encoder->EncodeVkBool32Value(value.vertexPipelineStoresAndAtomics);
    encoder->EncodeVkBool32Value(value.fragmentStoresAndAtomics);
    encoder->EncodeVkBool32Value(value.shaderTessellationAndGeometryPointSize);
    encoder->EncodeVkBool32Value(value.shaderImageGatherExtended);
    encoder->EncodeVkBool32Value(value.shaderStorageImageExtendedFormats);
    encoder->EncodeVkBool32Value(value.shaderStorageImageMultisample);
    encoder->EncodeVkBool32Value(value.shaderStorageImageReadWithoutFormat);
    encoder->EncodeVkBool32Value(value.shaderStorageImageWriteWithoutFormat);
    encoder->EncodeVkBool32Value(value.shaderUniformBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderSampledImageArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageImageArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderClipDistance);
    encoder->EncodeVkBool32Value(value.shaderCullDistance);
    encoder->EncodeVkBool32Value(value.shaderFloat64);
    encoder->EncodeVkBool32Value(value.shaderInt64);
    encoder->EncodeVkBool32Value(value.shaderInt16);
    encoder->EncodeVkBool32Value(value.shaderResourceResidency);
    encoder->EncodeVkBool32Value(value.shaderResourceMinLod);
    encoder->EncodeVkBool32Value(value.sparseBinding);
    encoder->EncodeVkBool32Value(value.sparseResidencyBuffer);
    encoder->EncodeVkBool32Value(value.sparseResidencyImage2D);
    encoder->EncodeVkBool32Value(value.sparseResidencyImage3D);
    encoder->EncodeVkBool32Value(value.sparseResidency2Samples);
    encoder->EncodeVkBool32Value(value.sparseResidency4Samples);
    encoder->EncodeVkBool32Value(value.sparseResidency8Samples);
    encoder->EncodeVkBool32Value(value.sparseResidency16Samples);
    encoder->EncodeVkBool32Value(value.sparseResidencyAliased);
    encoder->EncodeVkBool32Value(value.variableMultisampleRate);
    encoder->EncodeVkBool32Value(value.inheritedQueries);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceLimits& value)
{
    encoder->EncodeUInt32Value(value.maxImageDimension1D);
    encoder->EncodeUInt32Value(value.maxImageDimension2D);
    encoder->EncodeUInt32Value(value.maxImageDimension3D);
    encoder->EncodeUInt32Value(value.maxImageDimensionCube);
    encoder->EncodeUInt32Value(value.maxImageArrayLayers);
    encoder->EncodeUInt32Value(value.maxTexelBufferElements);
    encoder->EncodeUInt32Value(value.maxUniformBufferRange);
    encoder->EncodeUInt32Value(value.maxStorageBufferRange);
    encoder->EncodeUInt32Value(value.maxPushConstantsSize);
    encoder->EncodeUInt32Value(value.maxMemoryAllocationCount);
    encoder->EncodeUInt32Value(value.maxSamplerAllocationCount);
    encoder->EncodeVkDeviceSizeValue(value.bufferImageGranularity);
    encoder->EncodeVkDeviceSizeValue(value.sparseAddressSpaceSize);
    encoder->EncodeUInt32Value(value.maxBoundDescriptorSets);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorSamplers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUniformBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorStorageBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorSampledImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorStorageImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorInputAttachments);
    encoder->EncodeUInt32Value(value.maxPerStageResources);
    encoder->EncodeUInt32Value(value.maxDescriptorSetSamplers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUniformBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUniformBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetStorageBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetStorageBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetSampledImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetStorageImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetInputAttachments);
    encoder->EncodeUInt32Value(value.maxVertexInputAttributes);
    encoder->EncodeUInt32Value(value.maxVertexInputBindings);
    encoder->EncodeUInt32Value(value.maxVertexInputAttributeOffset);
    encoder->EncodeUInt32Value(value.maxVertexInputBindingStride);
    encoder->EncodeUInt32Value(value.maxVertexOutputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationGenerationLevel);
    encoder->EncodeUInt32Value(value.maxTessellationPatchSize);
    encoder->EncodeUInt32Value(value.maxTessellationControlPerVertexInputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationControlPerVertexOutputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationControlPerPatchOutputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationControlTotalOutputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationEvaluationInputComponents);
    encoder->EncodeUInt32Value(value.maxTessellationEvaluationOutputComponents);
    encoder->EncodeUInt32Value(value.maxGeometryShaderInvocations);
    encoder->EncodeUInt32Value(value.maxGeometryInputComponents);
    encoder->EncodeUInt32Value(value.maxGeometryOutputComponents);
    encoder->EncodeUInt32Value(value.maxGeometryOutputVertices);
    encoder->EncodeUInt32Value(value.maxGeometryTotalOutputComponents);
    encoder->EncodeUInt32Value(value.maxFragmentInputComponents);
    encoder->EncodeUInt32Value(value.maxFragmentOutputAttachments);
    encoder->EncodeUInt32Value(value.maxFragmentDualSrcAttachments);
    encoder->EncodeUInt32Value(value.maxFragmentCombinedOutputResources);
    encoder->EncodeUInt32Value(value.maxComputeSharedMemorySize);
    encoder->EncodeUInt32Array(value.maxComputeWorkGroupCount, 3);
    encoder->EncodeUInt32Value(value.maxComputeWorkGroupInvocations);
    encoder->EncodeUInt32Array(value.maxComputeWorkGroupSize, 3);
    encoder->EncodeUInt32Value(value.subPixelPrecisionBits);
    encoder->EncodeUInt32Value(value.subTexelPrecisionBits);
    encoder->EncodeUInt32Value(value.mipmapPrecisionBits);
    encoder->EncodeUInt32Value(value.maxDrawIndexedIndexValue);
    encoder->EncodeUInt32Value(value.maxDrawIndirectCount);
    encoder->EncodeFloatValue(value.maxSamplerLodBias);
    encoder->EncodeFloatValue(value.maxSamplerAnisotropy);
    encoder->EncodeUInt32Value(value.maxViewports);
    encoder->EncodeUInt32Array(value.maxViewportDimensions, 2);
    encoder->EncodeFloatArray(value.viewportBoundsRange, 2);
    encoder->EncodeUInt32Value(value.viewportSubPixelBits);
    encoder->EncodeSizeTValue(value.minMemoryMapAlignment);
    encoder->EncodeVkDeviceSizeValue(value.minTexelBufferOffsetAlignment);
    encoder->EncodeVkDeviceSizeValue(value.minUniformBufferOffsetAlignment);
    encoder->EncodeVkDeviceSizeValue(value.minStorageBufferOffsetAlignment);
    encoder->EncodeInt32Value(value.minTexelOffset);
    encoder->EncodeUInt32Value(value.maxTexelOffset);
    encoder->EncodeInt32Value(value.minTexelGatherOffset);
    encoder->EncodeUInt32Value(value.maxTexelGatherOffset);
    encoder->EncodeFloatValue(value.minInterpolationOffset);
    encoder->EncodeFloatValue(value.maxInterpolationOffset);
    encoder->EncodeUInt32Value(value.subPixelInterpolationOffsetBits);
    encoder->EncodeUInt32Value(value.maxFramebufferWidth);
    encoder->EncodeUInt32Value(value.maxFramebufferHeight);
    encoder->EncodeUInt32Value(value.maxFramebufferLayers);
    encoder->EncodeFlagsValue(value.framebufferColorSampleCounts);
    encoder->EncodeFlagsValue(value.framebufferDepthSampleCounts);
    encoder->EncodeFlagsValue(value.framebufferStencilSampleCounts);
    encoder->EncodeFlagsValue(value.framebufferNoAttachmentsSampleCounts);
    encoder->EncodeUInt32Value(value.maxColorAttachments);
    encoder->EncodeFlagsValue(value.sampledImageColorSampleCounts);
    encoder->EncodeFlagsValue(value.sampledImageIntegerSampleCounts);
    encoder->EncodeFlagsValue(value.sampledImageDepthSampleCounts);
    encoder->EncodeFlagsValue(value.sampledImageStencilSampleCounts);
    encoder->EncodeFlagsValue(value.storageImageSampleCounts);
    encoder->EncodeUInt32Value(value.maxSampleMaskWords);
    encoder->EncodeVkBool32Value(value.timestampComputeAndGraphics);
    encoder->EncodeFloatValue(value.timestampPeriod);
    encoder->EncodeUInt32Value(value.maxClipDistances);
    encoder->EncodeUInt32Value(value.maxCullDistances);
    encoder->EncodeUInt32Value(value.maxCombinedClipAndCullDistances);
    encoder->EncodeUInt32Value(value.discreteQueuePriorities);
    encoder->EncodeFloatArray(value.pointSizeRange, 2);
    encoder->EncodeFloatArray(value.lineWidthRange, 2);
    encoder->EncodeFloatValue(value.pointSizeGranularity);
    encoder->EncodeFloatValue(value.lineWidthGranularity);
    encoder->EncodeVkBool32Value(value.strictLines);
    encoder->EncodeVkBool32Value(value.standardSampleLocations);
    encoder->EncodeVkDeviceSizeValue(value.optimalBufferCopyOffsetAlignment);
    encoder->EncodeVkDeviceSizeValue(value.optimalBufferCopyRowPitchAlignment);
    encoder->EncodeVkDeviceSizeValue(value.nonCoherentAtomSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMemoryProperties& value)
{
    encoder->EncodeUInt32Value(value.memoryTypeCount);
    EncodeStructArray(encoder, value.memoryTypes, value.memoryTypeCount);
    encoder->EncodeUInt32Value(value.memoryHeapCount);
    EncodeStructArray(encoder, value.memoryHeaps, value.memoryHeapCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSparseProperties& value)
{
    encoder->EncodeVkBool32Value(value.residencyStandard2DBlockShape);
    encoder->EncodeVkBool32Value(value.residencyStandard2DMultisampleBlockShape);
    encoder->EncodeVkBool32Value(value.residencyStandard3DBlockShape);
    encoder->EncodeVkBool32Value(value.residencyAlignedMipSize);
    encoder->EncodeVkBool32Value(value.residencyNonResidentStrict);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProperties& value)
{
    encoder->EncodeUInt32Value(value.apiVersion);
    encoder->EncodeUInt32Value(value.driverVersion);
    encoder->EncodeUInt32Value(value.vendorID);
    encoder->EncodeUInt32Value(value.deviceID);
    encoder->EncodeEnumValue(value.deviceType);
    encoder->EncodeString(value.deviceName);
    encoder->EncodeUInt8Array(value.pipelineCacheUUID, VK_UUID_SIZE);
    EncodeStruct(encoder, value.limits);
    EncodeStruct(encoder, value.sparseProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueueFamilyProperties& value)
{
    encoder->EncodeFlagsValue(value.queueFlags);
    encoder->EncodeUInt32Value(value.queueCount);
    encoder->EncodeUInt32Value(value.timestampValidBits);
    EncodeStruct(encoder, value.minImageTransferGranularity);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceQueueCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.queueFamilyIndex);
    encoder->EncodeUInt32Value(value.queueCount);
    encoder->EncodeFloatArray(value.pQueuePriorities, value.queueCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.queueCreateInfoCount);
    EncodeStructArray(encoder, value.pQueueCreateInfos, value.queueCreateInfoCount);
    encoder->EncodeUInt32Value(value.enabledLayerCount);
    encoder->EncodeStringArray(value.ppEnabledLayerNames, value.enabledLayerCount);
    encoder->EncodeUInt32Value(value.enabledExtensionCount);
    encoder->EncodeStringArray(value.ppEnabledExtensionNames, value.enabledExtensionCount);
    EncodeStructPtr(encoder, value.pEnabledFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExtensionProperties& value)
{
    encoder->EncodeString(value.extensionName);
    encoder->EncodeUInt32Value(value.specVersion);
}

void EncodeStruct(ParameterEncoder* encoder, const VkLayerProperties& value)
{
    encoder->EncodeString(value.layerName);
    encoder->EncodeUInt32Value(value.specVersion);
    encoder->EncodeUInt32Value(value.implementationVersion);
    encoder->EncodeString(value.description);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreCount);
    encoder->EncodeHandleArray(value.pWaitSemaphores, value.waitSemaphoreCount);
    encoder->EncodeFlagsArray(value.pWaitDstStageMask, value.waitSemaphoreCount);
    encoder->EncodeUInt32Value(value.commandBufferCount);
    encoder->EncodeHandleArray(value.pCommandBuffers, value.commandBufferCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreCount);
    encoder->EncodeHandleArray(value.pSignalSemaphores, value.signalSemaphoreCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMappedMemoryRange& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.allocationSize);
    encoder->EncodeUInt32Value(value.memoryTypeIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryRequirements& value)
{
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeVkDeviceSizeValue(value.alignment);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseMemoryBind& value)
{
    encoder->EncodeVkDeviceSizeValue(value.resourceOffset);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.memoryOffset);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseBufferMemoryBindInfo& value)
{
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeUInt32Value(value.bindCount);
    EncodeStructArray(encoder, value.pBinds, value.bindCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageOpaqueMemoryBindInfo& value)
{
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeUInt32Value(value.bindCount);
    EncodeStructArray(encoder, value.pBinds, value.bindCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSubresource& value)
{
    encoder->EncodeFlagsValue(value.aspectMask);
    encoder->EncodeUInt32Value(value.mipLevel);
    encoder->EncodeUInt32Value(value.arrayLayer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageMemoryBind& value)
{
    EncodeStruct(encoder, value.subresource);
    EncodeStruct(encoder, value.offset);
    EncodeStruct(encoder, value.extent);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.memoryOffset);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageMemoryBindInfo& value)
{
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeUInt32Value(value.bindCount);
    EncodeStructArray(encoder, value.pBinds, value.bindCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindSparseInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreCount);
    encoder->EncodeHandleArray(value.pWaitSemaphores, value.waitSemaphoreCount);
    encoder->EncodeUInt32Value(value.bufferBindCount);
    EncodeStructArray(encoder, value.pBufferBinds, value.bufferBindCount);
    encoder->EncodeUInt32Value(value.imageOpaqueBindCount);
    EncodeStructArray(encoder, value.pImageOpaqueBinds, value.imageOpaqueBindCount);
    encoder->EncodeUInt32Value(value.imageBindCount);
    EncodeStructArray(encoder, value.pImageBinds, value.imageBindCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreCount);
    encoder->EncodeHandleArray(value.pSignalSemaphores, value.signalSemaphoreCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageFormatProperties& value)
{
    encoder->EncodeFlagsValue(value.aspectMask);
    EncodeStruct(encoder, value.imageGranularity);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageMemoryRequirements& value)
{
    EncodeStruct(encoder, value.formatProperties);
    encoder->EncodeUInt32Value(value.imageMipTailFirstLod);
    encoder->EncodeVkDeviceSizeValue(value.imageMipTailSize);
    encoder->EncodeVkDeviceSizeValue(value.imageMipTailOffset);
    encoder->EncodeVkDeviceSizeValue(value.imageMipTailStride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFenceCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkEventCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueryPoolCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.queryType);
    encoder->EncodeUInt32Value(value.queryCount);
    encoder->EncodeFlagsValue(value.pipelineStatistics);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeEnumValue(value.sharingMode);
    encoder->EncodeUInt32Value(value.queueFamilyIndexCount);
    encoder->EncodeUInt32Array(value.pQueueFamilyIndices, value.queueFamilyIndexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferViewCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.range);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.imageType);
    encoder->EncodeEnumValue(value.format);
    EncodeStruct(encoder, value.extent);
    encoder->EncodeUInt32Value(value.mipLevels);
    encoder->EncodeUInt32Value(value.arrayLayers);
    encoder->EncodeEnumValue(value.samples);
    encoder->EncodeEnumValue(value.tiling);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeEnumValue(value.sharingMode);
    encoder->EncodeUInt32Value(value.queueFamilyIndexCount);
    encoder->EncodeUInt32Array(value.pQueueFamilyIndices, value.queueFamilyIndexCount);
    encoder->EncodeEnumValue(value.initialLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubresourceLayout& value)
{
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeVkDeviceSizeValue(value.rowPitch);
    encoder->EncodeVkDeviceSizeValue(value.arrayPitch);
    encoder->EncodeVkDeviceSizeValue(value.depthPitch);
}

void EncodeStruct(ParameterEncoder* encoder, const VkComponentMapping& value)
{
    encoder->EncodeEnumValue(value.r);
    encoder->EncodeEnumValue(value.g);
    encoder->EncodeEnumValue(value.b);
    encoder->EncodeEnumValue(value.a);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeEnumValue(value.viewType);
    encoder->EncodeEnumValue(value.format);
    EncodeStruct(encoder, value.components);
    EncodeStruct(encoder, value.subresourceRange);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShaderModuleCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeSizeTValue(value.codeSize);
    encoder->EncodeUInt32Array(value.pCode, value.codeSize / 4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCacheCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeSizeTValue(value.initialDataSize);
    encoder->EncodeVoidArray(value.pInitialData, value.initialDataSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSpecializationMapEntry& value)
{
    encoder->EncodeUInt32Value(value.constantID);
    encoder->EncodeUInt32Value(value.offset);
    encoder->EncodeSizeTValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSpecializationInfo& value)
{
    encoder->EncodeUInt32Value(value.mapEntryCount);
    EncodeStructArray(encoder, value.pMapEntries, value.mapEntryCount);
    encoder->EncodeSizeTValue(value.dataSize);
    encoder->EncodeVoidArray(value.pData, value.dataSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineShaderStageCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.stage);
    encoder->EncodeHandleValue(value.module);
    encoder->EncodeString(value.pName);
    EncodeStructPtr(encoder, value.pSpecializationInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkComputePipelineCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    EncodeStruct(encoder, value.stage);
    encoder->EncodeHandleValue(value.layout);
    encoder->EncodeHandleValue(value.basePipelineHandle);
    encoder->EncodeInt32Value(value.basePipelineIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkVertexInputBindingDescription& value)
{
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeUInt32Value(value.stride);
    encoder->EncodeEnumValue(value.inputRate);
}

void EncodeStruct(ParameterEncoder* encoder, const VkVertexInputAttributeDescription& value)
{
    encoder->EncodeUInt32Value(value.location);
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeUInt32Value(value.offset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineVertexInputStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.vertexBindingDescriptionCount);
    EncodeStructArray(encoder, value.pVertexBindingDescriptions, value.vertexBindingDescriptionCount);
    encoder->EncodeUInt32Value(value.vertexAttributeDescriptionCount);
    EncodeStructArray(encoder, value.pVertexAttributeDescriptions, value.vertexAttributeDescriptionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineInputAssemblyStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.topology);
    encoder->EncodeVkBool32Value(value.primitiveRestartEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineTessellationStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.patchControlPoints);
}

void EncodeStruct(ParameterEncoder* encoder, const VkViewport& value)
{
    encoder->EncodeFloatValue(value.x);
    encoder->EncodeFloatValue(value.y);
    encoder->EncodeFloatValue(value.width);
    encoder->EncodeFloatValue(value.height);
    encoder->EncodeFloatValue(value.minDepth);
    encoder->EncodeFloatValue(value.maxDepth);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.viewportCount);
    EncodeStructArray(encoder, value.pViewports, value.viewportCount);
    encoder->EncodeUInt32Value(value.scissorCount);
    EncodeStructArray(encoder, value.pScissors, value.scissorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkBool32Value(value.depthClampEnable);
    encoder->EncodeVkBool32Value(value.rasterizerDiscardEnable);
    encoder->EncodeEnumValue(value.polygonMode);
    encoder->EncodeFlagsValue(value.cullMode);
    encoder->EncodeEnumValue(value.frontFace);
    encoder->EncodeVkBool32Value(value.depthBiasEnable);
    encoder->EncodeFloatValue(value.depthBiasConstantFactor);
    encoder->EncodeFloatValue(value.depthBiasClamp);
    encoder->EncodeFloatValue(value.depthBiasSlopeFactor);
    encoder->EncodeFloatValue(value.lineWidth);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineMultisampleStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.rasterizationSamples);
    encoder->EncodeVkBool32Value(value.sampleShadingEnable);
    encoder->EncodeFloatValue(value.minSampleShading);
    encoder->EncodeVkSampleMaskArray(value.pSampleMask, (value.rasterizationSamples + 31) / 32);
    encoder->EncodeVkBool32Value(value.alphaToCoverageEnable);
    encoder->EncodeVkBool32Value(value.alphaToOneEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkStencilOpState& value)
{
    encoder->EncodeEnumValue(value.failOp);
    encoder->EncodeEnumValue(value.passOp);
    encoder->EncodeEnumValue(value.depthFailOp);
    encoder->EncodeEnumValue(value.compareOp);
    encoder->EncodeUInt32Value(value.compareMask);
    encoder->EncodeUInt32Value(value.writeMask);
    encoder->EncodeUInt32Value(value.reference);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineDepthStencilStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkBool32Value(value.depthTestEnable);
    encoder->EncodeVkBool32Value(value.depthWriteEnable);
    encoder->EncodeEnumValue(value.depthCompareOp);
    encoder->EncodeVkBool32Value(value.depthBoundsTestEnable);
    encoder->EncodeVkBool32Value(value.stencilTestEnable);
    EncodeStruct(encoder, value.front);
    EncodeStruct(encoder, value.back);
    encoder->EncodeFloatValue(value.minDepthBounds);
    encoder->EncodeFloatValue(value.maxDepthBounds);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineColorBlendAttachmentState& value)
{
    encoder->EncodeVkBool32Value(value.blendEnable);
    encoder->EncodeEnumValue(value.srcColorBlendFactor);
    encoder->EncodeEnumValue(value.dstColorBlendFactor);
    encoder->EncodeEnumValue(value.colorBlendOp);
    encoder->EncodeEnumValue(value.srcAlphaBlendFactor);
    encoder->EncodeEnumValue(value.dstAlphaBlendFactor);
    encoder->EncodeEnumValue(value.alphaBlendOp);
    encoder->EncodeFlagsValue(value.colorWriteMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineColorBlendStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkBool32Value(value.logicOpEnable);
    encoder->EncodeEnumValue(value.logicOp);
    encoder->EncodeUInt32Value(value.attachmentCount);
    EncodeStructArray(encoder, value.pAttachments, value.attachmentCount);
    encoder->EncodeFloatArray(value.blendConstants, 4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineDynamicStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.dynamicStateCount);
    encoder->EncodeEnumArray(value.pDynamicStates, value.dynamicStateCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGraphicsPipelineCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.stageCount);
    EncodeStructArray(encoder, value.pStages, value.stageCount);
    EncodeStructPtr(encoder, value.pVertexInputState);
    EncodeStructPtr(encoder, value.pInputAssemblyState);
    EncodeStructPtr(encoder, value.pTessellationState);
    EncodeStructPtr(encoder, value.pViewportState);
    EncodeStructPtr(encoder, value.pRasterizationState);
    EncodeStructPtr(encoder, value.pMultisampleState);
    EncodeStructPtr(encoder, value.pDepthStencilState);
    EncodeStructPtr(encoder, value.pColorBlendState);
    EncodeStructPtr(encoder, value.pDynamicState);
    encoder->EncodeHandleValue(value.layout);
    encoder->EncodeHandleValue(value.renderPass);
    encoder->EncodeUInt32Value(value.subpass);
    encoder->EncodeHandleValue(value.basePipelineHandle);
    encoder->EncodeInt32Value(value.basePipelineIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPushConstantRange& value)
{
    encoder->EncodeFlagsValue(value.stageFlags);
    encoder->EncodeUInt32Value(value.offset);
    encoder->EncodeUInt32Value(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineLayoutCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.setLayoutCount);
    encoder->EncodeHandleArray(value.pSetLayouts, value.setLayoutCount);
    encoder->EncodeUInt32Value(value.pushConstantRangeCount);
    EncodeStructArray(encoder, value.pPushConstantRanges, value.pushConstantRangeCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.magFilter);
    encoder->EncodeEnumValue(value.minFilter);
    encoder->EncodeEnumValue(value.mipmapMode);
    encoder->EncodeEnumValue(value.addressModeU);
    encoder->EncodeEnumValue(value.addressModeV);
    encoder->EncodeEnumValue(value.addressModeW);
    encoder->EncodeFloatValue(value.mipLodBias);
    encoder->EncodeVkBool32Value(value.anisotropyEnable);
    encoder->EncodeFloatValue(value.maxAnisotropy);
    encoder->EncodeVkBool32Value(value.compareEnable);
    encoder->EncodeEnumValue(value.compareOp);
    encoder->EncodeFloatValue(value.minLod);
    encoder->EncodeFloatValue(value.maxLod);
    encoder->EncodeEnumValue(value.borderColor);
    encoder->EncodeVkBool32Value(value.unnormalizedCoordinates);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyDescriptorSet& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcSet);
    encoder->EncodeUInt32Value(value.srcBinding);
    encoder->EncodeUInt32Value(value.srcArrayElement);
    encoder->EncodeHandleValue(value.dstSet);
    encoder->EncodeUInt32Value(value.dstBinding);
    encoder->EncodeUInt32Value(value.dstArrayElement);
    encoder->EncodeUInt32Value(value.descriptorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorBufferInfo& value)
{
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.range);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorPoolSize& value)
{
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeUInt32Value(value.descriptorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorPoolCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.maxSets);
    encoder->EncodeUInt32Value(value.poolSizeCount);
    EncodeStructArray(encoder, value.pPoolSizes, value.poolSizeCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.descriptorPool);
    encoder->EncodeUInt32Value(value.descriptorSetCount);
    encoder->EncodeHandleArray(value.pSetLayouts, value.descriptorSetCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetLayoutBinding& value)
{
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeEnumValue(value.descriptorType);
    encoder->EncodeUInt32Value(value.descriptorCount);
    encoder->EncodeFlagsValue(value.stageFlags);
    encoder->EncodeHandleArray(value.pImmutableSamplers, value.descriptorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetLayoutCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.bindingCount);
    EncodeStructArray(encoder, value.pBindings, value.bindingCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentDescription& value)
{
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.samples);
    encoder->EncodeEnumValue(value.loadOp);
    encoder->EncodeEnumValue(value.storeOp);
    encoder->EncodeEnumValue(value.stencilLoadOp);
    encoder->EncodeEnumValue(value.stencilStoreOp);
    encoder->EncodeEnumValue(value.initialLayout);
    encoder->EncodeEnumValue(value.finalLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentReference& value)
{
    encoder->EncodeUInt32Value(value.attachment);
    encoder->EncodeEnumValue(value.layout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFramebufferCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeHandleValue(value.renderPass);
    encoder->EncodeUInt32Value(value.attachmentCount);
    encoder->EncodeHandleArray(value.pAttachments, value.attachmentCount);
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeUInt32Value(value.layers);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassDescription& value)
{
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeUInt32Value(value.inputAttachmentCount);
    EncodeStructArray(encoder, value.pInputAttachments, value.inputAttachmentCount);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    EncodeStructArray(encoder, value.pColorAttachments, value.colorAttachmentCount);
    EncodeStructArray(encoder, value.pResolveAttachments, value.colorAttachmentCount);
    EncodeStructPtr(encoder, value.pDepthStencilAttachment);
    encoder->EncodeUInt32Value(value.preserveAttachmentCount);
    encoder->EncodeUInt32Array(value.pPreserveAttachments, value.preserveAttachmentCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassDependency& value)
{
    encoder->EncodeUInt32Value(value.srcSubpass);
    encoder->EncodeUInt32Value(value.dstSubpass);
    encoder->EncodeFlagsValue(value.srcStageMask);
    encoder->EncodeFlagsValue(value.dstStageMask);
    encoder->EncodeFlagsValue(value.srcAccessMask);
    encoder->EncodeFlagsValue(value.dstAccessMask);
    encoder->EncodeFlagsValue(value.dependencyFlags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.attachmentCount);
    EncodeStructArray(encoder, value.pAttachments, value.attachmentCount);
    encoder->EncodeUInt32Value(value.subpassCount);
    EncodeStructArray(encoder, value.pSubpasses, value.subpassCount);
    encoder->EncodeUInt32Value(value.dependencyCount);
    EncodeStructArray(encoder, value.pDependencies, value.dependencyCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandPoolCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.queueFamilyIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.commandPool);
    encoder->EncodeEnumValue(value.level);
    encoder->EncodeUInt32Value(value.commandBufferCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferInheritanceInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.renderPass);
    encoder->EncodeUInt32Value(value.subpass);
    encoder->EncodeHandleValue(value.framebuffer);
    encoder->EncodeVkBool32Value(value.occlusionQueryEnable);
    encoder->EncodeFlagsValue(value.queryFlags);
    encoder->EncodeFlagsValue(value.pipelineStatistics);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    EncodeStructPtr(encoder, value.pInheritanceInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferCopy& value)
{
    encoder->EncodeVkDeviceSizeValue(value.srcOffset);
    encoder->EncodeVkDeviceSizeValue(value.dstOffset);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSubresourceLayers& value)
{
    encoder->EncodeFlagsValue(value.aspectMask);
    encoder->EncodeUInt32Value(value.mipLevel);
    encoder->EncodeUInt32Value(value.baseArrayLayer);
    encoder->EncodeUInt32Value(value.layerCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferImageCopy& value)
{
    encoder->EncodeVkDeviceSizeValue(value.bufferOffset);
    encoder->EncodeUInt32Value(value.bufferRowLength);
    encoder->EncodeUInt32Value(value.bufferImageHeight);
    EncodeStruct(encoder, value.imageSubresource);
    EncodeStruct(encoder, value.imageOffset);
    EncodeStruct(encoder, value.imageExtent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkClearDepthStencilValue& value)
{
    encoder->EncodeFloatValue(value.depth);
    encoder->EncodeUInt32Value(value.stencil);
}

void EncodeStruct(ParameterEncoder* encoder, const VkClearAttachment& value)
{
    encoder->EncodeFlagsValue(value.aspectMask);
    encoder->EncodeUInt32Value(value.colorAttachment);
    EncodeStruct(encoder, value.clearValue);
}

void EncodeStruct(ParameterEncoder* encoder, const VkClearRect& value)
{
    EncodeStruct(encoder, value.rect);
    encoder->EncodeUInt32Value(value.baseArrayLayer);
    encoder->EncodeUInt32Value(value.layerCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageBlit& value)
{
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStructArray(encoder, value.srcOffsets, 2);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStructArray(encoder, value.dstOffsets, 2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageCopy& value)
{
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStruct(encoder, value.srcOffset);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStruct(encoder, value.dstOffset);
    EncodeStruct(encoder, value.extent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageResolve& value)
{
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStruct(encoder, value.srcOffset);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStruct(encoder, value.dstOffset);
    EncodeStruct(encoder, value.extent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.renderPass);
    encoder->EncodeHandleValue(value.framebuffer);
    EncodeStruct(encoder, value.renderArea);
    encoder->EncodeUInt32Value(value.clearValueCount);
    EncodeStructArray(encoder, value.pClearValues, value.clearValueCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSubgroupProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.subgroupSize);
    encoder->EncodeFlagsValue(value.supportedStages);
    encoder->EncodeFlagsValue(value.supportedOperations);
    encoder->EncodeVkBool32Value(value.quadOperationsInAllStages);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindBufferMemoryInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.memoryOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindImageMemoryInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.memoryOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevice16BitStorageFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.storageBuffer16BitAccess);
    encoder->EncodeVkBool32Value(value.uniformAndStorageBuffer16BitAccess);
    encoder->EncodeVkBool32Value(value.storagePushConstant16);
    encoder->EncodeVkBool32Value(value.storageInputOutput16);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryDedicatedRequirements& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.prefersDedicatedAllocation);
    encoder->EncodeVkBool32Value(value.requiresDedicatedAllocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryDedicatedAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeHandleValue(value.buffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryAllocateFlagsInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.deviceMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupRenderPassBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.deviceMask);
    encoder->EncodeUInt32Value(value.deviceRenderAreaCount);
    EncodeStructArray(encoder, value.pDeviceRenderAreas, value.deviceRenderAreaCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupCommandBufferBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.deviceMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreCount);
    encoder->EncodeUInt32Array(value.pWaitSemaphoreDeviceIndices, value.waitSemaphoreCount);
    encoder->EncodeUInt32Value(value.commandBufferCount);
    encoder->EncodeUInt32Array(value.pCommandBufferDeviceMasks, value.commandBufferCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreCount);
    encoder->EncodeUInt32Array(value.pSignalSemaphoreDeviceIndices, value.signalSemaphoreCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupBindSparseInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.resourceDeviceIndex);
    encoder->EncodeUInt32Value(value.memoryDeviceIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindBufferMemoryDeviceGroupInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.deviceIndexCount);
    encoder->EncodeUInt32Array(value.pDeviceIndices, value.deviceIndexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindImageMemoryDeviceGroupInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.deviceIndexCount);
    encoder->EncodeUInt32Array(value.pDeviceIndices, value.deviceIndexCount);
    encoder->EncodeUInt32Value(value.splitInstanceBindRegionCount);
    EncodeStructArray(encoder, value.pSplitInstanceBindRegions, value.splitInstanceBindRegionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceGroupProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.physicalDeviceCount);
    encoder->EncodeHandleArray(value.physicalDevices, value.physicalDeviceCount);
    encoder->EncodeVkBool32Value(value.subsetAllocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupDeviceCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.physicalDeviceCount);
    encoder->EncodeHandleArray(value.pPhysicalDevices, value.physicalDeviceCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferMemoryRequirementsInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.buffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageMemoryRequirementsInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.image);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSparseMemoryRequirementsInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.image);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryRequirements2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.memoryRequirements);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageMemoryRequirements2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.memoryRequirements);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFeatures2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.features);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.properties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFormatProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.formatProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageFormatProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.imageFormatProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageFormatInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeEnumValue(value.tiling);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueueFamilyProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.queueFamilyProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMemoryProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.memoryProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSparseImageFormatProperties2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.properties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSparseImageFormatInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeEnumValue(value.samples);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeEnumValue(value.tiling);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePointClippingProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.pointClippingBehavior);
}

void EncodeStruct(ParameterEncoder* encoder, const VkInputAttachmentAspectReference& value)
{
    encoder->EncodeUInt32Value(value.subpass);
    encoder->EncodeUInt32Value(value.inputAttachmentIndex);
    encoder->EncodeFlagsValue(value.aspectMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassInputAttachmentAspectCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.aspectReferenceCount);
    EncodeStructArray(encoder, value.pAspectReferences, value.aspectReferenceCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewUsageCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.usage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineTessellationDomainOriginStateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.domainOrigin);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassMultiviewCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.subpassCount);
    encoder->EncodeUInt32Array(value.pViewMasks, value.subpassCount);
    encoder->EncodeUInt32Value(value.dependencyCount);
    encoder->EncodeInt32Array(value.pViewOffsets, value.dependencyCount);
    encoder->EncodeUInt32Value(value.correlationMaskCount);
    encoder->EncodeUInt32Array(value.pCorrelationMasks, value.correlationMaskCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultiviewFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.multiview);
    encoder->EncodeVkBool32Value(value.multiviewGeometryShader);
    encoder->EncodeVkBool32Value(value.multiviewTessellationShader);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultiviewProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxMultiviewViewCount);
    encoder->EncodeUInt32Value(value.maxMultiviewInstanceIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVariablePointersFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.variablePointersStorageBuffer);
    encoder->EncodeVkBool32Value(value.variablePointers);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProtectedMemoryFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.protectedMemory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProtectedMemoryProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.protectedNoFault);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceQueueInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.queueFamilyIndex);
    encoder->EncodeUInt32Value(value.queueIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkProtectedSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.protectedSubmit);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerYcbcrConversionCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.ycbcrModel);
    encoder->EncodeEnumValue(value.ycbcrRange);
    EncodeStruct(encoder, value.components);
    encoder->EncodeEnumValue(value.xChromaOffset);
    encoder->EncodeEnumValue(value.yChromaOffset);
    encoder->EncodeEnumValue(value.chromaFilter);
    encoder->EncodeVkBool32Value(value.forceExplicitReconstruction);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerYcbcrConversionInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.conversion);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindImagePlaneMemoryInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.planeAspect);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImagePlaneMemoryRequirementsInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.planeAspect);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.samplerYcbcrConversion);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerYcbcrConversionImageFormatProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.combinedImageSamplerDescriptorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorUpdateTemplateEntry& value)
{
    encoder->EncodeUInt32Value(value.dstBinding);
    encoder->EncodeUInt32Value(value.dstArrayElement);
    encoder->EncodeUInt32Value(value.descriptorCount);
    encoder->EncodeEnumValue(value.descriptorType);
    encoder->EncodeSizeTValue(value.offset);
    encoder->EncodeSizeTValue(value.stride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorUpdateTemplateCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.descriptorUpdateEntryCount);
    EncodeStructArray(encoder, value.pDescriptorUpdateEntries, value.descriptorUpdateEntryCount);
    encoder->EncodeEnumValue(value.templateType);
    encoder->EncodeHandleValue(value.descriptorSetLayout);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeHandleValue(value.pipelineLayout);
    encoder->EncodeUInt32Value(value.set);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalMemoryProperties& value)
{
    encoder->EncodeFlagsValue(value.externalMemoryFeatures);
    encoder->EncodeFlagsValue(value.exportFromImportedHandleTypes);
    encoder->EncodeFlagsValue(value.compatibleHandleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalImageFormatInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalImageFormatProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.externalMemoryProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalBufferInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalBufferProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.externalMemoryProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceIDProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt8Array(value.deviceUUID, VK_UUID_SIZE);
    encoder->EncodeUInt8Array(value.driverUUID, VK_UUID_SIZE);
    encoder->EncodeUInt8Array(value.deviceLUID, VK_LUID_SIZE);
    encoder->EncodeUInt32Value(value.deviceNodeMask);
    encoder->EncodeVkBool32Value(value.deviceLUIDValid);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalMemoryImageCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalMemoryBufferCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportMemoryAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalFenceInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalFenceProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.exportFromImportedHandleTypes);
    encoder->EncodeFlagsValue(value.compatibleHandleTypes);
    encoder->EncodeFlagsValue(value.externalFenceFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportFenceCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportSemaphoreCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalSemaphoreInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalSemaphoreProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.exportFromImportedHandleTypes);
    encoder->EncodeFlagsValue(value.compatibleHandleTypes);
    encoder->EncodeFlagsValue(value.externalSemaphoreFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMaintenance3Properties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxPerSetDescriptors);
    encoder->EncodeVkDeviceSizeValue(value.maxMemoryAllocationSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetLayoutSupport& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.supported);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderDrawParametersFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderDrawParameters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan11Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.storageBuffer16BitAccess);
    encoder->EncodeVkBool32Value(value.uniformAndStorageBuffer16BitAccess);
    encoder->EncodeVkBool32Value(value.storagePushConstant16);
    encoder->EncodeVkBool32Value(value.storageInputOutput16);
    encoder->EncodeVkBool32Value(value.multiview);
    encoder->EncodeVkBool32Value(value.multiviewGeometryShader);
    encoder->EncodeVkBool32Value(value.multiviewTessellationShader);
    encoder->EncodeVkBool32Value(value.variablePointersStorageBuffer);
    encoder->EncodeVkBool32Value(value.variablePointers);
    encoder->EncodeVkBool32Value(value.protectedMemory);
    encoder->EncodeVkBool32Value(value.samplerYcbcrConversion);
    encoder->EncodeVkBool32Value(value.shaderDrawParameters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan11Properties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt8Array(value.deviceUUID, VK_UUID_SIZE);
    encoder->EncodeUInt8Array(value.driverUUID, VK_UUID_SIZE);
    encoder->EncodeUInt8Array(value.deviceLUID, VK_LUID_SIZE);
    encoder->EncodeUInt32Value(value.deviceNodeMask);
    encoder->EncodeVkBool32Value(value.deviceLUIDValid);
    encoder->EncodeUInt32Value(value.subgroupSize);
    encoder->EncodeFlagsValue(value.subgroupSupportedStages);
    encoder->EncodeFlagsValue(value.subgroupSupportedOperations);
    encoder->EncodeVkBool32Value(value.subgroupQuadOperationsInAllStages);
    encoder->EncodeEnumValue(value.pointClippingBehavior);
    encoder->EncodeUInt32Value(value.maxMultiviewViewCount);
    encoder->EncodeUInt32Value(value.maxMultiviewInstanceIndex);
    encoder->EncodeVkBool32Value(value.protectedNoFault);
    encoder->EncodeUInt32Value(value.maxPerSetDescriptors);
    encoder->EncodeVkDeviceSizeValue(value.maxMemoryAllocationSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan12Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.samplerMirrorClampToEdge);
    encoder->EncodeVkBool32Value(value.drawIndirectCount);
    encoder->EncodeVkBool32Value(value.storageBuffer8BitAccess);
    encoder->EncodeVkBool32Value(value.uniformAndStorageBuffer8BitAccess);
    encoder->EncodeVkBool32Value(value.storagePushConstant8);
    encoder->EncodeVkBool32Value(value.shaderBufferInt64Atomics);
    encoder->EncodeVkBool32Value(value.shaderSharedInt64Atomics);
    encoder->EncodeVkBool32Value(value.shaderFloat16);
    encoder->EncodeVkBool32Value(value.shaderInt8);
    encoder->EncodeVkBool32Value(value.descriptorIndexing);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformTexelBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageTexelBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderSampledImageArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageImageArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformTexelBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageTexelBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.descriptorBindingUniformBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingSampledImageUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageImageUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingUniformTexelBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageTexelBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingUpdateUnusedWhilePending);
    encoder->EncodeVkBool32Value(value.descriptorBindingPartiallyBound);
    encoder->EncodeVkBool32Value(value.descriptorBindingVariableDescriptorCount);
    encoder->EncodeVkBool32Value(value.runtimeDescriptorArray);
    encoder->EncodeVkBool32Value(value.samplerFilterMinmax);
    encoder->EncodeVkBool32Value(value.scalarBlockLayout);
    encoder->EncodeVkBool32Value(value.imagelessFramebuffer);
    encoder->EncodeVkBool32Value(value.uniformBufferStandardLayout);
    encoder->EncodeVkBool32Value(value.shaderSubgroupExtendedTypes);
    encoder->EncodeVkBool32Value(value.separateDepthStencilLayouts);
    encoder->EncodeVkBool32Value(value.hostQueryReset);
    encoder->EncodeVkBool32Value(value.timelineSemaphore);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddress);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressCaptureReplay);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressMultiDevice);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModel);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModelDeviceScope);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModelAvailabilityVisibilityChains);
    encoder->EncodeVkBool32Value(value.shaderOutputViewportIndex);
    encoder->EncodeVkBool32Value(value.shaderOutputLayer);
    encoder->EncodeVkBool32Value(value.subgroupBroadcastDynamicId);
}

void EncodeStruct(ParameterEncoder* encoder, const VkConformanceVersion& value)
{
    encoder->EncodeUInt8Value(value.major);
    encoder->EncodeUInt8Value(value.minor);
    encoder->EncodeUInt8Value(value.subminor);
    encoder->EncodeUInt8Value(value.patch);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan12Properties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.driverID);
    encoder->EncodeString(value.driverName);
    encoder->EncodeString(value.driverInfo);
    EncodeStruct(encoder, value.conformanceVersion);
    encoder->EncodeEnumValue(value.denormBehaviorIndependence);
    encoder->EncodeEnumValue(value.roundingModeIndependence);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat16);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat32);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat64);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat16);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat32);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat64);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat16);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat32);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat64);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat16);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat32);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat64);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat16);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat32);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat64);
    encoder->EncodeUInt32Value(value.maxUpdateAfterBindDescriptorsInAllPools);
    encoder->EncodeVkBool32Value(value.shaderUniformBufferArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderSampledImageArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderStorageBufferArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderStorageImageArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.robustBufferAccessUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.quadDivergentImplicitLod);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindSamplers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindUniformBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindStorageBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindSampledImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindStorageImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindInputAttachments);
    encoder->EncodeUInt32Value(value.maxPerStageUpdateAfterBindResources);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindSamplers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindUniformBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindSampledImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindInputAttachments);
    encoder->EncodeFlagsValue(value.supportedDepthResolveModes);
    encoder->EncodeFlagsValue(value.supportedStencilResolveModes);
    encoder->EncodeVkBool32Value(value.independentResolveNone);
    encoder->EncodeVkBool32Value(value.independentResolve);
    encoder->EncodeVkBool32Value(value.filterMinmaxSingleComponentFormats);
    encoder->EncodeVkBool32Value(value.filterMinmaxImageComponentMapping);
    encoder->EncodeUInt64Value(value.maxTimelineSemaphoreValueDifference);
    encoder->EncodeFlagsValue(value.framebufferIntegerColorSampleCounts);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageFormatListCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.viewFormatCount);
    encoder->EncodeEnumArray(value.pViewFormats, value.viewFormatCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentDescription2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.samples);
    encoder->EncodeEnumValue(value.loadOp);
    encoder->EncodeEnumValue(value.storeOp);
    encoder->EncodeEnumValue(value.stencilLoadOp);
    encoder->EncodeEnumValue(value.stencilStoreOp);
    encoder->EncodeEnumValue(value.initialLayout);
    encoder->EncodeEnumValue(value.finalLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentReference2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.attachment);
    encoder->EncodeEnumValue(value.layout);
    encoder->EncodeFlagsValue(value.aspectMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassDescription2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeUInt32Value(value.viewMask);
    encoder->EncodeUInt32Value(value.inputAttachmentCount);
    EncodeStructArray(encoder, value.pInputAttachments, value.inputAttachmentCount);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    EncodeStructArray(encoder, value.pColorAttachments, value.colorAttachmentCount);
    EncodeStructArray(encoder, value.pResolveAttachments, value.colorAttachmentCount);
    EncodeStructPtr(encoder, value.pDepthStencilAttachment);
    encoder->EncodeUInt32Value(value.preserveAttachmentCount);
    encoder->EncodeUInt32Array(value.pPreserveAttachments, value.preserveAttachmentCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassDependency2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.srcSubpass);
    encoder->EncodeUInt32Value(value.dstSubpass);
    encoder->EncodeFlagsValue(value.srcStageMask);
    encoder->EncodeFlagsValue(value.dstStageMask);
    encoder->EncodeFlagsValue(value.srcAccessMask);
    encoder->EncodeFlagsValue(value.dstAccessMask);
    encoder->EncodeFlagsValue(value.dependencyFlags);
    encoder->EncodeInt32Value(value.viewOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassCreateInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.attachmentCount);
    EncodeStructArray(encoder, value.pAttachments, value.attachmentCount);
    encoder->EncodeUInt32Value(value.subpassCount);
    EncodeStructArray(encoder, value.pSubpasses, value.subpassCount);
    encoder->EncodeUInt32Value(value.dependencyCount);
    EncodeStructArray(encoder, value.pDependencies, value.dependencyCount);
    encoder->EncodeUInt32Value(value.correlatedViewMaskCount);
    encoder->EncodeUInt32Array(value.pCorrelatedViewMasks, value.correlatedViewMaskCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.contents);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassEndInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevice8BitStorageFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.storageBuffer8BitAccess);
    encoder->EncodeVkBool32Value(value.uniformAndStorageBuffer8BitAccess);
    encoder->EncodeVkBool32Value(value.storagePushConstant8);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDriverProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.driverID);
    encoder->EncodeString(value.driverName);
    encoder->EncodeString(value.driverInfo);
    EncodeStruct(encoder, value.conformanceVersion);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderAtomicInt64Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderBufferInt64Atomics);
    encoder->EncodeVkBool32Value(value.shaderSharedInt64Atomics);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderFloat16Int8Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderFloat16);
    encoder->EncodeVkBool32Value(value.shaderInt8);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFloatControlsProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.denormBehaviorIndependence);
    encoder->EncodeEnumValue(value.roundingModeIndependence);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat16);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat32);
    encoder->EncodeVkBool32Value(value.shaderSignedZeroInfNanPreserveFloat64);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat16);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat32);
    encoder->EncodeVkBool32Value(value.shaderDenormPreserveFloat64);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat16);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat32);
    encoder->EncodeVkBool32Value(value.shaderDenormFlushToZeroFloat64);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat16);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat32);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTEFloat64);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat16);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat32);
    encoder->EncodeVkBool32Value(value.shaderRoundingModeRTZFloat64);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetLayoutBindingFlagsCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.bindingCount);
    encoder->EncodeFlagsArray(value.pBindingFlags, value.bindingCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDescriptorIndexingFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformTexelBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageTexelBufferArrayDynamicIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderSampledImageArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageImageArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderUniformTexelBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.shaderStorageTexelBufferArrayNonUniformIndexing);
    encoder->EncodeVkBool32Value(value.descriptorBindingUniformBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingSampledImageUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageImageUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingUniformTexelBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingStorageTexelBufferUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.descriptorBindingUpdateUnusedWhilePending);
    encoder->EncodeVkBool32Value(value.descriptorBindingPartiallyBound);
    encoder->EncodeVkBool32Value(value.descriptorBindingVariableDescriptorCount);
    encoder->EncodeVkBool32Value(value.runtimeDescriptorArray);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDescriptorIndexingProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxUpdateAfterBindDescriptorsInAllPools);
    encoder->EncodeVkBool32Value(value.shaderUniformBufferArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderSampledImageArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderStorageBufferArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderStorageImageArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.shaderInputAttachmentArrayNonUniformIndexingNative);
    encoder->EncodeVkBool32Value(value.robustBufferAccessUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.quadDivergentImplicitLod);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindSamplers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindUniformBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindStorageBuffers);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindSampledImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindStorageImages);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindInputAttachments);
    encoder->EncodeUInt32Value(value.maxPerStageUpdateAfterBindResources);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindSamplers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindUniformBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindUniformBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageBuffers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageBuffersDynamic);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindSampledImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindStorageImages);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindInputAttachments);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetVariableDescriptorCountAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.descriptorSetCount);
    encoder->EncodeUInt32Array(value.pDescriptorCounts, value.descriptorSetCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetVariableDescriptorCountLayoutSupport& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxVariableDescriptorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassDescriptionDepthStencilResolve& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.depthResolveMode);
    encoder->EncodeEnumValue(value.stencilResolveMode);
    EncodeStructPtr(encoder, value.pDepthStencilResolveAttachment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDepthStencilResolveProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.supportedDepthResolveModes);
    encoder->EncodeFlagsValue(value.supportedStencilResolveModes);
    encoder->EncodeVkBool32Value(value.independentResolveNone);
    encoder->EncodeVkBool32Value(value.independentResolve);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceScalarBlockLayoutFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.scalarBlockLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageStencilUsageCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.stencilUsage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerReductionModeCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.reductionMode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSamplerFilterMinmaxProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.filterMinmaxSingleComponentFormats);
    encoder->EncodeVkBool32Value(value.filterMinmaxImageComponentMapping);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkanMemoryModelFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModel);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModelDeviceScope);
    encoder->EncodeVkBool32Value(value.vulkanMemoryModelAvailabilityVisibilityChains);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImagelessFramebufferFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.imagelessFramebuffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFramebufferAttachmentImageInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeFlagsValue(value.usage);
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeUInt32Value(value.layerCount);
    encoder->EncodeUInt32Value(value.viewFormatCount);
    encoder->EncodeEnumArray(value.pViewFormats, value.viewFormatCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFramebufferAttachmentsCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.attachmentImageInfoCount);
    EncodeStructArray(encoder, value.pAttachmentImageInfos, value.attachmentImageInfoCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassAttachmentBeginInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.attachmentCount);
    encoder->EncodeHandleArray(value.pAttachments, value.attachmentCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.uniformBufferStandardLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderSubgroupExtendedTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.separateDepthStencilLayouts);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentReferenceStencilLayout& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.stencilLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentDescriptionStencilLayout& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.stencilInitialLayout);
    encoder->EncodeEnumValue(value.stencilFinalLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceHostQueryResetFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.hostQueryReset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTimelineSemaphoreFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.timelineSemaphore);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTimelineSemaphoreProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.maxTimelineSemaphoreValueDifference);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreTypeCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.semaphoreType);
    encoder->EncodeUInt64Value(value.initialValue);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTimelineSemaphoreSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreValueCount);
    encoder->EncodeUInt64Array(value.pWaitSemaphoreValues, value.waitSemaphoreValueCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreValueCount);
    encoder->EncodeUInt64Array(value.pSignalSemaphoreValues, value.signalSemaphoreValueCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreWaitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.semaphoreCount);
    encoder->EncodeHandleArray(value.pSemaphores, value.semaphoreCount);
    encoder->EncodeUInt64Array(value.pValues, value.semaphoreCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreSignalInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeUInt64Value(value.value);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceBufferDeviceAddressFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddress);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressCaptureReplay);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressMultiDevice);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferDeviceAddressInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.buffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferOpaqueCaptureAddressCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.opaqueCaptureAddress);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryOpaqueCaptureAddressAllocateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.opaqueCaptureAddress);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceMemoryOpaqueCaptureAddressInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan13Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.robustImageAccess);
    encoder->EncodeVkBool32Value(value.inlineUniformBlock);
    encoder->EncodeVkBool32Value(value.descriptorBindingInlineUniformBlockUpdateAfterBind);
    encoder->EncodeVkBool32Value(value.pipelineCreationCacheControl);
    encoder->EncodeVkBool32Value(value.privateData);
    encoder->EncodeVkBool32Value(value.shaderDemoteToHelperInvocation);
    encoder->EncodeVkBool32Value(value.shaderTerminateInvocation);
    encoder->EncodeVkBool32Value(value.subgroupSizeControl);
    encoder->EncodeVkBool32Value(value.computeFullSubgroups);
    encoder->EncodeVkBool32Value(value.synchronization2);
    encoder->EncodeVkBool32Value(value.textureCompressionASTC_HDR);
    encoder->EncodeVkBool32Value(value.shaderZeroInitializeWorkgroupMemory);
    encoder->EncodeVkBool32Value(value.dynamicRendering);
    encoder->EncodeVkBool32Value(value.shaderIntegerDotProduct);
    encoder->EncodeVkBool32Value(value.maintenance4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVulkan13Properties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.minSubgroupSize);
    encoder->EncodeUInt32Value(value.maxSubgroupSize);
    encoder->EncodeUInt32Value(value.maxComputeWorkgroupSubgroups);
    encoder->EncodeFlagsValue(value.requiredSubgroupSizeStages);
    encoder->EncodeUInt32Value(value.maxInlineUniformBlockSize);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxDescriptorSetInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxInlineUniformTotalSize);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated);
    encoder->EncodeVkDeviceSizeValue(value.storageTexelBufferOffsetAlignmentBytes);
    encoder->EncodeVkBool32Value(value.storageTexelBufferOffsetSingleTexelAlignment);
    encoder->EncodeVkDeviceSizeValue(value.uniformTexelBufferOffsetAlignmentBytes);
    encoder->EncodeVkBool32Value(value.uniformTexelBufferOffsetSingleTexelAlignment);
    encoder->EncodeVkDeviceSizeValue(value.maxBufferSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCreationFeedback& value)
{
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.duration);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCreationFeedbackCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pPipelineCreationFeedback);
    encoder->EncodeUInt32Value(value.pipelineStageCreationFeedbackCount);
    EncodeStructArray(encoder, value.pPipelineStageCreationFeedbacks, value.pipelineStageCreationFeedbackCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderTerminateInvocationFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderTerminateInvocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceToolProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.name);
    encoder->EncodeString(value.version);
    encoder->EncodeFlagsValue(value.purposes);
    encoder->EncodeString(value.description);
    encoder->EncodeString(value.layer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderDemoteToHelperInvocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePrivateDataFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.privateData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDevicePrivateDataCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.privateDataSlotRequestCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPrivateDataSlotCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePipelineCreationCacheControlFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pipelineCreationCacheControl);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryBarrier2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.srcStageMask);
    encoder->EncodeFlags64Value(value.srcAccessMask);
    encoder->EncodeFlags64Value(value.dstStageMask);
    encoder->EncodeFlags64Value(value.dstAccessMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferMemoryBarrier2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.srcStageMask);
    encoder->EncodeFlags64Value(value.srcAccessMask);
    encoder->EncodeFlags64Value(value.dstStageMask);
    encoder->EncodeFlags64Value(value.dstAccessMask);
    encoder->EncodeUInt32Value(value.srcQueueFamilyIndex);
    encoder->EncodeUInt32Value(value.dstQueueFamilyIndex);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageMemoryBarrier2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.srcStageMask);
    encoder->EncodeFlags64Value(value.srcAccessMask);
    encoder->EncodeFlags64Value(value.dstStageMask);
    encoder->EncodeFlags64Value(value.dstAccessMask);
    encoder->EncodeEnumValue(value.oldLayout);
    encoder->EncodeEnumValue(value.newLayout);
    encoder->EncodeUInt32Value(value.srcQueueFamilyIndex);
    encoder->EncodeUInt32Value(value.dstQueueFamilyIndex);
    encoder->EncodeHandleValue(value.image);
    EncodeStruct(encoder, value.subresourceRange);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDependencyInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.dependencyFlags);
    encoder->EncodeUInt32Value(value.memoryBarrierCount);
    EncodeStructArray(encoder, value.pMemoryBarriers, value.memoryBarrierCount);
    encoder->EncodeUInt32Value(value.bufferMemoryBarrierCount);
    EncodeStructArray(encoder, value.pBufferMemoryBarriers, value.bufferMemoryBarrierCount);
    encoder->EncodeUInt32Value(value.imageMemoryBarrierCount);
    EncodeStructArray(encoder, value.pImageMemoryBarriers, value.imageMemoryBarrierCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeUInt64Value(value.value);
    encoder->EncodeFlags64Value(value.stageMask);
    encoder->EncodeUInt32Value(value.deviceIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferSubmitInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.commandBuffer);
    encoder->EncodeUInt32Value(value.deviceMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubmitInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.waitSemaphoreInfoCount);
    EncodeStructArray(encoder, value.pWaitSemaphoreInfos, value.waitSemaphoreInfoCount);
    encoder->EncodeUInt32Value(value.commandBufferInfoCount);
    EncodeStructArray(encoder, value.pCommandBufferInfos, value.commandBufferInfoCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreInfoCount);
    EncodeStructArray(encoder, value.pSignalSemaphoreInfos, value.signalSemaphoreInfoCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSynchronization2Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.synchronization2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderZeroInitializeWorkgroupMemory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageRobustnessFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.robustImageAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferCopy2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.srcOffset);
    encoder->EncodeVkDeviceSizeValue(value.dstOffset);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyBufferInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcBuffer);
    encoder->EncodeHandleValue(value.dstBuffer);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageCopy2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStruct(encoder, value.srcOffset);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStruct(encoder, value.dstOffset);
    EncodeStruct(encoder, value.extent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyImageInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcImage);
    encoder->EncodeEnumValue(value.srcImageLayout);
    encoder->EncodeHandleValue(value.dstImage);
    encoder->EncodeEnumValue(value.dstImageLayout);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferImageCopy2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.bufferOffset);
    encoder->EncodeUInt32Value(value.bufferRowLength);
    encoder->EncodeUInt32Value(value.bufferImageHeight);
    EncodeStruct(encoder, value.imageSubresource);
    EncodeStruct(encoder, value.imageOffset);
    EncodeStruct(encoder, value.imageExtent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyBufferToImageInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcBuffer);
    encoder->EncodeHandleValue(value.dstImage);
    encoder->EncodeEnumValue(value.dstImageLayout);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyImageToBufferInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcImage);
    encoder->EncodeEnumValue(value.srcImageLayout);
    encoder->EncodeHandleValue(value.dstBuffer);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageBlit2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStructArray(encoder, value.srcOffsets, 2);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStructArray(encoder, value.dstOffsets, 2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBlitImageInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcImage);
    encoder->EncodeEnumValue(value.srcImageLayout);
    encoder->EncodeHandleValue(value.dstImage);
    encoder->EncodeEnumValue(value.dstImageLayout);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
    encoder->EncodeEnumValue(value.filter);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageResolve2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.srcSubresource);
    EncodeStruct(encoder, value.srcOffset);
    EncodeStruct(encoder, value.dstSubresource);
    EncodeStruct(encoder, value.dstOffset);
    EncodeStruct(encoder, value.extent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkResolveImageInfo2& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.srcImage);
    encoder->EncodeEnumValue(value.srcImageLayout);
    encoder->EncodeHandleValue(value.dstImage);
    encoder->EncodeEnumValue(value.dstImageLayout);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSubgroupSizeControlFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.subgroupSizeControl);
    encoder->EncodeVkBool32Value(value.computeFullSubgroups);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSubgroupSizeControlProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.minSubgroupSize);
    encoder->EncodeUInt32Value(value.maxSubgroupSize);
    encoder->EncodeUInt32Value(value.maxComputeWorkgroupSubgroups);
    encoder->EncodeFlagsValue(value.requiredSubgroupSizeStages);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.requiredSubgroupSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceInlineUniformBlockFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.inlineUniformBlock);
    encoder->EncodeVkBool32Value(value.descriptorBindingInlineUniformBlockUpdateAfterBind);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceInlineUniformBlockProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxInlineUniformBlockSize);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxDescriptorSetInlineUniformBlocks);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindInlineUniformBlocks);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWriteDescriptorSetInlineUniformBlock& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.dataSize);
    encoder->EncodeVoidArray(value.pData, value.dataSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorPoolInlineUniformBlockCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxInlineUniformBlockBindings);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTextureCompressionASTCHDRFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.textureCompressionASTC_HDR);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderingAttachmentInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.imageView);
    encoder->EncodeEnumValue(value.imageLayout);
    encoder->EncodeEnumValue(value.resolveMode);
    encoder->EncodeHandleValue(value.resolveImageView);
    encoder->EncodeEnumValue(value.resolveImageLayout);
    encoder->EncodeEnumValue(value.loadOp);
    encoder->EncodeEnumValue(value.storeOp);
    EncodeStruct(encoder, value.clearValue);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderingInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    EncodeStruct(encoder, value.renderArea);
    encoder->EncodeUInt32Value(value.layerCount);
    encoder->EncodeUInt32Value(value.viewMask);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    EncodeStructArray(encoder, value.pColorAttachments, value.colorAttachmentCount);
    EncodeStructPtr(encoder, value.pDepthAttachment);
    EncodeStructPtr(encoder, value.pStencilAttachment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRenderingCreateInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.viewMask);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    encoder->EncodeEnumArray(value.pColorAttachmentFormats, value.colorAttachmentCount);
    encoder->EncodeEnumValue(value.depthAttachmentFormat);
    encoder->EncodeEnumValue(value.stencilAttachmentFormat);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDynamicRenderingFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.dynamicRendering);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferInheritanceRenderingInfo& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.viewMask);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    encoder->EncodeEnumArray(value.pColorAttachmentFormats, value.colorAttachmentCount);
    encoder->EncodeEnumValue(value.depthAttachmentFormat);
    encoder->EncodeEnumValue(value.stencilAttachmentFormat);
    encoder->EncodeEnumValue(value.rasterizationSamples);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderIntegerDotProductFeatures& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderIntegerDotProduct);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderIntegerDotProductProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct8BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct4x8BitPackedMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct16BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct32BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProduct64BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitUnsignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitSignedAccelerated);
    encoder->EncodeVkBool32Value(value.integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTexelBufferAlignmentProperties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.storageTexelBufferOffsetAlignmentBytes);
    encoder->EncodeVkBool32Value(value.storageTexelBufferOffsetSingleTexelAlignment);
    encoder->EncodeVkDeviceSizeValue(value.uniformTexelBufferOffsetAlignmentBytes);
    encoder->EncodeVkBool32Value(value.uniformTexelBufferOffsetSingleTexelAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFormatProperties3& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.linearTilingFeatures);
    encoder->EncodeFlags64Value(value.optimalTilingFeatures);
    encoder->EncodeFlags64Value(value.bufferFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMaintenance4Features& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.maintenance4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMaintenance4Properties& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.maxBufferSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceBufferMemoryRequirements& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pCreateInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceImageMemoryRequirements& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pCreateInfo);
    encoder->EncodeEnumValue(value.planeAspect);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceCapabilitiesKHR& value)
{
    encoder->EncodeUInt32Value(value.minImageCount);
    encoder->EncodeUInt32Value(value.maxImageCount);
    EncodeStruct(encoder, value.currentExtent);
    EncodeStruct(encoder, value.minImageExtent);
    EncodeStruct(encoder, value.maxImageExtent);
    encoder->EncodeUInt32Value(value.maxImageArrayLayers);
    encoder->EncodeFlagsValue(value.supportedTransforms);
    encoder->EncodeEnumValue(value.currentTransform);
    encoder->EncodeFlagsValue(value.supportedCompositeAlpha);
    encoder->EncodeFlagsValue(value.supportedUsageFlags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceFormatKHR& value)
{
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeEnumValue(value.colorSpace);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSwapchainCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeHandleValue(value.surface);
    encoder->EncodeUInt32Value(value.minImageCount);
    encoder->EncodeEnumValue(value.imageFormat);
    encoder->EncodeEnumValue(value.imageColorSpace);
    EncodeStruct(encoder, value.imageExtent);
    encoder->EncodeUInt32Value(value.imageArrayLayers);
    encoder->EncodeFlagsValue(value.imageUsage);
    encoder->EncodeEnumValue(value.imageSharingMode);
    encoder->EncodeUInt32Value(value.queueFamilyIndexCount);
    encoder->EncodeUInt32Array(value.pQueueFamilyIndices, value.queueFamilyIndexCount);
    encoder->EncodeEnumValue(value.preTransform);
    encoder->EncodeEnumValue(value.compositeAlpha);
    encoder->EncodeEnumValue(value.presentMode);
    encoder->EncodeVkBool32Value(value.clipped);
    encoder->EncodeHandleValue(value.oldSwapchain);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreCount);
    encoder->EncodeHandleArray(value.pWaitSemaphores, value.waitSemaphoreCount);
    encoder->EncodeUInt32Value(value.swapchainCount);
    encoder->EncodeHandleArray(value.pSwapchains, value.swapchainCount);
    encoder->EncodeUInt32Array(value.pImageIndices, value.swapchainCount);
    encoder->EncodeEnumArray(value.pResults, value.swapchainCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSwapchainCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.swapchain);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindImageMemorySwapchainInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.swapchain);
    encoder->EncodeUInt32Value(value.imageIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAcquireNextImageInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.swapchain);
    encoder->EncodeUInt64Value(value.timeout);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeHandleValue(value.fence);
    encoder->EncodeUInt32Value(value.deviceMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupPresentCapabilitiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Array(value.presentMask, VK_MAX_DEVICE_GROUP_SIZE);
    encoder->EncodeFlagsValue(value.modes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupPresentInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.swapchainCount);
    encoder->EncodeUInt32Array(value.pDeviceMasks, value.swapchainCount);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceGroupSwapchainCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.modes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayModeParametersKHR& value)
{
    EncodeStruct(encoder, value.visibleRegion);
    encoder->EncodeUInt32Value(value.refreshRate);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayModeCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    EncodeStruct(encoder, value.parameters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayModePropertiesKHR& value)
{
    encoder->EncodeHandleValue(value.displayMode);
    EncodeStruct(encoder, value.parameters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPlaneCapabilitiesKHR& value)
{
    encoder->EncodeFlagsValue(value.supportedAlpha);
    EncodeStruct(encoder, value.minSrcPosition);
    EncodeStruct(encoder, value.maxSrcPosition);
    EncodeStruct(encoder, value.minSrcExtent);
    EncodeStruct(encoder, value.maxSrcExtent);
    EncodeStruct(encoder, value.minDstPosition);
    EncodeStruct(encoder, value.maxDstPosition);
    EncodeStruct(encoder, value.minDstExtent);
    EncodeStruct(encoder, value.maxDstExtent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPlanePropertiesKHR& value)
{
    encoder->EncodeHandleValue(value.currentDisplay);
    encoder->EncodeUInt32Value(value.currentStackIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPropertiesKHR& value)
{
    encoder->EncodeHandleValue(value.display);
    encoder->EncodeString(value.displayName);
    EncodeStruct(encoder, value.physicalDimensions);
    EncodeStruct(encoder, value.physicalResolution);
    encoder->EncodeFlagsValue(value.supportedTransforms);
    encoder->EncodeVkBool32Value(value.planeReorderPossible);
    encoder->EncodeVkBool32Value(value.persistentContent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplaySurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeHandleValue(value.displayMode);
    encoder->EncodeUInt32Value(value.planeIndex);
    encoder->EncodeUInt32Value(value.planeStackIndex);
    encoder->EncodeEnumValue(value.transform);
    encoder->EncodeFloatValue(value.globalAlpha);
    encoder->EncodeEnumValue(value.alphaMode);
    EncodeStruct(encoder, value.imageExtent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPresentInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.srcRect);
    EncodeStruct(encoder, value.dstRect);
    encoder->EncodeVkBool32Value(value.persistent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkXlibSurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.dpy);
    encoder->EncodeSizeTValue(value.window);
}

void EncodeStruct(ParameterEncoder* encoder, const VkXcbSurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.connection);
    encoder->EncodeUInt32Value(value.window);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWaylandSurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.display);
    encoder->EncodeVoidPtr(value.surface);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAndroidSurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.window);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWin32SurfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.hinstance);
    encoder->EncodeVoidPtr(value.hwnd);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderingFragmentShadingRateAttachmentInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.imageView);
    encoder->EncodeEnumValue(value.imageLayout);
    EncodeStruct(encoder, value.shadingRateAttachmentTexelSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderingFragmentDensityMapAttachmentInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.imageView);
    encoder->EncodeEnumValue(value.imageLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentSampleCountInfoAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.colorAttachmentCount);
    encoder->EncodeEnumArray(value.pColorAttachmentSamples, value.colorAttachmentCount);
    encoder->EncodeEnumValue(value.depthStencilAttachmentSamples);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMultiviewPerViewAttributesInfoNVX& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.perViewAttributes);
    encoder->EncodeVkBool32Value(value.perViewAttributesPositionXOnly);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportMemoryWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeVoidPtr(value.handle);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportMemoryWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pAttributes);
    encoder->EncodeUInt32Value(value.dwAccess);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryWin32HandlePropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryGetWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportMemoryFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeInt32Value(value.fd);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryFdPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryGetFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWin32KeyedMutexAcquireReleaseInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.acquireCount);
    encoder->EncodeHandleArray(value.pAcquireSyncs, value.acquireCount);
    encoder->EncodeUInt64Array(value.pAcquireKeys, value.acquireCount);
    encoder->EncodeUInt32Array(value.pAcquireTimeouts, value.acquireCount);
    encoder->EncodeUInt32Value(value.releaseCount);
    encoder->EncodeHandleArray(value.pReleaseSyncs, value.releaseCount);
    encoder->EncodeUInt64Array(value.pReleaseKeys, value.releaseCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportSemaphoreWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeVoidPtr(value.handle);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportSemaphoreWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pAttributes);
    encoder->EncodeUInt32Value(value.dwAccess);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkD3D12FenceSubmitInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.waitSemaphoreValuesCount);
    encoder->EncodeUInt64Array(value.pWaitSemaphoreValues, value.waitSemaphoreValuesCount);
    encoder->EncodeUInt32Value(value.signalSemaphoreValuesCount);
    encoder->EncodeUInt64Array(value.pSignalSemaphoreValues, value.signalSemaphoreValuesCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreGetWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportSemaphoreFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeInt32Value(value.fd);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreGetFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePushDescriptorPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxPushDescriptors);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRectLayerKHR& value)
{
    EncodeStruct(encoder, value.offset);
    EncodeStruct(encoder, value.extent);
    encoder->EncodeUInt32Value(value.layer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentRegionKHR& value)
{
    encoder->EncodeUInt32Value(value.rectangleCount);
    EncodeStructArray(encoder, value.pRectangles, value.rectangleCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentRegionsKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.swapchainCount);
    EncodeStructArray(encoder, value.pRegions, value.swapchainCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSharedPresentSurfaceCapabilitiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.sharedPresentSupportedUsageFlags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportFenceWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.fence);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeVoidPtr(value.handle);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportFenceWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pAttributes);
    encoder->EncodeUInt32Value(value.dwAccess);
    encoder->EncodeWString(value.name);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFenceGetWin32HandleInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.fence);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportFenceFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.fence);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeInt32Value(value.fd);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFenceGetFdInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.fence);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePerformanceQueryFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.performanceCounterQueryPools);
    encoder->EncodeVkBool32Value(value.performanceCounterMultipleQueryPools);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePerformanceQueryPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.allowCommandBufferQueryCopies);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceCounterKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.unit);
    encoder->EncodeEnumValue(value.scope);
    encoder->EncodeEnumValue(value.storage);
    encoder->EncodeUInt8Array(value.uuid, VK_UUID_SIZE);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceCounterDescriptionKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeString(value.name);
    encoder->EncodeString(value.category);
    encoder->EncodeString(value.description);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueryPoolPerformanceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.queueFamilyIndex);
    encoder->EncodeUInt32Value(value.counterIndexCount);
    encoder->EncodeUInt32Array(value.pCounterIndices, value.counterIndexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAcquireProfilingLockInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.timeout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceQuerySubmitInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.counterPassIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSurfaceInfo2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.surface);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceCapabilities2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.surfaceCapabilities);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceFormat2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.surfaceFormat);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayProperties2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.displayProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPlaneProperties2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.displayPlaneProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayModeProperties2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.displayModeProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPlaneInfo2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.mode);
    encoder->EncodeUInt32Value(value.planeIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPlaneCapabilities2KHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.capabilities);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePortabilitySubsetFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.constantAlphaColorBlendFactors);
    encoder->EncodeVkBool32Value(value.events);
    encoder->EncodeVkBool32Value(value.imageViewFormatReinterpretation);
    encoder->EncodeVkBool32Value(value.imageViewFormatSwizzle);
    encoder->EncodeVkBool32Value(value.imageView2DOn3DImage);
    encoder->EncodeVkBool32Value(value.multisampleArrayImage);
    encoder->EncodeVkBool32Value(value.mutableComparisonSamplers);
    encoder->EncodeVkBool32Value(value.pointPolygons);
    encoder->EncodeVkBool32Value(value.samplerMipLodBias);
    encoder->EncodeVkBool32Value(value.separateStencilMaskRef);
    encoder->EncodeVkBool32Value(value.shaderSampleRateInterpolationFunctions);
    encoder->EncodeVkBool32Value(value.tessellationIsolines);
    encoder->EncodeVkBool32Value(value.tessellationPointMode);
    encoder->EncodeVkBool32Value(value.triangleFans);
    encoder->EncodeVkBool32Value(value.vertexAttributeAccessBeyondStride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePortabilitySubsetPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.minVertexInputBindingStrideAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderClockFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderSubgroupClock);
    encoder->EncodeVkBool32Value(value.shaderDeviceClock);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceQueueGlobalPriorityCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.globalPriority);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.globalPriorityQuery);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueueFamilyGlobalPriorityPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.priorityCount);
    encoder->EncodeEnumArray(value.priorities, VK_MAX_GLOBAL_PRIORITY_SIZE_KHR);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFragmentShadingRateAttachmentInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pFragmentShadingRateAttachment);
    EncodeStruct(encoder, value.shadingRateAttachmentTexelSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineFragmentShadingRateStateCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.fragmentSize);
    encoder->EncodeEnumArray(value.combinerOps, 2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pipelineFragmentShadingRate);
    encoder->EncodeVkBool32Value(value.primitiveFragmentShadingRate);
    encoder->EncodeVkBool32Value(value.attachmentFragmentShadingRate);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.minFragmentShadingRateAttachmentTexelSize);
    EncodeStruct(encoder, value.maxFragmentShadingRateAttachmentTexelSize);
    encoder->EncodeUInt32Value(value.maxFragmentShadingRateAttachmentTexelSizeAspectRatio);
    encoder->EncodeVkBool32Value(value.primitiveFragmentShadingRateWithMultipleViewports);
    encoder->EncodeVkBool32Value(value.layeredShadingRateAttachments);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateNonTrivialCombinerOps);
    EncodeStruct(encoder, value.maxFragmentSize);
    encoder->EncodeUInt32Value(value.maxFragmentSizeAspectRatio);
    encoder->EncodeUInt32Value(value.maxFragmentShadingRateCoverageSamples);
    encoder->EncodeEnumValue(value.maxFragmentShadingRateRasterizationSamples);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithShaderDepthStencilWrites);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithSampleMask);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithShaderSampleMask);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithConservativeRasterization);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithFragmentShaderInterlock);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateWithCustomSampleLocations);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateStrictMultiplyCombiner);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShadingRateKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.sampleCounts);
    EncodeStruct(encoder, value.fragmentSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceProtectedCapabilitiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.supportsProtected);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePresentWaitFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.presentWait);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pipelineExecutableInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.pipeline);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineExecutablePropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.stages);
    encoder->EncodeString(value.name);
    encoder->EncodeString(value.description);
    encoder->EncodeUInt32Value(value.subgroupSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineExecutableInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.pipeline);
    encoder->EncodeUInt32Value(value.executableIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineExecutableStatisticKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.name);
    encoder->EncodeString(value.description);
    encoder->EncodeEnumValue(value.format);
    EncodeStruct(encoder, value.value);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineExecutableInternalRepresentationKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.name);
    encoder->EncodeString(value.description);
    encoder->EncodeVkBool32Value(value.isText);
    encoder->EncodeSizeTValue(value.dataSize);
    encoder->EncodeVoidArray(value.pData, value.dataSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineLibraryCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.libraryCount);
    encoder->EncodeHandleArray(value.pLibraries, value.libraryCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentIdKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.swapchainCount);
    encoder->EncodeUInt64Array(value.pPresentIds, value.swapchainCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePresentIdFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.presentId);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueueFamilyCheckpointProperties2NV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.checkpointExecutionStageMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCheckpointData2NV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlags64Value(value.stage);
    encoder->EncodeVoidPtr(value.pCheckpointMarker);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentShaderBarycentric);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.triStripVertexOrderIndependentOfProvokingVertex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderSubgroupUniformControlFlow);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.workgroupMemoryExplicitLayout);
    encoder->EncodeVkBool32Value(value.workgroupMemoryExplicitLayoutScalarBlockLayout);
    encoder->EncodeVkBool32Value(value.workgroupMemoryExplicitLayout8BitAccess);
    encoder->EncodeVkBool32Value(value.workgroupMemoryExplicitLayout16BitAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rayTracingMaintenance1);
    encoder->EncodeVkBool32Value(value.rayTracingPipelineTraceRaysIndirect2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTraceRaysIndirectCommand2KHR& value)
{
    encoder->EncodeVkDeviceAddressValue(value.raygenShaderRecordAddress);
    encoder->EncodeVkDeviceSizeValue(value.raygenShaderRecordSize);
    encoder->EncodeVkDeviceAddressValue(value.missShaderBindingTableAddress);
    encoder->EncodeVkDeviceSizeValue(value.missShaderBindingTableSize);
    encoder->EncodeVkDeviceSizeValue(value.missShaderBindingTableStride);
    encoder->EncodeVkDeviceAddressValue(value.hitShaderBindingTableAddress);
    encoder->EncodeVkDeviceSizeValue(value.hitShaderBindingTableSize);
    encoder->EncodeVkDeviceSizeValue(value.hitShaderBindingTableStride);
    encoder->EncodeVkDeviceAddressValue(value.callableShaderBindingTableAddress);
    encoder->EncodeVkDeviceSizeValue(value.callableShaderBindingTableSize);
    encoder->EncodeVkDeviceSizeValue(value.callableShaderBindingTableStride);
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeUInt32Value(value.depth);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugReportCallbackCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeFunctionPtr(value.pfnCallback);
    encoder->EncodeVoidPtr(value.pUserData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationStateRasterizationOrderAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.rasterizationOrder);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugMarkerObjectNameInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.objectType);
    encoder->EncodeUInt64Value(GetWrappedId(value.object, value.objectType));
    encoder->EncodeString(value.pObjectName);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugMarkerObjectTagInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.objectType);
    encoder->EncodeUInt64Value(GetWrappedId(value.object, value.objectType));
    encoder->EncodeUInt64Value(value.tagName);
    encoder->EncodeSizeTValue(value.tagSize);
    encoder->EncodeVoidArray(value.pTag, value.tagSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugMarkerMarkerInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.pMarkerName);
    encoder->EncodeFloatArray(value.color, 4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDedicatedAllocationImageCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.dedicatedAllocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDedicatedAllocationBufferCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.dedicatedAllocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDedicatedAllocationMemoryAllocateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.image);
    encoder->EncodeHandleValue(value.buffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTransformFeedbackFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.transformFeedback);
    encoder->EncodeVkBool32Value(value.geometryStreams);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTransformFeedbackPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxTransformFeedbackStreams);
    encoder->EncodeUInt32Value(value.maxTransformFeedbackBuffers);
    encoder->EncodeVkDeviceSizeValue(value.maxTransformFeedbackBufferSize);
    encoder->EncodeUInt32Value(value.maxTransformFeedbackStreamDataSize);
    encoder->EncodeUInt32Value(value.maxTransformFeedbackBufferDataSize);
    encoder->EncodeUInt32Value(value.maxTransformFeedbackBufferDataStride);
    encoder->EncodeVkBool32Value(value.transformFeedbackQueries);
    encoder->EncodeVkBool32Value(value.transformFeedbackStreamsLinesTriangles);
    encoder->EncodeVkBool32Value(value.transformFeedbackRasterizationStreamSelect);
    encoder->EncodeVkBool32Value(value.transformFeedbackDraw);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationStateStreamCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.rasterizationStream);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewHandleInfoNVX& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.imageView);
    encoder->EncodeEnumValue(value.descriptorType);
    encoder->EncodeHandleValue(value.sampler);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewAddressPropertiesNVX& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceAddressValue(value.deviceAddress);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTextureLODGatherFormatPropertiesAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.supportsTextureGatherLODBiasAMD);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShaderResourceUsageAMD& value)
{
    encoder->EncodeUInt32Value(value.numUsedVgprs);
    encoder->EncodeUInt32Value(value.numUsedSgprs);
    encoder->EncodeUInt32Value(value.ldsSizePerLocalWorkGroup);
    encoder->EncodeSizeTValue(value.ldsUsageSizeInBytes);
    encoder->EncodeSizeTValue(value.scratchMemUsageInBytes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShaderStatisticsInfoAMD& value)
{
    encoder->EncodeFlagsValue(value.shaderStageMask);
    EncodeStruct(encoder, value.resourceUsage);
    encoder->EncodeUInt32Value(value.numPhysicalVgprs);
    encoder->EncodeUInt32Value(value.numPhysicalSgprs);
    encoder->EncodeUInt32Value(value.numAvailableVgprs);
    encoder->EncodeUInt32Value(value.numAvailableSgprs);
    encoder->EncodeUInt32Array(value.computeWorkGroupSize, 3);
}

void EncodeStruct(ParameterEncoder* encoder, const VkStreamDescriptorSurfaceCreateInfoGGP& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.streamDescriptor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCornerSampledImageFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.cornerSampledImage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalImageFormatPropertiesNV& value)
{
    EncodeStruct(encoder, value.imageFormatProperties);
    encoder->EncodeFlagsValue(value.externalMemoryFeatures);
    encoder->EncodeFlagsValue(value.exportFromImportedHandleTypes);
    encoder->EncodeFlagsValue(value.compatibleHandleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalMemoryImageCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportMemoryAllocateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleTypes);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportMemoryWin32HandleInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.handleType);
    encoder->EncodeVoidPtr(value.handle);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExportMemoryWin32HandleInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pAttributes);
    encoder->EncodeUInt32Value(value.dwAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWin32KeyedMutexAcquireReleaseInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.acquireCount);
    encoder->EncodeHandleArray(value.pAcquireSyncs, value.acquireCount);
    encoder->EncodeUInt64Array(value.pAcquireKeys, value.acquireCount);
    encoder->EncodeUInt32Array(value.pAcquireTimeoutMilliseconds, value.acquireCount);
    encoder->EncodeUInt32Value(value.releaseCount);
    encoder->EncodeHandleArray(value.pReleaseSyncs, value.releaseCount);
    encoder->EncodeUInt64Array(value.pReleaseKeys, value.releaseCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkValidationFlagsEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.disabledValidationCheckCount);
    encoder->EncodeEnumArray(value.pDisabledValidationChecks, value.disabledValidationCheckCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkViSurfaceCreateInfoNN& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.window);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewASTCDecodeModeEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.decodeMode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceASTCDecodeFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.decodeModeSharedExponent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePipelineRobustnessFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pipelineRobustness);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePipelineRobustnessPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.defaultRobustnessStorageBuffers);
    encoder->EncodeEnumValue(value.defaultRobustnessUniformBuffers);
    encoder->EncodeEnumValue(value.defaultRobustnessVertexInputs);
    encoder->EncodeEnumValue(value.defaultRobustnessImages);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRobustnessCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.storageBuffers);
    encoder->EncodeEnumValue(value.uniformBuffers);
    encoder->EncodeEnumValue(value.vertexInputs);
    encoder->EncodeEnumValue(value.images);
}

void EncodeStruct(ParameterEncoder* encoder, const VkConditionalRenderingBeginInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceConditionalRenderingFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.conditionalRendering);
    encoder->EncodeVkBool32Value(value.inheritedConditionalRendering);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferInheritanceConditionalRenderingInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.conditionalRenderingEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkViewportWScalingNV& value)
{
    encoder->EncodeFloatValue(value.xcoeff);
    encoder->EncodeFloatValue(value.ycoeff);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportWScalingStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.viewportWScalingEnable);
    encoder->EncodeUInt32Value(value.viewportCount);
    EncodeStructArray(encoder, value.pViewportWScalings, value.viewportCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceCapabilities2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.minImageCount);
    encoder->EncodeUInt32Value(value.maxImageCount);
    EncodeStruct(encoder, value.currentExtent);
    EncodeStruct(encoder, value.minImageExtent);
    EncodeStruct(encoder, value.maxImageExtent);
    encoder->EncodeUInt32Value(value.maxImageArrayLayers);
    encoder->EncodeFlagsValue(value.supportedTransforms);
    encoder->EncodeEnumValue(value.currentTransform);
    encoder->EncodeFlagsValue(value.supportedCompositeAlpha);
    encoder->EncodeFlagsValue(value.supportedUsageFlags);
    encoder->EncodeFlagsValue(value.supportedSurfaceCounters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayPowerInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.powerState);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceEventInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.deviceEvent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayEventInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.displayEvent);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSwapchainCounterCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.surfaceCounters);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRefreshCycleDurationGOOGLE& value)
{
    encoder->EncodeUInt64Value(value.refreshDuration);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPastPresentationTimingGOOGLE& value)
{
    encoder->EncodeUInt32Value(value.presentID);
    encoder->EncodeUInt64Value(value.desiredPresentTime);
    encoder->EncodeUInt64Value(value.actualPresentTime);
    encoder->EncodeUInt64Value(value.earliestPresentTime);
    encoder->EncodeUInt64Value(value.presentMargin);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentTimeGOOGLE& value)
{
    encoder->EncodeUInt32Value(value.presentID);
    encoder->EncodeUInt64Value(value.desiredPresentTime);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentTimesInfoGOOGLE& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.swapchainCount);
    EncodeStructArray(encoder, value.pTimes, value.swapchainCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.perViewPositionAllComponents);
}

void EncodeStruct(ParameterEncoder* encoder, const VkViewportSwizzleNV& value)
{
    encoder->EncodeEnumValue(value.x);
    encoder->EncodeEnumValue(value.y);
    encoder->EncodeEnumValue(value.z);
    encoder->EncodeEnumValue(value.w);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportSwizzleStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.viewportCount);
    EncodeStructArray(encoder, value.pViewportSwizzles, value.viewportCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxDiscardRectangles);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineDiscardRectangleStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.discardRectangleMode);
    encoder->EncodeUInt32Value(value.discardRectangleCount);
    EncodeStructArray(encoder, value.pDiscardRectangles, value.discardRectangleCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFloatValue(value.primitiveOverestimationSize);
    encoder->EncodeFloatValue(value.maxExtraPrimitiveOverestimationSize);
    encoder->EncodeFloatValue(value.extraPrimitiveOverestimationSizeGranularity);
    encoder->EncodeVkBool32Value(value.primitiveUnderestimation);
    encoder->EncodeVkBool32Value(value.conservativePointAndLineRasterization);
    encoder->EncodeVkBool32Value(value.degenerateTrianglesRasterized);
    encoder->EncodeVkBool32Value(value.degenerateLinesRasterized);
    encoder->EncodeVkBool32Value(value.fullyCoveredFragmentShaderInputVariable);
    encoder->EncodeVkBool32Value(value.conservativeRasterizationPostDepthCoverage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationConservativeStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.conservativeRasterizationMode);
    encoder->EncodeFloatValue(value.extraPrimitiveOverestimationSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.depthClipEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkBool32Value(value.depthClipEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkXYColorEXT& value)
{
    encoder->EncodeFloatValue(value.x);
    encoder->EncodeFloatValue(value.y);
}

void EncodeStruct(ParameterEncoder* encoder, const VkHdrMetadataEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.displayPrimaryRed);
    EncodeStruct(encoder, value.displayPrimaryGreen);
    EncodeStruct(encoder, value.displayPrimaryBlue);
    EncodeStruct(encoder, value.whitePoint);
    encoder->EncodeFloatValue(value.maxLuminance);
    encoder->EncodeFloatValue(value.minLuminance);
    encoder->EncodeFloatValue(value.maxContentLightLevel);
    encoder->EncodeFloatValue(value.maxFrameAverageLightLevel);
}

void EncodeStruct(ParameterEncoder* encoder, const VkIOSSurfaceCreateInfoMVK& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.pView);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMacOSSurfaceCreateInfoMVK& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.pView);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugUtilsLabelEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.pLabelName);
    encoder->EncodeFloatArray(value.color, 4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugUtilsObjectNameInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.objectType);
    encoder->EncodeUInt64Value(GetWrappedId(value.objectHandle, value.objectType));
    encoder->EncodeString(value.pObjectName);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugUtilsMessengerCallbackDataEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeString(value.pMessageIdName);
    encoder->EncodeInt32Value(value.messageIdNumber);
    encoder->EncodeString(value.pMessage);
    encoder->EncodeUInt32Value(value.queueLabelCount);
    EncodeStructArray(encoder, value.pQueueLabels, value.queueLabelCount);
    encoder->EncodeUInt32Value(value.cmdBufLabelCount);
    EncodeStructArray(encoder, value.pCmdBufLabels, value.cmdBufLabelCount);
    encoder->EncodeUInt32Value(value.objectCount);
    EncodeStructArray(encoder, value.pObjects, value.objectCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugUtilsMessengerCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeFlagsValue(value.messageSeverity);
    encoder->EncodeFlagsValue(value.messageType);
    encoder->EncodeFunctionPtr(value.pfnUserCallback);
    encoder->EncodeVoidPtr(value.pUserData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDebugUtilsObjectTagInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.objectType);
    encoder->EncodeUInt64Value(GetWrappedId(value.objectHandle, value.objectType));
    encoder->EncodeUInt64Value(value.tagName);
    encoder->EncodeSizeTValue(value.tagSize);
    encoder->EncodeVoidArray(value.pTag, value.tagSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAndroidHardwareBufferUsageANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.androidHardwareBufferUsage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAndroidHardwareBufferPropertiesANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.allocationSize);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAndroidHardwareBufferFormatPropertiesANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeUInt64Value(value.externalFormat);
    encoder->EncodeFlagsValue(value.formatFeatures);
    EncodeStruct(encoder, value.samplerYcbcrConversionComponents);
    encoder->EncodeEnumValue(value.suggestedYcbcrModel);
    encoder->EncodeEnumValue(value.suggestedYcbcrRange);
    encoder->EncodeEnumValue(value.suggestedXChromaOffset);
    encoder->EncodeEnumValue(value.suggestedYChromaOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportAndroidHardwareBufferInfoANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVoidPtr(value.buffer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryGetAndroidHardwareBufferInfoANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkExternalFormatANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.externalFormat);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAndroidHardwareBufferFormatProperties2ANDROID& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeUInt64Value(value.externalFormat);
    encoder->EncodeFlags64Value(value.formatFeatures);
    EncodeStruct(encoder, value.samplerYcbcrConversionComponents);
    encoder->EncodeEnumValue(value.suggestedYcbcrModel);
    encoder->EncodeEnumValue(value.suggestedYcbcrRange);
    encoder->EncodeEnumValue(value.suggestedXChromaOffset);
    encoder->EncodeEnumValue(value.suggestedYChromaOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSampleLocationEXT& value)
{
    encoder->EncodeFloatValue(value.x);
    encoder->EncodeFloatValue(value.y);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSampleLocationsInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.sampleLocationsPerPixel);
    EncodeStruct(encoder, value.sampleLocationGridSize);
    encoder->EncodeUInt32Value(value.sampleLocationsCount);
    EncodeStructArray(encoder, value.pSampleLocations, value.sampleLocationsCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAttachmentSampleLocationsEXT& value)
{
    encoder->EncodeUInt32Value(value.attachmentIndex);
    EncodeStruct(encoder, value.sampleLocationsInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassSampleLocationsEXT& value)
{
    encoder->EncodeUInt32Value(value.subpassIndex);
    EncodeStruct(encoder, value.sampleLocationsInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassSampleLocationsBeginInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.attachmentInitialSampleLocationsCount);
    EncodeStructArray(encoder, value.pAttachmentInitialSampleLocations, value.attachmentInitialSampleLocationsCount);
    encoder->EncodeUInt32Value(value.postSubpassSampleLocationsCount);
    EncodeStructArray(encoder, value.pPostSubpassSampleLocations, value.postSubpassSampleLocationsCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineSampleLocationsStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.sampleLocationsEnable);
    EncodeStruct(encoder, value.sampleLocationsInfo);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSampleLocationsPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.sampleLocationSampleCounts);
    EncodeStruct(encoder, value.maxSampleLocationGridSize);
    encoder->EncodeFloatArray(value.sampleLocationCoordinateRange, 2);
    encoder->EncodeUInt32Value(value.sampleLocationSubPixelBits);
    encoder->EncodeVkBool32Value(value.variableSampleLocations);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMultisamplePropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.maxSampleLocationGridSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.advancedBlendCoherentOperations);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.advancedBlendMaxColorAttachments);
    encoder->EncodeVkBool32Value(value.advancedBlendIndependentBlend);
    encoder->EncodeVkBool32Value(value.advancedBlendNonPremultipliedSrcColor);
    encoder->EncodeVkBool32Value(value.advancedBlendNonPremultipliedDstColor);
    encoder->EncodeVkBool32Value(value.advancedBlendCorrelatedOverlap);
    encoder->EncodeVkBool32Value(value.advancedBlendAllOperations);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.srcPremultiplied);
    encoder->EncodeVkBool32Value(value.dstPremultiplied);
    encoder->EncodeEnumValue(value.blendOverlap);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCoverageToColorStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkBool32Value(value.coverageToColorEnable);
    encoder->EncodeUInt32Value(value.coverageToColorLocation);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCoverageModulationStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.coverageModulationMode);
    encoder->EncodeVkBool32Value(value.coverageModulationTableEnable);
    encoder->EncodeUInt32Value(value.coverageModulationTableCount);
    encoder->EncodeFloatArray(value.pCoverageModulationTable, value.coverageModulationTableCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.shaderSMCount);
    encoder->EncodeUInt32Value(value.shaderWarpsPerSM);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderSMBuiltins);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrmFormatModifierPropertiesEXT& value)
{
    encoder->EncodeUInt64Value(value.drmFormatModifier);
    encoder->EncodeUInt32Value(value.drmFormatModifierPlaneCount);
    encoder->EncodeFlagsValue(value.drmFormatModifierTilingFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrmFormatModifierPropertiesListEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.drmFormatModifierCount);
    EncodeStructArray(encoder, value.pDrmFormatModifierProperties, value.drmFormatModifierCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.drmFormatModifier);
    encoder->EncodeEnumValue(value.sharingMode);
    encoder->EncodeUInt32Value(value.queueFamilyIndexCount);
    encoder->EncodeUInt32Array(value.pQueueFamilyIndices, value.queueFamilyIndexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageDrmFormatModifierListCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.drmFormatModifierCount);
    encoder->EncodeUInt64Array(value.pDrmFormatModifiers, value.drmFormatModifierCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageDrmFormatModifierExplicitCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.drmFormatModifier);
    encoder->EncodeUInt32Value(value.drmFormatModifierPlaneCount);
    EncodeStructArray(encoder, value.pPlaneLayouts, value.drmFormatModifierPlaneCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageDrmFormatModifierPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.drmFormatModifier);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrmFormatModifierProperties2EXT& value)
{
    encoder->EncodeUInt64Value(value.drmFormatModifier);
    encoder->EncodeUInt32Value(value.drmFormatModifierPlaneCount);
    encoder->EncodeFlags64Value(value.drmFormatModifierTilingFeatures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrmFormatModifierPropertiesList2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.drmFormatModifierCount);
    EncodeStructArray(encoder, value.pDrmFormatModifierProperties, value.drmFormatModifierCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkValidationCacheCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeSizeTValue(value.initialDataSize);
    encoder->EncodeVoidArray(value.pInitialData, value.initialDataSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShaderModuleValidationCacheCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.validationCache);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShadingRatePaletteNV& value)
{
    encoder->EncodeUInt32Value(value.shadingRatePaletteEntryCount);
    encoder->EncodeEnumArray(value.pShadingRatePaletteEntries, value.shadingRatePaletteEntryCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportShadingRateImageStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shadingRateImageEnable);
    encoder->EncodeUInt32Value(value.viewportCount);
    EncodeStructArray(encoder, value.pShadingRatePalettes, value.viewportCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShadingRateImageFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shadingRateImage);
    encoder->EncodeVkBool32Value(value.shadingRateCoarseSampleOrder);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShadingRateImagePropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.shadingRateTexelSize);
    encoder->EncodeUInt32Value(value.shadingRatePaletteSize);
    encoder->EncodeUInt32Value(value.shadingRateMaxCoarseSamples);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCoarseSampleLocationNV& value)
{
    encoder->EncodeUInt32Value(value.pixelX);
    encoder->EncodeUInt32Value(value.pixelY);
    encoder->EncodeUInt32Value(value.sample);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCoarseSampleOrderCustomNV& value)
{
    encoder->EncodeEnumValue(value.shadingRate);
    encoder->EncodeUInt32Value(value.sampleCount);
    encoder->EncodeUInt32Value(value.sampleLocationCount);
    EncodeStructArray(encoder, value.pSampleLocations, value.sampleLocationCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.sampleOrderType);
    encoder->EncodeUInt32Value(value.customSampleOrderCount);
    EncodeStructArray(encoder, value.pCustomSampleOrders, value.customSampleOrderCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRayTracingShaderGroupCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeUInt32Value(value.generalShader);
    encoder->EncodeUInt32Value(value.closestHitShader);
    encoder->EncodeUInt32Value(value.anyHitShader);
    encoder->EncodeUInt32Value(value.intersectionShader);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRayTracingPipelineCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.stageCount);
    EncodeStructArray(encoder, value.pStages, value.stageCount);
    encoder->EncodeUInt32Value(value.groupCount);
    EncodeStructArray(encoder, value.pGroups, value.groupCount);
    encoder->EncodeUInt32Value(value.maxRecursionDepth);
    encoder->EncodeHandleValue(value.layout);
    encoder->EncodeHandleValue(value.basePipelineHandle);
    encoder->EncodeInt32Value(value.basePipelineIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeometryTrianglesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.vertexData);
    encoder->EncodeVkDeviceSizeValue(value.vertexOffset);
    encoder->EncodeUInt32Value(value.vertexCount);
    encoder->EncodeVkDeviceSizeValue(value.vertexStride);
    encoder->EncodeEnumValue(value.vertexFormat);
    encoder->EncodeHandleValue(value.indexData);
    encoder->EncodeVkDeviceSizeValue(value.indexOffset);
    encoder->EncodeUInt32Value(value.indexCount);
    encoder->EncodeEnumValue(value.indexType);
    encoder->EncodeHandleValue(value.transformData);
    encoder->EncodeVkDeviceSizeValue(value.transformOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeometryAABBNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.aabbData);
    encoder->EncodeUInt32Value(value.numAABBs);
    encoder->EncodeUInt32Value(value.stride);
    encoder->EncodeVkDeviceSizeValue(value.offset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeometryDataNV& value)
{
    EncodeStruct(encoder, value.triangles);
    EncodeStruct(encoder, value.aabbs);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeometryNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.geometryType);
    EncodeStruct(encoder, value.geometry);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.instanceCount);
    encoder->EncodeUInt32Value(value.geometryCount);
    EncodeStructArray(encoder, value.pGeometries, value.geometryCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.compactedSize);
    EncodeStruct(encoder, value.info);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindAccelerationStructureMemoryInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.accelerationStructure);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeVkDeviceSizeValue(value.memoryOffset);
    encoder->EncodeUInt32Value(value.deviceIndexCount);
    encoder->EncodeUInt32Array(value.pDeviceIndices, value.deviceIndexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWriteDescriptorSetAccelerationStructureNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.accelerationStructureCount);
    encoder->EncodeHandleArray(value.pAccelerationStructures, value.accelerationStructureCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureMemoryRequirementsInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeHandleValue(value.accelerationStructure);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayTracingPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.shaderGroupHandleSize);
    encoder->EncodeUInt32Value(value.maxRecursionDepth);
    encoder->EncodeUInt32Value(value.maxShaderGroupStride);
    encoder->EncodeUInt32Value(value.shaderGroupBaseAlignment);
    encoder->EncodeUInt64Value(value.maxGeometryCount);
    encoder->EncodeUInt64Value(value.maxInstanceCount);
    encoder->EncodeUInt64Value(value.maxTriangleCount);
    encoder->EncodeUInt32Value(value.maxDescriptorSetAccelerationStructures);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTransformMatrixKHR& value)
{
    encoder->EncodeFloat2DMatrix(value.matrix, 3, 4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAabbPositionsKHR& value)
{
    encoder->EncodeFloatValue(value.minX);
    encoder->EncodeFloatValue(value.minY);
    encoder->EncodeFloatValue(value.minZ);
    encoder->EncodeFloatValue(value.maxX);
    encoder->EncodeFloatValue(value.maxY);
    encoder->EncodeFloatValue(value.maxZ);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureInstanceKHR& value)
{
    EncodeStruct(encoder, value.transform);
    encoder->EncodeUInt32Value(value.instanceCustomIndex);
    encoder->EncodeUInt32Value(value.mask);
    encoder->EncodeUInt32Value(value.instanceShaderBindingTableRecordOffset);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.accelerationStructureReference);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.representativeFragmentTest);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.representativeFragmentTestEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageViewImageFormatInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.imageViewType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFilterCubicImageViewImageFormatPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.filterCubic);
    encoder->EncodeVkBool32Value(value.filterCubicMinmax);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportMemoryHostPointerInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeVoidPtr(value.pHostPointer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryHostPointerPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.minImportedHostPointerAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCompilerControlCreateInfoAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.compilerControlFlags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCalibratedTimestampInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.timeDomain);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderCorePropertiesAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.shaderEngineCount);
    encoder->EncodeUInt32Value(value.shaderArraysPerEngineCount);
    encoder->EncodeUInt32Value(value.computeUnitsPerShaderArray);
    encoder->EncodeUInt32Value(value.simdPerComputeUnit);
    encoder->EncodeUInt32Value(value.wavefrontsPerSimd);
    encoder->EncodeUInt32Value(value.wavefrontSize);
    encoder->EncodeUInt32Value(value.sgprsPerSimd);
    encoder->EncodeUInt32Value(value.minSgprAllocation);
    encoder->EncodeUInt32Value(value.maxSgprAllocation);
    encoder->EncodeUInt32Value(value.sgprAllocationGranularity);
    encoder->EncodeUInt32Value(value.vgprsPerSimd);
    encoder->EncodeUInt32Value(value.minVgprAllocation);
    encoder->EncodeUInt32Value(value.maxVgprAllocation);
    encoder->EncodeUInt32Value(value.vgprAllocationGranularity);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceMemoryOverallocationCreateInfoAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.overallocationBehavior);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxVertexAttribDivisor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkVertexInputBindingDivisorDescriptionEXT& value)
{
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeUInt32Value(value.divisor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineVertexInputDivisorStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.vertexBindingDivisorCount);
    EncodeStructArray(encoder, value.pVertexBindingDivisors, value.vertexBindingDivisorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.vertexAttributeInstanceRateDivisor);
    encoder->EncodeVkBool32Value(value.vertexAttributeInstanceRateZeroDivisor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPresentFrameTokenGGP& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.frameToken);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.computeDerivativeGroupQuads);
    encoder->EncodeVkBool32Value(value.computeDerivativeGroupLinear);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMeshShaderFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.taskShader);
    encoder->EncodeVkBool32Value(value.meshShader);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMeshShaderPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxDrawMeshTasksCount);
    encoder->EncodeUInt32Value(value.maxTaskWorkGroupInvocations);
    encoder->EncodeUInt32Array(value.maxTaskWorkGroupSize, 3);
    encoder->EncodeUInt32Value(value.maxTaskTotalMemorySize);
    encoder->EncodeUInt32Value(value.maxTaskOutputCount);
    encoder->EncodeUInt32Value(value.maxMeshWorkGroupInvocations);
    encoder->EncodeUInt32Array(value.maxMeshWorkGroupSize, 3);
    encoder->EncodeUInt32Value(value.maxMeshTotalMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshOutputVertices);
    encoder->EncodeUInt32Value(value.maxMeshOutputPrimitives);
    encoder->EncodeUInt32Value(value.maxMeshMultiviewViewCount);
    encoder->EncodeUInt32Value(value.meshOutputPerVertexGranularity);
    encoder->EncodeUInt32Value(value.meshOutputPerPrimitiveGranularity);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrawMeshTasksIndirectCommandNV& value)
{
    encoder->EncodeUInt32Value(value.taskCount);
    encoder->EncodeUInt32Value(value.firstTask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderImageFootprintFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.imageFootprint);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportExclusiveScissorStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.exclusiveScissorCount);
    EncodeStructArray(encoder, value.pExclusiveScissors, value.exclusiveScissorCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExclusiveScissorFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.exclusiveScissor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueueFamilyCheckpointPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.checkpointExecutionStageMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCheckpointDataNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.stage);
    encoder->EncodeVoidPtr(value.pCheckpointMarker);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderIntegerFunctions2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkInitializePerformanceApiInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVoidPtr(value.pUserData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkQueryPoolPerformanceQueryCreateInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.performanceCountersSampling);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceMarkerInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.marker);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceStreamMarkerInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.marker);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceOverrideInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeVkBool32Value(value.enable);
    encoder->EncodeUInt64Value(value.parameter);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPerformanceConfigurationAcquireInfoINTEL& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePCIBusInfoPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.pciDomain);
    encoder->EncodeUInt32Value(value.pciBus);
    encoder->EncodeUInt32Value(value.pciDevice);
    encoder->EncodeUInt32Value(value.pciFunction);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDisplayNativeHdrSurfaceCapabilitiesAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.localDimmingSupport);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSwapchainDisplayNativeHdrCreateInfoAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.localDimmingEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImagePipeSurfaceCreateInfoFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.imagePipeHandle);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMetalSurfaceCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.pLayer);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentDensityMap);
    encoder->EncodeVkBool32Value(value.fragmentDensityMapDynamic);
    encoder->EncodeVkBool32Value(value.fragmentDensityMapNonSubsampledImages);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.minFragmentDensityTexelSize);
    EncodeStruct(encoder, value.maxFragmentDensityTexelSize);
    encoder->EncodeVkBool32Value(value.fragmentDensityInvocations);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassFragmentDensityMapCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.fragmentDensityMapAttachment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderCoreProperties2AMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.shaderCoreFeatures);
    encoder->EncodeUInt32Value(value.activeComputeUnitCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCoherentMemoryFeaturesAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.deviceCoherentMemory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderImageInt64Atomics);
    encoder->EncodeVkBool32Value(value.sparseImageInt64Atomics);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeArray(value.heapBudget, VK_MAX_MEMORY_HEAPS);
    encoder->EncodeVkDeviceSizeArray(value.heapUsage, VK_MAX_MEMORY_HEAPS);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMemoryPriorityFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.memoryPriority);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryPriorityAllocateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFloatValue(value.priority);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.dedicatedAllocationImageAliasing);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddress);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressCaptureReplay);
    encoder->EncodeVkBool32Value(value.bufferDeviceAddressMultiDevice);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBufferDeviceAddressCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceAddressValue(value.deviceAddress);
}

void EncodeStruct(ParameterEncoder* encoder, const VkValidationFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.enabledValidationFeatureCount);
    encoder->EncodeEnumArray(value.pEnabledValidationFeatures, value.enabledValidationFeatureCount);
    encoder->EncodeUInt32Value(value.disabledValidationFeatureCount);
    encoder->EncodeEnumArray(value.pDisabledValidationFeatures, value.disabledValidationFeatureCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCooperativeMatrixPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.MSize);
    encoder->EncodeUInt32Value(value.NSize);
    encoder->EncodeUInt32Value(value.KSize);
    encoder->EncodeEnumValue(value.AType);
    encoder->EncodeEnumValue(value.BType);
    encoder->EncodeEnumValue(value.CType);
    encoder->EncodeEnumValue(value.DType);
    encoder->EncodeEnumValue(value.scope);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCooperativeMatrixFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.cooperativeMatrix);
    encoder->EncodeVkBool32Value(value.cooperativeMatrixRobustBufferAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCooperativeMatrixPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.cooperativeMatrixSupportedStages);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCoverageReductionModeFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.coverageReductionMode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineCoverageReductionStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.coverageReductionMode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkFramebufferMixedSamplesCombinationNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.coverageReductionMode);
    encoder->EncodeEnumValue(value.rasterizationSamples);
    encoder->EncodeFlagsValue(value.depthStencilSamples);
    encoder->EncodeFlagsValue(value.colorSamples);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentShaderSampleInterlock);
    encoder->EncodeVkBool32Value(value.fragmentShaderPixelInterlock);
    encoder->EncodeVkBool32Value(value.fragmentShaderShadingRateInterlock);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.ycbcrImageArrays);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProvokingVertexFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.provokingVertexLast);
    encoder->EncodeVkBool32Value(value.transformFeedbackPreservesProvokingVertex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceProvokingVertexPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.provokingVertexModePerPipeline);
    encoder->EncodeVkBool32Value(value.transformFeedbackPreservesTriangleFanProvokingVertex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.provokingVertexMode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceFullScreenExclusiveInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.fullScreenExclusive);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceCapabilitiesFullScreenExclusiveEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fullScreenExclusiveSupported);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceFullScreenExclusiveWin32InfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVoidPtr(value.hmonitor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkHeadlessSurfaceCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceLineRasterizationFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rectangularLines);
    encoder->EncodeVkBool32Value(value.bresenhamLines);
    encoder->EncodeVkBool32Value(value.smoothLines);
    encoder->EncodeVkBool32Value(value.stippledRectangularLines);
    encoder->EncodeVkBool32Value(value.stippledBresenhamLines);
    encoder->EncodeVkBool32Value(value.stippledSmoothLines);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceLineRasterizationPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.lineSubPixelPrecisionBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineRasterizationLineStateCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.lineRasterizationMode);
    encoder->EncodeVkBool32Value(value.stippledLineEnable);
    encoder->EncodeUInt32Value(value.lineStippleFactor);
    encoder->EncodeUInt16Value(value.lineStipplePattern);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat32Atomics);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat32AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat64Atomics);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat64AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat32Atomics);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat32AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat64Atomics);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat64AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderImageFloat32Atomics);
    encoder->EncodeVkBool32Value(value.shaderImageFloat32AtomicAdd);
    encoder->EncodeVkBool32Value(value.sparseImageFloat32Atomics);
    encoder->EncodeVkBool32Value(value.sparseImageFloat32AtomicAdd);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.indexTypeUint8);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.extendedDynamicState);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat16Atomics);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat16AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat16AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat32AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderBufferFloat64AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat16Atomics);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat16AtomicAdd);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat16AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat32AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderSharedFloat64AtomicMinMax);
    encoder->EncodeVkBool32Value(value.shaderImageFloat32AtomicMinMax);
    encoder->EncodeVkBool32Value(value.sparseImageFloat32AtomicMinMax);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxGraphicsShaderGroupCount);
    encoder->EncodeUInt32Value(value.maxIndirectSequenceCount);
    encoder->EncodeUInt32Value(value.maxIndirectCommandsTokenCount);
    encoder->EncodeUInt32Value(value.maxIndirectCommandsStreamCount);
    encoder->EncodeUInt32Value(value.maxIndirectCommandsTokenOffset);
    encoder->EncodeUInt32Value(value.maxIndirectCommandsStreamStride);
    encoder->EncodeUInt32Value(value.minSequencesCountBufferOffsetAlignment);
    encoder->EncodeUInt32Value(value.minSequencesIndexBufferOffsetAlignment);
    encoder->EncodeUInt32Value(value.minIndirectCommandsBufferOffsetAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.deviceGeneratedCommands);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGraphicsShaderGroupCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.stageCount);
    EncodeStructArray(encoder, value.pStages, value.stageCount);
    EncodeStructPtr(encoder, value.pVertexInputState);
    EncodeStructPtr(encoder, value.pTessellationState);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGraphicsPipelineShaderGroupsCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.groupCount);
    EncodeStructArray(encoder, value.pGroups, value.groupCount);
    encoder->EncodeUInt32Value(value.pipelineCount);
    encoder->EncodeHandleArray(value.pPipelines, value.pipelineCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindShaderGroupIndirectCommandNV& value)
{
    encoder->EncodeUInt32Value(value.groupIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindIndexBufferIndirectCommandNV& value)
{
    encoder->EncodeVkDeviceAddressValue(value.bufferAddress);
    encoder->EncodeUInt32Value(value.size);
    encoder->EncodeEnumValue(value.indexType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkBindVertexBufferIndirectCommandNV& value)
{
    encoder->EncodeVkDeviceAddressValue(value.bufferAddress);
    encoder->EncodeUInt32Value(value.size);
    encoder->EncodeUInt32Value(value.stride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSetStateFlagsIndirectCommandNV& value)
{
    encoder->EncodeUInt32Value(value.data);
}

void EncodeStruct(ParameterEncoder* encoder, const VkIndirectCommandsStreamNV& value)
{
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkIndirectCommandsLayoutTokenNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.tokenType);
    encoder->EncodeUInt32Value(value.stream);
    encoder->EncodeUInt32Value(value.offset);
    encoder->EncodeUInt32Value(value.vertexBindingUnit);
    encoder->EncodeVkBool32Value(value.vertexDynamicStride);
    encoder->EncodeHandleValue(value.pushconstantPipelineLayout);
    encoder->EncodeFlagsValue(value.pushconstantShaderStageFlags);
    encoder->EncodeUInt32Value(value.pushconstantOffset);
    encoder->EncodeUInt32Value(value.pushconstantSize);
    encoder->EncodeFlagsValue(value.indirectStateFlags);
    encoder->EncodeUInt32Value(value.indexTypeCount);
    encoder->EncodeEnumArray(value.pIndexTypes, value.indexTypeCount);
    encoder->EncodeUInt32Array(value.pIndexTypeValues, value.indexTypeCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkIndirectCommandsLayoutCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeUInt32Value(value.tokenCount);
    EncodeStructArray(encoder, value.pTokens, value.tokenCount);
    encoder->EncodeUInt32Value(value.streamCount);
    encoder->EncodeUInt32Array(value.pStreamStrides, value.streamCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeneratedCommandsInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeHandleValue(value.pipeline);
    encoder->EncodeHandleValue(value.indirectCommandsLayout);
    encoder->EncodeUInt32Value(value.streamCount);
    EncodeStructArray(encoder, value.pStreams, value.streamCount);
    encoder->EncodeUInt32Value(value.sequencesCount);
    encoder->EncodeHandleValue(value.preprocessBuffer);
    encoder->EncodeVkDeviceSizeValue(value.preprocessOffset);
    encoder->EncodeVkDeviceSizeValue(value.preprocessSize);
    encoder->EncodeHandleValue(value.sequencesCountBuffer);
    encoder->EncodeVkDeviceSizeValue(value.sequencesCountOffset);
    encoder->EncodeHandleValue(value.sequencesIndexBuffer);
    encoder->EncodeVkDeviceSizeValue(value.sequencesIndexOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGeneratedCommandsMemoryRequirementsInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.pipelineBindPoint);
    encoder->EncodeHandleValue(value.pipeline);
    encoder->EncodeHandleValue(value.indirectCommandsLayout);
    encoder->EncodeUInt32Value(value.maxSequencesCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceInheritedViewportScissorFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.inheritedViewportScissor2D);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferInheritanceViewportScissorInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.viewportScissor2D);
    encoder->EncodeUInt32Value(value.viewportDepthCount);
    EncodeStructPtr(encoder, value.pViewportDepths);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.texelBufferAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassTransformBeginInfoQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.transform);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.transform);
    EncodeStruct(encoder, value.renderArea);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.deviceMemoryReport);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceMemoryReportCallbackDataEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeUInt64Value(value.memoryObjectId);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeEnumValue(value.objectType);
    encoder->EncodeUInt64Value(value.objectHandle);
    encoder->EncodeUInt32Value(value.heapIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceDeviceMemoryReportCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeFunctionPtr(value.pfnUserCallback);
    encoder->EncodeVoidPtr(value.pUserData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRobustness2FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.robustBufferAccess2);
    encoder->EncodeVkBool32Value(value.robustImageAccess2);
    encoder->EncodeVkBool32Value(value.nullDescriptor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRobustness2PropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.robustStorageBufferAccessSizeAlignment);
    encoder->EncodeVkDeviceSizeValue(value.robustUniformBufferAccessSizeAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerCustomBorderColorCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.customBorderColor);
    encoder->EncodeEnumValue(value.format);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxCustomBorderColorSamplers);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.customBorderColors);
    encoder->EncodeVkBool32Value(value.customBorderColorWithoutFormat);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePresentBarrierFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.presentBarrier);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSurfaceCapabilitiesPresentBarrierNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.presentBarrierSupported);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSwapchainPresentBarrierCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.presentBarrierEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.diagnosticsConfig);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceDiagnosticsConfigCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.graphicsPipelineLibrary);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.graphicsPipelineLibraryFastLinking);
    encoder->EncodeVkBool32Value(value.graphicsPipelineLibraryIndependentInterpolationDecoration);
}

void EncodeStruct(ParameterEncoder* encoder, const VkGraphicsPipelineLibraryCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderEarlyAndLateFragmentTests);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentShadingRateEnums);
    encoder->EncodeVkBool32Value(value.supersampleFragmentShadingRates);
    encoder->EncodeVkBool32Value(value.noInvocationFragmentShadingRates);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.maxFragmentShadingRateInvocationCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineFragmentShadingRateEnumStateCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.shadingRateType);
    encoder->EncodeEnumValue(value.shadingRate);
    encoder->EncodeEnumArray(value.combinerOps, 2);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureGeometryMotionTrianglesDataNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.vertexData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureMotionInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxInstances);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureMatrixMotionInstanceNV& value)
{
    EncodeStruct(encoder, value.transformT0);
    EncodeStruct(encoder, value.transformT1);
    encoder->EncodeUInt32Value(value.instanceCustomIndex);
    encoder->EncodeUInt32Value(value.mask);
    encoder->EncodeUInt32Value(value.instanceShaderBindingTableRecordOffset);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.accelerationStructureReference);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSRTDataNV& value)
{
    encoder->EncodeFloatValue(value.sx);
    encoder->EncodeFloatValue(value.a);
    encoder->EncodeFloatValue(value.b);
    encoder->EncodeFloatValue(value.pvx);
    encoder->EncodeFloatValue(value.sy);
    encoder->EncodeFloatValue(value.c);
    encoder->EncodeFloatValue(value.pvy);
    encoder->EncodeFloatValue(value.sz);
    encoder->EncodeFloatValue(value.pvz);
    encoder->EncodeFloatValue(value.qx);
    encoder->EncodeFloatValue(value.qy);
    encoder->EncodeFloatValue(value.qz);
    encoder->EncodeFloatValue(value.qw);
    encoder->EncodeFloatValue(value.tx);
    encoder->EncodeFloatValue(value.ty);
    encoder->EncodeFloatValue(value.tz);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureSRTMotionInstanceNV& value)
{
    EncodeStruct(encoder, value.transformT0);
    EncodeStruct(encoder, value.transformT1);
    encoder->EncodeUInt32Value(value.instanceCustomIndex);
    encoder->EncodeUInt32Value(value.mask);
    encoder->EncodeUInt32Value(value.instanceShaderBindingTableRecordOffset);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt64Value(value.accelerationStructureReference);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rayTracingMotionBlur);
    encoder->EncodeVkBool32Value(value.rayTracingMotionBlurPipelineTraceRaysIndirect);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.ycbcr2plane444Formats);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentDensityMapDeferred);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.subsampledLoads);
    encoder->EncodeVkBool32Value(value.subsampledCoarseReconstructionEarlyAccess);
    encoder->EncodeUInt32Value(value.maxSubsampledArrayLayers);
    encoder->EncodeUInt32Value(value.maxDescriptorSetSubsampledSamplers);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyCommandTransformInfoQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.transform);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageCompressionControlFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.imageCompressionControl);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageCompressionControlEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.compressionControlPlaneCount);
    encoder->EncodeFlagsArray(value.pFixedRateFlags, value.compressionControlPlaneCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubresourceLayout2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.subresourceLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageSubresource2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.imageSubresource);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageCompressionPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.imageCompressionFlags);
    encoder->EncodeFlagsValue(value.imageCompressionFixedRateFlags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.attachmentFeedbackLoopLayout);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevice4444FormatsFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.formatA4R4G4B4);
    encoder->EncodeVkBool32Value(value.formatA4B4G4R4);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFaultFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.deviceFault);
    encoder->EncodeVkBool32Value(value.deviceFaultVendorBinary);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceFaultCountsEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.addressInfoCount);
    encoder->EncodeUInt32Value(value.vendorInfoCount);
    encoder->EncodeVkDeviceSizeValue(value.vendorBinarySize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceFaultAddressInfoEXT& value)
{
    encoder->EncodeEnumValue(value.addressType);
    encoder->EncodeVkDeviceAddressValue(value.reportedAddress);
    encoder->EncodeVkDeviceSizeValue(value.addressPrecision);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceFaultVendorInfoEXT& value)
{
    encoder->EncodeString(value.description);
    encoder->EncodeUInt64Value(value.vendorFaultCode);
    encoder->EncodeUInt64Value(value.vendorFaultData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceFaultInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeString(value.description);
    EncodeStructPtr(encoder, value.pAddressInfos);
    EncodeStructPtr(encoder, value.pVendorInfos);
    encoder->EncodeVoidPtr(value.pVendorBinaryData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceFaultVendorBinaryHeaderVersionOneEXT& value)
{
    encoder->EncodeUInt32Value(value.headerSize);
    encoder->EncodeEnumValue(value.headerVersion);
    encoder->EncodeUInt32Value(value.vendorID);
    encoder->EncodeUInt32Value(value.deviceID);
    encoder->EncodeUInt32Value(value.driverVersion);
    encoder->EncodeUInt8Array(value.pipelineCacheUUID, VK_UUID_SIZE);
    encoder->EncodeUInt32Value(value.applicationNameOffset);
    encoder->EncodeUInt32Value(value.applicationVersion);
    encoder->EncodeUInt32Value(value.engineNameOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rasterizationOrderColorAttachmentAccess);
    encoder->EncodeVkBool32Value(value.rasterizationOrderDepthAttachmentAccess);
    encoder->EncodeVkBool32Value(value.rasterizationOrderStencilAttachmentAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.formatRgba10x6WithoutYCbCrSampler);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDirectFBSurfaceCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.dfb);
    encoder->EncodeVoidPtr(value.surface);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.mutableDescriptorType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMutableDescriptorTypeListEXT& value)
{
    encoder->EncodeUInt32Value(value.descriptorTypeCount);
    encoder->EncodeEnumArray(value.pDescriptorTypes, value.descriptorTypeCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMutableDescriptorTypeCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.mutableDescriptorTypeListCount);
    EncodeStructArray(encoder, value.pMutableDescriptorTypeLists, value.mutableDescriptorTypeListCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.vertexInputDynamicState);
}

void EncodeStruct(ParameterEncoder* encoder, const VkVertexInputBindingDescription2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeUInt32Value(value.stride);
    encoder->EncodeEnumValue(value.inputRate);
    encoder->EncodeUInt32Value(value.divisor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkVertexInputAttributeDescription2EXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.location);
    encoder->EncodeUInt32Value(value.binding);
    encoder->EncodeEnumValue(value.format);
    encoder->EncodeUInt32Value(value.offset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDrmPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.hasPrimary);
    encoder->EncodeVkBool32Value(value.hasRender);
    encoder->EncodeInt64Value(value.primaryMajor);
    encoder->EncodeInt64Value(value.primaryMinor);
    encoder->EncodeInt64Value(value.renderMajor);
    encoder->EncodeInt64Value(value.renderMinor);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceAddressBindingReportFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.reportAddressBinding);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDeviceAddressBindingCallbackDataEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVkDeviceAddressValue(value.baseAddress);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeEnumValue(value.bindingType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDepthClipControlFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.depthClipControl);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineViewportDepthClipControlCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.negativeOneToOne);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.primitiveTopologyListRestart);
    encoder->EncodeVkBool32Value(value.primitiveTopologyPatchListRestart);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportMemoryZirconHandleInfoFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeUInt32Value(value.handle);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryZirconHandlePropertiesFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.memoryTypeBits);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryGetZirconHandleInfoFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImportSemaphoreZirconHandleInfoFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.handleType);
    encoder->EncodeUInt32Value(value.zirconHandle);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSemaphoreGetZirconHandleInfoFUCHSIA& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.semaphore);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.invocationMask);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMemoryGetRemoteAddressInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.memory);
    encoder->EncodeEnumValue(value.handleType);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.externalMemoryRDMA);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.multisampledRenderToSingleSampled);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassResolvePerformanceQueryEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.optimal);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMultisampledRenderToSingleSampledInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.multisampledRenderToSingleSampledEnable);
    encoder->EncodeEnumValue(value.rasterizationSamples);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.extendedDynamicState2);
    encoder->EncodeVkBool32Value(value.extendedDynamicState2LogicOp);
    encoder->EncodeVkBool32Value(value.extendedDynamicState2PatchControlPoints);
}

void EncodeStruct(ParameterEncoder* encoder, const VkScreenSurfaceCreateInfoQNX& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeVoidPtr(value.context);
    encoder->EncodeVoidPtr(value.window);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceColorWriteEnableFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.colorWriteEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineColorWriteCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.attachmentCount);
    encoder->EncodeVkBool32Array(value.pColorWriteEnables, value.attachmentCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.primitivesGeneratedQuery);
    encoder->EncodeVkBool32Value(value.primitivesGeneratedQueryWithRasterizerDiscard);
    encoder->EncodeVkBool32Value(value.primitivesGeneratedQueryWithNonZeroStreams);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageViewMinLodFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.minLod);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewMinLodCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFloatValue(value.minLod);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultiDrawFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.multiDraw);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMultiDrawPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxMultiDrawCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMultiDrawInfoEXT& value)
{
    encoder->EncodeUInt32Value(value.firstVertex);
    encoder->EncodeUInt32Value(value.vertexCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMultiDrawIndexedInfoEXT& value)
{
    encoder->EncodeUInt32Value(value.firstIndex);
    encoder->EncodeUInt32Value(value.indexCount);
    encoder->EncodeInt32Value(value.vertexOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.image2DViewOf3D);
    encoder->EncodeVkBool32Value(value.sampler2DViewOf3D);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapUsageEXT& value)
{
    encoder->EncodeUInt32Value(value.count);
    encoder->EncodeUInt32Value(value.subdivisionLevel);
    encoder->EncodeUInt32Value(value.format);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapBuildInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.mode);
    encoder->EncodeHandleValue(value.dstMicromap);
    encoder->EncodeUInt32Value(value.usageCountsCount);
    EncodeStructArray(encoder, value.pUsageCounts, value.usageCountsCount);
    EncodeStructArray2D(encoder, value.ppUsageCounts, value.usageCountsCount, 1);
    EncodeStruct(encoder, value.data);
    EncodeStruct(encoder, value.scratchData);
    EncodeStruct(encoder, value.triangleArray);
    encoder->EncodeVkDeviceSizeValue(value.triangleArrayStride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.createFlags);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeVkDeviceAddressValue(value.deviceAddress);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceOpacityMicromapFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.micromap);
    encoder->EncodeVkBool32Value(value.micromapCaptureReplay);
    encoder->EncodeVkBool32Value(value.micromapHostCommands);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceOpacityMicromapPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxOpacity2StateSubdivisionLevel);
    encoder->EncodeUInt32Value(value.maxOpacity4StateSubdivisionLevel);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapVersionInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt8Array(value.pVersionData, 2*VK_UUID_SIZE);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyMicromapToMemoryInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.src);
    EncodeStruct(encoder, value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyMemoryToMicromapInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.src);
    encoder->EncodeHandleValue(value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyMicromapInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.src);
    encoder->EncodeHandleValue(value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapBuildSizesInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.micromapSize);
    encoder->EncodeVkDeviceSizeValue(value.buildScratchSize);
    encoder->EncodeVkBool32Value(value.discardable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureTrianglesOpacityMicromapEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.indexType);
    EncodeStruct(encoder, value.indexBuffer);
    encoder->EncodeVkDeviceSizeValue(value.indexStride);
    encoder->EncodeUInt32Value(value.baseTriangle);
    encoder->EncodeUInt32Value(value.usageCountsCount);
    EncodeStructArray(encoder, value.pUsageCounts, value.usageCountsCount);
    EncodeStructArray2D(encoder, value.ppUsageCounts, value.usageCountsCount, 1);
    encoder->EncodeHandleValue(value.micromap);
}

void EncodeStruct(ParameterEncoder* encoder, const VkMicromapTriangleEXT& value)
{
    encoder->EncodeUInt32Value(value.dataOffset);
    encoder->EncodeUInt16Value(value.subdivisionLevel);
    encoder->EncodeUInt16Value(value.format);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.borderColorSwizzle);
    encoder->EncodeVkBool32Value(value.borderColorSwizzleFromImage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSamplerBorderColorComponentMappingCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.components);
    encoder->EncodeVkBool32Value(value.srgb);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pageableDeviceLocalMemory);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.descriptorSetHostMapping);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetBindingReferenceVALVE& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.descriptorSetLayout);
    encoder->EncodeUInt32Value(value.binding);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDescriptorSetLayoutHostMappingInfoVALVE& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeSizeTValue(value.descriptorOffset);
    encoder->EncodeUInt32Value(value.descriptorSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.depthClampZeroOne);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.nonSeamlessCubeMap);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.fragmentDensityMapOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.fragmentDensityOffsetGranularity);
}

void EncodeStruct(ParameterEncoder* encoder, const VkSubpassFragmentDensityMapOffsetEndInfoQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.fragmentDensityOffsetCount);
    EncodeStructArray(encoder, value.pFragmentDensityOffsets, value.fragmentDensityOffsetCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceLinearColorAttachmentFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.linearColorAttachment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.imageCompressionControlSwapchain);
}

void EncodeStruct(ParameterEncoder* encoder, const VkImageViewSampleWeightCreateInfoQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.filterCenter);
    EncodeStruct(encoder, value.filterSize);
    encoder->EncodeUInt32Value(value.numPhases);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageProcessingFeaturesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.textureSampleWeighted);
    encoder->EncodeVkBool32Value(value.textureBoxFilter);
    encoder->EncodeVkBool32Value(value.textureBlockMatch);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceImageProcessingPropertiesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxWeightFilterPhases);
    EncodeStruct(encoder, value.maxWeightFilterDimension);
    EncodeStruct(encoder, value.maxBlockMatchRegion);
    EncodeStruct(encoder, value.maxBoxFilterBlockSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3TessellationDomainOrigin);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3DepthClampEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3PolygonMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3RasterizationSamples);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3SampleMask);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3AlphaToCoverageEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3AlphaToOneEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3LogicOpEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ColorBlendEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ColorBlendEquation);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ColorWriteMask);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3RasterizationStream);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ConservativeRasterizationMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ExtraPrimitiveOverestimationSize);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3DepthClipEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3SampleLocationsEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ColorBlendAdvanced);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ProvokingVertexMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3LineRasterizationMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3LineStippleEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3DepthClipNegativeOneToOne);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ViewportWScalingEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ViewportSwizzle);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageToColorEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageToColorLocation);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageModulationMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageModulationTableEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageModulationTable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3CoverageReductionMode);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3RepresentativeFragmentTestEnable);
    encoder->EncodeVkBool32Value(value.extendedDynamicState3ShadingRateImageEnable);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.dynamicPrimitiveTopologyUnrestricted);
}

void EncodeStruct(ParameterEncoder* encoder, const VkColorBlendEquationEXT& value)
{
    encoder->EncodeEnumValue(value.srcColorBlendFactor);
    encoder->EncodeEnumValue(value.dstColorBlendFactor);
    encoder->EncodeEnumValue(value.colorBlendOp);
    encoder->EncodeEnumValue(value.srcAlphaBlendFactor);
    encoder->EncodeEnumValue(value.dstAlphaBlendFactor);
    encoder->EncodeEnumValue(value.alphaBlendOp);
}

void EncodeStruct(ParameterEncoder* encoder, const VkColorBlendAdvancedEXT& value)
{
    encoder->EncodeEnumValue(value.advancedBlendOp);
    encoder->EncodeVkBool32Value(value.srcPremultiplied);
    encoder->EncodeVkBool32Value(value.dstPremultiplied);
    encoder->EncodeEnumValue(value.blendOverlap);
    encoder->EncodeVkBool32Value(value.clampResults);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.subpassMergeFeedback);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassCreationControlEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.disallowMerging);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassCreationFeedbackInfoEXT& value)
{
    encoder->EncodeUInt32Value(value.postMergeSubpassCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassCreationFeedbackCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pRenderPassFeedback);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassSubpassFeedbackInfoEXT& value)
{
    encoder->EncodeEnumValue(value.subpassMergeStatus);
    encoder->EncodeString(value.description);
    encoder->EncodeUInt32Value(value.postMergeIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRenderPassSubpassFeedbackCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStructPtr(encoder, value.pSubpassFeedback);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderModuleIdentifier);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt8Array(value.shaderModuleIdentifierAlgorithmUUID, VK_UUID_SIZE);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPipelineShaderStageModuleIdentifierCreateInfoEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.identifierSize);
    encoder->EncodeUInt8Array(value.pIdentifier, value.identifierSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkShaderModuleIdentifierEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.identifierSize);
    encoder->EncodeUInt8Array(value.identifier, VK_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceOpticalFlowFeaturesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.opticalFlow);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceOpticalFlowPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.supportedOutputGridSizes);
    encoder->EncodeFlagsValue(value.supportedHintGridSizes);
    encoder->EncodeVkBool32Value(value.hintSupported);
    encoder->EncodeVkBool32Value(value.costSupported);
    encoder->EncodeVkBool32Value(value.bidirectionalFlowSupported);
    encoder->EncodeVkBool32Value(value.globalFlowSupported);
    encoder->EncodeUInt32Value(value.minWidth);
    encoder->EncodeUInt32Value(value.minHeight);
    encoder->EncodeUInt32Value(value.maxWidth);
    encoder->EncodeUInt32Value(value.maxHeight);
    encoder->EncodeUInt32Value(value.maxNumRegionsOfInterest);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOpticalFlowImageFormatInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.usage);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOpticalFlowImageFormatPropertiesNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.format);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOpticalFlowSessionCreateInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeEnumValue(value.imageFormat);
    encoder->EncodeEnumValue(value.flowVectorFormat);
    encoder->EncodeEnumValue(value.costFormat);
    encoder->EncodeFlagsValue(value.outputGridSize);
    encoder->EncodeFlagsValue(value.hintGridSize);
    encoder->EncodeEnumValue(value.performanceLevel);
    encoder->EncodeFlagsValue(value.flags);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOpticalFlowSessionCreatePrivateDataInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.id);
    encoder->EncodeUInt32Value(value.size);
    encoder->EncodeVoidPtr(value.pPrivateData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkOpticalFlowExecuteInfoNV& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.regionCount);
    EncodeStructArray(encoder, value.pRegions, value.regionCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceLegacyDitheringFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.legacyDithering);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.pipelineProtectedAccess);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceTilePropertiesFeaturesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.tileProperties);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTilePropertiesQCOM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.tileSize);
    EncodeStruct(encoder, value.apronSize);
    EncodeStruct(encoder, value.origin);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceAmigoProfilingFeaturesSEC& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.amigoProfiling);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAmigoProfilingSubmitInfoSEC& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.firstDrawTimestamp);
    encoder->EncodeUInt64Value(value.swapBufferTimestamp);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.shaderCoreBuiltins);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.shaderCoreCount);
    encoder->EncodeUInt32Value(value.shaderWarpsPerCore);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureBuildRangeInfoKHR& value)
{
    encoder->EncodeUInt32Value(value.primitiveCount);
    encoder->EncodeUInt32Value(value.primitiveOffset);
    encoder->EncodeUInt32Value(value.firstVertex);
    encoder->EncodeUInt32Value(value.transformOffset);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureGeometryTrianglesDataKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.vertexFormat);
    EncodeStruct(encoder, value.vertexData);
    encoder->EncodeVkDeviceSizeValue(value.vertexStride);
    encoder->EncodeUInt32Value(value.maxVertex);
    encoder->EncodeEnumValue(value.indexType);
    EncodeStruct(encoder, value.indexData);
    EncodeStruct(encoder, value.transformData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureGeometryAabbsDataKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.data);
    encoder->EncodeVkDeviceSizeValue(value.stride);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureGeometryInstancesDataKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.arrayOfPointers);
    EncodeStruct(encoder, value.data);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureBuildGeometryInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeEnumValue(value.mode);
    encoder->EncodeHandleValue(value.srcAccelerationStructure);
    encoder->EncodeHandleValue(value.dstAccelerationStructure);
    encoder->EncodeUInt32Value(value.geometryCount);
    EncodeStructArray(encoder, value.pGeometries, value.geometryCount);
    EncodeStructArray2D(encoder, value.ppGeometries, value.geometryCount, 1);
    EncodeStruct(encoder, value.scratchData);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.createFlags);
    encoder->EncodeHandleValue(value.buffer);
    encoder->EncodeVkDeviceSizeValue(value.offset);
    encoder->EncodeVkDeviceSizeValue(value.size);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeVkDeviceAddressValue(value.deviceAddress);
}

void EncodeStruct(ParameterEncoder* encoder, const VkWriteDescriptorSetAccelerationStructureKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.accelerationStructureCount);
    encoder->EncodeHandleArray(value.pAccelerationStructures, value.accelerationStructureCount);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceAccelerationStructureFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.accelerationStructure);
    encoder->EncodeVkBool32Value(value.accelerationStructureCaptureReplay);
    encoder->EncodeVkBool32Value(value.accelerationStructureIndirectBuild);
    encoder->EncodeVkBool32Value(value.accelerationStructureHostCommands);
    encoder->EncodeVkBool32Value(value.descriptorBindingAccelerationStructureUpdateAfterBind);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceAccelerationStructurePropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt64Value(value.maxGeometryCount);
    encoder->EncodeUInt64Value(value.maxInstanceCount);
    encoder->EncodeUInt64Value(value.maxPrimitiveCount);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorAccelerationStructures);
    encoder->EncodeUInt32Value(value.maxPerStageDescriptorUpdateAfterBindAccelerationStructures);
    encoder->EncodeUInt32Value(value.maxDescriptorSetAccelerationStructures);
    encoder->EncodeUInt32Value(value.maxDescriptorSetUpdateAfterBindAccelerationStructures);
    encoder->EncodeUInt32Value(value.minAccelerationStructureScratchOffsetAlignment);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureDeviceAddressInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.accelerationStructure);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureVersionInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt8Array(value.pVersionData, 2*VK_UUID_SIZE);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyAccelerationStructureToMemoryInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.src);
    EncodeStruct(encoder, value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyMemoryToAccelerationStructureInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    EncodeStruct(encoder, value.src);
    encoder->EncodeHandleValue(value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkCopyAccelerationStructureInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeHandleValue(value.src);
    encoder->EncodeHandleValue(value.dst);
    encoder->EncodeEnumValue(value.mode);
}

void EncodeStruct(ParameterEncoder* encoder, const VkAccelerationStructureBuildSizesInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkDeviceSizeValue(value.accelerationStructureSize);
    encoder->EncodeVkDeviceSizeValue(value.updateScratchSize);
    encoder->EncodeVkDeviceSizeValue(value.buildScratchSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRayTracingShaderGroupCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeEnumValue(value.type);
    encoder->EncodeUInt32Value(value.generalShader);
    encoder->EncodeUInt32Value(value.closestHitShader);
    encoder->EncodeUInt32Value(value.anyHitShader);
    encoder->EncodeUInt32Value(value.intersectionShader);
    encoder->EncodeVoidPtr(value.pShaderGroupCaptureReplayHandle);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRayTracingPipelineInterfaceCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxPipelineRayPayloadSize);
    encoder->EncodeUInt32Value(value.maxPipelineRayHitAttributeSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkRayTracingPipelineCreateInfoKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeFlagsValue(value.flags);
    encoder->EncodeUInt32Value(value.stageCount);
    EncodeStructArray(encoder, value.pStages, value.stageCount);
    encoder->EncodeUInt32Value(value.groupCount);
    EncodeStructArray(encoder, value.pGroups, value.groupCount);
    encoder->EncodeUInt32Value(value.maxPipelineRayRecursionDepth);
    EncodeStructPtr(encoder, value.pLibraryInfo);
    EncodeStructPtr(encoder, value.pLibraryInterface);
    EncodeStructPtr(encoder, value.pDynamicState);
    encoder->EncodeHandleValue(value.layout);
    encoder->EncodeHandleValue(value.basePipelineHandle);
    encoder->EncodeInt32Value(value.basePipelineIndex);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayTracingPipelineFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rayTracingPipeline);
    encoder->EncodeVkBool32Value(value.rayTracingPipelineShaderGroupHandleCaptureReplay);
    encoder->EncodeVkBool32Value(value.rayTracingPipelineShaderGroupHandleCaptureReplayMixed);
    encoder->EncodeVkBool32Value(value.rayTracingPipelineTraceRaysIndirect);
    encoder->EncodeVkBool32Value(value.rayTraversalPrimitiveCulling);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayTracingPipelinePropertiesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.shaderGroupHandleSize);
    encoder->EncodeUInt32Value(value.maxRayRecursionDepth);
    encoder->EncodeUInt32Value(value.maxShaderGroupStride);
    encoder->EncodeUInt32Value(value.shaderGroupBaseAlignment);
    encoder->EncodeUInt32Value(value.shaderGroupHandleCaptureReplaySize);
    encoder->EncodeUInt32Value(value.maxRayDispatchInvocationCount);
    encoder->EncodeUInt32Value(value.shaderGroupHandleAlignment);
    encoder->EncodeUInt32Value(value.maxRayHitAttributeSize);
}

void EncodeStruct(ParameterEncoder* encoder, const VkStridedDeviceAddressRegionKHR& value)
{
    encoder->EncodeVkDeviceAddressValue(value.deviceAddress);
    encoder->EncodeVkDeviceSizeValue(value.stride);
    encoder->EncodeVkDeviceSizeValue(value.size);
}

void EncodeStruct(ParameterEncoder* encoder, const VkTraceRaysIndirectCommandKHR& value)
{
    encoder->EncodeUInt32Value(value.width);
    encoder->EncodeUInt32Value(value.height);
    encoder->EncodeUInt32Value(value.depth);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceRayQueryFeaturesKHR& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.rayQuery);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMeshShaderFeaturesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeVkBool32Value(value.taskShader);
    encoder->EncodeVkBool32Value(value.meshShader);
    encoder->EncodeVkBool32Value(value.multiviewMeshShader);
    encoder->EncodeVkBool32Value(value.primitiveFragmentShadingRateMeshShader);
    encoder->EncodeVkBool32Value(value.meshShaderQueries);
}

void EncodeStruct(ParameterEncoder* encoder, const VkPhysicalDeviceMeshShaderPropertiesEXT& value)
{
    encoder->EncodeEnumValue(value.sType);
    EncodePNextStruct(encoder, value.pNext);
    encoder->EncodeUInt32Value(value.maxTaskWorkGroupTotalCount);
    encoder->EncodeUInt32Array(value.maxTaskWorkGroupCount, 3);
    encoder->EncodeUInt32Value(value.maxTaskWorkGroupInvocations);
    encoder->EncodeUInt32Array(value.maxTaskWorkGroupSize, 3);
    encoder->EncodeUInt32Value(value.maxTaskPayloadSize);
    encoder->EncodeUInt32Value(value.maxTaskSharedMemorySize);
    encoder->EncodeUInt32Value(value.maxTaskPayloadAndSharedMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshWorkGroupTotalCount);
    encoder->EncodeUInt32Array(value.maxMeshWorkGroupCount, 3);
    encoder->EncodeUInt32Value(value.maxMeshWorkGroupInvocations);
    encoder->EncodeUInt32Array(value.maxMeshWorkGroupSize, 3);
    encoder->EncodeUInt32Value(value.maxMeshSharedMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshPayloadAndSharedMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshOutputMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshPayloadAndOutputMemorySize);
    encoder->EncodeUInt32Value(value.maxMeshOutputComponents);
    encoder->EncodeUInt32Value(value.maxMeshOutputVertices);
    encoder->EncodeUInt32Value(value.maxMeshOutputPrimitives);
    encoder->EncodeUInt32Value(value.maxMeshOutputLayers);
    encoder->EncodeUInt32Value(value.maxMeshMultiviewViewCount);
    encoder->EncodeUInt32Value(value.meshOutputPerVertexGranularity);
    encoder->EncodeUInt32Value(value.meshOutputPerPrimitiveGranularity);
    encoder->EncodeUInt32Value(value.maxPreferredTaskWorkGroupInvocations);
    encoder->EncodeUInt32Value(value.maxPreferredMeshWorkGroupInvocations);
    encoder->EncodeVkBool32Value(value.prefersLocalInvocationVertexOutput);
    encoder->EncodeVkBool32Value(value.prefersLocalInvocationPrimitiveOutput);
    encoder->EncodeVkBool32Value(value.prefersCompactVertexOutput);
    encoder->EncodeVkBool32Value(value.prefersCompactPrimitiveOutput);
}

void EncodeStruct(ParameterEncoder* encoder, const VkDrawMeshTasksIndirectCommandEXT& value)
{
    encoder->EncodeUInt32Value(value.groupCountX);
    encoder->EncodeUInt32Value(value.groupCountY);
    encoder->EncodeUInt32Value(value.groupCountZ);
}

GFXRECON_END_NAMESPACE(encode)
GFXRECON_END_NAMESPACE(gfxrecon)
