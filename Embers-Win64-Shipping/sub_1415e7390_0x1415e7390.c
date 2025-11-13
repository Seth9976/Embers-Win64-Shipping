// 函数: sub_1415e7390
// 地址: 0x1415e7390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t var_208 = 0x3f800000
int64_t var_204 = 0
int32_t var_1f0 = 0x7f7fffff
float var_148[0x4]
float (* rax_2)[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]
rax_2, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
    sub_140ad7d70(arg3, &var_148, arg5)
float temp0[0x4] = __mulps_xmmps_memps(*arg5, data_143ef7590)
float zmm6[0x4] = *arg6
float var_108[0x4] = *rax_2
float var_f8[0x4] = rax_2[1]
float var_e8[0x4] = rax_2[2]
float temp0_3[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, (*(arg6 + 8))[0].q), _mm_unpacklo_ps(*(arg6 + 4), 0)[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_4)
float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_7)
float temp0_10[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_4)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_7), temp0_15), temp0_17)
float var_180 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
char rax_4 = *(arg4 + 8)
int64_t var_188 = (_mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)).q

if ((rax_4 & 0xb) == 0 || (rax_4 & 0x40) != 0)
    *arg1 = 0x3f800000
    *(arg1 + 8) = 0
    *(arg1 + 0x18) = 0x7f7fffff
else
    int32_t var_218 = 0x7f7fffff
    float (* var_1e0_1)[0x4] = &var_108
    int64_t* var_1d8_1 = &var_188
    void arg_38
    void* var_1d0_1 = &arg_38
    int32_t* var_1c8_1 = &var_218
    void var_168
    void* var_1c0_1 = &var_168
    void var_158
    void* var_1b8_1 = &var_158
    int32_t var_214
    int32_t* var_1b0_1 = &var_214
    int32_t* var_1a8_1 = &var_208
    int64_t var_190_1 = arg7
    uint64_t rax_6 = zx.q(*(arg2 + 8))
    var_214 = 0xffffffff
    void* var_1e8 = arg4
    int128_t* var_1a0_1 = arg5
    int128_t* var_198_1 = arg6
    
    if (rax_6.d u> 0x88)
        sub_14153ba60(&var_1e8, arg2)
    else
        switch (rax_6)
            case 0, 2, 5, 6, 7, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                    0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 
                    0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
                    0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 
                    0x3c, 0x3d, 0x3e, 0x3f, 0x42, 0x44, 0x45, 0x46, 0x47, 0x49, 0x4a, 0x4b, 0x4c, 
                    0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 
                    0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 
                    0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 
                    0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x82, 
                    0x84, 0x85, 0x86, 0x87
                sub_14153ba60(&var_1e8, arg2)
            case 1
                sub_141531420(&var_1e8, arg2)
            case 3
                sub_141533360(&var_1e8, arg2)
            case 4
                float var_48_1[0x4] = zmm7
                float var_58_1[0x4] = zmm8
                zmm8 = arg3[2]
                float var_a8_1[0x4] = zmm13
                float var_b8_1[0x4] = zmm14
                zmm14 = *(arg2 + 0x40)
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143ef7530, 1)) == 0)
                    float zmm4[0x4] = *arg3
                    float zmm2[0x4] = *(arg2 + 0x20)
                    float zmm3[0x4] = *(arg2 + 0x30)
                    float temp0_156[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                    float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_156)
                    float temp0_159[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    float temp0_160[0x4] = _mm_mul_ps(zmm3, zmm8)
                    float temp0_161[0x4] = __mulps_xmmps_memps(temp0_158, data_143ef72e0)
                    float temp0_162[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm13 = _mm_mul_ps(zmm14, zmm8)
                    float temp0_165[0x4] = _mm_add_ps(temp0_161, _mm_mul_ps(temp0_162, zmm2))
                    float temp0_167[0x4] = _mm_mul_ps(temp0_159, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    float temp0_171[0x4] = __mulps_xmmps_memps(temp0_167, data_143ef72d0)
                    float temp0_172[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                    float temp0_173[0x4] = __mulps_xmmps_memps(temp0_170, data_143ef72c0)
                    float temp0_174[0x4] = _mm_add_ps(temp0_165, temp0_171)
                    float temp0_175[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                    float temp0_177[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xd2), temp0_175)
                    zmm6 = _mm_add_ps(temp0_174, temp0_173)
                    float temp0_181[0x4] = _mm_sub_ps(temp0_177, 
                        _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xc9), temp0_172))
                    float temp0_182[0x4] = _mm_add_ps(temp0_181, temp0_181)
                    float temp0_183[0x4] = _mm_mul_ps(temp0_162, temp0_182)
                    float temp0_185[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xd2), temp0_175)
                    float temp0_186[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xc9)
                    float temp0_187[0x4] = _mm_add_ps(temp0_183, temp0_160)
                    zmm7 = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_185, _mm_mul_ps(temp0_186, temp0_172)), 
                            temp0_187), 
                        arg3[1])
                else
                    float zmm1[0x4] = *arg3
                    float temp0_27[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    float temp0_28[0x4] = _mm_add_ps(zmm1, zmm1)
                    float var_68_1[0x4] = zmm9
                    zmm9 = arg3[1]
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                    _mm_mul_ps(zmm14, zmm8)
                    float var_88_1[0x4] = zmm11
                    zmm11 = data_143ef72f0
                    float temp0_31[0x4] = _mm_mul_ps(temp0_28, zmm1)
                    float temp0_33[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x29), temp0_29)
                    float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x1a)
                    float temp0_37[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x12), temp0_34)
                    float temp0_39[0x4] =
                        _mm_add_ps(temp0_35, _mm_shuffle_ps(temp0_31, temp0_31, 1))
                    float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_33)
                    float temp0_41[0x4] = _mm_sub_ps(temp0_33, temp0_37)
                    float temp0_42[0x4] = _mm_sub_ps(zmm11, temp0_39)
                    float temp0_43[0x4] = _mm_mul_ps(temp0_40, zmm8)
                    float temp0_44[0x4] = _mm_mul_ps(temp0_27, temp0_41)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_42, zmm8), data_143ef7300)
                    float temp0_47[0x4] = _mm_shuffle_ps(temp0_44, zmm1, 0x32)
                    float temp0_49[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm1, 0), temp0_47, 0x82)
                    float temp0_50[0x4] = _mm_shuffle_ps(temp0_43, zmm1, 0x31)
                    float temp0_52[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_44, zmm1, 0x10), temp0_50, 0x88)
                    float temp0_54[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, temp0_44, 0x12), zmm1, 0xe8)
                    zmm1 = *(arg2 + 0x20)
                    zmm11[0].q = zmm9 u>> 0x40
                    float temp0_55[0x4] = _mm_add_ps(zmm1, zmm1)
                    float temp0_56[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                    float temp0_57[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_58[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                    float temp0_59[0x4] = _mm_mul_ps(temp0_55, zmm1)
                    float temp0_61[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x29), temp0_58)
                    float temp0_62[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    float temp0_64[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x12), temp0_62)
                    float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x1a), 
                        _mm_shuffle_ps(temp0_59, temp0_59, 1))
                    float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_61)
                    float temp0_69[0x4] = _mm_sub_ps(temp0_61, temp0_64)
                    float temp0_70[0x4] = _mm_sub_ps(zmm11, temp0_67)
                    float temp0_71[0x4] = _mm_mul_ps(temp0_68, zmm14)
                    float temp0_72[0x4] = _mm_mul_ps(temp0_57, temp0_69)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_70, zmm14), data_143ef7300)
                    float temp0_77[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_71, zmm1, 0), 
                        _mm_shuffle_ps(temp0_72, zmm1, 0x32), 0x82)
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_71, zmm1, 0x31)
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x55)
                    float temp0_81[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_72, zmm1, 0x10), temp0_78, 0x88)
                    float temp0_82[0x4] = _mm_mul_ps(temp0_79, temp0_52)
                    float temp0_83[0x4] = _mm_shuffle_ps(temp0_71, temp0_72, 0x12)
                    float zmm5[0x4] = *(arg2 + 0x30)
                    float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, zmm1, 0xe8)
                    float temp0_86[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xaa), temp0_54)
                    zmm11[0].q = zmm5 u>> 0x40
                    float temp0_87[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                    float temp0_88[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0)
                    float temp0_90[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0xff), temp0_56)
                    float temp0_92[0x4] = _mm_add_ps(temp0_82, _mm_mul_ps(temp0_88, temp0_49))
                    float temp0_94[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0), temp0_49)
                    float temp0_95[0x4] = _mm_add_ps(temp0_92, temp0_86)
                    float temp0_97[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xaa), temp0_54)
                    float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_90)
                    float temp0_100[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0x55), temp0_52)
                    float temp0_101[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0xff)
                    var_148 = temp0_98
                    float temp0_102[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
                    float temp0_103[0x4] = _mm_add_ps(temp0_100, temp0_94)
                    float temp0_104[0x4] = _mm_mul_ps(temp0_102, temp0_52)
                    float temp0_105[0x4] = _mm_mul_ps(temp0_101, temp0_56)
                    float temp0_106[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0)
                    float temp0_107[0x4] = _mm_add_ps(temp0_103, temp0_97)
                    float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_49)
                    float temp0_110[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xaa), temp0_54)
                    float temp0_111[0x4] = _mm_add_ps(temp0_107, temp0_105)
                    float temp0_112[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
                    float temp0_113[0x4] = _mm_add_ps(temp0_104, temp0_108)
                    float temp0_114[0x4] = _mm_mul_ps(temp0_112, temp0_56)
                    float temp0_115[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0)
                    int96_t var_138_1 = temp0_111[0].12
                    float temp0_116[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
                    float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_110)
                    float temp0_118[0x4] = _mm_mul_ps(temp0_116, temp0_52)
                    float temp0_120[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xaa), temp0_54)
                    float temp0_121[0x4] = _mm_mul_ps(temp0_115, temp0_49)
                    float temp0_122[0x4] = _mm_add_ps(temp0_117, temp0_114)
                    float temp0_124[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xff), temp0_56)
                    float temp0_125[0x4] = _mm_add_ps(temp0_118, temp0_121)
                    int96_t var_128_1 = temp0_122[0].12
                    int96_t var_118_1 =
                        _mm_add_ps(_mm_add_ps(temp0_125, temp0_120), temp0_124)[0].12
                    int512_t zmm9_1
                    int512_t zmm10_1
                    float zmm11_1[0x4]
                    int512_t zmm12_1
                    float zmm15_1[0x4]
                    zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm15_1 =
                        sub_1407740e0(&var_148, 0x322bcc77)
                    zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143ef7520 ^ zmm11_1)
                        ^ data_143ef7520
                    float zmm2_1[0x4] = var_148[0]
                    float zmm1_2 = var_148[1]
                    uint32_t zmm0_2[0x4] = var_148[2]
                    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                    zmm1_2 = zmm1_2 * zmm15_1[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm15_1[0]
                    var_148[0] = zmm2_1[0]
                    float temp0_130[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                    var_148[1] = zmm1_2
                    zmm1_2 = var_138_1:4.d * temp0_130[0]
                    var_148[2] = zmm0_2[0]
                    zmm0_2 = var_138_1:8.d
                    zmm0_2[0] = zmm0_2[0] f* temp0_130[0]
                    float zmm3_1 = var_138_1.d * temp0_130[0]
                    zmm2_1 = var_128_1.d
                    var_138_1:4.d = zmm1_2
                    var_138_1:8.d = zmm0_2[0]
                    zmm0_2 = var_128_1:8.d
                    float temp0_131[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                    zmm1_2 = var_128_1:4.d * temp0_131[0]
                    zmm0_2[0] = zmm0_2[0] f* temp0_131[0]
                    zmm2_1[0] = zmm2_1[0] * temp0_131[0]
                    var_128_1:4.d = zmm1_2
                    var_128_1:8.d = zmm0_2[0]
                    var_138_1.d = zmm3_1
                    var_128_1.d = zmm2_1[0]
                    uint32_t var_178[0x4]
                    sub_14077e4a0(&var_178, &var_148)
                    uint32_t zmm5_1[0x4] = var_178
                    zmm6 = data_143ef72b0
                    zmm12_1.o = zmm12
                    zmm10_1.o = zmm10
                    zmm9_1.o = var_68_1
                    uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                    zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                    uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                    zmm1_3 = _mm_rsqrt_ps(zmm4_1)
                    uint32_t zmm3_2[0x4] = _mm_mul_ps(zmm4_1, zmm6)
                    float temp0_143[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_2)), 
                            zmm1_3), 
                        zmm1_3)
                    float temp0_146[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_143, temp0_143), zmm3_2))
                    uint32_t zmm0_3[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
                    float temp0_150[0x4] = _mm_add_ps(_mm_mul_ps(temp0_146, temp0_143), temp0_143)
                    float temp0_151[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
                    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_150, zmm5_1) ^ data_143ef72a0, zmm0_3)
                        ^ data_143ef72a0
                    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), 
                        temp0_151[0].q)
                
                void* rcx_16 = *(arg2 + 0x10)
                var_148 = zmm6
                float var_138_2[0x4] = zmm7
                float var_128_2[0x4] = zmm13
                int512_t zmm7_1
                int512_t zmm8_1
                int512_t zmm13_1
                int512_t zmm14_1
                int512_t zmm15_2
                zmm7_1, zmm8_1, zmm13_1, zmm14_1, zmm15_2 =
                    sub_1415462f0(rcx_16, &var_148, &var_1e8)
                zmm15_2.o = zmm15
                zmm14_1.o = var_b8_1
                zmm13_1.o = var_a8_1
                zmm8_1.o = var_58_1
                zmm7_1.o = var_48_1
            case 8
                sub_14153d9a0(&var_1e8, arg2)
            case 0x40
                sub_14153ba60(&var_1e8, *(arg2 + 0x10))
            case 0x41
                sub_141531420(&var_1e8, *(arg2 + 0x10))
            case 0x43
                sub_141533360(&var_1e8, *(arg2 + 0x10))
            case 0x48
                sub_14153d9a0(&var_1e8, *(arg2 + 0x10))
            case 0x80
                sub_1415382d0(&var_1e8, arg2)
            case 0x81
                sub_141534ef0(&var_1e8, arg2)
            case 0x83
                sub_1415368e0(&var_1e8, arg2)
            case 0x88
                sub_141539cc0(&var_1e8, arg2)
    
    *arg1 = var_208.o
    int64_t var_1f8
    arg1[1].q = var_1f8
    *(arg1 + 0x18) = var_1f0

__security_check_cookie(rax_1 ^ &var_238)
return arg1
