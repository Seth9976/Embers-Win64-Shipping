// 函数: sub_14130f320
// 地址: 0x14130f320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg1[2]
float zmm0[0x4] = *arg1
double zmm1[0x2] = arg1[1]
bool cond:0 = zmm1[0].d f!= 0f
uint128_t zmm9
uint128_t var_48 = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
float var_108[0x4] = zmm3
float zmm4[0x4] = var_108[1]
zmm4[0] = zmm4[0] f- *(arg1 + 0x3a4)
zmm3[0] = zmm3[0] f- arg1[0x3a].d
float zmm11[0x4]
float var_68[0x4] = zmm11
uint128_t zmm12
uint128_t var_78 = zmm12
uint128_t zmm13
uint128_t var_88 = zmm13
float var_128[0x4] = zmm0
zmm0 = arg1[3]
uint128_t zmm14
uint128_t var_98 = zmm14
var_108[1] = zmm4[0]
var_108[0] = zmm3[0]
uint128_t zmm15
uint128_t var_a8 = zmm15
double var_118[0x2] = zmm1
float var_f8[0x4] = zmm0
uint32_t var_e8[0x4]
float var_d8[0x4]
float var_c8[0x4]
uint128_t var_b8
uint128_t zmm2
uint128_t zmm6
uint128_t zmm7

if (cond:0 || var_f8[0][0] != 0f || var_128[1][0] != 0f || var_f8[1][0] != 0f || var_128[2][0] != 0f
        || var_118[1].d[0] != 0f || var_128[3][0] != 0f || var_118[1]:4.d[0] != 0f
        || var_108[3][0] != 1f || var_f8[3][0] != 0f)
    sub_140631b10(&var_128, &var_e8)
else
    zmm6 = 0x3ff0000000000000
    zmm1 = zx.o(0)
    zmm0 = var_128[0]
    zmm1[0] = fconvert.d(zmm3[0])
    __builtin_memset(&var_e8[1], 0, 0x10)
    __builtin_memset(&var_d8[2], 0, 0x14)
    zmm3 = -0x8000000000000000
    var_b8:8.d = 0x3f800000
    float zmm8[0x4] = zx.o(0)
    float zmm5[0x4] = zx.o(0)
    zmm7.q = zmm6.q f/ _mm_cvtps_pd(zmm0[0].q)[0].q
    zmm0 = var_118[0]:4.d
    zmm1[0] = zmm1[0] f* zmm7.q
    zmm0 = _mm_cvtps_pd(zmm0[0].q)
    zmm8[0] = fconvert.s((zmm1 ^ zmm3)[0])
    zmm2.q = zmm6.q f/ zmm0[0].q
    zmm0 = var_f8[2]
    double temp0_3[0x2] = _mm_cvtps_pd(zmm4[0].q)
    zmm0 = _mm_cvtps_pd(zmm0[0].q)
    temp0_3[0] = temp0_3[0] f* zmm2.q
    zmm4 = zx.o(0)
    zmm6.q = zmm6.q f/ zmm0[0].q
    var_b8.d = zmm8[0]
    zmm5[0] = fconvert.s((temp0_3 ^ zmm3)[0])
    double temp0_5[0x2] = _mm_cvtps_pd(var_108[2][0])
    zmm2 = _mm_cvtpd_ps(zmm2)
    temp0_5[0] = temp0_5[0] f* zmm6.q
    float temp0_7[0x4] = _mm_cvtpd_ps(zmm7)
    var_d8[1] = zmm2.d
    float temp0_8[0x4] = _mm_cvtpd_ps(zmm6)
    zmm4[0] = fconvert.s((temp0_5 ^ zmm3)[0])
    var_c8[3] = temp0_8[0]
    var_b8:0xc.d = zmm4[0]
    var_e8[0] = temp0_7[0]
    var_b8:4.d = zmm5[0]

zmm2 = data_142d3f660
zmm4 = var_d8
zmm3 = var_e8
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm12 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
int64_t var_138 = 0
zmm1 = _mm_mul_ps(zmm1, zmm4)
int32_t var_130 = 0
float temp0_15[0x4] = _mm_mul_ps(temp0_10, var_c8)
int64_t var_138_1 = 0
zmm12 = _mm_mul_ps(zmm12, var_b8)
int32_t var_130_1 = 0
zmm1 = _mm_add_ps(zmm1, zmm2)
int64_t var_138_2 = 0
zmm2 = data_142ee7660
int32_t var_130_2 = 0
zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm12 = _mm_add_ps(zmm12, temp0_15)
zmm9 = _mm_mul_ps(zmm9, var_b8)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), var_c8)
zmm12 = _mm_add_ps(zmm12, zmm1)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
zmm9 = _mm_add_ps(zmm9, temp0_22)
zmm1 = _mm_mul_ps(zmm1, zmm4)
zmm7 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
zmm15 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
zmm1 = _mm_add_ps(zmm1, zmm2)
zmm2 = data_142d8c9b0
float temp0_32[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_34[0x4] = _mm_mul_ps(temp0_32, var_b8)
zmm9 = _mm_add_ps(zmm9, zmm1)
float temp0_36[0x4] = _mm_mul_ps(temp0_33, var_c8)
zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
zmm1 = _mm_mul_ps(zmm1, zmm4)
float temp0_41[0x4] = _mm_add_ps(temp0_34, temp0_36)
zmm0 = zmm12
zmm13 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
zmm0[0] = zmm0[0] f* zmm12.d
zmm1 = _mm_add_ps(zmm1, zmm2)
zmm14 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
zmm2.d = zmm7.d f* zmm7.d
float temp0_45[0x4] = _mm_add_ps(temp0_41, zmm1)
zmm1 = zmm15
zmm2.d = zmm2.d f+ zmm0[0]
zmm1[0].d = zmm1[0].d f* zmm15.d
zmm2.d = zmm2.d f+ zmm1[0].d
float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x55)
float temp0_47[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)

if (not(zmm2.d f<= 9.99999994e-09f))
    zmm3 = zx.o(0)
    zmm4 = 0x3f000000
    zmm3[0] = zmm2[0]
    float temp0_48[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_48[0] = temp0_48[0] * temp0_48[0]
    zmm1 = zmm3
    zmm1[0].d = zmm1[0].d f* temp0_48[0]
    zmm2.d = 0.5f f- zmm1[0].d
    temp0_48[0] = temp0_48[0] f* zmm2.d
    temp0_48[0] = temp0_48[0] + temp0_48[0]
    zmm1 = temp0_48
    zmm1[0].d = zmm1[0].d f* temp0_48[0]
    zmm3[0] = zmm3[0] f* zmm1[0].d
    zmm4[0] = 0.5f - zmm3[0]
    temp0_48[0] = temp0_48[0] * zmm4[0]
    temp0_48[0] = temp0_48[0] + temp0_48[0]
    zmm1 = temp0_48
    temp0_48[0] = temp0_48[0] f* zmm12.d
    zmm1[0].d = zmm1[0].d f* zmm7.d
    temp0_48[0] = temp0_48[0] f* zmm15.d
    zmm12 = temp0_48
    zmm7 = zmm1
    zmm15 = temp0_48

zmm0 = zmm9
zmm2.d = zmm13.d f* zmm13.d
zmm1 = zmm14
zmm0[0] = zmm0[0] f* zmm9.d
zmm1[0].d = zmm1[0].d f* zmm14.d
zmm2.d = zmm2.d f+ zmm0[0]
zmm2.d = zmm2.d f+ zmm1[0].d

if (not(zmm2.d f<= 9.99999994e-09f))
    zmm3 = zx.o(0)
    zmm4 = 0x3f000000
    zmm3[0] = zmm2[0]
    float temp0_49[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_49[0] = temp0_49[0] * temp0_49[0]
    zmm1 = zmm3
    zmm1[0].d = zmm1[0].d f* temp0_49[0]
    zmm2.d = 0.5f f- zmm1[0].d
    temp0_49[0] = temp0_49[0] f* zmm2.d
    temp0_49[0] = temp0_49[0] + temp0_49[0]
    zmm1 = temp0_49
    zmm1[0].d = zmm1[0].d f* temp0_49[0]
    zmm3[0] = zmm3[0] f* zmm1[0].d
    zmm4[0] = 0.5f - zmm3[0]
    temp0_49[0] = temp0_49[0] * zmm4[0]
    temp0_49[0] = temp0_49[0] + temp0_49[0]
    zmm9.d = zmm9.d f* temp0_49[0]
    zmm13.d = zmm13.d f* temp0_49[0]
    zmm14.d = zmm14.d f* temp0_49[0]

zmm2.d = temp0_46.d f* temp0_46[0]
zmm1 = temp0_47
temp0_45[0] = temp0_45[0] * temp0_45[0]
zmm1[0].d = zmm1[0].d f* temp0_47[0]
zmm2.d = zmm2.d f+ temp0_45[0]
zmm2.d = zmm2.d f+ zmm1[0].d

if (not(zmm2.d f<= 9.99999994e-09f))
    zmm3 = zx.o(0)
    zmm4 = 0x3f000000
    zmm3[0] = zmm2[0]
    float temp0_50[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_50[0] = temp0_50[0] * temp0_50[0]
    zmm1 = zmm3
    zmm1[0].d = zmm1[0].d f* temp0_50[0]
    zmm2.d = 0.5f f- zmm1[0].d
    temp0_50[0] = temp0_50[0] f* zmm2.d
    temp0_50[0] = temp0_50[0] + temp0_50[0]
    zmm1 = temp0_50
    zmm1[0].d = zmm1[0].d f* temp0_50[0]
    zmm3[0] = zmm3[0] f* zmm1[0].d
    zmm4[0] = 0.5f - zmm3[0]
    temp0_50[0] = temp0_50[0] * zmm4[0]
    temp0_50[0] = temp0_50[0] + temp0_50[0]
    temp0_45[0] = temp0_45[0] * temp0_50[0]
    temp0_46[0] = temp0_46[0] * temp0_50[0]
    temp0_47[0] = temp0_47[0] * temp0_50[0]

zmm6 = 0xbf800000
zmm2.d = zmm12.d f* zmm9.d
zmm0 = zmm7
zmm1 = zmm15
zmm0[0] = zmm0[0] f* zmm13.d
zmm1[0].d = zmm1[0].d f* zmm14.d
zmm2.d = zmm2.d f+ zmm0[0]
zmm2.d = zmm2.d f+ zmm1[0].d

if (zmm2.d f>= -1f)
    zmm2 = _mm_min_ss(zmm2.d, 0x3f800000)
else
    zmm2 = 0xbf800000

uint128_t zmm0_1 = acosf(zmm2[0])
zmm7.d = zmm7.d f* temp0_46[0]
zmm12.d = zmm12.d f* temp0_45[0]
zmm15.d = zmm15.d f* temp0_47[0]
zmm7.d = zmm7.d f+ zmm12.d
zmm7.d = zmm7.d f+ zmm15.d

if (not(zmm7.d f< -1f))
    zmm6 = _mm_min_ss(zmm7.d, 0x3f800000)

float zmm0_2 = acosf(zmm6.d)
arg2[1] = zmm0_1.d
*arg2 = zmm0_2
return arg2
