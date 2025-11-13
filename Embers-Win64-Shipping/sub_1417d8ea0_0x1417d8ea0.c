// 函数: sub_1417d8ea0
// 地址: 0x1417d8ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x130) != 0)
    return 

float var_e8[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
float zmm14_1[0x4]
float zmm15_1[0x4]
zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1417dbd20(arg1, &var_e8)
void var_118
char* rax
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
rax, zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_140ae16d0(arg3, &var_118, 0)
int32_t rdx_2 = *(arg1 + 0xe8)
int32_t r14_1 = 0

if (rdx_2 s<= 0)
    return 

uint32_t zmm5_1[0x4] = data_143ef8a40
char* rdi_1 = nullptr
int64_t r15_1 = 0
float var_88_1[0x4] = zmm12_1
zmm12_1 = data_143ef8ad0
float var_98_1[0x4] = zmm13_1
float var_c8[0x4]
zmm13_1 = var_c8
float var_b8_1[0x4] = zmm15_1
zmm15_1 = var_e8
float var_28_1[0x4] = zmm6_1
float var_38_1[0x4] = zmm7_1
float var_48_1[0x4] = zmm8_1
float var_58_1[0x4] = zmm9_1
float var_68_1[0x4] = zmm10_1
float var_78_1[0x4] = zmm11_1
float var_a8_1[0x4] = zmm14_1

do
    int64_t r8 = *(arg1 + 0x120)
    
    if (rdi_1[r8] != 0)
        int64_t rcx_1 = sx.q(*(*(arg1 + 0x100) + (rdi_1 << 2)))
        
        if (rcx_1.d s>= 0 && rcx_1.d s< rdx_2 && *(rcx_1 + r8) != 0)
            float (* rdx_3)[0x4] = *(arg1 + 0x110)
            zmm14_1 = *(rdx_3 + r15_1 + 0x20)
            float var_158[0x4]
            float var_d8[0x4]
            float zmm1_1[0x4]
            float zmm3_1[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14_1, zmm13_1), zmm12_1, 1)) != 0)
                zmm10_1 = data_143ef8a30
                float temp0_4[0x4] = _mm_add_ps(zmm15_1, zmm15_1)
                float temp0_5[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 4)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                float temp0_7[0x4] = _mm_mul_ps(zmm15_1, temp0_4)
                float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
                float temp0_10[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
                float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_10)
                float temp0_15[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), 
                    _mm_shuffle_ps(temp0_7, temp0_7, 1))
                zmm3_1 = *(rdx_3 + r15_1)
                float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_9)
                float temp0_17[0x4] = _mm_sub_ps(temp0_9, temp0_12)
                float temp0_18[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm13_1)
                float temp0_20[0x4] = _mm_mul_ps(temp0_6, temp0_17)
                zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_15), zmm13_1), zmm5_1)
                float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x32)
                float temp0_26[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1_1, 0), temp0_24, 0x82)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_19, zmm1_1, 0x31)
                float temp0_29[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0x10), temp0_27, 0x88)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, temp0_20, 0x12), zmm1_1, 0xe8)
                zmm10_1[0].q = var_d8 u>> 0x40
                float temp0_32[0x4] = _mm_shuffle_ps(var_d8, zmm10_1, 0xc4)
                float temp0_33[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                zmm5_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                float temp0_36[0x4] = _mm_mul_ps(zmm3_1, temp0_33)
                float temp0_38[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(temp0_33, temp0_33, 0x29))
                float temp0_40[0x4] = _mm_mul_ps(temp0_35, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
                float temp0_43[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), 
                    _mm_shuffle_ps(temp0_36, temp0_36, 1))
                float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
                float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
                float temp0_46[0x4] = _mm_sub_ps(zmm10_1, temp0_43)
                float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm14_1)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_45)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm14_1), data_143ef8a40)
                float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1_1, 0), 
                    _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32), 0x82)
                float temp0_54[0x4] = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x10)
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
                float temp0_57[0x4] =
                    _mm_shuffle_ps(temp0_54, _mm_shuffle_ps(temp0_47, zmm1_1, 0x31), 0x88)
                float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_29)
                float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, zmm5_1, 0x12)
                zmm5_1 = *(rdx_3 + r15_1 + 0x10)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1_1, 0xe8)
                float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_31)
                zmm10_1[0].q = zmm5_1 u>> 0x40
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm10_1, 0xc4)
                float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
                float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_32)
                float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_26))
                float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
                float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
                float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_31)
                float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
                float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_29)
                float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
                var_158 = temp0_74
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
                float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
                float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_29)
                float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_32)
                float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
                float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
                float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_26)
                float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_31)
                float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
                float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
                float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
                float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
                float temp0_91[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                int96_t var_148_1 = temp0_87[0].12
                float temp0_92[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
                float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_29)
                float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_31)
                float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_26)
                float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
                zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_32)
                float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
                int96_t var_138_1 = temp0_98[0].12
                float var_128_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), zmm5_1)
                zmm10_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
                float zmm2_2[0x4] = var_158[0]
                zmm12_1 = _mm_and_ps(_mm_cmpeq_ps(zmm12_1, _mm_mul_ps(zmm13_1, zmm14_1), 2), 
                    data_143ef8ac0 ^ zmm10_1) ^ data_143ef8ac0
                zmm2_2[0] = zmm2_2[0] * zmm12_1[0]
                float zmm0_2[0x4] = var_158[2]
                float zmm1_2 = var_158[1] * zmm12_1[0]
                zmm0_2[0] = zmm0_2[0] * zmm12_1[0]
                var_158[0] = zmm2_2[0]
                float temp0_107[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                var_158[1] = zmm1_2
                zmm1_2 = var_148_1:4.d * temp0_107[0]
                var_158[2] = zmm0_2[0]
                zmm0_2 = var_148_1:8.d
                zmm0_2[0] = zmm0_2[0] * temp0_107[0]
                float zmm3_2 = var_148_1.d * temp0_107[0]
                zmm2_2 = var_138_1.d
                var_148_1:4.d = zmm1_2
                var_148_1:8.d = zmm0_2[0]
                zmm0_2 = var_138_1:8.d
                float temp0_108[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                zmm1_2 = var_138_1:4.d * temp0_108[0]
                zmm0_2[0] = zmm0_2[0] * temp0_108[0]
                zmm2_2[0] = zmm2_2[0] * temp0_108[0]
                var_138_1:4.d = zmm1_2
                var_138_1:8.d = zmm0_2[0]
                var_148_1.d = zmm3_2
                var_138_1.d = zmm2_2[0]
                uint32_t var_108[0x4]
                sub_14077e4a0(&var_108, &var_158)
                zmm6_1 = var_108
                zmm5_1 = data_143ef8ab0
                rdx_3 = *(arg1 + 0x110)
                zmm12_1 = data_143ef8ad0
                float temp0_109[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                float temp0_111[0x4] =
                    _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                float temp0_113[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm5_1)
                float temp0_120[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_1, 
                            _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                        temp0_114), 
                    temp0_114)
                zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                float temp0_125[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                var_108 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_120), temp0_120), zmm6_1)
                        ^ data_143ef8aa0, 
                    temp0_125) ^ data_143ef8aa0
                zmm5_1 = data_143ef8a40
            
            int64_t rcx_5 = rcx_1 * 6
            zmm14_1 = *(rdx_3 + (rcx_5 << 3) + 0x20)
            
            if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14_1, zmm13_1), zmm12_1, 1))) != 0)
                zmm10_1 = data_143ef8a30
                float temp0_133[0x4] = _mm_add_ps(zmm15_1, zmm15_1)
                float temp0_134[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 4)
                float temp0_135[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
                float temp0_137[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0x29), temp0_134)
                float temp0_138[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
                float temp0_139[0x4] = _mm_mul_ps(temp0_133, zmm15_1)
                float temp0_141[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0x12), temp0_138)
                float temp0_144[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0x1a), 
                    _mm_shuffle_ps(temp0_139, temp0_139, 1))
                zmm3_1 = *(rdx_3 + (rcx_5 << 3))
                float temp0_145[0x4] = _mm_add_ps(temp0_141, temp0_137)
                float temp0_146[0x4] = _mm_sub_ps(temp0_137, temp0_141)
                float temp0_147[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                float temp0_148[0x4] = _mm_mul_ps(temp0_145, zmm13_1)
                float temp0_149[0x4] = _mm_mul_ps(temp0_135, temp0_146)
                zmm1_1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_144), zmm13_1), zmm5_1)
                float temp0_153[0x4] = _mm_shuffle_ps(temp0_149, zmm1_1, 0x32)
                float temp0_155[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_148, zmm1_1, 0), temp0_153, 0x82)
                float temp0_156[0x4] = _mm_shuffle_ps(temp0_148, zmm1_1, 0x31)
                float temp0_158[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_149, zmm1_1, 0x10), temp0_156, 0x88)
                float temp0_160[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_148, temp0_149, 0x12), zmm1_1, 0xe8)
                zmm10_1[0].q = var_d8 u>> 0x40
                float temp0_161[0x4] = _mm_shuffle_ps(var_d8, zmm10_1, 0xc4)
                float temp0_162[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                zmm5_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
                float temp0_164[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                float temp0_165[0x4] = _mm_mul_ps(zmm3_1, temp0_162)
                float temp0_167[0x4] =
                    _mm_mul_ps(temp0_147, _mm_shuffle_ps(temp0_162, temp0_162, 0x29))
                float temp0_169[0x4] =
                    _mm_mul_ps(temp0_164, _mm_shuffle_ps(temp0_162, temp0_162, 0x12))
                float temp0_172[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0x1a), 
                    _mm_shuffle_ps(temp0_165, temp0_165, 1))
                float temp0_173[0x4] = _mm_add_ps(temp0_169, temp0_167)
                float temp0_174[0x4] = _mm_sub_ps(temp0_167, temp0_169)
                float temp0_175[0x4] = _mm_sub_ps(zmm10_1, temp0_172)
                float temp0_176[0x4] = _mm_mul_ps(temp0_173, zmm14_1)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_174)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_175, zmm14_1), data_143ef8a40)
                float temp0_182[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_176, zmm1_1, 0), 
                    _mm_shuffle_ps(zmm5_1, zmm1_1, 0x32), 0x82)
                float temp0_183[0x4] = _mm_shuffle_ps(zmm5_1, zmm1_1, 0x10)
                float temp0_184[0x4] = _mm_shuffle_ps(temp0_176, zmm1_1, 0x31)
                float temp0_185[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0x55)
                float temp0_186[0x4] = _mm_shuffle_ps(temp0_183, temp0_184, 0x88)
                float temp0_187[0x4] = _mm_mul_ps(temp0_185, temp0_158)
                float temp0_188[0x4] = _mm_shuffle_ps(temp0_176, zmm5_1, 0x12)
                zmm5_1 = *(rdx_3 + (rcx_5 << 3) + 0x10)
                float temp0_189[0x4] = _mm_shuffle_ps(temp0_188, zmm1_1, 0xe8)
                float temp0_191[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xaa), temp0_160)
                zmm10_1[0].q = zmm5_1 u>> 0x40
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm10_1, 0xc4)
                float temp0_193[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0)
                float temp0_195[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xff), temp0_161)
                float temp0_197[0x4] = _mm_add_ps(temp0_187, _mm_mul_ps(temp0_193, temp0_155))
                float temp0_199[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0), temp0_155)
                float temp0_200[0x4] = _mm_add_ps(temp0_197, temp0_191)
                float temp0_202[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0xaa), temp0_160)
                float temp0_203[0x4] = _mm_add_ps(temp0_200, temp0_195)
                float temp0_205[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0x55), temp0_158)
                float temp0_206[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xff)
                var_158 = temp0_203
                float temp0_207[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0x55)
                float temp0_208[0x4] = _mm_add_ps(temp0_205, temp0_199)
                float temp0_209[0x4] = _mm_mul_ps(temp0_207, temp0_158)
                float temp0_210[0x4] = _mm_mul_ps(temp0_206, temp0_161)
                float temp0_211[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0)
                float temp0_212[0x4] = _mm_add_ps(temp0_208, temp0_202)
                float temp0_213[0x4] = _mm_mul_ps(temp0_211, temp0_155)
                float temp0_215[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_189, temp0_189, 0xaa), temp0_160)
                float temp0_216[0x4] = _mm_add_ps(temp0_212, temp0_210)
                float temp0_217[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xff)
                float temp0_218[0x4] = _mm_add_ps(temp0_209, temp0_213)
                float temp0_219[0x4] = _mm_mul_ps(temp0_217, temp0_161)
                float temp0_220[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                int96_t var_148_2 = temp0_216[0].12
                float temp0_221[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_222[0x4] = _mm_add_ps(temp0_218, temp0_215)
                float temp0_223[0x4] = _mm_mul_ps(temp0_221, temp0_158)
                float temp0_225[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), temp0_160)
                float temp0_226[0x4] = _mm_mul_ps(temp0_220, temp0_155)
                float temp0_227[0x4] = _mm_add_ps(temp0_222, temp0_219)
                zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_161)
                float temp0_230[0x4] = _mm_add_ps(temp0_223, temp0_226)
                int96_t var_138_2 = temp0_227[0].12
                float var_128_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_230, temp0_225), zmm5_1)
                zmm10_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
                float zmm2_3[0x4] = var_158[0]
                zmm12_1 = _mm_and_ps(_mm_cmpeq_ps(zmm12_1, _mm_mul_ps(zmm13_1, zmm14_1), 2), 
                    data_143ef8ac0 ^ zmm10_1) ^ data_143ef8ac0
                zmm2_3[0] = zmm2_3[0] * zmm12_1[0]
                float zmm0_3[0x4] = var_158[2]
                float zmm1_3 = var_158[1] * zmm12_1[0]
                zmm0_3[0] = zmm0_3[0] * zmm12_1[0]
                var_158[0] = zmm2_3[0]
                float temp0_236[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
                var_158[1] = zmm1_3
                zmm1_3 = var_148_2:4.d * temp0_236[0]
                var_158[2] = zmm0_3[0]
                zmm0_3 = var_148_2:8.d
                zmm0_3[0] = zmm0_3[0] * temp0_236[0]
                float zmm3_3 = var_148_2.d * temp0_236[0]
                zmm2_3 = var_138_2.d
                var_148_2:4.d = zmm1_3
                var_148_2:8.d = zmm0_3[0]
                zmm0_3 = var_138_2:8.d
                float temp0_237[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
                zmm1_3 = var_138_2:4.d * temp0_237[0]
                zmm0_3[0] = zmm0_3[0] * temp0_237[0]
                zmm2_3[0] = zmm2_3[0] * temp0_237[0]
                var_138_2:4.d = zmm1_3
                var_138_2:8.d = zmm0_3[0]
                var_148_2.d = zmm3_3
                var_138_2.d = zmm2_3[0]
                uint32_t var_f8[0x4]
                sub_14077e4a0(&var_f8, &var_158)
                zmm6_1 = var_f8
                zmm5_1 = data_143ef8ab0
                zmm12_1 = data_143ef8ad0
                float temp0_238[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                float temp0_240[0x4] =
                    _mm_add_ps(temp0_238, _mm_shuffle_ps(temp0_238, temp0_238, 0x4e))
                float temp0_242[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x39), temp0_240)
                float temp0_243[0x4] = _mm_rsqrt_ps(temp0_242)
                float temp0_244[0x4] = _mm_mul_ps(temp0_242, zmm5_1)
                float temp0_249[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_1, 
                            _mm_mul_ps(_mm_mul_ps(temp0_243, temp0_243), temp0_244)), 
                        temp0_243), 
                    temp0_243)
                zmm5_1 = _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_249, temp0_249), temp0_244))
                float temp0_254[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_242, 2)
                var_f8 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, temp0_249), temp0_249), zmm6_1)
                        ^ data_143ef8aa0, 
                    temp0_254) ^ data_143ef8aa0
    
    rdx_2 = *(arg1 + 0xe8)
    r14_1 += 1
    zmm5_1 = data_143ef8a40
    rdi_1 = &rdi_1[1]
    r15_1 += 0x30
while (r14_1 s< rdx_2)
