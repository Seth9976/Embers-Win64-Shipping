// 函数: sub_141a25b90
// 地址: 0x141a25b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg1[1])
uint128_t zmm3
zmm3.q = _mm_cvtepi32_pd(zx.q(*arg1)).q f* arg3
zmm3.q = zmm3.q f/ _mm_cvtepi32_pd(zmm0.q).q
int64_t rcx = int.q(zmm3.q)
uint128_t zmm1 = zmm3

if (rcx != -0x8000000000000000)
    zmm0.q = float.d(rcx)
    
    if (not(zmm0.q f== zmm3.q))
        zmm1.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm3.q = zmm3.q f- zmm1.q

if (not(zmm3.q f<= 0.0))
    zmm3 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm3.q)

int64_t temp0_6 = _mm_cvtpd_ps(zmm3)
*arg2 = int.d(zmm1.q)

if (temp0_6.d f>= 0f)
    arg2[1] = _mm_min_ss(0x3f7fffff, temp0_6.d).d
    return arg2

arg2[1] = 0
return arg2
