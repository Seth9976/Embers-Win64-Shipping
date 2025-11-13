// 函数: sub_1418dadb0
// 地址: 0x1418dadb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg5)
int32_t var_48 = 0xd
void* r10 = *(arg1 + 0x18)
int32_t rcx = *(&data_143efaf70 + (sx.q(arg3) << 2))
int64_t var_44
__builtin_memset(&var_44, 0, 0x34)
*(arg1 + 0x30) = arg4
*(arg1 + 0x34) = r11.d
int64_t var_34 = *(arg2 + 0x48)
int64_t var_24 = zx.q(arg4)
int64_t var_2c
var_2c:4.d = rcx
uint64_t r8_2 = (zx.q(sub_1418e1eb0(rcx)) * zx.q(*(r10 + 0x904))) u>> 3

if (r11 u<= r8_2)
    r8_2 = r11

int64_t var_1c = r8_2
*(arg1 + 0x2c) = *(arg2 + 0x14) & 0xc
int32_t result = data_143efb810(*(r10 + 8), &var_48, 0, arg1 + 0x20)

if (result != 0)
    result = sub_141903f80(result, 
        "VulkanRHI::vkCreateBufferView(GetParent()->GetInstanceHandle(), &ViewInfo, "
    "VULKAN_CPU_ALLOCATOR, &View)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/VulkanRHI/Private/VulkanRHI.cpp")

if (data_1439c7a08 s<= 1)
    int32_t rax_7 = (data_143efb4d8).d
    data_143efb4d8 += 1
    result = rax_7 + 1
    *(arg1 + 0x28) = result

return result
