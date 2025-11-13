// 函数: sub_14278ab30
// 地址: 0x14278ab30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a78
int64_t rax_1 = __security_cookie ^ &var_a78
void* r15 = arg5
int32_t i_5 = 0
int32_t var_978 = 0
void* rax_2 = arg2[0x26]
int64_t* r10 = arg2
int64_t* var_6b8 = arg2
int32_t r14 = 0
void* var_968 = r15
int128_t* rax_3

if (rax_2 == 0)
    rax_3 = &data_143dbb0c0
else
    rax_3 = rax_2 + 0x1c0

*(r15 + 0x210) = *rax_3
arg2.b = 1
*(r15 + 0x220) = rax_3[1]
*(r15 + 0x230) = rax_3[2]
*(r15 + 0x240) = *(r15 + 0x210)
*(r15 + 0x250) = *(r15 + 0x220)
*(r15 + 0x260) = *(r15 + 0x230)
int32_t var_788
int64_t var_4e8[0x2]
float zmm6[0x4] = sub_141dc51c0(r10, arg2.b, &var_4e8, &var_788, 0)
void* result = arg3[0x86]

if (result != 0)
    void* r13_1 = *(result + 0x60)
    void* var_818_1 = r13_1
    
    if (arg4 != 0 && r13_1 != 0)
        void* rcx_1 = *(result + 0x58)
        
        if (rcx_1 != 0 && *(rcx_1 + 8) != 0)
            void* r12_1 = r15 + 0x10
            void* var_930_1 = r12_1
            sub_142793030(r12_1, *(arg4 + 0x48))
            int32_t* var_9b8 = nullptr
            int64_t var_9b0_1 = 0
            int64_t* rcx_3 = *(arg4 + 0x40)
            int64_t* var_810_1 = rcx_3
            void* rax_5 = &rcx_3[sx.q(*(arg4 + 0x48))]
            void* var_6c8_1 = rax_5
            char var_a58
            
            if (rcx_3 != rax_5)
                float var_48_1[0x4] = zmm6
                float zmm7[0x4]
                float var_58_1[0x4] = zmm7
                float zmm8[0x4]
                float var_68_1[0x4] = zmm8
                uint128_t zmm9 = zx.o(0)
                uint128_t zmm10 = 0x80000000
                float zmm11[0x4]
                float var_98_1[0x4] = zmm11
                float zmm12[0x4]
                float var_a8_1[0x4] = zmm12
                float zmm13[0x4]
                float var_b8_1[0x4] = zmm13
                float zmm14[0x4] = 0x322bcc77
                float zmm15[0x4] = 0x3f000000
                
                do
                    void* rdi_2 = *rcx_3
                    void* var_9a8_1 = rdi_2
                    
                    if (rdi_2 != 0)
                        int64_t* rax_6
                        uint32_t* r9_1
                        rax_6, r9_1 = j_sub_140a82f30(0x110)
                        int64_t* r13_2
                        
                        if (rax_6 == 0)
                            r13_2 = nullptr
                        else
                            int32_t r15_1 = -1
                            int32_t rcx_4
                            rcx_4.b = sub_140b5b8a0(*(rdi_2 + 0x80), 0) == 0
                            
                            if ((*(rdi_2 + 0x84) != 0 | rcx_4.b) != 0)
                                int64_t rbx_1 = *(rdi_2 + 0x80)
                                void* rcx_9
                                
                                if (*(r13_1 + 0xf0) == *(r13_1 + 0x11c))
                                label_14278addf:
                                    rcx_9 = nullptr
                                else
                                    int32_t rax_10 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                                    void* r8_1 = r13_1 + 0x120
                                    void* rcx_6 = *(r8_1 + 8)
                                    
                                    if (rcx_6 != 0)
                                        r8_1 = rcx_6
                                    
                                    int32_t rax_12 = *(r8_1
                                        + (((sx.q(*(r13_1 + 0x130)) - 1) & sx.q(rax_10)) << 2))
                                    
                                    if (rax_12 == 0xffffffff)
                                    label_14278addf_1:
                                        rcx_9 = nullptr
                                    else
                                        int64_t rcx_8
                                        int64_t rdx_4
                                        
                                        while (true)
                                            rdx_4 = sx.q(rax_12) * 5
                                            rcx_8 = *(r13_1 + 0xe8)
                                            
                                            if (*(rcx_8 + (rdx_4 << 2)) == rbx_1)
                                                break
                                            
                                            rax_12 = *(rcx_8 + (rdx_4 << 2) + 0xc)
                                            
                                            if (rax_12 == 0xffffffff)
                                                goto label_14278addf_2
                                        
                                        if (rax_12 == 0xffffffff)
                                        label_14278addf_2:
                                            rcx_9 = nullptr
                                        else
                                            rcx_9 = rcx_8 + (rdx_4 << 2)
                                
                                int32_t* rax_13 = rcx_9 + 8
                                
                                if (rcx_9 == 0)
                                    rax_13 = nullptr
                                
                                if (rax_13 != 0)
                                    r15_1 = *rax_13
                            
                            r15 = var_968
                            r13_2 = sub_1427869c0(rax_6, rdi_2 + 0x80, r15_1)
                        
                        int64_t rax_15 = sx.q(r13_2[1].d)
                        zmm12 = data_143dbb0e0
                        int64_t* var_970_2 = r13_2
                        float var_7f8_1[0x4] = data_143dbb0c0
                        float var_7e8_1[0x4] = data_143dbb0d0
                        float var_7d8_1[0x4] = zmm12
                        float var_9f8[0x4]
                        float zmm1_1[0x4]
                        float zmm2_1[0x4]
                        float zmm3_1[0x4]
                        
                        if (rax_15.d s>= 0 && rax_15.d s< *(var_818_1 + 0x80))
                            int32_t i = *(*(var_818_1 + 0x78) + rax_15 * 0xc + 8)
                            *(r13_2 + 0xc) = i
                            float (* rax_19)[0x4] = rax_15 * 0x30 + *(var_818_1 + 0x88)
                            *(r13_2 + 0xc0) = *rax_19
                            *(r13_2 + 0xd0) = rax_19[1]
                            *(r13_2 + 0xe0) = rax_19[2]
                            int32_t* r8_3 = var_9b8
                            int64_t rsi_1 = sx.q(var_9b0_1.d)
                            int32_t* rcx_12 = r8_3
                            void* rdx_7 = &r8_3[rsi_1]
                            
                            if (r8_3 != rdx_7)
                                while (*rcx_12 != i)
                                    rcx_12 = &rcx_12[1]
                                    
                                    if (rcx_12 == rdx_7)
                                        goto label_14278aee2
                            
                            if (r8_3 == rdx_7 || ((rcx_12 - r8_3) s>> 2).d == 0xffffffff)
                            label_14278aee2:
                                int32_t rax_20 = (rsi_1 + 1).d
                                var_9b0_1.d = rax_20
                                
                                if (rax_20 s> var_9b0_1:4.d)
                                    sub_1405a4cf0(&var_9b8)
                                    r8_3 = var_9b8
                                
                                r8_3[rsi_1] = i
                            
                            zmm13 = *(r13_2 + 0xc0)
                            zmm8 = data_143f88130
                            zmm1_1 = data_143f88110
                            zmm3_1 = data_143f88100
                            zmm10 = data_143f880f0
                            float var_7f8_2[0x4] = zmm13
                            zmm14 = *(r13_2 + 0xd0)
                            float var_7e8_2[0x4] = zmm14
                            zmm15 = *(r13_2 + 0xe0)
                            float var_7d8_2[0x4] = zmm15
                            var_9f8 = zmm8
                            int64_t i_6
                            float zmm4_1[0x4]
                            float zmm5_1[0x4]
                            
                            for (; i != 0xffffffff; i = *(*(var_818_1 + 0x78) + i_6 * 0xc + 8))
                                int64_t rdx_9 = *(var_818_1 + 0x88)
                                i_6 = sx.q(i)
                                int64_t rcx_17 = i_6 * 6
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(
                                        __minps_xmmps_memps(zmm15, 
                                            *(rdx_9 + (rcx_17 << 3) + 0x20)), 
                                        zmm8, 1)) == 0)
                                    zmm4_1 = *(rdx_9 + (rcx_17 << 3))
                                    zmm7 = *(rdx_9 + (rcx_17 << 3) + 0x20)
                                    zmm6 = *(rdx_9 + (rcx_17 << 3) + 0x10)
                                    float temp0_133[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                                    float temp0_135[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_133)
                                    float temp0_136[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                                    zmm15 = _mm_mul_ps(zmm15, zmm7)
                                    float temp0_138[0x4] = _mm_mul_ps(temp0_136, zmm13)
                                    float temp0_139[0x4] = _mm_mul_ps(temp0_135, zmm1_1)
                                    float temp0_140[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
                                    float temp0_141[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                                    float var_7d8_4[0x4] = zmm15
                                    float temp0_142[0x4] = _mm_add_ps(temp0_139, temp0_138)
                                    float temp0_144[0x4] =
                                        _mm_mul_ps(temp0_140, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
                                    float temp0_146[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), temp0_141)
                                    float temp0_147[0x4] = _mm_mul_ps(temp0_144, zmm3_1)
                                    float temp0_148[0x4] = _mm_mul_ps(zmm7, zmm14)
                                    float temp0_149[0x4] = _mm_mul_ps(temp0_146, zmm10)
                                    float temp0_150[0x4] = _mm_add_ps(temp0_142, temp0_147)
                                    float temp0_151[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                                    float temp0_152[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                                    zmm13 = _mm_add_ps(temp0_150, temp0_149)
                                    float temp0_158[0x4] = _mm_sub_ps(
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xd2), 
                                            temp0_152), 
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_148, temp0_148, 0xc9), 
                                        temp0_151))
                                    float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
                                    float temp0_160[0x4] =
                                        _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
                                    float temp0_161[0x4] =
                                        _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
                                    float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_152)
                                    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_151)
                                    float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_136)
                                    zmm14 = _mm_add_ps(
                                        _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), 
                                            _mm_add_ps(temp0_164, temp0_148)), 
                                        zmm6)
                                else
                                    zmm2_1 = *(rdx_9 + (rcx_17 << 3))
                                    zmm5_1 = *(rdx_9 + (rcx_17 << 3) + 0x20)
                                    zmm11 = data_143f880a0
                                    float temp0_4[0x4] = _mm_add_ps(zmm2_1, zmm2_1)
                                    _mm_mul_ps(zmm5_1, zmm15)
                                    float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm2_1)
                                    float temp0_9[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_6, temp0_6, 0x1a), 
                                        _mm_shuffle_ps(temp0_6, temp0_6, 1))
                                    float temp0_10[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 4)
                                    float temp0_11[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                                    float temp0_12[0x4] = _mm_sub_ps(zmm11, temp0_9)
                                    float temp0_14[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_10)
                                    float temp0_16[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_11)
                                    float temp0_17[0x4] = _mm_mul_ps(temp0_12, zmm5_1)
                                    float temp0_18[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                                    zmm10 = _mm_add_ps(temp0_16, temp0_14)
                                    zmm4_1 = __andps_xmmxud_memxud(temp0_17, data_143f880b0)
                                    float temp0_21[0x4] = _mm_sub_ps(temp0_14, temp0_16)
                                    zmm10 = _mm_mul_ps(zmm10, zmm5_1)
                                    float temp0_24[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_21)
                                    float temp0_25[0x4] = _mm_add_ps(zmm13, zmm13)
                                    float temp0_26[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4_1, 0), 
                                        _mm_shuffle_ps(temp0_24, zmm4_1, 0x32), 0x82)
                                    float temp0_30[0x4] = _mm_shuffle_ps(zmm10, zmm4_1, 0x31)
                                    float temp0_31[0x4] = _mm_mul_ps(zmm13, temp0_25)
                                    float temp0_33[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_24, zmm4_1, 0x10), temp0_30, 0x88)
                                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, temp0_24, 0x12), 
                                        zmm4_1, 0xe8)
                                    float var_358_1[0x4] = temp0_33
                                    uint128_t var_368_1 = zmm9
                                    uint128_t var_348_1 = zmm10
                                    zmm8 = *(rdx_9 + (rcx_17 << 3) + 0x10)
                                    zmm11[0].q = zmm8 u>> 0x40
                                    float temp0_36[0x4] = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
                                    float temp0_38[0x4] = _mm_mul_ps(temp0_18, 
                                        _mm_shuffle_ps(temp0_25, temp0_25, 0x29))
                                    float temp0_40[0x4] = _mm_mul_ps(temp0_26, 
                                        _mm_shuffle_ps(temp0_25, temp0_25, 0x12))
                                    float temp0_43[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_31, temp0_31, 0x1a), 
                                        _mm_shuffle_ps(temp0_31, temp0_31, 1))
                                    float temp0_44[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                    float var_338_1[0x4] = temp0_36
                                    float temp0_45[0x4] = _mm_add_ps(temp0_40, temp0_38)
                                    float temp0_46[0x4] = _mm_sub_ps(temp0_38, temp0_40)
                                    float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_43)
                                    float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm15)
                                    float temp0_49[0x4] = _mm_mul_ps(temp0_44, temp0_46)
                                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm15), 
                                        data_143f880b0)
                                    float temp0_54[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_48, zmm1_1, 0), 
                                        _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
                                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x10)
                                    float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                                    float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, 
                                        _mm_shuffle_ps(temp0_48, zmm1_1, 0x31), 0x88)
                                    float var_328_1[0x4] = temp0_54
                                    float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_33)
                                    zmm11[0].q = zmm14 u>> 0x40
                                    float temp0_60[0x4] = _mm_shuffle_ps(zmm14, zmm11, 0xc4)
                                    float temp0_62[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0), zmm9)
                                    float temp0_64[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1_1, 0xe8)
                                    float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
                                    float temp0_66[0x4] = _mm_add_ps(temp0_59, temp0_62)
                                    float temp0_68[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_36)
                                    float temp0_69[0x4] = _mm_mul_ps(temp0_65, zmm10)
                                    float temp0_71[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), zmm9)
                                    float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_69)
                                    float var_318_1[0x4] = temp0_58
                                    float var_308_1[0x4] = temp0_64
                                    float temp0_74[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), zmm10)
                                    float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_68)
                                    float var_2f8_1[0x4] = temp0_60
                                    float temp0_77[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_33)
                                    float var_8a8[0x4] = temp0_75
                                    float temp0_79[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_64, temp0_64, 0x55), temp0_33)
                                    float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                                    float temp0_82[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_36)
                                    float temp0_84[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0), zmm9)
                                    float temp0_85[0x4] = _mm_add_ps(temp0_80, temp0_74)
                                    float temp0_87[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), zmm10)
                                    float temp0_88[0x4] = _mm_add_ps(temp0_79, temp0_84)
                                    float temp0_89[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xff)
                                    float temp0_90[0x4] = _mm_add_ps(temp0_85, temp0_82)
                                    float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_36)
                                    float temp0_92[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
                                    float temp0_93[0x4] = _mm_add_ps(temp0_88, temp0_87)
                                    float temp0_94[0x4] = _mm_mul_ps(temp0_92, zmm9)
                                    int96_t var_898_1 = temp0_90[0].12
                                    float temp0_95[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
                                    float temp0_97[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_33)
                                    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_91)
                                    float temp0_99[0x4] = _mm_mul_ps(temp0_95, zmm10)
                                    float temp0_100[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
                                    float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_94)
                                    float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_36)
                                    int96_t var_888_1 = temp0_98[0].12
                                    int96_t var_878_1 =
                                        _mm_add_ps(_mm_add_ps(temp0_101, temp0_99), temp0_102)[0].12
                                    zmm11, zmm12 = sub_1407740e0(&var_8a8, 0x322bcc77)
                                    float temp0_105[0x4] = _mm_cmpeq_ps(var_9f8, zmm12, 2)
                                    float zmm2_2[0x4] = var_8a8[0]
                                    float zmm1_2 = var_8a8[1]
                                    float zmm4_2[0x4] =
                                        _mm_and_ps(temp0_105, data_143f88120 ^ zmm11)
                                    uint32_t zmm0_2[0x4] = var_8a8[2]
                                    zmm4_2 ^= data_143f88120
                                    zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
                                    zmm1_2 = zmm1_2 * zmm4_2[0]
                                    zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                                    var_8a8[0] = zmm2_2[0]
                                    float temp0_107[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                                    var_8a8[1] = zmm1_2
                                    zmm1_2 = var_898_1:4.d * temp0_107[0]
                                    var_8a8[2] = zmm0_2[0]
                                    zmm0_2 = var_898_1:8.d
                                    zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
                                    float zmm3_2 = var_898_1.d * temp0_107[0]
                                    zmm2_2 = var_888_1.d
                                    var_898_1:4.d = zmm1_2
                                    var_898_1:8.d = zmm0_2[0]
                                    zmm0_2 = var_888_1:8.d
                                    float var_378_1[0x4] = zmm4_2
                                    float temp0_108[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                                    zmm1_2 = var_888_1:4.d * temp0_108[0]
                                    zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
                                    zmm2_2[0] = zmm2_2[0] * temp0_108[0]
                                    var_888_1:4.d = zmm1_2
                                    var_888_1:8.d = zmm0_2[0]
                                    var_898_1.d = zmm3_2
                                    var_888_1.d = zmm2_2[0]
                                    uint32_t var_688[0x4]
                                    sub_14077e4a0(&var_688, &var_8a8)
                                    zmm5_1 = var_688
                                    zmm15 = zmm12
                                    zmm13 = data_143f880d0
                                    float temp0_109[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                    zmm9 = zx.o(0)
                                    float var_7d8_3[0x4] = zmm12
                                    float temp0_111[0x4] = _mm_add_ps(temp0_109, 
                                        _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                                    float temp0_113[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                                    float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                                    float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm13)
                                    float temp0_120[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm13, 
                                                _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), 
                                                    temp0_115)), 
                                            temp0_114), 
                                        temp0_114)
                                    float temp0_123[0x4] = _mm_sub_ps(zmm13, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                                    float temp0_125[0x4] = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                                    zmm13 = _mm_and_ps(
                                        _mm_mul_ps(
                                            _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), 
                                                temp0_120), 
                                            zmm5_1) ^ data_143f880c0, 
                                        temp0_125) ^ data_143f880c0
                                    var_688 = zmm13
                                    float temp0_130[0x4] =
                                        _mm_unpacklo_ps(var_878_1.d, var_878_1:8.d[0].q)
                                    zmm8 = data_143f88130
                                    zmm10 = data_143f880f0
                                    zmm14 = _mm_unpacklo_ps(temp0_130, 
                                        _mm_unpacklo_ps(var_878_1:4.d, 0)[0].q)
                                    var_9f8 = zmm8
                                
                                zmm1_1 = data_143f88110
                                zmm3_1 = data_143f88100
                                float var_7e8_3[0x4] = zmm14
                                float var_7f8_3[0x4] = zmm13
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(
                                    __minps_xmmps_memps(zmm15, *(r15 + 0x230)), zmm8, 1)) == 0)
                                zmm5_1 = *(r15 + 0x210)
                                zmm8 = *(r15 + 0x230)
                                zmm7 = *(r15 + 0x220)
                                float temp0_301[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                                float temp0_303[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_301)
                                float temp0_304[0x4] = _mm_mul_ps(zmm8, zmm14)
                                zmm14 = 0x322bcc77
                                float temp0_305[0x4] = _mm_mul_ps(temp0_303, zmm1_1)
                                float temp0_306[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                float temp0_307[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                zmm12 = _mm_mul_ps(zmm15, zmm8)
                                float temp0_310[0x4] =
                                    _mm_add_ps(temp0_305, _mm_mul_ps(temp0_307, zmm13))
                                float temp0_312[0x4] =
                                    _mm_mul_ps(temp0_306, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                                float temp0_315[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                                    _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                                float temp0_316[0x4] = _mm_mul_ps(temp0_312, zmm3_1)
                                float temp0_317[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                float temp0_318[0x4] = _mm_mul_ps(temp0_315, zmm10)
                                float temp0_319[0x4] = _mm_add_ps(temp0_310, temp0_316)
                                float temp0_320[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                float temp0_321[0x4] = _mm_add_ps(temp0_319, temp0_318)
                                float temp0_323[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_304, temp0_304, 0xc9), temp0_317)
                                float var_7f8_5[0x4] = temp0_321
                                float temp0_326[0x4] = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0xd2), 
                                        temp0_320), 
                                    temp0_323)
                                float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
                                float temp0_328[0x4] = _mm_mul_ps(temp0_307, temp0_327)
                                float temp0_330[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_327, temp0_327, 0xd2), temp0_320)
                                float temp0_331[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
                                float temp0_332[0x4] = _mm_add_ps(temp0_328, temp0_304)
                                float var_7e8_5[0x4] = _mm_add_ps(
                                    _mm_add_ps(
                                        _mm_sub_ps(temp0_330, _mm_mul_ps(temp0_331, temp0_317)), 
                                        temp0_332), 
                                    zmm7)
                            else
                                zmm3_1 = *(r15 + 0x210)
                                zmm5_1 = *(r15 + 0x230)
                                zmm11 = data_143f880a0
                                float temp0_172[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                                _mm_mul_ps(zmm5_1, zmm15)
                                float temp0_174[0x4] = _mm_mul_ps(temp0_172, zmm3_1)
                                float temp0_177[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_174, temp0_174, 0x1a), 
                                    _mm_shuffle_ps(temp0_174, temp0_174, 1))
                                float temp0_178[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x29)
                                float temp0_179[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x12)
                                float temp0_180[0x4] = _mm_sub_ps(zmm11, temp0_177)
                                float temp0_182[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 4), temp0_178)
                                float temp0_184[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_179)
                                float temp0_185[0x4] = _mm_mul_ps(temp0_180, zmm5_1)
                                float temp0_186[0x4] = _mm_add_ps(zmm13, zmm13)
                                zmm10 = _mm_add_ps(temp0_184, temp0_182)
                                zmm4_1 = __andps_xmmxud_memxud(temp0_185, data_143f880b0)
                                float temp0_189[0x4] = _mm_sub_ps(temp0_182, temp0_184)
                                float temp0_190[0x4] = _mm_mul_ps(temp0_186, zmm13)
                                zmm10 = _mm_mul_ps(zmm10, zmm5_1)
                                float temp0_193[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_189)
                                float temp0_194[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0x29)
                                zmm9 = _mm_shuffle_ps(zmm10, zmm4_1, 0)
                                float temp0_196[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0x12)
                                zmm9 = _mm_shuffle_ps(zmm9, 
                                    _mm_shuffle_ps(temp0_193, zmm4_1, 0x32), 0x82)
                                float temp0_199[0x4] = _mm_shuffle_ps(zmm10, zmm4_1, 0x31)
                                float temp0_201[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_193, zmm4_1, 0x10), temp0_199, 0x88)
                                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, temp0_193, 0x12), 
                                    zmm4_1, 0xe8)
                                float var_198_1[0x4] = temp0_201
                                uint128_t var_1a8_1 = zmm9
                                uint128_t var_188_1 = zmm10
                                zmm8 = *(r15 + 0x220)
                                zmm11[0].q = zmm8 u>> 0x40
                                float temp0_204[0x4] = _mm_shuffle_ps(zmm8, zmm11, 0xc4)
                                float temp0_206[0x4] =
                                    _mm_mul_ps(temp0_194, _mm_shuffle_ps(zmm13, zmm13, 4))
                                float temp0_209[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_190, temp0_190, 0x1a), 
                                    _mm_shuffle_ps(temp0_190, temp0_190, 1))
                                float temp0_211[0x4] =
                                    _mm_mul_ps(temp0_196, _mm_shuffle_ps(zmm13, zmm13, 0xff))
                                float temp0_212[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                                float var_178_1[0x4] = temp0_204
                                float temp0_213[0x4] = _mm_add_ps(temp0_211, temp0_206)
                                float temp0_214[0x4] = _mm_sub_ps(temp0_206, temp0_211)
                                float temp0_215[0x4] = _mm_mul_ps(temp0_213, zmm15)
                                float temp0_216[0x4] = _mm_mul_ps(temp0_212, temp0_214)
                                zmm1_1 = __andps_xmmxud_memxud(
                                    _mm_mul_ps(_mm_sub_ps(zmm11, temp0_209), zmm15), data_143f880b0)
                                float temp0_222[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_215, zmm1_1, 0), 
                                    _mm_shuffle_ps(temp0_216, zmm1_1, 0x32), 0x82)
                                float temp0_223[0x4] = _mm_shuffle_ps(temp0_216, zmm1_1, 0x10)
                                float temp0_224[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0x55)
                                float temp0_226[0x4] = _mm_shuffle_ps(temp0_223, 
                                    _mm_shuffle_ps(temp0_215, zmm1_1, 0x31), 0x88)
                                float var_2e8_1[0x4] = temp0_222
                                float temp0_227[0x4] = _mm_mul_ps(temp0_224, temp0_201)
                                zmm11[0].q = zmm14 u>> 0x40
                                float temp0_228[0x4] = _mm_shuffle_ps(zmm14, zmm11, 0xc4)
                                float temp0_230[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0), zmm9)
                                float temp0_232[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_215, temp0_216, 0x12), zmm1_1, 0xe8)
                                float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa)
                                float temp0_234[0x4] = _mm_add_ps(temp0_227, temp0_230)
                                float temp0_236[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_204)
                                float temp0_237[0x4] = _mm_mul_ps(temp0_233, zmm10)
                                float temp0_239[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0), zmm9)
                                float temp0_240[0x4] = _mm_add_ps(temp0_234, temp0_237)
                                float var_2d8_1[0x4] = temp0_226
                                float var_2b8_1[0x4] = temp0_228
                                float temp0_242[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), zmm10)
                                float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_236)
                                float var_2c8_1[0x4] = temp0_232
                                float temp0_245[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_226, temp0_226, 0x55), temp0_201)
                                float var_8e8[0x4] = temp0_243
                                float temp0_247[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_232, temp0_232, 0x55), temp0_201)
                                float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
                                float temp0_250[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_226, temp0_226, 0xff), temp0_204)
                                float temp0_252[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0), zmm9)
                                float temp0_253[0x4] = _mm_add_ps(temp0_248, temp0_242)
                                float temp0_255[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), zmm10)
                                float temp0_256[0x4] = _mm_add_ps(temp0_247, temp0_252)
                                float temp0_257[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
                                float temp0_258[0x4] = _mm_add_ps(temp0_253, temp0_250)
                                float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_204)
                                float temp0_260[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0)
                                float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
                                float temp0_262[0x4] = _mm_mul_ps(temp0_260, zmm9)
                                int96_t var_8d8_1 = temp0_258[0].12
                                float temp0_263[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xaa)
                                float temp0_265[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_228, temp0_228, 0x55), temp0_201)
                                float temp0_266[0x4] = _mm_add_ps(temp0_261, temp0_259)
                                float temp0_267[0x4] = _mm_mul_ps(temp0_263, zmm10)
                                float temp0_268[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xff)
                                float temp0_269[0x4] = _mm_add_ps(temp0_265, temp0_262)
                                float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_204)
                                int96_t var_8c8_1 = temp0_266[0].12
                                int96_t var_8b8_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_269, temp0_267), temp0_270)[0].12
                                zmm11, zmm12, zmm14 = sub_1407740e0(&var_8e8, 0x322bcc77)
                                float zmm2_3[0x4] = var_8e8[0]
                                float zmm1_3 = var_8e8[1]
                                float zmm4_3[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_9f8, zmm12, 2), 
                                    data_143f88120 ^ zmm11)
                                uint32_t zmm0_3[0x4] = var_8e8[2]
                                zmm4_3 ^= data_143f88120
                                zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                                zmm1_3 = zmm1_3 * zmm4_3[0]
                                zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                                var_8e8[0] = zmm2_3[0]
                                float temp0_275[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                var_8e8[1] = zmm1_3
                                zmm1_3 = var_8d8_1:4.d * temp0_275[0]
                                var_8e8[2] = zmm0_3[0]
                                zmm0_3 = var_8d8_1:8.d
                                zmm0_3[0] = zmm0_3[0] f* temp0_275[0]
                                float zmm3_3 = var_8d8_1.d * temp0_275[0]
                                zmm2_3 = var_8c8_1.d
                                var_8d8_1:4.d = zmm1_3
                                var_8d8_1:8.d = zmm0_3[0]
                                zmm0_3 = var_8c8_1:8.d
                                float var_388_1[0x4] = zmm4_3
                                float temp0_276[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                                zmm1_3 = var_8c8_1:4.d * temp0_276[0]
                                zmm0_3[0] = zmm0_3[0] f* temp0_276[0]
                                zmm2_3[0] = zmm2_3[0] * temp0_276[0]
                                var_8c8_1:4.d = zmm1_3
                                var_8c8_1:8.d = zmm0_3[0]
                                var_8d8_1.d = zmm3_3
                                var_8c8_1.d = zmm2_3[0]
                                uint32_t var_678[0x4]
                                sub_14077e4a0(&var_678, &var_8e8)
                                zmm5_1 = var_678
                                zmm9 = zx.o(0)
                                zmm6 = data_143f880d0
                                float temp0_277[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                float temp0_279[0x4] = _mm_add_ps(temp0_277, 
                                    _mm_shuffle_ps(temp0_277, temp0_277, 0x4e))
                                float temp0_281[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_279, temp0_279, 0x39), temp0_279)
                                float temp0_282[0x4] = _mm_rsqrt_ps(temp0_281)
                                float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm6)
                                float temp0_288[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_282, temp0_282), 
                                                temp0_283)), 
                                        temp0_282), 
                                    temp0_282)
                                float temp0_291[0x4] = _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_283))
                                float temp0_293[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_281, 2)
                                zmm6 = _mm_and_ps(
                                    _mm_mul_ps(
                                        _mm_add_ps(_mm_mul_ps(temp0_291, temp0_288), temp0_288), 
                                        zmm5_1) ^ data_143f880c0, 
                                    temp0_293) ^ data_143f880c0
                                var_678 = zmm6
                                float var_7f8_4[0x4] = zmm6
                                float var_7e8_4[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_8b8_1.d, var_8b8_1:8.d[0].q), 
                                    _mm_unpacklo_ps(var_8b8_1:4.d, 0)[0].q)
                            
                            zmm10 = 0x80000000
                            zmm15 = 0x3f000000
                            float var_7d8_5[0x4] = zmm12
                        
                        float var_398_1[0x4] = zmm12
                        float var_6a8_1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)[0]
                        float temp0_339[0x4] =
                            _mm_unpacklo_ps(zmm12, _mm_shuffle_ps(zmm12, zmm12, 0x55)[0].q)
                        int64_t var_6b0_1 = temp0_339.q
                        int64_t var_990 = temp0_339.q
                        uint32_t rcx_23 = zx.d(*(rdi_2 + 0x88))
                        
                        if (rcx_23 == 0)
                            *(r13_2 + 0x14) = 0x64
                        else if (rcx_23 == 1)
                            *(r13_2 + 0x14) = 2
                        else if (rcx_23 == 2)
                            *(r13_2 + 0x14) = 4
                        
                        uint64_t rcx_25 = zx.q(*(rdi_2 + 0x70))
                        char rsi_2 = *(r15 + 0x291)
                        void* r15_2 = &r13_2[0x15]
                        int32_t rbx_6 = *(rdi_2 + 0x50) + (rcx_25 << 1).d + rcx_25.d
                            + *(rdi_2 + 0x40) + *(rdi_2 + 0x30) + *(rdi_2 + 0x60)
                        
                        if (rbx_6 s> *(r15_2 + 0xc))
                            sub_1405a5220(r15_2, rbx_6)
                        
                        if (rsi_2 == 1)
                            int64_t rsi_3 = sx.q(r13_2[0x12].d)
                            
                            if (rbx_6 s> rsi_3.d)
                                r13_2[0x12].d = rbx_6
                                
                                if (rbx_6 s> *(r13_2 + 0x94))
                                    sub_1405a4f90(&r13_2[0x11])
                                
                                memset((rsi_3 << 4) + r13_2[0x11], 0, sx.q(rbx_6 - rsi_3.d) << 4)
                            else if (rbx_6 s< rsi_3.d)
                                r9_1.b = 1
                                sub_140838580(&r13_2[0x11], rbx_6, rsi_3.d - rbx_6, r9_1.b)
                            
                            int64_t rsi_5 = sx.q(r13_2[0x14].d)
                            
                            if (rbx_6 s> rsi_5.d)
                                r13_2[0x14].d = rbx_6
                                
                                if (rbx_6 s> *(r13_2 + 0xa4))
                                    sub_1405a4f90(&r13_2[0x13])
                                
                                memset((rsi_5 << 4) + r13_2[0x13], 0, sx.q(rbx_6 - rsi_5.d) << 4)
                            else if (rbx_6 s< rsi_5.d)
                                r9_1.b = 1
                                sub_140838580(&r13_2[0x13], rbx_6, rsi_5.d - rbx_6, r9_1.b)
                        
                        int32_t rdx_17 = *(rdi_2 + 0x30) + (*(rdi_2 + 0x70) << 1)
                        float zmm0_1[0x4]
                        
                        if (rdx_17 != 0)
                            if (rdx_17 s> *(r13_2 + 0x24))
                                sub_1405c5570(&r13_2[3], rdx_17)
                            
                            void* rbx_7 = *(rdi_2 + 0x28)
                            void* i_1 = (sx.q(*(rdi_2 + 0x30)) << 6) + rbx_7
                            
                            if (rbx_7 != i_1)
                                float (* rbx_8)[0x4] = rbx_7 + 0x34
                                
                                do
                                    zmm7 = var_990.d
                                    zmm7[0] = zmm7[0] * (*rbx_8)[2]
                                    
                                    if (not(zmm7[0] < zmm14[0]))
                                        zmm6 = data_143f880a0
                                        zmm1_1 = zx.o(0)
                                        zmm0_1 = zmm6
                                        zmm6 = __andps_xmmxud_memxud(zmm6, data_143f880b0)
                                        zmm0_1[0].q = zmm1_1 u>> 0x40
                                        float var_4d8[0x4] = _mm_shuffle_ps(zmm1_1, zmm0_1, 0xc4)
                                        float var_4c8_1[0x4] = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps((*rbx_8)[-1], (*rbx_8)[1][0].q), 
                                            _mm_unpacklo_ps(*rbx_8, zmm9.q)[0].q)
                                        float var_4b8_1[0x4] = zmm6
                                        void*** rax_31 = j_sub_140a82f30(0x20)
                                        void*** rax_32
                                        
                                        if (rax_31 == 0)
                                            rax_32 = nullptr
                                        else
                                            r14 |= 1
                                            int64_t var_778 = 0
                                            int32_t var_770_1 = 0
                                            rax_32 = sub_1417a12b0(rax_31, &var_778, zmm7)
                                        
                                        sub_14278a310(r13_2, &var_4d8, rax_32)
                                        
                                        if ((r14.b & 1) != 0)
                                            r14 &= 0xfffffffe
                                    
                                    rbx_8 = &rbx_8[4]
                                while (&(*rbx_8)[-0xd] != i_1)
                                
                                r15_2 = &r13_2[0x15]
                        
                        int32_t rdx_20 = *(rdi_2 + 0x40)
                        
                        if (rdx_20 != 0)
                            if (rdx_20 s> *(r13_2 + 0x34))
                                sub_1405c5570(&r13_2[5], rdx_20)
                            
                            void* rcx_42 = *(rdi_2 + 0x38)
                            void* rax_36 = sx.q(*(rdi_2 + 0x40)) * 0x58 + rcx_42
                            var_9f8[0].q = rax_36
                            
                            if (rcx_42 != rax_36)
                                int128_t* r15_3 = rcx_42 + 0x34
                                
                                do
                                    void** var_548
                                    r9_1, zmm9, zmm10, zmm14, zmm15 = sub_142230c80(r15_3 - 0x34, 
                                        &var_548, &var_990, &data_143dbb0c0)
                                    int32_t var_500
                                    int32_t var_4fc
                                    int32_t var_4f8
                                    
                                    if (not(var_500[0] < zmm14[0]) && not(var_4fc[0] < zmm14[0])
                                            && not(var_4f8[0] < zmm14[0]))
                                        float var_578[0x4]
                                        sub_140ade170(r15_3 + 8, &var_578)
                                        zmm6 = var_4f8
                                        zmm2_1 = data_14399f66c
                                        zmm3_1 = data_14399f668
                                        zmm8 = var_500
                                        float var_478[0x4] = var_578
                                        int64_t zmm1_4 = *(r15_3 + 4)
                                        float zmm5_2[0x4] = *(r15_3 - 4)
                                        float zmm0_4[0x4] = data_14399f670
                                        float temp0_346[0x4] = _mm_unpacklo_ps(*r15_3, zmm9.q)
                                        float temp0_347[0x4] = _mm_unpacklo_ps(zmm2_1, zmm9.q)
                                        float temp0_348[0x4] = _mm_unpacklo_ps(zmm5_2, zmm1_4)
                                        float temp0_349[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_4[0].q)
                                        float temp0_350[0x4] =
                                            _mm_unpacklo_ps(temp0_348, temp0_346[0].q)
                                        float temp0_351[0x4] =
                                            _mm_unpacklo_ps(temp0_349, temp0_347[0].q)
                                        zmm6[0] = zmm6[0] * zmm15[0]
                                        float var_468_1[0x4] = temp0_350
                                        float var_458_1[0x4] = temp0_351
                                        float var_640_1 = zmm6[0]
                                        zmm8[0] = zmm8[0] * zmm15[0]
                                        zmm9.d = var_4fc.d f* zmm15[0]
                                        void*** rax_37 = j_sub_140a82f30(0x28)
                                        void*** rsi_9 = rax_37
                                        
                                        if (rax_37 == 0)
                                            rsi_9 = rax_37
                                        else
                                            float var_624_1 = (zmm6 ^ zmm10)[0]
                                            float temp0_352[0x4] = _mm_unpacklo_ps(zmm8, zmm9.q)
                                            r14 = r14 | 2 | 4
                                            float temp0_353[0x4] =
                                                _mm_unpacklo_ps(zmm8 ^ zmm10, (zmm9 ^ zmm10).q)
                                            sub_1417048d0(rax_37, 3, 1)
                                            *rsi_9 = &data_142fc4870
                                            rsi_9[2] = temp0_353.q
                                            rsi_9[3].d = var_624_1
                                            *(rsi_9 + 0x1c) = temp0_352.q
                                            *(rsi_9 + 0x24) = var_640_1
                                        
                                        int64_t rbx_10 = sx.q(r13_2[6].d)
                                        int32_t rax_38 = (rbx_10 + 1).d
                                        r13_2[6].d = rax_38
                                        
                                        if (rax_38 s> *(r13_2 + 0x34))
                                            sub_1405a4d70(&r13_2[5])
                                        
                                        *(r13_2[5] + (rbx_10 << 3)) = rsi_9
                                        sub_142793970(&r13_2[0x15], &var_478, 
                                            r13_2[4].d + r13_2[6].d - 1)
                                        
                                        if ((r14.b & 4) != 0)
                                            r14 &= 0xfffffffb
                                        
                                        if ((r14.b & 2) != 0)
                                            r14 &= 0xfffffffd
                                        
                                        zmm9 = zx.o(0)
                                    
                                    r15_3 += 0x58
                                    var_548 = &data_142e3e610
                                while (r15_3 - 0x34 != var_9f8[0].q)
                                
                                rdi_2 = var_9a8_1
                                r15_2 = &r13_2[0x15]
                        
                        int32_t rdx_25 = *(rdi_2 + 0x50)
                        
                        if (rdx_25 != 0)
                            if (rdx_25 s> *(r13_2 + 0x24))
                                sub_1405c5570(&r13_2[3], rdx_25)
                            
                            void* rbx_11 = *(rdi_2 + 0x48)
                            void* i_2 = sx.q(*(rdi_2 + 0x50)) * 0x50 + rbx_11
                            
                            if (rbx_11 != i_2)
                                int128_t* rbx_12 = rbx_11 + 0x34
                                
                                do
                                    zmm6 = var_990.d
                                    zmm6[0] = zmm6[0] f* *(rbx_12 + 0x14)
                                    
                                    if (not(zmm6[0] < zmm14[0]))
                                        float var_568[0x4]
                                        zmm6 = sub_140ade170(rbx_12 + 8, &var_568)
                                        zmm3_1 = data_14399f66c
                                        float var_4a8[0x4] = var_568
                                        int64_t zmm1_5 = *(rbx_12 + 4)
                                        float zmm5_3[0x4] = *(rbx_12 - 4)
                                        float zmm0_5[0x4] = data_14399f670
                                        float temp0_354[0x4] = _mm_unpacklo_ps(*rbx_12, zmm9.q)
                                        float temp0_356[0x4] = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(zmm5_3, zmm1_5), temp0_354[0].q)
                                        float var_488_1[0x4] = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(data_14399f668, zmm0_5[0].q), 
                                            _mm_unpacklo_ps(zmm3_1, zmm9.q)[0].q)
                                        float var_498_1[0x4] = temp0_356
                                        void*** rax_42 = j_sub_140a82f30(0x20)
                                        void*** rax_43
                                        
                                        if (rax_42 == 0)
                                            rax_43 = nullptr
                                        else
                                            r14 |= 8
                                            int64_t var_76c = 0
                                            int32_t var_764_1 = 0
                                            rax_43 = sub_1417a12b0(rax_42, &var_76c, zmm6)
                                        
                                        sub_14278a310(r13_2, &var_4a8, rax_43)
                                        
                                        if ((r14.b & 8) != 0)
                                            r14 &= 0xfffffff7
                                    
                                    rbx_12 = &rbx_12[5]
                                while (rbx_12 - 0x34 != i_2)
                                
                                r15_2 = &r13_2[0x15]
                        
                        int32_t rdx_29 = *(rdi_2 + 0x70)
                        
                        if (rdx_29 != 0)
                            if (rdx_29 s> *(r13_2 + 0x54))
                                sub_1405c5570(&r13_2[9], rdx_29)
                            
                            void* rbx_13 = *(rdi_2 + 0x68)
                            void* rax_47 = sx.q(*(rdi_2 + 0x70)) * 0x58 + rbx_13
                            int32_t var_9d0
                            var_9d0.q = rax_47
                            
                            if (rbx_13 != rax_47)
                                float (* rbx_14)[0x4] = rbx_13 + 0x34
                                
                                do
                                    uint32_t var_9e8
                                    uint32_t var_9e4
                                    sub_142231e50(&(*rbx_14)[-0xd], &var_990, &var_9e8, &var_9e4)
                                    
                                    if (var_9e8[0] >= zmm14[0] || not(var_9e4[0] < zmm14[0]))
                                        float var_558[0x4]
                                        sub_140ade170(&(*rbx_14)[2], &var_558)
                                        float zmm2_4[0x4] = data_14399f66c
                                        float zmm3_4[0x4] = data_14399f668
                                        float var_708[0x4] = var_558
                                        float zmm4_6[0x4] = *rbx_14
                                        float zmm0_6[0x4] = data_14399f670
                                        float temp0_360[0x4] =
                                            _mm_unpacklo_ps((*rbx_14)[-1], (*rbx_14)[1])
                                        float temp0_361[0x4] = _mm_unpacklo_ps(zmm4_6, zmm9.q)
                                        float temp0_362[0x4] = _mm_unpacklo_ps(zmm3_4, zmm0_6[0].q)
                                        float temp0_363[0x4] = _mm_unpacklo_ps(zmm2_4, zmm9.q)
                                        float temp0_364[0x4] =
                                            _mm_unpacklo_ps(temp0_360, temp0_361[0].q)
                                        float temp0_365[0x4] =
                                            _mm_unpacklo_ps(temp0_362, temp0_363[0].q)
                                        int64_t var_9a0 = 0
                                        float zmm0_7[0x4] =
                                            sub_142231db0(&(*rbx_14)[-0xd], &var_990)
                                        zmm0_7[0] = zmm0_7[0] * zmm15[0]
                                        float var_998_1 = zmm0_7[0]
                                        void*** rax_48 = j_sub_140a82f30(0x88)
                                        
                                        if (rax_48 != 0)
                                            zmm3_1 = var_9e8
                                            var_a58.d = var_9e4
                                            r14 |= 0x10
                                            float var_7c0_1 = (zmm0_7 ^ zmm10)[0]
                                            int32_t var_7c8 = 0x80000000
                                            int32_t var_7c4_1 = 0x80000000
                                            rax_48, zmm9 = sub_142786160(rax_48, &var_7c8, 
                                                &var_9a0, zmm3_1, var_a58)
                                        
                                        int64_t rdi_3 = sx.q(r13_2[0xa].d)
                                        int32_t rax_49 = (rdi_3 + 1).d
                                        r13_2[0xa].d = rax_49
                                        
                                        if (rax_49 s> *(r13_2 + 0x54))
                                            sub_1405a4d70(&r13_2[9])
                                        
                                        *(r13_2[9] + (rdi_3 << 3)) = rax_48
                                        sub_142793970(r15_2, &var_708, 
                                            r13_2[4].d + r13_2[0xa].d - 1 + r13_2[8].d + r13_2[6].d)
                                        
                                        if ((r14.b & 0x10) != 0)
                                            r14 &= 0xffffffef
                                        
                                        zmm10 = 0x38d1b717
                                        float zmm4_7[0x4]
                                        
                                        if (not(var_9e8[0] <= 9.99999975e-05f))
                                            zmm3_1 = (*rbx_14)[-1]
                                            zmm4_7 = (*rbx_14)[1]
                                            zmm2_1 = *rbx_14
                                            zmm1_1 = data_143f88130
                                            zmm8 = data_143f880a0
                                            zmm3_1[0] = zmm3_1[0] f- var_9a0.d
                                            zmm2_1[0] = zmm2_1[0] f- var_9a0:4.d
                                            zmm4_7[0] = zmm4_7[0] - var_998_1
                                            zmm8[0].q = zx.o(0) u>> 0x40
                                            zmm13 = __andps_xmmxud_memxud(zmm8, data_143f880b0)
                                            zmm12 = zmm3_1
                                            zmm3_1 = var_708
                                            float temp0_367[0x4] =
                                                _mm_shuffle_ps(zx.o(0), zmm8, 0xc4)
                                            float temp0_368[0x4] = _mm_unpacklo_ps(zmm2_1, zmm9.q)
                                            float temp0_369[0x4] = _mm_min_ps(zmm13, temp0_365)
                                            float temp0_370[0x4] =
                                                _mm_unpacklo_ps(zmm12, zmm4_7[0].q)
                                            float temp0_371[0x4] =
                                                _mm_cmpeq_ps(temp0_369, zmm1_1, 1)
                                            float temp0_372[0x4] =
                                                _mm_unpacklo_ps(temp0_370, temp0_368[0].q)
                                            var_9f8 = zmm1_1
                                            float var_418_1[0x4] = temp0_367
                                            float var_408_1[0x4] = temp0_372
                                            float var_3f8_1[0x4] = zmm13
                                            float var_5a8[0x4]
                                            
                                            if (_mm_movemask_ps(temp0_371) == 0)
                                                float temp0_505[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0), 
                                                    _mm_shuffle_ps(temp0_367, temp0_367, 0x1b))
                                                float temp0_506[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                                float temp0_507[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                                                float temp0_508[0x4] =
                                                    _mm_mul_ps(temp0_372, temp0_365)
                                                float temp0_509[0x4] =
                                                    __mulps_xmmps_memps(temp0_505, data_143f88110)
                                                float temp0_510[0x4] =
                                                    _mm_mul_ps(temp0_507, temp0_367)
                                                float temp0_511[0x4] = _mm_mul_ps(zmm13, temp0_365)
                                                float temp0_512[0x4] =
                                                    _mm_add_ps(temp0_509, temp0_510)
                                                float temp0_514[0x4] = _mm_mul_ps(temp0_506, 
                                                    _mm_shuffle_ps(temp0_367, temp0_367, 0x4e))
                                                float temp0_517[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), 
                                                    _mm_shuffle_ps(temp0_367, temp0_367, 0xb1))
                                                float temp0_518[0x4] =
                                                    __mulps_xmmps_memps(temp0_514, data_143f88100)
                                                float var_588_2[0x4] = temp0_511
                                                float temp0_519[0x4] =
                                                    __mulps_xmmps_memps(temp0_517, data_143f880f0)
                                                float temp0_520[0x4] =
                                                    _mm_add_ps(temp0_512, temp0_518)
                                                float temp0_521[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
                                                float temp0_522[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                                                float temp0_523[0x4] =
                                                    _mm_add_ps(temp0_520, temp0_519)
                                                float temp0_525[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_508, temp0_508, 0xc9), 
                                                    temp0_521)
                                                var_5a8 = temp0_523
                                                float temp0_528[0x4] = _mm_sub_ps(
                                                    _mm_mul_ps(
                                                        _mm_shuffle_ps(temp0_508, temp0_508, 0xd2), 
                                                        temp0_522), 
                                                    temp0_525)
                                                float temp0_529[0x4] =
                                                    _mm_add_ps(temp0_528, temp0_528)
                                                float temp0_530[0x4] =
                                                    _mm_mul_ps(temp0_507, temp0_529)
                                                float temp0_532[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_529, temp0_529, 0xc9), 
                                                    temp0_521)
                                                float temp0_533[0x4] =
                                                    _mm_shuffle_ps(temp0_529, temp0_529, 0xd2)
                                                float temp0_534[0x4] =
                                                    _mm_add_ps(temp0_530, temp0_508)
                                                float var_598_2[0x4] = __addps_xmmps_memps(
                                                    _mm_add_ps(
                                                        _mm_sub_ps(
                                                            _mm_mul_ps(temp0_533, temp0_522), 
                                                            temp0_532), 
                                                        temp0_534), 
                                                    temp0_364)
                                            else
                                                float temp0_374[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                                                float temp0_375[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                                float temp0_376[0x4] =
                                                    _mm_shuffle_ps(temp0_365, temp0_365, 0xc9)
                                                _mm_mul_ps(zmm13, temp0_365)
                                                float temp0_379[0x4] = _mm_mul_ps(temp0_375, 
                                                    _mm_shuffle_ps(temp0_374, temp0_374, 0x29))
                                                float temp0_380[0x4] = _mm_mul_ps(temp0_374, zmm3_1)
                                                float temp0_381[0x4] =
                                                    _mm_shuffle_ps(temp0_374, temp0_374, 0x12)
                                                float temp0_383[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_381)
                                                float temp0_386[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_380, temp0_380, 0x1a), 
                                                    _mm_shuffle_ps(temp0_380, temp0_380, 1))
                                                zmm10 = _mm_add_ps(temp0_383, temp0_379)
                                                float temp0_388[0x4] =
                                                    _mm_sub_ps(temp0_379, temp0_383)
                                                float temp0_389[0x4] =
                                                    _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                                                float temp0_390[0x4] = _mm_sub_ps(zmm8, temp0_386)
                                                zmm10 = _mm_mul_ps(zmm10, temp0_365)
                                                float temp0_392[0x4] =
                                                    _mm_mul_ps(temp0_376, temp0_388)
                                                float temp0_393[0x4] =
                                                    _mm_mul_ps(temp0_390, temp0_365)
                                                float temp0_394[0x4] =
                                                    _mm_add_ps(temp0_367, temp0_367)
                                                zmm1_1 =
                                                    __andps_xmmxud_memxud(temp0_393, data_143f880b0)
                                                float temp0_396[0x4] =
                                                    _mm_shuffle_ps(temp0_392, zmm1_1, 0x32)
                                                float temp0_397[0x4] =
                                                    _mm_mul_ps(temp0_394, temp0_367)
                                                zmm9 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zmm10, zmm1_1, 0), temp0_396, 
                                                    0x82)
                                                float temp0_400[0x4] =
                                                    _mm_shuffle_ps(zmm10, zmm1_1, 0x31)
                                                float temp0_402[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_392, zmm1_1, 0x10), 
                                                    temp0_400, 0x88)
                                                zmm8[0].q = temp0_364 u>> 0x40
                                                float temp0_403[0x4] =
                                                    _mm_shuffle_ps(temp0_364, zmm8, 0xc4)
                                                float temp0_404[0x4] =
                                                    _mm_shuffle_ps(temp0_367, temp0_367, 4)
                                                float temp0_405[0x4] =
                                                    _mm_shuffle_ps(temp0_367, temp0_367, 0xff)
                                                zmm10 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zmm10, temp0_392, 0x12), zmm1_1, 
                                                    0xe8)
                                                float temp0_409[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_394, temp0_394, 0x29), 
                                                    temp0_404)
                                                float temp0_412[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_397, temp0_397, 0x1a), 
                                                    _mm_shuffle_ps(temp0_397, temp0_397, 1))
                                                float temp0_414[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_394, temp0_394, 0x12), 
                                                    temp0_405)
                                                uint128_t var_2a8_1 = zmm9
                                                float var_298_1[0x4] = temp0_402
                                                uint128_t var_288_1 = zmm10
                                                float var_278_1[0x4] = temp0_403
                                                float temp0_415[0x4] =
                                                    _mm_add_ps(temp0_414, temp0_409)
                                                float temp0_416[0x4] =
                                                    _mm_sub_ps(temp0_409, temp0_414)
                                                float temp0_417[0x4] = _mm_mul_ps(temp0_415, zmm13)
                                                float temp0_418[0x4] =
                                                    _mm_mul_ps(temp0_389, temp0_416)
                                                zmm1_1 = __andps_xmmxud_memxud(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(data_143f880a0, temp0_412), 
                                                        zmm13), 
                                                    data_143f880b0)
                                                float temp0_424[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_417, zmm1_1, 0), 
                                                    _mm_shuffle_ps(temp0_418, zmm1_1, 0x32), 0x82)
                                                float var_268_1[0x4] = temp0_424
                                                float temp0_425[0x4] =
                                                    _mm_shuffle_ps(temp0_418, zmm1_1, 0x10)
                                                float temp0_426[0x4] =
                                                    _mm_shuffle_ps(temp0_417, zmm1_1, 0x31)
                                                float temp0_427[0x4] =
                                                    _mm_shuffle_ps(temp0_424, temp0_424, 0x55)
                                                float temp0_428[0x4] =
                                                    _mm_shuffle_ps(temp0_425, temp0_426, 0x88)
                                                zmm0_1 = data_143f880a0
                                                float temp0_429[0x4] =
                                                    _mm_mul_ps(temp0_427, temp0_402)
                                                zmm0_1[0].q = temp0_372 u>> 0x40
                                                float temp0_430[0x4] =
                                                    _mm_shuffle_ps(temp0_372, zmm0_1, 0xc4)
                                                float temp0_432[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_424, temp0_424, 0), zmm9)
                                                float temp0_434[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_417, temp0_418, 0x12), 
                                                    zmm1_1, 0xe8)
                                                float temp0_435[0x4] =
                                                    _mm_shuffle_ps(temp0_424, temp0_424, 0xaa)
                                                float temp0_436[0x4] =
                                                    _mm_add_ps(temp0_429, temp0_432)
                                                float temp0_438[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_424, temp0_424, 0xff), 
                                                    temp0_403)
                                                float temp0_439[0x4] = _mm_mul_ps(temp0_435, zmm10)
                                                float temp0_441[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_428, temp0_428, 0), zmm9)
                                                float temp0_442[0x4] =
                                                    _mm_add_ps(temp0_436, temp0_439)
                                                float var_258_1[0x4] = temp0_428
                                                float var_248_1[0x4] = temp0_434
                                                float temp0_444[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_428, temp0_428, 0xaa), 
                                                    zmm10)
                                                float temp0_445[0x4] =
                                                    _mm_add_ps(temp0_442, temp0_438)
                                                float var_238_1[0x4] = temp0_430
                                                float temp0_447[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_428, temp0_428, 0x55), 
                                                    temp0_402)
                                                float var_868[0x4] = temp0_445
                                                float temp0_449[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_434, temp0_434, 0x55), 
                                                    temp0_402)
                                                float temp0_450[0x4] =
                                                    _mm_add_ps(temp0_447, temp0_441)
                                                float temp0_452[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_428, temp0_428, 0xff), 
                                                    temp0_403)
                                                float temp0_454[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_434, temp0_434, 0), zmm9)
                                                float temp0_455[0x4] =
                                                    _mm_add_ps(temp0_450, temp0_444)
                                                float temp0_457[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_434, temp0_434, 0xaa), 
                                                    zmm10)
                                                float temp0_458[0x4] =
                                                    _mm_add_ps(temp0_449, temp0_454)
                                                float temp0_459[0x4] =
                                                    _mm_shuffle_ps(temp0_434, temp0_434, 0xff)
                                                float temp0_460[0x4] =
                                                    _mm_add_ps(temp0_455, temp0_452)
                                                float temp0_461[0x4] =
                                                    _mm_mul_ps(temp0_459, temp0_403)
                                                float temp0_462[0x4] =
                                                    _mm_shuffle_ps(temp0_430, temp0_430, 0)
                                                float temp0_463[0x4] =
                                                    _mm_add_ps(temp0_458, temp0_457)
                                                float temp0_464[0x4] = _mm_mul_ps(temp0_462, zmm9)
                                                int96_t var_858_1 = temp0_460[0].12
                                                float temp0_465[0x4] =
                                                    _mm_shuffle_ps(temp0_430, temp0_430, 0xaa)
                                                float temp0_467[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_430, temp0_430, 0x55), 
                                                    temp0_402)
                                                float temp0_468[0x4] =
                                                    _mm_add_ps(temp0_463, temp0_461)
                                                float temp0_469[0x4] = _mm_mul_ps(temp0_465, zmm10)
                                                float temp0_470[0x4] =
                                                    _mm_shuffle_ps(temp0_430, temp0_430, 0xff)
                                                float temp0_471[0x4] =
                                                    _mm_add_ps(temp0_467, temp0_464)
                                                float temp0_472[0x4] =
                                                    _mm_mul_ps(temp0_470, temp0_403)
                                                int96_t var_848_1 = temp0_468[0].12
                                                int96_t var_838_1 = _mm_add_ps(
                                                    _mm_add_ps(temp0_471, temp0_469), temp0_472)[0].12
                                                zmm11, zmm14, zmm15 = sub_1407740e0(&var_868, zmm14)
                                                float zmm4_8[0x4] = _mm_and_ps(
                                                    _mm_cmpeq_ps(var_9f8, zmm11, 2), 
                                                    data_143f88120 ^ data_143f880a0) ^ data_143f88120
                                                float zmm2_5[0x4] = var_868[0]
                                                float zmm1_7 = var_868[1]
                                                uint32_t zmm0_9[0x4] = var_868[2]
                                                zmm2_5[0] = zmm2_5[0] * zmm4_8[0]
                                                zmm1_7 = zmm1_7 * zmm4_8[0]
                                                zmm0_9[0] = zmm0_9[0] f* zmm4_8[0]
                                                var_868[0] = zmm2_5[0]
                                                float temp0_477[0x4] =
                                                    _mm_shuffle_ps(zmm4_8, zmm4_8, 0x55)
                                                var_868[1] = zmm1_7
                                                zmm1_7 = var_858_1:4.d * temp0_477[0]
                                                var_868[2] = zmm0_9[0]
                                                zmm0_9 = var_858_1:8.d
                                                zmm0_9[0] = zmm0_9[0] f* temp0_477[0]
                                                float zmm3_5 = var_858_1.d * temp0_477[0]
                                                zmm2_5 = var_848_1.d
                                                var_858_1:4.d = zmm1_7
                                                var_858_1:8.d = zmm0_9[0]
                                                zmm0_9 = var_848_1:8.d
                                                float var_3a8_1[0x4] = zmm4_8
                                                float temp0_478[0x4] =
                                                    _mm_shuffle_ps(zmm4_8, zmm4_8, 0xaa)
                                                zmm1_7 = var_848_1:4.d * temp0_478[0]
                                                zmm0_9[0] = zmm0_9[0] f* temp0_478[0]
                                                zmm2_5[0] = zmm2_5[0] * temp0_478[0]
                                                var_848_1:4.d = zmm1_7
                                                var_848_1:8.d = zmm0_9[0]
                                                var_858_1.d = zmm3_5
                                                var_848_1.d = zmm2_5[0]
                                                uint32_t var_668[0x4]
                                                sub_14077e4a0(&var_668, &var_868)
                                                uint32_t zmm5_6[0x4] = var_668
                                                zmm9 = zx.o(0)
                                                zmm6 = data_143f880d0
                                                zmm10 = 0x38d1b717
                                                uint32_t zmm1_8[0x4] = _mm_mul_ps(zmm5_6, zmm5_6)
                                                float var_588_1[0x4] = zmm11
                                                zmm1_8 = _mm_add_ps(zmm1_8, 
                                                    _mm_shuffle_ps(zmm1_8, zmm1_8, 0x4e))
                                                uint32_t zmm4_9[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(zmm1_8, zmm1_8, 0x39), zmm1_8)
                                                zmm1_8 = _mm_rsqrt_ps(zmm4_9)
                                                float temp0_485[0x4] = _mm_mul_ps(zmm4_9, zmm6)
                                                float temp0_490[0x4] = _mm_add_ps(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(zmm6, 
                                                            _mm_mul_ps(_mm_mul_ps(zmm1_8, zmm1_8), 
                                                                temp0_485)), 
                                                        zmm1_8), 
                                                    zmm1_8)
                                                float temp0_493[0x4] = _mm_sub_ps(zmm6, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_490, temp0_490), 
                                                        temp0_485))
                                                uint32_t zmm0_10[0x4] = _mm_cmpeq_ps(
                                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                                    zmm4_9, 2)
                                                float temp0_497[0x4] = _mm_add_ps(
                                                    _mm_mul_ps(temp0_493, temp0_490), temp0_490)
                                                float temp0_498[0x4] =
                                                    _mm_unpacklo_ps(var_838_1:4.d, 0)
                                                zmm6 = _mm_and_ps(
                                                    _mm_mul_ps(temp0_497, zmm5_6) ^ data_143f880c0, 
                                                    zmm0_10) ^ data_143f880c0
                                                float var_598_1[0x4] = _mm_unpacklo_ps(
                                                    _mm_unpacklo_ps(var_838_1.d, 
                                                        var_838_1:8.d[0].q), 
                                                    temp0_498[0].q)
                                                var_668 = zmm6
                                                var_5a8 = zmm6
                                            
                                            void*** rax_52 = j_sub_140a82f30(0x20)
                                            
                                            if (rax_52 != 0)
                                                zmm2_1 = var_9e8
                                                r14 |= 0x20
                                                int64_t var_7bc = 0
                                                int32_t var_7b4_1 = 0
                                                rax_52 = sub_1417a12b0(rax_52, &var_7bc, zmm2_1)
                                            
                                            var_9f8[0].q = rax_52
                                            int64_t r12_7 = sx.q(r13_2[4].d)
                                            int32_t rax_53 = (r12_7 + 1).d
                                            r13_2[4].d = rax_53
                                            
                                            if (rax_53 s> *(r13_2 + 0x24))
                                                sub_1405a4d70(&r13_2[3])
                                            
                                            *(r13_2[3] + (r12_7 << 3)) = var_9f8[0].q
                                            sub_142793970(r15_2, &var_5a8, r13_2[4].d - 1)
                                            
                                            if ((r14.b & 0x20) != 0)
                                                r14 &= 0xffffffdf
                                        
                                        if (not(var_9e4[0] f<= zmm10.d))
                                            zmm2_1 = *rbx_14
                                            zmm12 = zx.o(0)
                                            zmm8 = data_143f880a0
                                            zmm3_1 = var_9a0.d
                                            zmm3_1[0] = zmm3_1[0] + (*rbx_14)[-1]
                                            zmm4_7 = var_998_1
                                            zmm4_7[0] = zmm4_7[0] + (*rbx_14)[1]
                                            zmm1_1 = data_143f88130
                                            zmm7 = data_143f880b0
                                            zmm14 = _mm_and_ps(zmm8, zmm7)
                                            zmm2_1[0] = zmm2_1[0] f+ var_9a0:4.d
                                            zmm8[0].q = zmm12 u>> 0x40
                                            float temp0_540[0x4] = _mm_shuffle_ps(zmm12, zmm8, 0xc4)
                                            float temp0_541[0x4] = _mm_min_ps(zmm14, temp0_365)
                                            float temp0_542[0x4] =
                                                _mm_unpacklo_ps(zmm3_1, zmm4_7[0].q)
                                            uint32_t temp0_544 =
                                                _mm_movemask_ps(_mm_cmpeq_ps(temp0_541, zmm1_1, 1))
                                            float temp0_546[0x4] = _mm_unpacklo_ps(temp0_542, 
                                                _mm_unpacklo_ps(zmm2_1, zmm9.q)[0].q)
                                            float var_3e8_1[0x4] = temp0_540
                                            float var_3d8_1[0x4] = temp0_546
                                            float var_3c8_1[0x4] = zmm14
                                            var_9f8 = zmm1_1
                                            float var_608[0x4]
                                            
                                            if (temp0_544 == 0)
                                                zmm4_7 = var_708
                                                float temp0_676[0x4] =
                                                    _mm_shuffle_ps(temp0_540, temp0_540, 0x1b)
                                                float temp0_678[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0), temp0_676)
                                                float temp0_679[0x4] =
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55)
                                                float temp0_680[0x4] =
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0xff)
                                                float temp0_681[0x4] =
                                                    _mm_mul_ps(temp0_546, temp0_365)
                                                float temp0_682[0x4] =
                                                    __mulps_xmmps_memps(temp0_678, data_143f88110)
                                                float temp0_683[0x4] =
                                                    _mm_mul_ps(temp0_680, temp0_540)
                                                float temp0_684[0x4] =
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0xd2)
                                                float temp0_685[0x4] = _mm_mul_ps(zmm14, temp0_365)
                                                float temp0_686[0x4] =
                                                    _mm_add_ps(temp0_682, temp0_683)
                                                float temp0_688[0x4] = _mm_mul_ps(temp0_679, 
                                                    _mm_shuffle_ps(temp0_540, temp0_540, 0x4e))
                                                float temp0_689[0x4] =
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa)
                                                float temp0_690[0x4] =
                                                    _mm_shuffle_ps(zmm4_7, zmm4_7, 0xc9)
                                                float temp0_691[0x4] =
                                                    _mm_shuffle_ps(temp0_540, temp0_540, 0xb1)
                                                float temp0_692[0x4] =
                                                    __mulps_xmmps_memps(temp0_688, data_143f88100)
                                                float temp0_693[0x4] =
                                                    _mm_mul_ps(temp0_689, temp0_691)
                                                float var_5e8_2[0x4] = temp0_685
                                                zmm14 = 0x322bcc77
                                                float temp0_696[0x4] = _mm_add_ps(
                                                    _mm_add_ps(temp0_686, temp0_692), 
                                                    __mulps_xmmps_memps(temp0_693, data_143f880f0))
                                                float temp0_698[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_681, temp0_681, 0xc9), 
                                                    temp0_684)
                                                var_608 = temp0_696
                                                float temp0_701[0x4] = _mm_sub_ps(
                                                    _mm_mul_ps(
                                                        _mm_shuffle_ps(temp0_681, temp0_681, 0xd2), 
                                                        temp0_690), 
                                                    temp0_698)
                                                float temp0_702[0x4] =
                                                    _mm_add_ps(temp0_701, temp0_701)
                                                float temp0_703[0x4] =
                                                    _mm_mul_ps(temp0_680, temp0_702)
                                                float temp0_705[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_702, temp0_702, 0xd2), 
                                                    temp0_690)
                                                float temp0_706[0x4] =
                                                    _mm_shuffle_ps(temp0_702, temp0_702, 0xc9)
                                                float temp0_707[0x4] =
                                                    _mm_add_ps(temp0_703, temp0_681)
                                                float var_5f8_2[0x4] = __addps_xmmps_memps(
                                                    _mm_add_ps(
                                                        _mm_sub_ps(temp0_705, 
                                                            _mm_mul_ps(temp0_706, temp0_684)), 
                                                        temp0_707), 
                                                    temp0_364)
                                            else
                                                zmm3_1 = var_708
                                                float temp0_547[0x4] =
                                                    _mm_shuffle_ps(temp0_365, temp0_365, 0xc9)
                                                float temp0_548[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                                                float temp0_549[0x4] =
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                                                _mm_mul_ps(zmm14, temp0_365)
                                                float temp0_552[0x4] = _mm_mul_ps(temp0_549, 
                                                    _mm_shuffle_ps(temp0_548, temp0_548, 0x29))
                                                float temp0_553[0x4] = _mm_mul_ps(temp0_548, zmm3_1)
                                                float temp0_554[0x4] =
                                                    _mm_shuffle_ps(temp0_548, temp0_548, 0x12)
                                                float temp0_556[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_554)
                                                float temp0_559[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_553, temp0_553, 0x1a), 
                                                    _mm_shuffle_ps(temp0_553, temp0_553, 1))
                                                zmm10 = _mm_add_ps(temp0_556, temp0_552)
                                                float temp0_561[0x4] =
                                                    _mm_sub_ps(temp0_552, temp0_556)
                                                float temp0_562[0x4] =
                                                    _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                                                float temp0_563[0x4] = _mm_sub_ps(zmm8, temp0_559)
                                                zmm10 = _mm_mul_ps(zmm10, temp0_365)
                                                float temp0_565[0x4] =
                                                    _mm_mul_ps(temp0_547, temp0_561)
                                                float temp0_566[0x4] =
                                                    _mm_mul_ps(temp0_563, temp0_365)
                                                float temp0_567[0x4] =
                                                    _mm_shuffle_ps(temp0_540, temp0_540, 4)
                                                zmm1_1 = _mm_and_ps(temp0_566, zmm7)
                                                float temp0_569[0x4] =
                                                    _mm_shuffle_ps(temp0_565, zmm1_1, 0x32)
                                                zmm9 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zmm10, zmm1_1, 0), temp0_569, 
                                                    0x82)
                                                float temp0_572[0x4] =
                                                    _mm_shuffle_ps(zmm10, zmm1_1, 0x31)
                                                float temp0_574[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_565, zmm1_1, 0x10), 
                                                    temp0_572, 0x88)
                                                zmm8[0].q = temp0_364 u>> 0x40
                                                float temp0_575[0x4] =
                                                    _mm_shuffle_ps(temp0_364, zmm8, 0xc4)
                                                zmm10 = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(zmm10, temp0_565, 0x12), zmm1_1, 
                                                    0xe8)
                                                float temp0_578[0x4] =
                                                    _mm_add_ps(temp0_540, temp0_540)
                                                uint128_t var_228_1 = zmm9
                                                float var_218_1[0x4] = temp0_574
                                                uint128_t var_208_1 = zmm10
                                                float var_1f8_1[0x4] = temp0_575
                                                float temp0_579[0x4] =
                                                    _mm_shuffle_ps(temp0_578, temp0_578, 0x29)
                                                float temp0_580[0x4] =
                                                    _mm_mul_ps(temp0_578, temp0_540)
                                                float temp0_581[0x4] =
                                                    _mm_mul_ps(temp0_567, temp0_579)
                                                float temp0_582[0x4] =
                                                    _mm_shuffle_ps(temp0_578, temp0_578, 0x12)
                                                float temp0_584[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_540, temp0_540, 0xff), 
                                                    temp0_582)
                                                float temp0_587[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_580, temp0_580, 0x1a), 
                                                    _mm_shuffle_ps(temp0_580, temp0_580, 1))
                                                float temp0_588[0x4] =
                                                    _mm_add_ps(temp0_584, temp0_581)
                                                float temp0_589[0x4] =
                                                    _mm_sub_ps(temp0_581, temp0_584)
                                                zmm12 = data_143f880a0
                                                float temp0_590[0x4] = _mm_sub_ps(zmm12, temp0_587)
                                                float temp0_591[0x4] = _mm_mul_ps(temp0_588, zmm14)
                                                float temp0_592[0x4] =
                                                    _mm_mul_ps(temp0_562, temp0_589)
                                                zmm1_1 = __andps_xmmxud_memxud(
                                                    _mm_mul_ps(temp0_590, zmm14), data_143f880b0)
                                                float temp0_597[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_591, zmm1_1, 0), 
                                                    _mm_shuffle_ps(temp0_592, zmm1_1, 0x32), 0x82)
                                                float temp0_598[0x4] =
                                                    _mm_shuffle_ps(temp0_597, temp0_597, 0x55)
                                                float temp0_599[0x4] =
                                                    _mm_shuffle_ps(temp0_591, zmm1_1, 0x31)
                                                float temp0_601[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_592, zmm1_1, 0x10), 
                                                    temp0_599, 0x88)
                                                float var_1e8_1[0x4] = temp0_597
                                                float temp0_602[0x4] =
                                                    _mm_mul_ps(temp0_598, temp0_574)
                                                zmm12[0].q = temp0_546 u>> 0x40
                                                float temp0_603[0x4] =
                                                    _mm_shuffle_ps(temp0_546, zmm12, 0xc4)
                                                float temp0_605[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_597, temp0_597, 0), zmm9)
                                                float temp0_607[0x4] = _mm_shuffle_ps(
                                                    _mm_shuffle_ps(temp0_591, temp0_592, 0x12), 
                                                    zmm1_1, 0xe8)
                                                float temp0_608[0x4] =
                                                    _mm_shuffle_ps(temp0_597, temp0_597, 0xaa)
                                                float temp0_609[0x4] =
                                                    _mm_add_ps(temp0_602, temp0_605)
                                                float temp0_611[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_597, temp0_597, 0xff), 
                                                    temp0_575)
                                                float temp0_612[0x4] = _mm_mul_ps(temp0_608, zmm10)
                                                float temp0_614[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_601, temp0_601, 0), zmm9)
                                                float temp0_615[0x4] =
                                                    _mm_add_ps(temp0_609, temp0_612)
                                                float var_1d8_1[0x4] = temp0_601
                                                float var_1c8_1[0x4] = temp0_607
                                                float temp0_617[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_601, temp0_601, 0xaa), 
                                                    zmm10)
                                                float temp0_618[0x4] =
                                                    _mm_add_ps(temp0_615, temp0_611)
                                                float var_1b8_1[0x4] = temp0_603
                                                float temp0_620[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_601, temp0_601, 0x55), 
                                                    temp0_574)
                                                float var_928[0x4] = temp0_618
                                                float temp0_622[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_607, temp0_607, 0x55), 
                                                    temp0_574)
                                                float temp0_623[0x4] =
                                                    _mm_add_ps(temp0_620, temp0_614)
                                                float temp0_625[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_601, temp0_601, 0xff), 
                                                    temp0_575)
                                                float temp0_627[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_607, temp0_607, 0), zmm9)
                                                float temp0_628[0x4] =
                                                    _mm_add_ps(temp0_623, temp0_617)
                                                float temp0_630[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_607, temp0_607, 0xaa), 
                                                    zmm10)
                                                float temp0_631[0x4] =
                                                    _mm_add_ps(temp0_622, temp0_627)
                                                float temp0_632[0x4] =
                                                    _mm_shuffle_ps(temp0_607, temp0_607, 0xff)
                                                float temp0_633[0x4] =
                                                    _mm_add_ps(temp0_628, temp0_625)
                                                float temp0_634[0x4] =
                                                    _mm_mul_ps(temp0_632, temp0_575)
                                                float temp0_635[0x4] =
                                                    _mm_shuffle_ps(temp0_603, temp0_603, 0)
                                                float temp0_636[0x4] =
                                                    _mm_add_ps(temp0_631, temp0_630)
                                                float temp0_637[0x4] = _mm_mul_ps(temp0_635, zmm9)
                                                int96_t var_918_1 = temp0_633[0].12
                                                float temp0_638[0x4] =
                                                    _mm_shuffle_ps(temp0_603, temp0_603, 0xaa)
                                                float temp0_640[0x4] = _mm_mul_ps(
                                                    _mm_shuffle_ps(temp0_603, temp0_603, 0x55), 
                                                    temp0_574)
                                                float temp0_641[0x4] =
                                                    _mm_add_ps(temp0_636, temp0_634)
                                                float temp0_642[0x4] = _mm_mul_ps(temp0_638, zmm10)
                                                float temp0_643[0x4] =
                                                    _mm_shuffle_ps(temp0_603, temp0_603, 0xff)
                                                float temp0_644[0x4] =
                                                    _mm_add_ps(temp0_640, temp0_637)
                                                float temp0_645[0x4] =
                                                    _mm_mul_ps(temp0_643, temp0_575)
                                                int96_t var_908_1 = temp0_641[0].12
                                                int96_t var_8f8_1 = _mm_add_ps(
                                                    _mm_add_ps(temp0_644, temp0_642), temp0_645)[0].12
                                                zmm11, zmm12, zmm14, zmm15 =
                                                    sub_1407740e0(&var_928, 0x322bcc77)
                                                float zmm2_6[0x4] = var_928[0]
                                                float zmm1_9 = var_928[1]
                                                float zmm4_10[0x4] = _mm_and_ps(
                                                    _mm_cmpeq_ps(var_9f8, zmm11, 2), 
                                                    data_143f88120 ^ zmm12)
                                                uint32_t zmm0_11[0x4] = var_928[2]
                                                zmm4_10 ^= data_143f88120
                                                zmm2_6[0] = zmm2_6[0] * zmm4_10[0]
                                                zmm1_9 = zmm1_9 * zmm4_10[0]
                                                zmm0_11[0] = zmm0_11[0] f* zmm4_10[0]
                                                var_928[0] = zmm2_6[0]
                                                float temp0_650[0x4] =
                                                    _mm_shuffle_ps(zmm4_10, zmm4_10, 0x55)
                                                var_928[1] = zmm1_9
                                                zmm1_9 = var_918_1:4.d * temp0_650[0]
                                                var_928[2] = zmm0_11[0]
                                                zmm0_11 = var_918_1:8.d
                                                zmm0_11[0] = zmm0_11[0] f* temp0_650[0]
                                                float zmm3_6 = var_918_1.d * temp0_650[0]
                                                zmm2_6 = var_908_1.d
                                                var_918_1:4.d = zmm1_9
                                                var_918_1:8.d = zmm0_11[0]
                                                zmm0_11 = var_908_1:8.d
                                                float var_3b8_1[0x4] = zmm4_10
                                                float temp0_651[0x4] =
                                                    _mm_shuffle_ps(zmm4_10, zmm4_10, 0xaa)
                                                zmm1_9 = var_908_1:4.d * temp0_651[0]
                                                zmm0_11[0] = zmm0_11[0] f* temp0_651[0]
                                                zmm2_6[0] = zmm2_6[0] * temp0_651[0]
                                                var_908_1:4.d = zmm1_9
                                                var_908_1:8.d = zmm0_11[0]
                                                var_918_1.d = zmm3_6
                                                var_908_1.d = zmm2_6[0]
                                                uint32_t var_658[0x4]
                                                sub_14077e4a0(&var_658, &var_928)
                                                uint32_t zmm5_7[0x4] = var_658
                                                zmm9 = zx.o(0)
                                                zmm6 = data_143f880d0
                                                uint32_t zmm1_10[0x4] = _mm_mul_ps(zmm5_7, zmm5_7)
                                                float var_5e8_1[0x4] = zmm11
                                                zmm1_10 = _mm_add_ps(zmm1_10, 
                                                    _mm_shuffle_ps(zmm1_10, zmm1_10, 0x4e))
                                                uint32_t zmm4_11[0x4] = _mm_add_ps(
                                                    _mm_shuffle_ps(zmm1_10, zmm1_10, 0x39), zmm1_10)
                                                zmm1_10 = _mm_rsqrt_ps(zmm4_11)
                                                float temp0_658[0x4] = _mm_mul_ps(zmm4_11, zmm6)
                                                float temp0_663[0x4] = _mm_add_ps(
                                                    _mm_mul_ps(
                                                        _mm_sub_ps(zmm6, 
                                                            _mm_mul_ps(
                                                                _mm_mul_ps(zmm1_10, zmm1_10), 
                                                                temp0_658)), 
                                                        zmm1_10), 
                                                    zmm1_10)
                                                float temp0_666[0x4] = _mm_sub_ps(zmm6, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_663, temp0_663), 
                                                        temp0_658))
                                                uint32_t zmm0_12[0x4] = _mm_cmpeq_ps(
                                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), 
                                                    zmm4_11, 2)
                                                zmm6 = _mm_and_ps(
                                                    _mm_mul_ps(
                                                        _mm_add_ps(
                                                            _mm_mul_ps(temp0_666, temp0_663), 
                                                            temp0_663), 
                                                        zmm5_7) ^ data_143f880c0, 
                                                    zmm0_12) ^ data_143f880c0
                                                var_658 = zmm6
                                                var_608 = zmm6
                                                float var_5f8_1[0x4] = _mm_unpacklo_ps(
                                                    _mm_unpacklo_ps(var_8f8_1.d, 
                                                        var_8f8_1:8.d[0].q), 
                                                    _mm_unpacklo_ps(var_8f8_1:4.d, 0)[0].q)
                                            
                                            void*** rax_56 = j_sub_140a82f30(0x20)
                                            
                                            if (rax_56 != 0)
                                                zmm2_1 = var_9e4
                                                r14 |= 0x40
                                                int64_t var_7b0 = 0
                                                int32_t var_7a8_1 = 0
                                                rax_56 = sub_1417a12b0(rax_56, &var_7b0, zmm2_1)
                                            
                                            var_9f8[0].q = rax_56
                                            int64_t r12_8 = sx.q(r13_2[4].d)
                                            int32_t rax_57 = (r12_8 + 1).d
                                            r13_2[4].d = rax_57
                                            
                                            if (rax_57 s> *(r13_2 + 0x24))
                                                sub_1405a4d70(&r13_2[3])
                                            
                                            *(r13_2[3] + (r12_8 << 3)) = var_9f8[0].q
                                            sub_142793970(r15_2, &var_608, r13_2[4].d - 1)
                                            
                                            if ((r14.b & 0x40) != 0)
                                                r14 &= 0xffffffbf
                                    
                                    zmm10 = 0x80000000
                                    rbx_14 = &(*rbx_14)[0x16]
                                while (&(*rbx_14)[-0xd] != var_9d0.q)
                                
                                rdi_2 = var_9a8_1
                        
                        int32_t rdx_46 = *(rdi_2 + 0x60)
                        
                        if (rdx_46 != 0)
                            if (rdx_46 s> *(r13_2 + 0x64))
                                sub_1405c5570(&r13_2[0xb], rdx_46)
                            
                            void* rdi_4 = *(rdi_2 + 0x58)
                            var_9f8[0].q = rdi_4
                            void* r15_5 = sx.q(*(var_9a8_1 + 0x60)) * 0xb0 + rdi_4
                            void* var_9a8_2 = r15_5
                            
                            while (rdi_4 != r15_5)
                                int64_t i_8 = sx.q(*(rdi_4 + 0x38))
                                
                                if (i_8.d s>= 4)
                                    int32_t r12_9 = 0
                                    int64_t var_9d8_1 = 0
                                    int64_t rbx_15 = 0
                                    float var_5d8[0x4] = *(rdi_4 + 0x70)
                                    int64_t var_9e0 = 0
                                    zmm0_1 = *(rdi_4 + 0x90)
                                    zmm1_1 = *(rdi_4 + 0x80)
                                    float var_438_1[0x4] = zmm0_1
                                    zmm0_1[0] = zmm0_1[0] f* var_990.d
                                    float temp0_712[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                                    temp0_712[0] = temp0_712[0] f* var_990:4.d
                                    float var_428_1[0x4] = zmm0_1
                                    float var_448_1[0x4] = zmm0_1
                                    float temp0_713[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
                                    temp0_713[0] = temp0_713[0] * var_6a8_1
                                    float temp0_714[0x4] = _mm_unpacklo_ps(temp0_712, zmm9.q)
                                    float var_5c8_1[0x4] = zmm1_1
                                    float temp0_716[0x4] = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(zmm0_1, temp0_713[0].q), temp0_714[0].q)
                                    int32_t temp1_1 = i_8.d
                                    
                                    if (temp1_1 s> 0)
                                        var_9d8_1.d = i_8.d
                                        sub_14083a7e0(&var_9e0)
                                        rbx_15 = var_9e0
                                    else if (temp1_1 s< 0)
                                        r9_1.b = 1
                                        sub_14090c370(&var_9e0, i_8.d, neg.d(i_8.d), r9_1.b)
                                        rbx_15 = var_9e0
                                    
                                    zmm2_1 = data_143dbb1f8
                                    int64_t i_7 = i_8
                                    zmm1_1 = data_143dbb1fc
                                    zmm0_1 = data_143dbb200
                                    float var_a14_1 = zmm2_1[0]
                                    float var_a10_1 = zmm1_1[0]
                                    float var_a0c_1 = zmm0_1[0]
                                    float var_a20 = zmm2_1[0]
                                    float var_a1c_1 = zmm1_1[0]
                                    float var_a18_1 = zmm0_1[0]
                                    char var_a08_1 = 0
                                    
                                    if (i_8.d s> 0)
                                        int64_t* rdx_49 = nullptr
                                        int64_t i_3
                                        
                                        do
                                            int64_t rax_62 = *(rdi_4 + 0x30)
                                            int32_t rcx_78 = *(rdx_49 + rax_62 + 8)
                                            *(rdx_49 + rbx_15) = *(rdx_49 + rax_62)
                                            *(rdx_49 + rbx_15 + 8) = rcx_78
                                            rbx_15 = var_9e0
                                            
                                            if (var_a08_1 == 0)
                                                var_a14_1.q = *(rdx_49 + rbx_15)
                                                float rax_63 = *(rdx_49 + rbx_15 + 8)
                                                zmm1_1 = var_a10_1
                                                var_a20 = var_a14_1[0]
                                                var_a0c_1 = rax_63
                                                zmm0_1 = var_a0c_1
                                                var_a18_1 = zmm0_1[0]
                                                var_a1c_1 = zmm1_1[0]
                                                var_a08_1 = 1
                                            else
                                                zmm1_1 = *(rdx_49 + rbx_15)
                                                
                                                if (not(var_a20[0] <= zmm1_1[0]))
                                                    var_a20 = zmm1_1[0]
                                                
                                                zmm1_1 = *(rdx_49 + rbx_15 + 4)
                                                
                                                if (not(var_a1c_1[0] <= zmm1_1[0]))
                                                    var_a1c_1 = zmm1_1[0]
                                                
                                                zmm1_1 = *(rdx_49 + rbx_15 + 8)
                                                
                                                if (not(var_a18_1[0] <= zmm1_1[0]))
                                                    var_a18_1 = zmm1_1[0]
                                                
                                                zmm1_1 = *(rdx_49 + rbx_15)
                                                
                                                if (not(var_a14_1[0] >= zmm1_1[0]))
                                                    var_a14_1 = zmm1_1[0]
                                                
                                                zmm1_1 = *(rdx_49 + rbx_15 + 4)
                                                
                                                if (not(var_a10_1[0] >= zmm1_1[0]))
                                                    var_a10_1 = zmm1_1[0]
                                                
                                                zmm1_1 = *(rdx_49 + rbx_15 + 8)
                                                zmm0_1 = var_a0c_1
                                                
                                                if (not(zmm0_1[0] >= zmm1_1[0]))
                                                    var_a0c_1 = zmm1_1[0]
                                            
                                            rdx_49 += 0xc
                                            i_3 = i_7
                                            i_7 -= 1
                                        while (i_3 != 1)
                                    
                                    int64_t* rax_64 = sub_140a54cc0(rdi_4)
                                    
                                    if (rax_64 != 0)
                                        (*(*rax_64 + 0x58))(zmm0_1, zmm1_1, i_7)
                                        int64_t rdx_51 = *rax_64
                                        int32_t rax_65 = (*(rdx_51 + 0x40))(rax_64, rdx_51)
                                        int32_t r15_6 = rax_65
                                        int64_t var_9c8 = 0
                                        int64_t var_9c0_1 = 0
                                        
                                        if (rax_65 s> 0)
                                            sub_14083ad30(&var_9c8, rax_65)
                                        
                                        if (r15_6 != 0)
                                            do
                                                void var_168
                                                int16_t var_158
                                                
                                                if ((*(*rax_64 + 0x48))(rax_64, zx.q(r12_9), 
                                                        &var_168) != 0)
                                                    int16_t var_156
                                                    
                                                    if (var_158 == 3)
                                                        int64_t rbx_16 = sx.q(var_9c0_1.d)
                                                        char* rax_71 = (*(*rax_64 + 0x38))(rax_64)
                                                            + zx.q(var_156)
                                                        uint32_t rdi_5 = zx.d(rax_71[2])
                                                        uint32_t rax_72 = zx.d(*rax_71)
                                                        int32_t rax_73 = (rbx_16 + 1).d
                                                        uint32_t var_6a0_1 = zx.d(rax_71[1])
                                                        var_9c0_1.d = rax_73
                                                        
                                                        if (rax_73 s> var_9c0_1:4.d)
                                                            sub_14083a7e0(&var_9c8)
                                                        
                                                        int64_t rax_74 = var_9c8
                                                        int64_t rcx_87 = rbx_16 * 3
                                                        *(rax_74 + (rcx_87 << 2)) = rax_72.q
                                                        *(rax_74 + (rcx_87 << 2) + 8) = rdi_5
                                                    else if (var_158 u> 3)
                                                        int32_t i_4 = 2
                                                        
                                                        if (2 u< var_158)
                                                            do
                                                                int64_t rdi_6 = sx.q(var_9c0_1.d)
                                                                char* rax_77 =
                                                                    (*(*rax_64 + 0x38))(rax_64)
                                                                    + zx.q(var_156)
                                                                uint32_t r15_7 =
                                                                    zx.d(rax_77[zx.q(i_4 - 1)])
                                                                uint32_t rax_78 = zx.d(*rax_77)
                                                                int32_t rax_79 = (rdi_6 + 1).d
                                                                uint32_t var_694_1 =
                                                                    zx.d(rax_77[zx.q(i_4)])
                                                                var_9c0_1.d = rax_79
                                                                
                                                                if (rax_79 s> var_9c0_1:4.d)
                                                                    sub_14083a7e0(&var_9c8)
                                                                
                                                                int64_t rax_80 = var_9c8
                                                                int64_t rcx_93 = rdi_6 * 3
                                                                i_4 += 1
                                                                *(rax_80 + (rcx_93 << 2)) = rax_78.q
                                                                *(rax_80 + (rcx_93 << 2) + 8) = r15_7
                                                            while (i_4 u< zx.d(var_158))
                                                            
                                                            r15_6 = rax_65
                                                r12_9 += 1
                                            while (r12_9 u< r15_6)
                                            
                                            r13_2 = var_970_2
                                        
                                        (**rax_64)(rax_64)
                                        int32_t rdx_57 = var_9d8_1.d
                                        zmm0_1 = var_a14_1
                                        zmm1_1 = var_a0c_1
                                        void** const var_748 = &data_142fc4250
                                        int64_t rax_83 = var_9e0
                                        int32_t var_714_1 = var_9d8_1:4.d
                                        int64_t var_740
                                        __builtin_memset(&var_740, 0, 0x14)
                                        var_9e0 = 0
                                        int32_t var_718_1 = rdx_57
                                        int64_t var_9d8_2 = 0
                                        void** const var_728 = &data_142fc4220
                                        char var_710_1 = 0
                                        zmm9.d = var_a10_1.d f- var_a1c_1
                                        zmm0_1[0] = zmm0_1[0] - var_a20
                                        zmm1_1[0] = zmm1_1[0] - var_a18_1
                                        zmm9.d = zmm9.d f* zmm15[0]
                                        zmm0_1[0] = zmm0_1[0] * zmm15[0]
                                        zmm1_1[0] = zmm1_1[0] * zmm15[0]
                                        zmm9 =
                                            _mm_max_ss(_mm_max_ss(zmm9.d, zmm0_1[0]).d, zmm1_1[0])
                                        
                                        if (rdx_57 != 0)
                                            sub_1417502a0(&var_748, rdx_57)
                                        
                                        sub_14172eb30(&var_748, &var_728)
                                        int64_t* rax_85 = j_sub_140a82f30(0x188)
                                        int64_t* rdi_7
                                        
                                        if (rax_85 == 0)
                                            rdi_7 = nullptr
                                        else
                                            rdi_7 =
                                                sub_1417a1310(rax_85, &var_9c8, 0, 0xffffffff, 1)
                                        
                                        int64_t var_760 = 0
                                        int64_t var_758_1 = 0
                                        int16_t var_7a0_1 = 0
                                        int64_t var_798
                                        sub_140596d10(&var_798, &var_760)
                                        int64_t rcx_99 = var_760
                                        
                                        if (rcx_99 != 0)
                                            sub_140a74f90(rcx_99)
                                        
                                        zmm2_1 = var_788
                                        int32_t var_784
                                        zmm1_1 = var_784
                                        int32_t var_780
                                        uint128_t zmm0_13 = var_780
                                        
                                        if (zmm2_1[0] <= zmm1_1[0] || not(zmm2_1[0] f> zmm0_13.d))
                                            zmm2_1 = _mm_max_ss(zmm0_13[0], zmm1_1[0])
                                        
                                        bool cond:9_1 = zmm2_1[0] <= zmm14[0]
                                        zmm0_13 = _mm_cvtepi32_ps(zx.o(*(var_968 + 0x2a0)))
                                        
                                        if (cond:9_1)
                                            zmm1_1 = zmm0_13
                                        else
                                            zmm1_1 = zmm9
                                            zmm1_1[0] = zmm1_1[0] / zmm2_1[0]
                                            zmm1_1[0] = zmm1_1[0] f* zmm0_13.d
                                        
                                        zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
                                        zmm0_13.d = -0.5f - zmm1_1[0]
                                        int32_t rbx_17 = int.d(zmm0_13.d)
                                        bool cond:10_1 = zmm2_1[0] <= zmm14[0]
                                        zmm0_13 = _mm_cvtepi32_ps(zx.o(*(var_968 + 0x2a4)))
                                        
                                        if (cond:10_1)
                                            zmm10 = zmm0_13
                                        else
                                            zmm10.d = zmm9.d f/ zmm2_1[0]
                                            zmm10.d = zmm10.d f* zmm0_13.d
                                        
                                        zmm7 = var_a0c_1
                                        zmm8 = var_a10_1
                                        zmm6 = var_a14_1
                                        zmm7[0] = zmm7[0] - var_a18_1
                                        zmm8[0] = zmm8[0] - var_a1c_1
                                        zmm6[0] = zmm6[0] - var_a20
                                        char var_620 = var_7a0_1.b
                                        char var_61f_1 = var_7a0_1:1.b
                                        void var_618
                                        sub_140596d10(&var_618, &var_798)
                                        char rax_89 = *(var_968 + 0x291)
                                        zmm10.d = zmm10.d f+ zmm10.d
                                        zmm8[0] = zmm8[0] * zmm8[0]
                                        char var_a30_1 = 3
                                        float var_a40_1 = 100f
                                        zmm6[0] = zmm6[0] * zmm6[0]
                                        zmm7[0] = zmm7[0] * zmm7[0]
                                        zmm8[0] = zmm8[0] + zmm6[0]
                                        zmm8[0] = zmm8[0] + zmm7[0]
                                        zmm8[0] = zmm8[0] * 0.25f
                                        var_a58.d = _mm_sqrt_ss(0, zmm8[0]) * zmm15[0]
                                        void*** rax_90
                                        rax_90, r9_1, zmm9, zmm14, zmm15 = sub_141d2a1f0(&var_620, 
                                            &var_748, rdi_7, &var_a20, var_a58, 
                                            neg.d(rbx_17 s>> 1), 
                                            neg.d(int.d(-0.5f f- zmm10.d) s>> 1), var_a40_1, 
                                            rax_89, var_a30_1)
                                        
                                        if (var_7a0_1.b != 0)
                                            if (rax_90 != 0)
                                                sub_141762300(rax_90)
                                                j_sub_140a74f90(rax_90)
                                            
                                            void*** rax_97 = j_sub_140a82f30(0x20)
                                            void*** rsi_15 = rax_97
                                            
                                            if (rax_97 == 0)
                                                rsi_15 = nullptr
                                            else
                                                zmm6 = var_a14_1
                                                zmm6[0] = zmm6[0] + var_a20
                                                r14 |= 0x80
                                                zmm1_1 = var_a10_1
                                                zmm1_1[0] = zmm1_1[0] + var_a1c_1
                                                zmm6[0] = zmm6[0] * zmm15[0]
                                                float zmm0_15 = (var_a0c_1 + var_a18_1) * zmm15[0]
                                                zmm1_1[0] = zmm1_1[0] * zmm15[0]
                                                float temp0_723[0x4] =
                                                    _mm_unpacklo_ps(zmm6, zmm1_1[0].q)
                                                sub_1417048d0(rax_97, 3, 0)
                                                zmm9.d = zmm9.d f* zmm15[0]
                                                *rsi_15 = &data_142fc46f0
                                                rsi_15[2] = temp0_723.q
                                                rsi_15[3].d = zmm0_15
                                                *(rsi_15 + 0x1c) = zmm9.d
                                            
                                            int64_t r15_9 = sx.q(r13_2[4].d)
                                            int32_t rax_98 = (r15_9 + 1).d
                                            r13_2[4].d = rax_98
                                            
                                            if (rax_98 s> *(r13_2 + 0x24))
                                                sub_1405a4d70(&r13_2[3])
                                            
                                            *(r13_2[3] + (r15_9 << 3)) = rsi_15
                                            sub_142793970(&r13_2[0x15], &var_5d8, r13_2[4].d - 1)
                                            
                                            if (r14.b s< 0)
                                                r14 &= 0xffffff7f
                                        else
                                            int64_t r15_8 = sx.q(r13_2[0xe].d)
                                            int32_t rcx_105 = (r15_8 + 1).d
                                            r13_2[0xe].d = rcx_105
                                            
                                            if (rcx_105 s> *(r13_2 + 0x74))
                                                sub_1405a4d70(&r13_2[0xd])
                                            
                                            *(r13_2[0xd] + (r15_8 << 3)) = rax_90
                                            int64_t rbx_20 = sx.q(r13_2[0x16].d)
                                            int32_t rax_92 = (rbx_20 + 1).d
                                            r13_2[0x16].d = rax_92
                                            
                                            if (rax_92 s> *(r13_2 + 0xb4))
                                                sub_140638970(&r13_2[0x15])
                                            
                                            int64_t rax_93 = r13_2[0x15]
                                            int64_t rcx_109 = rbx_20 * 6
                                            *(rax_93 + (rcx_109 << 3)) = var_5d8
                                            *(rax_93 + (rcx_109 << 3) + 0x10) = var_5c8_1
                                            *(rax_93 + (rcx_109 << 3) + 0x20) = temp0_716
                                            
                                            if (rsi_2 == 1)
                                                int64_t var_828 = 0
                                                var_828 = *rdi_7
                                                *rdi_7 = 0
                                                int32_t var_820_1 = rdi_7[1].d
                                                int32_t var_81c_1 = *(rdi_7 + 0xc)
                                                rdi_7[1] = 0
                                                int64_t rbx_21 = rbx_20 << 4
                                                sub_140597da0(r13_2[0x11] + rbx_21, &var_9e0)
                                                sub_140597da0(r13_2[0x13] + rbx_21, &var_828)
                                                int64_t rcx_114 = var_828
                                                
                                                if (rcx_114 != 0)
                                                    sub_140a74f90(rcx_114)
                                        
                                        int64_t rcx_120 = var_798
                                        
                                        if (rcx_120 != 0)
                                            sub_140a74f90(rcx_120)
                                        
                                        if (rdi_7 != 0)
                                            sub_1417a2b70(rdi_7)
                                            j_sub_140a74f90(rdi_7)
                                        
                                        var_748 = &data_142fc4250
                                        var_728 = &data_142fc4220
                                        
                                        if (rax_83 != 0)
                                            sub_140a74f90(rax_83)
                                        
                                        int64_t rcx_124 = var_740
                                        var_748 = &data_142fc4068
                                        
                                        if (rcx_124 != 0)
                                            sub_140a74f90(rcx_124)
                                        
                                        int64_t rcx_125 = var_9c8
                                        
                                        if (rcx_125 != 0)
                                            sub_140a74f90(rcx_125)
                                        
                                        r15_5 = var_9a8_2
                                        zmm9 = zx.o(0)
                                        rdi_4 = var_9f8[0].q
                                        rbx_15 = var_9e0
                                    
                                    if (rbx_15 != 0)
                                        sub_140a74f90(rbx_15)
                                
                                rdi_4 += 0xb0
                                var_9f8[0].q = rdi_4
                        
                        int64_t rbx_23 = sx.q(*(var_930_1 + 8))
                        int32_t rax_100 = (rbx_23 + 1).d
                        *(var_930_1 + 8) = rax_100
                        
                        if (rax_100 s> *(var_930_1 + 0xc))
                            sub_1405a4d70(var_930_1)
                        
                        *(*var_930_1 + (rbx_23 << 3)) = r13_2
                        int64_t r15_10 = *var_930_1
                        int64_t rsi_17 = sx.q(*(var_930_1 + 0x18))
                        int32_t r12_10 = *(*(r15_10 + (rbx_23 << 3)) + 8)
                        int32_t rax_103 = (rsi_17 + 1).d
                        *(var_930_1 + 0x18) = rax_103
                        
                        if (rax_103 s> *(var_930_1 + 0x1c))
                            sub_1405a4cf0(var_930_1 + 0x10)
                        
                        *(*(var_930_1 + 0x10) + (rsi_17 << 2)) = r12_10
                        r12_1 = var_930_1
                        int64_t var_6d0 = *(r15_10 + (rbx_23 << 3))
                        int32_t var_940 = *(*(r15_10 + (rbx_23 << 3)) + 8)
                        sub_140bd26e0(r12_1 + 0x30, &var_940, &var_6d0)
                        rcx_3 = var_810_1
                        i_5 = 0
                        rax_5 = var_6c8_1
                        zmm10 = 0x80000000
                        r15 = var_968
                        r13_1 = var_818_1
                    
                    rcx_3 = &rcx_3[1]
                    var_810_1 = rcx_3
                while (rcx_3 != rax_5)
            
            if (var_9b0_1.d s> 0)
                void* r14_2 = nullptr
                
                do
                    int64_t rbx_25 = sx.q(*(r14_2 + var_9b8))
                    void var_6d8
                    
                    if (rbx_25.d != 0xffffffff
                            && *sub_141838f70(r15 + 0x40, &var_6d8, rbx_25.d) == 0xffffffff)
                        int64_t* rax_109 = j_sub_140a82f30(0x110)
                        
                        if (rax_109 != 0)
                            int64_t var_6c0 = *(*(r13_1 + 0x78) + rbx_25 * 0xc)
                            rax_109 = sub_1427869c0(rax_109, &var_6c0, rbx_25.d)
                        
                        int64_t* var_808 = rax_109
                        int32_t rdx_78 = *(*(r13_1 + 0x78) + rbx_25 * 0xc + 8)
                        int32_t var_980 = rdx_78
                        *(rax_109 + 0xc) = rdx_78
                        sub_14278a390(r12_1, &var_808)
                        
                        if (var_980 != 0xffffffff)
                            sub_1408d92c0(&var_9b8, &var_980)
                        
                        int64_t* rbx_26 = var_808
                        
                        if (rbx_26 != 0)
                            sub_141d2ee50(rbx_26)
                            j_sub_140a74f90(rbx_26)
                    
                    i_5 += 1
                    r14_2 += 4
                while (i_5 s< var_9b0_1.d)
            
            sub_1427929f0(r12_1)
            sub_142795810(r12_1)
            void* rax_111 = var_6b8[0x26]
            int128_t* rax_112
            
            if (rax_111 == 0)
                rax_112 = &data_143dbb0c0
            else
                rax_112 = rax_111 + 0x1c0
            
            sub_1427964b0(r12_1, rax_112)
            int32_t* rsi_18 = *(r15 + 0x20)
            int64_t r14_3 = 0
            uint64_t r12_12 = sx.q(*(r15 + 0x28)) << 2 u>> 2
            
            if (rsi_18 u> &rsi_18[sx.q(*(r15 + 0x28))])
                r12_12 = 0
            
            void* r13_3
            
            if (r12_12 == 0)
                r13_3 = var_930_1
            else
                void* rdi_9 = r15 + 0x40
                r13_3 = r15 + 0x10
                
                do
                    int32_t rbx_27 = *rsi_18
                    int128_t zmm1_11 = data_143dbb0d0
                    int128_t var_148 = data_143dbb0c0
                    int128_t var_128_1 = data_143dbb0e0
                    int128_t var_138_1 = zmm1_11
                    int32_t var_938 = rbx_27
                    int32_t var_97c = 0xffffffff
                    int32_t var_93c
                    sub_141838f70(rdi_9, &var_93c, rbx_27)
                    int64_t rax_115 = sx.q(var_93c)
                    void* const rdx_85
                    
                    if (rax_115.d == 0xffffffff)
                        rdx_85 = nullptr
                    else
                        rdx_85 = *rdi_9 + rax_115 * 0x18
                    
                    var_a58.q = &var_97c
                    
                    if (sub_142310e40(arg3[0x86], **(rdx_85 + 8), &var_148, &var_938, var_a58) == 0)
                        sub_141838f70(rdi_9, &var_978, rbx_27)
                        int64_t rax_121 = sx.q(var_978)
                        void* const r8_40
                        
                        if (rax_121.d == 0xffffffff)
                            r8_40 = nullptr
                        else
                            r8_40 = *rdi_9 + rax_121 * 0x18
                        
                        void var_118
                        sub_1427965f0(r13_3, rbx_27, 
                            (*(*arg3 + 0x408))(arg3, &var_118, **(r8_40 + 8), 3))
                    else
                        int32_t var_934
                        sub_14090a310(r15 + 0xa0, &var_934, rbx_27)
                        int64_t rax_119 = sx.q(var_934)
                        void* const r8_39
                        
                        if (rax_119.d == 0xffffffff)
                            r8_39 = nullptr
                        else
                            r8_39 = (rax_119 << 4) + *(r15 + 0xa0)
                        
                        r15 = var_968
                        *(*(r15 + 0x30) + (sx.q(*(r8_39 + 4)) << 2)) = var_97c
                    
                    rsi_18 = &rsi_18[1]
                    r14_3 += 1
                while (r14_3 != r12_12)
            
            result = sub_141d3df80(r13_3)
            int32_t* rcx_151 = var_9b8
            
            if (rcx_151 != 0)
                result = sub_140a74f90(rcx_151)

__security_check_cookie(rax_1 ^ &var_a78)
return result
