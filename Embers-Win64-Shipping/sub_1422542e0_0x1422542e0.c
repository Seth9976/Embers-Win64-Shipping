// 函数: sub_1422542e0
// 地址: 0x1422542e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm9[0x4]
float var_38[0x4] = zmm9
float zmm10[0x4]
float var_48[0x4] = zmm10
float zmm11[0x4]
float var_58[0x4] = zmm11
float zmm12[0x4]
float var_68[0x4] = zmm12
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm14[0x4]
float var_88[0x4] = zmm14
uint32_t zmm15[0x4]
uint32_t var_98[0x4] = zmm15
float zmm6_1[0x4] = sub_141efce60(arg1, arg2.d)

if ((arg1[0x18].b & 8) == 0)
    *(arg1 + 0x110) = *(arg1 + 0xe0)
    *(arg1 + 0x120) = *(arg1 + 0xf0)
    *(arg1 + 0x130) = *(arg1 + 0x100)
else
    zmm6_1[0] = zmm6_1[0] f* arg1[0x28].d
    zmm7 = zx.o(0)
    
    if (not(zmm6_1[0] < 0f))
        zmm7 = __minss_xmmss_memss(zmm6_1[0], 0x3f800000)
    
    zmm9 = data_143f515a0
    float zmm5_1[0x4] = *(arg1 + 0x110)
    zmm6_1 = *(arg1 + 0xe0)
    zmm15 = data_143f51a10
    zmm13 = *(arg1 + 0x120)
    zmm14 = *(arg1 + 0x130)
    zmm10 = *(arg1 + 0xf0)
    zmm11 = *(arg1 + 0x100)
    float arg_8 = zmm7[0]
    float temp0_2[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    float temp0_4[0x4] = _mm_add_ps(temp0_2, _mm_shuffle_ps(temp0_2, temp0_2, 0x4e))
    float temp0_6[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x39), temp0_4)
    float temp0_7[0x4] = _mm_rsqrt_ps(temp0_6)
    float temp0_8[0x4] = _mm_mul_ps(zmm9, temp0_6)
    float temp0_13[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(temp0_7, temp0_7), temp0_8)), temp0_7), 
        temp0_7)
    float temp0_14[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
    float temp0_17[0x4] = _mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_13), temp0_8))
    float temp0_18[0x4] = _mm_cmpeq_ps(zmm15, temp0_6, 2)
    float temp0_21[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_17, temp0_13), temp0_13), zmm5_1)
    zmm5_1 = data_143f51590
    zmm12 = _mm_and_ps(temp0_21 ^ zmm5_1, temp0_18) ^ zmm5_1
    float temp0_24[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_14, temp0_14, 0x4e))
    float temp0_26[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_24, temp0_24, 0x39), temp0_24)
    float temp0_27[0x4] = _mm_rsqrt_ps(temp0_26)
    float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm9)
    float temp0_33[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(temp0_27, temp0_27), temp0_28)), 
            temp0_27), 
        temp0_27)
    float temp0_36[0x4] = _mm_sub_ps(zmm9, _mm_mul_ps(_mm_mul_ps(temp0_33, temp0_33), temp0_28))
    float temp0_37[0x4] = _mm_cmpeq_ps(zmm15, temp0_26, 2)
    zmm9 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_36, temp0_33), temp0_33), zmm6_1) ^ zmm5_1, temp0_37)
        ^ zmm5_1
    
    if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-06f)
        zmm7[0] = zmm7[0] - 1f
        
        if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-06f)
            float zmm3_1[0x4] = arg_8
            float temp0_44[0x4] = _mm_sub_ps(zmm10, zmm13)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            float temp0_46[0x4] = _mm_sub_ps(zmm11, zmm14)
            float temp0_47[0x4] = _mm_sub_ps(zx.o(0), zmm12)
            float temp0_48[0x4] = _mm_mul_ps(zmm9, zmm12)
            float temp0_49[0x4] = _mm_mul_ps(temp0_44, temp0_45)
            float temp0_50[0x4] = _mm_mul_ps(temp0_46, temp0_45)
            float temp0_51[0x4] = _mm_mul_ps(zmm9, temp0_45)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0x4e)
            float temp0_53[0x4] = _mm_add_ps(temp0_49, zmm13)
            float temp0_54[0x4] = _mm_add_ps(temp0_48, temp0_52)
            float temp0_55[0x4] = _mm_add_ps(temp0_50, zmm14)
            *(arg1 + 0x120) = temp0_53
            float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x39), temp0_54)
            *(arg1 + 0x130) = temp0_55
            zmm5_1 = data_143f515a0
            float temp0_62[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_57, 2), temp0_47 ^ zmm12) ^ temp0_47, 
                    _mm_sub_ps(data_143f515b0, temp0_45)), 
                temp0_51)
            float temp0_63[0x4] = _mm_mul_ps(temp0_62, temp0_62)
            float temp0_65[0x4] = _mm_add_ps(temp0_63, _mm_shuffle_ps(temp0_63, temp0_63, 0x4e))
            float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0x39), temp0_65)
            float temp0_68[0x4] = _mm_rsqrt_ps(temp0_67)
            float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm5_1)
            float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_68)
            zmm15 = _mm_cmpeq_ps(zmm15, temp0_67, 2)
            float temp0_75[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(temp0_70, temp0_69)), temp0_68), temp0_68)
            *(arg1 + 0x110) = _mm_and_ps(
                _mm_mul_ps(
                    _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_75, temp0_75), temp0_69)), 
                            temp0_75), 
                        temp0_75), 
                    temp0_62) ^ data_143f51590, 
                zmm15) ^ data_143f51590
        else
            *(arg1 + 0x110) = zmm9
            *(arg1 + 0x120) = zmm10
            *(arg1 + 0x130) = zmm11
    else
        *(arg1 + 0x110) = zmm12
        *(arg1 + 0x120) = zmm13
        *(arg1 + 0x130) = zmm14

jump(*(*arg1 + 0x3f8))
