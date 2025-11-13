// 函数: sub_141f019a0
// 地址: 0x141f019a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rax_2 = sub_141f5e0e0(arg5, arg2)
int16_t* rcx_5
int16_t* var_188
int64_t var_178

if (rax_2 != 0xffffffff)
    int16_t* var_128
    __builtin_memset(&var_128, 0, 0x28)
    int64_t* rax_4
    float zmm6_1[0x4]
    rax_4, zmm6_1 = sub_141f3baa0(arg5, &var_188)
    sub_141de1640(&var_128, arg4, rax_4)
    int16_t* rcx_8 = var_188
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int16_t** rcx_9 = &var_128
    
    if (arg3 != 1)
        float var_38_1[0x4] = zmm6_1
        void var_f8
        int128_t* rax_5
        float zmm10_1[0x4]
        float zmm11_1[0x4]
        float zmm12_1[0x4]
        rax_5, zmm10_1, zmm11_1, zmm12_1 = sub_141dea8e0(rcx_9, &var_f8, rax_2)
        float zmm1_2[0x4] = data_143f3ada0
        arg1[1] = zx.o(0)
        zmm1_2[0].q = zx.o(0) u>> 0x40
        *arg1 = _mm_shuffle_ps(zx.o(0), zmm1_2, 0xc4)
        arg1[2] = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
        float zmm13_1[0x4] = rax_5[2]
        float zmm9_1[0x4] = *(arg5 + 0x1e0)
        float zmm3_1[0x4]
        float zmm5_1[0x4]
        float zmm6_2[0x4]
        float zmm8_1[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13_1, zmm9_1), data_143f3afe0, 1)) == 0)
            zmm6_2 = *(arg5 + 0x1c0)
            zmm3_1 = *rax_5
            zmm5_1 = rax_5[1]
            zmm8_1 = *(arg5 + 0x1d0)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
            float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), temp0_137)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
            float temp0_141[0x4] = _mm_mul_ps(zmm9_1, zmm5_1)
            float temp0_142[0x4] = __mulps_xmmps_memps(temp0_139, data_143f3afa0)
            float temp0_143[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
            float temp0_144[0x4] = _mm_mul_ps(zmm13_1, zmm9_1)
            float temp0_145[0x4] = _mm_mul_ps(temp0_143, zmm3_1)
            arg1[2] = temp0_144
            float temp0_146[0x4] = _mm_add_ps(temp0_142, temp0_145)
            float temp0_148[0x4] = _mm_mul_ps(temp0_140, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e))
            float temp0_151[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa), 
                _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1))
            float temp0_152[0x4] = __mulps_xmmps_memps(temp0_148, data_143f3af90)
            float temp0_153[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xd2)
            float temp0_154[0x4] = __mulps_xmmps_memps(temp0_151, data_143f3af80)
            float temp0_156[0x4] = _mm_add_ps(_mm_add_ps(temp0_146, temp0_152), temp0_154)
            float temp0_157[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
            *arg1 = temp0_156
            float temp0_158[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
            float temp0_159[0x4] = _mm_mul_ps(temp0_157, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
            float temp0_162[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_153, temp0_160), temp0_159)
            float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
            float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
            float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
            float temp0_166[0x4] = _mm_mul_ps(temp0_164, temp0_160)
            float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_158)
            float temp0_168[0x4] = _mm_mul_ps(temp0_163, temp0_143)
            arg1[1] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_166, temp0_167), _mm_add_ps(temp0_168, temp0_141)), 
                zmm8_1)
        else
            zmm1_2 = *(arg5 + 0x1c0)
            zmm8_1 = *(arg5 + 0x1d0)
            float temp0_8[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xc9)
            float var_78_1[0x4] = zmm10_1
            zmm10_1 = data_143f3ada0
            float temp0_10[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
            float var_98_1[0x4] = zmm12_1
            float temp0_11[0x4] = _mm_mul_ps(temp0_8, zmm1_2)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x29), temp0_10)
            float temp0_14[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x1a)
            float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0x12), temp0_14)
            float temp0_19[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_11, temp0_11, 1))
            _mm_mul_ps(zmm13_1, zmm9_1)
            float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_13)
            float temp0_22[0x4] = _mm_sub_ps(temp0_13, temp0_17)
            zmm3_1 = *rax_5
            float temp0_23[0x4] = _mm_sub_ps(zmm10_1, temp0_19)
            float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm9_1)
            float temp0_25[0x4] = _mm_mul_ps(temp0_9, temp0_22)
            float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm9_1)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
            zmm1_2 = __andps_xmmxud_memxud(temp0_26, data_143f3adb0)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, zmm1_2, 0x32)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1_2, 0), temp0_29, 0x82)
            float temp0_32[0x4] = _mm_shuffle_ps(temp0_24, zmm1_2, 0x31)
            float temp0_34[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1_2, 0x10), temp0_32, 0x88)
            float temp0_36[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x12), zmm1_2, 0xe8)
            float temp0_37[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
            zmm10_1[0].q = zmm8_1 u>> 0x40
            float temp0_38[0x4] = _mm_shuffle_ps(zmm8_1, zmm10_1, 0xc4)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
            float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x29)
            float temp0_41[0x4] = _mm_mul_ps(temp0_37, zmm3_1)
            float temp0_42[0x4] = _mm_mul_ps(temp0_27, temp0_40)
            float temp0_43[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x12)
            float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_43)
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0x1a), 
                _mm_shuffle_ps(temp0_41, temp0_41, 1))
            float temp0_49[0x4] = _mm_add_ps(temp0_45, temp0_42)
            float temp0_50[0x4] = _mm_sub_ps(temp0_42, temp0_45)
            float temp0_51[0x4] = _mm_sub_ps(zmm10_1, temp0_48)
            float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm13_1)
            float temp0_53[0x4] = _mm_mul_ps(temp0_39, temp0_50)
            zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_51, zmm13_1), data_143f3adb0)
            float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1_2, 0), 
                _mm_shuffle_ps(temp0_53, zmm1_2, 0x32), 0x82)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_52, zmm1_2, 0x31)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
            float temp0_62[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1_2, 0x10), temp0_59, 0x88)
            float temp0_63[0x4] = _mm_mul_ps(temp0_60, temp0_34)
            float temp0_64[0x4] = _mm_shuffle_ps(temp0_52, temp0_53, 0x12)
            zmm5_1 = rax_5[1]
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, zmm1_2, 0xe8)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_36)
            zmm10_1[0].q = zmm5_1 u>> 0x40
            float temp0_68[0x4] = _mm_shuffle_ps(zmm5_1, zmm10_1, 0xc4)
            float temp0_69[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0)
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_38)
            float temp0_73[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(temp0_69, temp0_31))
            float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_31)
            float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_67)
            float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_36)
            float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_34)
            float temp0_82[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
            float var_168[0x4] = temp0_79
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_34)
            float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_38)
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_78)
            float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_31)
            float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_36)
            float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_86)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
            float temp0_94[0x4] = _mm_add_ps(temp0_85, temp0_89)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_38)
            float temp0_96[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
            int96_t var_158_1 = temp0_92[0].12
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
            float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_34)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_36)
            float temp0_102[0x4] = _mm_mul_ps(temp0_96, temp0_31)
            float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_95)
            float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xff), temp0_38)
            float temp0_106[0x4] = _mm_add_ps(temp0_99, temp0_102)
            int96_t var_148_1 = temp0_103[0].12
            int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_106, temp0_101), temp0_105)[0].12
            float zmm10_2[0x4]
            int512_t zmm11_2
            float zmm12_2[0x4]
            float zmm14_2[0x4]
            zmm10_2, zmm11_2, zmm12_2, zmm14_2 = sub_1407740e0(&var_168, 0x322bcc77)
            zmm14_2 = _mm_and_ps(_mm_cmpeq_ps(zmm14_2, zmm12_2, 2), data_143f3afd0 ^ zmm10_2)
                ^ data_143f3afd0
            zmm14_2[0] = zmm14_2[0] * var_168[0]
            float zmm1_3 = zmm14_2[0] * var_168[1]
            uint32_t zmm0_3[0x4] = zmm14_2
            zmm0_3[0] = zmm0_3[0] f* var_168[2]
            var_168[0] = zmm14_2[0]
            float temp0_111[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0x55)
            var_168[1] = zmm1_3
            zmm1_3 = var_158_1:4.d * temp0_111[0]
            var_168[2] = zmm0_3[0]
            zmm0_3 = var_158_1:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_111[0]
            float zmm3_2 = var_158_1.d * temp0_111[0]
            float zmm2_2[0x4] = var_148_1.d
            var_158_1:4.d = zmm1_3
            var_158_1:8.d = zmm0_3[0]
            zmm0_3 = var_148_1:8.d
            float temp0_112[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xaa)
            zmm1_3 = var_148_1:4.d * temp0_112[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_112[0]
            zmm2_2[0] = zmm2_2[0] * temp0_112[0]
            var_148_1:4.d = zmm1_3
            var_148_1:8.d = zmm0_3[0]
            var_158_1.d = zmm3_2
            var_148_1.d = zmm2_2[0]
            sub_14077e4a0(&var_188, &var_168)
            zmm6_2 = var_188.o
            float zmm5_2[0x4] = data_143f3afc0
            zmm11_2.o = zmm11_1
            float temp0_113[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
            var_178.d = 0x322bcc77
            float temp0_115[0x4] = _mm_add_ps(temp0_113, _mm_shuffle_ps(temp0_113, temp0_113, 0x4e))
            float temp0_117[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0x39), temp0_115)
            float temp0_118[0x4] = _mm_rsqrt_ps(temp0_117)
            float temp0_119[0x4] = _mm_mul_ps(temp0_117, zmm5_2)
            float temp0_124[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_118, temp0_118), temp0_119)), 
                    temp0_118), 
                temp0_118)
            float temp0_127[0x4] =
                _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_124, temp0_124), temp0_119))
            uint32_t zmm0_4[0x4] = var_178.d
            zmm0_4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), temp0_117, 2)
            float temp0_131[0x4] = _mm_add_ps(_mm_mul_ps(temp0_127, temp0_124), temp0_124)
            float temp0_132[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
            zmm5_2 =
                _mm_and_ps(_mm_mul_ps(temp0_131, zmm6_2) ^ data_143f3afb0, zmm0_4) ^ data_143f3afb0
            float temp0_136[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), temp0_132[0].q)
            arg1[2] = zmm12_2
            arg1[1] = temp0_136
            *arg1 = zmm5_2
    else
        sub_141dea8e0(rcx_9, arg1, rax_2)
    
    int128_t var_118
    int64_t rcx_13 = var_118:8.q
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    rcx_5 = var_128
else
    int64_t* rax_3 = sub_140b63b70(&arg_10, &var_178)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* const r8
    
    if (rax_3[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_3
    
    sub_140a2e390(&var_188, u"Invalid Bone Name '%s'", r8)
    int64_t rcx_3 = var_178
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    var_178 = 0
    int32_t var_180
    
    if (var_180 != 0)
        rdi_1 = var_188
    
    sub_140d23f50(rdi_1, 3)
    float zmm1_1[0x4] = data_143f3ada0
    rcx_5 = var_188
    zmm1_1[0].q = zx.o(0) u>> 0x40
    *arg1 = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
    arg1[1] = zx.o(0)
    arg1[2] = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
