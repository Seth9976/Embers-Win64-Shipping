// 函数: sub_1425db3f0
// 地址: 0x1425db3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t rbx = sx.q(*(arg1 + 0x28))
void* r14 = arg4
void* r13 = arg3
int64_t* rdi = arg2
void* var_218 = arg1
uint64_t result

if (rbx.d == 0 || arg3 == 0)
    result = zx.q(arg2[1].d)
    
    if (result.d != *(arg2 + 0x34))
        sub_1425dc570(rdi)
        int64_t rcx_29 = sx.q(rdi[9].d)
        void* result_3 = &rdi[7]
        result = *(result_3 + 8)
        
        if (rcx_29 s> 0)
            if (result != 0)
                result_3 = result
            
            result = 0xffffffff
            __builtin_memset(result_3, 0xffffffff, rcx_29 << 2)
else
    result = zx.q(arg2[1].d - *(arg2 + 0x34))
    
    if (result.d != rbx.d && result.d != 0)
        sub_1425dc570(arg2)
        int64_t rcx_1 = sx.q(rdi[9].d)
        uint64_t result_2 = &rdi[7]
        result = *(result_2 + 8)
        
        if (rcx_1 s> 0)
            if (result != 0)
                result_2 = result
            
            result = 0xffffffff
            __builtin_memset(result_2, 0xffffffff, rcx_1 << 2)
            rdi = arg2
        
        arg1 = var_218
    
    int128_t* r8 = r13 + 0x1c0
    
    if (rbx.d s> 0)
        result = 0
        int64_t* r12_1 = nullptr
        float zmm6[0x4]
        float var_58_1[0x4] = zmm6
        float zmm7[0x4]
        float var_68_1[0x4] = zmm7
        float zmm8[0x4]
        float var_78_1[0x4] = zmm8
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
        uint64_t result_1 = 0
        
        while (true)
            void* rsi_1 = *(arg1 + 0x20)
            void* rcx_2 = *(r12_1 + rsi_1)
            
            if (*(r12_1 + rsi_1 + 0x60) != 0xffffffff)
                int32_t* r8_2 = rsi_1 + 0x12c + r12_1
                void* rax_3 = sub_1425d64c0(rdi, *r8_2, r8_2)
                int64_t r15_2 = sx.q(*(r12_1 + rsi_1 + 0x60)) << 6
                int64_t* rdi_3 = *(*(r12_1 + rsi_1 + 0x130) + r15_2 + 8)
                int64_t rdx_1 = *rdi_3
                (*(rdx_1 + 0x28))(rdi_3, rdx_1)
                void* rax_6
                
                if (r14 == 0)
                    rax_6 = (sx.q(*(r13 + 0x494)) << 4) + r13
                else
                    rax_6 = (sx.q(*(r14 + 0x494)) << 4) + r14
                
                int64_t rcx_6 = sx.q(*(rcx_2 + 0x108))
                
                if (rcx_6.d s< 0 || rcx_6.d s>= *(rax_6 + 0x458))
                    int32_t rax_28 = *(rax_3 + 0xc)
                    *(rax_3 + 8) = 0
                    
                    if (rax_28 s< 0 && rax_28 != 0)
                        sub_140638cc0(rax_3, 0)
                    
                    int32_t rax_29 = *(rax_3 + 0x1c)
                    *(rax_3 + 0x18) = 0
                    
                    if (rax_29 s< 0 && rax_29 != 0)
                        sub_140638cc0(rax_3 + 0x10, 0)
                    
                    result = (*(*rdi_3 + 0x30))(rdi_3)
                    break
                
                int64_t rcx_8 = rcx_6 * 6
                int64_t rdx_2
                
                if (r14 == 0)
                    rdx_2 = *(r13 + (sx.q(*(r13 + 0x494)) + 0x45) * 0x10)
                else
                    rdx_2 = *(r14 + (sx.q(*(r14 + 0x494)) + 0x45) * 0x10)
                
                zmm13 = *(rdx_2 + (rcx_8 << 3))
                float zmm1_1[0x4] = data_143f709e0
                zmm14 = data_142e6da00
                float var_128[0x4] = zmm13
                zmm15 = *(rdx_2 + (rcx_8 << 3) + 0x10)
                void* var_228_1
                var_228_1.o = zmm1_1
                float var_118_1[0x4] = zmm15
                float var_108_1[0x4] = zmm14
                zmm7 = r8[2]
                zmm6 = *r8
                float var_168[0x4]
                float var_118_2[0x4]
                float var_108_2[0x4]
                float zmm0_1[0x4]
                float zmm2_1[0x4]
                float zmm3_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), zmm1_1, 1)) == 0)
                    float temp0_133[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    float temp0_134[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                    float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_134)
                    float temp0_137[0x4] = _mm_mul_ps(zmm7, zmm15)
                    float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143f70980)
                    float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm13)
                    float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
                    float temp0_142[0x4] = _mm_mul_ps(zmm14, zmm7)
                    float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_140)
                    float temp0_145[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                    float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                        _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f70970)
                    var_108_2 = temp0_142
                    float temp0_150[0x4] = __mulps_xmmps_memps(temp0_148, data_143f70960)
                    float temp0_152[0x4] = _mm_add_ps(_mm_add_ps(temp0_143, temp0_149), temp0_150)
                    float temp0_153[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
                    var_128 = temp0_152
                    zmm2_1 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                    float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm2_1)
                    float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                    float temp0_158[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_141, temp0_156), temp0_155)
                    float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                    float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                    float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_156)
                    zmm0_1 = _mm_mul_ps(temp0_161, zmm2_1)
                    float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_138)
                    float temp0_165[0x4] = _mm_sub_ps(temp0_162, zmm0_1)
                    zmm3_1 = _mm_add_ps(temp0_164, temp0_137)
                    zmm1_1 = __addps_xmmps_memps(_mm_add_ps(temp0_165, zmm3_1), r8[1])
                    var_118_2 = zmm1_1
                else
                    zmm10 = data_143f70990
                    float temp0_4[0x4] = _mm_add_ps(zmm6, zmm6)
                    zmm8 = r8[1]
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float temp0_8[0x4] = _mm_mul_ps(zmm6, temp0_4)
                    float temp0_10[0x4] =
                        _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
                    float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
                    float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
                    float temp0_13[0x4] = _mm_mul_ps(temp0_7, temp0_11)
                    float temp0_15[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_8, temp0_8, 1))
                    _mm_mul_ps(zmm7, zmm14)
                    float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_10)
                    float temp0_18[0x4] = _mm_sub_ps(temp0_10, temp0_13)
                    float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
                    float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
                    float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
                    float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm7)
                    float temp0_23[0x4] = _mm_add_ps(zmm13, zmm13)
                    zmm1_1 = __andps_xmmxud_memxud(temp0_22, data_143f709a0)
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
                    float temp0_27[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0), temp0_25, 0x82)
                    float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x31)
                    float temp0_30[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_28, 0x88)
                    float temp0_31[0x4] = _mm_mul_ps(temp0_23, zmm13)
                    float temp0_33[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_1, 0xe8)
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x29)
                    zmm10[0].q = zmm8 u>> 0x40
                    float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                    float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm13, zmm13, 4))
                    float temp0_40[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x1a), 
                        _mm_shuffle_ps(temp0_31, temp0_31, 1))
                    float temp0_41[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    float temp0_43[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), temp0_41)
                    float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
                    float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
                    float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm14)
                    float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_40), zmm14), 
                        data_143f709a0)
                    float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x32)
                    float temp0_54[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1_1, 0), temp0_52, 0x82)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1_1, 0x31)
                    float temp0_57[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0x10), temp0_55, 0x88)
                    float temp0_59[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, temp0_48, 0x12), zmm1_1, 0xe8)
                    float temp0_60[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
                    float temp0_61[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                    float temp0_62[0x4] = _mm_mul_ps(temp0_60, temp0_33)
                    float temp0_63[0x4] = _mm_mul_ps(temp0_61, temp0_30)
                    zmm10[0].q = zmm15 u>> 0x40
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm15, zmm10, 0xc4)
                    float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                    float temp0_67[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
                    float temp0_69[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(temp0_65, temp0_27))
                    float temp0_71[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_27)
                    float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_62)
                    float temp0_74[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_33)
                    float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                    float temp0_77[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_30)
                    float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
                    var_168 = temp0_75
                    float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
                    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                    float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
                    float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
                    float temp0_83[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
                    float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                    float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
                    float temp0_87[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_33)
                    float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                    float temp0_89[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
                    float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
                    float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                    int96_t var_158_1 = temp0_88[0].12
                    float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                    float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
                    float temp0_97[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
                    float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
                    float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                    float temp0_101[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
                    float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                    int96_t var_148_1 = temp0_99[0].12
                    int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                    int128_t zmm10_1
                    float zmm12_1[0x4]
                    zmm10_1, zmm12_1 = sub_1407740e0(&var_168, 0x322bcc77)
                    float zmm2_2[0x4] = var_168[0]
                    float zmm1_2 = var_168[1]
                    float zmm4_2[0x4] =
                        _mm_and_ps(_mm_cmpeq_ps(var_228_1.o, zmm12_1, 2), data_143f709d0 ^ zmm10_1)
                    uint32_t zmm0_2[0x4] = var_168[2]
                    zmm4_2 ^= data_143f709d0
                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                    zmm1_2 = zmm1_2 * zmm4_2[0]
                    var_168[0] = zmm2_2[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                    var_168[1] = zmm1_2
                    var_168[2] = zmm0_2[0]
                    zmm0_2 = var_158_1:8.d
                    float temp0_107[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    zmm1_2 = var_158_1:4.d * temp0_107[0]
                    zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
                    float zmm3_2 = var_158_1.d * temp0_107[0]
                    zmm2_2 = var_148_1.d
                    float temp0_108[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                    var_158_1:4.d = zmm1_2
                    var_158_1:8.d = zmm0_2[0]
                    zmm0_2 = var_148_1:8.d
                    zmm1_2 = var_148_1:4.d * temp0_108[0]
                    zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
                    zmm2_2[0] = zmm2_2[0] * temp0_108[0]
                    var_148_1:4.d = zmm1_2
                    var_148_1:8.d = zmm0_2[0]
                    var_158_1.d = zmm3_2
                    var_148_1.d = zmm2_2[0]
                    uint32_t var_1b8[0x4]
                    sub_14077e4a0(&var_1b8, &var_168)
                    uint32_t zmm5_2[0x4] = var_1b8
                    float zmm6_1[0x4] = data_143f709c0
                    float temp0_109[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    var_228_1.d = 0x322bcc77
                    var_108_2 = zmm12_1
                    float temp0_111[0x4] =
                        _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                    float temp0_113[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                    float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                    float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6_1)
                    float temp0_120[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                            temp0_114), 
                        temp0_114)
                    zmm1_1 = zx.o(0)
                    float temp0_123[0x4] =
                        _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                    float temp0_125[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                    float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
                    zmm2_1 = _mm_unpacklo_ps(var_138_1:4.d, 0)
                    zmm0_1 = var_138_1:8.d
                    zmm6_1 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm5_2) ^ data_143f709b0, temp0_125)
                        ^ data_143f709b0
                    zmm3_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, zmm0_1[0].q), zmm2_1[0].q)
                    var_118_2 = zmm3_1
                    var_1b8 = zmm6_1
                    var_128 = zmm6_1
                
                int32_t rax_18 = (*(**(r15_2 + *(r12_1 + rsi_1 + 0x130) + 8) + 0x20))(zmm0_1, 
                    zmm1_1, zmm2_1, zmm3_1, var_228_1)
                var_228_1.d = rax_18
                sub_1425dc740(rax_3)
                *(rax_3 + 0x20) = var_128
                *(rax_3 + 0x40) = var_108_2
                *(rax_3 + 0x30) = var_118_2
                float (* rax_19)[0x4] = sub_140ad7d70(&var_128, &var_168, r8)
                *(rax_3 + 0x50) = *rax_19
                int128_t zmm1_3 = rax_19[1]
                *(rax_3 + 0x60) = zmm1_3
                *(rax_3 + 0x70) = rax_19[2]
                int64_t* rcx_15 = *(r15_2 + *(r12_1 + rsi_1 + 0x130) + 8)
                int64_t var_1a8
                (*(*rcx_15 + 0x40))(rcx_15, &var_1a8)
                int32_t i = 0
                
                if (rax_18 != 0)
                    float (* r14_1)[0x4] = nullptr
                    
                    do
                        int64_t rax_22 = var_1a8
                        int64_t r13_2 = sx.q(*(rax_3 + 8))
                        zmm1_3 = *(r14_1 + rax_22 + 4)
                        int32_t zmm2_3 = *(r14_1 + rax_22 + 8)
                        int32_t rax_23 = (r13_2 + 1).d
                        float var_208_1 = (*(r14_1 + rax_22))[0]
                        int32_t var_204_1 = zmm1_3.d
                        *(rax_3 + 8) = rax_23
                        
                        if (rax_23 s> *(rax_3 + 0xc))
                            sub_140638a00(rax_3)
                        
                        int64_t rcx_17 = *rax_3
                        int64_t rdx_8 = r13_2 * 3
                        *(rcx_17 + (rdx_8 << 2)) = var_208_1.q
                        *(rcx_17 + (rdx_8 << 2) + 8) = zmm2_3
                        int64_t r13_3 = sx.q(*(rax_3 + 0x18))
                        int64_t r9 = *(r12_1 + rsi_1 + 0x180)
                        int32_t rax_25 = (r13_3 + 1).d
                        *(rax_3 + 0x18) = rax_25
                        
                        if (rax_25 s> *(rax_3 + 0x1c))
                            sub_140638a00(rax_3 + 0x10)
                        
                        int64_t rcx_19 = *(rax_3 + 0x10)
                        int64_t i_1 = sx.q(i)
                        int64_t rdx_11 = r13_3 * 3
                        i += 1
                        r14_1 = &r14_1[1]
                        int64_t r8_4 = i_1 * 3
                        *(rcx_19 + (rdx_11 << 2)) = *(r9 + (r8_4 << 2))
                        *(rcx_19 + (rdx_11 << 2) + 8) = *(r9 + (r8_4 << 2) + 8)
                    while (i u< var_228_1.d)
                    
                    r14 = arg4
                
                int64_t var_198
                int64_t var_180
                int32_t var_178
                var_180(sx.q(var_178) + var_198, zmm1_3)
                (*(*rdi_3 + 0x30))(rdi_3)
                result = result_1
                r13 = arg3
            
            result += 1
            r12_1 = &r12_1[0x3e]
            result_1 = result
            
            if (result s>= rbx)
                break
            
            rdi = arg2
            arg1 = var_218

__security_check_cookie(rax_1 ^ &var_248)
return result
