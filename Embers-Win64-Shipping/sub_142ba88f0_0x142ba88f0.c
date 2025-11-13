// 函数: sub_142ba88f0
// 地址: 0x142ba88f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
*(arg1 + 0x8c) = arg2

if ((*(rcx + 8) & 1) != 0)
    sub_142b961f0(rcx, arg2)
    sub_142bb58a0(arg1, 0)
    return 0

int32_t result = (*(*(rcx + 0x2d0) + 0xd8))(rcx, arg3, &arg1[3])

if (result != 0)
    *(arg1 + 0x8c) = 0xffffffff

return result
