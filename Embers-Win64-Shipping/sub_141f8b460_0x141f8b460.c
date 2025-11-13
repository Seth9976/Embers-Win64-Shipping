// 函数: sub_141f8b460
// 地址: 0x141f8b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140ab3dc0(arg1 + 0x408) != 0 || *(arg1 + 0x428) == 0)
    sub_141f17ec0(arg1, arg2)
else
    int32_t zmm0 = *(arg1 + 0x444)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4] = zx.o(0)
    float zmm8[0x4] = 0xbf800000
    float zmm9[0x4] = *(arg1 + 0x440)
    float zmm10[0x4] = zmm9
    zmm10[0] = zmm10[0] f* *(arg1 + 0x438)
    zmm9[0] = zmm9[0] f* *(arg1 + 0x43c)
    int128_t zmm11
    int128_t var_68_1 = zmm11
    float zmm12[0x4] = zx.o(0)
    zmm10[0] = zmm10[0] f* zmm0
    zmm9[0] = zmm9[0] f* zmm0
    int64_t* rax_1 = sub_140ac6680(arg1 + 0x408)
    int16_t* rbx_1
    
    if (rax_1[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_1
    
    int16_t* var_118_1 = rbx_1
    int16_t* var_110_1 = rbx_1
    
    while (*rbx_1 != 0)
        void* r8_1 = *(arg1 + 0x428)
        float var_128_1 = (*(arg1 + 0x44c))[0]
        float var_88[0x4] = var_118_1.o
        void arg_8
        zmm7, zmm8, zmm9, zmm10 =
            sub_141f83e10(&arg_8, &var_88, r8_1, zmm10, zmm9[0], (*(arg1 + 0x448))[0], var_128_1)
        zmm6 = arg3
        float zmm0_1[0x4]
        
        if (zmm6[0] <= 0f)
            zmm0_1, zmm6, zmm7, zmm8, zmm9 = sub_142005cc0(*(arg1 + 0x428))
        else
            zmm0_1 = zmm6
        
        bool cond:1_1 = zmm8[0] >= 0f
        zmm7[0] = zmm7[0] + zmm0_1[0]
        
        if (not(cond:1_1))
            zmm8 = zmm6
        
        int16_t i
        
        do
            i = *rbx_1
            
            if (i == 0)
                goto label_141f8b613
            
            if (i == 0x3c && rbx_1[1] == 0x62 && rbx_1[2] == 0x72 && rbx_1[3] == 0x3e)
                rbx_1 = &rbx_1[4]
                break
            
            rbx_1 = &rbx_1[1]
        while (i != 0xa)
        int16_t* var_110_2 = rbx_1
    
label_141f8b613:
    uint32_t rcx_4 = zx.d(*(arg1 + 0x431))
    float var_108_1[0x4] = data_14399f6e0
    float var_f8_1[0x4] = data_14399f6f0
    float var_e8_1[0x4] = data_14399f700
    float var_d8_1[0x4] = data_14399f710
    
    if (rcx_4 != 0)
        if (rcx_4 == 1)
            zmm12 = zmm7
            zmm12[0] = zmm12[0] * -0.5f
        else if (rcx_4 == 2)
            zmm12 = zmm7 ^ 0x80000000
        else if (rcx_4 == 3)
            zmm12 = zmm8
    
    float zmm3[0x4] = *(arg1 + 0x1c0)
    zmm12 ^= 0x80000000
    zmm6 = var_108_1[0]
    zmm7 = var_108_1[1]
    float temp0_2[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm12[0] = zmm12[0] + var_d8_1[2]
    zmm11 = var_d8_1[3]
    float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0_2)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_7[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(temp0_2, temp0_2, 0x29))
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
    float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_2, temp0_2, 0x12))
    float zmm1[0x4] = *(arg1 + 0x1e0)
    float temp0_12[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_3, temp0_3, 1))
    float temp0_13[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float temp0_14[0x4] = _mm_add_ps(temp0_10, temp0_7)
    float temp0_15[0x4] = _mm_sub_ps(temp0_7, temp0_10)
    zmm3 = data_143f3c470
    float temp0_16[0x4] = _mm_mul_ps(temp0_14, zmm1)
    float temp0_17[0x4] = _mm_mul_ps(temp0_13, temp0_15)
    float zmm2[0x4] =
        __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm3, temp0_12), zmm1), data_143f3c480)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, zmm2, 0x32)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_17, zmm2, 0x10)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_21, 0x82)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, _mm_shuffle_ps(temp0_16, zmm2, 0x31), 0x88)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
    float zmm5_1[0x4] = *(arg1 + 0x1d0)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, zmm2, 0xe8)
    zmm3[0].q = zmm5_1 u>> 0x40
    float temp0_29[0x4] = _mm_shuffle_ps(zmm5_1, zmm3, 0xc4)
    float var_c8[0x4]
    var_c8[0] = zmm6[0]
    float temp0_30[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
    temp0_30[0] = zmm7[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe1)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
    float temp0_35[0x4] = _mm_mul_ps(temp0_32, temp0_26)
    float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), temp0_29)
    float temp0_38[0x4] = _mm_mul_ps(temp0_33, temp0_24)
    float temp0_39[0x4] = _mm_mul_ps(temp0_34, temp0_28)
    *arg2 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_35, temp0_38), temp0_39), temp0_37)
    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108_1, var_108_1, 0x55), temp0_26)
    float temp0_45[0x4] = _mm_shuffle_ps(var_108_1, var_108_1, 0)
    float temp0_46[0x4] = _mm_shuffle_ps(var_108_1, var_108_1, 0xaa)
    float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108_1, var_108_1, 0xff), temp0_29)
    float temp0_49[0x4] = _mm_mul_ps(temp0_45, temp0_24)
    float temp0_50[0x4] = _mm_mul_ps(temp0_46, temp0_28)
    float temp0_53[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_44, temp0_49), temp0_50), temp0_48)
    float temp0_54[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0x55)
    float temp0_55[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0)
    float temp0_56[0x4] = _mm_shuffle_ps(var_f8_1, var_f8_1, 0xaa)
    arg2[1] = temp0_53
    float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_f8_1, var_f8_1, 0xff), temp0_29)
    float temp0_59[0x4] = _mm_shuffle_ps(var_e8_1, var_e8_1, 0xd2)
    temp0_59[0] = zmm12[0]
    float temp0_60[0x4] = _mm_mul_ps(temp0_55, temp0_24)
    float temp0_61[0x4] = _mm_mul_ps(temp0_56, temp0_28)
    float temp0_62[0x4] = _mm_mul_ps(temp0_54, temp0_26)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x27)
    temp0_63[0] = zmm11.d
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x39)
    float temp0_65[0x4] = _mm_add_ps(temp0_62, temp0_60)
    float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), temp0_24)
    float temp0_68[0x4] = _mm_add_ps(temp0_65, temp0_61)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_28)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_58)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_26)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_29)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_67)
    arg2[2] = temp0_71
    arg2[3] = _mm_add_ps(_mm_add_ps(temp0_76, temp0_70), temp0_75)

return arg2
