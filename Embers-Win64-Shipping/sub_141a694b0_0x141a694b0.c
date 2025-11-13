// 函数: sub_141a694b0
// 地址: 0x141a694b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_3 = *(arg1 + 0x7c0)
uint128_t zmm0
zmm0.q = fconvert.d(arg2.d)
uint128_t zmm3
zmm3.q = _mm_cvtepi32_pd(zx.q(r8_3.d)).q f* zmm0.q
zmm3.q = zmm3.q f/ _mm_cvtepi32_pd(zx.q((r8_3 u>> 0x20).d)).q
int64_t rdx = int.q(zmm3.q)

if (rdx != -0x8000000000000000)
    zmm0.q = float.d(rdx)
    
    if (not(zmm0.q f== zmm3.q))
        zmm3.q = float.d(rdx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm3, zmm3.q))) & 1))

zmm0.q = fconvert.d(arg3.d)
arg3.q = _mm_cvtepi32_pd(zx.q(r8_3.d)).q f* zmm0.q
arg3.q = arg3.q f/ _mm_cvtepi32_pd(zx.q((r8_3 u>> 0x20).d)).q
int64_t rcx = int.q(arg3.q)
arg2 = arg3

if (rcx != -0x8000000000000000)
    zmm0.q = float.d(rcx)
    
    if (not(zmm0.q f== arg3.q))
        arg2.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg2, arg2.q))) & 1))

arg3.q = arg3.q f- arg2.q
int32_t r8_1 = int.d(arg2.q)

if (not(arg3.q f<= 0.0))
    arg3 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, arg3.q)

arg2 = _mm_cvtpd_ps(arg3)

if (not(arg2.d f< 0f) && not(_mm_min_ss(arg2.d, 0x3f7fffff).d f< 0.5f))
    r8_1 += 1

return sub_141a68720(arg1, int.d(zmm3.q), r8_1) __tailcall
