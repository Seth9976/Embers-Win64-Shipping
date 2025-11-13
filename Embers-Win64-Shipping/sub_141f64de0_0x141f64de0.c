// 函数: sub_141f64de0
// 地址: 0x141f64de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_d8[0x4]
float zmm7_1[0x4] = sub_141a7fc30(arg1 + 0x420, &var_d8, arg3, &data_14399f720)
float zmm6[0x4] = var_d8
float zmm5[0x4] = data_143f3b8d0
float temp0[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm5, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_16[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_4, 2)
var_d8 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm6) ^ data_143f3b8c0, 
    temp0_16) ^ data_143f3b8c0
uint64_t var_f8
int64_t* rax = sub_141a1da60(arg1 + 0x408, &var_f8, zmm7_1, &data_143dbb1f8)
uint128_t zmm7_2 = *(rax + 4)
uint128_t zmm6_1 = *rax
float zmm8 = rax[1].d
uint128_t zmm2_1
zmm2_1.d = zmm6_1.d f* zmm6_1.d
uint128_t zmm0_1
zmm0_1.d = zmm7_2.d f* zmm7_2.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm8 * zmm8
uint64_t var_108
uint128_t zmm5_1

if (not(zmm2_1.d f!= 1f))
    var_108 = *rax
    int32_t var_100 = rax[1].d
else if (zmm2_1.d f>= 9.99999994e-09f)
    float zmm3_1 = zmm2_1.d
    zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1)
    zmm3_1 = zmm3_1 * 0.5f
    zmm0_1.d = zmm5_1.d f* zmm5_1.d
    zmm2_1.d = 0.5f - zmm3_1 f* zmm0_1.d
    zmm0_1.d = zmm5_1.d f* zmm2_1.d
    zmm5_1.d = zmm5_1.d f+ zmm0_1.d
    zmm0_1.d = zmm5_1.d f* (0.5f - zmm3_1 * zmm5_1.d f* zmm5_1.d)
    zmm5_1.d = zmm5_1.d f+ zmm0_1.d
    zmm6_1.d = zmm6_1.d f* zmm5_1.d
    zmm7_2.d = zmm7_2.d f* zmm5_1.d
    var_108.d = zmm6_1.d
    var_108:4.d = zmm7_2.d
    float var_100_2 = zmm8 f* zmm5_1.d
else
    var_108.d = data_143dbb1f8.d
    int32_t var_100_1 = data_143dbb200.d
    var_108:4.d = data_143dbb1fc

float zmm11 = var_d8[1]
zmm7_2 = var_d8[2]
zmm8 = var_d8[0]
zmm0_1 = zx.o(*(arg1 + 0x4e8))
int32_t rax_2 = *(arg1 + 0x4f0)
var_f8 = zmm0_1.q
zmm6_1 = var_f8.d
uint128_t zmm9 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
uint128_t zmm10
zmm10.d = zmm6_1.d f* zmm7_2.d
zmm5_1.d = zmm9.d f* zmm8
uint128_t zmm13 = rax_2
zmm0_1.d = zmm9.d f* zmm7_2.d
uint128_t zmm12
zmm12.d = zmm13.d f* zmm11
zmm12.d = zmm12.d f- zmm0_1.d
zmm0_1.d = zmm13.d f* zmm8
zmm10.d = zmm10.d f- zmm0_1.d
zmm0_1.d = zmm6_1.d f* zmm11
zmm12.d = zmm12.d f+ zmm12.d
zmm5_1.d = zmm5_1.d f- zmm0_1.d
zmm0_1 = var_d8[3]
zmm10.d = zmm10.d f+ zmm10.d
zmm2_1.d = zmm12.d f* zmm0_1.d
zmm5_1.d = zmm5_1.d f+ zmm5_1.d
zmm6_1.d = zmm6_1.d f+ zmm2_1.d
float zmm4_1 = zmm5_1.d f* zmm0_1.d
zmm9.d = zmm9.d f+ zmm10.d f* zmm0_1.d
float zmm1_1 = zmm5_1.d * zmm11
zmm0_1.d = zmm10.d f* zmm7_2.d
zmm13.d = zmm13.d f+ zmm4_1
zmm5_1.d = zmm5_1.d f* zmm8
zmm1_1 = zmm1_1 f- zmm0_1.d
zmm10.d = zmm10.d f* zmm8
zmm0_1 = zmm12
zmm12.d = zmm12.d f* zmm11
zmm0_1.d = zmm0_1.d f* zmm7_2.d
zmm10.d = zmm10.d f- zmm12.d
zmm0_1.d = zmm0_1.d f- zmm5_1.d
float var_e8 = zmm1_1 f+ zmm6_1.d
zmm10.d = zmm10.d f+ zmm13.d
zmm0_1.d = zmm0_1.d f+ zmm9.d
int32_t var_e0 = zmm10.d
int32_t var_e4 = zmm0_1.d
int32_t var_c8[0x10]
sub_140ae1ba0(sub_140ada8d0(&var_c8, &var_108, &var_e8), arg2)

if (arg4 == 1)
    float zmm4_2[0x4] = *(arg1 + 0x1c0)
    float zmm2_2[0x4] = *arg2
    uint32_t zmm3_2[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
    zmm3_2 = _mm_mul_ps(zmm3_2, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b))
    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xff), zmm2_2)
    zmm3_2 = __mulps_xmmps_memps(zmm3_2, data_143f3b8b0)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
    zmm3_2 = _mm_add_ps(zmm3_2, temp0_28)
    float temp0_33[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e))
    float temp0_35[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1))
    float temp0_36[0x4] = __mulps_xmmps_memps(temp0_33, data_143f3b8a0)
    float temp0_37[0x4] = __mulps_xmmps_memps(temp0_35, data_143f3b890)
    *arg2 = _mm_add_ps(_mm_add_ps(zmm3_2, temp0_36), temp0_37)

return arg2
