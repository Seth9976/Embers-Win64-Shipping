// 函数: sub_141d34930
// 地址: 0x141d34930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
*(arg1 + 0x268) = 0
int32_t* rax_3 = (*(*(arg1 + 0x5d0) + 0x10))(arg1 + 0x5d0)
int32_t rax_4 = sub_141d1f690(arg1 + 0x398, data_143f37078)
int64_t r8 = *(rax_3 + 0x50)
void* rdi = &rax_3[0x14]
int64_t r14 = sx.q(rax_4)

if ((*(r8 + 0x48))(rdi, arg2, r8) != r14.d)
    sub_141d3c6b0(rax_3, arg1 + 0x398)
    *rax_3 = *(arg1 + 0x1e4)
    rax_3[1] = *(arg1 + 0x1e0)

float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
(*(*rdi + 0x20))(rdi, arg1 + 0x448)
(*(*(rax_3 + 0x98) + 0x20))(&rax_3[0x26], arg1 + 0x478)
(*(*(rax_3 + 0x80) + 0x20))(&rax_3[0x20], arg1 + 0x460)
int32_t i = 0
int64_t rbx = r14
int32_t var_218 = 0
int32_t r11 = 0
int64_t var_210 = rbx
float var_208[0x4]
float var_178[0x4]
float var_138[0x4]
float var_108[0x4]

if (r14.d s> 0)
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    r14 = 0
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float (* r12_1)[0x4] = nullptr
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    
    do
        *(r14 + *(rax_3 + 8)) = 1
        int64_t* rdi_1 = *(*(arg1 + 0x208) + (r14 << 3))
        
        if (rdi_1 != 0)
            char r8_1 = *(sx.q(rdi_1[1].d) + *(*rdi_1 + 0x398))
            
            if (r8_1 != 1)
                int64_t rdx_5 = *(rax_3 + 0xd0)
                int32_t rcx_10 = sx.d(r8_1)
                
                if (rcx_10 == 1)
                    *(rdx_5 + (r14 << 2)) = 1
                else if (rcx_10 == 2)
                    *(rdx_5 + (r14 << 2)) = 2
                else if (rcx_10 == 3)
                    *(rdx_5 + (r14 << 2)) = 3
                else
                    *(rdx_5 + (r14 << 2)) = 4
            
            int64_t r8_2 = sx.q(rdi_1[1].d)
            void* r9_1 = *rdi_1
            int64_t r10_2 = r8_2 * 2
            int64_t* rcx_22
            float zmm2[0x4]
            float zmm3[0x4]
            float zmm5_1[0x4]
            
            if (*(r8_2 + *(r9_1 + 0x368)) != 0)
                rcx_22 = *(*(r9_1 + 0x428) + (r10_2 << 3))
                
                if (rcx_22 != 0)
                    int64_t* rbx_2 = nullptr
                    
                    if (*(rcx_22 + 0xc) u>= 3)
                        rbx_2 = rcx_22
                    
                    if (rbx_2 != 0)
                        int64_t rdx_12 = *(arg1 + 0x1e8)
                        
                        if (*(rdx_12 + (r14 << 3)) != rbx_2)
                            if (*(*(arg1 + 0x468) + (r14 << 2)) != 0xffffffff)
                                *(*(rax_3 + 0x88) + (r14 << 2)) = 0xffffffff
                                sub_14090a370(
                                    sx.q(*(*(arg1 + 0x468) + (r14 << 2))) * 0x50 + *(arg1 + 0x480), 
                                    r11)
                                *(*(arg1 + 0x468) + (r14 << 2)) = 0xffffffff
                                *(r14 + *(rax_3 + 8)) = 0
                                rdx_12 = *(arg1 + 0x1e8)
                                *(arg1 + 0x268) = 1
                                r8_2 = zx.q(rdi_1[1].d)
                                r9_1 = *rdi_1
                            
                            *(rdx_12 + (r14 << 3)) = *(*(r9_1 + 0x428) + sx.q(r8_2.d) * 0x10)
                        
                        void* r9_2 = *rbx_2
                        int64_t rdx_14 = sx.q(rbx_2[1].d)
                        
                        if (*(rdx_14 + *(r9_2 + 0x470)) != 0)
                            int64_t rcx_29 = rdx_14 * 3
                            zmm8 = data_14399f668
                            arg2 = zx.o(0)
                            zmm15 = data_143f37510
                            int64_t* rdi_2 = *(*(arg1 + 0x208) + (r14 << 3))
                            int128_t* r8_7 = *(rax_3 + 0x28) + r12_1
                            int64_t rax_36 = *(r9_2 + 0x28)
                            zmm2 = *(rax_36 + (rcx_29 << 2) + 4)
                            int64_t rax_37 = sx.q(rdi_2[1].d)
                            zmm5_1 = *((rdx_14 << 4) + *(r9_2 + 0x68))
                            float temp0_28[0x4] = _mm_unpacklo_ps(*(rax_36 + (rcx_29 << 2)), 
                                (*(rax_36 + (rcx_29 << 2) + 8))[0].q)
                            float temp0_29[0x4] = _mm_unpacklo_ps(zmm8, data_14399f670[0].q)
                            int64_t rax_38 = *rdi_2
                            float temp0_31[0x4] =
                                _mm_unpacklo_ps(temp0_28, _mm_unpacklo_ps(zmm2, arg2[0].q)[0].q)
                            float (* rcx_32)[0x4] = rax_37 * 0x30 + *(rax_38 + 0x440)
                            float temp0_33[0x4] = _mm_unpacklo_ps(temp0_29, 
                                _mm_unpacklo_ps(data_14399f66c, arg2[0].q)[0].q)
                            zmm14 = rcx_32[2]
                            int128_t* var_1d0_1 = r8_7
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, temp0_33), zmm15, 1))
                                    == 0)
                                zmm2 = *rcx_32
                                zmm3 = rcx_32[1]
                                float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                                    _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                                float temp0_169[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                                float temp0_170[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                                float temp0_171[0x4] = _mm_mul_ps(zmm3, temp0_33)
                                float temp0_172[0x4] =
                                    __mulps_xmmps_memps(temp0_168, data_143f37400)
                                float temp0_173[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                float temp0_174[0x4] = _mm_mul_ps(zmm2, temp0_173)
                                zmm13 = _mm_mul_ps(zmm14, temp0_33)
                                float temp0_176[0x4] = _mm_add_ps(temp0_172, temp0_174)
                                float temp0_178[0x4] =
                                    _mm_mul_ps(temp0_169, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                                float temp0_180[0x4] =
                                    _mm_mul_ps(temp0_170, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                                float temp0_181[0x4] =
                                    __mulps_xmmps_memps(temp0_178, data_143f373f0)
                                float temp0_182[0x4] = _mm_shuffle_ps(temp0_171, temp0_171, 0xc9)
                                float temp0_183[0x4] =
                                    __mulps_xmmps_memps(temp0_180, data_143f373e0)
                                float temp0_184[0x4] = _mm_add_ps(temp0_176, temp0_181)
                                float temp0_185[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                float temp0_186[0x4] = _mm_mul_ps(temp0_182, temp0_185)
                                float temp0_187[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                zmm6 = _mm_add_ps(temp0_184, temp0_183)
                                float temp0_191[0x4] = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_171, temp0_171, 0xd2), 
                                        temp0_187), 
                                    temp0_186)
                                float temp0_192[0x4] = _mm_add_ps(temp0_191, temp0_191)
                                float temp0_193[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xd2)
                                float temp0_194[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xc9)
                                float temp0_195[0x4] = _mm_mul_ps(temp0_193, temp0_187)
                                float temp0_196[0x4] = _mm_mul_ps(temp0_194, temp0_185)
                                float temp0_197[0x4] = _mm_mul_ps(temp0_192, temp0_173)
                                zmm7 = _mm_add_ps(
                                    _mm_add_ps(_mm_sub_ps(temp0_195, temp0_196), 
                                        _mm_add_ps(temp0_197, temp0_171)), 
                                    temp0_31)
                            else
                                zmm10 = data_143f37410
                                float temp0_37[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                                float temp0_38[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                                float temp0_39[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
                                float temp0_40[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                float temp0_41[0x4] = _mm_mul_ps(zmm5_1, temp0_37)
                                float temp0_43[0x4] =
                                    _mm_mul_ps(temp0_38, _mm_shuffle_ps(temp0_37, temp0_37, 0x29))
                                float temp0_44[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x12)
                                float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x1a)
                                float temp0_46[0x4] = _mm_mul_ps(temp0_40, temp0_44)
                                float temp0_48[0x4] =
                                    _mm_add_ps(temp0_45, _mm_shuffle_ps(temp0_41, temp0_41, 1))
                                _mm_mul_ps(temp0_33, zmm14)
                                zmm3 = *rcx_32
                                float temp0_50[0x4] = _mm_add_ps(temp0_46, temp0_43)
                                float temp0_51[0x4] = _mm_sub_ps(temp0_43, temp0_46)
                                float temp0_52[0x4] = _mm_sub_ps(zmm10, temp0_48)
                                float temp0_53[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                                float temp0_54[0x4] = _mm_mul_ps(temp0_50, temp0_33)
                                float temp0_55[0x4] = _mm_mul_ps(temp0_39, temp0_51)
                                float temp0_56[0x4] = _mm_mul_ps(temp0_52, temp0_33)
                                float temp0_57[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                                arg2 = __andps_xmmxud_memxud(temp0_56, data_143f37420)
                                float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, arg2, 0x32)
                                float temp0_61[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_54, arg2, 0), temp0_59, 0x82)
                                float temp0_62[0x4] = _mm_shuffle_ps(temp0_54, arg2, 0x31)
                                float temp0_64[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_55, arg2, 0x10), temp0_62, 0x88)
                                float temp0_66[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_54, temp0_55, 0x12), arg2, 0xe8)
                                float temp0_67[0x4] = _mm_add_ps(zmm3, zmm3)
                                zmm10[0].q = temp0_31 u>> 0x40
                                float temp0_68[0x4] = _mm_shuffle_ps(temp0_31, zmm10, 0xc4)
                                float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x29)
                                float temp0_70[0x4] = _mm_mul_ps(temp0_67, zmm3)
                                float temp0_71[0x4] = _mm_mul_ps(temp0_57, temp0_69)
                                float temp0_72[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x12)
                                float temp0_74[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_72)
                                float temp0_77[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_70, temp0_70, 0x1a), 
                                    _mm_shuffle_ps(temp0_70, temp0_70, 1))
                                float temp0_78[0x4] = _mm_add_ps(temp0_74, temp0_71)
                                float temp0_79[0x4] = _mm_sub_ps(temp0_71, temp0_74)
                                float temp0_80[0x4] = _mm_sub_ps(zmm10, temp0_77)
                                float temp0_81[0x4] = _mm_mul_ps(temp0_78, zmm14)
                                float temp0_82[0x4] = _mm_mul_ps(temp0_53, temp0_79)
                                arg2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_80, zmm14), 
                                    data_143f37420)
                                float temp0_85[0x4] = _mm_shuffle_ps(temp0_82, arg2, 0x32)
                                float temp0_87[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_81, arg2, 0), temp0_85, 0x82)
                                float temp0_88[0x4] = _mm_shuffle_ps(temp0_82, arg2, 0x10)
                                float temp0_89[0x4] = _mm_shuffle_ps(temp0_81, arg2, 0x31)
                                float temp0_90[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
                                float temp0_91[0x4] = _mm_shuffle_ps(temp0_88, temp0_89, 0x88)
                                float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_64)
                                float temp0_93[0x4] = _mm_shuffle_ps(temp0_81, temp0_82, 0x12)
                                zmm5_1 = rcx_32[1]
                                float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, arg2, 0xe8)
                                float temp0_96[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xaa), temp0_66)
                                zmm10[0].q = zmm5_1 u>> 0x40
                                float temp0_97[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
                                float temp0_98[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0)
                                float temp0_100[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xff), temp0_68)
                                float temp0_102[0x4] =
                                    _mm_add_ps(temp0_92, _mm_mul_ps(temp0_98, temp0_61))
                                float temp0_104[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0), temp0_61)
                                float temp0_105[0x4] = _mm_add_ps(temp0_102, temp0_96)
                                float temp0_107[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xaa), temp0_66)
                                float temp0_108[0x4] = _mm_add_ps(temp0_105, temp0_100)
                                float temp0_110[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0x55), temp0_64)
                                float temp0_111[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xff)
                                var_178 = temp0_108
                                float temp0_112[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x55)
                                float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_104)
                                float temp0_114[0x4] = _mm_mul_ps(temp0_112, temp0_64)
                                float temp0_115[0x4] = _mm_mul_ps(temp0_111, temp0_68)
                                float temp0_116[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0)
                                float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_107)
                                float temp0_118[0x4] = _mm_mul_ps(temp0_116, temp0_61)
                                float temp0_120[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xaa), temp0_66)
                                float temp0_121[0x4] = _mm_add_ps(temp0_117, temp0_115)
                                float temp0_122[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xff)
                                float temp0_123[0x4] = _mm_add_ps(temp0_114, temp0_118)
                                float temp0_124[0x4] = _mm_mul_ps(temp0_122, temp0_68)
                                float temp0_125[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0)
                                int96_t var_168_1 = temp0_121[0].12
                                float temp0_126[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x55)
                                float temp0_127[0x4] = _mm_add_ps(temp0_123, temp0_120)
                                float temp0_128[0x4] = _mm_mul_ps(temp0_126, temp0_64)
                                float temp0_130[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xaa), temp0_66)
                                float temp0_131[0x4] = _mm_mul_ps(temp0_125, temp0_61)
                                float temp0_132[0x4] = _mm_add_ps(temp0_127, temp0_124)
                                float temp0_134[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xff), temp0_68)
                                float temp0_135[0x4] = _mm_add_ps(temp0_128, temp0_131)
                                int96_t var_158_1 = temp0_132[0].12
                                int96_t var_148_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_135, temp0_130), temp0_134)[0].12
                                int128_t zmm10_1
                                float zmm15_1[0x4]
                                zmm10_1, zmm13, zmm15_1 = sub_1407740e0(&var_178, 0x322bcc77)
                                float zmm2_1[0x4] = var_178[0]
                                float zmm1 = var_178[1]
                                zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), 
                                    data_143f37500 ^ zmm10_1)
                                uint32_t zmm0_1[0x4] = var_178[2]
                                zmm15_1 ^= data_143f37500
                                zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
                                zmm1 = zmm1 * zmm15_1[0]
                                zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
                                var_178[0] = zmm2_1[0]
                                float temp0_140[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                                var_178[2] = zmm0_1[0]
                                zmm0_1 = var_168_1:8.d
                                zmm0_1[0] = zmm0_1[0] f* temp0_140[0]
                                var_178[1] = zmm1
                                zmm1 = var_168_1:4.d * temp0_140[0]
                                float zmm3_1 = var_168_1.d * temp0_140[0]
                                zmm2_1 = var_158_1.d
                                var_168_1:8.d = zmm0_1[0]
                                zmm0_1 = var_158_1:8.d
                                var_168_1:4.d = zmm1
                                float temp0_141[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                                zmm0_1[0] = zmm0_1[0] f* temp0_141[0]
                                zmm2_1[0] = zmm2_1[0] * temp0_141[0]
                                zmm1 = var_158_1:4.d * temp0_141[0]
                                var_158_1:8.d = zmm0_1[0]
                                var_168_1.d = zmm3_1
                                var_158_1.d = zmm2_1[0]
                                var_158_1:4.d = zmm1
                                sub_14077e4a0(&var_208, &var_178)
                                float zmm5_2[0x4] = var_208
                                zmm6 = data_143f373d0
                                r8_7 = var_1d0_1
                                float temp0_142[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                                float temp0_144[0x4] = _mm_add_ps(temp0_142, 
                                    _mm_shuffle_ps(temp0_142, temp0_142, 0x4e))
                                float temp0_146[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_144, temp0_144, 0x39), temp0_144)
                                float temp0_147[0x4] = _mm_rsqrt_ps(temp0_146)
                                float temp0_148[0x4] = _mm_mul_ps(temp0_146, zmm6)
                                float temp0_153[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_147, temp0_147), 
                                                temp0_148)), 
                                        temp0_147), 
                                    temp0_147)
                                float temp0_156[0x4] = _mm_sub_ps(zmm6, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_153, temp0_153), temp0_148))
                                float temp0_158[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_146, 2)
                                float temp0_160[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_156, temp0_153), temp0_153)
                                float temp0_161[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
                                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_160, zmm5_2) ^ data_143f373c0, 
                                    temp0_158) ^ data_143f373c0
                                zmm7 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), 
                                    temp0_161[0].q)
                                var_208 = zmm6
                            
                            *r8_7 = zmm6
                            r8_7[1] = zmm7
                            r8_7[2] = zmm13
                            float (* rax_40)[0x4] = *(arg1 + 0x588)
                            float (* rbx_3)[0x4] = *(rax_3 + 0x58)
                            var_138 = *(rax_40 + r12_1)
                            float var_128_1[0x4] = *(rax_40 + r12_1 + 0x10)
                            float var_118_1[0x4] = *(rax_40 + r12_1 + 0x20)
                            float (* rax_42)[0x4] = sub_140ad7d70(
                                sub_140ad8030(&var_138, &var_178, r8_7), &var_108, arg1 + 0x60)
                            *(rbx_3 + r12_1) = *rax_42
                            *(rbx_3 + r12_1 + 0x10) = rax_42[1]
                            *(rbx_3 + r12_1 + 0x20) = rax_42[2]
                            int64_t rax_43 = *(rax_3 + 0x58)
                            zmm5_1 = data_143f373d0
                            zmm6 = *(r12_1 + rax_43)
                            float temp0_202[0x4] = _mm_mul_ps(zmm6, zmm6)
                            float temp0_204[0x4] =
                                _mm_add_ps(temp0_202, _mm_shuffle_ps(temp0_202, temp0_202, 0x4e))
                            float temp0_206[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x39), temp0_204)
                            float temp0_207[0x4] = _mm_rsqrt_ps(temp0_206)
                            float temp0_208[0x4] = _mm_mul_ps(temp0_206, zmm5_1)
                            float temp0_213[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm5_1, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_207, temp0_207), temp0_208)), 
                                    temp0_207), 
                                temp0_207)
                            float temp0_216[0x4] = _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_213, temp0_213), temp0_208))
                            float temp0_217[0x4] = _mm_cmpeq_ps(data_143f37430, temp0_206, 2)
                            *(r12_1 + rax_43) = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_216, temp0_213), temp0_213), 
                                    zmm6) ^ data_143f373c0, 
                                temp0_217) ^ data_143f373c0
                            int64_t rcx_37 = *(rax_3 + 0x58)
                            int64_t rax_44 = *(arg1 + 0x450)
                            *(r12_1 + rax_44) = *(r12_1 + rcx_37)
                            *(r12_1 + rax_44 + 0x10) = *(r12_1 + rcx_37 + 0x10)
                            *(r12_1 + rax_44 + 0x20) = *(r12_1 + rcx_37 + 0x20)
                            *(r14 + *(rax_3 + 8)) = 0
                            *(arg1 + 0x268) = 1
                            zmm2 = var_1d0_1[1]
                            int64_t rax_46 = sx.q(rdi_2[1].d)
                            float var_1d8_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                            float temp0_223[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            int64_t rdx_20 = rax_46 * 3
                            int64_t rcx_38 = *(*rdi_2 + 0x28)
                            *(rcx_38 + (rdx_20 << 2)) = (_mm_unpacklo_ps(zmm2, temp0_223[0].q)).q
                            *(rcx_38 + (rdx_20 << 2) + 8) = var_1d8_1
                            int64_t* rax_50 = nullptr
                            *(*(*rdi_2 + 0x68) + sx.q(rdi_2[1].d) * 0x10) = *var_1d0_1
                            char r8_10 = *(rdi_2 + 0xc)
                            
                            if (r8_10 u>= 2)
                                rax_50 = rdi_2
                            
                            if (rax_50 == 0 || *(sx.q(rax_50[1].d) + *(*rax_50 + 0x368)) == 0)
                            label_141d354ef:
                                int32_t rbx_4 = *(*(*rdi_2 + 0x50) + (sx.q(rdi_2[1].d) << 2))
                                void* rdi_3 = *(*(arg1 + 8) + 0x348)
                                int128_t* rax_58 = sub_1417ae350(rdi_3 + 0x290, rbx_4)
                                int64_t* rax_59 = sub_141782530(&var_108, rdi_2)
                                *rax_58 = *rax_59
                                rax_58[1] = *(rax_59 + 0x10)
                                rax_58[2].q = rax_59[4]
                                *(rax_58 + 0x28) = *(*(*rdi_2 + 0x170) + (sx.q(rdi_2[1].d) << 1))
                                int128_t* rax_63 = sub_1417ae350(rdi_3 + 0x2b0, rbx_4)
                                *rax_63 = *rax_58
                                rax_63[1] = rax_58[1]
                                rax_63[2] = rax_58[2]
                                float (* rax_64)[0x4]
                                rax_64, rcx_22 = sub_1417ae350(rdi_3 + 0x2d0, rbx_4)
                                *rax_64 = *rax_58
                                rax_64[1] = rax_58[1]
                                i = 0
                                rax_64[2] = rax_58[2]
                            else
                                int64_t* rax_52 = nullptr
                                
                                if (r8_10 u>= 3)
                                    rax_52 = rdi_2
                                
                                if (rax_52 != 0)
                                    int64_t* r8_11 =
                                        *(*(*rax_52 + 0x428) + sx.q(rax_52[1].d) * 0x10)
                                    
                                    if (r8_11 == 0)
                                        goto label_141d354ef
                                    
                                    int64_t* rax_54 = nullptr
                                    
                                    if (*(r8_11 + 0xc) u>= 3)
                                        rax_54 = r8_11
                                    
                                    if (rax_54 == 0
                                            || *(sx.q(rax_54[1].d) + *(*rax_54 + 0x470)) != 0)
                                        goto label_141d354ef
                    
                    rbx = var_210
            else
                int64_t rdx_6 = r8_2 * 3
                int64_t rcx_14 = *(r9_1 + 0x28)
                arg2 = zx.o(0)
                zmm3 = data_14399f668
                int128_t* r8_4 = *(rax_3 + 0x28) + r12_1
                zmm5_1 = *(*(r9_1 + 0x68) + (r10_2 << 3))
                zmm2 = *(rcx_14 + (rdx_6 << 2) + 4)
                float temp0_2[0x4] =
                    _mm_unpacklo_ps(*(rcx_14 + (rdx_6 << 2)), (*(rcx_14 + (rdx_6 << 2) + 8))[0].q)
                float zmm0[0x4] = data_14399f670
                float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(zmm2, arg2[0].q)[0].q)
                zmm2 = data_14399f66c
                *r8_4 = zmm5_1
                r8_4[1] = temp0_4
                r8_4[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), 
                    _mm_unpacklo_ps(zmm2, arg2[0].q)[0].q)
                float (* rax_15)[0x4] = *(arg1 + 0x588)
                int64_t rbx_1 = *(rax_3 + 0x58)
                var_108 = *(rax_15 + r12_1)
                float var_f8_1[0x4] = *(rax_15 + r12_1 + 0x10)
                float var_e8_1[0x4] = *(rax_15 + r12_1 + 0x20)
                float (* rax_17)[0x4] =
                    sub_140ad7d70(sub_140ad8030(&var_108, &var_138, r8_4), &var_178, arg1 + 0x60)
                *(r12_1 + rbx_1) = *rax_17
                *(r12_1 + rbx_1 + 0x10) = rax_17[1]
                *(r12_1 + rbx_1 + 0x20) = rax_17[2]
                int64_t rax_18 = *(rax_3 + 0x58)
                zmm5_1 = data_143f373d0
                zmm6 = *(r12_1 + rax_18)
                float temp0_8[0x4] = _mm_mul_ps(zmm6, zmm6)
                float temp0_10[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_8, temp0_8, 0x4e))
                float temp0_12[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10)
                float temp0_13[0x4] = _mm_rsqrt_ps(temp0_12)
                float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm5_1)
                float temp0_19[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_13), temp0_14)), 
                        temp0_13), 
                    temp0_13)
                float temp0_22[0x4] =
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_19, temp0_19), temp0_14))
                float temp0_23[0x4] = _mm_cmpeq_ps(data_143f37430, temp0_12, 2)
                *(r12_1 + rax_18) = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_22, temp0_19), temp0_19), zmm6)
                        ^ data_143f373c0, 
                    temp0_23) ^ data_143f373c0
                int64_t rcx_17 = *(rax_3 + 0x58)
                int64_t rax_19 = *(arg1 + 0x450)
                *(r12_1 + rax_19) = *(r12_1 + rcx_17)
                *(r12_1 + rax_19 + 0x10) = *(r12_1 + rcx_17 + 0x10)
                *(r12_1 + rax_19 + 0x20) = *(r12_1 + rcx_17 + 0x20)
                *(r14 + *(rax_3 + 8)) = 0
                *(arg1 + 0x268) = 1
                *(*(rax_3 + 0x88) + (r14 << 2)) = 0xffffffff
                int64_t rcx_18 = sx.q(*(*(arg1 + 0x468) + (r14 << 2)))
                
                if (rcx_18.d != 0xffffffff)
                    sub_14090a370(rcx_18 * 0x50 + *(arg1 + 0x480), var_218)
                    *(*(arg1 + 0x468) + (r14 << 2)) = 0xffffffff
                
                (*(arg1 + 0x1e8))[r14] = *(*(*rdi_1 + 0x428) + sx.q(rdi_1[1].d) * 0x10)
                rbx = var_210
            r11 = var_218
            rcx_22.b = *(r14 + *(rax_3 + 8)) == 0
            *(r14 + *(arg1 + 0x4c8)) = rcx_22.b
        
        r11 += 1
        r14 += 1
        r12_1 = &r12_1[3]
        var_218 = r11
    while (r14 s< rbx)
    
    rdi = &rax_3[0x14]

uint64_t rax_9

if (*(arg1 + 0x268) == 0)
    rax_9.b = 0

if (*(arg1 + 0x268) != 0 || rax_3[8] == 0)
    sub_141d17bb0(rdi, &rax_3[0x20], &rax_3[6])
    zmm6 = data_143dbb1f8
    r14.b = 0
    zmm10 = zmm6
    zmm8 = data_143dbb1fc
    zmm7 = data_143dbb200
    zmm11 = zmm8
    zmm9 = zmm7
    float zmm1_1[0x4]
    
    if (*(arg1 + 0x2b0) s> 0)
        void* rdi_4 = nullptr
        
        do
            int64_t rax_66 = *(arg1 + 0x2b8)
            zmm1_1 = *(arg1 + 0x70)
            int64_t rbx_5 = *(arg1 + 0x2a8)
            var_138 = *(arg1 + 0x60)
            float var_118_2[0x4] = *(arg1 + 0x80)
            float var_128_2[0x4] = zmm1_1
            int64_t rax_67 = *(rax_3 + 0x18)
            int64_t rcx_49 = sx.q(*(rdi_4 + rax_66)) << 6
            var_178 = *(rcx_49 + rax_67)
            float var_168_2[0x4] = *(rcx_49 + rax_67 + 0x10)
            float var_158_2[0x4] = *(rcx_49 + rax_67 + 0x20)
            float var_148_2[0x4] = *(rcx_49 + rax_67 + 0x30)
            void var_1b8
            int128_t* rax_68
            rax_68, zmm8, zmm9, zmm10 = sub_1417a3300(&var_1b8, &var_178, &var_138)
            uint64_t* rax_70
            rax_70, zmm6, zmm7 = sub_140ae2b00(sx.q(i) * 0x1c + rbx_5, &var_108, rax_68)
            
            if (r14.b == 0)
                if (rax_70[3].b != 0)
                    zmm1_1 = zx.o(rax_70[2])
                    float zmm2_3[0x4] = *rax_70
                    int32_t rax_71 = rax_70[3].d
                    r14 = zx.q(rax_71.b)
                    zmm8 = zmm1_1.q:4.d
                    float temp0_225[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    var_208 = zmm2_3
                    int32_t var_1f0_1 = rax_71
                    int32_t var_200
                    zmm9 = var_200
                    zmm7 = temp0_225
                    zmm11 = var_208[1]
                    zmm10 = var_208[0]
                    zmm6 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
            else if (rax_70[3].b != 0)
                float zmm0_4[0x4] = *rax_70
                
                if (not(zmm10[0] <= zmm0_4[0]))
                    zmm10 = zmm0_4
                
                zmm0_4 = *(rax_70 + 4)
                
                if (not(zmm11[0] <= zmm0_4[0]))
                    zmm11 = zmm0_4
                
                zmm0_4 = rax_70[1].d
                
                if (not(zmm9[0] <= zmm0_4[0]))
                    zmm9 = zmm0_4
                
                zmm0_4 = *(rax_70 + 0xc)
                
                if (not(zmm6[0] >= zmm0_4[0]))
                    zmm6 = zmm0_4
                
                zmm0_4 = rax_70[2].d
                
                if (not(zmm8[0] >= zmm0_4[0]))
                    zmm8 = zmm0_4
                
                zmm0_4 = *(rax_70 + 0x14)
                
                if (not(zmm7[0] >= zmm0_4[0]))
                    zmm7 = zmm0_4
            
            i += 1
            rdi_4 += 4
        while (i s< *(arg1 + 0x2b0))
    
    zmm6[0] = zmm6[0] - zmm10[0]
    zmm8[0] = zmm8[0] - zmm11[0]
    zmm7[0] = zmm7[0] - zmm9[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm6[0] = zmm6[0] * 0.5f
    zmm8[0] = zmm8[0] * 0.5f
    zmm7[0] = zmm7[0] * 0.5f
    zmm10[0] = zmm10[0] + zmm6[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    float temp0_227[0x4] = _mm_unpacklo_ps(zmm6, zmm8[0].q)
    zmm11[0] = zmm11[0] + zmm8[0]
    int64_t var_1fc_1 = temp0_227.q
    zmm9[0] = zmm9[0] + zmm7[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    float var_1f4_1 = zmm7[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    float var_1d8_3 = zmm9[0]
    zmm6[0] = zmm6[0] + zmm7[0]
    float var_200_1 = var_1d8_3
    zmm1_1 = var_208
    zmm1_1[0].q = (_mm_unpacklo_ps(zmm10, zmm11[0].q)).q
    zmm6[0] = zmm6[0] * 0.25f
    *(rax_3 + 0x12c) = zmm1_1
    float var_1f0_2 = _mm_sqrt_ss(0, zmm6[0])[0]
    *(rax_3 + 0x13c) = var_1fc_1
    rax_3[0x51] = var_1f0_2
    rax_9 = zx.q(*(arg1 + 0x268))

rax_3[0x4a].b = rax_9.b
char result = *(arg1 + 0x269)
*(rax_3 + 0x129) = result
__security_check_cookie(rax_1 ^ &var_238)
return result
