// 函数: sub_141f80ab0
// 地址: 0x141f80ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x30) & 0xffffe400
*(arg1 + 0x34) = 0
*(arg1 + 0x4c) = 0
*(arg1 + 0x30) = rax_1 | 0x400
__builtin_memset(arg1 + 0x70, 0, 0x20)
*(arg1 + 0x108) = 0
*(arg1 + 0x38) = -1
*(arg1 + 0x90) = (*(arg1 + 0x90) & 0xffffff88) | 8
*(arg1 + 0x168) = 0

if (*(arg1 + 0x16c) != 0)
    sub_1405c5570(arg1 + 0x160, 0)

*(arg1 + 0x191) = 0
sub_140a42ca0(arg1 + 0x198, 0)
uint64_t result = sub_141f867d0(arg1 + 0x1e8, 0)
*(arg1 + 0x240) = 0

if (*(arg1 + 0x244) == 0)
    return result

return sub_1405dadb0(arg1 + 0x238, 0)
