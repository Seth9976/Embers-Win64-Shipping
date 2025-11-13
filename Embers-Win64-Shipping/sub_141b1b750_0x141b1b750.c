// 函数: sub_141b1b750
// 地址: 0x141b1b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d88
int64_t rax_1 = __security_cookie ^ &var_d88
int64_t* rdi = arg5
void* r12 = arg4
void* r13 = arg1
int64_t* rcx = *(arg1 + 8)
int64_t* var_cf0 = rdi
void* result = (*(*rcx + 0x50))(rcx, arg3, r12, rdi)

if (result.b != 0)
    void*** rax_3 = sub_141b20eb0(arg3, r12)
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    int128_t zmm8_1
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    uint32_t zmm14_1[0x4]
    float zmm15_1[0x4]
    result, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_141b258c0(rax_3, rdi)
    void* result_1 = result
    void* result_4 = result
    
    if (result != 0)
        int64_t* var_c98
        sub_141a4a790(rdi, &var_c98, arg3, &arg3[4])
        int64_t* r14_1 = var_c98
        int32_t var_c90
        result = &r14_1[sx.q(var_c90)]
        void* result_2 = result
        
        if (r14_1 != result)
            float var_58_1[0x4] = zmm6_1
            float var_68_1[0x4] = zmm7_1
            int128_t var_78_1 = zmm8_1
            float var_88_1[0x4] = zmm9_1
            float var_98_1[0x4] = zmm10_1
            float var_a8_1[0x4] = zmm11_1
            float var_b8_1[0x4] = zmm12_1
            float var_c8_1[0x4] = zmm13_1
            uint32_t var_d8_1[0x4] = zmm14_1
            float var_e8_1[0x4] = zmm15_1
            
            do
                int64_t var_cd8 = *r14_1
                result = sub_141a3c860(sub_140d3c6e0(&var_cd8))
                void* result_3 = result
                
                if (result != 0)
                    int96_t zmm1_1 = (data_142d4cca0).12
                    int128_t var_c18 = zx.o(0)
                    int32_t var_be8 = (var_be8 & 0xfffffffe) | 2
                    int96_t var_c08_1 = zmm1_1
                    int128_t var_bf8_1 = data_142d4cc90
                    char var_be4_1 = 0
                    int32_t var_be0_1 = 0
                    void var_bd8
                    sub_1422d7fd0(&var_bd8)
                    int64_t var_698_1 = 0
                    char var_658_1 = 0
                    float zmm1_2[0x4] = *(result_3 + 0x1d0)
                    var_c18.d = zmm1_2[0]
                    var_c18:4.d = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)[0]
                    var_c18:8.d = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                    float zmm2_1[0x4] = *(result_3 + 0x1c0)
                    float var_d48[0x4] = zmm2_1
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm2_1, *(result_3 + 0x180), 4))
                            != 0)
                        *(result_3 + 0x180) = zmm2_1
                        void var_c28
                        int32_t* rax_7 = sub_140adf5d0(&var_d48, &var_c28)
                        *(result_3 + 0x190) = *rax_7
                        *(result_3 + 0x198) = rax_7[2]
                    
                    int64_t* rcx_12 = *(r13 + 8)
                    var_c18:0xc.q = *(result_3 + 0x190)
                    var_c08_1:4.d = *(result_3 + 0x198)
                    var_c08_1:8.d = (*(result_3 + 0x1f0))[0]
                    int64_t* var_d60
                    int32_t var_d58
                    float var_d50
                    result = (*(*rcx_12 + 0x58))(rcx_12, result_4, &var_c18, arg2, r12, var_d60, 
                        var_d58, var_d50)
                    int64_t var_6a8
                    
                    if (result.b != 0)
                        zmm2_1 = *(result_3 + 0x1e0)
                        float zmm3_1[0x4] = data_143f2c480
                        float zmm4_1[0x4] = data_143f2c570
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm4_1, _mm_and_ps(zmm2_1, zmm3_1), 1))
                                == 0)
                            zmm9_1 = data_143dbb0c0
                            zmm15_1 = data_143dbb0d0
                            zmm14_1 = data_143dbb0e0
                        else
                            float zmm0_2[0x4] = data_143f2c440
                            zmm9_1 = __mulps_xmmps_memps(*(result_3 + 0x1c0), data_143f2c560)
                            float zmm5_1[0x4] = *(result_3 + 0x1d0)
                            zmm0_2[0].q = zmm2_1 u>> 0x40
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm2_1, zmm0_2, 0xc4)
                            float temp0_10[0x4] = _mm_rcp_ps(temp0_9)
                            float temp0_11[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xc9)
                            float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_10)
                            float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_10)
                            float temp0_14[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xd2)
                            float temp0_16[0x4] =
                                _mm_sub_ps(temp0_13, _mm_mul_ps(temp0_12, temp0_9))
                            float temp0_17[0x4] = _mm_mul_ps(temp0_16, temp0_16)
                            float temp0_18[0x4] = _mm_add_ps(temp0_16, temp0_16)
                            float temp0_19[0x4] = _mm_mul_ps(temp0_17, temp0_9)
                            float temp0_21[0x4] =
                                _mm_cmpeq_ps(_mm_and_ps(temp0_9, zmm3_1), zmm4_1, 2)
                            float temp0_22[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
                            float temp0_23[0x4] = _mm_sub_ps(temp0_18, temp0_19)
                            zmm14_1 = __andps_xmmxud_memxud(
                                _mm_and_ps(zx.o(0) ^ temp0_23, temp0_21) ^ temp0_23, data_143f2c450)
                            float temp0_26[0x4] = _mm_mul_ps(zmm5_1, zmm14_1)
                            float temp0_28[0x4] =
                                _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_26, temp0_26, 0xc9))
                            float temp0_31[0x4] = _mm_sub_ps(
                                _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)), 
                                temp0_28)
                            float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
                            float temp0_34[0x4] =
                                _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_32, temp0_32, 0xd2))
                            float temp0_36[0x4] =
                                _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_32, temp0_32, 0xc9))
                            float temp0_37[0x4] = _mm_mul_ps(temp0_32, temp0_22)
                            zmm15_1 = __andps_xmmxud_memxud(
                                _mm_sub_ps(zx.o(0), 
                                    _mm_add_ps(_mm_sub_ps(temp0_34, temp0_36), 
                                        _mm_add_ps(temp0_37, temp0_26))), 
                                data_143f2c450)
                        
                        zmm10_1 = *(result_3 + 0x1f0)
                        var_d50 = zmm10_1[0]
                        float var_c48[0x4]
                        sub_140ade170(&var_c18:0xc, &var_c48)
                        float zmm2_2[0x4] = var_c18:4.d
                        float zmm6_2[0x4] = data_14399f668
                        float zmm7_2[0x4] = var_c48
                        float temp0_43[0x4] = _mm_unpacklo_ps(var_c18.d, var_c18:8.d[0].q)
                        float temp0_44[0x4] = _mm_unpacklo_ps(zmm6_2, data_14399f670[0].q)
                        float temp0_45[0x4] = _mm_unpacklo_ps(zmm2_2, 0)
                        var_d48[0] = var_c08_1:8.d[0]
                        float temp0_46[0x4] = _mm_unpacklo_ps(temp0_43, temp0_45[0].q)
                        float temp0_47[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                        float zmm1_3[0x4] = data_143f2c530
                        float temp0_48[0x4] = _mm_unpacklo_ps(temp0_44, temp0_47[0].q)
                        uint32_t var_c78[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(temp0_48, zmm14_1), zmm1_3, 1))
                                == 0)
                            float temp0_181[0x4] = _mm_mul_ps(temp0_46, zmm14_1)
                            float temp0_182[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0)
                            float temp0_183[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
                            float temp0_184[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
                            float temp0_186[0x4] =
                                _mm_mul_ps(temp0_182, _mm_shuffle_ps(zmm7_2, zmm7_2, 0x1b))
                            float temp0_187[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xc9)
                            float temp0_189[0x4] =
                                _mm_mul_ps(temp0_184, _mm_shuffle_ps(zmm7_2, zmm7_2, 0x4e))
                            float temp0_190[0x4] = __mulps_xmmps_memps(temp0_186, data_143f2c500)
                            float temp0_191[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
                            float temp0_192[0x4] = __mulps_xmmps_memps(temp0_189, data_143f2c4f0)
                            float temp0_193[0x4] = _mm_mul_ps(temp0_183, zmm7_2)
                            float temp0_194[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xd2)
                            float temp0_196[0x4] =
                                _mm_mul_ps(temp0_191, _mm_shuffle_ps(zmm7_2, zmm7_2, 0xb1))
                            float temp0_197[0x4] = _mm_add_ps(temp0_193, temp0_190)
                            float temp0_198[0x4] = _mm_mul_ps(temp0_48, zmm14_1)
                            float temp0_199[0x4] = __mulps_xmmps_memps(temp0_196, data_143f2c4e0)
                            float var_c58_2[0x4] = temp0_198
                            float temp0_201[0x4] =
                                _mm_add_ps(_mm_add_ps(temp0_197, temp0_192), temp0_199)
                            float temp0_203[0x4] =
                                _mm_mul_ps(temp0_194, _mm_shuffle_ps(temp0_181, temp0_181, 0xc9))
                            var_c78 = temp0_201
                            float temp0_206[0x4] = _mm_sub_ps(
                                _mm_mul_ps(temp0_187, _mm_shuffle_ps(temp0_181, temp0_181, 0xd2)), 
                                temp0_203)
                            float temp0_207[0x4] = _mm_add_ps(temp0_206, temp0_206)
                            float temp0_208[0x4] = _mm_mul_ps(temp0_183, temp0_207)
                            float temp0_210[0x4] =
                                _mm_mul_ps(temp0_187, _mm_shuffle_ps(temp0_207, temp0_207, 0xd2))
                            float temp0_211[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xc9)
                            float temp0_212[0x4] = _mm_add_ps(temp0_181, temp0_208)
                            float var_c68_2[0x4] = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(temp0_210, _mm_mul_ps(temp0_194, temp0_211)), 
                                    temp0_212), 
                                zmm15_1)
                        else
                            zmm11_1 = data_143f2c440
                            float temp0_52[0x4] = _mm_add_ps(zmm9_1, zmm9_1)
                            _mm_mul_ps(temp0_48, zmm14_1)
                            float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm9_1)
                            float temp0_55[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 1)
                            float temp0_57[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x1a), temp0_55)
                            float temp0_58[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 4)
                            float temp0_59[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
                            float temp0_60[0x4] = _mm_sub_ps(zmm11_1, temp0_57)
                            float temp0_62[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x29), temp0_58)
                            float temp0_64[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x12), temp0_59)
                            float temp0_65[0x4] = _mm_mul_ps(temp0_60, zmm14_1)
                            float temp0_66[0x4] = _mm_add_ps(temp0_64, temp0_62)
                            float zmm3_2[0x4] = __andps_xmmxud_memxud(temp0_65, data_143f2c450)
                            float temp0_68[0x4] = _mm_sub_ps(temp0_62, temp0_64)
                            float temp0_69[0x4] = _mm_add_ps(zmm7_2, zmm7_2)
                            float temp0_70[0x4] = _mm_mul_ps(temp0_66, zmm14_1)
                            float temp0_72[0x4] =
                                _mm_mul_ps(temp0_68, _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9))
                            float temp0_75[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_70, zmm3_2, 0), 
                                _mm_shuffle_ps(temp0_72, zmm3_2, 0x32), 0x82)
                            float temp0_76[0x4] = _mm_shuffle_ps(temp0_70, zmm3_2, 0x31)
                            float temp0_77[0x4] = _mm_shuffle_ps(temp0_70, temp0_72, 0x12)
                            float temp0_78[0x4] = _mm_mul_ps(temp0_69, zmm7_2)
                            float temp0_80[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_72, zmm3_2, 0x10), temp0_76, 0x88)
                            float temp0_81[0x4] = _mm_shuffle_ps(temp0_77, zmm3_2, 0xe8)
                            zmm11_1[0].q = zmm15_1 u>> 0x40
                            float temp0_82[0x4] = _mm_shuffle_ps(zmm15_1, zmm11_1, 0xc4)
                            float temp0_83[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 1)
                            float temp0_85[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0x1a), temp0_83)
                            float temp0_86[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 4)
                            float temp0_87[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xff)
                            float temp0_88[0x4] = _mm_sub_ps(zmm11_1, temp0_85)
                            float temp0_90[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x29), temp0_86)
                            float temp0_92[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x12), temp0_87)
                            float temp0_93[0x4] = _mm_mul_ps(temp0_88, temp0_48)
                            float temp0_94[0x4] = _mm_add_ps(temp0_92, temp0_90)
                            zmm3_2 = __andps_xmmxud_memxud(temp0_93, data_143f2c450)
                            float temp0_96[0x4] = _mm_sub_ps(temp0_90, temp0_92)
                            float temp0_97[0x4] = _mm_mul_ps(temp0_94, temp0_48)
                            float temp0_99[0x4] =
                                _mm_mul_ps(temp0_96, _mm_shuffle_ps(temp0_48, temp0_48, 0xc9))
                            float temp0_102[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_97, zmm3_2, 0), 
                                _mm_shuffle_ps(temp0_99, zmm3_2, 0x32), 0x82)
                            float temp0_103[0x4] = _mm_shuffle_ps(temp0_97, zmm3_2, 0x31)
                            float temp0_105[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_99, zmm3_2, 0x10), temp0_103, 0x88)
                            float temp0_107[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_97, temp0_99, 0x12), zmm3_2, 0xe8)
                            float temp0_108[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
                            float temp0_109[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0)
                            float temp0_110[0x4] = _mm_mul_ps(temp0_108, temp0_80)
                            float temp0_111[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0)
                            float temp0_112[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0)
                            zmm11_1[0].q = temp0_46 u>> 0x40
                            float temp0_113[0x4] = _mm_shuffle_ps(temp0_46, zmm11_1, 0xc4)
                            float temp0_115[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_81)
                            float temp0_117[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), temp0_82)
                            float temp0_118[0x4] = _mm_mul_ps(temp0_111, temp0_75)
                            float temp0_119[0x4] = _mm_mul_ps(temp0_112, temp0_75)
                            float temp0_121[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_109, temp0_75), temp0_110)
                            float temp0_123[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0x55), temp0_80)
                            float temp0_124[0x4] = _mm_add_ps(temp0_121, temp0_115)
                            float temp0_125[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xaa)
                            float temp0_126[0x4] = _mm_add_ps(temp0_118, temp0_123)
                            float temp0_127[0x4] = _mm_mul_ps(temp0_125, temp0_81)
                            float temp0_128[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xff)
                            float temp0_129[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
                            float temp0_130[0x4] = _mm_add_ps(temp0_124, temp0_117)
                            float temp0_131[0x4] = _mm_mul_ps(temp0_129, temp0_80)
                            float temp0_132[0x4] = _mm_add_ps(temp0_126, temp0_127)
                            float temp0_134[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0), temp0_75)
                            float temp0_135[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xaa)
                            float temp0_136[0x4] = _mm_add_ps(temp0_119, temp0_131)
                            float temp0_137[0x4] = _mm_mul_ps(temp0_135, temp0_81)
                            float temp0_139[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), temp0_80)
                            float temp0_140[0x4] = _mm_add_ps(temp0_136, temp0_137)
                            float temp0_141[0x4] = _mm_mul_ps(temp0_128, temp0_82)
                            float temp0_142[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xff)
                            float temp0_143[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)
                            float temp0_144[0x4] = _mm_add_ps(temp0_134, temp0_139)
                            float temp0_145[0x4] = _mm_mul_ps(temp0_143, temp0_81)
                            float temp0_146[0x4] = _mm_add_ps(temp0_132, temp0_141)
                            float temp0_147[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xff)
                            float temp0_148[0x4] = _mm_mul_ps(temp0_142, temp0_82)
                            float temp0_149[0x4] = _mm_add_ps(temp0_144, temp0_145)
                            float temp0_150[0x4] = _mm_mul_ps(temp0_147, temp0_82)
                            float var_d38[0x4] = temp0_130
                            float temp0_151[0x4] = _mm_add_ps(temp0_140, temp0_148)
                            int96_t var_d28_1 = temp0_146[0].12
                            float temp0_152[0x4] = _mm_add_ps(temp0_150, temp0_149)
                            int96_t var_d18_1 = temp0_151[0].12
                            int96_t var_d08_1 = temp0_152[0].12
                            int512_t zmm8_3
                            int128_t zmm11_2
                            float zmm12_2[0x4]
                            zmm8_3, zmm11_2, zmm12_2 = sub_1407740e0(&var_d38, 0x322bcc77)
                            float zmm0_4 = var_d38[0]
                            float zmm2_3[0x4] = var_d38[2]
                            uint32_t temp0_154[0x4] = _mm_and_ps(data_143f2c460 ^ zmm11_2, 
                                _mm_cmpeq_ps(zmm1_3, zmm12_2, 2))
                            float zmm1_4[0x4] = var_d38[1]
                            uint32_t zmm4_3[0x4] = temp0_154 ^ data_143f2c460
                            zmm1_4[0] = zmm1_4[0] f* zmm4_3[0]
                            zmm0_4 = zmm0_4 f* zmm4_3[0]
                            var_d38[1] = zmm1_4[0]
                            zmm2_3[0] = zmm2_3[0] f* zmm4_3[0]
                            var_d38[0] = zmm0_4
                            zmm1_4 = var_d28_1:4.d
                            var_d38[2] = zmm2_3[0]
                            float temp0_155[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                            zmm1_4[0] = zmm1_4[0] * temp0_155[0]
                            zmm0_4 = var_d28_1.d * temp0_155[0]
                            float zmm3_3 = var_d28_1:8.d * temp0_155[0]
                            zmm2_3 = var_d18_1:8.d
                            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                            var_d28_1.d = zmm0_4
                            var_d28_1:4.d = zmm1_4[0]
                            zmm1_4 = var_d18_1:4.d
                            zmm1_4[0] = zmm1_4[0] f* zmm4_3[0]
                            zmm0_4 = var_d18_1.d f* zmm4_3[0]
                            zmm2_3[0] = zmm2_3[0] f* zmm4_3[0]
                            var_d18_1.d = zmm0_4
                            var_d18_1:4.d = zmm1_4[0]
                            var_d28_1:8.d = zmm3_3
                            var_d18_1:8.d = zmm2_3[0]
                            uint32_t var_c88[0x4]
                            sub_14077e4a0(&var_c88, &var_d38)
                            float zmm6_3[0x4] = var_c88
                            zmm8_3.o = zx.o(0)
                            float zmm4_4[0x4] = data_143f2c520
                            zmm10_1 = var_d50
                            float temp0_157[0x4] = _mm_mul_ps(zmm6_3, zmm6_3)
                            var_d58 = 0x322bcc77
                            uint32_t temp0_158[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
                            float var_c58_1[0x4] = zmm12_2
                            float temp0_160[0x4] =
                                _mm_add_ps(temp0_157, _mm_shuffle_ps(temp0_157, temp0_157, 0x4e))
                            float temp0_162[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0x39), temp0_160)
                            float temp0_163[0x4] = _mm_rsqrt_ps(temp0_162)
                            float temp0_164[0x4] = _mm_mul_ps(temp0_162, zmm4_4)
                            uint32_t zmm5_3[0x4] = _mm_cmpeq_ps(temp0_158, temp0_162, 2)
                            float temp0_170[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm4_4, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_163, temp0_163), temp0_164)), 
                                    temp0_163), 
                                temp0_163)
                            float temp0_173[0x4] = _mm_sub_ps(zmm4_4, 
                                _mm_mul_ps(_mm_mul_ps(temp0_170, temp0_170), temp0_164))
                            float temp0_174[0x4] = _mm_unpacklo_ps(var_d08_1.d, var_d08_1:8.d[0].q)
                            float temp0_176[0x4] =
                                _mm_add_ps(_mm_mul_ps(temp0_173, temp0_170), temp0_170)
                            float var_c68_1[0x4] =
                                _mm_unpacklo_ps(temp0_174, _mm_unpacklo_ps(var_d08_1:4.d, 0)[0].q)
                            zmm5_3 =
                                _mm_and_ps(zmm5_3, _mm_mul_ps(temp0_176, zmm6_3) ^ data_143f2c510)
                                ^ data_143f2c510
                            var_c88 = zmm5_3
                            var_c78 = zmm5_3
                        
                        uint64_t rax_13 = zx.q(data_14401b1a0)
                        TEB* gsbase
                        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                        zmm10_1[0] = zmm10_1[0] - var_d48[0]
                        int64_t r13_1 = *(ThreadLocalStoragePointer + (rax_13 << 3))
                        
                        if (data_143f2c698 s> *(0x14 + r13_1))
                            _Init_thread_header(&data_143f2c698)
                            
                            if (data_143f2c698 == 0xffffffff)
                                int64_t rax_23 = data_143f2c690
                                
                                if (rax_23 == 0)
                                    rax_23 = sub_141a54240(&data_143f2c690, 0)
                                
                                data_143f2c688 = rax_23
                                _Init_thread_footer(&data_143f2c698)
                        
                        int64_t rdx_8 = data_143f2c688
                        var_d48[0].q = &data_143053328
                        int64_t var_cb8 = rdi[0x5a]
                        int32_t var_cb0_1 = rdi[0x5b].d
                        var_d60 = &var_cb8
                        void* var_d68_1
                        var_d68_1.b = *(rdi + 0x2dc)
                        sub_1405c5900(&rdi[0x1f], rdx_8, &var_d48, result_3, var_d68_1.b, var_d60)
                        result, zmm8_1 = sub_141b00170(rax_3, &var_c78, zmm10_1)
                        void* rsi_1 = *(result_4 + 0x228)
                        
                        if (rsi_1 != 0 && not(zmm8_1.d f>= *(rsi_1 + 0x240)))
                            if (data_143f2c6b0 s> *(0x14 + r13_1))
                                _Init_thread_header(&data_143f2c6b0)
                                
                                if (data_143f2c6b0 == 0xffffffff)
                                    int64_t rax_22 = data_143f2c6a8
                                    
                                    if (rax_22 == 0)
                                        rax_22 = sub_141a54240(&data_143f2c6a8, (rax_22 + 1).d)
                                    
                                    data_143f2c6a0 = rax_22
                                    _Init_thread_footer(&data_143f2c6b0)
                            
                            int64_t rdx_10 = data_143f2c6a0
                            var_d48[0].q = &data_143053350
                            int32_t var_ca0_1 = rdi[0x5b].d
                            int64_t var_ca8
                            var_d60 = &var_ca8
                            var_d68_1.b = *(rdi + 0x2dc)
                            var_ca8 = rdi[0x5a]
                            result = sub_1405c5900(&rdi[0x1f], rdx_10, &var_d48, result_3, 
                                var_d68_1.b, var_d60)
                            zmm6_1 = *(rsi_1 + 0x240)
                            
                            if (not(zmm6_1[0] f<= zmm8_1.d))
                                void var_648
                                sub_1422d6d20(&var_648, rsi_1 + 0x270)
                                void* rbx_1 = &rax_3[2]
                                float var_108_1 = zmm6_1[0]
                                int64_t rdi_2 = sx.q(*(rbx_1 + 0xab0))
                                int32_t rax_20 = (rdi_2 + 1).d
                                *(rbx_1 + 0xab0) = rax_20
                                
                                if (rax_20 s> *(rbx_1 + 0xab4))
                                    sub_141b304f0(rbx_1, rdi_2.d)
                                
                                void* rax_21 = *(rbx_1 + 0xaa0)
                                
                                if (rax_21 != 0)
                                    rbx_1 = rax_21
                                
                                char* rbx_2 = rbx_1 + rdi_2 * 0x550
                                result = sub_1422d6d20(rbx_2, &var_648)
                                *(rbx_2 + 0x540) = var_108_1
                                int64_t var_118
                                
                                if (var_118 != 0)
                                    result = sub_140a74f90(var_118)
                            
                            *(rax_3 + 9) = 1
                        
                        char var_658_3 = 0
                        
                        if (var_6a8 != 0)
                            result = sub_140a74f90(var_6a8)
                        
                        r13 = arg1
                        r12 = arg4
                        rdi = var_cf0
                        result_4 = result_1
                    else
                        char var_658_2 = result.b
                        
                        if (var_6a8 != 0)
                            result = sub_140a74f90(var_6a8)
                
                r14_1 = &r14_1[1]
            while (r14_1 != result_2)

__security_check_cookie(rax_1 ^ &var_d88)
return result
