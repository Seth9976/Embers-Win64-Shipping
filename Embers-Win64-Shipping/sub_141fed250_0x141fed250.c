// 函数: sub_141fed250
// 地址: 0x141fed250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) |= 2

if (arg2 != 0)
    int32_t temp0_1 = _mm_max_ss(*(arg1 + 0x10), arg4)
    *(arg1 + 0x14) = temp0_1
    return temp0_1

int32_t temp0 = _mm_min_ss(*(arg1 + 0x14), arg4)
*(arg1 + 0x10) = temp0
return temp0
