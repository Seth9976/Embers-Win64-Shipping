// 函数: sub_1425e0750
// 地址: 0x1425e0750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(arg1[0x28].b)
uint32_t var_118[0x4]
float zmm1[0x4]

if (rcx == 0)
    float zmm6[0x4] = *(arg2 + 0x50)
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
    int128_t* rdx_5 = sx.q(*(*arg1 + 0x108)) * 0x30 + *(arg2 + 8)
    float zmm15[0x4] = data_143f709e0
    float zmm14[0x4] = rdx_5[2]
    float temp0_1[0x4] = _mm_min_ps(zmm14, zmm6)
    float zmm13[0x4] = _mm_mul_ps(zmm14, zmm6)
    float zmm3[0x4]
    float zmm7[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, zmm15, 1)) == 0)
        zmm3 = *(arg2 + 0x30)
        float zmm2[0x4] = *rdx_5
        float temp0_130[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_131[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_133[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_130)
        float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm2)
        float temp0_136[0x4] = __mulps_xmmps_memps(temp0_133, data_143f70980)
        float temp0_137[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_138[0x4] = _mm_add_ps(temp0_136, temp0_135)
        float temp0_140[0x4] = _mm_mul_ps(temp0_131, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_142[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_143[0x4] = __mulps_xmmps_memps(temp0_140, data_143f70970)
        float temp0_144[0x4] = __mulps_xmmps_memps(temp0_142, data_143f70960)
        zmm7 = _mm_add_ps(_mm_add_ps(temp0_138, temp0_143), temp0_144)
    else
        zmm1 = *(arg2 + 0x30)
        zmm11 = data_143f70990
        zmm9 = *(arg2 + 0x40)
        float temp0_5[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(zmm1, temp0_5)
        float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_7)
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
        float temp0_14[0x4] = _mm_mul_ps(temp0_12, temp0_8)
        float temp0_16[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
        float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_11)
        float temp0_18[0x4] = _mm_sub_ps(temp0_11, temp0_14)
        float temp0_19[0x4] = _mm_sub_ps(zmm11, temp0_16)
        float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm6)
        float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_19, zmm6), data_143f709a0)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
        float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_24, 0x82)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_27, 0x88)
        float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
        zmm1 = *rdx_5
        zmm11[0].q = zmm9 u>> 0x40
        float temp0_32[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_33[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_37[0x4] = _mm_mul_ps(zmm1, temp0_32)
        float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_36)
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm14)
        float temp0_49[0x4] = _mm_mul_ps(temp0_34, temp0_46)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm14), data_143f709a0)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x32)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), temp0_52, 0x82)
        float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0x10), 
            _mm_shuffle_ps(temp0_48, zmm1, 0x31), 0x88)
        float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x55), temp0_29)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
        float zmm5[0x4] = rdx_5[1]
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_31)
        zmm11[0].q = zmm5 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_33)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_26))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_31)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_29)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
        float var_f8[0x4] = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_29)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_33)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_26)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_31)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        int96_t var_e8_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_26)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_33)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_d8_1 = temp0_99[0].12
        float var_c8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)
        zmm11, zmm13, zmm15 = sub_1407740e0(&var_f8, 0x322bcc77)
        float zmm2_1[0x4] = var_f8[0]
        float zmm1_1 = var_f8[1]
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f709d0 ^ zmm11)
        uint32_t zmm0_1[0x4] = var_f8[2]
        zmm15 ^= data_143f709d0
        zmm2_1[0] = zmm2_1[0] * zmm15[0]
        zmm1_1 = zmm1_1 * zmm15[0]
        zmm0_1[0] = zmm0_1[0] f* zmm15[0]
        var_f8[0] = zmm2_1[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_f8[2] = zmm0_1[0]
        zmm0_1 = var_e8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
        var_f8[1] = zmm1_1
        zmm1_1 = var_e8_1:4.d * temp0_107[0]
        float zmm3_1 = var_e8_1.d * temp0_107[0]
        zmm2_1 = var_d8_1.d
        var_e8_1:8.d = zmm0_1[0]
        zmm0_1 = var_d8_1:8.d
        var_e8_1:4.d = zmm1_1
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        zmm2_1[0] = zmm2_1[0] * temp0_108[0]
        zmm1_1 = var_d8_1:4.d * temp0_108[0]
        var_d8_1:8.d = zmm0_1[0]
        var_e8_1.d = zmm3_1
        var_d8_1.d = zmm2_1[0]
        var_d8_1:4.d = zmm1_1
        sub_14077e4a0(&var_118, &var_f8)
        zmm5 = var_118
        zmm7 = data_143f709c0
        float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
        float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
        float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
        float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
        float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm7)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                temp0_114), 
            temp0_114)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        float temp0_125[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
        zmm7 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120), zmm5)
                ^ data_143f709b0, 
            temp0_125) ^ data_143f709b0
    
    float temp0_147[0x4] = __mulps_xmmps_memps(zmm7, data_143f70a10)
    zmm9 = zx.o(0)
    float temp0_150[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q), 
        _mm_unpacklo_ps(*(arg3 + 4), zx.o(0)[0].q)[0].q)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0xd2)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xc9), temp0_151)
    float temp0_154[0x4] = _mm_rcp_ps(zmm13)
    float temp0_155[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0xc9)
    float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xd2), temp0_155)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0xff)
    float temp0_159[0x4] = _mm_sub_ps(temp0_157, temp0_153)
    float temp0_160[0x4] = _mm_mul_ps(temp0_154, temp0_154)
    float temp0_161[0x4] = _mm_add_ps(temp0_154, temp0_154)
    float temp0_162[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_163[0x4] = _mm_mul_ps(temp0_160, zmm13)
    float temp0_164[0x4] = _mm_mul_ps(temp0_158, temp0_162)
    float temp0_165[0x4] = _mm_sub_ps(temp0_161, temp0_163)
    float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_162, temp0_162, 0xd2), temp0_155)
    float temp0_168[0x4] = _mm_add_ps(temp0_164, temp0_150)
    float temp0_169[0x4] = _mm_mul_ps(temp0_165, temp0_165)
    float temp0_170[0x4] = _mm_add_ps(temp0_165, temp0_165)
    float temp0_171[0x4] = _mm_mul_ps(temp0_169, zmm13)
    float temp0_173[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm13, data_143f70a00), data_143f709f0, 2)
    float temp0_174[0x4] = _mm_sub_ps(temp0_170, temp0_171)
    float temp0_177[0x4] =
        _mm_sub_ps(temp0_167, _mm_mul_ps(_mm_shuffle_ps(temp0_162, temp0_162, 0xc9), temp0_151))
    zmm13 = _mm_and_ps(temp0_173, temp0_174 ^ zx.o(0)) ^ temp0_174
    var_118 = _mm_mul_ps(_mm_add_ps(temp0_177, temp0_168), zmm13)
    sub_1425d7c10(arg1, &arg1[0x3b])
    int64_t rbx_1 = sx.q(arg1[0xc].d)
    void* rax = sub_1425d6560(rbx_1 * 0x158 + *(*arg1 + 0xc8), 1)
    void* r14_1 = rax
    
    if (rax != 0 && *(rax + 8) != 0)
        int64_t* rcx_9 = *((rbx_1 << 6) + arg1[0x26] + 8)
        int64_t rdx_9 = *rcx_9
        int64_t rbx_3 = sx.q((*(rdx_9 + 0x280))(rcx_9, rdx_9))
        int64_t* rcx_11 = *((sx.q(arg1[0xc].d) << 6) + arg1[0x26] + 8)
        int64_t r8 = *rcx_11
        void* var_108
        (*(r8 + 0x270))(rcx_11, &var_108, r8)
        
        if (rbx_3.d s> 0)
            zmm10 = var_118[0]
            int64_t r8_1 = 0
            zmm11 = var_118[1]
            float* rcx_12 = nullptr
            zmm12 = var_118[2]
            float* rdx_13 = nullptr
            zmm10[0] = zmm10[0] * 2500f
            zmm11[0] = zmm11[0] * 2500f
            zmm12[0] = zmm12[0] * 2500f
            
            do
                int64_t rax_7 = arg1[0x3b]
                float zmm6_1 = zmm12[0]
                zmm10[0] = zmm10[0] f- *(rdx_13 + rax_7)
                zmm11[0] = zmm11[0] f- *(rdx_13 + rax_7 + 4)
                zmm6_1 = zmm6_1 f- *(rdx_13 + rax_7 + 8)
                
                if (zmm9[0] f>= *(*r14_1 + (r8_1 << 2)) ||
                        (not(zmm10[0] != zmm9[0]) && not(zmm11[0] != zmm9[0]) && zmm6_1 == zmm9[0]))
                    rax = var_108
                    *(rcx_12 + rax + 8) = 0
                    *(rcx_12 + rax) = 0
                else
                    int64_t rax_9 = arg1[0x30]
                    zmm3 = zx.o(0)
                    float zmm4_1[0x4] = zx.o(0)
                    zmm4_1[0] = 0x3f000000
                    zmm11[0] = zmm11[0] * zmm11[0]
                    zmm11[0] = zmm11[0] + zmm10[0] * zmm10[0]
                    zmm11[0] = zmm11[0] + zmm6_1 * zmm6_1
                    zmm3[0] = zmm11[0]
                    float temp0_181 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm4_1[0] = zmm4_1[0] - zmm3[0] * temp0_181 * temp0_181
                    float zmm5_1 = temp0_181 + temp0_181 * zmm4_1[0]
                    zmm3[0] = zmm3[0] * zmm5_1 * zmm5_1
                    zmm4_1[0] = 0.5f - zmm3[0]
                    zmm5_1 = zmm5_1 + zmm5_1 * zmm4_1[0]
                    float zmm0_2 = zmm10[0]
                    zmm11[0] = zmm11[0] * zmm5_1
                    zmm11[0] = zmm11[0] f* *(rdx_13 + rax_9 + 4)
                    zmm11[0] = zmm11[0] + zmm0_2 * zmm5_1 f* *(rdx_13 + rax_9)
                    rax = var_108
                    zmm11[0] = zmm11[0] + zmm6_1 * zmm5_1 f* *(rdx_13 + rax_9 + 8)
                    float zmm2_2[0x4] = _mm_and_ps(zmm11, 0x7fffffff)
                    zmm2_2[0] = zmm2_2[0] f* *(arg2 + 0x8c)
                    *(rcx_12 + rax + 0xc) = 0
                    float temp0_183[0x4] = _mm_min_ss(zmm2_2[0], 0x3f800000)
                    zmm6_1 = zmm6_1 * temp0_183[0]
                    float zmm1_2 = temp0_183[0] * zmm11[0]
                    *(rcx_12 + rax) = temp0_183[0] * zmm10[0]
                    *(rcx_12 + rax + 8) = zmm6_1
                    *(rcx_12 + rax + 4) = zmm1_2
                
                r8_1 += 1
                rdx_13 = &rdx_13[3]
                rcx_12 = &rcx_12[4]
            while (r8_1 s< rbx_3)
else if (rcx == 1)
    float zmm0[0x4] = *arg3
    int64_t rax_1 = arg1[0x26]
    int64_t rdx = sx.q(arg1[0xc].d)
    zmm1 = *(arg3 + 8)
    zmm0[0] = zmm0[0] * 100f
    zmm1[0] = zmm1[0] * 100f
    int64_t* rcx_1 = *((rdx << 6) + rax_1 + 8)
    var_118[0] = zmm0[0]
    zmm0 = *(arg3 + 4)
    zmm0[0] = zmm0[0] * 100f
    var_118[2] = zmm1[0]
    var_118[1] = zmm0[0]
    (*(*rcx_1 + 0x288))(rcx_1, &var_118, 0x42c80000)
