// 函数: sub_141aab820
// 地址: 0x141aab820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t result = __security_cookie ^ &var_328
int64_t result_1 = result
float zmm0[0x4] = *(arg1 + 0x118)
int128_t zmm13 = zx.o(0)
int64_t* r13 = arg3
int64_t* r15 = arg2
float zmm15[0x4] = *(arg1 + 0x22c)

if (not(zmm0[0] <= 0f))
    if (zmm15[0] >= 0f)
        zmm15 = _mm_min_ss(zmm15[0], zmm0[0])
    else
        zmm15 = zx.o(0)

bool cond:1 = *(arg1 + 0x258) s<= 0
float var_2e8 = zmm15[0]
*(arg1 + 0x22c) = 0

if (not(cond:1))
    uint32_t zmm2[0x4] = data_143f2b810
    float zmm1[0x4] = zmm2
    void* rbx_1 = *arg2
    uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f2b820)
    int64_t* r12_1 = arg2[3]
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    uint32_t var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    uint32_t zmm11[0x4]
    uint32_t var_98_1[0x4] = zmm11
    zmm1[0].q = zx.o(0) u>> 0x40
    float var_148[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    int128_t var_138_1 = zx.o(0)
    uint32_t var_128_1[0x4] = temp0_2
    uint32_t var_218[0x4]
    uint32_t var_188[0x4]
    float var_138_2[0x4]
    
    if (sub_141ea6180(arg1 + 0x218, r12_1) == 0)
        var_148 = *(rbx_1 + 0x10)
        var_138_2 = *(rbx_1 + 0x20)
        zmm0 = *(rbx_1 + 0x30)
    else
        int16_t* r9_1 = *r12_1
        int16_t* rcx_1 = r9_1
        void* r8 = &r9_1[sx.q(r12_1[1].d)]
        int32_t rcx_2
        
        if (r9_1 == r8)
        label_141aab9a4:
            rcx_2 = -1
        else
            while (zx.d(*rcx_1) != (*(arg1 + 0x220) * 2) s>> 1)
                rcx_1 = &rcx_1[1]
                
                if (rcx_1 == r8)
                    goto label_141aab9a4
            
            rcx_2 = ((rcx_1 - r9_1) s>> 1).d
        
        int64_t r14_1 = sx.q(rcx_2)
        
        if (*(r14_1 + r15[4]) == 0)
            zmm13 = sub_141a98300(&r15[1], rcx_2)
        
        int64_t rcx_4 = r15[1]
        zmm7 = *(rbx_1 + 0x30)
        int64_t rdx_6 = r14_1 * 6
        uint32_t zmm4[0x4] = *(rbx_1 + 0x10)
        zmm8 = *(rcx_4 + (rdx_6 << 3) + 0x20)
        float zmm12[0x4] = *(rcx_4 + (rdx_6 << 3))
        zmm14 = *(rcx_4 + (rdx_6 << 3) + 0x10)
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm8, zmm7), data_143f2b8d0, 1))
                == 0)
            float temp0_136[0x4] = _mm_mul_ps(zmm14, zmm7)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x1b)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
            float temp0_140[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm4, zmm4, 0))
            float temp0_141[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_142[0x4] = _mm_mul_ps(zmm12, temp0_141)
            float temp0_143[0x4] = __mulps_xmmps_memps(temp0_140, data_143f2b850)
            float temp0_144[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
            zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            float temp0_146[0x4] = _mm_add_ps(temp0_143, temp0_142)
            float temp0_148[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm4, zmm4, 0x55))
            float temp0_150[0x4] = _mm_mul_ps(temp0_144, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
            float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f2b840)
            float temp0_152[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xc9)
            float temp0_153[0x4] = __mulps_xmmps_memps(temp0_150, data_143f2b830)
            float temp0_154[0x4] = _mm_add_ps(temp0_146, temp0_151)
            float temp0_155[0x4] = _mm_mul_ps(temp0_152, zmm2)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), zmm4)
            float temp0_159[0x4] = _mm_add_ps(temp0_154, temp0_153)
            float temp0_160[0x4] = _mm_sub_ps(temp0_158, temp0_155)
            float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
            float temp0_162[0x4] = _mm_mul_ps(temp0_141, temp0_161)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
            float temp0_164[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
            float temp0_165[0x4] = _mm_mul_ps(temp0_163, zmm4)
            float temp0_166[0x4] = _mm_mul_ps(temp0_164, zmm2)
            float temp0_167[0x4] = _mm_add_ps(temp0_162, temp0_136)
            float temp0_168[0x4] = _mm_sub_ps(temp0_165, temp0_166)
            zmm0 = _mm_mul_ps(zmm8, zmm7)
            float temp0_171[0x4] =
                __addps_xmmps_memps(_mm_add_ps(temp0_168, temp0_167), *(rbx_1 + 0x20))
            var_148 = temp0_159
            var_138_2 = temp0_171
        else
            zmm10 = data_143f2b810
            zmm2 = _mm_add_ps(zmm4, zmm4)
            zmm0 = zmm8
            zmm8 = *(rbx_1 + 0x20)
            float temp0_8[0x4] = _mm_mul_ps(zmm0, zmm7)
            float temp0_11[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), _mm_shuffle_ps(zmm4, zmm4, 4))
            float temp0_12[0x4] = _mm_mul_ps(zmm2, zmm4)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), zmm4)
            zmm4 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_19[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), 
                _mm_shuffle_ps(temp0_12, temp0_12, 1))
            zmm11 = _mm_add_ps(zmm2, temp0_11)
            float temp0_21[0x4] = _mm_sub_ps(temp0_11, zmm2)
            zmm2 = _mm_shuffle_ps(zmm12, zmm12, 4)
            zmm11 = _mm_mul_ps(zmm11, zmm7)
            zmm4 = _mm_mul_ps(zmm4, temp0_21)
            zmm1 =
                __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_19), zmm7), data_143f2b820)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm4, zmm1, 0x32)
            zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1, 0), temp0_28, 0x82)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm11, zmm1, 0x31)
            float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), temp0_31, 0x88)
            zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0x12), zmm1, 0xe8)
            float temp0_36[0x4] = _mm_add_ps(zmm12, zmm12)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_37[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
            float temp0_39[0x4] = _mm_mul_ps(zmm12, temp0_36)
            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(temp0_36, temp0_36, 0x29))
            zmm0 = *(rcx_4 + (rdx_6 << 3) + 0x20)
            float temp0_43[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(temp0_36, temp0_36, 0x12))
            zmm4 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, zmm2)
            zmm2 = _mm_sub_ps(zmm2, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm0)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
                _mm_shuffle_ps(temp0_39, temp0_39, 1))
            zmm4 = _mm_mul_ps(zmm4, zmm2)
            zmm1 = __andps_xmmxud_memxud(
                __mulps_xmmps_memps(_mm_sub_ps(zmm10, temp0_50), *(rcx_4 + (rdx_6 << 3) + 0x20)), 
                data_143f2b820)
            float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
                _mm_shuffle_ps(zmm4, zmm1, 0x32), 0x82)
            float temp0_58[0x4] = _mm_shuffle_ps(zmm4, zmm1, 0x10)
            zmm2 = _mm_shuffle_ps(temp0_57, temp0_57, 0x55)
            float temp0_61[0x4] =
                _mm_shuffle_ps(temp0_58, _mm_shuffle_ps(temp0_47, zmm1, 0x31), 0x88)
            zmm2 = _mm_mul_ps(zmm2, temp0_33)
            zmm10[0].q = zmm14 u>> 0x40
            float temp0_63[0x4] = _mm_shuffle_ps(zmm14, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), zmm9)
            float temp0_67[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm4, 0x12), zmm1, 0xe8)
            float temp0_68[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xaa)
            zmm2 = _mm_add_ps(zmm2, temp0_65)
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xff), temp0_37)
            float temp0_72[0x4] = _mm_mul_ps(temp0_68, zmm11)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0), zmm9)
            zmm2 = _mm_add_ps(zmm2, temp0_72)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), zmm11)
            zmm2 = _mm_add_ps(zmm2, temp0_71)
            float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0x55), temp0_33)
            float temp0_81[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            var_188 = zmm2
            zmm2 = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
            float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_74)
            zmm2 = _mm_mul_ps(zmm2, temp0_33)
            float temp0_85[0x4] = _mm_mul_ps(temp0_81, temp0_37)
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0)
            float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_77)
            float temp0_88[0x4] = _mm_mul_ps(temp0_86, zmm9)
            float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xaa), zmm11)
            float temp0_91[0x4] = _mm_add_ps(temp0_87, temp0_85)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
            zmm2 = _mm_add_ps(zmm2, temp0_88)
            float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_37)
            float temp0_95[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
            int96_t var_178_1 = temp0_91[0].12
            float temp0_96[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
            zmm2 = _mm_add_ps(zmm2, temp0_90)
            float temp0_98[0x4] = _mm_mul_ps(temp0_96, temp0_33)
            float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), zmm11)
            float temp0_101[0x4] = _mm_mul_ps(temp0_95, zmm9)
            zmm2 = _mm_add_ps(zmm2, temp0_94)
            float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_37)
            float temp0_105[0x4] = _mm_add_ps(temp0_98, temp0_101)
            int96_t var_168_1 = zmm2[0].12
            int96_t var_158_1 = _mm_add_ps(_mm_add_ps(temp0_105, temp0_100), temp0_104)[0].12
            int128_t zmm10_1
            int512_t zmm12_1
            zmm10_1, zmm12_1, zmm13 = sub_1407740e0(&var_188, 0x322bcc77)
            float temp0_108[0x4] = __cmpps_xmmps_memps_immb(data_143f2b8d0, temp0_8, 2)
            float zmm2_1[0x4] = var_188[0]
            uint32_t zmm1_1 = var_188[1]
            float zmm4_1[0x4] = _mm_and_ps(temp0_108, data_143f2b8c0 ^ zmm10_1) ^ data_143f2b8c0
            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
            zmm1_1 = zmm1_1 f* zmm4_1[0]
            uint32_t zmm0_1[0x4] = var_188[2]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
            var_188[0] = zmm2_1[0]
            float temp0_110[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            var_188[2] = zmm0_1[0]
            zmm0_1 = var_178_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
            var_188[1] = zmm1_1
            zmm1_1 = var_178_1:4.d f* temp0_110[0]
            float zmm3_1 = var_178_1.d * temp0_110[0]
            zmm2_1 = var_168_1.d
            float temp0_111[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            var_178_1:8.d = zmm0_1[0]
            zmm0_1 = var_168_1:8.d
            var_178_1:4.d = zmm1_1
            zmm0_1[0] = zmm0_1[0] f* temp0_111[0]
            zmm2_1[0] = zmm2_1[0] * temp0_111[0]
            zmm1_1 = var_168_1:4.d f* temp0_111[0]
            var_168_1:8.d = zmm0_1[0]
            var_178_1.d = zmm3_1
            var_168_1.d = zmm2_1[0]
            var_168_1:4.d = zmm1_1
            sub_14077e4a0(&var_218, &var_188)
            float zmm5_1[0x4] = var_218
            zmm12_1.o = zx.o(0)
            uint32_t zmm6_1[0x4] = data_143f2b8b0
            float temp0_112[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_114[0x4] = _mm_add_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x4e))
            float temp0_116[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0x39), temp0_114)
            float temp0_117[0x4] = _mm_rsqrt_ps(temp0_116)
            float temp0_118[0x4] = _mm_mul_ps(temp0_116, zmm6_1)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_117, temp0_117), temp0_118)), 
                    temp0_117), 
                temp0_117)
            zmm6_1 = _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_118))
            float temp0_128[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_116, 2)
            zmm6_1 = _mm_add_ps(_mm_mul_ps(zmm6_1, zmm2), zmm2)
            zmm2 = _mm_unpacklo_ps(var_158_1:4.d, zmm13.q)
            zmm6_1 =
                _mm_and_ps(_mm_mul_ps(zmm6_1, zmm5_1) ^ data_143f2b8a0, temp0_128) ^ data_143f2b8a0
            zmm0 = temp0_8
            var_138_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_158_1.d, var_158_1:8.d[0].q), zmm2[0].q)
            var_148 = zmm6_1
    
    int64_t rdi_1 = sx.q(*(arg1 + 0x110))
    int64_t rbx_2 = sx.q(r13[1].d)
    int32_t rax_6 = (rbx_2 + rdi_1).d
    r13[1].d = rax_6
    
    if (rax_6 s> *(r13 + 0xc))
        sub_1405c4fe0(r13)
    
    memset((rbx_2 << 6) + *r13, 0, rdi_1 << 6)
    float temp0_172 = *(arg1 + 0x2c)
    zmm13.d f- temp0_172
    bool c_1 = zmm13.d f< temp0_172
    
    if (c_1 != 0 && (*(arg1 + 0x115) & 0x40) == 0)
        int32_t i = 0
        int32_t i_3 = 0
        
        if (*(arg1 + 0x258) s> 0)
            int64_t rbx_3 = 0
            void* rdx_9 = &r12_1[2]
            void* rdi_2 = nullptr
            
            do
                void* rax_8 = *(rdx_9 + 0x10)
                int64_t r9_2 = *(arg1 + 0x250)
                uint32_t rcx_13 = zx.d(*(rdi_2 + r9_2))
                
                if (rax_8 != 0)
                    rdx_9 = rax_8
                
                float rax_14
                int64_t* rcx_20
                
                if (not(test_bit(*(rdx_9 + (zx.q(rcx_13) u>> 5 << 2)), rcx_13 & 0x1f)))
                    rcx_20 = *(arg1 + 0x230)
                    *(rcx_20 + rbx_3) = data_143dbb1f8.q
                    rax_14 = data_143dbb200
                else
                    int16_t* r9_3 = *r12_1
                    int16_t* rcx_15 = r9_3
                    void* rdx_10 = &r9_3[sx.q(r12_1[1].d)]
                    int32_t rcx_16
                    
                    if (r9_3 == rdx_10)
                    label_141aabfe8:
                        rcx_16 = -1
                    else
                        while (zx.d(*rcx_15) != *(rdi_2 + r9_2))
                            rcx_15 = &rcx_15[1]
                            
                            if (rcx_15 == rdx_10)
                                goto label_141aabfe8
                        
                        rcx_16 = ((rcx_15 - r9_3) s>> 1).d
                    
                    int64_t r15_1 = sx.q(rcx_16)
                    
                    if (*(r15_1 + r15[4]) == 0)
                        sub_141a98300(&r15[1], rcx_16)
                        i = i_3
                    
                    zmm2 = *(r15[1] + r15_1 * 0x30 + 0x10)
                    rcx_20 = *(arg1 + 0x230)
                    rax_14 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                    *(rcx_20 + rbx_3) =
                        (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
                
                *(rcx_20 + rbx_3 + 8) = rax_14
                rdx_9 = &r12_1[2]
                i += 1
                rbx_3 += 0xc
                rdi_2 += 4
                i_3 = i
            while (i s< *(arg1 + 0x258))
            
            r13 = arg3
            r15 = arg2
        
        *(arg1 + 0xd0) = var_148
        *(arg1 + 0xf0) = zmm0
        *(arg1 + 0xe0) = var_138_2
    
    *(arg1 + 0x115) &= 0xbf
    uint32_t rcx_12
    rcx_12.b = c_1 << 6
    *(arg1 + 0x115) |= rcx_12.b
    float var_118[0x4]
    float zmm12_2[0x4]
    uint32_t zmm13_1[0x4]
    uint32_t zmm15_1[0x4]
    zmm12_2, zmm13_1, zmm15_1 = sub_140ad7d70(arg1 + 0xd0, &var_118, &var_148)
    uint32_t zmm0_3[0x4] = *(arg1 + 0x20c)
    int32_t i_1 = 1
    float (* rdi_3)[0x4] = 0xc
    int32_t var_308_2 = 1
    float zmm8_1[0x4] = 0x80000000
    uint32_t zmm1_2[0x4]
    uint32_t zmm2_2[0x4]
    uint32_t zmm4_3[0x4]
    float zmm5_2[0x4]
    float zmm6_2[0x4]
    uint32_t zmm7_1[0x4]
    uint32_t zmm9_1[0x4]
    float zmm10_2[0x4]
    uint32_t zmm11_1[0x4]
    
    if (zmm0_3[0] f!= zmm13_1[0] || zmm13_1[0] f!= *(arg1 + 0x210)
            || not(zmm13_1[0] f== *(arg1 + 0x214)))
        bool cond:3_1 = (*(arg1 + 0x115) & 0x10) == 0
        zmm10_2 = zmm15_1
        zmm15_1[0] = zmm15_1[0] f* zmm0_3[0]
        zmm10_2[0] = zmm10_2[0] f* *(arg1 + 0x210)
        zmm15_1[0] = zmm15_1[0] f* *(arg1 + 0x214)
        zmm9_1 = zmm15_1 ^ 0x80000000
        zmm10_2 ^= 0x80000000
        zmm11_1 = zmm15_1 ^ 0x80000000
        
        if (not(cond:3_1))
            void* rax_15 = *r15
            zmm7_1 = data_143f2b8b0
            zmm6_2 = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
            zmm5_2 = *(rax_15 + 0x70)
            uint32_t var_178_2[0x4] = *(rax_15 + 0x80)
            uint32_t var_168_2[0x4] = *(rax_15 + 0x90)
            zmm1_2 = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            zmm4_3 = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_3)
            float temp0_183[0x4] = _mm_mul_ps(zmm4_3, zmm7_1)
            zmm2_2 = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_183)), 
                    zmm1_2), 
                zmm1_2)
            zmm7_1 = _mm_sub_ps(zmm7_1, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), temp0_183))
            zmm0_3 = _mm_cmpeq_ps(data_143f2b8f0, zmm4_3, 2)
            zmm4_3 = _mm_unpacklo_ps(zmm9_1, zmm11_1[0].q)
            zmm7_1 = _mm_add_ps(_mm_mul_ps(zmm7_1, zmm2_2), zmm2_2)
            zmm4_3 = _mm_mul_ps(
                _mm_unpacklo_ps(zmm4_3, _mm_unpacklo_ps(zmm10_2, zmm13_1[0].q)[0].q), zmm6_2)
            zmm7_1 = _mm_mul_ps(zmm7_1, zmm5_2)
            zmm2_2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
            zmm7_1 = _mm_and_ps(zmm7_1 ^ data_143f2b8a0, zmm0_3) ^ data_143f2b8a0
            zmm0_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            float temp0_203[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
            zmm1_2 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm1_2)
            zmm2_2 = _mm_mul_ps(zmm2_2, temp0_203)
            zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
            zmm2_2 = _mm_sub_ps(zmm2_2, zmm0_3)
            zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
            zmm7_1 = _mm_mul_ps(zmm7_1, zmm2_2)
            zmm0_3 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9)
            zmm9_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2), temp0_203)
            zmm0_3 = _mm_mul_ps(zmm0_3, zmm1_2)
            zmm7_1 = _mm_add_ps(zmm7_1, zmm4_3)
            zmm9_1 = _mm_add_ps(_mm_sub_ps(zmm9_1, zmm0_3), zmm7_1)
            zmm10_2 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
            zmm11_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
        
        float temp0_220[0x4] = __mulps_xmmps_memps(var_148, data_143f2b8e0)
        zmm4_3 = _mm_rcp_ps(zmm0)
        zmm2_2 = _mm_unpacklo_ps(zmm10_2, zmm13_1[0].q)
        float temp0_223[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xc9)
        zmm1_2 = _mm_shuffle_ps(temp0_220, temp0_220, 0xd2)
        zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm9_1, zmm11_1[0].q), zmm2_2[0].q)
        zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9), zmm1_2)
        zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0xd2), temp0_223)
        float temp0_231[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xff)
        zmm2_2 = _mm_sub_ps(zmm2_2, zmm0_3)
        zmm0_3 = _mm_mul_ps(zmm4_3, zmm4_3)
        zmm4_3 = _mm_add_ps(zmm4_3, zmm4_3)
        zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
        zmm0_3 = _mm_mul_ps(zmm0_3, zmm0)
        float temp0_237[0x4] = _mm_mul_ps(temp0_231, zmm2_2)
        zmm4_3 = _mm_sub_ps(zmm4_3, zmm0_3)
        float temp0_239[0x4] = _mm_add_ps(temp0_237, zmm7_1)
        zmm0_3 = _mm_mul_ps(zmm4_3, zmm4_3)
        zmm4_3 = _mm_add_ps(zmm4_3, zmm4_3)
        zmm0_3 = _mm_mul_ps(zmm0_3, zmm0)
        float temp0_244[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm0, data_143f2b9a0), data_143f2b990, 2)
        zmm4_3 = _mm_sub_ps(zmm4_3, zmm0_3)
        zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9), zmm1_2)
        zmm1_2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2), temp0_223), zmm0_3)
        zmm5_2 = _mm_and_ps(temp0_244, zmm4_3 ^ zmm12_2) ^ zmm4_3
        int96_t var_2d8_1 = _mm_mul_ps(_mm_add_ps(zmm1_2, temp0_239), zmm5_2)[0].12
        
        if (*(arg1 + 0x238) s> 1)
            zmm2_2 = var_2d8_1:8.d
            int32_t* rcx_23 = 0xc
            zmm4_3 = var_2d8_1.d
            
            do
                int64_t rax_16 = *(arg1 + 0x230)
                zmm1_2 = var_2d8_1:4.d
                i_1 += 1
                zmm4_3[0] = zmm4_3[0] f+ *(rcx_23 + rax_16)
                zmm1_2[0] = zmm1_2[0] f+ *(rcx_23 + rax_16 + 4)
                *(rcx_23 + rax_16) = zmm4_3[0]
                zmm2_2[0] = zmm2_2[0] f+ *(rcx_23 + rax_16 + 8)
                *(rcx_23 + rax_16 + 4) = zmm1_2[0]
                *(rcx_23 + rax_16 + 8) = zmm2_2[0]
                rcx_23 = &rcx_23[3]
            while (i_1 s< *(arg1 + 0x238))
    
    int16_t* r8_7 = *r12_1
    int16_t* r14_2 = r8_7
    void* rcx_24 = &r8_7[sx.q(r12_1[1].d)]
    int32_t r14_3
    
    if (r8_7 == rcx_24)
    label_141aac3d5:
        r14_3 = -1
    else
        while (zx.d(*r14_2) != **(arg1 + 0x250))
            r14_2 = &r14_2[1]
            
            if (r14_2 == rcx_24)
                goto label_141aac3d5
        
        r14_3 = ((r14_2 - r8_7) s>> 1).d
    
    int64_t rbx_4 = sx.q(r14_3)
    
    if (*(rbx_4 + r15[4]) == 0)
        zmm8_1, zmm13_1, zmm15_1 = sub_141a98300(&r15[1], r14_3)
    
    int32_t* rcx_26 = *r13
    uint32_t (* rbx_7)[0x4] = rbx_4 * 0x30 + r15[1]
    var_188[0] = r14_3
    uint32_t var_178_3[0x4] = *rbx_7
    uint32_t var_158_2[0x4] = rbx_7[2]
    uint32_t var_168_3[0x4] = rbx_7[1]
    sub_141a917c0(rcx_26, &var_188)
    zmm2_2 = rbx_7[1]
    int64_t* rcx_27 = *(arg1 + 0x230)
    zmm12_2 = 0x3f800000
    float var_270_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)[0]
    *rcx_27 = (_mm_unpacklo_ps(zmm2_2, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0].q)).q
    rcx_27[1].d = var_270_2
    int32_t var_2c8
    float zmm0_4[0x4]
    
    if (*(arg1 + 0x258) s> 1)
        int64_t rbx_8 = 0x40
        int64_t var_2b0_1 = 0x18
        void* rcx_28 = 4
        int64_t var_240_1 = 0x40
        int32_t* var_280_1 = 4
        int64_t r14_10
        
        do
            int16_t* r9_4 = *r12_1
            int16_t* rcx_29 = r9_4
            void* rdx_16 = &r9_4[sx.q(r12_1[1].d)]
            int32_t rcx_30
            
            if (r9_4 == rdx_16)
            label_141aac4d6:
                rcx_30 = -1
            else
                while (zx.d(*rcx_29) != *(rcx_28 + *(arg1 + 0x250) - 4))
                    rcx_29 = &rcx_29[1]
                    
                    if (rcx_29 == rdx_16)
                        goto label_141aac4d6
                
                rcx_30 = ((rcx_29 - r9_4) s>> 1).d
            
            int64_t rax_25 = *(arg1 + 0x230)
            int32_t var_288 = rcx_30
            int64_t r14_4 = sx.q(rcx_30)
            int32_t rax_26 = *(rax_25 + rdi_3 - 4)
            int64_t var_268_1 = *(rax_25 + rdi_3 - 0xc)
            
            if (*(r14_4 + r15[4]) == 0)
                zmm12_2, zmm13_1, zmm15_1 = sub_141a98300(&r15[1], rcx_30)
            
            int16_t* r8_9 = *r12_1
            int16_t* r14_5 = r8_9
            int96_t var_2f8_2 = (*(r15[1] + r14_4 * 0x30 + 0x10))[0].12
            void* rcx_35 = &r8_9[sx.q(r12_1[1].d)]
            int64_t r14_6
            
            if (r8_9 == rcx_35)
            label_141aac565:
                r14_6 = 0xffffffff
            else
                while (zx.d(*r14_5) != *(var_280_1 + *(arg1 + 0x250)))
                    r14_5 = &r14_5[1]
                    
                    if (r14_5 == rcx_35)
                        goto label_141aac565
                
                r14_6 = (r14_5 - r8_9) s>> 1
            
            zmm4_3 = var_118
            int64_t rax_32 = *(arg1 + 0x230)
            float temp0_257[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            zmm1_2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
            int64_t rax_33 = r15[4]
            float var_f8[0x4]
            float temp0_263[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(_mm_unpacklo_ps(*(rdi_3 + rax_32), (*(rdi_3 + rax_32 + 8))[0].q), 
                    _mm_unpacklo_ps(*(rdi_3 + rax_32 + 4), zmm13_1[0].q)[0].q), 
                var_f8)
            int64_t r13_2 = sx.q(r14_6.d)
            bool cond:4_1 = *(rax_33 + r13_2) != 0
            float temp0_265[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_263, temp0_263, 0xc9), zmm1_2)
            zmm2_2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_263, temp0_263, 0xd2), temp0_257), 
                temp0_265)
            zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
            zmm4_3 = _mm_mul_ps(zmm4_3, zmm2_2)
            float temp0_272[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9), zmm1_2)
            zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2)
            zmm4_3 = _mm_add_ps(zmm4_3, temp0_263)
            float var_108[0x4]
            int96_t var_2d8_2 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm1_2, temp0_257), temp0_272), zmm4_3), var_108)[0].12
            
            if (not(cond:4_1))
                zmm12_2, zmm13_1, zmm15_1 = sub_141a98300(&r15[1], r14_6.d)
            
            zmm8_1 = var_268_1.d
            zmm9_1 = var_268_1:4.d
            zmm10_2 = rax_26
            float zmm14_1[0x4] = var_2d8_2.d
            zmm1_2 = *(arg1 + 0x11c)
            zmm6_2 = *(r15[1] + r13_2 * 0x30 + 0x10)
            zmm7_1 = zmm6_2
            zmm7_1[0] = zmm7_1[0] f- var_2f8_2.d
            zmm11_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
            zmm11_1[0] = zmm11_1[0] f- var_2f8_2:4.d
            float temp0_280[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
            temp0_280[0] = temp0_280[0] f- var_2f8_2:8.d
            zmm8_1[0] = zmm8_1[0] f+ zmm7_1[0]
            zmm9_1[0] = zmm9_1[0] f+ zmm11_1[0]
            zmm10_2[0] = zmm10_2[0] + temp0_280[0]
            zmm8_1[0] = zmm8_1[0] - zmm14_1[0]
            zmm9_1[0] = zmm9_1[0] f- var_2d8_2:4.d
            zmm10_2[0] = zmm10_2[0] f- var_2d8_2:8.d
            float zmm0_5[0x4]
            zmm0_5, zmm6_2, zmm7_1 = sub_141e3b530(arg1 + 0x1a8, zmm1_2, zmm15_1)
            int64_t rax_35 = *(arg1 + 0x240)
            zmm15_1 = zmm0_5
            zmm15_1[0] = zmm15_1[0] f* var_2e8
            zmm15_1[0] = zmm15_1[0] f* *(var_280_1 + rax_35)
            
            if (zmm15_1[0] f>= zmm13_1[0])
                zmm15_1 = _mm_min_ss(zmm15_1[0], zmm12_2[0])
            else
                zmm15_1 = zmm13_1
            
            int64_t* rcx_40 = *(arg1 + 0x230)
            zmm8_1[0] = zmm8_1[0] f* zmm15_1[0]
            zmm9_1[0] = zmm9_1[0] f* zmm15_1[0]
            zmm10_2[0] = zmm10_2[0] f* zmm15_1[0]
            zmm8_1[0] = zmm8_1[0] + zmm14_1[0]
            zmm9_1[0] = zmm9_1[0] f+ var_2d8_2:4.d
            uint32_t var_300_1 = zmm15_1[0]
            zmm10_2[0] = zmm10_2[0] f+ var_2d8_2:8.d
            *(rcx_40 + rdi_3) = (_mm_unpacklo_ps(zmm8_1, zmm9_1[0].q)).q
            *(rcx_40 + rdi_3 + 8) = zmm10_2[0]
            char rdx_20 = *(arg1 + 0x115)
            char rax_37 = rdx_20
            float zmm3_3[0x4]
            
            if ((rdx_20 & 2) != 0)
                float (* rcx_41)[0x4] = *(arg1 + 0x230)
                zmm7_1[0] = zmm7_1[0] f* zmm7_1[0]
                zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                zmm3_3 = *(rcx_41 + rdi_3)
                zmm4_3 = *(rcx_41 + rdi_3 + 4)
                zmm5_2 = *(rcx_41 + rdi_3 + 8)
                zmm8_1 = *(rcx_41 + rdi_3 - 8)
                zmm9_1 = *(rcx_41 + rdi_3 - 4)
                zmm4_3[0] = zmm4_3[0] f- zmm8_1[0]
                zmm5_2[0] = zmm5_2[0] f- zmm9_1[0]
                zmm11_1[0] = zmm11_1[0] f* zmm11_1[0]
                zmm7_1[0] = zmm7_1[0] f+ zmm11_1[0]
                zmm4_3[0] = zmm4_3[0] f* zmm4_3[0]
                zmm1_2 = zmm5_2
                zmm1_2[0] = zmm1_2[0] f* zmm5_2[0]
                zmm7_1[0] = zmm7_1[0] f+ zmm6_2[0]
                float temp0_283[0x4] = _mm_sqrt_ss(0, zmm7_1[0])
                zmm7_1 = *(rcx_41 + rdi_3 - 0xc)
                zmm3_3[0] = zmm3_3[0] f- zmm7_1[0]
                zmm3_3[0] = zmm3_3[0] * zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm3_3[0]
                zmm4_3[0] = zmm4_3[0] f+ zmm1_2[0]
                zmm1_2 = _mm_sqrt_ss(0, zmm4_3[0])
                zmm2_2 = *(arg1 + 0x208)
                zmm0_5 = zmm1_2
                zmm0_5[0] = zmm0_5[0] - temp0_283[0]
                
                if (not(zmm0_5[0] f<= zmm2_2[0]) && not(zmm1_2[0] f<= 9.99999994e-09f))
                    temp0_283[0] = temp0_283[0] f+ zmm2_2[0]
                    zmm12_2[0] = zmm12_2[0] f/ zmm1_2[0]
                    zmm3_3[0] = zmm3_3[0] * zmm12_2[0]
                    zmm4_3[0] = zmm4_3[0] f* zmm12_2[0]
                    zmm5_2[0] = zmm5_2[0] * zmm12_2[0]
                    zmm3_3[0] = zmm3_3[0] * temp0_283[0]
                    zmm4_3[0] = zmm4_3[0] f* temp0_283[0]
                    zmm5_2[0] = zmm5_2[0] * temp0_283[0]
                    zmm3_3[0] = zmm3_3[0] f+ zmm7_1[0]
                    zmm4_3[0] = zmm4_3[0] f+ zmm8_1[0]
                    zmm5_2[0] = zmm5_2[0] f+ zmm9_1[0]
                    *(rcx_41 + rdi_3) = (_mm_unpacklo_ps(zmm3_3, zmm4_3[0].q)).q
                    *(rcx_41 + rdi_3 + 8) = zmm5_2[0]
                    rax_37 = *(arg1 + 0x115)
            
            if ((rax_37 & 8) != 0)
                int32_t i_2 = 0
                
                if (*(arg1 + 0x200) s> 0)
                    zmm0_5 = data_142d4cc30
                    int64_t r14_9 = 0
                    zmm15_1 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xd2)
                    uint32_t var_1b8_1[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xc9)
                    
                    do
                        void* rbx_10 = *(arg1 + 0x1f8) + r14_9
                        zmm7_1 = *(rbx_10 + 0x30)
                        zmm6_2 = *(rbx_10 + 0x10)
                        zmm11_1 = *(rbx_10 + 0x20)
                        uint32_t var_2d8_3[0x4] = zmm7_1
                        
                        if (sub_141ea6180(rbx_10, r12_1) != 0)
                            int32_t rax_40 = *(rbx_10 + 8)
                            int32_t rdx_22
                            
                            if (rax_40 s>= 0)
                                rdx_22 = *(rbx_10 + 0xc)
                            else
                                int32_t rcx_43 = rax_40 * 2
                                
                                if ((rcx_43 & 0xfffffffe) == 0xfffffffe)
                                    rdx_22 = -1
                                else
                                    rdx_22 = *(r12_1[0x10] + (sx.q(rcx_43) s>> 1 << 2))
                            
                            int64_t rbx_11 = sx.q(rdx_22)
                            
                            if (*(rbx_11 + r15[4]) == 0)
                                zmm6_2, zmm7_1, zmm11_1, zmm13_1, zmm15_1 =
                                    sub_141a98300(&r15[1], rdx_22)
                            
                            int64_t rax_45 = r15[1]
                            int64_t rcx_48 = rbx_11 * 6
                            zmm12_2 = *(rax_45 + (rcx_48 << 3) + 0x20)
                            zmm8_1 = *(rax_45 + (rcx_48 << 3) + 0x10)
                            zmm5_2 = *(rax_45 + (rcx_48 << 3))
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm7_1, zmm12_2), 
                                    data_143f2b8d0, 1)) == 0)
                                zmm11_1 = _mm_mul_ps(zmm11_1, zmm12_2)
                                zmm2_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x1b)
                                zmm1_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x4e)
                                zmm2_2 = _mm_mul_ps(zmm2_2, _mm_shuffle_ps(zmm5_2, zmm5_2, 0))
                                zmm3_3 = zmm11_1
                                zmm4_3 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                                float temp0_426[0x4] = _mm_mul_ps(zmm6_2, zmm4_3)
                                zmm2_2 = __mulps_xmmps_memps(zmm2_2, data_143f2b850)
                                float temp0_428[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xb1)
                                zmm2_2 = _mm_add_ps(zmm2_2, temp0_426)
                                zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55))
                                float temp0_433[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), temp0_428)
                                zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                                float temp0_435[0x4] =
                                    __mulps_xmmps_memps(temp0_433, data_143f2b830)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                                zmm1_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                                float temp0_438[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                                zmm6_2 = _mm_add_ps(zmm2_2, temp0_435)
                                zmm2_2 = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0xd2), temp0_438), 
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0xc9), zmm1_2))
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
                                zmm11_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2)
                                float temp0_447[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9)
                                zmm11_1 = _mm_mul_ps(zmm11_1, temp0_438)
                                float temp0_449[0x4] = _mm_mul_ps(temp0_447, zmm1_2)
                                zmm2_2 = _mm_mul_ps(zmm2_2, zmm4_3)
                                zmm11_1 = _mm_add_ps(
                                    _mm_add_ps(_mm_sub_ps(zmm11_1, temp0_449), 
                                        _mm_add_ps(zmm2_2, zmm3_3)), 
                                    zmm8_1)
                            else
                                zmm9_1 = data_143f2b810
                                zmm1_2 = _mm_add_ps(zmm5_2, zmm5_2)
                                zmm2_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 4)
                                zmm4_3 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xc9)
                                float temp0_294[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                                float temp0_295[0x4] = _mm_mul_ps(zmm5_2, zmm1_2)
                                zmm2_2 = _mm_mul_ps(zmm2_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                                float temp0_299[0x4] = _mm_shuffle_ps(temp0_295, temp0_295, 0x1a)
                                float temp0_300[0x4] = _mm_mul_ps(temp0_294, zmm1_2)
                                float temp0_302[0x4] =
                                    _mm_add_ps(temp0_299, _mm_shuffle_ps(temp0_295, temp0_295, 1))
                                float temp0_303[0x4] = _mm_add_ps(temp0_300, zmm2_2)
                                zmm2_2 = _mm_sub_ps(zmm2_2, temp0_300)
                                zmm1_2 = _mm_sub_ps(zmm9_1, temp0_302)
                                float temp0_306[0x4] = _mm_mul_ps(temp0_303, zmm12_2)
                                zmm4_3 = _mm_mul_ps(zmm4_3, zmm2_2)
                                zmm1_2 = _mm_mul_ps(zmm1_2, zmm12_2)
                                zmm2_2 = _mm_add_ps(zmm6_2, zmm6_2)
                                uint32_t temp0_310[0x4] =
                                    __andps_xmmxud_memxud(zmm1_2, data_143f2b820)
                                float temp0_311[0x4] = _mm_shuffle_ps(zmm4_3, temp0_310, 0x32)
                                float temp0_313[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_306, temp0_310, 0), temp0_311, 0x82)
                                float temp0_314[0x4] = _mm_shuffle_ps(temp0_306, temp0_310, 0x31)
                                zmm7_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_3, temp0_310, 0x10), 
                                    temp0_314, 0x88)
                                zmm0_5 = zmm9_1
                                float temp0_317[0x4] = _mm_mul_ps(zmm6_2, zmm2_2)
                                float temp0_319[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_306, zmm4_3, 0x12), temp0_310, 0xe8)
                                zmm1_2 = zmm8_1
                                zmm0_5[0].q = zmm1_2 u>> 0x40
                                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm0_5, 0xc4)
                                float temp0_321[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 4)
                                uint32_t var_2f8_5[0x4] = zmm1_2
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x29), temp0_321)
                                zmm0_5 = var_2d8_3
                                float temp0_324[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                                zmm4_3 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xc9)
                                zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x12), temp0_324)
                                float temp0_328[0x4] = _mm_add_ps(zmm2_2, zmm1_2)
                                zmm1_2 = _mm_sub_ps(zmm1_2, zmm2_2)
                                float temp0_330[0x4] = _mm_mul_ps(temp0_328, zmm0_5)
                                float temp0_331[0x4] = _mm_shuffle_ps(temp0_317, temp0_317, 0x1a)
                                zmm4_3 = _mm_mul_ps(zmm4_3, zmm1_2)
                                uint32_t temp0_337[0x4] = __andps_xmmxud_memxud(
                                    __mulps_xmmps_memps(
                                        _mm_sub_ps(zmm9_1, 
                                            _mm_add_ps(temp0_331, 
                                                _mm_shuffle_ps(temp0_317, temp0_317, 1))), 
                                        var_2d8_3), 
                                    data_143f2b820)
                                float temp0_338[0x4] = _mm_shuffle_ps(zmm4_3, temp0_337, 0x32)
                                float temp0_340[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_330, temp0_337, 0), temp0_338, 0x82)
                                float temp0_343[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(zmm4_3, temp0_337, 0x10), 
                                    _mm_shuffle_ps(temp0_330, temp0_337, 0x31), 0x88)
                                zmm0_5 = zmm9_1
                                zmm2_2 =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0x55), zmm7_1)
                                zmm0_5[0].q = zmm11_1 u>> 0x40
                                zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm0_5, 0xc4)
                                float temp0_348[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0), temp0_313)
                                float temp0_350[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_330, zmm4_3, 0x12), temp0_337, 0xe8)
                                zmm1_2 = _mm_shuffle_ps(temp0_340, temp0_340, 0xaa)
                                zmm2_2 = _mm_add_ps(zmm2_2, temp0_348)
                                float temp0_354[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_340, temp0_340, 0xff), var_2f8_5)
                                zmm1_2 = _mm_mul_ps(zmm1_2, temp0_319)
                                float temp0_357[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0), temp0_313)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0xaa), 
                                    temp0_319)
                                zmm2_2 = _mm_add_ps(zmm2_2, temp0_354)
                                float temp0_363[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0x55), zmm7_1)
                                float temp0_364[0x4] = _mm_shuffle_ps(temp0_343, temp0_343, 0xff)
                                var_188 = zmm2_2
                                zmm2_2 = _mm_shuffle_ps(temp0_350, temp0_350, 0x55)
                                float temp0_366[0x4] = _mm_add_ps(temp0_363, temp0_357)
                                zmm2_2 = _mm_mul_ps(zmm2_2, zmm7_1)
                                float temp0_368[0x4] = _mm_mul_ps(temp0_364, var_2f8_5)
                                float temp0_369[0x4] = _mm_shuffle_ps(temp0_350, temp0_350, 0)
                                float temp0_370[0x4] = _mm_add_ps(temp0_366, zmm1_2)
                                float temp0_371[0x4] = _mm_mul_ps(temp0_369, temp0_313)
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_350, temp0_350, 0xaa), 
                                    temp0_319)
                                float temp0_374[0x4] = _mm_add_ps(temp0_370, temp0_368)
                                float temp0_375[0x4] = _mm_shuffle_ps(temp0_350, temp0_350, 0xff)
                                zmm2_2 = _mm_add_ps(zmm2_2, temp0_371)
                                float temp0_377[0x4] = _mm_mul_ps(temp0_375, var_2f8_5)
                                float temp0_378[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0)
                                int96_t var_178_4 = temp0_374[0].12
                                float temp0_379[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                                float temp0_381[0x4] = _mm_mul_ps(temp0_379, zmm7_1)
                                zmm1_2 =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa), temp0_319)
                                float temp0_384[0x4] = _mm_mul_ps(temp0_378, temp0_313)
                                zmm2_2 = _mm_add_ps(zmm2_2, temp0_377)
                                zmm11_1 =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0xff), var_2f8_5)
                                float temp0_388[0x4] = _mm_add_ps(temp0_381, temp0_384)
                                int96_t var_168_4 = zmm2_2[0].12
                                int96_t var_158_3 =
                                    _mm_add_ps(_mm_add_ps(temp0_388, zmm1_2), zmm11_1)[0].12
                                zmm9_1, zmm12_2, zmm13_1, zmm14_1, zmm15_1 =
                                    sub_1407740e0(&var_188, 0x322bcc77)
                                float zmm2_3[0x4] = var_188[0]
                                uint32_t zmm1_3 = var_188[1]
                                zmm14_1 = _mm_and_ps(
                                    _mm_cmpeq_ps(zmm14_1, _mm_mul_ps(var_2d8_3, zmm12_2), 2), 
                                    data_143f2b8c0 ^ zmm9_1) ^ data_143f2b8c0
                                zmm2_3[0] = zmm2_3[0] * zmm14_1[0]
                                uint32_t zmm0_6[0x4] = var_188[2]
                                zmm0_6[0] = zmm0_6[0] f* zmm14_1[0]
                                zmm1_3 = zmm1_3 f* zmm14_1[0]
                                var_188[0] = zmm2_3[0]
                                float temp0_394[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
                                var_188[2] = zmm0_6[0]
                                zmm0_6 = var_178_4:8.d
                                zmm0_6[0] = zmm0_6[0] f* temp0_394[0]
                                var_188[1] = zmm1_3
                                zmm1_3 = var_178_4:4.d f* temp0_394[0]
                                float zmm3_4 = var_178_4.d * temp0_394[0]
                                zmm2_3 = var_168_4.d
                                var_178_4:8.d = zmm0_6[0]
                                zmm0_6 = var_168_4:8.d
                                var_178_4:4.d = zmm1_3
                                float temp0_395[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
                                zmm0_6[0] = zmm0_6[0] f* temp0_395[0]
                                zmm2_3[0] = zmm2_3[0] * temp0_395[0]
                                zmm1_3 = var_168_4:4.d f* temp0_395[0]
                                var_168_4:8.d = zmm0_6[0]
                                var_178_4.d = zmm3_4
                                var_168_4.d = zmm2_3[0]
                                var_168_4:4.d = zmm1_3
                                uint32_t var_1f8[0x4]
                                sub_14077e4a0(&var_1f8, &var_188)
                                zmm5_2 = var_1f8
                                zmm6_2 = data_143f2b8b0
                                zmm1_2 = _mm_mul_ps(zmm5_2, zmm5_2)
                                zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                zmm4_3 = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                                zmm1_2 = _mm_rsqrt_ps(zmm4_3)
                                float temp0_402[0x4] = _mm_mul_ps(zmm4_3, zmm6_2)
                                zmm2_2 = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_2, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_402)), 
                                        zmm1_2), 
                                    zmm1_2)
                                float temp0_410[0x4] = _mm_sub_ps(zmm6_2, 
                                    _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), temp0_402))
                                float temp0_412[0x4] = _mm_cmpeq_ps(
                                    _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
                                float temp0_414[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_410, zmm2_2), zmm2_2)
                                zmm2_2 = _mm_unpacklo_ps(var_158_3:4.d, zmm13_1[0].q)
                                zmm6_2 = _mm_and_ps(_mm_mul_ps(temp0_414, zmm5_2) ^ data_143f2b8a0, 
                                    temp0_412) ^ data_143f2b8a0
                                zmm11_1 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_158_3.d, var_158_3:8.d[0].q), zmm2_2[0].q)
                                var_1f8 = zmm6_2
                        
                        uint32_t* rax_47 = *(arg1 + 0x230)
                        float temp0_455[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
                        zmm1_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
                        zmm2_2 = _mm_mul_ps(temp0_455, zmm15_1)
                        float temp0_458[0x4] = __mulps_xmmps_memps(zmm1_2, var_1b8_1)
                        zmm7_1 = *(rax_47 + rdi_3)
                        float temp0_459[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                        zmm2_2 = _mm_sub_ps(zmm2_2, temp0_458)
                        zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
                        float temp0_462[0x4] = _mm_mul_ps(temp0_459, zmm2_2)
                        float temp0_464[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9), zmm1_2)
                        float temp0_465[0x4] = __addps_xmmps_memps(temp0_462, data_142d4cc30)
                        zmm4_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2), temp0_455)
                        zmm1_2 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
                        zmm0_5 = zmm7_1
                        zmm4_3 = _mm_add_ps(_mm_sub_ps(zmm4_3, temp0_464), temp0_465)
                        zmm0_5[0] = zmm0_5[0] f* zmm4_3[0]
                        float temp0_471[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                        float temp0_472[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                        temp0_471[0] = temp0_471[0] f* *(rax_47 + rdi_3 + 4)
                        zmm2_2 = temp0_471
                        zmm2_2[0] = zmm2_2[0] f* zmm1_2[0]
                        zmm1_2 = temp0_472
                        temp0_471[0] = temp0_471[0] + zmm0_5[0]
                        temp0_472[0] = temp0_472[0] f* *(rax_47 + rdi_3 + 8)
                        temp0_471[0] = temp0_471[0] + temp0_472[0]
                        zmm0_5 = zmm4_3
                        zmm0_5[0] = zmm0_5[0] f* zmm11_1[0]
                        zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa)
                        zmm1_2[0] = zmm1_2[0] f* zmm11_1[0]
                        zmm2_2[0] = zmm2_2[0] f+ zmm0_5[0]
                        zmm2_2[0] = zmm2_2[0] f+ zmm1_2[0]
                        temp0_471[0] = temp0_471[0] f- zmm2_2[0]
                        
                        if (not(temp0_471[0] f>= zmm13_1[0]))
                            zmm1_2 = temp0_471
                            temp0_471[0] = temp0_471[0] f* zmm4_3[0]
                            zmm1_2[0] = zmm1_2[0] f* temp0_471[0]
                            zmm7_1[0] = zmm7_1[0] f- temp0_471[0]
                            temp0_471[0] = temp0_471[0] * temp0_472[0]
                            zmm0_5 = *(rax_47 + rdi_3 + 4)
                            zmm0_5[0] = zmm0_5[0] f- zmm1_2[0]
                            *(rax_47 + rdi_3) = zmm7_1[0]
                            *(rax_47 + rdi_3 + 4) = zmm0_5[0]
                            zmm0_5 = *(rax_47 + rdi_3 + 8)
                            zmm0_5[0] = zmm0_5[0] - temp0_471[0]
                            *(rax_47 + rdi_3 + 8) = zmm0_5[0]
                        
                        i_2 += 1
                        r14_9 += 0x40
                    while (i_2 s< *(arg1 + 0x200))
                    
                    zmm15_1 = var_300_1
                    zmm12_2 = 0x3f800000
                    rbx_8 = var_240_1
            
            if (*(r13_2 + r15[4]) == 0)
                zmm12_2, zmm13_1, zmm15_1 = sub_141a98300(&r15[1], r14_6.d)
            
            float (* rax_49)[0x4] = r15[1]
            var_188[0] = r14_6.d
            r14_10 = sx.q(var_308_2)
            float var_178_5[0x4] = rax_49[r13_2 * 3]
            uint32_t var_168_5[0x4] = rax_49[r13_2 * 3 + 1]
            r13 = arg3
            float var_158_4[0x4] = rax_49[r13_2 * 3 + 2]
            sub_141a917c0((r14_10 << 6) + *r13, &var_188)
            int64_t rax_50 = *(arg1 + 0x230)
            *(*r13 + rbx_8 + 0x20) = _mm_unpacklo_ps(
                _mm_unpacklo_ps(*(rdi_3 + rax_50), (*(rdi_3 + rax_50 + 8))[0].q), 
                _mm_unpacklo_ps(*(rdi_3 + rax_50 + 4), zmm13_1[0].q)[0].q)
            char rax_52 = *(arg1 + 0x115)
            
            if ((rax_52 & 0x20) != 0)
                char rcx_56 = *(arg1 + 0x114)
                
                if (rcx_56 != 1)
                    zmm3_3 = zmm13_1
                    
                    if (rcx_56 != 2)
                        zmm0_4 = zmm12_2
                        zmm2_2 = zmm13_1
                    else
                        zmm2_2 = zmm12_2
                        zmm0_4 = zmm13_1
                else
                    zmm3_3 = zmm12_2
                    zmm0_4 = zmm13_1
                    zmm2_2 = zmm13_1
                
                zmm10_2 = 0x80000000
                
                if ((rax_52 & 1) != 0)
                    zmm3_3 ^= 0x80000000
                    zmm2_2 ^= 0x80000000
                    zmm0_4 ^= 0x80000000
                
                int64_t rcx_57 = *r13
                zmm9_1 = data_143dbb200
                zmm11_1 = data_143dbb1fc
                float temp0_477[0x4] = _mm_unpacklo_ps(zmm3_3, zmm0_4[0].q)
                zmm4_3 = *(rcx_57 + rbx_8 - 0x30)
                float temp0_480[0x4] = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(temp0_477, _mm_unpacklo_ps(zmm2_2, zmm13_1[0].q)[0].q), 
                    *(rcx_57 + rbx_8 - 0x10))
                zmm1_2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
                float temp0_482[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
                zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
                float temp0_485[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_480, temp0_480, 0xc9), zmm1_2)
                zmm2_2 = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_480, temp0_480, 0xd2), temp0_482), temp0_485)
                zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
                zmm4_3 = _mm_mul_ps(zmm4_3, zmm2_2)
                float temp0_492[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9), zmm1_2)
                float temp0_493[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2)
                zmm4_3 = _mm_add_ps(zmm4_3, temp0_480)
                float temp0_497[0x4] =
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_493, temp0_482), temp0_492), zmm4_3)
                zmm4_3 = 0x322bcc77
                temp0_497[0] = temp0_497[0] * temp0_497[0]
                zmm7_1 = _mm_shuffle_ps(temp0_497, temp0_497, 0x55)
                float temp0_499[0x4] = _mm_shuffle_ps(temp0_497, temp0_497, 0xaa)
                zmm7_1[0] = zmm7_1[0] f* zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] f+ temp0_497[0]
                temp0_499[0] = temp0_499[0] * temp0_499[0]
                zmm7_1[0] = zmm7_1[0] f+ temp0_499[0]
                float var_2c0_1
                float var_2b8_1
                
                if (not(zmm7_1[0] f!= zmm12_2[0]))
                    var_2c0_1 = temp0_497[0]
                    uint32_t var_2bc_1 = zmm7_1[0]
                    var_2b8_1 = temp0_499[0]
                    zmm3_3 = data_143dbb1f8
                else if (zmm7_1[0] f>= 9.99999994e-09f)
                    zmm4_3 = 0x3f000000
                    zmm3_3 = zx.o(0)
                    zmm2_2 = 0x3f000000
                    zmm3_3[0] = zmm7_1[0]
                    float temp0_500[0x4] = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    temp0_500[0] = temp0_500[0] * temp0_500[0]
                    zmm1_2 = zmm3_3
                    zmm1_2[0] = zmm1_2[0] f* temp0_500[0]
                    zmm2_2[0] = 0.5f f- zmm1_2[0]
                    temp0_500[0] = temp0_500[0] f* zmm2_2[0]
                    temp0_500[0] = temp0_500[0] + temp0_500[0]
                    zmm1_2 = temp0_500
                    zmm1_2[0] = zmm1_2[0] f* temp0_500[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1_2[0]
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    temp0_500[0] = temp0_500[0] f* zmm4_3[0]
                    zmm4_3 = 0x322bcc77
                    temp0_500[0] = temp0_500[0] + temp0_500[0]
                    float var_2e0_1 = temp0_500[0]
                    zmm1_2 = temp0_500
                    temp0_500[0] = temp0_500[0] * temp0_497[0]
                    zmm1_2[0] = zmm1_2[0] f* zmm7_1[0]
                    temp0_500[0] = temp0_500[0] * temp0_499[0]
                    var_2c0_1 = temp0_500[0]
                    uint32_t var_2bc_3 = zmm1_2[0]
                    var_2b8_1 = temp0_500[0]
                    zmm3_3 = data_143dbb1f8
                else
                    zmm3_3 = data_143dbb1f8
                    var_2c0_1 = zmm3_3[0]
                    uint32_t var_2bc_2 = zmm11_1[0]
                    var_2b8_1 = zmm9_1[0]
                
                zmm12_2 = *(rcx_57 + rbx_8 + 0x20)
                zmm6_2 = zmm12_2
                int64_t var_278 = var_2c0_1.q
                zmm14_1 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0x55)
                zmm12_2 = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xaa)
                float var_270_3 = var_2b8_1
                zmm1_2 = *(rcx_57 + rbx_8 - 0x20)
                zmm6_2[0] = zmm6_2[0] f- zmm1_2[0]
                float temp0_503[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm14_1[0] = zmm14_1[0] - temp0_503[0]
                zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                zmm12_2[0] = zmm12_2[0] f- zmm1_2[0]
                float var_308_3 = zmm6_2[0]
                zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                zmm2_2 = zmm14_1
                zmm1_2 = zmm12_2
                zmm2_2[0] = zmm2_2[0] f* zmm14_1[0]
                zmm1_2[0] = zmm1_2[0] f* zmm12_2[0]
                zmm2_2[0] = zmm2_2[0] f+ zmm6_2[0]
                zmm2_2[0] = zmm2_2[0] f+ zmm1_2[0]
                uint32_t var_2e0_2 = zmm2_2[0]
                float var_2a8
                
                if (not(zmm2_2[0] f!= 1f))
                    var_2a8 = zmm6_2[0]
                    float var_2a4_1 = zmm14_1[0]
                    float var_2a0_1 = zmm12_2[0]
                else if (zmm2_2[0] f>= zmm4_3[0])
                    zmm4_3 = 0x3f000000
                    zmm0_4 = zmm2_2
                    zmm3_3 = zx.o(0)
                    zmm2_2 = 0x3f000000
                    zmm3_3[0] = zmm0_4[0]
                    float temp0_505[0x4] = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                    zmm3_3[0] = zmm3_3[0] * 0.5f
                    temp0_505[0] = temp0_505[0] * temp0_505[0]
                    zmm1_2 = zmm3_3
                    zmm1_2[0] = zmm1_2[0] f* temp0_505[0]
                    zmm2_2[0] = 0.5f f- zmm1_2[0]
                    temp0_505[0] = temp0_505[0] f* zmm2_2[0]
                    temp0_505[0] = temp0_505[0] + temp0_505[0]
                    zmm1_2 = temp0_505
                    zmm1_2[0] = zmm1_2[0] f* temp0_505[0]
                    zmm3_3[0] = zmm3_3[0] f* zmm1_2[0]
                    zmm1_2 = zmm6_2
                    zmm4_3[0] = 0.5f - zmm3_3[0]
                    temp0_505[0] = temp0_505[0] f* zmm4_3[0]
                    temp0_505[0] = temp0_505[0] + temp0_505[0]
                    zmm1_2[0] = zmm1_2[0] f* temp0_505[0]
                    zmm14_1[0] = zmm14_1[0] * temp0_505[0]
                    var_2a8 = zmm1_2[0]
                    zmm1_2 = zmm12_2
                    zmm1_2[0] = zmm1_2[0] f* temp0_505[0]
                    float var_2a4_3 = zmm14_1[0]
                    float var_300_2 = temp0_505[0]
                    uint32_t var_2a0_3 = zmm1_2[0]
                else
                    var_2a8 = zmm3_3[0]
                    uint32_t var_2a4_2 = zmm11_1[0]
                    uint32_t var_2a0_2 = zmm9_1[0]
                
                float var_1a8[0x4]
                sub_140ad6660(&var_1a8, &var_278, &var_2a8)
                bool cond:6_1 = (*(arg1 + 0x115) & 4) == 0
                zmm2_2 = var_1a8
                int64_t rax_54 = *r13
                float temp0_506[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                zmm3_3 = *(rax_54 + rbx_8 - 0x30)
                zmm11_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0x1b), temp0_506)
                zmm1_2 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x4e)
                float temp0_511[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm3_3)
                zmm11_1 = __mulps_xmmps_memps(zmm11_1, data_143f2b850)
                float temp0_513[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xb1)
                zmm11_1 = _mm_add_ps(zmm11_1, temp0_511)
                zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55))
                float temp0_518[0x4] = _mm_mul_ps(temp0_513, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa))
                zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                float temp0_520[0x4] = __mulps_xmmps_memps(temp0_518, data_143f2b830)
                zmm11_1 = _mm_add_ps(_mm_add_ps(zmm11_1, zmm1_2), temp0_520)
                uint32_t var_2d8_4[0x4] = zmm11_1
                
                if (not(cond:6_1))
                    zmm6_2 = data_14399f720.d
                    zmm7_1 = data_14399f720:4.d
                    zmm8_1 = data_14399f720:8.d
                    zmm9_1 = data_14399f720:0xc.d
                    float var_298_1 = zmm6_2[0]
                    uint32_t var_294_1 = zmm7_1[0]
                    float var_290_1 = zmm8_1[0]
                    uint32_t var_28c_1 = zmm9_1[0]
                    
                    if (r14_10.d != 1)
                        zmm2_2 = *(rax_54 + rbx_8 - 0x70)
                        var_298_1 = zmm2_2[0]
                        float temp0_526[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                        zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                        zmm6_2 = zmm2_2
                        zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
                        zmm7_1 = temp0_526
                        uint32_t var_28c_3 = zmm2_2[0]
                        zmm9_1 = zmm2_2
                        float var_294_3 = temp0_526[0]
                        zmm8_1 = zmm1_2
                        uint32_t var_290_3 = zmm1_2[0]
                    else
                        sub_141ea4020(r12_1, &var_2c8, &var_288)
                        int32_t rdx_28 = var_2c8
                        
                        if (rdx_28 != 0xffffffff)
                            float (* rax_55)[0x4]
                            rax_55, zmm10_2, zmm11_1, zmm12_2, zmm13_1, zmm14_1, zmm15_1 =
                                sub_141ab9f30(&r15[1], rdx_28)
                            zmm6_2 = *rax_55
                            var_298_1 = zmm6_2[0]
                            zmm7_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                            zmm8_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
                            zmm9_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                            uint32_t var_294_2 = zmm7_1[0]
                            float var_290_2 = zmm8_1[0]
                            uint32_t var_28c_2 = zmm9_1[0]
                    
                    int64_t rax_56 = sx.q(var_288)
                    zmm6_2 ^= zmm10_2
                    float temp0_529[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x1b)
                    float temp0_530[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xe1)
                    temp0_530[0] = (zmm7_1 ^ zmm10_2)[0]
                    int64_t rax_57 = r12_1[0x14]
                    float temp0_531[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 0xc6)
                    temp0_531[0] = (zmm8_1 ^ zmm10_2)[0]
                    float temp0_532[0x4] = _mm_shuffle_ps(temp0_531, temp0_531, 0x27)
                    temp0_532[0] = zmm9_1[0]
                    float temp0_533[0x4] = _mm_shuffle_ps(temp0_532, temp0_532, 0x39)
                    float var_2f8_6[0x4] = temp0_533
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_533, temp0_533, 0), temp0_529)
                    float temp0_537[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_533, temp0_533, 0xff), zmm11_1)
                    zmm2_2 = __mulps_xmmps_memps(zmm2_2, data_143f2b850)
                    zmm1_2 = _mm_shuffle_ps(temp0_533, temp0_533, 0x55)
                    float temp0_540[0x4] = _mm_shuffle_ps(temp0_533, temp0_533, 0xaa)
                    zmm2_2 = _mm_add_ps(zmm2_2, temp0_537)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm11_1, zmm11_1, 0x4e))
                    float temp0_545[0x4] =
                        _mm_mul_ps(temp0_540, _mm_shuffle_ps(zmm11_1, zmm11_1, 0xb1))
                    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                    float temp0_547[0x4] = __mulps_xmmps_memps(temp0_545, data_143f2b830)
                    var_218 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_2), temp0_547)
                    int64_t rcx_63 = *(arg1 + 0x1d8)
                    int64_t rax_58 = *(arg1 + 0x1e8)
                    float var_198[0x4] = *(rax_57 + rax_56 * 0x30)
                    zmm1_2 = *(rax_58 + rdi_3 - 8)
                    zmm0_4 = *(rax_58 + rdi_3 - 0xc)
                    zmm2_2 = *(rax_58 + rdi_3 - 4)
                    zmm1_2[0] = zmm1_2[0] f+ *(rcx_63 + var_2b0_1 - 8)
                    zmm0_4[0] = zmm0_4[0] f+ *(rcx_63 + var_2b0_1 - 0xc)
                    zmm2_2[0] = zmm2_2[0] f+ *(rcx_63 + var_2b0_1 - 4)
                    uint32_t var_228_1 = zmm1_2[0]
                    float var_22c = zmm0_4[0]
                    uint32_t var_224_1 = zmm2_2[0]
                    zmm3_3 = *(rax_58 + rdi_3 - 4)
                    zmm1_2 = *(rax_58 + rdi_3 - 8)
                    zmm0_4 = *(rax_58 + rdi_3 - 0xc)
                    zmm3_3[0] = zmm3_3[0] f+ *(rcx_63 + var_2b0_1 - 0x10)
                    zmm1_2[0] = zmm1_2[0] f+ *(rcx_63 + var_2b0_1 - 0x14)
                    zmm0_4[0] = zmm0_4[0] f+ *(rcx_63 + var_2b0_1 - 0x18)
                    float var_230_1 = zmm3_3[0]
                    uint32_t var_234_1 = zmm1_2[0]
                    float var_238 = zmm0_4[0]
                    char rax_59
                    rax_59, zmm4_3 = sub_141a7f930(&var_218, &var_198, &var_238, &var_22c)
                    
                    if (rax_59 != 0)
                        zmm3_3 = var_298_1.o
                        zmm2_2 = var_218
                        zmm4_3 = __sqrtss_xmmss_memss(zmm4_3[0], var_2e0_2)
                        int64_t rax_60 = *r13
                        float temp0_553[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0), 
                            _mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b))
                        float temp0_555[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0xff), zmm2_2)
                        float temp0_556[0x4] = __mulps_xmmps_memps(temp0_553, data_143f2b850)
                        zmm1_2 = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                        float temp0_558[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                        float temp0_559[0x4] = _mm_add_ps(temp0_556, temp0_555)
                        zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e))
                        float temp0_563[0x4] =
                            _mm_mul_ps(temp0_558, _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1))
                        zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                        float temp0_565[0x4] = __mulps_xmmps_memps(temp0_563, data_143f2b830)
                        float temp0_567[0x4] = _mm_add_ps(_mm_add_ps(temp0_559, zmm1_2), temp0_565)
                        zmm3_3 = *(rax_60 + rbx_8 - 0x20)
                        zmm11_1 = temp0_567
                        float temp0_568[0x4] = _mm_shuffle_ps(temp0_567, temp0_567, 0x55)
                        zmm9_1 = _mm_shuffle_ps(temp0_567, temp0_567, 0xaa)
                        float temp0_570[0x4] = _mm_shuffle_ps(temp0_567, temp0_567, 0xff)
                        zmm2_2 = temp0_568 ^ data_142d3f780
                        zmm0_4 = zmm11_1
                        zmm2_2[0] = zmm2_2[0] f+ zmm2_2[0]
                        zmm9_1[0] = zmm9_1[0] f+ zmm9_1[0]
                        zmm7_1 = temp0_570
                        temp0_568[0] = temp0_568[0] f* zmm2_2[0]
                        zmm0_4[0] = zmm0_4[0] f* zmm2_2[0]
                        temp0_570[0] = temp0_570[0] f* zmm2_2[0]
                        zmm7_1[0] = zmm7_1[0] f* zmm9_1[0]
                        zmm7_1[0] = zmm7_1[0] f- zmm0_4[0]
                        zmm0_4 = zmm11_1
                        zmm0_4[0] = zmm0_4[0] f* zmm9_1[0]
                        temp0_570[0] = temp0_570[0] + zmm0_4[0]
                        zmm7_1[0] = zmm7_1[0] f* zmm4_3[0]
                        zmm0_4 = zmm9_1
                        zmm0_4[0] = zmm0_4[0] f* zmm9_1[0]
                        zmm7_1[0] = zmm7_1[0] f- zmm14_1[0]
                        temp0_570[0] = temp0_570[0] f* zmm4_3[0]
                        temp0_568[0] = temp0_568[0] - zmm0_4[0]
                        float temp0_571[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
                        temp0_570[0] = temp0_570[0] - zmm12_2[0]
                        zmm7_1[0] = zmm7_1[0] f* zmm15_1[0]
                        temp0_568[0] = temp0_568[0] + 1f
                        zmm14_1[0] = zmm14_1[0] f+ zmm7_1[0]
                        temp0_570[0] = temp0_570[0] f* zmm15_1[0]
                        temp0_568[0] = temp0_568[0] f* zmm4_3[0]
                        zmm12_2[0] = zmm12_2[0] + temp0_570[0]
                        zmm14_1[0] = zmm14_1[0] + temp0_571[0]
                        temp0_568[0] = temp0_568[0] - var_308_3
                        temp0_568[0] = temp0_568[0] f* zmm15_1[0]
                        zmm2_2 = _mm_unpacklo_ps(zmm14_1, zmm13_1[0].q)
                        temp0_568[0] = temp0_568[0] + var_308_3
                        temp0_568[0] = temp0_568[0] + zmm3_3[0]
                        float temp0_573[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
                        zmm12_2[0] = zmm12_2[0] + temp0_573[0]
                        *(rax_60 + rbx_8 + 0x20) =
                            _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_568, zmm12_2[0].q), zmm2_2[0].q)
                        int64_t* rcx_65 = *(arg1 + 0x230)
                        float var_1e0_1 = zmm12_2[0]
                        zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xe1)
                        zmm11_1[0] = temp0_568[0]
                        float temp0_577[0x4] = _mm_unpacklo_ps(temp0_568, zmm14_1[0].q)
                        zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xc6)
                        zmm11_1[0] = zmm9_1[0]
                        *(rcx_65 + rdi_3) = temp0_577.q
                        zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x27)
                        zmm11_1[0] = temp0_570[0]
                        *(rcx_65 + rdi_3 + 8) = var_1e0_1
                        zmm11_1 = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x39)
                        uint32_t var_2d8_5[0x4] = zmm11_1
                
                *(*r13 + rbx_8 - 0x30) = zmm11_1
            
            var_2b0_1 += 0x18
            rcx_28 = &var_280_1[1]
            zmm12_2 = 0x3f800000
            rbx_8 += 0x40
            zmm15_1 = var_2e8
            rdi_3 = &(*rdi_3)[3]
            var_308_2 = r14_10.d + 1
            var_280_1 = rcx_28
            var_240_1 = rbx_8
        while (r14_10.d + 1 s< *(arg1 + 0x258))
        zmm8_1 = 0x80000000
    
    int64_t rax_63 = sx.q(*(arg1 + 0x110))
    int64_t rdx_31 = *r13
    zmm7_1 = *(arg1 + 0x228)
    result = rax_63 << 6
    int64_t rcx_68 = rax_63 << 6
    zmm6_2 = *(result + rdx_31 - 0x70)
    zmm2_2 = *(rcx_68 + rdx_31 - 0x30)
    float temp0_581[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
    zmm9_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
    temp0_581[0] = temp0_581[0] f* zmm9_1[0]
    zmm1_2 = zmm6_2
    zmm1_2[0] = zmm1_2[0] f* zmm2_2[0]
    zmm4_3 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa)
    float temp0_584[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    zmm1_2[0] = zmm1_2[0] f+ temp0_581[0]
    float temp0_585[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
    zmm0_4 = zmm4_3
    zmm0_4[0] = zmm0_4[0] * temp0_584[0]
    zmm11_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
    zmm1_2[0] = zmm1_2[0] f+ zmm0_4[0]
    temp0_585[0] = temp0_585[0] f* zmm11_1[0]
    zmm1_2[0] = zmm1_2[0] f+ temp0_585[0]
    zmm0_4 = zmm7_1
    
    if (not(zmm1_2[0] f>= zmm13_1[0]))
        zmm12_2 = 0xbf800000
        zmm0_4 ^= zmm8_1
    
    zmm12_2[0] = zmm12_2[0] - zmm0_4[0]
    zmm2_2[0] = zmm2_2[0] f* zmm7_1[0]
    var_2c8 = 0x322bcc77
    zmm9_1[0] = zmm9_1[0] f* zmm7_1[0]
    zmm6_2[0] = zmm6_2[0] * zmm12_2[0]
    temp0_585[0] = temp0_585[0] * zmm12_2[0]
    zmm6_2[0] = zmm6_2[0] f+ zmm2_2[0]
    zmm4_3[0] = zmm4_3[0] f* zmm12_2[0]
    temp0_581[0] = temp0_581[0] * zmm12_2[0]
    float temp0_587[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xe1)
    temp0_581[0] = temp0_581[0] f+ zmm9_1[0]
    temp0_584[0] = temp0_584[0] f* zmm7_1[0]
    zmm11_1[0] = zmm11_1[0] f* zmm7_1[0]
    zmm4_3[0] = zmm4_3[0] f+ temp0_584[0]
    temp0_587[0] = temp0_581[0]
    temp0_585[0] = temp0_585[0] f+ zmm11_1[0]
    float temp0_588[0x4] = _mm_shuffle_ps(temp0_587, temp0_587, 0xc6)
    temp0_588[0] = zmm4_3[0]
    float temp0_589[0x4] = _mm_shuffle_ps(temp0_588, temp0_588, 0x27)
    temp0_589[0] = temp0_585[0]
    zmm5_2 = data_143f2b8b0
    float temp0_590[0x4] = _mm_shuffle_ps(temp0_589, temp0_589, 0x39)
    zmm1_2 = _mm_mul_ps(temp0_590, temp0_590)
    zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
    zmm4_3 = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
    zmm1_2 = _mm_rsqrt_ps(zmm4_3)
    float temp0_597[0x4] = _mm_mul_ps(zmm4_3, zmm5_2)
    zmm2_2 = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_597)), zmm1_2), 
        zmm1_2)
    float temp0_605[0x4] = _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), temp0_597))
    zmm0_4 = var_2c8
    float temp0_607[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), zmm4_3, 2)
    *(rcx_68 + rdx_31 - 0x30) = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_605, zmm2_2), zmm2_2), temp0_590) ^ data_143f2b8a0, 
        temp0_607) ^ data_143f2b8a0
    *(arg1 + 0xd0) = var_148
    *(arg1 + 0xf0) = zmm0
    *(arg1 + 0xe0) = var_138_2

__security_check_cookie(result_1 ^ &var_328)
return result
