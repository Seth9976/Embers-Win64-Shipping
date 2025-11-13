// 函数: sub_142255c50
// 地址: 0x142255c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
uint64_t result = __security_cookie ^ &var_258
uint64_t result_1 = result

if ((*(arg1 + 0x71a) & 1) != 0)
    result = sub_141f64a80(arg1)
    uint64_t result_3 = result
    
    if (result != 0)
        result = zx.q(*(arg1 + 0x818))
        
        if (result.d s> 0 && *(arg1 + 0x430) != 0)
            int32_t i = 0
            
            if (result.d s> 0)
                int64_t* r14_1 = nullptr
                float zmm6[0x4]
                float var_38_1[0x4] = zmm6
                float zmm7[0x4] = 0x40000000
                float zmm8[0x4]
                float var_58_1[0x4] = zmm8
                float zmm9[0x4]
                float var_68_1[0x4] = zmm9
                float zmm10[0x4]
                float var_78_1[0x4] = zmm10
                float zmm11[0x4] = 0x3f800000
                int128_t zmm12
                int128_t var_98_1 = zmm12
                int128_t zmm13
                int128_t var_a8_1 = zmm13
                int128_t zmm14
                int128_t var_b8_1 = zmm14
                float zmm15[0x4] = 0x38d1b717
                
                do
                    void* rcx_1 = *(arg1 + 0x430) + 0x188
                    void* rbx_1 = *(r14_1 + *(result_3 + 0x50))
                    void* rsi_1 = *(r14_1 + *(arg1 + 0x810))
                    int64_t var_238 = *(rbx_1 + 0x40)
                    result = sub_14078ee20(rcx_1, &var_238)
                    
                    if ((result + 1).d u> 1)
                        int64_t rcx_3 = sx.q(result.d)
                        result = *(arg1 + (sx.q(*(arg1 + 0x494)) + 0x58) * 0x10)
                        
                        if (*(rcx_3 + result) == 1)
                            if (*(rsi_1 + 0x188) != 1)
                                result.b = *(rsi_1 + 0x16c) & 1
                            else if ((*(rsi_1 + 0x14c) & 1) != 0 || (*(rsi_1 + 0x15c) & 1) != 0)
                                result.b = 1
                            else
                                result.b = 0
                            
                            if (result.b != 0)
                                int64_t r8_1 = *(arg1 + 0x678)
                                zmm12 = data_143dbb1f8
                                zmm13 = data_143dbb1fc
                                zmm14 = data_143dbb200
                                int64_t r9_1 = *(rbx_1 + 0x50)
                                zmm9 = *(r8_1 + rcx_3 * 0x30)
                                void* rax_9 = *(arg1 + 0x430)
                                zmm9[0] = zmm9[0] * zmm7[0]
                                int32_t var_21c_1 = 0
                                int32_t var_1f8_1 = zmm12.d
                                int64_t r10_1 = *(rax_9 + 0x1a8)
                                float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                                float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                                float zmm5[0x4] = zmm9
                                zmm9[0] = zmm9[0] * zmm9[0]
                                uint64_t result_2 = sx.q(*(r10_1 + rcx_3 * 0xc + 8))
                                float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                                temp0_2[0] = temp0_2[0] * zmm7[0]
                                int32_t var_20c_1 = 0
                                temp0_1[0] = temp0_1[0] * zmm7[0]
                                result = result_2 * 3
                                int32_t var_1fc_1 = 0
                                temp0_3[0] = temp0_3[0] * zmm9[0]
                                int64_t* rdx_2 = r10_1 + (result << 2)
                                int64_t temp0_4 = *rdx_2
                                temp0_2[0] = temp0_2[0] * temp0_2[0]
                                int32_t var_1ec_1 = 0x3f800000
                                temp0_3[0] = temp0_3[0] * temp0_2[0]
                                temp0_1[0] = temp0_1[0] * temp0_2[0]
                                zmm5[0] = zmm5[0] * temp0_2[0]
                                temp0_1[0] = temp0_1[0] * temp0_1[0]
                                temp0_3[0] = temp0_3[0] * temp0_1[0]
                                zmm9[0] = zmm9[0] * temp0_1[0]
                                temp0_2[0] = temp0_2[0] + temp0_1[0]
                                int32_t var_1f4_1 = zmm13.d
                                temp0_1[0] = temp0_1[0] + zmm9[0]
                                int32_t var_1f0_1 = zmm14.d
                                temp0_2[0] = temp0_2[0] + zmm9[0]
                                zmm11[0] = zmm11[0] - temp0_2[0]
                                zmm9[0] = zmm9[0] - temp0_3[0]
                                temp0_3[0] = temp0_3[0] + zmm9[0]
                                float var_228_1 = zmm11[0]
                                temp0_3[0] = temp0_3[0] + zmm5[0]
                                float var_218_1 = zmm9[0]
                                float var_224_1 = temp0_3[0]
                                zmm9 = data_14399f6e0
                                temp0_1[0] = temp0_1[0] - temp0_3[0]
                                temp0_3[0] = temp0_3[0] + temp0_1[0]
                                zmm10 = data_14399f6f0
                                zmm5[0] = zmm5[0] - temp0_3[0]
                                float var_208_1 = temp0_3[0]
                                zmm11[0] = zmm11[0] - temp0_2[0]
                                float var_204_1 = temp0_1[0]
                                float var_210_1 = temp0_3[0]
                                float var_220_1 = zmm5[0]
                                float var_214_1 = zmm11[0]
                                float zmm0[0x4] = zmm11
                                zmm11 = data_14399f700
                                zmm0[0] = zmm0[0] - temp0_1[0]
                                zmm7 = data_14399f710
                                var_238.o = zmm7
                                float var_200_1 = zmm0[0]
                                bool r11 = temp0_4 == r9_1
                                
                                if (temp0_4 != r9_1)
                                    zmm8 = data_143f515b0
                                    int64_t temp1_1
                                    
                                    do
                                        result = result_2 * 6
                                        zmm0 = *(r8_1 + (result << 3) + 0x20)
                                        float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                        temp0_5[0] = temp0_5[0] + zmm0[0]
                                        float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                                        temp0_5[0] = temp0_5[0] + temp0_6[0]
                                        
                                        if (temp0_5[0] < zmm15[0])
                                            break
                                        
                                        float zmm2[0x4] = *(r8_1 + (result << 3))
                                        float temp0_7[0x4] = _mm_add_ps(zmm2, zmm2)
                                        float temp0_8[0x4] = _mm_shuffle_ps(zmm2, zmm2, 4)
                                        float temp0_9[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                        float temp0_10[0x4] = _mm_mul_ps(zmm2, temp0_7)
                                        float temp0_12[0x4] = _mm_mul_ps(temp0_8, 
                                            _mm_shuffle_ps(temp0_7, temp0_7, 0x29))
                                        float temp0_14[0x4] = _mm_mul_ps(temp0_9, 
                                            _mm_shuffle_ps(temp0_7, temp0_7, 0x12))
                                        float temp0_17[0x4] = _mm_add_ps(
                                            _mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                                            _mm_shuffle_ps(temp0_10, temp0_10, 1))
                                        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_12)
                                        float temp0_19[0x4] = _mm_sub_ps(temp0_12, temp0_14)
                                        float temp0_20[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                                        float zmm1[0x4] = __andps_xmmxud_memxud(
                                            _mm_sub_ps(zmm8, temp0_17), data_143f515c0)
                                        float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x32)
                                        float temp0_25[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_18, zmm1, 0), temp0_23, 0x82)
                                        float temp0_26[0x4] = _mm_shuffle_ps(temp0_18, zmm1, 0x31)
                                        float temp0_27[0x4] =
                                            _mm_shuffle_ps(temp0_18, temp0_19, 0x12)
                                        float zmm4[0x4] = *(r8_1 + (result << 3) + 0x10)
                                        float temp0_29[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_19, zmm1, 0x10), temp0_26, 0x88)
                                        float temp0_30[0x4] = _mm_mul_ps(temp0_20, temp0_29)
                                        zmm8[0].q = zmm4 u>> 0x40
                                        float temp0_31[0x4] = _mm_shuffle_ps(zmm4, zmm8, 0xc4)
                                        float temp0_32[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                                        temp0_31[0] = zmm12.d
                                        float temp0_33[0x4] = _mm_mul_ps(temp0_32, temp0_25)
                                        float temp0_34[0x4] = _mm_shuffle_ps(temp0_27, zmm1, 0xe8)
                                        float temp0_35[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                                        float temp0_36[0x4] =
                                            _mm_shuffle_ps(temp0_31, temp0_31, 0xe1)
                                        float temp0_37[0x4] = _mm_add_ps(temp0_30, temp0_33)
                                        float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_34)
                                        temp0_36[0] = zmm13.d
                                        float temp0_39[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                                        float temp0_40[0x4] =
                                            _mm_shuffle_ps(temp0_36, temp0_36, 0xc6)
                                        temp0_40[0] = zmm14.d
                                        float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_38)
                                        float temp0_42[0x4] =
                                            _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
                                        float temp0_43[0x4] = _mm_mul_ps(temp0_39, temp0_42)
                                        float temp0_45[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xaa), temp0_34)
                                        float var_178_1[0x4] = temp0_42
                                        float temp0_46[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                                        zmm9 = _mm_add_ps(temp0_41, temp0_43)
                                        float temp0_48[0x4] = _mm_mul_ps(temp0_46, temp0_29)
                                        float temp0_49[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
                                        float temp0_51[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xff), temp0_42)
                                        float temp0_54[0x4] = _mm_add_ps(
                                            _mm_add_ps(temp0_48, _mm_mul_ps(temp0_49, temp0_25)), 
                                            temp0_45)
                                        float temp0_55[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                                        zmm10 = _mm_add_ps(temp0_54, temp0_51)
                                        float temp0_57[0x4] = _mm_mul_ps(temp0_55, temp0_29)
                                        result = sx.q(rdx_2[1].d)
                                        float temp0_58[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
                                        float temp0_59[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                                        float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_25)
                                        float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_34)
                                        float temp0_63[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), temp0_42)
                                        float temp0_65[0x4] =
                                            _mm_add_ps(_mm_add_ps(temp0_57, temp0_60), temp0_61)
                                        float temp0_67[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), temp0_34)
                                        float temp0_68[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                                        zmm11 = _mm_add_ps(temp0_65, temp0_63)
                                        float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_29)
                                        float temp0_71[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
                                        float temp0_73[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), temp0_42)
                                        zmm7 = _mm_add_ps(
                                            _mm_add_ps(
                                                _mm_add_ps(temp0_70, 
                                                    _mm_mul_ps(temp0_71, temp0_25)), 
                                                temp0_67), 
                                            temp0_73)
                                        
                                        if (result.d == 0)
                                            break
                                        
                                        result_2 = result
                                        result *= 3
                                        temp1_1 = *(r10_1 + (result << 2))
                                        rdx_2 = r10_1 + (result << 2)
                                        r11 = temp1_1 == r9_1
                                    while (temp1_1 != r9_1)
                                    var_238.o = zmm7
                                
                                if (r11 != 0)
                                    uint32_t var_108[0x3][0x4]
                                    uint32_t (* rax_12)[0x4]
                                    int512_t zmm12_1
                                    int512_t zmm13_1
                                    int512_t zmm14_1
                                    rax_12, zmm12_1, zmm13_1, zmm14_1 =
                                        sub_142231940(rbx_1 + 0x28, &var_108, 0)
                                    zmm12_1.o = data_143dbb1f8
                                    zmm13_1.o = data_143dbb1fc
                                    zmm14_1.o = data_143dbb200
                                    uint32_t zmm1_1[0x4] = *rax_12
                                    float zmm15_1[0x4] = rax_12[1]
                                    uint32_t zmm2_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                                    uint32_t zmm3_1[0x4] = zmm1_1
                                    float temp0_79[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm2_1)
                                    uint32_t zmm4_1[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x29), temp0_79)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x12), zmm1_1)
                                    float temp0_88[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                                    float temp0_89[0x4] = _mm_add_ps(zmm2_1, zmm4_1)
                                    zmm4_1 = _mm_sub_ps(zmm4_1, zmm2_1)
                                    zmm2_1 = data_143f515b0
                                    zmm2_1[0].q = zmm15_1 u>> 0x40
                                    zmm1_1 = _mm_sub_ps(zmm2_1, temp0_88)
                                    _mm_shuffle_ps(zmm15_1, zmm2_1, 0xc4)
                                    uint32_t temp0_93[0x4] =
                                        __andps_xmmxud_memxud(zmm1_1, data_143f515c0)
                                    float temp0_94[0x4] = _mm_shuffle_ps(zmm4_1, temp0_93, 0x32)
                                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, temp0_93, 0), temp0_94, 
                                        0x82)
                                    float temp0_98[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_89, zmm4_1, 0x12), temp0_93, 0xe8)
                                    _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, temp0_93, 0x10), 
                                        _mm_shuffle_ps(temp0_89, temp0_93, 0x31), 0x88)
                                    uint32_t (* rax_13)[0x4] =
                                        sub_142231940(rbx_1 + 0x28, &var_108, 1)
                                    uint32_t zmm4_2[0x4] = data_143f515b0
                                    uint32_t zmm2_2[0x4] = *rax_13
                                    uint32_t zmm3_2[0x4] = zmm2_2
                                    uint32_t zmm1_2[0x4] = _mm_add_ps(zmm2_2, zmm2_2)
                                    uint32_t zmm6_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 4)
                                    zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                                    zmm3_2 = _mm_mul_ps(zmm3_2, zmm1_2)
                                    zmm6_1 =
                                        _mm_mul_ps(zmm6_1, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                                    uint32_t zmm0_2[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a)
                                    zmm2_2 = _mm_mul_ps(zmm2_2, zmm1_2)
                                    zmm0_2 = _mm_add_ps(zmm0_2, _mm_shuffle_ps(zmm3_2, zmm3_2, 1))
                                    float temp0_113[0x4] = _mm_add_ps(zmm2_2, zmm6_1)
                                    zmm6_1 = _mm_sub_ps(zmm6_1, zmm2_2)
                                    uint32_t temp0_116[0x4] = __andps_xmmxud_memxud(
                                        _mm_sub_ps(zmm4_2, zmm0_2), data_143f515c0)
                                    uint32_t var_1e8[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_113, temp0_116, 0), 
                                        _mm_shuffle_ps(zmm6_1, temp0_116, 0x32), 0x82)
                                    zmm1_2 = data_143dbb1fc
                                    zmm0_2 = _mm_shuffle_ps(temp0_113, temp0_116, 0x31)
                                    zmm2_2 = _mm_shuffle_ps(
                                        _mm_shuffle_ps(zmm6_1, temp0_116, 0x10), zmm0_2, 0x88)
                                    zmm0_2 = rax_13[1]
                                    zmm4_2[0].q = zmm0_2 u>> 0x40
                                    uint32_t var_1b8_1[0x4] = _mm_shuffle_ps(zmm0_2, zmm4_2, 0xc4)
                                    zmm0_2 = data_143dbb1f8
                                    float temp0_124[0x4] = _mm_shuffle_ps(temp0_113, zmm6_1, 0x12)
                                    var_1b8_1[0] = zmm0_2[0]
                                    zmm0_2 = data_143dbb200
                                    float temp0_125[0x4] =
                                        _mm_shuffle_ps(temp0_124, temp0_116, 0xe8)
                                    var_1b8_1[2] = zmm0_2[0]
                                    var_1b8_1[1] = zmm1_2[0]
                                    uint32_t var_1d8_1[0x4] = zmm2_2
                                    float var_1c8_1[0x4] = temp0_125
                                    float var_148[0x4]
                                    float zmm7_2[0x4]
                                    float zmm8_2[0x4]
                                    float zmm9_1[0x4]
                                    zmm7_2, zmm8_2, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm14, 
                                        zmm15 = sub_1408041d0(&var_1e8, &var_148)
                                    float zmm2_3[0x4] = var_228_1.o
                                    float zmm3_3[0x4] = var_238.o
                                    float temp0_126[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    float temp0_127[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    float temp0_128[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    float temp0_129[0x4] = _mm_mul_ps(temp0_127, zmm9_1)
                                    float temp0_130[0x4] = _mm_mul_ps(temp0_128, zmm11)
                                    float temp0_132[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm3_3)
                                    float temp0_136[0x4] = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(_mm_mul_ps(temp0_126, zmm10), temp0_129), 
                                            temp0_130), 
                                        temp0_132)
                                    zmm2_3 = var_218_1.o
                                    float temp0_137[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    float temp0_138[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    float temp0_139[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    float temp0_140[0x4] = _mm_mul_ps(temp0_137, zmm9_1)
                                    float temp0_141[0x4] = _mm_mul_ps(temp0_138, zmm11)
                                    float temp0_143[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm3_3)
                                    float temp0_147[0x4] = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(_mm_mul_ps(temp0_139, zmm10), temp0_140), 
                                            temp0_141), 
                                        temp0_143)
                                    zmm2_3 = var_208_1.o
                                    float temp0_148[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    float temp0_149[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    float temp0_150[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    float temp0_151[0x4] = _mm_mul_ps(temp0_149, zmm9_1)
                                    float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm11)
                                    float temp0_153[0x4] = _mm_mul_ps(temp0_148, zmm10)
                                    float temp0_155[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm3_3)
                                    float temp0_158[0x4] = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(temp0_153, temp0_151), temp0_152), 
                                        temp0_155)
                                    zmm2_3 = var_1f8_1.o
                                    float temp0_159[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                                    float temp0_160[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                                    float temp0_161[0x4] = _mm_mul_ps(temp0_159, zmm10)
                                    float temp0_162[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                                    float temp0_163[0x4] = _mm_mul_ps(temp0_160, zmm9_1)
                                    float temp0_164[0x4] = _mm_mul_ps(temp0_162, zmm11)
                                    float temp0_165[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                                    float temp0_167[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_161, temp0_163), temp0_164)
                                    float temp0_168[0x4] = __mulps_xmmps_memps(temp0_165, var_238.o)
                                    float temp0_169[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
                                    zmm15[0] = zmm12.d
                                    float temp0_170[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
                                    float temp0_171[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
                                    temp0_170[0] = zmm13.d
                                    float temp0_172[0x4] = _mm_add_ps(temp0_167, temp0_168)
                                    float temp0_173[0x4] = _mm_mul_ps(temp0_171, temp0_147)
                                    float temp0_175[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0), temp0_136)
                                    float temp0_177[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa), temp0_158)
                                    float temp0_178[0x4] = _mm_add_ps(temp0_173, temp0_175)
                                    float temp0_179[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
                                    float temp0_180[0x4] = _mm_mul_ps(temp0_169, temp0_147)
                                    float temp0_182[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0), temp0_136)
                                    float temp0_183[0x4] = _mm_add_ps(temp0_178, temp0_177)
                                    float temp0_184[0x4] = _mm_mul_ps(temp0_179, temp0_147)
                                    float temp0_185[0x4] =
                                        _mm_shuffle_ps(temp0_170, temp0_170, 0xc6)
                                    float temp0_186[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)
                                    float temp0_187[0x4] = _mm_add_ps(temp0_180, temp0_182)
                                    float temp0_188[0x4] = _mm_mul_ps(temp0_186, temp0_158)
                                    float temp0_189[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0)
                                    temp0_185[0] = zmm14.d
                                    float temp0_190[0x4] =
                                        _mm_shuffle_ps(temp0_185, temp0_185, 0xc9)
                                    float temp0_191[0x4] = _mm_mul_ps(temp0_189, temp0_136)
                                    float temp0_192[0x4] = _mm_add_ps(temp0_187, temp0_188)
                                    float temp0_194[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0xff), temp0_172)
                                    float temp0_195[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xaa)
                                    float temp0_196[0x4] = _mm_add_ps(temp0_184, temp0_191)
                                    float temp0_197[0x4] = _mm_mul_ps(temp0_195, temp0_158)
                                    float temp0_198[0x4] = _mm_add_ps(temp0_192, temp0_194)
                                    float temp0_199[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xff)
                                    float temp0_200[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0)
                                    float temp0_201[0x4] =
                                        _mm_shuffle_ps(temp0_190, temp0_190, 0x55)
                                    float temp0_202[0x4] = _mm_add_ps(temp0_196, temp0_197)
                                    float temp0_203[0x4] = _mm_mul_ps(temp0_199, temp0_172)
                                    float temp0_204[0x4] = _mm_mul_ps(temp0_200, temp0_136)
                                    float zmm6_2[0x4] = var_148
                                    float temp0_205[0x4] =
                                        _mm_shuffle_ps(temp0_190, temp0_190, 0xaa)
                                    float temp0_206[0x4] = _mm_add_ps(temp0_202, temp0_203)
                                    float temp0_207[0x4] = _mm_mul_ps(temp0_201, temp0_147)
                                    float temp0_208[0x4] = _mm_mul_ps(temp0_205, temp0_158)
                                    float temp0_209[0x4] = _mm_add_ps(temp0_207, temp0_204)
                                    float temp0_211[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xff), temp0_172)
                                    float var_1b8_2[0x4] = temp0_190
                                    float temp0_212[0x4] =
                                        _mm_shuffle_ps(temp0_190, temp0_190, 0xff)
                                    float temp0_213[0x4] = _mm_add_ps(temp0_209, temp0_208)
                                    float temp0_214[0x4] = _mm_mul_ps(temp0_212, temp0_172)
                                    float temp0_215[0x4] = _mm_add_ps(temp0_183, temp0_211)
                                    float temp0_216[0x4] = _mm_add_ps(temp0_213, temp0_214)
                                    float temp0_217[0x4] =
                                        _mm_shuffle_ps(temp0_215, temp0_215, 0x55)
                                    float temp0_218[0x4] = _mm_shuffle_ps(temp0_215, temp0_215, 0)
                                    float var_138[0x4]
                                    float temp0_219[0x4] = _mm_mul_ps(temp0_217, var_138)
                                    float temp0_220[0x4] =
                                        _mm_shuffle_ps(temp0_215, temp0_215, 0xaa)
                                    float temp0_221[0x4] = _mm_mul_ps(temp0_218, zmm6_2)
                                    float var_128[0x4]
                                    float temp0_222[0x4] = _mm_mul_ps(temp0_220, var_128)
                                    float temp0_223[0x4] =
                                        _mm_shuffle_ps(temp0_215, temp0_215, 0xff)
                                    float temp0_225[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_219, temp0_221), temp0_222)
                                    float var_118[0x4]
                                    float temp0_226[0x4] = _mm_mul_ps(temp0_223, var_118)
                                    float temp0_227[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0)
                                    float temp0_228[0x4] =
                                        _mm_shuffle_ps(temp0_198, temp0_198, 0xaa)
                                    float temp0_229[0x4] = _mm_mul_ps(temp0_227, zmm6_2)
                                    float temp0_230[0x4] = _mm_add_ps(temp0_225, temp0_226)
                                    float temp0_231[0x4] = _mm_mul_ps(temp0_228, var_128)
                                    float temp0_233[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_206, temp0_206, 0x55), var_138)
                                    float var_1a8[0x4] = temp0_230
                                    float temp0_235[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_198, temp0_198, 0x55), var_138)
                                    float temp0_237[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_198, temp0_198, 0xff), var_118)
                                    float temp0_238[0x4] = _mm_add_ps(temp0_235, temp0_229)
                                    float temp0_240[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0), zmm6_2)
                                    float temp0_241[0x4] = _mm_add_ps(temp0_238, temp0_231)
                                    float temp0_242[0x4] =
                                        _mm_shuffle_ps(temp0_206, temp0_206, 0xaa)
                                    float temp0_243[0x4] = _mm_add_ps(temp0_233, temp0_240)
                                    float temp0_244[0x4] = _mm_mul_ps(temp0_242, var_128)
                                    float temp0_245[0x4] =
                                        _mm_shuffle_ps(temp0_206, temp0_206, 0xff)
                                    float temp0_246[0x4] = _mm_add_ps(temp0_241, temp0_237)
                                    float temp0_248[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_216, temp0_216, 0), zmm6_2)
                                    float temp0_249[0x4] = _mm_add_ps(temp0_243, temp0_244)
                                    float temp0_250[0x4] = _mm_mul_ps(temp0_245, var_118)
                                    float var_198_1[0x4] = temp0_246
                                    float temp0_251[0x4] =
                                        _mm_shuffle_ps(temp0_216, temp0_216, 0xaa)
                                    float temp0_253[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_216, temp0_216, 0x55), var_138)
                                    float temp0_254[0x4] = _mm_add_ps(temp0_249, temp0_250)
                                    float temp0_255[0x4] = _mm_mul_ps(temp0_251, var_128)
                                    float temp0_256[0x4] =
                                        _mm_shuffle_ps(temp0_216, temp0_216, 0xff)
                                    float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_248)
                                    float temp0_258[0x4] = _mm_mul_ps(temp0_256, var_118)
                                    float var_188_1[0x4] = temp0_254
                                    float var_178_2[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_257, temp0_255), temp0_258)
                                    void var_158
                                    sub_14077e4a0(&var_158, &var_1a8)
                                    result = sub_142234920(rsi_1, &var_158)
                                    zmm15 = 0x38d1b717
                                
                                zmm11 = 0x3f800000
                                zmm7 = 0x40000000
                    
                    i += 1
                    r14_1 = &r14_1[1]
                while (i s< *(arg1 + 0x818))

__security_check_cookie(result_1 ^ &var_258)
return result
