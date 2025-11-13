// 函数: sub_141f66450
// 地址: 0x141f66450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm12[0x4]
float var_a8[0x4] = zmm12
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
float zmm1[0x4] = *(arg1 + 0x1d0)
float var_178[0x4] = *(arg1 + 0x1c0)
float var_158[0x4] = *(arg1 + 0x1e0)
float var_168[0x4] = zmm1
int32_t r11 = arg3:4.d
int32_t rcx
rcx.b = sub_140b5b8a0(arg3.d, 0) == 0
rcx.b |= r11 != 0

if (rcx.b == 0)
label_141f66c08:
    zmm12 = var_158
    zmm7 = var_168
    zmm6 = var_178
label_141f66c15:
    
    if (arg4 == 1)
        void* rax_19 = *(arg1 + 0xa0)
        
        if (rax_19 == 0)
        label_141f66c66:
            *arg2 = zmm6
            arg2[1] = zmm7
            arg2[2] = zmm12
        else
            void* rax_20 = *(rax_19 + 0x130)
            int128_t* r8_8 = rax_20 + 0x1c0
            
            if (rax_20 == 0)
                r8_8 = &data_143dbb0c0
            
            sub_140ad7d70(&var_178, arg2, r8_8)
    else
        if (arg4 != 2)
            goto label_141f66c66
        
        sub_140ad7d70(&var_178, arg2, arg1 + 0x1c0)
else
    uint32_t zmm3[0x4] = data_143f3b870
    int32_t i = *(arg1 + 0x518)
    zmm1 = zmm3
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm3, data_143f3b880)
    void* r10_1 = *(arg1 + 0x510)
    zmm1[0].q = zx.o(0) u>> 0x40
    int64_t* r12_1 = nullptr
    int32_t r8 = 0
    float var_148[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    float var_138_1[0x4] = zx.o(0)
    int64_t var_1e0 = arg3
    
    while (i s> 0)
        int32_t rcx_2 = i & 0x80000001
        
        if (rcx_2 s< 0)
            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(i)
        int32_t i_1 = (temp4_1 - temp3_1) s>> 1
        i = i_1
        int32_t rax_6 = i_1 + r8
        int64_t rcx_6 = sx.q(rax_6) * 2
        int32_t rax_7 = *(r10_1 + (rcx_6 << 3))
        int32_t rax_8 = rax_7 - arg3.d
        
        if (rax_7 == arg3.d)
            rax_8 = *(r10_1 + (rcx_6 << 3) + 4) - r11
        
        if (rax_8 s< 0)
            r8 = rax_6 + rcx_2
    
    if (r8 s< *(arg1 + 0x518))
        int32_t rax_10 = arg3.d
        int64_t rcx_8 = sx.q(r8) << 4
        int32_t rax_11 = rax_10 - *(rcx_8 + r10_1)
        
        if (rax_10 == *(rcx_8 + r10_1))
            rax_11 = r11 - *(rcx_8 + r10_1 + 4)
        
        if (rax_11 s>= 0 && r8 != 0xffffffff)
            r12_1 = r10_1 + 8 + rcx_8
    
    void* rcx_9 = *(arg1 + 0x430)
    int64_t* rdx_1 = &var_1e0
    
    if (r12_1 != 0)
        rdx_1 = r12_1
    
    int64_t rdx_2 = *rdx_1
    uint32_t var_188[0x4]
    var_188[0].q = rdx_2
    int32_t var_1e8
    int64_t rax_13
    void var_198
    
    if (rcx_9 != 0)
        rax_13 = sub_142310e40(rcx_9, rdx_2, &var_148, &var_1e8, &var_198)
    float var_118[0x4]
    
    if (rcx_9 == 0 || rax_13 == 0)
        int32_t rax_15 = sub_141f5e0e0(arg1, arg3)
        
        if (rax_15 == 0xffffffff)
            goto label_141f66c08
        
        int128_t* rax_16 = sub_141f5e780(arg1, &var_118, rax_15)
        zmm6 = *rax_16
        var_178 = zmm6
        zmm7 = rax_16[1]
        float var_168_2[0x4] = zmm7
        zmm12 = rax_16[2]
        float var_158_2[0x4] = zmm12
        
        if (arg4 != 3)
            goto label_141f66c15
        
        sub_141f649e0(arg1, &var_1e0, arg3)
        int32_t rax_17 = sub_141f5e0e0(arg1, var_1e0)
        
        if (rax_17 == 0xffffffff)
            sub_140ad7d70(&var_178, arg2, arg1 + 0x1c0)
        else
            sub_140ad7d70(&var_178, arg2, sub_141f5e780(arg1, &var_118, rax_17))
    else
        if (arg4 != 3)
            int32_t r8_2 = var_1e8
            
            if (r8_2 == 0xffffffff)
                goto label_141f66c08
            
            uint32_t zmm14[0x4]
            uint32_t var_c8_1[0x4] = zmm14
            float zmm15[0x4]
            float var_d8_1[0x4] = zmm15
            float zmm5[0x4]
            float zmm8[0x4]
            float zmm10[0x4]
            float zmm13[0x4]
            
            if ((*(arg1 + 0x88) & 1) != 0)
                arg5, zmm10, arg6 = sub_141f5e7d0(arg1, &var_118, r8_2, arg1 + 0x1c0)
                zmm5 = var_118
                float var_f8[0x4]
                zmm8 = var_f8
                float var_108[0x4]
                zmm13 = var_108
            else
                zmm5 = data_143dbb0c0
                zmm13 = data_143dbb0d0
                zmm8 = data_143dbb0e0
                var_118 = zmm5
                float var_108_1[0x4] = zmm13
                float var_f8_1[0x4] = zmm8
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(temp0_1, zmm8), data_143f3b8f0, 1)) == 0)
                float zmm2[0x4] = var_148
                float temp0_135[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_135)
                zmm3 = _mm_mul_ps(var_138_1, zmm8)
                float temp0_140[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                float temp0_141[0x4] = __mulps_xmmps_memps(temp0_138, data_143f3b8b0)
                float temp0_142[0x4] = _mm_mul_ps(temp0_140, zmm2)
                zmm12 = _mm_mul_ps(zmm8, temp0_1)
                float temp0_144[0x4] = _mm_add_ps(temp0_141, temp0_142)
                float temp0_146[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_149[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f3b8a0)
                float temp0_151[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f3b890)
                float temp0_153[0x4] = _mm_add_ps(temp0_144, temp0_150)
                float temp0_154[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                float temp0_156[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), temp0_154)
                zmm6 = _mm_add_ps(temp0_153, temp0_152)
                float temp0_160[0x4] =
                    _mm_sub_ps(temp0_156, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), temp0_151))
                float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
                float temp0_162[0x4] = _mm_mul_ps(temp0_140, temp0_161)
                float temp0_164[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xd2), temp0_154)
                float temp0_165[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                float temp0_166[0x4] = _mm_add_ps(temp0_162, zmm3)
                zmm7 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_164, _mm_mul_ps(temp0_165, temp0_151)), temp0_166), 
                    zmm13)
            else
                float temp0_6[0x4] = _mm_add_ps(zmm5, zmm5)
                float var_88_1[0x4] = zmm10
                zmm10 = data_143f3b870
                float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
                float temp0_8[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                zmm3 = _mm_mul_ps(temp0_6, zmm5)
                float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_6, temp0_6, 0x29))
                float temp0_12[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x12)
                float temp0_15[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), temp0_12)
                _mm_mul_ps(zmm8, temp0_1)
                float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_15)
                float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_11)
                float temp0_21[0x4] = _mm_sub_ps(temp0_11, temp0_17)
                float temp0_22[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
                float temp0_23[0x4] = _mm_mul_ps(temp0_19, zmm8)
                float temp0_24[0x4] = _mm_mul_ps(temp0_20, zmm8)
                float temp0_25[0x4] = _mm_mul_ps(temp0_8, temp0_21)
                float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_23, data_143f3b880)
                float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1_1, 0), 
                    _mm_shuffle_ps(temp0_25, zmm1_1, 0x32), 0x82)
                float temp0_30[0x4] = _mm_shuffle_ps(temp0_24, zmm1_1, 0x31)
                float temp0_32[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1_1, 0x10), temp0_30, 0x88)
                float temp0_34[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_25, 0x12), zmm1_1, 0xe8)
                zmm1_1 = var_148
                zmm10[0].q = zmm13 u>> 0x40
                zmm3 = _mm_add_ps(zmm1_1, zmm1_1)
                float temp0_36[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
                float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                float temp0_38[0x4] = _mm_mul_ps(zmm3, zmm1_1)
                float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), temp0_37)
                float temp0_41[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                float temp0_42[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x1a)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), temp0_41)
                float temp0_46[0x4] = _mm_add_ps(temp0_42, _mm_shuffle_ps(temp0_38, temp0_38, 1))
                float temp0_47[0x4] = _mm_add_ps(zmm3, temp0_40)
                float temp0_48[0x4] = _mm_sub_ps(temp0_40, zmm3)
                float temp0_49[0x4] = _mm_sub_ps(zmm10, temp0_46)
                float temp0_50[0x4] = _mm_mul_ps(temp0_47, temp0_1)
                float temp0_51[0x4] = _mm_mul_ps(temp0_22, temp0_48)
                zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, temp0_1), data_143f3b880)
                zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1_1, 0), 
                    _mm_shuffle_ps(temp0_51, zmm1_1, 0x32), 0x82)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_51, zmm1_1, 0x10)
                float temp0_58[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x31)
                float temp0_59[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_58, 0x88)
                float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_32)
                float temp0_63[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_51, 0x12), zmm1_1, 0xe8)
                float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), temp0_34)
                zmm10[0].q = var_138_1 u>> 0x40
                float temp0_66[0x4] = _mm_shuffle_ps(var_138_1, zmm10, 0xc4)
                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_36)
                float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
                float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_29)
                float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
                float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_34)
                float temp0_77[0x4] = _mm_add_ps(temp0_74, zmm3)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_32)
                float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
                float var_1d8[0x4] = temp0_77
                float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
                zmm3 = _mm_add_ps(zmm3, temp0_73)
                float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
                float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_36)
                float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
                zmm3 = _mm_add_ps(zmm3, temp0_76)
                float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
                float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_34)
                zmm3 = _mm_add_ps(zmm3, temp0_84)
                float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
                float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
                float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_36)
                float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                int96_t var_1c8_1 = zmm3[0].12
                zmm3 = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
                zmm3 = _mm_mul_ps(zmm3, temp0_32)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_34)
                float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
                float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
                float temp0_103[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_36)
                zmm3 = _mm_add_ps(zmm3, temp0_100)
                int96_t var_1b8_1 = temp0_101[0].12
                int96_t var_1a8_1 = _mm_add_ps(_mm_add_ps(zmm3, temp0_99), temp0_103)[0].12
                int512_t zmm9
                float zmm10_1[0x4]
                int512_t zmm11
                zmm9, zmm10_1, zmm11, zmm12, zmm15 = sub_1407740e0(&var_1d8, 0x322bcc77)
                float zmm2_1[0x4] = var_1d8[0]
                float zmm1_2 = var_1d8[1]
                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143f3b8e0 ^ zmm10_1)
                    ^ data_143f3b8e0
                zmm2_1[0] = zmm2_1[0] * zmm15[0]
                uint32_t zmm0_2[0x4] = var_1d8[2]
                zmm0_2[0] = zmm0_2[0] f* zmm15[0]
                zmm1_2 = zmm1_2 * zmm15[0]
                var_1d8[0] = zmm2_1[0]
                float temp0_109[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                var_1d8[2] = zmm0_2[0]
                zmm0_2 = var_1c8_1:8.d
                zmm0_2[0] = zmm0_2[0] f* temp0_109[0]
                var_1d8[1] = zmm1_2
                zmm1_2 = var_1c8_1:4.d * temp0_109[0]
                float zmm3_1 = var_1c8_1.d * temp0_109[0]
                zmm2_1 = var_1b8_1.d
                var_1c8_1:8.d = zmm0_2[0]
                zmm0_2 = var_1b8_1:8.d
                var_1c8_1:4.d = zmm1_2
                float temp0_110[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                zmm0_2[0] = zmm0_2[0] f* temp0_110[0]
                zmm2_1[0] = zmm2_1[0] * temp0_110[0]
                zmm1_2 = var_1b8_1:4.d * temp0_110[0]
                var_1b8_1:8.d = zmm0_2[0]
                var_1c8_1.d = zmm3_1
                var_1b8_1.d = zmm2_1[0]
                var_1b8_1:4.d = zmm1_2
                sub_14077e4a0(&var_188, &var_1d8)
                uint32_t zmm5_1[0x4] = var_188
                zmm6 = data_143f3b8d0
                zmm11.o = arg6
                zmm9.o = arg5
                uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                var_1e8 = 0x322bcc77
                zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                float temp0_115[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                zmm1_3 = _mm_rsqrt_ps(temp0_115)
                float temp0_117[0x4] = _mm_mul_ps(temp0_115, zmm6)
                float temp0_122[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_117)), 
                        zmm1_3), 
                    zmm1_3)
                float temp0_125[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
                uint32_t zmm0_3[0x4] = var_1e8
                zmm0_3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), temp0_115, 2)
                float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
                float temp0_130[0x4] = _mm_unpacklo_ps(var_1a8_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm5_1) ^ data_143f3b8c0, zmm0_3)
                    ^ data_143f3b8c0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1a8_1.d, var_1a8_1:8.d[0].q), 
                    temp0_130[0].q)
            
            var_178 = zmm6
            float var_168_1[0x4] = zmm7
            float var_158_1[0x4] = zmm12
            goto label_141f66c15
        
        *arg2 = var_148
        arg2[1] = var_138_1
        arg2[2] = temp0_1

__security_check_cookie(rax_1 ^ &var_218)
return arg2
