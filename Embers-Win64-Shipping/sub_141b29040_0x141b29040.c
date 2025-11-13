// 函数: sub_141b29040
// 地址: 0x141b29040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
uint128_t zmm6 = zx.o(0)
uint128_t zmm0

if (r10 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(r10 + 0x90)

uint128_t zmm1 = _mm_cvtps_pd(zmm0.q)
uint32_t r14_1 = (arg3 u>> 0x20).d
uint128_t zmm11 = _mm_cvtepi32_pd(zx.q(arg3.d))
zmm1.q = zmm1.q f* zmm11.q
zmm1.q = zmm1.q f/ _mm_cvtepi32_pd(zx.q(r14_1)).q
int64_t rcx = int.q(zmm1.q)
uint128_t zmm2 = zmm1

if (rcx != -0x8000000000000000)
    zmm0.q = float.d(rcx)
    
    if (not(zmm0.q f== zmm1.q))
        zmm2.q = float.d(rcx - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2, zmm2.q))) & 1))

zmm1.q = zmm1.q f- zmm2.q

if (not(zmm1.q f<= 0.0))
    zmm1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm1.q)

zmm0 = _mm_cvtpd_ps(zmm1)

if (zmm0.d f>= 0f)
    zmm0 = _mm_min_ss(zmm0.d, 0x3f7fffff)
else
    zmm0 = zx.o(0)

int32_t rsi = arg1[0x1b].d
zmm0.d = zmm0.d f+ 0.5f
int32_t r11 = *(arg1 + 0xc)
int32_t r12_1 = arg1[2].d + r11
int64_t rax_4 = rsi.q
int64_t var_a0 = rax_4
int64_t arg_20 = arg2
int32_t arg_10
arg_10.q = rax_4
int32_t r9_1 = int.d(zmm2.q) + 1 + int.d(zmm0.d)
int32_t rcx_3 = *(arg1 + 0xdc)
int64_t rcx_4 = (rcx_3 - 1).q
int64_t var_a8 = rcx_4
int32_t arg_8
arg_8.q = arg2
int64_t* rax_5

if (arg2.d s< rsi || (arg2.d == rsi && 0f < 0f))
    rax_5 = &var_a0
else
    arg_10.q = rcx_4
    arg_8.q = arg2
    
    if (arg2.d s< rcx_3 - 1 || (arg2.d == rcx_3 - 1 && 0f < 0f))
        rax_5 = &arg_20
    else
        rax_5 = &var_a8

uint128_t zmm3
zmm3.d = (*(r10 + 0x94)).d f* *(arg1 + 0x14)
int64_t rax_6 = *rax_5

if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770).d f> 9.99999994e-09f))
    zmm3 = 0x3f800000

int64_t rdi_1 = sx.q(arg1[1].d)

if (r10 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(r10 + 0x90)

zmm2 = _mm_cvtps_pd(zmm0.q)
arg_8.q = r12_1.q
uint32_t rcx_7 = (arg3 u>> 0x20).d
int64_t r10_1 = sx.q(rcx_7)
uint128_t zmm12 = _mm_cvtepi32_ps(zx.o(rcx_7))
uint128_t zmm9 = _mm_cvtepi32_pd(zx.q(arg3.d))
zmm1.q = float.d(sx.q(r12_1) * r10_1)
arg_10.q = rsi.q
arg_8.q = rax_6
uint128_t zmm4
zmm4.d = 0f - 0f
zmm0.d = 0f f* zmm12.d
zmm1.q = zmm1.q f+ _mm_cvtps_pd(zmm0.q).q
zmm1.q = zmm1.q f/ zmm9.q
zmm2.q = zmm2.q f- zmm1.q
zmm1.d = zmm4.d f+ zmm4.d
uint128_t zmm7 = _mm_cvtpd_ps(zmm2)
zmm1.d = zmm1.d f- 0.5f
int32_t rcx_12 = int.d(zmm1.d) s>> 1
zmm4.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(rcx_12)).d

if (zmm4.d f>= 0f)
    zmm4 = _mm_min_ss(zmm4.d, 0x3f7fffff)
else
    zmm4 = zx.o(0)

zmm0 = _mm_cvtps_pd(zmm4.q)
zmm1 = _mm_cvtps_pd(zmm3.q)
zmm2.q = _mm_cvtepi32_pd(zx.q(rax_6.d - rsi + rcx_12)).q f+ zmm0.q
zmm2.q = zmm2.q f* zmm1.q
int64_t rcx_13 = int.q(zmm2.q)
zmm0 = zmm2

if (rcx_13 != -0x8000000000000000)
    zmm1.q = float.d(rcx_13)
    
    if (not(zmm1.q f== zmm2.q))
        zmm0.q = float.d(rcx_13 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))

zmm2.q = zmm2.q f- zmm0.q
int32_t rdx_1 = int.d(zmm0.q)
zmm1 = _mm_cvtpd_ps(zmm2)
int32_t arg_c

if (zmm1.d f>= 0f)
    zmm1 = _mm_min_ss(zmm1.d, 0x3f7fffff)
    
    if (zmm1.d f>= 0f)
        arg_c = _mm_min_ss(zmm1.d, 0x3f7fffff).d
    else
        arg_c = 0
else
    arg_c = _mm_min_ss(zx.o(0).d, 0x3f7fffff).d
arg_10.q = rdx_1.q
zmm0.d = float.s(r14_1)
arg_8.q = rdi_1.d.q
zmm0.d = zmm0.d f* 0f
zmm1.q = float.d(sx.q(r14_1) * sx.q(rdx_1))
zmm1.q = zmm1.q f+ _mm_cvtps_pd(zmm0.q).q
zmm1.q = zmm1.q f/ zmm11.q
zmm2 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm1).q)
zmm1.q = float.d(rdi_1 * r10_1)
zmm0.d = 0f f* zmm12.d
zmm1.q = zmm1.q f+ _mm_cvtps_pd(zmm0.q).q
zmm1.q = zmm1.q f/ zmm9.q
zmm2.q = zmm2.q f+ zmm1.q
zmm3 = _mm_cvtpd_ps(zmm2)

if (not(zmm7.d f<= 0f))
    if (r12_1 - rsi + rcx_3 s<= r9_1)
        zmm2.d = zmm3.d f- zmm7.d
        zmm2 = __andps_xmmxud_memxud(zmm2, data_142d3f770)
    
    if (r12_1 - rsi + rcx_3 s> r9_1 || not(zmm2.d f<= 9.99999975e-05f))
        zmm0, zmm6, zmm9 = sub_140a454f0(zmm3, zmm7)
        r11 = *(arg1 + 0xc)
        zmm3 = zmm0

int64_t rdx_2 = sx.q(arg3:4.d)
void* result = r11.q
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_2.d))
bool cond:4 = (arg1[3].b & 1) == 0
arg_8.q = result
zmm0.d = zmm0.d f* 0f
zmm1.q = float.d(sx.q(r11) * rdx_2)
zmm1.q = zmm1.q f+ _mm_cvtps_pd(zmm0.q).q
zmm0.q = fconvert.d(zmm3.d)
zmm1.q = zmm1.q f/ zmm9.q
zmm1.q = zmm1.q f+ zmm0.q
zmm0 = _mm_cvtpd_ps(zmm1)

if (not(cond:4))
    result = *arg1
    
    if (result != 0)
        zmm6 = *(result + 0x90)
    
    zmm6.d = zmm6.d f- zmm0.d

return result
