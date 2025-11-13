// 函数: sub_1418bb6f0
// 地址: 0x1418bb6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0x28
__builtin_memset(arg1, 0, 0x28)
int64_t var_24
__builtin_memset(&var_24, 0, 0x1c)
int32_t var_c = 1
int64_t var_1c = **(arg1 + 0xa8)
int32_t rax_2 = data_143efb930(*(*(arg1 + 0x38) + 8), &var_28, arg1 + 0x40)

if (rax_2 != 0)
    sub_141903f80(rax_2, 
        "VulkanRHI::vkAllocateCommandBuffers(Device->GetInstanceHandle(), &CreateCmdBufInfo, "
    "&CommandBufferHandle)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanCommandBuffer.cpp")

char result = *(arg1 + 0x2d) & 0xe1
*(arg1 + 0x2c) = 0
result |= 1
*(arg1 + 0x2d) = result
return result
