// 函数: sub_141fb63d0
// 地址: 0x141fb63d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
int64_t r9_6 =
    zx.q((((*(arg1 + 0x5c) + 0x1f) u>> 5) + *(arg1 + 0x3c) * 6 + arg1[0xf].d) << 2) + *(arg2 + 8)
*(arg2 + 8) = r9_6
void* result = arg1[5]

if (result != 0)
    int32_t rdx = *(result + 0x5c)
    result = sx.q(((*(result + 0x58) - 1 + rdx) & neg.d(rdx)) * (arg1[7].d - *(arg1 + 0x64))) + r9_6
    *(arg2 + 8) = result

return result
