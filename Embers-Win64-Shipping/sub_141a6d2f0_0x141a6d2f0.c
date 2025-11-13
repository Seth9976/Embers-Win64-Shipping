// 函数: sub_141a6d2f0
// 地址: 0x141a6d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
uint128_t zmm0 = sub_140b21100(&arg_18)
uint128_t zmm0_1 = sub_140b21100(&arg_18) ^ data_142d8e3c0

if (not(arg4.q f< zmm0_1.q))
    zmm0_1 = _mm_min_sd(zmm0.q, arg4.q)

uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(arg_18.d)).q f* zmm0_1.q
zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(arg_18:4.d)).q
int64_t rcx_2 = int.q(zmm1.q)

if (rcx_2 != -0x8000000000000000)
    zmm0_1.q = float.d(rcx_2)
    
    if (not(zmm0_1.q f== zmm1.q))
        zmm1.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

*arg1 = int.d(zmm1.q)
return arg1
