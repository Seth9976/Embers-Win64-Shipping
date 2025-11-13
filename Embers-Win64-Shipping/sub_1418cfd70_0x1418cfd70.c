// 函数: sub_1418cfd70
// 地址: 0x1418cfd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142feee90
arg1[4].d = arg3
arg1[2] = 0
arg1[3] = 0
*(arg1 + 0x24) = arg4
arg1[5] = 0
int32_t var_30 = 0xb
int64_t var_2c
__builtin_memset(&var_2c, 0, 0x1c)
arg1[6] = 0
int64_t var_1c
var_1c.d = *(arg1 + 0x24)
var_1c:4.d = arg1[4].d
int32_t rax_3 = data_143efb7e8(arg1[1][1], &var_30, 0, &arg1[2])

if (rax_3 != 0)
    sub_141903f80(rax_3, 
        "VulkanRHI::vkCreateQueryPool(Device->GetInstanceHandle(), &PoolCreateInfo, "
    "VULKAN_CPU_ALLOCATOR, &QueryPool)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanQuery.cpp")

sub_1418bae60(data_143efb320, arg1[2])
int32_t var_48 = 0xa
int64_t var_44
__builtin_memset(&var_44, 0, 0x14)
int32_t rax_5 = data_143efb7c0(arg1[1][1], &var_48, 0, &arg1[3], var_48)

if (rax_5 != 0)
    sub_141903f80(rax_5, 
        "VulkanRHI::vkCreateEvent(Device->GetInstanceHandle(), &EventCreateInfo, VULKAN_CPU_ALLOCATOR, "
    "&ResetEvent)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanQuery.cpp")

int64_t rbp_1 = sx.q(arg1[4].d)
int64_t rsi = sx.q(arg1[6].d)
int32_t rax_6 = (rsi + rbp_1).d
arg1[6].d = rax_6

if (rax_6 s> *(arg1 + 0x34))
    sub_1405a4d70(&arg1[5])

memset(&arg1[5][rsi], 0, rbp_1 << 3)
return arg1
