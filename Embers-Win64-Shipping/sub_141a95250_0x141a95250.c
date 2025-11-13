// 函数: sub_141a95250
// 地址: 0x141a95250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rdx = arg2[5].q
float zmm7[0x4] = arg2[1]
float zmm10[0x4] = zmm7
float zmm9[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
int64_t rax = sx.q(*(arg2 + 0x58))
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float zmm1[0x4] = rdx[rax * 3 - 2]
zmm10[0] = zmm10[0] - zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm9[0] = zmm9[0] - temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm7[0] = zmm7[0] - temp0_3[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm9[0] = zmm9[0] + zmm10[0]
zmm9[0] = zmm9[0] + zmm7[0]
float zmm4[0x4]

if (not(zmm9[0] == 1f))
    if (zmm9[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float zmm3[0x4] = zx.o(0)
        float zmm2[0x4] = 0x3f000000
        zmm3[0] = zmm9[0]
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm3[0] = zmm3[0] * temp0_4[0]
        zmm2[0] = 0.5f - zmm3[0]
        temp0_4[0] = temp0_4[0] * zmm2[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm3[0] = zmm3[0] * temp0_4[0]
        zmm4[0] = 0.5f - zmm3[0]
        temp0_4[0] = temp0_4[0] * zmm4[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        temp0_4[0] = temp0_4[0] * zmm10[0]
        temp0_4[0] = temp0_4[0] * zmm9[0]
        temp0_4[0] = temp0_4[0] * zmm7[0]
        zmm10 = temp0_4
        zmm9 = temp0_4
        zmm7 = temp0_4
    else
        zmm10 = data_143dbb1f8
        zmm9 = data_143dbb1fc
        zmm7 = data_143dbb200

float zmm6[0x4] = *rdx
void* rcx_2 = arg2[3].q
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
char rax_1 = *(rcx_2 + 0x28)
float var_b8
float zmm5[0x4]
float zmm8[0x4]
float zmm11[0x4]
float zmm12[0x4]

if (rax_1 != 1)
    float zmm0[0x4]
    
    if (rax_1 != 2)
        zmm5 = data_142d4cc30
        float temp0_42[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_5)
        float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_42)
        float temp0_47[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_48[0x4] = _mm_sub_ps(temp0_46, temp0_44)
        float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_48)
        float temp0_50[0x4] = _mm_mul_ps(temp0_47, temp0_49)
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xd2)
        float temp0_53[0x4] = _mm_mul_ps(temp0_51, temp0_5)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_42)
        float temp0_55[0x4] = _mm_add_ps(temp0_50, zmm5)
        float temp0_57[0x4] = _mm_add_ps(_mm_sub_ps(temp0_54, temp0_53), temp0_55)
        var_b8 = temp0_57[0]
        zmm0 = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
        zmm11 = temp0_57
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
        float var_b0_2 = temp0_59[0]
        zmm12 = temp0_59
    else
        zmm5 = data_142d4cc20
        float temp0_24[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_5)
        float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_24)
        float temp0_29[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_30[0x4] = _mm_sub_ps(temp0_28, temp0_26)
        float temp0_31[0x4] = _mm_add_ps(temp0_30, temp0_30)
        float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_31)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xd2)
        float temp0_35[0x4] = _mm_mul_ps(temp0_33, temp0_5)
        float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_24)
        float temp0_37[0x4] = _mm_add_ps(temp0_32, zmm5)
        float temp0_39[0x4] = _mm_add_ps(_mm_sub_ps(temp0_36, temp0_35), temp0_37)
        var_b8 = temp0_39[0]
        zmm0 = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
        zmm11 = temp0_39
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
        float var_b0_1 = temp0_41[0]
        zmm12 = temp0_41
    
    float var_b4_1 = zmm0[0]
    zmm8 = zmm0
else
    zmm4 = data_142d4cc00
    float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_5)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_6)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
    float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_8)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_11, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd2), temp0_6)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, temp0_5)
    float temp0_19[0x4] = _mm_add_ps(temp0_14, zmm4)
    zmm11 = _mm_add_ps(_mm_sub_ps(temp0_17, temp0_18), temp0_19)
    var_b8 = zmm11[0]
    zmm8 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
    zmm12 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
    float var_b4 = zmm8[0]
    float var_b0 = zmm12[0]

zmm6 = *arg2
char rax_2 = *(rcx_2 + 0x28)
float temp0_60[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_61[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_62[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float zmm13[0x4]

if (rax_2 != 1)
    if (rax_2 != 2)
        zmm5 = data_142d4cc30
    else
        zmm5 = data_142d4cc20
    
    float temp0_79[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_60)
    float temp0_83[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_79, temp0_61), temp0_81)
    float temp0_84[0x4] = _mm_add_ps(temp0_83, temp0_83)
    float temp0_85[0x4] = _mm_mul_ps(temp0_62, temp0_84)
    float temp0_86[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xc9)
    float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xd2), temp0_61)
    float temp0_89[0x4] = _mm_add_ps(temp0_85, zmm5)
    float temp0_92[0x4] = _mm_add_ps(_mm_sub_ps(temp0_88, _mm_mul_ps(temp0_86, temp0_60)), temp0_89)
    zmm5 = temp0_92
    zmm4 = _mm_shuffle_ps(temp0_92, temp0_92, 0x55)
    zmm13 = _mm_shuffle_ps(temp0_92, temp0_92, 0xaa)
else
    zmm4 = data_142d4cc00
    float temp0_63[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_64[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_65[0x4] = _mm_mul_ps(temp0_63, temp0_60)
    float temp0_67[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_64, temp0_61), temp0_65)
    float temp0_68[0x4] = _mm_add_ps(temp0_67, temp0_67)
    float temp0_69[0x4] = _mm_mul_ps(temp0_62, temp0_68)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xd2), temp0_61)
    float temp0_72[0x4] = _mm_add_ps(temp0_69, zmm4)
    zmm5 = _mm_add_ps(
        _mm_sub_ps(temp0_71, _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xc9), temp0_60)), 
        temp0_72)
    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm13 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)

zmm8[0] = zmm8[0] * zmm7[0]
zmm11[0] = zmm11[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm10[0]
zmm12[0] = zmm12[0] * zmm9[0]
zmm13[0] = zmm13[0] * zmm9[0]
zmm12[0] = zmm12[0] - zmm8[0]
zmm12[0] = zmm12[0] * zmm10[0]
zmm11[0] = zmm11[0] * zmm9[0]
zmm11[0] = zmm11[0] - zmm12[0]
zmm13[0] = zmm13[0] * zmm10[0]
zmm8[0] = zmm8[0] - zmm11[0]
zmm11[0] = zmm11[0] * zmm10[0]
zmm11[0] = zmm11[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm10[0]
zmm11[0] = zmm11[0] - zmm8[0]
zmm12[0] = zmm12[0] * zmm7[0]
zmm12[0] = zmm12[0] * zmm9[0]
zmm8[0] = zmm8[0] - zmm12[0]
var_b8 = zmm11[0]
zmm4[0] = zmm4[0] * zmm10[0]
zmm4[0] = zmm4[0] * zmm7[0]
zmm12[0] = zmm12[0] - zmm11[0]
zmm5[0] = zmm5[0] * zmm9[0]
zmm13[0] = zmm13[0] - zmm4[0]
float var_b4_2 = zmm8[0]
zmm5[0] = zmm5[0] * zmm7[0]
zmm4[0] = zmm4[0] - zmm5[0]
float var_b0_3 = zmm12[0]
zmm5[0] = zmm5[0] - zmm13[0]
zmm4[0] = zmm4[0] * zmm10[0]
zmm4[0] = zmm4[0] * zmm9[0]
zmm5[0] = zmm5[0] * zmm7[0]
zmm5[0] = zmm5[0] * zmm10[0]
zmm5[0] = zmm5[0] - zmm4[0]
zmm13[0] = zmm13[0] * zmm7[0]
zmm13[0] = zmm13[0] * zmm9[0]
zmm4[0] = zmm4[0] - zmm13[0]
float var_a8 = zmm5[0]
bool cond:0 = zmm11[0] != 0f
zmm13[0] = zmm13[0] - zmm5[0]
float var_a4 = zmm4[0]
float var_a0 = zmm13[0]

if (cond:0 || zmm8[0] != 0f || not(zmm12[0] == 0f))
    zmm11[0] = zmm11[0] - zmm5[0]
    
    if (_mm_and_ps(zmm11, 0x7fffffff)[0] > 9.99999975e-05f)
    label_141a95724:
        void var_98
        sub_140ad6660(&var_98, &var_b8, &var_a8)
        
        if (sub_141acc640(&var_98, arg2) != 0)
            return 1
    else
        zmm8[0] = zmm8[0] - zmm4[0]
        
        if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_141a95724
        
        zmm12[0] = zmm12[0] - zmm13[0]
        
        if (not(_mm_and_ps(zmm12, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_141a95724

return 0
