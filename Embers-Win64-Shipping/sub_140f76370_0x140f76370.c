// 函数: sub_140f76370
// 地址: 0x140f76370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result

if (*(arg1 + 8) == 0)
    result = zx.o(data_143dbb1f0)
    *arg2 = result.q
    *arg3 = data_143dbb1f0
    return result

*arg2 = *(arg1 + 0x2c)
uint128_t result_1 = *(arg1 + 0x28)
result = result_1
result_1.d = result_1.d f* *(arg1 + 0x24)
result.d = result.d f* *(arg1 + 0x20)
result = _mm_unpacklo_ps(result, result_1.q)
*arg3 = result.q
return result
