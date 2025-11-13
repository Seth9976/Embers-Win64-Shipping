// 函数: sub_142c13a60
// 地址: 0x142c13a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = *(arg1 + 0xb0)
int64_t* result
double zmm6_1[0x2]
result, zmm6_1 = sub_142c117b0(arg1)
double temp0[0x2] = _mm_unpackhi_pd(zmm6_1, zmm6_1[0])
temp0[0] = temp0[0] f+ *result
*arg2 = 0
var_28:8.q = temp0.q
*(arg1 + 0xb0) = var_28
return result
