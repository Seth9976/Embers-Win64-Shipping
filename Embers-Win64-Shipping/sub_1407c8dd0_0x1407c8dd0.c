// 函数: sub_1407c8dd0
// 地址: 0x1407c8dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg2[1]
float zmm2[0x4] = arg2[2]
float var_a8[0x4] = arg2[3]
float zmm6[0x4] = *arg2
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
temp0[0] = temp0[0] * temp0[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm6[0] = zmm6[0] * zmm6[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float var_d8[0x4] = zmm6
zmm6[0] = zmm6[0] + temp0[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm6[0] = zmm6[0] + temp0_1[0]
zmm2[0] = zmm2[0] * zmm2[0]
var_d8[0] = zmm6[0]
temp0_2[0] = temp0_2[0] * temp0_2[0]
bool cond:0 = zmm6[0] <= 9.99999994e-09f
zmm3[0] = zmm3[0] + temp0_2[0]
var_d8[1] = temp0[0]
var_d8[2] = temp0_1[0]
temp0_3[0] = temp0_3[0] * temp0_3[0]
zmm3[0] = zmm3[0]
zmm3[1] = temp0_2[0]
zmm3[0] = zmm3[0] + temp0_3[0]
zmm3[2] = temp0_3[0]
zmm2[0] = zmm2[0]
temp0_4[0] = temp0_4[0] * temp0_4[0]
zmm2[1] = temp0_4[0]
zmm2[2] = temp0_5[0]
zmm2[0] = zmm2[0] + temp0_4[0]
temp0_5[0] = temp0_5[0] * temp0_5[0]
zmm2[0] = zmm2[0] + temp0_5[0]
float zmm0[0x4]
float zmm14[0x4]

if (cond:0)
    zmm14 = zx.o(0)
else
    zmm14 = _mm_sqrt_ss(zmm6[0], zmm6[0])
    zmm0 = 0x3f800000
    zmm0[0] = 1f / zmm14[0]
    zmm6[0] = zmm6[0] * zmm0[0]
    temp0[0] = temp0[0] * zmm0[0]
    temp0_1[0] = temp0_1[0] * zmm0[0]
    var_d8[0] = zmm6[0]
    var_d8[1] = temp0[0]
    var_d8[2] = temp0_1[0]

float zmm13[0x4]

if (zmm3[0] <= 9.99999994e-09f)
    zmm13 = zx.o(0)
else
    zmm13 = _mm_sqrt_ss(zmm3[0], zmm3[0])
    zmm0 = 0x3f800000
    zmm0[0] = 1f / zmm13[0]
    zmm3[0] = zmm3[0] * zmm0[0]
    temp0_2[0] = temp0_2[0] * zmm0[0]
    temp0_3[0] = temp0_3[0] * zmm0[0]
    zmm3[0] = zmm3[0]
    zmm3[1] = temp0_2[0]
    zmm3[2] = temp0_3[0]

zmm0 = zx.o(0)

if (not(zmm2[0] <= 9.99999994e-09f))
    zmm0 = _mm_sqrt_ss(0, zmm2[0])
    float zmm1 = 1f / zmm0[0]
    zmm2[0] = zmm2[0] * zmm1
    temp0_4[0] = temp0_4[0] * zmm1
    temp0_5[0] = temp0_5[0] * zmm1
    zmm2[0] = zmm2[0]
    zmm2[1] = temp0_4[0]
    zmm2[2] = temp0_5[0]

float temp0_9[0x4] = _mm_unpacklo_ps(zmm13, 0)
arg1[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm0[0].q), temp0_9[0].q)
float zmm0_1
int128_t zmm6_1
float zmm7_1[0x4]
int128_t zmm8_1
int128_t zmm9_1
int32_t zmm10_1
zmm0_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_14062b8d0(arg2)

if (not(zmm0_1 f>= zmm10_1))
    float temp0_12[0x4] = __mulps_xmmps_memps(zmm7_1, data_143ce07d0)
    var_d8[0] = (zmm6_1 ^ 0x80000000).d
    var_d8[1] = (zmm8_1 ^ 0x80000000).d
    var_d8[2] = (zmm9_1 ^ 0x80000000).d
    arg1[2] = temp0_12

uint32_t var_e8[0x4]
uint32_t (* result)[0x4] = sub_14077e4a0(&var_e8, &var_d8)
uint32_t zmm6_2[0x4] = var_e8
*arg1 = zmm6_2
float zmm2_1[0x4] = *(arg2 + 0x34)
float temp0_13[0x4] = _mm_unpacklo_ps(arg2[3].d, (*(arg2 + 0x38))[0].q)
float temp0_14[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
uint32_t zmm1_1[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
arg1[1] = _mm_unpacklo_ps(temp0_13, temp0_14[0].q)
float zmm5_1[0x4] = data_143ce07a0
zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
float temp0_20[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
zmm1_1 = _mm_rsqrt_ps(temp0_20)
float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm5_1)
float temp0_27[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), temp0_22)), zmm1_1), 
    zmm1_1)
float temp0_30[0x4] = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_27, temp0_27), temp0_22))
uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(data_143ce07c0, temp0_20, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_30, temp0_27), temp0_27), zmm6_2) ^ data_143ce0790, 
    zmm0_2) ^ data_143ce0790
return result
