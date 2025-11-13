// 函数: sub_1427b91d0
// 地址: 0x1427b91d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t* rdi = *(arg1 + 0x78)
int64_t result = sx.q(*(arg1 + 0x80))
void* r15_1 = result * 0x70 + rdi

if (rdi != r15_1)
    void* rbx_1 = &rdi[0x14]
    uint32_t zmm6[0x4]
    uint32_t var_28_1[0x4] = zmm6
    float zmm13[0x4]
    float var_98_1[0x4] = zmm13
    float zmm14[0x4] = zx.o(0)
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    float zmm9[0x4]
    float var_58_1[0x4] = zmm9
    float zmm10[0x4]
    float var_68_1[0x4] = zmm10
    float zmm11[0x4]
    float var_78_1[0x4] = zmm11
    float zmm12[0x4]
    float var_88_1[0x4] = zmm12
    float zmm15[0x4]
    float var_b8_1[0x4] = zmm15
    
    do
        bool cond:0_1 = *(arg1 + 0x70) == 0
        zmm13 = data_143f889a0
        zmm6 = data_143f889b0
        zmm13[0].q = zmm14 u>> 0x40
        float temp0_1[0x4] = _mm_shuffle_ps(zmm14, zmm13, 0xc4)
        float zmm1[0x4] = _mm_and_ps(zmm13, zmm6)
        float var_f8[0x4] = temp0_1
        float var_d8_1[0x4] = zmm1
        float var_e8_1[0x4] = zmm14
        float var_138[0x4]
        float var_128[0x4]
        float var_118[0x4]
        float zmm2[0x4]
        float zmm5[0x4]
        
        if (cond:0_1)
            zmm12 = *(rbx_1 + 0x10)
            zmm7 = *(arg1 + 0xb0)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7), data_143f88a60, 1)) == 0)
                zmm5 = *(arg1 + 0x90)
                zmm2 = *(rbx_1 - 0x10)
                float temp0_165[0x4] = __mulps_xmmps_memps(zmm7, *rbx_1)
                float temp0_166[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_166)
                float temp0_169[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                float var_d8_4[0x4] = _mm_mul_ps(zmm12, zmm7)
                float temp0_174[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_168, data_143f889e0), 
                    _mm_mul_ps(zmm6, zmm2))
                float temp0_176[0x4] = _mm_mul_ps(temp0_169, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_179[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_180[0x4] = __mulps_xmmps_memps(temp0_176, data_143f889d0)
                float temp0_181[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                float temp0_182[0x4] = __mulps_xmmps_memps(temp0_179, data_143f889c0)
                float temp0_183[0x4] = _mm_add_ps(temp0_174, temp0_180)
                float temp0_184[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                float temp0_185[0x4] = _mm_add_ps(temp0_183, temp0_182)
                float temp0_187[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xc9), temp0_181)
                var_f8 = temp0_185
                float temp0_190[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xd2), temp0_184), temp0_187)
                float temp0_191[0x4] = _mm_add_ps(temp0_190, temp0_190)
                float temp0_192[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xd2)
                float temp0_193[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xc9)
                float temp0_194[0x4] = _mm_mul_ps(temp0_192, temp0_184)
                float temp0_195[0x4] = _mm_mul_ps(temp0_193, temp0_181)
                float temp0_196[0x4] = _mm_mul_ps(temp0_191, zmm6)
                float var_e8_4[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_194, temp0_195), _mm_add_ps(temp0_196, temp0_165)), 
                    *(arg1 + 0xa0))
            else
                zmm1 = *(arg1 + 0x90)
                zmm8 = *(arg1 + 0xa0)
                float temp0_36[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_37[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                float temp0_38[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                _mm_mul_ps(zmm12, zmm7)
                float temp0_40[0x4] = _mm_mul_ps(temp0_36, zmm1)
                float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x29), temp0_38)
                float temp0_43[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x1a)
                float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x12), temp0_43)
                float temp0_48[0x4] = _mm_add_ps(temp0_44, _mm_shuffle_ps(temp0_40, temp0_40, 1))
                float temp0_49[0x4] = _mm_add_ps(temp0_46, temp0_42)
                float temp0_50[0x4] = _mm_sub_ps(temp0_42, temp0_46)
                float zmm3[0x4] = *(rbx_1 - 0x10)
                float temp0_51[0x4] = _mm_sub_ps(zmm13, temp0_48)
                float temp0_52[0x4] = _mm_mul_ps(temp0_49, zmm7)
                float temp0_53[0x4] = _mm_mul_ps(temp0_37, temp0_50)
                float temp0_54[0x4] = _mm_mul_ps(temp0_51, zmm7)
                float temp0_55[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1 = _mm_and_ps(temp0_54, zmm6)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, zmm1, 0x32)
                float temp0_59[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1, 0), temp0_57, 0x82)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x31)
                float temp0_62[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1, 0x10), temp0_60, 0x88)
                float temp0_64[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, temp0_53, 0x12), zmm1, 0xe8)
                float temp0_65[0x4] = _mm_add_ps(zmm3, zmm3)
                zmm13[0].q = zmm8 u>> 0x40
                float temp0_66[0x4] = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_68[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                float temp0_69[0x4] = _mm_mul_ps(zmm3, temp0_65)
                float temp0_71[0x4] = _mm_mul_ps(temp0_55, _mm_shuffle_ps(temp0_65, temp0_65, 0x29))
                float temp0_73[0x4] = _mm_mul_ps(temp0_67, _mm_shuffle_ps(temp0_65, temp0_65, 0x12))
                float temp0_76[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x1a), 
                    _mm_shuffle_ps(temp0_69, temp0_69, 1))
                zmm6 = _mm_add_ps(temp0_73, temp0_71)
                float temp0_78[0x4] = _mm_sub_ps(temp0_71, temp0_73)
                float temp0_79[0x4] = _mm_sub_ps(zmm13, temp0_76)
                zmm6 = _mm_mul_ps(zmm6, zmm12)
                float temp0_81[0x4] = _mm_mul_ps(temp0_68, temp0_78)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_79, zmm12), data_143f889b0)
                float temp0_86[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), 
                    _mm_shuffle_ps(temp0_81, zmm1, 0x32), 0x82)
                float temp0_87[0x4] = _mm_shuffle_ps(temp0_81, zmm1, 0x10)
                float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
                float temp0_90[0x4] =
                    _mm_shuffle_ps(temp0_87, _mm_shuffle_ps(zmm6, zmm1, 0x31), 0x88)
                float temp0_91[0x4] = _mm_mul_ps(temp0_88, temp0_62)
                zmm6 = _mm_shuffle_ps(zmm6, temp0_81, 0x12)
                zmm5 = *rbx_1
                zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
                float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xaa), temp0_64)
                zmm13[0].q = zmm5 u>> 0x40
                float temp0_96[0x4] = _mm_shuffle_ps(zmm5, zmm13, 0xc4)
                float temp0_97[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xff), temp0_66)
                float temp0_101[0x4] = _mm_add_ps(temp0_91, _mm_mul_ps(temp0_97, temp0_59))
                float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0), temp0_59)
                float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_95)
                float temp0_106[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xaa), temp0_64)
                float temp0_107[0x4] = _mm_add_ps(temp0_104, temp0_99)
                float temp0_109[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0x55), temp0_62)
                float temp0_110[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0xff)
                var_138 = temp0_107
                float temp0_111[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_103)
                float temp0_113[0x4] = _mm_mul_ps(temp0_111, temp0_62)
                float temp0_114[0x4] = _mm_mul_ps(temp0_110, temp0_66)
                float temp0_115[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                float temp0_116[0x4] = _mm_add_ps(temp0_112, temp0_106)
                float temp0_117[0x4] = _mm_mul_ps(temp0_115, temp0_59)
                float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), temp0_64)
                float temp0_120[0x4] = _mm_add_ps(temp0_116, temp0_114)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_122[0x4] = _mm_add_ps(temp0_113, temp0_117)
                zmm6 = _mm_mul_ps(zmm6, temp0_66)
                float temp0_124[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0)
                var_128 = temp0_120
                float temp0_125[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0x55)
                float temp0_126[0x4] = _mm_add_ps(temp0_122, temp0_119)
                float temp0_127[0x4] = _mm_mul_ps(temp0_125, temp0_62)
                float temp0_129[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xaa), temp0_64)
                float temp0_130[0x4] = _mm_mul_ps(temp0_124, temp0_59)
                float temp0_131[0x4] = _mm_add_ps(temp0_126, zmm6)
                float temp0_133[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xff), temp0_66)
                var_118 = temp0_131
                int96_t var_108_1 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(temp0_127, temp0_130), temp0_129), temp0_133)[0].12
                zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_138, 0x322bcc77)
                float zmm2_1[0x4] = var_138[0]
                float zmm1_1 = var_138[1]
                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm11, 2), data_143f88a50 ^ zmm13)
                    ^ data_143f88a50
                zmm2_1[0] = zmm2_1[0] * zmm15[0]
                zmm1_1 = zmm1_1 * zmm15[0]
                uint32_t zmm0_1[0x4] = var_138[2]
                float zmm3_1 = var_128[0]
                zmm0_1[0] = zmm0_1[0] f* zmm15[0]
                var_138[0] = zmm2_1[0]
                float temp0_139[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                var_138[2] = zmm0_1[0]
                zmm0_1 = var_128[2]
                zmm0_1[0] = zmm0_1[0] f* temp0_139[0]
                var_138[1] = zmm1_1
                zmm1_1 = var_128[1] * temp0_139[0]
                zmm3_1 = zmm3_1 * temp0_139[0]
                zmm2_1 = var_118[0]
                var_128[2] = zmm0_1[0]
                zmm0_1 = var_118[2]
                var_128[1] = zmm1_1
                zmm1_1 = var_118[1]
                float temp0_140[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                zmm0_1[0] = zmm0_1[0] f* temp0_140[0]
                zmm2_1[0] = zmm2_1[0] * temp0_140[0]
                zmm1_1 = zmm1_1 * temp0_140[0]
                var_118[2] = zmm0_1[0]
                var_128[0] = zmm3_1
                var_118[0] = zmm2_1[0]
                var_118[1] = zmm1_1
                uint32_t var_148[0x4]
                sub_14077e4a0(&var_148, &var_138)
                zmm5 = var_148
                zmm6 = data_143f88a40
                float temp0_141[0x4] = _mm_mul_ps(zmm5, zmm5)
                float var_d8_3[0x4] = zmm11
                float temp0_143[0x4] =
                    _mm_add_ps(temp0_141, _mm_shuffle_ps(temp0_141, temp0_141, 0x4e))
                float temp0_145[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0x39), temp0_143)
                float temp0_146[0x4] = _mm_rsqrt_ps(temp0_145)
                float temp0_147[0x4] = _mm_mul_ps(temp0_145, zmm6)
                float temp0_152[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_146, temp0_146), temp0_147)), 
                        temp0_146), 
                    temp0_146)
                zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_152, temp0_152), temp0_147))
                float temp0_157[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_145, 2)
                zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_152), temp0_152)
                float temp0_160[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
                zmm6 =
                    _mm_and_ps(_mm_mul_ps(zmm6, zmm5) ^ data_143f88a30, temp0_157) ^ data_143f88a30
                float var_e8_3[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_160[0].q)
                var_148 = zmm6
                var_f8 = zmm6
        else
            zmm14 = sub_140ad7d70(arg1 + 0x90, &var_138, arg1 + 0xc0)
            zmm6 = *(rbx_1 - 0x40)
            zmm7 = *(rbx_1 - 0x20)
            zmm5 = *(rbx_1 - 0x30)
            float temp0_3[0x4] = _mm_shuffle_ps(var_128, var_128, 0x55)
            float temp0_5[0x4] =
                _mm_unpacklo_ps(var_128, _mm_shuffle_ps(var_128, var_128, 0xaa)[0].q)
            zmm2 = var_138
            float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_9[0x4] =
                _mm_add_ps(zmm5, _mm_unpacklo_ps(temp0_5, _mm_unpacklo_ps(temp0_3, 0)[0].q))
            float temp0_10[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_12[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(zmm2, zmm2, 0x1b))
            float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm2)
            float temp0_15[0x4] = __mulps_xmmps_memps(temp0_12, data_143f889e0)
            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            float var_e8_2[0x4] = temp0_9
            float temp0_17[0x4] = _mm_add_ps(temp0_15, temp0_14)
            float temp0_19[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            zmm6 = _mm_mul_ps(zmm6, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_22[0x4] = __mulps_xmmps_memps(temp0_19, data_143f889d0)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm6 = __mulps_xmmps_memps(zmm6, data_143f889c0)
            float temp0_25[0x4] = _mm_add_ps(temp0_17, temp0_22)
            float temp0_26[0x4] = _mm_shuffle_ps(var_118, var_118, 0x55)
            temp0_23[0] = temp0_23[0] * temp0_26[0]
            var_f8 = _mm_add_ps(temp0_25, zmm6)
            zmm7[0] = zmm7[0] * var_118[0]
            float temp0_28[0x4] = _mm_shuffle_ps(var_118, var_118, 0xaa)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            temp0_29[0] = temp0_29[0] * temp0_28[0]
            float temp0_30[0x4] = _mm_unpacklo_ps(temp0_23, 0)
            float var_d8_2[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, temp0_29[0].q), temp0_30[0].q)
        result = sub_140d3e110(rdi)
        
        if (result.b != 0)
            if (*(rbx_1 - 0x48) != 0)
                sub_140d3c6e0(rdi)
            
            result, zmm14 = sub_141f4a580(sub_140d3c6e0(rdi), &var_f8, 0, 0, 0)
        
        rdi = &rdi[0x1c]
        rbx_1 += 0x70
    while (rdi != r15_1)

__security_check_cookie(rax_1 ^ &var_188)
return result
