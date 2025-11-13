// 函数: sub_142248020
// 地址: 0x142248020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = arg3[2]
float temp0[0x4] = _mm_mul_ps(data_142d4cc00, zmm4)
float zmm7[0x4] = *arg3
float zmm8[0x4] = arg3[1]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_4[0x4] = _mm_mul_ps(temp0_2, temp0_3)
float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(temp0_1, temp0_5)
float temp0_7[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_8[0x4] = _mm_sub_ps(temp0_4, temp0_6)
float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_5)
float temp0_14[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_11, temp0_3), temp0_12)
float temp0_16[0x4] = _mm_add_ps(_mm_mul_ps(temp0_7, temp0_9), temp0)
float temp0_17[0x4] = _mm_mul_ps(data_142d4cc20, zmm4)
float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_16)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_3)
float var_b8 = temp0_18[0]
float var_b4 = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)[0]
float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), temp0_5)
float var_b0 = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)[0]
float temp0_25[0x4] = _mm_sub_ps(temp0_20, temp0_23)
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_29[0x4] = _mm_mul_ps(temp0_27, temp0_5)
float temp0_30[0x4] = _mm_mul_ps(temp0_26, temp0_7)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_3)
float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_17)
float temp0_33[0x4] = _mm_mul_ps(data_142d4cc30, zmm4)
float temp0_35[0x4] = _mm_add_ps(_mm_sub_ps(temp0_31, temp0_29), temp0_32)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xd2), temp0_3)
float var_a8 = temp0_35[0]
float var_a4 = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)[0]
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xc9), temp0_5)
float var_a0 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)[0]
float temp0_42[0x4] = _mm_sub_ps(temp0_37, temp0_40)
float temp0_43[0x4] = _mm_add_ps(temp0_42, temp0_42)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xc9), temp0_5)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xd2), temp0_3)
float temp0_48[0x4] = _mm_mul_ps(temp0_43, temp0_7)
float temp0_51[0x4] = _mm_add_ps(_mm_sub_ps(temp0_47, temp0_45), _mm_add_ps(temp0_48, temp0_33))
float var_f0 = temp0_51[0]
float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
float var_e8 = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)[0]
float var_ec = temp0_52[0]
float zmm0_1[0x4] = sub_142231db0(arg1, arg4)
zmm0_1[0] = zmm0_1[0] * 0.5f
uint32_t var_f8
uint32_t arg_18[0x4]
sub_142231e50(arg1, arg4, &arg_18, &var_f8)
float zmm2_1[0x4] = var_f0
float zmm3_1[0x4] = var_ec
float zmm4_1[0x4] = var_e8
zmm2_1[0] = zmm2_1[0] * zmm0_1[0]
float temp0_54[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
float temp0_55[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
zmm3_1[0] = zmm3_1[0] * zmm0_1[0]
zmm2_1[0] = zmm2_1[0] + zmm8[0]
zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
zmm8[0] = zmm8[0] - zmm2_1[0]
zmm3_1[0] = zmm3_1[0] + temp0_54[0]
temp0_54[0] = temp0_54[0] - zmm3_1[0]
zmm4_1[0] = zmm4_1[0] + temp0_55[0]
temp0_55[0] = temp0_55[0] - zmm4_1[0]
float var_98 = zmm2_1[0]
zmm2_1[0] = zmm2_1[0] - zmm8[0]
float var_88 = zmm8[0]
float var_94 = zmm3_1[0]
zmm3_1[0] = zmm3_1[0] - temp0_54[0]
float var_84 = temp0_54[0]
float var_90 = zmm4_1[0]
zmm4_1[0] = zmm4_1[0] - temp0_55[0]
float var_80 = temp0_55[0]
zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
float zmm5_1[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
zmm3_1[0] = zmm3_1[0] * zmm3_1[0]
zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
zmm3_1[0] = zmm3_1[0] + zmm2_1[0]
bool cond:0 = zmm5_1[0] > 9.99999975e-05f
zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
float zmm1_1[0x4] = var_f8
float temp0_57[0x4] = _mm_sqrt_ss(0, zmm3_1[0])
zmm2_1 = arg_18[0]
void var_c8
void arg_28

if (cond:0)
label_1422482a1:
    zmm2_1[0] = zmm2_1[0] - zmm1_1[0]
    float zmm0_2[0x4] = _mm_and_ps(zmm2_1, 0x7fffffff)
    
    if (not(temp0_57[0] <= zmm0_2[0]))
        void* rdx_2 = &arg_28
        int64_t var_68
        int32_t* rcx_1 = &var_68
        int32_t var_118
        int32_t* rdx_3
        int32_t zmm0_3
        
        if (zmm2_1[0] <= zmm1_1[0])
            sub_140acc920(rcx_1, rdx_2)
            char var_108_2 = 0
            rdx_3 = &var_88
            var_118 = 0
            zmm0_3 = var_f8
        else
            sub_140acc920(rcx_1, rdx_2)
            char var_108_1 = 0
            rdx_3 = &var_98
            var_118 = 0
            zmm0_3 = arg_18[0]
        
        float zmm8_1 =
            sub_142298930(arg2, rdx_3, &var_b8, &var_a8, &var_68, zmm0_3, 0x10, 0, 0, 0, 0)
        float var_d8 = (var_f0 ^ 0x80000000)[0]
        int32_t var_d0_1 = (var_e8 ^ 0x80000000).d
        float var_d4_1 = (var_ec ^ 0x80000000)[0]
        float zmm0_4[0x4] = arg_18[0]
        float zmm2_2[0x4] = zmm0_4
        zmm2_2[0] = zmm2_2[0] f- var_f8
        zmm2_2[0] = zmm2_2[0] * zmm0_4[0]
        zmm2_2[0] = zmm2_2[0] / zmm8_1
        zmm2_2[0] = zmm2_2[0] / zmm0_4[0]
        zmm0_4 = 0xbf800000
        
        if (not(zmm2_2[0] < -1f))
            zmm0_4 = __minss_xmmss_memss(zmm2_2[0], 0x3f800000)
        
        zmm8_1 = 90f - asinf(zmm0_4[0]) * 57.2957764f
        sub_140acc920(&var_c8, &arg_28)
        int64_t zmm6_2 = var_d8.q
        float var_70_1 = var_a0
        int64_t var_78 = var_a8.q
        float var_d0_2 = var_90
        var_118.q = &var_c8
        var_d8.q = var_98.q
        float var_128_1 = arg_18[0].d
        int64_t* var_138
        var_138.d = zmm8_1
        var_68 = zmm6_2
        int32_t var_60_1 = var_d0_1
        int64_t zmm6_3
        int32_t zmm7_2
        int32_t zmm8_2
        zmm6_3, zmm7_2, zmm8_2 = sub_142297ab0(arg2, &var_d8, &var_68, &var_78, var_138.d, 
            360f - zmm8_1, var_128_1, 0x10, var_118, 0)
        sub_140acc920(&var_c8, &arg_28)
        float var_60_2 = var_b0
        var_68 = var_b8.q
        float var_d0_3 = var_90
        var_118.q = &var_c8
        var_d8.q = var_98.q
        float var_128_2 = arg_18[0].d
        var_138.d = zmm8_2
        var_78 = zmm6_3
        int32_t var_70_2 = var_d0_1
        float zmm8_3
        float zmm9_1
        zmm8_3, zmm9_1 = sub_142297ab0(arg2, &var_d8, &var_78, &var_68, var_138.d, zmm7_2, 
            var_128_2, 0x10, var_118, 0)
        float zmm6_4 = 180f - zmm8_3
        sub_140acc920(&var_c8, &arg_28)
        float var_60_3 = var_a0
        var_68 = var_a8.q
        float var_70_3 = var_e8
        var_78 = var_f0.q
        float var_d0_4 = var_80
        var_d8.q = var_88.q
        var_118.q = &var_c8
        var_138.d = zmm6_4
        int32_t zmm6_5
        int32_t zmm9_2
        zmm6_5, zmm9_2 = sub_142297ab0(arg2, &var_d8, &var_78, &var_68, var_138.d, zmm9_1 - zmm6_4, 
            var_f8.d, 0x10, var_118, 0)
        sub_140acc920(&var_c8, &arg_28)
        var_68 = var_b8.q
        float var_60_4 = var_b0
        float var_70_4 = var_e8
        var_78 = var_f0.q
        float var_d0_5 = var_80
        var_118.q = &var_c8
        var_d8.q = var_88.q
        var_138.d = zmm6_5
        sub_142297ab0(arg2, &var_d8, &var_78, &var_68, var_138.d, zmm9_2, var_f8.d, 0x10, var_118, 
            0)
        float var_128_4
        var_128_4.q = &arg_28
        var_138.d = arg_18[0]
        return sub_1422489e0(arg2, arg3, &var_98, &var_88, var_138.d, var_f8, var_128_4)
else
    if (_mm_and_ps(zmm3_1, 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_1422482a1
    
    if (not(_mm_and_ps(zmm4_1, 0x7fffffff)[0] <= 9.99999975e-05f))
        goto label_1422482a1

void* rdx_13 = &arg_28
int32_t* rcx_12 = &var_c8
int32_t* rdx_18
uint32_t zmm0_13
int32_t zmm6_7

if (zmm2_1[0] <= zmm1_1[0])
    sub_140acc920(rcx_12, rdx_13)
    int32_t zmm6_8 =
        sub_142298930(arg2, &var_88, &var_b8, &var_a8, &var_c8, var_f8, 0x10, 0, 0, 0, 0)
    sub_140acc920(&var_c8, &arg_28)
    zmm6_7 =
        sub_142298930(arg2, &var_88, &var_b8, &var_f0, &var_c8, var_f8, 0x10, 0, zmm6_8, zmm6_8, 0)
    sub_140acc920(&var_c8, &arg_28)
    zmm0_13 = var_f8
    rdx_18 = &var_88
else
    sub_140acc920(rcx_12, rdx_13)
    int32_t zmm6_6 =
        sub_142298930(arg2, &var_98, &var_b8, &var_a8, &var_c8, arg_18[0], 0x10, 0, 0, 0, 0)
    sub_140acc920(&var_c8, &arg_28)
    zmm6_7 = sub_142298930(arg2, &var_98, &var_b8, &var_f0, &var_c8, arg_18[0], 0x10, 0, zmm6_6, 
        zmm6_6, 0)
    sub_140acc920(&var_c8, &arg_28)
    zmm0_13 = arg_18[0]
    rdx_18 = &var_98

return sub_142298930(arg2, rdx_18, &var_a8, &var_f0, &var_c8, zmm0_13, 0x10, 0, zmm6_7, zmm6_7, 0)
