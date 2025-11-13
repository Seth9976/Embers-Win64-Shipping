// 函数: sub_1421f2770
// 地址: 0x1421f2770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
void* const* result
int32_t var_138
float var_120_1
float var_118[0x4]
float var_e8[0x4]
float zmm0_1[0x4]

if (*(arg1 + 0x30) != 1)
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    result, zmm9_1, zmm10_1, zmm11_1, zmm12_1 =
        sub_1421eec90(arg1, arg2, arg4, arg5, &var_118, &var_138)
    
    if (result.b == 0)
        result.b = 0
    else
        float zmm3_1[0x4] = data_142d4cc00
        float zmm4_1[0x4] = data_142d4cc20
        float zmm5_1[0x4] = data_142d4cc30
        float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
        float var_48_1[0x4] = zmm9_1
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), var_e8)
        float var_58_1[0x4] = zmm10_1
        float var_f8[0x4]
        float temp0_7[0x4] = _mm_mul_ps(temp0_4, var_f8)
        float var_68_1[0x4] = zmm11_1
        zmm11_1 = var_118
        float temp0_8[0x4] = _mm_mul_ps(temp0_3, zmm11_1)
        float var_78_1[0x4] = zmm12_1
        float var_108[0x4]
        float temp0_9[0x4] = _mm_mul_ps(temp0_2, var_108)
        float zmm13[0x4] = var_138
        float temp0_10[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
        float temp0_11[0x4] = _mm_add_ps(temp0_9, temp0_8)
        int32_t var_134
        temp0_10[0] = var_134[0]
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
        int32_t var_130
        temp0_12[0] = var_130[0]
        float temp0_14[0x4] = _mm_mul_ps(temp0_13, zmm11_1)
        float temp0_15[0x4] = _mm_add_ps(temp0_11, temp0_7)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
        temp0_16[0] = 0x3f800000
        float temp0_17[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x39)
        float temp0_19[0x4] = _mm_mul_ps(temp0_17, var_f8)
        float temp0_20[0x4] = _mm_add_ps(temp0_15, temp0_6)
        float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), var_108)
        var_118 = temp0_20
        float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), var_108)
        float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), var_e8)
        float temp0_27[0x4] = _mm_add_ps(temp0_24, temp0_14)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm11_1)
        float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_19)
        float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
        float temp0_32[0x4] = _mm_add_ps(temp0_22, temp0_29)
        float temp0_33[0x4] = _mm_mul_ps(temp0_31, var_f8)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_35[0x4] = _mm_add_ps(temp0_30, temp0_26)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0)
        float temp0_37[0x4] = _mm_mul_ps(temp0_34, var_e8)
        float temp0_38[0x4] = _mm_add_ps(temp0_32, temp0_33)
        float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm11_1)
        float var_108_1[0x4] = temp0_35
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xaa)
        float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x55), var_108)
        float temp0_43[0x4] = _mm_add_ps(temp0_38, temp0_37)
        float temp0_44[0x4] = _mm_mul_ps(temp0_40, var_f8)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xff)
        float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_39)
        float var_f8_1[0x4] = temp0_43
        float temp0_47[0x4] = _mm_mul_ps(temp0_45, var_e8)
        float temp0_49[0x4] = _mm_add_ps(_mm_add_ps(temp0_46, temp0_44), temp0_47)
        float var_e8_1[0x4] = temp0_49
        var_120_1 = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)[0]
        zmm0_1 = _mm_unpacklo_ps(temp0_49, _mm_shuffle_ps(temp0_49, temp0_49, 0x55)[0].q)
    label_1421f2a33:
        *arg6 = zmm0_1.q
        arg6[1].d = var_120_1
        
        if (arg7 != 0)
            sub_1407740e0(&var_118, 0x322bcc77)
            void var_128
            *arg7 = *sub_140ae1ba0(&var_118, &var_128)
        
        if ((*((*(arg3 + 0x28))[6] + 0x59) & 1) != 0)
            void* rax_2 = *(arg3 + 0x18)
            zmm0_1 = arg6[1].d
            float zmm2_1[0x4] = *(arg6 + 4)
            zmm8 = *arg6
            zmm6 = *(rax_2 + 0x1e0)
            float temp0_53[0x4] = __mulps_xmmps_memps(*(rax_2 + 0x1c0), data_143f50590)
            float temp0_57[0x4] = __subps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0_1[0].q), 
                    _mm_unpacklo_ps(zmm2_1, 0)[0].q), 
                *(rax_2 + 0x1d0))
            float temp0_58[0x4] = _mm_rcp_ps(zmm6)
            zmm8 = __andps_xmmxud_memxud(temp0_57, data_143f50560)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc9)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xd2)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_61)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_60)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
            float temp0_67[0x4] = _mm_sub_ps(temp0_65, temp0_63)
            float temp0_68[0x4] = _mm_mul_ps(temp0_58, temp0_58)
            float temp0_69[0x4] = _mm_add_ps(temp0_58, temp0_58)
            float temp0_70[0x4] = _mm_add_ps(temp0_67, temp0_67)
            float temp0_71[0x4] = _mm_mul_ps(temp0_68, zmm6)
            float temp0_72[0x4] = _mm_mul_ps(temp0_66, temp0_70)
            float temp0_73[0x4] = _mm_sub_ps(temp0_69, temp0_71)
            float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xd2), temp0_60)
            float temp0_76[0x4] = _mm_add_ps(temp0_72, zmm8)
            float temp0_77[0x4] = _mm_mul_ps(temp0_73, temp0_73)
            float temp0_78[0x4] = _mm_add_ps(temp0_73, temp0_73)
            float temp0_79[0x4] = _mm_mul_ps(temp0_77, zmm6)
            zmm6 = __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f50540), 
                data_143f50580, 2)
            float temp0_82[0x4] = _mm_sub_ps(temp0_78, temp0_79)
            float temp0_85[0x4] =
                _mm_sub_ps(temp0_75, _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xc9), temp0_61))
            zmm6 = _mm_and_ps(zmm6, temp0_82 ^ zx.o(0)) ^ temp0_82
            float temp0_88[0x4] = _mm_mul_ps(_mm_add_ps(temp0_85, temp0_76), zmm6)
            result = zx.q(_mm_shuffle_ps(temp0_88, temp0_88, 0xaa)[0])
            *arg6 = (_mm_unpacklo_ps(temp0_88, _mm_shuffle_ps(temp0_88, temp0_88, 0x55)[0].q)).q
            arg6[1].d = result.d
        
        result.b = 1
else
    void var_d8
    void* arg_8
    
    if (*(arg4 + 0x430) == 0)
        result.b = 0
    else if (sub_1421f4330(arg1, arg2, arg4, arg5, &arg_8, &var_d8).b == 0)
        result.b = 0
    else
        var_138.q = 0
        int32_t var_130_1 = 0
        
        if (sub_142316860(arg_8, &var_118, arg4, &var_d8, &var_138).b != 0)
            var_120_1 = var_e8[2][0]
            zmm0_1 = _mm_unpacklo_ps(var_e8[0], var_e8[1][0].q)
            goto label_1421f2a33
        
        result.b = 0
return result
