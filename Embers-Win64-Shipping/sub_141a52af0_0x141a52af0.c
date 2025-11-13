// 函数: sub_141a52af0
// 地址: 0x141a52af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x18)
uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(rax.d)).q f* 0.0083333333400000004
zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q((rax u>> 0x20).d)).q
int64_t rdx = int.q(zmm1.q)
uint128_t zmm2 = zmm1

if (rdx != -0x8000000000000000)
    uint128_t zmm0
    zmm0.q = float.d(rdx)
    
    if (not(zmm0.q f== zmm1.q))
        zmm2.q = float.d(rdx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))

zmm1.q = zmm1.q f- zmm2.q
int32_t rcx = int.d(zmm2.q)

if (not(zmm1.q f<= 0.0))
    zmm1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm1.q)

zmm2 = _mm_cvtpd_ps(zmm1)
int32_t arg_c

if (zmm2.d f>= 0f)
    arg_c = _mm_min_ss(0x3f7fffff, zmm2.d).d
else
    arg_c = 0

int64_t r10 = *(arg2 + 0x10)
int64_t rbx = *(arg2 + 4)
zmm2.d = r10:4.d.d f- rbx:4.d
zmm1.d = zmm2.d f+ zmm2.d
zmm1.d = zmm1.d f- 0.5f
int32_t rdx_3 = int.d(zmm1.d) s>> 1
int32_t r11_2 = r10.d - rbx.d + rdx_3
int64_t arg_10
arg_10.d = r11_2
zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rdx_3)).d

if (zmm2.d f>= 0f)
    arg_10:4.d = _mm_min_ss(zmm2.d, 0x3f7fffff).d
else
    arg_10:4.d = 0

int64_t rax_4 = rcx.q
int32_t arg_8
arg_8.q = arg_10

if (r11_2 s> rcx || (r11_2 == rcx && arg_c.d f>= rax_4:4.d))
    rcx.b = 1
else
    rcx.b = 0

if (rcx.b != 0)
    rax_4 = arg_10

int32_t rdx_5 = *(arg2 + 0x24)
int32_t r9_1 = *(arg2 + 0x20)
int64_t rcx_1

if (rdx_5 == 0x80000000)
    if (r9_1 != 0)
        r10 = rbx
    
    rdx_5 = r10.d
    rcx_1 = r10
else
    arg_c = 0
    rcx_1 = rdx_5.q

if (r9_1 != 0)
    arg_8.q = rcx_1
    zmm2.d = arg_c.d f- rax_4:4.d
    zmm1.d = zmm2.d f+ zmm2.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rcx_9 = int.d(zmm1.d) s>> 1
    arg_8 = rdx_5 - rax_4.d + rcx_9
    zmm2.d = zmm2.d f- _mm_cvtepi32_ps(zx.o(rcx_9)).d
else
    arg_8.q = rax_4
    zmm2.d = arg_c.d f+ rcx_1:4.d
    zmm1.d = zmm2.d f+ zmm2.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rcx_2 = int.d(zmm1.d)
    zmm1 = zmm2
    arg_8 = (rcx_2 s>> 1) + rax_4.d + rdx_5
    int32_t rcx_6 = int.d(zmm1.d)
    
    if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm1.d))
        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
    
    zmm2.d = zmm2.d f- zmm1.d

if (zmm2.d f>= 0f)
    arg_c = _mm_min_ss(zmm2.d, 0x3f7fffff).d
    *arg1 = arg_8.q
    return arg1

arg_c = 0
*arg1 = arg_8.q
return arg1
