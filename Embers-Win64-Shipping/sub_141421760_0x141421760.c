// 函数: sub_141421760
// 地址: 0x141421760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = arg2 u>> 6
int32_t rdx = arg2 & 0x3f
int64_t result
result.b = *(
    sx.q(((rdx & 7) + (((((rdx u>> 3) + (r10 u>> 5 << 3)) << 5) + (r10 & 0x1f)) << 3)) << 2)
    + *(arg1 + 0x28)) != 0
return result
