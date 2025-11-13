// 函数: sub_141f5e2b0
// 地址: 0x141f5e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_18[0x4] = zmm7
float zmm8[0x4]
float var_28[0x4] = zmm8
float zmm9[0x4]
float var_38[0x4] = zmm9
float zmm10[0x4]
float var_48[0x4] = zmm10
float zmm11[0x4]
float var_58[0x4] = zmm11
float zmm12[0x4]
float var_68[0x4] = zmm12
int64_t rsi = sx.q(arg3)

if ((*(arg1 + 0x88) & 1) == 0)
label_141f5e5e7:
    *arg2 = data_14399f6e0
    arg2[1] = data_14399f6f0
    arg2[2] = data_14399f700
    arg2[3] = data_14399f710
else
    void* rax_1 = sub_140d3c6e0(arg1 + 0x438)
    float (* rdx_3)[0x4]
    float zmm1[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    
    if (rax_1 == 0)
        if (rsi.d s< 0)
            goto label_141f5e5e7
        
        int64_t rcx_6 = sx.q(*(arg1 + 0x494))
        
        if (rsi.d s>= *(arg1 + rcx_6 * 0x10 + 0x458))
            goto label_141f5e5e7
        
        zmm3 = *(arg1 + 0x1c0)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        rdx_3 = rsi * 0x30 + *(arg1 + (rcx_6 + 0x45) * 0x10)
        zmm4 = _mm_mul_ps(zmm1, zmm3)
    else
        if (rsi.d s>= *(arg1 + 0x4b8))
            goto label_141f5e5e7
        
        int64_t rax_2 = sx.q(*(*(arg1 + 0x4b0) + (rsi << 2)))
        
        if (rax_2.d == 0xffffffff)
            goto label_141f5e5e7
        
        int64_t rdx = sx.q(*(rax_1 + 0x494))
        
        if (rax_2.d s>= *(rax_1 + rdx * 0x10 + 0x458))
            goto label_141f5e5e7
        
        zmm3 = *(arg1 + 0x1c0)
        zmm1 = _mm_add_ps(zmm3, zmm3)
        rdx_3 = rax_2 * 0x30 + *(rax_1 + (rdx + 0x45) * 0x10)
        zmm4 = _mm_mul_ps(zmm3, zmm1)
    
    zmm7 = data_143f3b870
    zmm10 = *(arg1 + 0x1d0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x29)
    float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 4), temp0_3)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_9[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(zmm4, zmm4, 1))
    float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(zmm1, zmm1, 0x12))
    zmm1 = *(arg1 + 0x1e0)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_5)
    float temp0_14[0x4] = _mm_sub_ps(temp0_5, temp0_11)
    float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
    float temp0_18[0x4] = _mm_mul_ps(_mm_sub_ps(zmm7, temp0_9), zmm1)
    zmm1 = *rdx_3
    float temp0_19[0x4] = _mm_add_ps(zmm1, zmm1)
    float zmm2[0x4] = __andps_xmmxud_memxud(temp0_18, data_143f3b880)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
    float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
    float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_24, 0x88)
    float temp0_27[0x4] = _mm_mul_ps(temp0_19, zmm1)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x29)
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x12)
    zmm7[0].q = zmm10 u>> 0x40
    float temp0_32[0x4] = _mm_shuffle_ps(zmm10, zmm7, 0xc4)
    float temp0_34[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(zmm1, zmm1, 4))
    float temp0_37[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0x1a), _mm_shuffle_ps(temp0_27, temp0_27, 1))
    float temp0_39[0x4] = _mm_mul_ps(temp0_31, _mm_shuffle_ps(zmm1, zmm1, 0xff))
    zmm1 = rdx_3[2]
    float temp0_40[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_34)
    float temp0_42[0x4] = _mm_sub_ps(temp0_34, temp0_39)
    float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm1)
    float temp0_44[0x4] = _mm_mul_ps(temp0_40, temp0_42)
    zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_37), zmm1), data_143f3b880)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_44, zmm2, 0x32)
    float temp0_50[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm2, 0), temp0_48, 0x82)
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_43, zmm2, 0x31)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_44, zmm2, 0x10), temp0_51, 0x88)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_43, temp0_44, 0x12)
    float zmm5[0x4] = rdx_3[1]
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
    float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, zmm2, 0xe8)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)
    float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xff), temp0_32)
    float temp0_61[0x4] = _mm_mul_ps(temp0_55, temp0_23)
    float temp0_62[0x4] = _mm_mul_ps(temp0_56, temp0_29)
    float temp0_63[0x4] = _mm_mul_ps(temp0_58, temp0_26)
    zmm7[0].q = zmm5 u>> 0x40
    float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm7, 0xc4)
    float temp0_65[0x4] = _mm_add_ps(temp0_63, temp0_61)
    float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0), temp0_23)
    float temp0_68[0x4] = _mm_add_ps(temp0_65, temp0_62)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_29)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_60)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0x55), temp0_26)
    float temp0_74[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
    *arg2 = temp0_71
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
    float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_67)
    float temp0_77[0x4] = _mm_mul_ps(temp0_75, temp0_26)
    float temp0_78[0x4] = _mm_mul_ps(temp0_74, temp0_32)
    float temp0_79[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0)
    float temp0_80[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_23)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_29)
    float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_78)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    float temp0_86[0x4] = _mm_add_ps(temp0_77, temp0_81)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_32)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
    arg2[1] = temp0_84
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
    float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_83)
    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_26)
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xaa)
    float temp0_93[0x4] = _mm_mul_ps(temp0_88, temp0_23)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_29)
    float temp0_95[0x4] = _mm_add_ps(temp0_90, temp0_87)
    float temp0_96[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
    float temp0_97[0x4] = _mm_add_ps(temp0_91, temp0_93)
    float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_32)
    arg2[2] = temp0_95
    arg2[3] = _mm_add_ps(_mm_add_ps(temp0_97, temp0_94), temp0_98)

return arg2
