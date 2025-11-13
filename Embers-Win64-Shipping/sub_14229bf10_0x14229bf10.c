// 函数: sub_14229bf10
// 地址: 0x14229bf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg7
zmm1[0] = zmm1[0] * 0.0174532924f
float zmm0[0x4] = 0x3a83126f

if (not(zmm1[0] < 0.00100000005f))
    zmm0 = __minss_xmmss_memss(zmm1[0], 0x3fc6f4b7)

float zmm0_1[0x4]
int32_t zmm8
zmm0_1, zmm8 = __libm_sse2_sincosf_(zmm0)
int32_t rcx_1 = arg8 i+ arg2[1].d
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
arg2[1].d = rcx_1

if (rcx_1 s> *(arg2 + 0xc))
    sub_140638a00(arg2)
    rcx_1 = arg2[1].d

int32_t i_1 = 0
int32_t rbx = 0
float zmm6[0x4]
float zmm7[0x4]

if (rcx_1 s> 0)
    zmm0_1[0] = zmm0_1[0] f* zmm8
    int64_t rbp_1 = 0
    temp0_2[0] = temp0_2[0] f* zmm8
    zmm8 = 0x40c90fdb
    
    do
        float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(arg2[1].d))
        float temp0_4[0x4] = _mm_cvtepi32_ps(zx.o(rbx))
        temp0_4[0] = temp0_4[0] f* zmm8
        temp0_4[0] = temp0_4[0] / temp0_3[0]
        zmm0_1, zmm6, zmm7, zmm8 = __libm_sse2_sincosf_(temp0_4)
        int64_t* rcx_3 = *arg2
        float temp0_5[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
        rbx += 1
        zmm0_1[0] = zmm0_1[0] * zmm6[0]
        temp0_5[0] = temp0_5[0] * zmm6[0]
        float var_60_1 = zmm0_1[0]
        *(rcx_3 + rbp_1) = (_mm_unpacklo_ps(zmm7, temp0_5[0].q)).q
        *(rcx_3 + rbp_1 + 8) = var_60_1
        rbp_1 += 0xc
        rcx_1 = arg2[1].d
    while (rbx s< rcx_1)

int32_t r8 = 0

if (rcx_1 s> 0)
    int64_t rdx_1 = 0
    
    do
        float zmm5_1[0x4] = *arg3
        float (* rcx_4)[0x4] = *arg2
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        r8 += 1
        float zmm2_1[0x4] = *(rcx_4 + rdx_1 + 4)
        float temp0_8[0x4] = _mm_unpacklo_ps(*(rcx_4 + rdx_1), (*(rcx_4 + rdx_1 + 8))[0].q)
        float temp0_9[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_12[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_8, temp0_9[0].q), arg3[2])
        float temp0_13[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_10)
        float temp0_18[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_7), temp0_15)
        float temp0_19[0x4] = _mm_add_ps(temp0_18, temp0_18)
        float temp0_20[0x4] = _mm_mul_ps(temp0_13, temp0_19)
        float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc9), temp0_10)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xd2)
        float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_12)
        float temp0_28[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_23, temp0_7), temp0_22), temp0_24), arg3[1])
        float var_60_2 = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)[0]
        *(rcx_4 + rdx_1) =
            (_mm_unpacklo_ps(temp0_28, _mm_shuffle_ps(temp0_28, temp0_28, 0x55)[0].q)).q
        *(rcx_4 + rdx_1 + 8) = var_60_2
        rdx_1 += 0xc
        rcx_1 = arg2[1].d
    while (r8 s< rcx_1)

int32_t rbx_1 = 0
zmm6 = arg12
zmm7 = arg11
char r15 = arg10

if (rcx_1 s> 0)
    do
        float zmm1_1[0x4] = arg3[1]
        int64_t r10_1 = *arg1
        float temp0_32[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        float var_68 = zmm1_1[0]
        float var_78_1 = zmm6[0]
        float temp0_33[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
        float var_64_1 = temp0_32[0]
        (*(r10_1 + 0x30))(arg1, &var_68, *arg2 + sx.q(rbx_1) * 0xc, arg9, r15, zmm7[0], var_78_1, 
            arg13, var_68, temp0_33[0], arg6, arg5, arg4)
        rcx_1 = arg2[1].d
        rbx_1 += 1
    while (rbx_1 s< rcx_1)

if (rcx_1 - 1 s> 0)
    int32_t i
    
    do
        int64_t rdx_3 = *arg2
        i = i_1 + 1
        (*(*arg1 + 0x30))(arg1, rdx_3 + sx.q(i_1) * 0xc, rdx_3 + sx.q(i) * 0xc, arg9, r15, zmm7[0], 
            zmm6[0], arg13)
        i_1 = i
    while (i s< arg2[1].d - 1)

*arg2
arg10 = arg13
arg9.d = zmm6[0]
arg8 = zmm7[0]
arg7.b = r15
jump(*(*arg1 + 0x30))
