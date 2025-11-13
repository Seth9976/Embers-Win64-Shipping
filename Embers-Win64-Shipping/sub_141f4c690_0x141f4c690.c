// 函数: sub_141f4c690
// 地址: 0x141f4c690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm6[0x4] = arg2
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9

if ((*(arg1 + 0xf9) & 0x10) == 0)
    int64_t* rax = sub_140d3c6e0(arg1 + 0x194)
    
    if (rax == 0)
        result = (*(*arg1 + 0x540))(arg1)
        *(arg1 + 0xf9) |= 0x10
    else
        zmm7 = zx.o(0)
        
        if (0f f!= *(arg1 + 0xc4) || 0f f!= arg1[0x19].d || 0f f!= *(arg1 + 0xcc))
            arg2 = arg1[0x2c].d
        else
            arg2 = arg1[0x2c].d
            arg2[0] = arg2[0] * 0.5f
        
        float zmm3[0x4] = 0x3f800000
        float rax_1
        float zmm2[0x4]
        
        if (zmm6[0] >= arg2[0])
            *(arg1 + 0x17c) = data_143dbb1f8.q
            rax_1 = data_143dbb200
        else
            zmm2 = 0x3f800000
            zmm6[0] = zmm6[0] / arg2[0]
            zmm2[0] = 1f - zmm6[0]
            zmm2[0] = zmm2[0] f* *(arg1 + 0x17c)
            zmm2[0] = zmm2[0] f* arg1[0x30].d
            zmm2[0] = zmm2[0] f* *(arg1 + 0x184)
            *(arg1 + 0x17c) = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
            rax_1 = zmm2[0]
        
        float zmm0[0x4] = *(arg1 + 0x164)
        bool cond:2_1 = zmm6[0] >= zmm0[0]
        char rcx_1 = *(arg1 + 0xf9)
        *(arg1 + 0x184) = rax_1
        float var_98[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        float zmm10[0x4]
        
        if (cond:2_1 || (rcx_1 & 8) == 0)
            *(arg1 + 0x1a0) = data_14399f720
        else
            zmm4 = *(arg1 + 0x1a4)
            zmm8 = arg1[0x34].d
            zmm5 = arg1[0x35].d
            zmm9 = *(arg1 + 0x1ac)
            zmm6[0] = zmm6[0] / zmm0[0]
            float var_58_1[0x4] = zmm10
            zmm10 = data_14399f720.d
            zmm8[0] = zmm8[0] * zmm10[0]
            int128_t zmm11 = data_14399f720:4.d
            zmm4[0] = zmm4[0] f* zmm11.d
            int128_t zmm12 = data_14399f720:8.d
            zmm8[0] = zmm8[0] + zmm4[0]
            zmm5[0] = zmm5[0] f* zmm12.d
            zmm8[0] = zmm8[0] + zmm5[0]
            arg2 = data_14399f720:0xc.d
            zmm9[0] = zmm9[0] * arg2[0]
            zmm8[0] = zmm8[0] + zmm9[0]
            zmm0 = zmm6
            
            if (not(zmm8[0] >= 0f))
                zmm3 = 0xbf800000
                zmm0 ^= data_142d3f780
            
            zmm3[0] = zmm3[0] - zmm0[0]
            arg2[0] = arg2[0] * zmm6[0]
            zmm10[0] = zmm10[0] * zmm6[0]
            zmm5[0] = zmm5[0] * zmm3[0]
            zmm8[0] = zmm8[0] * zmm3[0]
            zmm4[0] = zmm4[0] * zmm3[0]
            zmm8[0] = zmm8[0] + zmm10[0]
            zmm9[0] = zmm9[0] * zmm3[0]
            zmm10 = var_58_1
            zmm11.d = zmm11.d f* zmm6[0]
            zmm9[0] = zmm9[0] + arg2[0]
            zmm12.d = zmm12.d f* zmm6[0]
            float temp0_2[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
            zmm4[0] = zmm4[0] f+ zmm11.d
            zmm5[0] = zmm5[0] f+ zmm12.d
            temp0_2[0] = zmm4[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
            temp0_3[0] = zmm5[0]
            zmm5 = data_143f3b3d0
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
            temp0_4[0] = zmm9[0]
            zmm8 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
            var_98 = zmm8
            float temp0_6[0x4] = _mm_mul_ps(zmm8, zmm8)
            float temp0_8[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(temp0_6, temp0_6, 0x4e))
            float temp0_10[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x39), temp0_8)
            float temp0_11[0x4] = _mm_rsqrt_ps(temp0_10)
            float temp0_12[0x4] = _mm_mul_ps(temp0_10, zmm5)
            float temp0_17[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_12)), 
                    temp0_11), 
                temp0_11)
            float temp0_20[0x4] =
                _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_17, temp0_17), temp0_12))
            float temp0_22[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_10, 2)
            *(arg1 + 0x1a0) = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_20, temp0_17), temp0_17), zmm8)
                    ^ data_143f3b3c0, 
                temp0_22) ^ data_143f3b3c0
        
        bool cond:5_1 = _mm_and_ps(*(arg1 + 0x17c), 0x7fffffff)[0] > 0.00999999978f
        zmm9 = data_143f3b3e0
        
        if (not(cond:5_1) && not(_mm_and_ps(arg1[0x30].d, 0x7fffffff)[0] > 0.00999999978f)
                && not(_mm_and_ps(*(arg1 + 0x184), 0x7fffffff)[0] > 0.00999999978f))
            zmm4 = *(arg1 + 0x1a0)
            zmm3 = data_14399f720
            float temp0_30[0x4] = _mm_sub_ps(zmm4, zmm3)
            float temp0_31[0x4] = _mm_shuffle_ps(0x3727c5ac, 0x3727c5ac, 0)
            uint32_t temp0_34 =
                _mm_movemask_ps(_mm_cmpeq_ps(temp0_31, _mm_and_ps(temp0_30, zmm9), 1))
            uint32_t temp0_38
            
            if (temp0_34 != 0)
                temp0_38 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_31, 
                    _mm_and_ps(_mm_add_ps(zmm3, zmm4), zmm9), 1))
            
            if (temp0_34 == 0 || temp0_38 == 0)
                *(arg1 + 0x17c) = data_143dbb1f8.q
                *(arg1 + 0x184) = data_143dbb200
                zmm0 = data_14399f720
                *(arg1 + 0xf9) |= 0x10
                rcx_1 = *(arg1 + 0xf9)
                *(arg1 + 0x1a0) = zmm0
        
        result = arg1[0x16]
        
        if (result != 0)
            float temp0_39[0x4] = __mulps_xmmps_memps(*(result + 0x1c0), data_143f3b3f0)
            zmm0 = *(arg1 + 0x184)
            zmm6 = *(arg1 + 0x17c)
            float temp0_40[0x4] = _mm_unpacklo_ps(arg1[0x30].d, 0)
            float temp0_42[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_40[0].q)
            float temp0_43[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xd2)
            float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc9), temp0_43)
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
            float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd2), temp0_46)
            float temp0_49[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xff)
            float temp0_50[0x4] = _mm_sub_ps(temp0_48, temp0_45)
            float temp0_51[0x4] = _mm_add_ps(temp0_50, temp0_50)
            float temp0_52[0x4] = _mm_mul_ps(temp0_49, temp0_51)
            float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_43)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
            float temp0_56[0x4] = _mm_add_ps(temp0_52, temp0_42)
            float temp0_59[0x4] =
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_55, temp0_46), temp0_54), temp0_56)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
            temp0_61[0] = temp0_61[0] f+ arg1[0x32].d
            temp0_59[0] = temp0_59[0] f+ arg1[0x31].d
            temp0_60[0] = temp0_60[0] f+ *(arg1 + 0x18c)
            float var_90_2 = temp0_61[0]
            float var_a8 = temp0_59[0]
            float var_88[0x4]
            
            if ((rcx_1 & 8) == 0)
                int32_t rax_7 = rax[0x26].d
                var_98[0].q = var_a8.q
                zmm0 = zx.o(rax[0x25])
                var_a8.q = zmm0.q
                
                if (zmm0[0] f!= rax[0x36].d || temp0_60[0][0] f!= *(rax + 0x1b4)
                        || not(rax_7[0] f== rax[0x37].d))
                    zmm7 = data_143f3b410
                    zmm4 = zx.o(rax[0x25])
                    float temp0_79[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    float temp0_82[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_7[0].q), 
                        _mm_unpacklo_ps(temp0_79, 0)[0].q)
                    zmm5 = _mm_and_ps(zmm7, zmm9)
                    zmm2 = data_143f3b420
                    float temp0_84[0x4] = _mm_div_ps(temp0_82, zmm7)
                    var_a8.q = zmm4.q
                    float temp0_86[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_84))
                    float temp0_91[0x4] = _mm_sub_ps(temp0_82, 
                        _mm_mul_ps(
                            _mm_and_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(temp0_84, zmm9), 2), 
                                temp0_86 ^ temp0_84) ^ temp0_86, 
                            zmm7))
                    float temp0_94[0x4] =
                        _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(temp0_91, zmm5))
                    float temp0_95[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_94, 2)
                    float temp0_96[0x4] = _mm_add_ps(temp0_94, zmm7)
                    zmm8 = _mm_and_ps(temp0_95, temp0_96 ^ temp0_94) ^ temp0_96
                    float temp0_98[0x4] = _mm_cmpeq_ps(data_143f3b400, zmm8, 1)
                    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, temp0_98) ^ zmm8
                    float var_a0_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                    rax[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
                    rax[0x37].d = var_a0_4
                    float (* rax_9)[0x4]
                    rax_9, zmm7, zmm8 = sub_140ade170(&rax[0x36], &var_a8)
                    *(rax + 0x1a0) = *rax_9
                
                var_88 = *(rax + 0x1a0)
            else
                zmm2 = *(arg1 + 0x1a0)
                zmm3 = *(arg1 + 0x1b0)
                float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_62)
                float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                float temp0_67[0x4] = __mulps_xmmps_memps(temp0_64, data_143f3b3b0)
                float temp0_68[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                float temp0_69[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                float temp0_70[0x4] = _mm_add_ps(temp0_67, temp0_66)
                float temp0_72[0x4] = _mm_mul_ps(temp0_68, _mm_shuffle_ps(zmm2, zmm2, 0x55))
                zmm0 = zx.o(var_a8.q)
                float temp0_74[0x4] = _mm_mul_ps(temp0_69, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                float temp0_75[0x4] = __mulps_xmmps_memps(temp0_72, data_143f3b3a0)
                var_98[0].q = zmm0.q
                float temp0_76[0x4] = __mulps_xmmps_memps(temp0_74, data_143f3b390)
                var_88 = _mm_add_ps(_mm_add_ps(temp0_70, temp0_75), temp0_76)
            
            result = sub_141f48240(rax, &var_98, &var_88, 0, zmm7, zmm8, zmm9, zmm10, 0, 0)

if ((*(arg1 + 0xf9) & 0x10) != 0 && (arg1[0x1d].b & 2) != 0 && arg1[0x16] == 0)
    return (*(*arg1 + 0x450))(arg1)

return result
