// 函数: sub_141a352a0
// 地址: 0x141a352a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *arg3
uint128_t zmm0
uint128_t zmm2

if (not(zmm1[0] != 1f))
    int64_t r8 = *(arg3 + 4)
    zmm2.d = r8:4.d.d f+ arg2:4.d
    zmm1 = zmm2
    zmm1[0] = zmm1[0] f+ zmm2.d
    zmm1[0] = zmm1[0] - 0.5f
    int32_t rax_1 = int.d(zmm1[0])
    zmm1 = zmm2
    *arg1 = (rax_1 s>> 1) + r8.d + arg2.d
    int32_t rcx = int.d(zmm1[0])
    
    if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
    
    zmm2.d = zmm2.d f- zmm1[0]
    zmm0 = zx.o(0)
    
    if (not(zmm2.d f< zmm0.d))
        zmm0 = _mm_min_ss(0x3f7fffff, zmm2.d)
    
    arg1[1] = zmm0.d
    return arg1

zmm1 = _mm_cvtps_pd(zmm1[0].q)
zmm0 = _mm_cvtps_pd(arg2:4.d.q)
zmm2.q = _mm_cvtepi32_pd(zx.q(arg2.d)).q f+ zmm0.q
zmm2.q = zmm2.q f* zmm1[0].q
int64_t rcx_2 = int.q(zmm2.q)
zmm0 = zmm2

if (rcx_2 != -0x8000000000000000)
    zmm1 = zx.o(0)
    zmm1[0].q = float.d(rcx_2)
    
    if (not(zmm1[0].q f== zmm2.q))
        zmm0.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

zmm2.q = zmm2.q f- zmm0.q
int32_t rdx = int.d(zmm0.q)
zmm1 = _mm_cvtpd_ps(zmm2)
int64_t arg_18
arg_18.d = rdx
int32_t zmm3 = (zx.o(0)).d

if (zmm1[0] >= 0f)
    zmm1 = _mm_min_ss(zmm1[0], 0x3f7fffff)
    
    if (zmm1[0] >= 0f)
        arg_18:4.d = _mm_min_ss(zmm1[0], 0x3f7fffff)[0]
    else
        arg_18:4.d = 0
else
    arg_18:4.d = _mm_min_ss(zx.o(0)[0], 0x3f7fffff)[0]

int64_t rcx_4 = *(arg3 + 4)
zmm2.d = rcx_4:4.d.d f+ arg_18:4.d
zmm1 = zmm2
zmm1[0] = zmm1[0] f+ zmm2.d
zmm1[0] = zmm1[0] - 0.5f
int32_t rax_11 = int.d(zmm1[0])
zmm1 = zmm2
int32_t rcx_5 = int.d(zmm1[0])
*arg1 = (rax_11 s>> 1) + rcx_4.d + rdx

if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2.d = zmm2.d f- zmm1[0]

if (not(zmm2.d f< 0f))
    zmm3 = _mm_min_ss(zmm2.d, 0x3f7fffff).d

arg1[1] = zmm3
return arg1
