// 函数: sub_141d69bc0
// 地址: 0x141d69bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_5 = *(arg3 + 8)
uint128_t zmm2
zmm2.q = _mm_cvtepi32_pd(zx.q(rax_5.d)).q f* *(arg1 + 0x20)
zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q((rax_5 u>> 0x20).d)).q
int64_t rcx = int.q(zmm2.q)
uint128_t zmm1 = zmm2

if (rcx != -0x8000000000000000)
    uint128_t zmm0
    zmm0.q = float.d(rcx)
    
    if (not(zmm0.q f== zmm2.q))
        zmm1.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm2.q = zmm2.q f- zmm1.q

if (not(zmm2.q f<= 0.0))
    zmm2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2.q)

int32_t temp0_6 = _mm_cvtpd_ps(zmm2)
*arg2 = int.d(zmm1.q)

if (temp0_6 f>= 0f)
    arg2[1] = _mm_min_ss(0x3f7fffff, temp0_6).d
    return arg2

arg2[1] = 0
return arg2
