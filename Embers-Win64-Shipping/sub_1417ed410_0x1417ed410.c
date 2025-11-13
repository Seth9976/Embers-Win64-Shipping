// 函数: sub_1417ed410
// 地址: 0x1417ed410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t result = __security_cookie ^ &var_1d8
int64_t result_1 = result
void* rcx = *(arg1 + 0x18)

if (rcx != 0)
    uint32_t zmm1[0x4] = data_143ef9460
    float zmm0[0x4] = zmm1
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm1, data_143ef9470)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    uint32_t zmm14[0x4]
    uint32_t var_98_1[0x4] = zmm14
    float var_108_1[0x4] = zx.o(0)
    zmm0[0].q = zx.o(0) u>> 0x40
    float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
    float var_118[0x4] = temp0_2
    int64_t rax_1 = *(rcx + 0xc8)
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    int64_t* r11_1 = *(rcx + 0xc0)
    float var_148[0x4]
    
    if (r11_1 == 0)
        var_148 = temp0_2
        int128_t var_138_3 = zx.o(0)
        uint32_t var_128_3[0x4] = temp0_1
    else if ((*(rcx + 0x14c) & 0x1c) != 0)
        sub_141f355c0(rcx, &var_148, &var_118, r11_1, rax_1)
    else
        void var_e8
        float (* rax_2)[0x4] = (*(*r11_1 + 0x408))(r11_1, &var_e8, rax_1, 0)
        zmm8 = rax_2[2]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(temp0_1, zmm8), data_143ef9540, 1)) == 0)
            float zmm5_1[0x4] = *rax_2
            float zmm2[0x4] = var_118
            float temp0_135[0x4] = __mulps_xmmps_memps(zmm8, var_108_1)
            zmm7 = rax_2[1]
            float temp0_136[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_136)
            zmm1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float var_128_2[0x4] = _mm_mul_ps(zmm8, temp0_1)
            float temp0_144[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_138, data_143ef94e0), 
                _mm_mul_ps(temp0_140, zmm2))
            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_149[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            zmm1 = __mulps_xmmps_memps(zmm1, data_143ef94d0)
            float temp0_151[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143ef94c0)
            float temp0_153[0x4] = _mm_add_ps(temp0_144, zmm1)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_155[0x4] = _mm_add_ps(temp0_153, temp0_152)
            float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_135, temp0_135, 0xc9), temp0_151)
            var_148 = temp0_155
            float temp0_160[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_135, temp0_135, 0xd2), temp0_154), temp0_157)
            float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
            zmm1 = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
            zmm1 = _mm_mul_ps(zmm1, temp0_154)
            float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_151)
            float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_140)
            uint32_t var_138_2[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(zmm1, temp0_165), _mm_add_ps(temp0_166, temp0_135)), zmm7)
        else
            float zmm3[0x4] = *rax_2
            float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            zmm1 = _mm_add_ps(zmm3, zmm3)
            float zmm9[0x4] = rax_2[1]
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_10[0x4] = _mm_mul_ps(zmm3, zmm1)
            float temp0_12[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm1, zmm1, 0x29))
            float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm1, zmm1, 0x12))
            float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                _mm_shuffle_ps(temp0_10, temp0_10, 1))
            uint32_t zmm11[0x4] = data_143ef9460
            float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_12)
            zmm1 = _mm_sub_ps(zmm11, temp0_17)
            _mm_mul_ps(zmm8, temp0_1)
            float temp0_21[0x4] = _mm_sub_ps(temp0_12, temp0_14)
            float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm8)
            zmm1 = _mm_mul_ps(zmm1, zmm8)
            float temp0_24[0x4] = _mm_mul_ps(temp0_6, temp0_21)
            uint32_t temp0_25[0x4] = __andps_xmmxud_memxud(zmm1, data_143ef9470)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_25, 0), 
                _mm_shuffle_ps(temp0_24, temp0_25, 0x32), 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_22, temp0_25, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x10), temp0_29, 0x88)
            zmm0 = zmm11
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_24, 0x12), temp0_25, 0xe8)
            zmm1 = var_118
            zmm0[0].q = zmm9 u>> 0x40
            float temp0_34[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
            float temp0_36[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, zmm1)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_37)
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), zmm1)
            float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
                _mm_shuffle_ps(temp0_38, temp0_38, 1))
            float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_40)
            float temp0_48[0x4] = _mm_sub_ps(temp0_40, temp0_43)
            zmm1 = _mm_sub_ps(zmm11, temp0_46)
            float temp0_50[0x4] = _mm_mul_ps(temp0_47, temp0_1)
            float temp0_51[0x4] = _mm_mul_ps(temp0_36, temp0_48)
            uint32_t temp0_53[0x4] =
                __andps_xmmxud_memxud(_mm_mul_ps(zmm1, temp0_1), data_143ef9470)
            float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_53, 0), 
                _mm_shuffle_ps(temp0_51, temp0_53, 0x32), 0x82)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, temp0_53, 0x31)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
            float temp0_60[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_53, 0x10), temp0_57, 0x88)
            zmm0 = zmm11
            float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_31)
            float temp0_63[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_51, 0x12), temp0_53, 0xe8)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
            zmm0[0].q = var_108_1 u>> 0x40
            float temp0_66[0x4] = _mm_shuffle_ps(var_108_1, zmm0, 0xc4)
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
            float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
            float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_28))
            float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_28)
            float temp0_74[0x4] = _mm_add_ps(temp0_71, zmm1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
            float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
            float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float var_198[0x4] = temp0_77
            float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
            float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
            float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
            float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
            float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            float temp0_86[0x4] = _mm_add_ps(temp0_82, zmm1)
            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_33)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
            float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
            float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
            float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
            int96_t var_188_1 = temp0_90[0].12
            float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
            float temp0_96[0x4] = _mm_add_ps(temp0_92, zmm1)
            float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
            float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
            float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
            float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
            float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
            int96_t var_178_1 = temp0_101[0].12
            int96_t var_168_1 = _mm_add_ps(_mm_add_ps(temp0_104, zmm1), temp0_103)[0].12
            int128_t zmm11_1
            float zmm13_1[0x4]
            zmm11_1, zmm13_1, zmm15 = sub_1407740e0(&var_198, 0x322bcc77)
            uint32_t zmm0_1[0x4] = data_143ef9530 ^ zmm11_1
            float temp0_107[0x4] = _mm_cmpeq_ps(zmm15, zmm13_1, 2)
            float zmm2_1[0x4] = var_198[0]
            float zmm1_1 = var_198[1]
            zmm15 = _mm_and_ps(temp0_107, zmm0_1) ^ data_143ef9530
            zmm0_1 = var_198[2]
            zmm2_1[0] = zmm2_1[0] * zmm15[0]
            zmm1_1 = zmm1_1 * zmm15[0]
            zmm0_1[0] = zmm0_1[0] f* zmm15[0]
            var_198[0] = zmm2_1[0]
            float temp0_109[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            var_198[1] = zmm1_1
            zmm1_1 = var_188_1:4.d * temp0_109[0]
            var_198[2] = zmm0_1[0]
            zmm0_1 = var_188_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
            float zmm3_1 = var_188_1.d * temp0_109[0]
            zmm2_1 = var_178_1.d
            var_188_1:4.d = zmm1_1
            var_188_1:8.d = zmm0_1[0]
            zmm0_1 = var_178_1:8.d
            float temp0_110[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm1_1 = var_178_1:4.d * temp0_110[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
            zmm2_1[0] = zmm2_1[0] * temp0_110[0]
            var_178_1:4.d = zmm1_1
            var_178_1:8.d = zmm0_1[0]
            var_188_1.d = zmm3_1
            var_178_1.d = zmm2_1[0]
            uint32_t var_158[0x4]
            sub_14077e4a0(&var_158, &var_198)
            uint32_t zmm6_1[0x4] = var_158
            float zmm5_2[0x4] = data_143ef9520
            uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            float var_128_1[0x4] = zmm13_1
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_2)
            float temp0_117[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
            float temp0_122[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_117)), 
                    zmm1_2), 
                zmm1_2)
            float temp0_125[0x4] =
                _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
            uint32_t zmm0_2[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
            float temp0_130[0x4] = _mm_unpacklo_ps(var_168_1:4.d, 0)
            zmm5_2 =
                _mm_and_ps(_mm_mul_ps(temp0_129, zmm6_1) ^ data_143ef9510, zmm0_2) ^ data_143ef9510
            float var_138_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_168_1.d, var_168_1:8.d[0].q), temp0_130[0].q)
            var_148 = zmm5_2
    
    result = sub_1417f5350(arg1 + 0x20, &var_148, *(arg1 + 0x18), 0)

__security_check_cookie(result_1 ^ &var_1d8)
return result
