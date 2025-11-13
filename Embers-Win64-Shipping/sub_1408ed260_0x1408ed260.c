// 函数: sub_1408ed260
// 地址: 0x1408ed260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg3 + 0x14)

if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770)[0] f> 9.99999994e-09f))
    zmm3 = 0x3f800000

int64_t rcx = *arg2
int64_t zmm4 = (zx.o(0)).q
int32_t arg_8
arg_8.q = rcx
double zmm2[0x2] = 0
zmm2[0].d = 0f f- arg4.q:4.d
float zmm1[0x4] = zmm2
zmm1[0] = zmm1[0] f+ zmm2[0].d
zmm1[0] = zmm1[0] - 0.5f
int32_t rax_2 = int.d(zmm1[0]) s>> 1
int32_t r9 = rcx.d - arg4 + rax_2
uint32_t zmm0[0x4] = _mm_cvtepi32_ps(zx.o(rax_2))
zmm2[0].d = zmm2[0].d f- zmm0[0]
int32_t arg_c

if (zmm2[0].d f>= 0f)
    arg_c = __minss_xmmss_memss(zmm2[0].d, 0x3f7fffff)[0].d
else
    arg_c = 0

int64_t r8 = arg2[1]
zmm2 = zx.o(0)
uint32_t rdx_1 = (r8 u>> 0x20).d
arg_8.q = r9.q
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
zmm0[0] = zmm0[0] f* arg_c
zmm2[0] = float.d(sx.q(rdx_1) * sx.q(r9))
void* rcx_4 = *arg3
zmm0 = _mm_cvtps_pd(zmm0[0].q)
zmm1 = _mm_cvtepi32_pd(zx.o(r8.d)[0].q)
zmm2[0] = zmm2[0] f+ zmm0[0].q
double zmm6[0x2] = _mm_cvtps_pd(zmm3[0].q)
zmm2[0] = zmm2[0] f/ zmm1[0].q
zmm2[0] = zmm2[0] * zmm6[0]
float temp0_7[0x4] = _mm_cvtpd_ps(zmm2)

if (rcx_4 != 0)
    zmm0, zmm6 = sub_1408df1b0(rcx_4, zmm0)
    zmm4 = zmm0[0].q

int64_t rdx_2 = sx.q(arg6)
zmm1 = zx.o(0)
zmm3 = zx.o(0)
int32_t rcx_6 = arg3[2].d + *(arg3 + 0xc)
double zmm7[0x2] = zx.o(0)
zmm7[0] = float.d(arg5)
float zmm8[0x4] = zx.o(0)
zmm1[0] = float.s(rdx_2.d)
arg_8.q = rcx_6.q
zmm1[0] = zmm1[0] * 0f
zmm7[0] = zmm7[0] * zmm6[0]
zmm6 = 0x3ff0000000000000
zmm1 = _mm_cvtps_pd(zmm1[0].q)
zmm3[0].q = float.d(sx.q(rcx_6) * rdx_2)
zmm3[0].q = zmm3[0].q f+ zmm1[0].q
zmm1 = zx.o(0)
zmm1[0].q = float.d(rdx_2.d)
zmm3[0].q = zmm3[0].q f/ zmm7[0]
zmm6[0] = zmm6[0] f/ zmm1[0].q
zmm8[0] = fconvert.s(fconvert.d(zmm4.d) f- zmm3[0].q)
double zmm0_1[0x2]
int64_t zmm6_1
int64_t zmm7_1
float zmm8_1[0x2]
zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_140a454f0(temp0_7, zmm8)
double zmm1_1[0x2] = zx.o(0)
zmm1_1[0] = fconvert.d(zmm0_1[0].d)
zmm1_1[0] = zmm1_1[0] f* zmm7_1
zmm1_1[0] = zmm1_1[0] f* zmm6_1
int64_t rcx_9 = int.q(zmm1_1[0])

if (rcx_9 != -0x8000000000000000)
    zmm0_1 = zx.o(0)
    zmm0_1[0] = float.d(rcx_9)
    
    if (not(zmm0_1[0] == zmm1_1[0]))
        uint32_t temp0_10 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1[0]))
        zmm1_1 = zx.o(0)
        zmm1_1[0] = float.d(rcx_9 - (zx.q(temp0_10) & 1))

zmm0_1 = _mm_cvtps_pd(zmm8_1)
int32_t rdx_3 = int.d(zmm1_1[0])
zmm0_1[0] = zmm0_1[0] f* zmm7_1
zmm0_1[0] = zmm0_1[0] f* zmm6_1
int64_t rcx_11 = int.q(zmm0_1[0])

if (rcx_11 != -0x8000000000000000)
    zmm1_1 = zx.o(0)
    zmm1_1[0] = float.d(rcx_11)
    
    if (not(zmm1_1[0] == zmm0_1[0]))
        uint32_t temp0_13 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_11 - (zx.q(temp0_13) & 1))

*arg1 = mods.dp.d(sx.q(arg3[1].d + rdx_3), int.d(zmm0_1[0]))
return arg1
