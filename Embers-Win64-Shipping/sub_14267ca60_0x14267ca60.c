// 函数: sub_14267ca60
// 地址: 0x14267ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* result = arg1
int64_t* r15 = arg4
int128_t* rcx = arg6
int128_t* var_178 = rcx
int32_t i_1 = 0

if (*(result + 0x18) s> 0)
    int64_t r12_1 = 0
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    int32_t var_1fc_1 = 0x3f800000
    int32_t var_1ec_1 = 0x3f800000
    int32_t var_1dc_1 = 0x3f800000
    int32_t var_1cc_1 = 0x3f800000
    int32_t var_1bc_1 = 0x3f800000
    int32_t var_1ac_1 = 0x3f800000
    int32_t var_19c_1 = 0x3f800000
    int32_t var_18c_1 = 0x3f800000
    int64_t var_210_1 = 0
    int32_t i
    
    do
        float zmm1[0x4] = *rcx
        zmm10 = rcx[1]
        void* rbx_1 = *(result + 0x10)
        float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_1)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
        float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_3)
        zmm1 = rcx[2]
        float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
        float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
        float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
        float zmm3[0x4] = data_143f717b0
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
        float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
        float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_11)
        zmm3[0].q = zmm10 u>> 0x40
        float temp0_18[0x4] = _mm_shuffle_ps(zmm10, zmm3, 0xc4)
        float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm1), data_143f717c0)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
        float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x10)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm2, 0xe8)
        float var_168[0x4]
        sub_140ade170(rbx_1 + 0x3c + r12_1, &var_168)
        float zmm5[0x4] = var_168
        float zmm0[0x4] = *(r12_1 + rbx_1 + 0x38)
        float zmm8_1[0x4] = *(r12_1 + rbx_1 + 0x30)
        float zmm6_1[0x4] = data_14399f668
        float temp0_29[0x4] = _mm_unpacklo_ps(*(r12_1 + rbx_1 + 0x34), 0)
        float temp0_30[0x4] = _mm_unpacklo_ps(zmm8_1, zmm0[0].q)
        zmm0 = data_14399f670
        float temp0_31[0x4] = _mm_unpacklo_ps(temp0_30, temp0_29[0].q)
        float temp0_32[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
        float temp0_33[0x4] = _mm_add_ps(zmm5, zmm5)
        float temp0_35[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, zmm0[0].q), temp0_32[0].q)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
        float temp0_39[0x4] = _mm_mul_ps(zmm5, temp0_33)
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0x29)
        float temp0_42[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(temp0_33, temp0_33, 0x12))
        float temp0_43[0x4] = _mm_mul_ps(temp0_36, temp0_40)
        float temp0_45[0x4] = _mm_mul_ps(_mm_add_ps(temp0_42, temp0_43), temp0_35)
        float temp0_46[0x4] = _mm_sub_ps(temp0_43, temp0_42)
        float temp0_49[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
            _mm_shuffle_ps(temp0_39, temp0_39, 1))
        float temp0_50[0x4] = _mm_mul_ps(temp0_38, temp0_46)
        zmm2 = data_143f717b0
        zmm2[0].q = temp0_31 u>> 0x40
        float temp0_51[0x4] = _mm_sub_ps(zmm2, temp0_49)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_31, zmm2, 0xc4)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_51, temp0_35), data_143f717c0)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x32)
        float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, zmm1, 0), temp0_55, 0x82)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_45, zmm1, 0x31)
        float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1, 0x10), temp0_58, 0x88)
        float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_23)
        float temp0_64[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, temp0_50, 0x12), zmm1, 0xe8)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, temp0_28)
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_27)
        float temp0_71[0x4] = _mm_mul_ps(temp0_69, temp0_27)
        float temp0_72[0x4] = _mm_mul_ps(temp0_66, temp0_27)
        float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_62)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xff), temp0_18)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_23)
        float temp0_78[0x4] = _mm_add_ps(temp0_73, temp0_67)
        float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_28)
        float temp0_81[0x4] = _mm_add_ps(temp0_71, temp0_77)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_18)
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        float temp0_85[0x4] = _mm_add_ps(temp0_78, temp0_75)
        float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_23)
        float temp0_87[0x4] = _mm_add_ps(temp0_81, temp0_80)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xaa)
        float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_18)
        float temp0_91[0x4] = _mm_add_ps(temp0_72, temp0_86)
        float temp0_92[0x4] = _mm_mul_ps(temp0_88, temp0_28)
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0)
        float temp0_94[0x4] = _mm_add_ps(temp0_87, temp0_83)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_23)
        float temp0_96[0x4] = _mm_add_ps(temp0_91, temp0_92)
        float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xaa), temp0_28)
        float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_90)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x55), temp0_27)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xff), temp0_18)
        float temp0_106[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_101, temp0_95), temp0_98), temp0_103)
        zmm8_1 = *(r12_1 + rbx_1 + 0x48)
        int32_t temp0_107
        int32_t temp1_1
        temp0_107:temp1_1 = muls.dp.d(0x55555556, arg2[1].d)
        zmm10 = *(r12_1 + rbx_1 + 0x4c)
        zmm9 = *(r12_1 + rbx_1 + 0x50)
        zmm8_1[0] = zmm8_1[0] * 0.5f
        int64_t rbx_2 = sx.q(r15[1].d)
        zmm10[0] = zmm10[0] * 0.5f
        zmm9[0] = zmm9[0] * 0.5f
        int32_t r13_4 = (temp0_107 u>> 0x1f) + temp0_107 + arg7
        int32_t rax_2 = (rbx_2 + 1).d
        r15[1].d = rax_2
        
        if (rax_2 s> *(r15 + 0xc))
            sub_1405a4cf0(r15)
        
        zmm5 = zmm8_1 ^ 0x80000000
        int64_t rax_3 = *r15
        float var_208[0x4]
        var_208[0] = zmm5[0]
        float temp0_108[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
        float zmm4[0x4] = zmm10 ^ 0x80000000
        int64_t var_228_1 = 0
        temp0_108[0] = zmm4[0]
        int32_t var_220_1 = 0
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc6)
        temp0_109[0] = zmm9[0]
        int64_t var_228_2 = 0
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xc9)
        zmm6_1 = zmm9 ^ 0x80000000
        var_208 = temp0_110
        float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xff)
        float temp0_112[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xaa)
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0x55)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0), temp0_85)
        int32_t var_220_2 = 0
        float temp0_116[0x4] = _mm_mul_ps(temp0_111, temp0_106)
        *(rax_3 + (rbx_2 << 2)) = r13_4
        float temp0_117[0x4] = _mm_mul_ps(temp0_112, temp0_99)
        int64_t var_228_3 = 0
        float temp0_118[0x4] = _mm_mul_ps(temp0_113, temp0_94)
        int32_t var_220_3 = 0
        float temp0_119[0x4] = _mm_add_ps(temp0_116, temp0_117)
        float temp0_120[0x4] = _mm_add_ps(temp0_118, temp0_115)
        float var_1f8[0x4]
        var_1f8[0] = zmm8_1[0]
        float temp0_121[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
        temp0_121[0] = zmm4[0]
        float temp0_122[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xc6)
        float temp0_123[0x4] = _mm_add_ps(temp0_119, temp0_120)
        temp0_122[0] = zmm9[0]
        float temp0_124[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xc9)
        var_1f8 = temp0_124
        float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xff), temp0_106)
        float var_158 = temp0_123[0]
        float temp0_127[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0x55)
        float var_150_1 = _mm_shuffle_ps(temp0_123, temp0_123, 0xaa)[0]
        float temp0_129[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x55)
        float var_154_1 = temp0_127[0]
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0)
        float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xaa), temp0_99)
        float temp0_133[0x4] = _mm_mul_ps(temp0_129, temp0_94)
        float temp0_134[0x4] = _mm_mul_ps(temp0_130, temp0_85)
        float temp0_135[0x4] = _mm_add_ps(temp0_126, temp0_132)
        float var_1e8[0x4]
        var_1e8[0] = zmm5[0]
        float temp0_136[0x4] = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
        float temp0_137[0x4] = _mm_add_ps(temp0_133, temp0_134)
        temp0_136[0] = zmm4[0]
        float temp0_138[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xc6)
        temp0_138[0] = zmm6_1[0]
        float temp0_139[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc9)
        var_1e8 = temp0_139
        float temp0_140[0x4] = _mm_add_ps(temp0_137, temp0_135)
        float var_14c_1 = temp0_140[0]
        float temp0_141[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0x55)
        float var_144_1 = _mm_shuffle_ps(temp0_140, temp0_140, 0xaa)[0]
        float temp0_143[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xff)
        float var_148_1 = temp0_141[0]
        float temp0_144[0x4] = _mm_mul_ps(temp0_143, temp0_106)
        int64_t var_228_4 = 0
        float temp0_145[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xaa)
        float temp0_146[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0x55)
        float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0), temp0_85)
        int32_t var_220_4 = 0
        float temp0_149[0x4] = _mm_mul_ps(temp0_145, temp0_99)
        int64_t var_228_5 = 0
        float temp0_150[0x4] = _mm_mul_ps(temp0_146, temp0_94)
        int32_t var_220_5 = 0
        int64_t var_228_6 = 0
        float temp0_151[0x4] = _mm_add_ps(temp0_144, temp0_149)
        int32_t var_220_6 = 0
        float temp0_152[0x4] = _mm_add_ps(temp0_150, temp0_148)
        float var_1d8[0x4]
        var_1d8[0] = zmm8_1[0]
        float temp0_153[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
        temp0_153[0] = zmm4[0]
        float temp0_154[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xc6)
        float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_152)
        temp0_154[0] = zmm6_1[0]
        float temp0_156[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xc9)
        var_1d8 = temp0_156
        float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0x55), temp0_94)
        float var_140_1 = temp0_155[0]
        float temp0_159[0x4] = _mm_shuffle_ps(temp0_155, temp0_155, 0x55)
        float var_138_1 = _mm_shuffle_ps(temp0_155, temp0_155, 0xaa)[0]
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xff)
        float var_13c_1 = temp0_159[0]
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xaa)
        float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_156, temp0_156, 0), temp0_85)
        float temp0_165[0x4] = _mm_mul_ps(temp0_161, temp0_106)
        float temp0_166[0x4] = _mm_mul_ps(temp0_162, temp0_99)
        float temp0_167[0x4] = _mm_add_ps(temp0_158, temp0_164)
        float var_1c8[0x4]
        var_1c8[0] = zmm5[0]
        float temp0_168[0x4] = _mm_shuffle_ps(var_1c8, var_1c8, 0xe1)
        float temp0_169[0x4] = _mm_add_ps(temp0_165, temp0_166)
        temp0_168[0] = zmm10[0]
        float temp0_170[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xc6)
        temp0_170[0] = zmm9[0]
        float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc9)
        var_1c8 = temp0_171
        float temp0_172[0x4] = _mm_add_ps(temp0_169, temp0_167)
        float temp0_174[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0x55), temp0_94)
        float var_134_1 = temp0_172[0]
        float temp0_175[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x55)
        float var_12c_1 = _mm_shuffle_ps(temp0_172, temp0_172, 0xaa)[0]
        float temp0_177[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xff)
        float var_130_1 = temp0_175[0]
        float temp0_178[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xaa)
        float temp0_179[0x4] = _mm_mul_ps(temp0_177, temp0_106)
        float temp0_180[0x4] = _mm_mul_ps(temp0_178, temp0_99)
        float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0), temp0_85)
        float temp0_185[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_179, temp0_180), _mm_add_ps(temp0_174, temp0_182))
        float var_128_1 = temp0_185[0]
        float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0x55)
        float var_120_1 = _mm_shuffle_ps(temp0_185, temp0_185, 0xaa)[0]
        float var_124_1 = temp0_186[0]
        float var_1b8[0x4]
        var_1b8[0] = zmm8_1[0]
        int64_t var_228_7 = 0
        float temp0_188[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
        temp0_188[0] = zmm10[0]
        int32_t var_220_7 = 0
        float temp0_189[0x4] = _mm_shuffle_ps(temp0_188, temp0_188, 0xc6)
        temp0_189[0] = zmm9[0]
        int64_t var_228_8 = 0
        float temp0_190[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc9)
        var_1b8 = temp0_190
        float temp0_191[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xff)
        float temp0_192[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xaa)
        float temp0_193[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0x55)
        float temp0_195[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_190, temp0_190, 0), temp0_85)
        int32_t var_220_8 = 0
        float temp0_196[0x4] = _mm_mul_ps(temp0_191, temp0_106)
        float temp0_197[0x4] = _mm_mul_ps(temp0_192, temp0_99)
        float temp0_198[0x4] = _mm_mul_ps(temp0_193, temp0_94)
        float temp0_201[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_196, temp0_197), _mm_add_ps(temp0_198, temp0_195))
        float var_11c_1 = temp0_201[0]
        float temp0_202[0x4] = _mm_shuffle_ps(temp0_201, temp0_201, 0x55)
        float temp0_203[0x4] = _mm_shuffle_ps(temp0_201, temp0_201, 0xaa)
        float var_118_1 = temp0_202[0]
        float var_114_1 = temp0_203[0]
        float var_1a8[0x4]
        var_1a8[0] = (zmm8_1 ^ 0x80000000)[0]
        float temp0_204[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
        temp0_204[0] = zmm10[0]
        float temp0_205[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xc6)
        temp0_205[0] = zmm6_1[0]
        float temp0_206[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0xc9)
        var_1a8 = temp0_206
        float temp0_207[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xff)
        float temp0_208[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xaa)
        float temp0_209[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0x55)
        float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0), temp0_85)
        float temp0_212[0x4] = _mm_mul_ps(temp0_207, temp0_106)
        float temp0_213[0x4] = _mm_mul_ps(temp0_208, temp0_99)
        float temp0_214[0x4] = _mm_mul_ps(temp0_209, temp0_94)
        float temp0_215[0x4] = _mm_add_ps(temp0_212, temp0_213)
        float temp0_216[0x4] = _mm_add_ps(temp0_214, temp0_211)
        float var_198[0x4]
        var_198[0] = zmm8_1[0]
        float temp0_217[0x4] = _mm_shuffle_ps(var_198, var_198, 0xe1)
        temp0_217[0] = zmm10[0]
        float temp0_218[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xc6)
        float temp0_219[0x4] = _mm_add_ps(temp0_215, temp0_216)
        temp0_218[0] = zmm6_1[0]
        float temp0_220[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0xc9)
        var_198 = temp0_220
        float temp0_222[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0x55), temp0_94)
        float var_110_1 = temp0_219[0]
        float temp0_223[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
        float var_108_1 = _mm_shuffle_ps(temp0_219, temp0_219, 0xaa)[0]
        float temp0_225[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xff)
        float var_10c_1 = temp0_223[0]
        float temp0_226[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xaa)
        float temp0_227[0x4] = _mm_mul_ps(temp0_225, temp0_106)
        float temp0_228[0x4] = _mm_mul_ps(temp0_226, temp0_99)
        float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0), temp0_85)
        int32_t j = 0
        float* rbx_3 = &var_158
        float temp0_233[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_227, temp0_228), _mm_add_ps(temp0_222, temp0_230))
        float var_104_1 = temp0_233[0]
        float temp0_234[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x55)
        float var_fc_1 = _mm_shuffle_ps(temp0_233, temp0_233, 0xaa)[0]
        float var_100_1 = temp0_234[0]
        
        do
            if ((*arg5)[6].b == 0)
                zmm0 = zx.o(*rbx_3)
                float rax_4 = rbx_3[2]
                *(arg5 + 0xc) = zmm0.q
                *arg5 = zmm0.q
                (*arg5)[5] = rax_4
                (*arg5)[2] = rax_4
                (*arg5)[6].b = 1
            else
                zmm3 = *rbx_3
                zmm2 = rbx_3[2]
                float temp0_236[0x4] = __minss_xmmss_memss(zmm3[0], *arg5)
                float temp0_237[0x4] = __maxss_xmmss_memss(zmm3[0], (*arg5)[3])
                *arg5 = temp0_236[0]
                float temp0_238[0x4] = __minss_xmmss_memss((*arg5)[1][0], rbx_3[1])
                (*arg5)[3] = temp0_237[0]
                (*arg5)[1] = temp0_238[0]
                float temp0_239[0x4] = __minss_xmmss_memss(zmm2[0], (*arg5)[2])
                float temp0_240[0x4] = __maxss_xmmss_memss(zmm2[0], (*arg5)[5])
                (*arg5)[2] = temp0_239[0]
                float temp0_241[0x4] = __maxss_xmmss_memss(arg5[1][0][0], rbx_3[1])
                (*arg5)[5] = temp0_240[0]
                arg5[1][0] = temp0_241[0]
            
            int64_t r15_1 = sx.q(arg2[1].d)
            int32_t rax_5 = (r15_1 + 1).d
            arg2[1].d = rax_5
            
            if (rax_5 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            *(*arg2 + (r15_1 << 2)) = *rbx_3
            int64_t r15_2 = sx.q(arg2[1].d)
            int32_t rax_7 = (r15_2 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            *(*arg2 + (r15_2 << 2)) = rbx_3[1]
            int64_t r15_3 = sx.q(arg2[1].d)
            int32_t rax_9 = (r15_3 + 1).d
            arg2[1].d = rax_9
            
            if (rax_9 s> *(arg2 + 0xc))
                sub_1406105e0(arg2)
            
            int32_t rax_10 = rbx_3[2]
            j += 1
            rbx_3 = &rbx_3[3]
            *(*arg2 + (r15_3 << 2)) = rax_10
        while (j u< 8)
        
        int64_t rbx_4 = sx.q(arg3[1].d)
        int32_t rax_11 = (rbx_4 + 1).d
        arg3[1].d = rax_11
        
        if (rax_11 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_4 << 2)) = r13_4 + 3
        int64_t r12_2 = sx.q(arg3[1].d)
        int32_t rax_13 = (r12_2 + 1).d
        arg3[1].d = rax_13
        
        if (rax_13 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (r12_2 << 2)) = r13_4 + 2
        int64_t rbx_6 = sx.q(arg3[1].d)
        int32_t rax_15 = (rbx_6 + 1).d
        arg3[1].d = rax_15
        
        if (rax_15 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_6 << 2)) = r13_4
        int64_t rbx_7 = sx.q(arg3[1].d)
        int32_t rax_17 = (rbx_7 + 1).d
        arg3[1].d = rax_17
        
        if (rax_17 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_7 << 2)) = r13_4 + 3
        int64_t rbx_8 = sx.q(arg3[1].d)
        int32_t rax_19 = (rbx_8 + 1).d
        arg3[1].d = rax_19
        
        if (rax_19 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_8 << 2)) = r13_4
        int64_t rbx_9 = sx.q(arg3[1].d)
        int32_t rax_21 = (rbx_9 + 1).d
        arg3[1].d = rax_21
        
        if (rax_21 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_9 << 2)) = r13_4 + 1
        int64_t rbx_10 = sx.q(arg3[1].d)
        int32_t rax_23 = (rbx_10 + 1).d
        arg3[1].d = rax_23
        
        if (rax_23 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_10 << 2)) = r13_4 + 7
        int64_t rbx_11 = sx.q(arg3[1].d)
        int32_t rax_25 = (rbx_11 + 1).d
        arg3[1].d = rax_25
        
        if (rax_25 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_11 << 2)) = r13_4 + 3
        int64_t rbx_12 = sx.q(arg3[1].d)
        int32_t rax_27 = (rbx_12 + 1).d
        arg3[1].d = rax_27
        
        if (rax_27 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_12 << 2)) = r13_4 + 1
        int64_t rbx_13 = sx.q(arg3[1].d)
        int32_t rax_29 = (rbx_13 + 1).d
        arg3[1].d = rax_29
        
        if (rax_29 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_13 << 2)) = r13_4 + 7
        int64_t rbx_14 = sx.q(arg3[1].d)
        int32_t rax_31 = (rbx_14 + 1).d
        arg3[1].d = rax_31
        
        if (rax_31 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_14 << 2)) = r13_4 + 1
        int32_t rcx_21 = arg3[1].d
        arg3[1].d = rcx_21 + 1
        
        if (rcx_21 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_21) << 2)) = r13_4 + 5
        int32_t rcx_24 = arg3[1].d
        arg3[1].d = rcx_24 + 1
        
        if (rcx_24 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_24) << 2)) = r13_4 + 6
        int32_t rcx_27 = arg3[1].d
        arg3[1].d = rcx_27 + 1
        
        if (rcx_27 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_27) << 2)) = r13_4 + 7
        int32_t rcx_30 = arg3[1].d
        arg3[1].d = rcx_30 + 1
        
        if (rcx_30 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_30) << 2)) = r13_4 + 5
        int32_t rcx_33 = arg3[1].d
        arg3[1].d = rcx_33 + 1
        
        if (rcx_33 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_33) << 2)) = r13_4 + 6
        int32_t rcx_36 = arg3[1].d
        arg3[1].d = rcx_36 + 1
        
        if (rcx_36 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_36) << 2)) = r13_4 + 5
        int32_t rcx_39 = arg3[1].d
        arg3[1].d = rcx_39 + 1
        
        if (rcx_39 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_39) << 2)) = r13_4 + 4
        int32_t rcx_42 = arg3[1].d
        arg3[1].d = rcx_42 + 1
        
        if (rcx_42 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_42) << 2)) = r13_4 + 2
        int32_t rcx_45 = arg3[1].d
        arg3[1].d = rcx_45 + 1
        
        if (rcx_45 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_45) << 2)) = r13_4 + 6
        int32_t rcx_48 = arg3[1].d
        arg3[1].d = rcx_48 + 1
        
        if (rcx_48 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_48) << 2)) = r13_4 + 4
        int32_t rcx_51 = arg3[1].d
        arg3[1].d = rcx_51 + 1
        
        if (rcx_51 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_51) << 2)) = r13_4 + 2
        int32_t rcx_54 = arg3[1].d
        arg3[1].d = rcx_54 + 1
        
        if (rcx_54 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_54) << 2)) = r13_4 + 4
        int32_t rcx_57 = arg3[1].d
        arg3[1].d = rcx_57 + 1
        
        if (rcx_57 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_57) << 2)) = r13_4
        int32_t rcx_60 = arg3[1].d
        arg3[1].d = rcx_60 + 1
        
        if (rcx_60 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_60) << 2)) = r13_4 + 1
        int32_t rcx_63 = arg3[1].d
        arg3[1].d = rcx_63 + 1
        
        if (rcx_63 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_63) << 2)) = r13_4
        int32_t rcx_66 = arg3[1].d
        arg3[1].d = rcx_66 + 1
        
        if (rcx_66 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_66) << 2)) = r13_4 + 4
        int32_t rcx_69 = arg3[1].d
        arg3[1].d = rcx_69 + 1
        
        if (rcx_69 + 1 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (sx.q(rcx_69) << 2)) = r13_4 + 1
        int64_t r15_6 = sx.q(arg3[1].d)
        int32_t rax_67 = (r15_6 + 1).d
        arg3[1].d = rax_67
        
        if (rax_67 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (r15_6 << 2)) = r13_4 + 4
        int64_t rbx_17 = sx.q(arg3[1].d)
        int32_t rax_69 = (rbx_17 + 1).d
        arg3[1].d = rax_69
        
        if (rax_69 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_17 << 2)) = r13_4 + 5
        int64_t rbx_18 = sx.q(arg3[1].d)
        int32_t rax_71 = (rbx_18 + 1).d
        arg3[1].d = rax_71
        
        if (rax_71 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_18 << 2)) = r13_4 + 7
        int64_t rbx_19 = sx.q(arg3[1].d)
        int32_t rax_73 = (rbx_19 + 1).d
        arg3[1].d = rax_73
        
        if (rax_73 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_19 << 2)) = r13_4 + 6
        int64_t rbx_20 = sx.q(arg3[1].d)
        int32_t rax_75 = (rbx_20 + 1).d
        arg3[1].d = rax_75
        
        if (rax_75 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (rbx_20 << 2)) = r13_4 + 2
        int64_t r15_7 = sx.q(arg3[1].d)
        int32_t rax_77 = (r15_7 + 1).d
        arg3[1].d = rax_77
        
        if (rax_77 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (r15_7 << 2)) = r13_4 + 7
        int64_t r15_8 = sx.q(arg3[1].d)
        int32_t rax_79 = (r15_8 + 1).d
        arg3[1].d = rax_79
        
        if (rax_79 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        *(*arg3 + (r15_8 << 2)) = r13_4 + 2
        int64_t rbx_22 = sx.q(arg3[1].d)
        int32_t rax_81 = (rbx_22 + 1).d
        arg3[1].d = rax_81
        
        if (rax_81 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        i = i_1 + 1
        rcx = var_178
        r12_1 = var_210_1 + 0x58
        i_1 = i
        *(*arg3 + (rbx_22 << 2)) = r13_4 + 3
        result = arg1
        var_210_1 = r12_1
        r15 = arg4
    while (i s< *(result + 0x18))

__security_check_cookie(rax_1 ^ &var_258)
return result
