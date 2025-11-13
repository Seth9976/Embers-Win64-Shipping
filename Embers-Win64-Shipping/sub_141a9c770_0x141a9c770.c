// 函数: sub_141a9c770
// 地址: 0x141a9c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t result = __security_cookie ^ &var_228
int64_t result_1 = result

if (*(arg1 + 0x10e) != 0 && *(arg1 + 0x10c) == 0)
    float rbx_1 = -nanf
    void* r12_1 = *(arg2 + 0x18)
    int32_t rdx = *(arg1 + 0xd0)
    int128_t* r14_3 = (sx.q(rdx * 2) s>> 1) * 0x30 + *(*(r12_1 + 0x48) + 0x30)
    int32_t r8
    
    if (rdx s>= 0)
        r8 = *(arg1 + 0xd4)
    else
        int32_t rdx_1 = rdx * 2
        
        if ((rdx_1 & 0xfffffffe) == 0xfffffffe)
            r8 = -1
        else
            r8 = *(*(r12_1 + 0x80) + (sx.q(rdx_1) s>> 1 << 2))
    
    float var_118[0x3][0x4]
    sub_141abb9e0(arg2 + 8, &var_118, r8)
    int128_t zmm0_1
    int512_t zmm6_1
    float zmm8_1[0x4]
    zmm0_1, zmm6_1, zmm8_1 = sub_141ab2d00(arg1, &var_118, r14_3)
    int32_t rcx_6 = *(arg1 + 0x104)
    zmm6_1.o = zmm0_1
    
    if (rcx_6 s>= 0)
        rbx_1 = *(arg1 + 0x108)
    else
        int32_t rcx_7 = rcx_6 * 2
        
        if ((rcx_7 & 0xfffffffe) != 0xfffffffe)
            rbx_1 = *(*(r12_1 + 0x80) + (sx.q(rcx_7) s>> 1 << 2))
    
    float var_208 = rbx_1
    float var_68_1[0x4] = zmm8_1
    float var_148[0x4]
    float zmm6_2[0x4]
    float zmm15_1[0x4]
    zmm6_2, zmm15_1 = sub_141abb9e0(arg2 + 8, &var_148, rbx_1)
    float var_138[0x4]
    float zmm7_1[0x4] = var_138
    float var_128[0x4]
    float zmm11_1[0x4] = var_128
    char rax_9 = *(arg1 + 0x10d)
    float zmm12_1[0x4] = var_148
    float zmm14_1[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
    float zmm13_1[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
    float zmm10_1[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
    float zmm9_1[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa)
    float var_198[0x4] = zmm12_1
    float var_188[0x4]
    float zmm1_1[0x4]
    float zmm8_2[0x4]
    int64_t var_200
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    
    if (rax_9 == 0)
        char rax_10 = *(arg1 + 0x10f)
        
        if ((rax_10 & 2) != 0)
            zmm7_1[0] = zmm7_1[0] + zmm6_2[0]
        
        if ((rax_10 & 4) != 0)
            zmm6_2[0] = zmm6_2[0] + zmm14_1[0]
            zmm14_1 = zmm6_2
        
        if ((rax_10 & 8) != 0)
            zmm6_2[0] = zmm6_2[0] + zmm13_1[0]
            zmm13_1 = zmm6_2
        
        if ((rax_10 & 0x70) != 0)
            var_200 = 0
            int32_t var_1f8_1 = 0
            
            if ((rax_10 & 0x10) != 0)
                var_200.d = zmm6_2[0]
            
            if ((rax_10 & 0x20) != 0)
                var_200:4.d = zmm6_2[0]
            
            if ((rax_10 & 0x40) != 0)
                float var_1f8_2 = zmm6_2[0]
            
            float (* rax_11)[0x4]
            rax_11, zmm6_2, zmm7_1 = sub_140ada080(&var_188, &var_200)
            zmm3_1 = var_198
            float temp0_5[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
            zmm2_1 = *rax_11
            rax_10 = *(arg1 + 0x10f)
            float temp0_7[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b))
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm2_1)
            float temp0_11[0x4] = __mulps_xmmps_memps(temp0_7, data_143f2b850)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_10)
            float temp0_15[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
            float temp0_17[0x4] = _mm_mul_ps(temp0_12, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
            float temp0_18[0x4] = __mulps_xmmps_memps(temp0_15, data_143f2b840)
            float temp0_19[0x4] = __mulps_xmmps_memps(temp0_17, data_143f2b830)
            zmm12_1 = _mm_add_ps(_mm_add_ps(temp0_13, temp0_18), temp0_19)
            var_198 = zmm12_1
        
        if (rax_10 s< 0)
            zmm6_2[0] = zmm6_2[0] + zmm11_1[0]
            zmm11_1 = zmm6_2
        
        char rax_12 = *(arg1 + 0x110)
        
        if ((rax_12 & 1) != 0)
            zmm10_1[0] = zmm10_1[0] + zmm6_2[0]
        
        if ((rax_12 & 2) != 0)
            zmm9_1[0] = zmm9_1[0] + zmm6_2[0]
    else if (rax_9 == 1)
        char rax_13 = *(arg1 + 0x10f)
        
        if ((rax_13 & 2) != 0)
            zmm7_1 = zmm6_2
        
        if ((rax_13 & 4) != 0)
            zmm14_1 = zmm6_2
        
        if ((rax_13 & 8) != 0)
            zmm13_1 = zmm6_2
        
        if ((rax_13 & 0x70) != 0)
            int32_t zmm6_3
            zmm6_3, zmm9_1 = sub_140ad3d90(&var_198, &var_200)
            char rax_14 = *(arg1 + 0x10f)
            
            if ((rax_14 & 0x10) != 0)
                var_200.d = zmm6_3
            
            if ((rax_14 & 0x20) != 0)
                var_200:4.d = zmm6_3
            
            if ((rax_14 & 0x40) != 0)
                int32_t var_1f8_3 = zmm6_3
            
            float (* rax_15)[0x4]
            rax_15, zmm6_2, zmm7_1 = sub_140ada080(&var_188, &var_200)
            zmm12_1 = *rax_15
            rax_13 = *(arg1 + 0x10f)
            var_198 = zmm12_1
        
        if (rax_13 s< 0)
            zmm11_1 = zmm6_2
        
        char rax_16 = *(arg1 + 0x110)
        
        if ((rax_16 & 1) != 0)
            zmm10_1 = zmm6_2
        
        if ((rax_16 & 2) != 0)
            zmm9_1 = zmm6_2
    else if (rax_9 == 2)
        int64_t rdx_9 = sx.q(var_208) * 6
        int64_t rcx_14 = *(*(arg2 + 0x18) + 0xa0)
        char rax_19 = *(arg1 + 0x10f)
        zmm2_1 = *(rcx_14 + (rdx_9 << 3))
        zmm1_1 = *(rcx_14 + (rdx_9 << 3) + 0x10)
        zmm8_2 = *(rcx_14 + (rdx_9 << 3) + 0x20)
        
        if ((rax_19 & 2) != 0)
            zmm1_1[0] = zmm1_1[0] + zmm6_2[0]
            zmm7_1 = zmm1_1
        
        if ((rax_19 & 4) != 0)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            temp0_22[0] = temp0_22[0] + zmm6_2[0]
            zmm14_1 = temp0_22
        
        if ((rax_19 & 8) != 0)
            float temp0_23[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
            temp0_23[0] = temp0_23[0] + zmm6_2[0]
            zmm13_1 = temp0_23
        
        if ((rax_19 & 0x30) != 0 || (rax_19 & 0x40) != 0)
            var_188 = zmm2_1
            int32_t var_168
            sub_140ad3d90(&var_188, &var_168)
            int32_t var_178
            int32_t zmm6_4
            zmm6_4, zmm9_1 = sub_140ad3d90(&var_198, &var_178)
            char rax_20 = *(arg1 + 0x10f)
            var_200 = 0
            int32_t var_1f8_4 = 0
            
            if ((rax_20 & 0x10) != 0)
                var_178 = var_168
                var_200.d = zmm6_4
            
            if ((rax_20 & 0x20) != 0)
                int32_t var_164
                int32_t var_174_1 = var_164
                var_200:4.d = zmm6_4
            
            if ((rax_20 & 0x40) != 0)
                int32_t var_160
                int32_t var_170_1 = var_160
                int32_t var_1f8_5 = zmm6_4
            
            float (* rax_21)[0x4] = sub_140ada080(&var_188, &var_200)
            float var_158[0x4]
            float (* rax_22)[0x4]
            rax_22, zmm6_2, zmm7_1, zmm8_2 = sub_140ada080(&var_158, &var_178)
            zmm2_1 = *rax_21
            float temp0_24[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b)
            zmm3_1 = *rax_22
            rax_19 = *(arg1 + 0x10f)
            float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), temp0_24)
            float temp0_27[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_29[0x4] = _mm_mul_ps(temp0_27, zmm2_1)
            float temp0_30[0x4] = __mulps_xmmps_memps(temp0_26, data_143f2b850)
            float temp0_31[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_32[0x4] = _mm_add_ps(temp0_30, temp0_29)
            float temp0_34[0x4] = _mm_mul_ps(temp0_28, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
            float temp0_36[0x4] = _mm_mul_ps(temp0_31, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
            float temp0_37[0x4] = __mulps_xmmps_memps(temp0_34, data_143f2b840)
            float temp0_38[0x4] = __mulps_xmmps_memps(temp0_36, data_143f2b830)
            zmm12_1 = _mm_add_ps(_mm_add_ps(temp0_32, temp0_37), temp0_38)
            var_198 = zmm12_1
        
        if (rax_19 s< 0)
            zmm8_2[0] = zmm8_2[0] + zmm6_2[0]
            zmm11_1 = zmm8_2
        
        char rax_23 = *(arg1 + 0x110)
        
        if ((rax_23 & 1) != 0)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0x55)
            temp0_41[0] = temp0_41[0] + zmm6_2[0]
            zmm10_1 = temp0_41
        
        if ((rax_23 & 2) != 0)
            float temp0_42[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)
            temp0_42[0] = temp0_42[0] + zmm6_2[0]
            zmm9_1 = temp0_42
    void* rcx_19 = *(arg2 + 0x18)
    zmm1_1 = zx.o(0)
    zmm14_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7_1, zmm13_1[0].q), 
        _mm_unpacklo_ps(zmm14_1, zmm1_1[0].q)[0].q)
    float temp0_46[0x4] = _mm_unpacklo_ps(zmm10_1, zmm1_1[0].q)
    zmm13_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11_1, zmm9_1[0].q), temp0_46[0].q)
    int32_t var_1f0
    sub_141ea4020(rcx_19, &var_1f0, &var_208)
    int64_t rdx_15 = sx.q(var_1f0)
    float var_1d8
    
    if (rdx_15.d == 0xffffffff)
        int64_t rbx_5 = sx.q(arg3[1].d)
        var_1d8 = var_208
        int32_t rax_29 = (rbx_5 + 1).d
        arg3[1].d = rax_29
        
        if (rax_29 s> *(arg3 + 0xc))
            sub_1405c4fe0(arg3)
        
        result = *arg3
        int64_t rcx_31 = rbx_5 << 6
        *(rcx_31 + result) = var_1d8.o
        *(rcx_31 + result + 0x10) = zmm12_1
        *(rcx_31 + result + 0x20) = zmm14_1
        *(rcx_31 + result + 0x30) = zmm13_1
    else
        float var_d8_1[0x4] = zmm15_1
        
        if (*(rdx_15 + *(arg2 + 0x20)) == 0)
            zmm12_1, zmm13_1, zmm14_1 = sub_141a98300(arg2 + 8, rdx_15.d)
        
        float (* rcx_23)[0x4] = rdx_15 * 0x30 + *(arg2 + 8)
        float zmm5_1[0x4] = *rcx_23
        zmm6_2 = rcx_23[2]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm13_1, zmm6_2), data_143f2b8d0, 
                1)) == 0)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
            float temp0_182[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
            float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x1b), temp0_181)
            float temp0_185[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x4e)
            float temp0_186[0x4] = _mm_mul_ps(zmm6_2, zmm14_1)
            float temp0_187[0x4] = __mulps_xmmps_memps(temp0_184, data_143f2b850)
            float temp0_188[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            zmm15_1 = _mm_mul_ps(zmm6_2, zmm13_1)
            float temp0_190[0x4] = _mm_mul_ps(temp0_188, zmm12_1)
            float temp0_191[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xb1)
            float temp0_192[0x4] = _mm_add_ps(temp0_187, temp0_190)
            float temp0_194[0x4] = _mm_mul_ps(temp0_185, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
            float temp0_196[0x4] = _mm_mul_ps(temp0_191, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
            float temp0_197[0x4] = __mulps_xmmps_memps(temp0_194, data_143f2b840)
            float temp0_198[0x4] = _mm_shuffle_ps(temp0_186, temp0_186, 0xc9)
            float temp0_199[0x4] = __mulps_xmmps_memps(temp0_196, data_143f2b830)
            float temp0_200[0x4] = _mm_add_ps(temp0_192, temp0_197)
            float temp0_201[0x4] = _mm_mul_ps(temp0_198, temp0_182)
            float temp0_202[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
            float temp0_204[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_186, temp0_186, 0xd2), temp0_202)
            zmm6_2 = _mm_add_ps(temp0_200, temp0_199)
            float temp0_206[0x4] = _mm_sub_ps(temp0_204, temp0_201)
            float temp0_207[0x4] = _mm_add_ps(temp0_206, temp0_206)
            float temp0_208[0x4] = _mm_mul_ps(temp0_188, temp0_207)
            float temp0_210[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_207, temp0_207, 0xd2), temp0_202)
            float temp0_211[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xc9)
            float temp0_212[0x4] = _mm_add_ps(temp0_208, temp0_186)
            zmm7_1 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_210, _mm_mul_ps(temp0_211, temp0_182)), temp0_212), 
                rcx_23[1])
        else
            zmm10_1 = data_143f2b810
            float temp0_52[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
            zmm8_2 = rcx_23[1]
            float temp0_53[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
            float temp0_54[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
            float temp0_55[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
            float temp0_56[0x4] = _mm_mul_ps(zmm5_1, temp0_52)
            float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x29), temp0_53)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x12)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x1a)
            float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_55)
            float temp0_63[0x4] = _mm_add_ps(temp0_60, _mm_shuffle_ps(temp0_56, temp0_56, 1))
            _mm_mul_ps(zmm13_1, zmm6_2)
            float temp0_65[0x4] = _mm_add_ps(temp0_61, temp0_58)
            float temp0_66[0x4] = _mm_sub_ps(temp0_58, temp0_61)
            float temp0_67[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 4)
            float temp0_68[0x4] = _mm_mul_ps(temp0_65, zmm6_2)
            float temp0_69[0x4] = _mm_mul_ps(temp0_54, temp0_66)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10_1, temp0_63), zmm6_2), 
                data_143f2b820)
            float temp0_73[0x4] = _mm_shuffle_ps(temp0_69, zmm1_1, 0x32)
            float temp0_75[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_68, zmm1_1, 0), temp0_73, 0x82)
            float temp0_76[0x4] = _mm_shuffle_ps(temp0_68, zmm1_1, 0x31)
            float temp0_78[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_69, zmm1_1, 0x10), temp0_76, 0x88)
            float temp0_80[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_68, temp0_69, 0x12), zmm1_1, 0xe8)
            float temp0_81[0x4] = _mm_add_ps(zmm12_1, zmm12_1)
            zmm10_1[0].q = zmm8_2 u>> 0x40
            float temp0_82[0x4] = _mm_shuffle_ps(zmm8_2, zmm10_1, 0xc4)
            float temp0_83[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xc9)
            float temp0_85[0x4] = _mm_mul_ps(temp0_67, _mm_shuffle_ps(temp0_81, temp0_81, 0x29))
            float temp0_86[0x4] = _mm_mul_ps(temp0_81, zmm12_1)
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_81, temp0_81, 0x12)
            float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xff), temp0_87)
            float temp0_92[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0x1a), 
                _mm_shuffle_ps(temp0_86, temp0_86, 1))
            float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_85)
            float temp0_94[0x4] = _mm_sub_ps(temp0_85, temp0_89)
            float temp0_95[0x4] = _mm_sub_ps(zmm10_1, temp0_92)
            float temp0_96[0x4] = _mm_mul_ps(temp0_93, zmm13_1)
            float temp0_97[0x4] = _mm_mul_ps(temp0_83, temp0_94)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_95, zmm13_1), data_143f2b820)
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_97, zmm1_1, 0x32)
            float temp0_102[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_96, zmm1_1, 0), temp0_100, 0x82)
            float temp0_103[0x4] = _mm_shuffle_ps(temp0_96, zmm1_1, 0x31)
            float temp0_105[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_97, zmm1_1, 0x10), temp0_103, 0x88)
            float temp0_106[0x4] = _mm_shuffle_ps(temp0_96, temp0_97, 0x12)
            float temp0_107[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
            float temp0_108[0x4] = _mm_shuffle_ps(temp0_106, zmm1_1, 0xe8)
            float temp0_109[0x4] = _mm_mul_ps(temp0_107, temp0_78)
            float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_80)
            zmm10_1[0].q = zmm14_1 u>> 0x40
            float temp0_112[0x4] = _mm_shuffle_ps(zmm14_1, zmm10_1, 0xc4)
            float temp0_113[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0)
            float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), temp0_82)
            float temp0_117[0x4] = _mm_add_ps(temp0_109, _mm_mul_ps(temp0_113, temp0_75))
            float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0), temp0_75)
            float temp0_120[0x4] = _mm_add_ps(temp0_117, temp0_111)
            float temp0_122[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xaa), temp0_80)
            float temp0_123[0x4] = _mm_add_ps(temp0_120, temp0_115)
            float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0x55), temp0_78)
            float temp0_126[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xff)
            var_1d8.o = temp0_123
            float temp0_127[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0x55)
            float temp0_128[0x4] = _mm_add_ps(temp0_125, temp0_119)
            float temp0_129[0x4] = _mm_mul_ps(temp0_127, temp0_78)
            float temp0_130[0x4] = _mm_mul_ps(temp0_126, temp0_82)
            float temp0_131[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0)
            float temp0_132[0x4] = _mm_add_ps(temp0_128, temp0_122)
            float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_75)
            float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xaa), temp0_80)
            float temp0_136[0x4] = _mm_add_ps(temp0_132, temp0_130)
            float temp0_137[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xff)
            float temp0_138[0x4] = _mm_add_ps(temp0_129, temp0_133)
            float temp0_139[0x4] = _mm_mul_ps(temp0_137, temp0_82)
            float temp0_140[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0)
            int96_t var_1c8_1 = temp0_136[0].12
            float temp0_141[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0x55)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, temp0_135)
            float temp0_143[0x4] = _mm_mul_ps(temp0_141, temp0_78)
            float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xaa), temp0_80)
            float temp0_146[0x4] = _mm_mul_ps(temp0_140, temp0_75)
            float temp0_147[0x4] = _mm_add_ps(temp0_142, temp0_139)
            float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xff), temp0_82)
            float temp0_150[0x4] = _mm_add_ps(temp0_143, temp0_146)
            int96_t var_1b8_1 = temp0_147[0].12
            int96_t var_1a8_1 = _mm_add_ps(_mm_add_ps(temp0_150, temp0_145), temp0_149)[0].12
            int128_t zmm10_2
            zmm10_2, zmm15_1 = sub_1407740e0(&var_1d8, 0x322bcc77)
            float zmm2_2[0x4] = var_1d8
            int32_t var_1d0
            uint32_t zmm0_4[0x4] = var_1d0
            float zmm4_2[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f2b8d0, zmm15_1, 2), data_143f2b8c0 ^ zmm10_2)
                ^ data_143f2b8c0
            zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
            float var_1d4
            float zmm1_2 = var_1d4 * zmm4_2[0]
            var_1d8 = zmm2_2[0]
            zmm0_4[0] = zmm0_4[0] f* zmm4_2[0]
            float var_1d4_1 = zmm1_2
            float temp0_155[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            zmm1_2 = var_1c8_1:4.d * temp0_155[0]
            uint32_t var_1d0_1 = zmm0_4[0]
            zmm0_4 = var_1c8_1:8.d
            zmm0_4[0] = zmm0_4[0] f* temp0_155[0]
            float zmm3_2 = var_1c8_1.d * temp0_155[0]
            zmm2_2 = var_1b8_1.d
            float temp0_156[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_1c8_1:4.d = zmm1_2
            var_1c8_1:8.d = zmm0_4[0]
            zmm0_4 = var_1b8_1:8.d
            zmm1_2 = var_1b8_1:4.d * temp0_156[0]
            zmm0_4[0] = zmm0_4[0] f* temp0_156[0]
            zmm2_2[0] = zmm2_2[0] * temp0_156[0]
            var_1b8_1:4.d = zmm1_2
            var_1b8_1:8.d = zmm0_4[0]
            var_1c8_1.d = zmm3_2
            var_1b8_1.d = zmm2_2[0]
            sub_14077e4a0(&var_188, &var_1d8)
            float zmm5_2[0x4] = var_188
            zmm6_2 = data_143f2b8b0
            float temp0_157[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            float temp0_159[0x4] = _mm_add_ps(temp0_157, _mm_shuffle_ps(temp0_157, temp0_157, 0x4e))
            float temp0_161[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0x39), temp0_159)
            float temp0_162[0x4] = _mm_rsqrt_ps(temp0_161)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, zmm6_2)
            float temp0_168[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_162, temp0_162), temp0_163)), 
                    temp0_162), 
                temp0_162)
            float temp0_171[0x4] =
                _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_168, temp0_168), temp0_163))
            float temp0_173[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_161, 2)
            float temp0_175[0x4] = _mm_add_ps(_mm_mul_ps(temp0_171, temp0_168), temp0_168)
            float temp0_176[0x4] = _mm_unpacklo_ps(var_1a8_1:4.d, 0)
            zmm6_2 = _mm_and_ps(_mm_mul_ps(temp0_175, zmm5_2) ^ data_143f2b8a0, temp0_173)
                ^ data_143f2b8a0
            zmm7_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_1a8_1.d, var_1a8_1:8.d[0].q), temp0_176[0].q)
        
        int64_t rbx_4 = sx.q(arg3[1].d)
        var_1d8 = var_208
        int32_t rax_27 = (rbx_4 + 1).d
        arg3[1].d = rax_27
        
        if (rax_27 s> *(arg3 + 0xc))
            sub_1405c4fe0(arg3)
        
        result = *arg3
        int64_t rcx_28 = rbx_4 << 6
        *(rcx_28 + result) = var_1d8.o
        *(rcx_28 + result + 0x10) = zmm6_2
        *(rcx_28 + result + 0x20) = zmm7_1
        *(rcx_28 + result + 0x30) = zmm15_1

__security_check_cookie(result_1 ^ &var_228)
return result
