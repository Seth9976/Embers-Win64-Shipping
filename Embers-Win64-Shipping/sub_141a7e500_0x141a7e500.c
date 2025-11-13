// 函数: sub_141a7e500
// 地址: 0x141a7e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
bool cond:0 = *(arg1 + 0x30) == 0
float zmm6[0x4] = *arg3
int128_t zmm7 = zx.o(0)
float var_b8[0x4] = zmm6
float var_a8[0x4] = arg3[1]
float var_98[0x4] = arg3[2]
int64_t var_f8
float var_e8

if (not(cond:0))
    if (*(arg1 + 0x2c) == 0)
        int32_t rax_2 = *(arg1 + 0x28)
        var_f8 = *(arg1 + 0x20)
        int32_t var_f0_2 = rax_2
    else
        float temp0_3[0x4] = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(arg1 + 0x20), (*(arg1 + 0x28))[0].q), 
            _mm_unpacklo_ps(*(arg1 + 0x24), 0)[0].q)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_7[0x4] = _mm_mul_ps(temp0_5, temp0_6)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_7)
        float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
        float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
        float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_6)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_4)
        float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_3)
        float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(temp0_17, temp0_16), temp0_18)
        var_f8.d = temp0_20[0]
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        float var_f0_1 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
        var_f8:4.d = temp0_21[0]
    
    zmm7 = sub_141a80960(&var_e8, &var_b8, arg1 + 0x34, &var_f8, 0, &data_143dbb1f8, 0)
    float zmm3[0x4] = var_b8
    float zmm2[0x4] = var_e8.o
    float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
    float temp0_24[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
    float temp0_26[0x4] = _mm_mul_ps(temp0_23, _mm_shuffle_ps(zmm2, zmm2, 0))
    float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
    float temp0_29[0x4] = __mulps_xmmps_memps(temp0_26, data_143f2b4e0)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
    float temp0_31[0x4] = _mm_add_ps(temp0_29, temp0_28)
    float temp0_33[0x4] = _mm_mul_ps(temp0_24, _mm_shuffle_ps(zmm2, zmm2, 0x55))
    float temp0_35[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
    float temp0_36[0x4] = __mulps_xmmps_memps(temp0_33, data_143f2b4d0)
    float temp0_37[0x4] = __mulps_xmmps_memps(temp0_35, data_143f2b4c0)
    zmm6 = _mm_add_ps(_mm_add_ps(temp0_31, temp0_36), temp0_37)
    var_b8 = zmm6

if (*(arg1 + 0x1c) == 0)
    int32_t rax_3 = *(arg1 + 0x18)
    var_f8 = *(arg1 + 0x10)
    int32_t var_f0_4 = rax_3
else
    float temp0_42[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x10), (*(arg1 + 0x18))[0].q), 
        _mm_unpacklo_ps(*(arg1 + 0x14), zx.o(0)[0].q)[0].q)
    float temp0_43[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc9), temp0_43)
    float temp0_46[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd2), temp0_46)
    float temp0_49[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_50[0x4] = _mm_sub_ps(temp0_48, temp0_45)
    float temp0_51[0x4] = _mm_add_ps(temp0_50, temp0_50)
    float temp0_52[0x4] = _mm_mul_ps(temp0_49, temp0_51)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
    float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_43)
    float temp0_56[0x4] = _mm_mul_ps(temp0_54, temp0_46)
    float temp0_57[0x4] = _mm_add_ps(temp0_52, temp0_42)
    float temp0_59[0x4] = _mm_add_ps(_mm_sub_ps(temp0_56, temp0_55), temp0_57)
    var_f8.d = temp0_59[0]
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float var_f0_3 = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)[0]
    var_f8:4.d = temp0_60[0]

float zmm1[0x4] = *(arg2 + 0x10)
var_e8 = zmm1[0]
float temp0_62[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
int32_t var_108_2 = zmm7.d
int128_t* var_110_2 = &data_143dbb1f8
float var_e0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_e4 = temp0_62[0]
float var_c8[0x4]
sub_141a80960(&var_c8, &var_b8, &var_e8, &var_f8, 0, var_110_2, var_108_2)
float zmm3_1[0x4] = var_b8
float zmm2_1[0x4] = var_c8
float temp0_64[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), temp0_64)
float temp0_67[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
float temp0_70[0x4] = __mulps_xmmps_memps(temp0_66, data_143f2b4e0)
float temp0_71[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
float temp0_72[0x4] = _mm_add_ps(temp0_70, temp0_69)
float temp0_74[0x4] = _mm_mul_ps(temp0_67, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
float temp0_76[0x4] = _mm_mul_ps(temp0_71, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_77[0x4] = __mulps_xmmps_memps(temp0_74, data_143f2b4d0)
float temp0_78[0x4] = __mulps_xmmps_memps(temp0_76, data_143f2b4c0)
var_b8 = _mm_add_ps(_mm_add_ps(temp0_72, temp0_77), temp0_78)
float var_88[0x3][0x4]
sub_140ad7d70(&var_b8, &var_88, arg4)
float var_d8[0x4] = var_88[0]
sub_140adf5d0(&var_d8, &var_f8)

if (*(arg1 + 8) == 0)
    int32_t var_f0_5 = 0

if (*(arg1 + 9) == 0)
    var_f8.d = 0

if (*(arg1 + 0xa) == 0)
    var_f8:4.d = 0

float (* rax_4)[0x4] = sub_140ade170(&var_f8, &var_e8)
int64_t rdi_1 = sx.q(*(arg6 + 0x28))
float zmm0_3[0x4] = *rax_4
int32_t rax_5 = (rdi_1 + 1).d
var_d8 = zmm0_3
*(arg6 + 0x28) = rax_5

if (rax_5 s> *(arg6 + 0x2c))
    sub_1405a4f90(arg6 + 0x20)
    zmm0_3 = var_d8

*(*(arg6 + 0x20) + rdi_1 * 0x10) = zmm0_3
int64_t rdi_2 = sx.q(*(arg6 + 0x68))
int32_t rax_7 = (rdi_2 + 1).d
*(arg6 + 0x68) = rax_7

if (rax_7 s> *(arg6 + 0x6c))
    sub_1406105e0(arg6 + 0x60)

int64_t result = *(arg6 + 0x60)
*(result + (rdi_2 << 2)) = arg5[0]
__security_check_cookie(rax_1 ^ &var_138)
return result
