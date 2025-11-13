// 函数: sub_1418b86c0
// 地址: 0x1418b86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2] = arg2
int32_t var_28 = 0xa
*arg1 = &data_142d5a028
arg1[1].d = 0
*arg1 = &data_142fec110
int64_t var_24
__builtin_memset(&var_24, 0, 0x14)
int32_t rax_1 = data_143efb7c0(*(arg2 + 8), &var_28, 0, &arg1[3], var_28)

if (rax_1 != 0)
    sub_141903f80(rax_1, 
        "VulkanRHI::vkCreateEvent(InDevice->GetInstanceHandle(), &Info, VULKAN_CPU_ALLOCATOR, &Handle)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanMemory.cpp")

return arg1
