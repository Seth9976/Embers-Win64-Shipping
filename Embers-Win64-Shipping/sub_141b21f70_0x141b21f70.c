// 函数: sub_141b21f70
// 地址: 0x141b21f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2 = (zx.o(0)).d
int64_t rdx_1 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
void* rax_2 = *(arg1 + 0xe0)
uint128_t zmm0

if (rax_2 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(rax_2 + 0x90)

zmm0 = _mm_cvtps_pd(zmm0.q)
uint128_t zmm3
zmm3.q = _mm_cvtepi32_pd(zx.q(rdx_1.d)).q f* zmm0.q
zmm3.q = zmm3.q f/ _mm_cvtepi32_pd(zx.q((rdx_1 u>> 0x20).d)).q
int64_t rcx_1 = int.q(zmm3.q)
uint128_t zmm1 = zmm3

if (rcx_1 != -0x8000000000000000)
    zmm0.q = float.d(rcx_1)
    
    if (not(zmm0.q f== zmm3.q))
        zmm1.q = float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm3.q = zmm3.q f- zmm1.q

if (not(zmm3.q f<= 0.0))
    zmm3 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm3.q)

zmm0 = _mm_cvtpd_ps(zmm3)

if (not(zmm0.d f< 0f))
    zmm2 = _mm_min_ss(zmm0.d, 0x3f7fffff)

int64_t rax_6 = *(arg1 + 0x90)
uint32_t rcx_4 = (rax_6 u>> 0x20).d

if (rax_6.b != 1)
    rcx_4 += 1

uint32_t rax_7

if (rax_6.b != 1)
    rax_7 = (rax_6 u>> 0x20).d + 1
else
    rax_7 = (rax_6 u>> 0x20).d

uint32_t var_14 = rax_7
char var_10 = 0
int32_t var_c = rcx_4 + 1 + int.d(zmm2 f+ 0.5f) + int.d(zmm1.q)
*arg2 = 1.o
arg2[1].b = 1
return arg2
