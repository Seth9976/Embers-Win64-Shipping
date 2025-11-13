// 函数: sub_141fe37a0
// 地址: 0x141fe37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 0x20))
uint128_t result
uint128_t result_1
uint128_t result_3
uint128_t result_2

if (r9 == 1)
    result = *(arg1 + 0x10)
    result_3 = *(arg1 + 0x18)
    result_1 = result
    result_2 = result
else if (r9 == 2)
    result_3 = *(arg1 + 0x10)
    result_2 = *(arg1 + 0x14)
    result_1 = result_3
else if (r9 == 3)
    result_3 = *(arg1 + 0x14)
    result_1 = *(arg1 + 0x10)
    result_2 = result_3
else if (r9 == 4)
    result_3 = *(arg1 + 0x10)
    result_1 = result_3
    result_2 = result_3
else
    result_1 = zx.o(*(arg1 + 0x10))
    result_3 = *(arg1 + 0x18)
    result_2 = _mm_shuffle_ps(result_1, result_1, 0x55)

result = result_1
result_1 = _mm_max_ss(result_1.d, result_2.d)
result = _mm_min_ss(result.d, result_2.d)
result_1 = _mm_max_ss(result_1.d, result_3.d)
result = _mm_min_ss(result.d, result_3.d)
*arg2 = result.d
*arg3 = result_1.d
return result
