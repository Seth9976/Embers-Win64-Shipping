// 函数: sub_141b22370
// 地址: 0x141b22370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg3 + 0x14)

if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770)[0] f> 9.99999994e-09f))
    zmm3 = 0x3f800000

int64_t rcx = *arg2
double zmm4[0x2] = zx.o(0)
int32_t arg_8
arg_8.q = rcx
float zmm2[0x4] = 0
zmm2[0] = 0f f- arg4.q:4.d
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
int32_t rax_2 = int.d(zmm2[0]) s>> 1
int32_t r9 = rcx.d - arg4 + rax_2
uint32_t zmm0[0x4] = _mm_cvtepi32_ps(zx.o(rax_2))
zmm2[0] = zmm2[0] f- zmm0[0]
float arg_c

if (not(zmm2[0] >= 0f))
    arg_c = 0f
else if (zmm2[0] >= 0.99999994f)
    arg_c = 0.99999994f
else
    arg_c = zmm2[0]

int64_t r8 = arg2[1]
zmm2 = zx.o(0)
uint32_t rdx_1 = (r8 u>> 0x20).d
arg_8.q = r9.q
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
void* rax_5 = *arg3
zmm0[0] = zmm0[0] f* arg_c
zmm2[0].q = float.d(sx.q(rdx_1) * sx.q(r9))
zmm0 = _mm_cvtps_pd(zmm0[0].q)
float zmm1[0x4] = _mm_cvtepi32_pd(zx.o(r8.d)[0].q)
zmm2[0].q = zmm2[0].q f+ zmm0[0].q
int64_t temp0_5 = _mm_cvtps_pd(zmm3[0].q)
zmm2[0].q = zmm2[0].q f/ zmm1[0].q
zmm2[0].q = zmm2[0].q f* temp0_5
zmm0 = _mm_cvtpd_ps(zmm2)

if (rax_5 != 0)
    zmm4 = *(rax_5 + 0x90)

zmm3 = zx.o(0)
int32_t rcx_5 = arg3[2].d + *(arg3 + 0xc)
arg_8.q = rcx_5.q
uint32_t rdx_3 = (arg5 u>> 0x20).d
double temp0_7[0x2] = _mm_cvtps_pd(zmm4[0])
float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(rdx_3))
temp0_8[0] = temp0_8[0] * 0f
uint128_t zmm7 = _mm_cvtepi32_pd(zx.q(arg5.d))
zmm1 = _mm_cvtps_pd(temp0_8[0].q)
zmm3[0].q = float.d(sx.q(rcx_5) * sx.q(rdx_3))
zmm2 = zmm7
zmm3[0].q = zmm3[0].q f+ zmm1[0].q
zmm2[0].q = zmm2[0].q f* temp0_5
zmm1 = _mm_cvtepi32_pd(zx.o(arg5:4.d)[0].q)
zmm3[0].q = zmm3[0].q f/ zmm2[0].q
uint128_t zmm6
zmm6.q = 0x3ff0000000000000 f/ zmm1[0].q
temp0_7[0] = temp0_7[0] f- zmm3[0].q
double zmm0_1[0x2]
int64_t zmm6_1
int64_t zmm7_1
float zmm8_1[0x2]
zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_140a454f0(zmm0, _mm_cvtpd_ps(temp0_7))
double zmm1_1[0x2] = zx.o(0)
zmm1_1[0] = fconvert.d(zmm0_1[0].d)
zmm1_1[0] = zmm1_1[0] f* zmm7_1
zmm1_1[0] = zmm1_1[0] f* zmm6_1
int64_t rcx_8 = int.q(zmm1_1[0])

if (rcx_8 != -0x8000000000000000)
    zmm0_1 = zx.o(0)
    zmm0_1[0] = float.d(rcx_8)
    
    if (not(zmm0_1[0] == zmm1_1[0]))
        uint32_t temp0_14 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1[0]))
        zmm1_1 = zx.o(0)
        zmm1_1[0] = float.d(rcx_8 - (zx.q(temp0_14) & 1))

int32_t rdx_4 = arg3[1].d
int32_t rcx_10 = int.d(zmm1_1[0])
zmm0_1 = _mm_cvtps_pd(zmm8_1)
int32_t rdx_5 = rdx_4 + rcx_10
*arg1 = rdx_5
zmm0_1[0] = zmm0_1[0] f* zmm7_1
zmm0_1[0] = zmm0_1[0] f* zmm6_1
int64_t rcx_11 = int.q(zmm0_1[0])

if (rcx_11 != -0x8000000000000000)
    zmm1_1 = zx.o(0)
    zmm1_1[0] = float.d(rcx_11)
    
    if (not(zmm1_1[0] == zmm0_1[0]))
        uint32_t temp0_17 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_11 - (zx.q(temp0_17) & 1))

int32_t i = int.d(zmm0_1[0])

if (rdx_5 s>= i)
    do
        *arg1 -= i
    while (*arg1 s>= i)

return arg1
