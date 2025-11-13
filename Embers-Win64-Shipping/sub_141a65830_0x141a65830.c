// 函数: sub_141a65830
// 地址: 0x141a65830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_6 = arg1[0xf8]
uint128_t zmm0
zmm0.q = fconvert.d(arg2.d)
uint128_t zmm2
zmm2.q = _mm_cvtepi32_pd(zx.q(rax_6.d)).q f* zmm0.q
zmm2.q = zmm2.q f/ _mm_cvtepi32_pd(zx.q((rax_6 u>> 0x20).d)).q
int64_t rdx = int.q(zmm2.q)
arg2 = zmm2

if (rdx != -0x8000000000000000)
    zmm0.q = float.d(rdx)
    
    if (not(zmm0.q f== zmm2.q))
        arg2.q = float.d(rdx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg2, arg2.q))) & 1))

zmm2.q = zmm2.q f- arg2.q
int32_t rax_3 = int.d(arg2.q)

if (not(zmm2.q f<= 0.0))
    zmm2 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm2.q)

int32_t temp0_6 = _mm_cvtpd_ps(zmm2)
int32_t arg_c

if (temp0_6 f>= 0f)
    arg_c = _mm_min_ss(0x3f7fffff, temp0_6).d
    return sub_141a656e0(arg1, rax_3.q) __tailcall

arg_c = 0
return sub_141a656e0(arg1, rax_3.q) __tailcall
