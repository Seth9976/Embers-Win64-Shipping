// 函数: sub_141a359a0
// 地址: 0x141a359a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x2] = *arg2
int64_t rax = *(arg3 + 4)
int64_t arg_8
uint128_t zmm1
uint128_t zmm2

if (not(zmm3[0] == 1f))
    zmm2.q = _mm_cvtepi32_pd(zx.q(rax.d)).q f+ _mm_cvtps_pd(rax:4.d.q).q
    zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm3).q
    int64_t rcx = int.q(zmm2.q)
    uint128_t zmm0 = zmm2
    
    if (rcx != -0x8000000000000000)
        zmm1.q = float.d(rcx)
        
        if (not(zmm1.q f== zmm2.q))
            zmm0.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
    
    zmm2.q = zmm2.q f- zmm0.q
    zmm1 = _mm_cvtpd_ps(zmm2)
    arg_8.d = int.d(zmm0.q)
    
    if (zmm1.d f>= 0f)
        zmm0 = _mm_min_ss(0x3f7fffff, zmm1.d)
        
        if (zmm0.d f>= 0f)
            arg_8:4.d = _mm_min_ss(zmm0.d, 0x3f7fffff).d
        else
            arg_8:4.d = 0
    else
        arg_8:4.d = _mm_min_ss(zx.o(0).d, 0x3f7fffff).d
    
    rax = arg_8

int64_t rdx = *(arg2 + 4)
zmm2.d = rax:4.d.d f+ rdx:4.d
zmm1.d = zmm2.d f+ zmm2.d
zmm1.d = zmm1.d f- 0.5f
int32_t rcx_2 = int.d(zmm1.d)
zmm1 = zmm2
arg_8.d = (rcx_2 s>> 1) + rdx.d + rax.d
int32_t rcx_6 = int.d(zmm1.d)

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

zmm2.d = zmm2.d f- zmm1.d

if (zmm2.d f>= 0f)
    arg_8:4.d = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_8:4.d = 0

zmm3[0] = zmm3[0] f* *arg3
*(arg1 + 4) = arg_8
*arg1 = zmm3[0]
return arg1
