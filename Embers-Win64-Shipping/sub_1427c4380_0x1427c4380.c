// 函数: sub_1427c4380
// 地址: 0x1427c4380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = *arg2
void* const rdx = arg1

if (arg1 == 0x28)
    rdx = nullptr

uint128_t zmm0 = _mm_unpacklo_pd(*(arg1 + 0x28), *arg2)
*(arg1 + 0x28) = zmm0
uint128_t var_18 = zmm0
return sub_1427c3270(arg1 + 8, rdx, &var_18)
