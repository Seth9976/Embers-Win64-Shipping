// 函数: sub_141d4e560
// 地址: 0x141d4e560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = data_143dbb3b8 f* 10000000.0
zmm0.q = zmm0.q f+ 0.5
int64_t rcx = int.q(zmm0.q)

if (rcx != -0x8000000000000000 && not(float.d(rcx) f== zmm0.q))
    zmm0.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

*arg2 = int.q(zmm0.q)
return arg2
