// 函数: sub_1423120f0
// 地址: 0x1423120f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
uint64_t* rbx = arg3
uint64_t* var_1a8 = rbx
int128_t* r14 = arg2
void* rax_2 = sub_141f64a80(arg1)
uint64_t result = *(arg1 + 0x430)
void* const rsi = result + 0x188

if (result == 0)
    rsi = nullptr

if (rax_2 == 0 || rsi == 0)
    result.b = 0
else
    int64_t r12_3 = (sx.q(*(arg1 + 0x494)) + 0x45) * 2
    char rax_3 = sub_140d3e110(arg1 + 0x438)
    float zmm6[0x4] = *(arg1 + 0x1e0)
    float zmm0[0x4] = *(r14 + 8)
    int128_t zmm15 = zx.o(0)
    float zmm2[0x4] = *(r14 + 4)
    float zmm8[0x4] = *r14
    float temp0_1[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f57950)
    void** r14_1 = *(rax_2 + 0x40)
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q), 
        *(arg1 + 0x1d0))
    float temp0_6[0x4] = _mm_rcp_ps(zmm6)
    int32_t result_1 = 0xffffffff
    void* var_1f8_1 = nullptr
    result = &r14_1[sx.q(*(rax_2 + 0x48))]
    zmm8 = __andps_xmmxud_memxud(temp0_5, data_143f57820)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_9)
    uint32_t var_198[0x4]
    var_198[0].q = result
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_mul_ps(temp0_6, temp0_6)
    float temp0_17[0x4] = _mm_add_ps(temp0_6, temp0_6)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm6)
    float temp0_20[0x4] = _mm_mul_ps(temp0_14, temp0_18)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xd2)
    float temp0_22[0x4] = _mm_sub_ps(temp0_17, temp0_19)
    float temp0_23[0x4] = _mm_mul_ps(temp0_21, temp0_8)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
    float temp0_25[0x4] = _mm_mul_ps(temp0_22, temp0_22)
    float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_22)
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm6)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f57850), data_143f57940, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, temp0_27)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_9))
    zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
    zmm6 = 0x7f7fffff
    float var_208 = temp0_36[0]
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    float var_200_1 = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)[0]
    float var_204_1 = temp0_37[0]
    
    if (r14_1 == result)
        result.b = 0
    else
        uint32_t var_178[0x4]
        float var_148[0x4]
        void var_118
        char rbx_2
        void* rdi_1
        float zmm1[0x4]
        float zmm11[0x4]
        float zmm13[0x4]
        float zmm14[0x4]
        
        while (true)
            void* r15_1 = *r14_1
            rbx[4].d = 0x7f7fffff
            int32_t result_2 = -1
            int64_t rbx_1 = *(r15_1 + 0x80)
            int32_t rcx_1
            rcx_1.b = sub_140b5b8a0(rbx_1.d, 0) == 0
            uint32_t rax_7
            rax_7.b = (rbx_1 u>> 0x20).d != 0
            rcx_1.b |= rax_7.b
            
            if (rcx_1.b != 0)
                void* const rcx_5
                
                if (*(rsi + 0x98) == *(rsi + 0xc4))
                label_142312380:
                    rcx_5 = nullptr
                else
                    int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                    void* r8 = rsi + 0xc8
                    void* rcx_3 = *(r8 + 8)
                    
                    if (rcx_3 != 0)
                        r8 = rcx_3
                    
                    int32_t rax_12 = *(r8 + (((sx.q(*(rsi + 0xd8)) - 1) & sx.q(rax_10)) << 2))
                    
                    if (rax_12 == 0xffffffff)
                    label_142312380_1:
                        rcx_5 = nullptr
                    else
                        int64_t r8_1 = *(rsi + 0x90)
                        
                        while (true)
                            int64_t rdx_3 = sx.q(rax_12) * 5
                            rcx_5 = r8_1 + (rdx_3 << 2)
                            
                            if (*(r8_1 + (rdx_3 << 2)) == rbx_1)
                                break
                            
                            rax_12 = *(rcx_5 + 0xc)
                            
                            if (rax_12 == 0xffffffff)
                                goto label_142312380_2
                        
                        if (rax_12 == 0xffffffff)
                        label_142312380_2:
                            rcx_5 = nullptr
                
                void* rax_13 = rcx_5 + 8
                
                if (rcx_5 == 0)
                    rax_13 = nullptr
                
                if (rax_13 != 0)
                    result_2 = *rax_13
            
            if (result_2 != 0xffffffff)
                rbx_2 = rax_3
                int128_t* rax_14
                
                if (rbx_2 == 0)
                    int64_t rax_16 = *(arg1 + (r12_3 << 3))
                    int64_t rcx_8 = sx.q(result_2) * 6
                    zmm1 = *(rax_16 + (rcx_8 << 3) + 0x10)
                    var_178 = *(rax_16 + (rcx_8 << 3))
                    rax_14 = &var_178
                    float var_158_1[0x4] = *(rax_16 + (rcx_8 << 3) + 0x20)
                    float var_168_1[0x4] = zmm1
                else
                    rax_14, zmm6, arg5, arg6, zmm11, arg7, zmm13, zmm14, zmm15 =
                        sub_141f5e780(arg1, &var_118, result_2)
                
                var_148 = *rax_14
                zmm2 = rax_14[1]
                float var_138_1[0x4] = zmm2
                float var_128_1[0x4] = rax_14[2]
                
                if (arg4 == 0)
                    zmm0, zmm6, arg5, arg6, zmm11, arg7, zmm13, zmm14, zmm15 =
                        sub_142232e70(r15_1, &var_208, &var_148)
                    zmm1 = zmm0
                else
                    zmm2[0] = zmm2[0] - var_208
                    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                    zmm1[0] = zmm1[0] - var_204_1
                    float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                    temp0_40[0] = temp0_40[0] - var_200_1
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    temp0_40[0] = temp0_40[0] * temp0_40[0]
                    zmm1[0] = zmm1[0] + zmm2[0]
                    zmm1[0] = zmm1[0] + temp0_40[0]
            
            if (result_2 == 0xffffffff || zmm1[0] >= zmm6[0])
                rdi_1 = var_1f8_1
                result = zx.q(result_1)
            else
                result = zx.q(result_2)
                var_1f8_1 = r15_1
                result_1 = result.d
                rdi_1 = r15_1
                zmm6 = zmm1
                
                if (zmm1[0] f<= zmm15.d)
                    break
            
            rbx = var_1a8
            r14_1 = &r14_1[1]
            
            if (r14_1 == var_198[0].q)
                rbx_2 = rax_3
                break
        
        if (result.d s< 0)
            result.b = 0
        else
            int128_t* rax_17
            
            if (rbx_2 == 0)
                float zmm7[0x4] = *(arg1 + 0x1e0)
                float var_c8_1[0x4] = zmm14
                float (* rcx_13)[0x4] = sx.q(result.d) * 0x30 + *(arg1 + (r12_3 << 3))
                zmm14 = rcx_13[2]
                float zmm5[0x4]
                
                if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm7), 
                        data_143f578e0, 1)) == 0)
                    zmm5 = *(arg1 + 0x1c0)
                    zmm2 = *rcx_13
                    float zmm4[0x4] = rcx_13[1]
                    float temp0_173[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                    float temp0_175[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_173)
                    float temp0_176[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                    float temp0_177[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    float temp0_178[0x4] = _mm_mul_ps(zmm4, zmm7)
                    float temp0_179[0x4] = __mulps_xmmps_memps(temp0_175, data_143f578d0)
                    float temp0_180[0x4] = _mm_mul_ps(temp0_177, zmm2)
                    float temp0_181[0x4] = _mm_mul_ps(zmm14, zmm7)
                    float temp0_182[0x4] = _mm_add_ps(temp0_179, temp0_180)
                    float temp0_184[0x4] = _mm_mul_ps(temp0_176, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    float temp0_187[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    float temp0_188[0x4] = __mulps_xmmps_memps(temp0_184, data_143f578c0)
                    float temp0_189[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xd2)
                    float temp0_190[0x4] = __mulps_xmmps_memps(temp0_187, data_143f578b0)
                    float var_158_3[0x4] = temp0_181
                    float temp0_192[0x4] = _mm_add_ps(_mm_add_ps(temp0_182, temp0_188), temp0_190)
                    float temp0_193[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xc9)
                    var_178 = temp0_192
                    float temp0_194[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    float temp0_195[0x4] = _mm_mul_ps(temp0_193, temp0_194)
                    float temp0_196[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    float temp0_198[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_189, temp0_196), temp0_195)
                    float temp0_199[0x4] = _mm_add_ps(temp0_198, temp0_198)
                    float temp0_200[0x4] = _mm_mul_ps(temp0_177, temp0_199)
                    float temp0_202[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_199, temp0_199, 0xd2), temp0_196)
                    float temp0_203[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xc9)
                    float temp0_204[0x4] = _mm_add_ps(temp0_200, temp0_178)
                    float var_168_3[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(temp0_202, _mm_mul_ps(temp0_203, temp0_194)), 
                            temp0_204), 
                        *(arg1 + 0x1d0))
                else
                    zmm1 = *(arg1 + 0x1c0)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                    float temp0_45[0x4] = _mm_add_ps(zmm1, zmm1)
                    float var_78_1[0x4] = arg5
                    arg5 = *(arg1 + 0x1d0)
                    float temp0_46[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                    float temp0_47[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    float temp0_48[0x4] = _mm_mul_ps(zmm1, temp0_45)
                    float temp0_50[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x29), temp0_46)
                    float temp0_52[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x12), temp0_47)
                    float temp0_55[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1a), 
                        _mm_shuffle_ps(temp0_48, temp0_48, 1))
                    float var_98_1[0x4] = zmm11
                    zmm11 = data_143f57810
                    float var_b8_1[0x4] = zmm13
                    float temp0_56[0x4] = _mm_add_ps(temp0_52, temp0_50)
                    float temp0_57[0x4] = _mm_sub_ps(zmm11, temp0_55)
                    _mm_mul_ps(zmm14, zmm7)
                    float temp0_59[0x4] = _mm_sub_ps(temp0_50, temp0_52)
                    float temp0_60[0x4] = _mm_mul_ps(temp0_56, zmm7)
                    float temp0_61[0x4] = _mm_mul_ps(temp0_57, zmm7)
                    float temp0_62[0x4] = _mm_mul_ps(temp0_44, temp0_59)
                    zmm1 = __andps_xmmxud_memxud(temp0_61, data_143f57820)
                    float temp0_66[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, zmm1, 0), 
                        _mm_shuffle_ps(temp0_62, zmm1, 0x32), 0x82)
                    float temp0_67[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0x31)
                    float temp0_69[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_62, zmm1, 0x10), temp0_67, 0x88)
                    float temp0_71[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_62, 0x12), zmm1, 0xe8)
                    zmm1 = *rcx_13
                    zmm11[0].q = arg5 u>> 0x40
                    float temp0_72[0x4] = _mm_add_ps(zmm1, zmm1)
                    float temp0_73[0x4] = _mm_shuffle_ps(arg5, zmm11, 0xc4)
                    float temp0_74[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_75[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                    float temp0_76[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                    float temp0_77[0x4] = _mm_mul_ps(zmm1, temp0_72)
                    float temp0_79[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x29), temp0_75)
                    float temp0_81[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x12), temp0_76)
                    float temp0_84[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0x1a), 
                        _mm_shuffle_ps(temp0_77, temp0_77, 1))
                    float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_79)
                    float temp0_86[0x4] = _mm_sub_ps(temp0_79, temp0_81)
                    float temp0_87[0x4] = _mm_sub_ps(zmm11, temp0_84)
                    float temp0_88[0x4] = _mm_mul_ps(temp0_85, zmm14)
                    float temp0_89[0x4] = _mm_mul_ps(temp0_74, temp0_86)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_87, zmm14), data_143f57820)
                    float temp0_94[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_88, zmm1, 0), 
                        _mm_shuffle_ps(temp0_89, zmm1, 0x32), 0x82)
                    float temp0_95[0x4] = _mm_shuffle_ps(temp0_88, zmm1, 0x31)
                    float temp0_96[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x55)
                    float temp0_98[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, zmm1, 0x10), temp0_95, 0x88)
                    float temp0_99[0x4] = _mm_mul_ps(temp0_96, temp0_69)
                    float temp0_100[0x4] = _mm_shuffle_ps(temp0_88, temp0_89, 0x12)
                    zmm5 = rcx_13[1]
                    float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, zmm1, 0xe8)
                    float temp0_103[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xaa), temp0_71)
                    zmm11[0].q = zmm5 u>> 0x40
                    float temp0_104[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                    float temp0_105[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0)
                    float temp0_107[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xff), temp0_73)
                    float temp0_109[0x4] = _mm_add_ps(temp0_99, _mm_mul_ps(temp0_105, temp0_66))
                    float temp0_111[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0), temp0_66)
                    float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_103)
                    float temp0_114[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xaa), temp0_71)
                    float temp0_115[0x4] = _mm_add_ps(temp0_112, temp0_107)
                    float temp0_117[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0x55), temp0_69)
                    float temp0_118[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xff)
                    float var_1e8[0x4] = temp0_115
                    float temp0_119[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x55)
                    float temp0_120[0x4] = _mm_add_ps(temp0_117, temp0_111)
                    float temp0_121[0x4] = _mm_mul_ps(temp0_119, temp0_69)
                    float temp0_122[0x4] = _mm_mul_ps(temp0_118, temp0_73)
                    float temp0_123[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0)
                    float temp0_124[0x4] = _mm_add_ps(temp0_120, temp0_114)
                    float temp0_125[0x4] = _mm_mul_ps(temp0_123, temp0_66)
                    float temp0_127[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xaa), temp0_71)
                    float temp0_128[0x4] = _mm_add_ps(temp0_124, temp0_122)
                    float temp0_129[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xff)
                    float temp0_130[0x4] = _mm_add_ps(temp0_121, temp0_125)
                    float temp0_131[0x4] = _mm_mul_ps(temp0_129, temp0_73)
                    float temp0_132[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0)
                    int96_t var_1d8_1 = temp0_128[0].12
                    float temp0_133[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0x55)
                    float temp0_134[0x4] = _mm_add_ps(temp0_130, temp0_127)
                    float temp0_135[0x4] = _mm_mul_ps(temp0_133, temp0_69)
                    float temp0_137[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xaa), temp0_71)
                    float temp0_138[0x4] = _mm_mul_ps(temp0_132, temp0_66)
                    float temp0_139[0x4] = _mm_add_ps(temp0_134, temp0_131)
                    float temp0_141[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xff), temp0_73)
                    float temp0_142[0x4] = _mm_add_ps(temp0_135, temp0_138)
                    int96_t var_1c8_1 = temp0_139[0].12
                    int96_t var_1b8_1 =
                        _mm_add_ps(_mm_add_ps(temp0_142, temp0_137), temp0_141)[0].12
                    int512_t zmm9
                    int512_t zmm10
                    float zmm11_1[0x4]
                    int512_t zmm12
                    float zmm13_1[0x4]
                    int64_t zmm15_1
                    zmm9, zmm10, zmm11_1, zmm12, zmm13_1, zmm15_1 =
                        sub_1407740e0(&var_1e8, 0x322bcc77)
                    uint32_t zmm0_1[0x4] = data_143f57830
                    float temp0_145[0x4] = _mm_cmpeq_ps(data_143f578e0, zmm13_1, 2)
                    float zmm2_1[0x4] = var_1e8[0]
                    float zmm1_1 = var_1e8[1]
                    float zmm4_1[0x4] = _mm_and_ps(temp0_145, zmm0_1 ^ zmm11_1)
                    zmm0_1 = var_1e8[2]
                    zmm4_1 ^= data_143f57830
                    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                    zmm1_1 = zmm1_1 * zmm4_1[0]
                    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                    var_1e8[0] = zmm2_1[0]
                    float temp0_147[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    var_1e8[1] = zmm1_1
                    zmm1_1 = var_1d8_1:4.d * temp0_147[0]
                    var_1e8[2] = zmm0_1[0]
                    zmm0_1 = var_1d8_1:8.d
                    zmm0_1[0] = zmm0_1[0] f* temp0_147[0]
                    float zmm3_1 = var_1d8_1.d * temp0_147[0]
                    zmm2_1 = var_1c8_1.d
                    float temp0_148[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                    var_1d8_1:4.d = zmm1_1
                    var_1d8_1:8.d = zmm0_1[0]
                    zmm0_1 = var_1c8_1:8.d
                    zmm1_1 = var_1c8_1:4.d * temp0_148[0]
                    zmm0_1[0] = zmm0_1[0] f* temp0_148[0]
                    zmm2_1[0] = zmm2_1[0] * temp0_148[0]
                    var_1c8_1:4.d = zmm1_1
                    var_1c8_1:8.d = zmm0_1[0]
                    var_1d8_1.d = zmm3_1
                    var_1c8_1.d = zmm2_1[0]
                    sub_14077e4a0(&var_198, &var_1e8)
                    float zmm6_1[0x4] = var_198
                    uint32_t zmm5_1[0x4] = data_143f57790
                    zmm12.o = arg7
                    float temp0_149[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                    float var_158_2[0x4] = zmm13_1
                    float temp0_151[0x4] =
                        _mm_add_ps(temp0_149, _mm_shuffle_ps(temp0_149, temp0_149, 0x4e))
                    float temp0_153[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0x39), temp0_151)
                    float temp0_154[0x4] = _mm_rsqrt_ps(temp0_153)
                    float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm5_1)
                    float temp0_160[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_154, temp0_154), temp0_155)), 
                            temp0_154), 
                        temp0_154)
                    zmm5_1 =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_160, temp0_160), temp0_155))
                    float temp0_165[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_153, 2)
                    zmm5_1 = _mm_add_ps(_mm_mul_ps(zmm5_1, temp0_160), temp0_160)
                    float temp0_168[0x4] = _mm_unpacklo_ps(var_1b8_1:4.d, zmm15_1)
                    zmm5_1 = _mm_and_ps(_mm_mul_ps(zmm5_1, zmm6_1) ^ data_143f57780, temp0_165)
                        ^ data_143f57780
                    float var_168_2[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(var_1b8_1.d, var_1b8_1:8.d[0].q), temp0_168[0].q)
                    var_178 = zmm5_1
                    zmm10.o = arg6
                    zmm9.o = var_78_1
                rax_17 = &var_178
            else
                rax_17 = sub_141f5e780(arg1, &var_118, result.d)
            
            var_148 = *rax_17
            float var_138_2[0x4] = rax_17[1]
            float var_128_2[0x4] = rax_17[2]
            var_1a8[4].d = sub_142230280(rdi_1, arg2, &var_148, var_1a8, var_1a8 + 0xc)
            var_1a8[3] = *(rdi_1 + 0x80)
            result.b = 1

__security_check_cookie(rax_1 ^ &var_248)
return result
