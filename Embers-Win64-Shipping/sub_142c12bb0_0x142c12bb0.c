// 函数: sub_142c12bb0
// 地址: 0x142c12bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 0xb0)
int64_t* rax = sub_142c117b0(arg1)
int64_t* result
double zmm6_1[0x2]
result, zmm6_1 = sub_142c117b0(arg1)
double zmm1 = zmm6:8.q f+ *rax
zmm6_1[0] = zmm6_1[0] f+ *result
*arg2 = 0
*(arg1 + 0xb0) = _mm_unpacklo_pd(zmm6_1, zmm1)
return result
