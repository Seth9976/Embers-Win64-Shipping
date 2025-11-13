// 函数: sub_141f6d630
// 地址: 0x141f6d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x88] != 0 && (*(*arg1 + 0x4c8))() != 0)
    int64_t* rcx = arg1[0xa3]
    int64_t arg_8
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    
    if (rcx != 0)
        (*(*rcx + 0x278))(rcx)
        arg2, zmm6 = sub_14222caa0(arg1[0xa3], *(arg1[0x88] + 0x88))
        *(arg1[0xa3] + 0x8c) = *(*(arg1[0x88] + 0x88) + 0x8c)
    else
        void* rax_3 = arg1[0x88]
        int64_t* rdx_1 = arg1
        arg_8 = 0
        void* rbx_1 = *(rax_3 + 0x88)
        void* rax_5
        
        if (rbx_1 == 0)
            rax_5 = nullptr
        else
            if (arg1 == -1)
                rdx_1 = sub_140cde0b0()
            
            int32_t var_1e8_1 = 0x7f800000
            rax_5, arg2, zmm6, zmm7, zmm8, zmm9 =
                sub_140d2e1f0(rbx_1, rdx_1, arg_8, 0xfffffff, 0, 0)
        
        arg1[0xa3] = rax_5
        *(rax_5 + 8) |= 8
        int64_t* rcx_2 = arg1[0xa3]
        (*(*rcx_2 + 0x278))(rcx_2)
    
    *(arg1[0xa3] + 0xc0) = *(*(arg1[0x88] + 0x88) + 0xc0)
    void* rcx_7 = arg1[0xa3]
    *(arg1 + 0x508) = *(*(arg1[0x88] + 0x88) + 0xc0)
    
    if (*sub_142230430(rcx_7, &arg_8, arg2) != 3)
        uint32_t rcx_15 = zx.d(*(arg1 + 0x525))
        float var_48_1[0x4] = zmm6
        float var_58_1[0x4] = zmm7
        float var_68_1[0x4] = zmm8
        float var_78_1[0x4] = zmm9
        zmm9 = 0x3f800000
        int32_t var_1d8 = 0x3f800000
        int32_t var_1d4 = 0x3f800000
        int32_t var_1d0 = 0x3f800000
        int32_t* rax_18
        
        if (rcx_15 == 0)
            rax_18 = &var_1d8
        else if (rcx_15 == 1)
            rax_18 = &var_1d4
        else
            rax_18 = &var_1d0
        
        void* rcx_20 = arg1[0xa3]
        *rax_18 = 0
        void* rsi_1 = *(rcx_20 + 0x28)
        void* r15_2 = (sx.q(*(rcx_20 + 0x30)) << 6) + rsi_1
        float var_1c0
        float var_1b8[0x4]
        float var_1a8[0x4]
        float var_198[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm10[0x4]
        float zmm11[0x4]
        float zmm12[0x4]
        float zmm13[0x4]
        float zmm14[0x4]
        float zmm15[0x4]
        
        if (rsi_1 != r15_2)
            void* rbx_3 = rsi_1 + 0x38
            
            do
                uint32_t rcx_17 = zx.d(*(arg1 + 0x525))
                float (* rax_19)[0x4]
                
                if (rcx_17 == 0)
                    rax_19 = 0x30
                else if (rcx_17 == 1)
                    rax_19 = 0x34
                else
                    rax_19 = 0x38
                
                arg2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_141f57e90(arg1, &var_1b8, *(rax_19 + rsi_1))
                float zmm5_1[0x4] = var_1b8
                zmm8[0] = zmm8[0] f* *(rbx_3 - 8)
                rsi_1 += 0x40
                float zmm4_1[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                arg2.o = zmm7
                arg2.d = arg2.d f* *(rbx_3 - 4)
                *(rbx_3 - 8) = zmm8[0]
                zmm6[0] = zmm6[0] f* *rbx_3
                *(rbx_3 - 4) = arg2.d
                arg2.o = var_198
                arg2.o = __andps_xmmxud_memxud(arg2.o, data_143f3b860)
                *rbx_3 = zmm6[0]
                zmm2 = _mm_max_ps(arg2.o, _mm_shuffle_ps(arg2.o, arg2.o, 0xc9))
                arg2.o = _mm_shuffle_ps(arg2.o, arg2.o, 0xd2)
                zmm2 = _mm_max_ps(zmm2, arg2.o)
                arg2.o = zx.o(0)
                arg_8.d = zmm2[0]
                zmm2[0] = zmm2[0] f* *(rbx_3 + 4)
                *(rbx_3 + 4) = zmm2[0]
                arg2.o = zmm5_1
                zmm6 = __mulps_xmmps_memps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(*(rbx_3 - 8), (*rbx_3)[0].q), 
                        _mm_unpacklo_ps(*(rbx_3 - 4), 0)[0].q), 
                    var_198)
                arg2.o = _mm_shuffle_ps(arg2.o, zmm5_1, 0xd2)
                zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), arg2.o)
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_1), zmm0_1)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), arg2.o)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm5_1 = _mm_add_ps(zmm5_1, zmm6)
                zmm3 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4_1), zmm0_1), zmm5_1), var_1a8)
                arg2.o = zmm3
                var_1c0 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
                arg2.o = _mm_shuffle_ps(arg2.o, zmm3, 0x55)
                *(rbx_3 - 8) = (_mm_unpacklo_ps(zmm3, arg2.q)).q
                *rbx_3 = var_1c0
                rbx_3 += 0x40
            while (rsi_1 != r15_2)
            
            rcx_20 = arg1[0xa3]
        
        void* rsi_2 = *(rcx_20 + 0x48)
        float var_88_1[0x4] = zmm10
        float var_98_1[0x4] = zmm11
        float var_a8_1[0x4] = zmm12
        float var_b8_1[0x4] = zmm13
        void* r12_3 = sx.q(*(rcx_20 + 0x50)) * 0x50 + rsi_2
        float var_c8_1[0x4] = zmm14
        float var_d8_1[0x4] = zmm15
        int64_t var_1c8
        float var_168[0x4]
        float var_158[0x4]
        uint32_t var_148[0x4]
        float var_138[0x4]
        uint32_t var_128[0x4]
        float var_118[0x4]
        float var_108[0x4]
        
        if (rsi_2 != r12_3)
            void* rbx_4 = rsi_2 + 0x38
            
            do
                uint32_t rcx_21 = zx.d(*(arg1 + 0x525))
                float (* rax_22)[0x4]
                
                if (rcx_21 == 0)
                    rax_22 = 0x30
                else if (rcx_21 == 1)
                    rax_22 = 0x34
                else
                    rax_22 = 0x38
                
                float zmm6_1
                float zmm7_1
                float zmm8_1
                zmm6_1, zmm7_1, zmm8_1 = sub_141f57e90(arg1, &var_1b8, *(rax_22 + rsi_2))
                float zmm1 = zmm7_1 f* *(rbx_4 - 4)
                *(rbx_4 - 8) = zmm8_1 f* *(rbx_4 - 8)
                float zmm0_2 = zmm6_1 f* *rbx_4
                *(rbx_4 - 4) = zmm1
                *rbx_4 = zmm0_2
                sub_140ade170(rbx_4 + 4, &var_118)
                zmm12 = var_1b8
                float zmm0_3[0x4] = *rbx_4
                zmm11 = *(rbx_4 - 8)
                float zmm5_2[0x4] = data_14399f668
                zmm14 = var_198
                zmm13 = var_118
                float zmm9_1[0x4] = data_143f3b8b0
                zmm10 = data_143f3b8a0
                float zmm2_1[0x4] = _mm_unpacklo_ps(*(rbx_4 - 4), 0)
                zmm11 = _mm_unpacklo_ps(zmm11, zmm0_3[0].q)
                zmm0_3 = data_14399f670
                zmm11 = _mm_unpacklo_ps(zmm11, zmm2_1[0].q)
                zmm2_1 = _mm_unpacklo_ps(data_14399f66c, 0)
                float zmm1_1[0x4] = data_143f3b8f0
                zmm5_2 = _mm_unpacklo_ps(zmm5_2, zmm0_3[0].q)
                zmm0_3 = *(rbx_4 + 0x14)
                zmm5_2 = _mm_unpacklo_ps(zmm5_2, zmm2_1[0].q)
                void* arg_10
                arg_10.d = zmm0_3[0]
                float zmm7_2[0x4] = _mm_min_ps(zmm5_2, zmm14)
                float var_e8_1[0x4] = zmm1_1
                var_138 = zmm11
                uint32_t temp0_39 = _mm_movemask_ps(_mm_cmpeq_ps(zmm7_2, zmm1_1, 1))
                var_108 = zmm5_2
                float var_f8_1[0x4] = zmm7_2
                var_158 = var_1a8
                zmm15 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                float zmm3_1[0x4]
                float zmm4_2[0x4]
                float zmm6_2[0x4]
                float zmm8_2[0x4]
                
                if (temp0_39 == 0)
                    zmm1_1 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    zmm6_2 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), 
                        _mm_shuffle_ps(zmm13, zmm13, 0x1b))
                    zmm0_3 = _mm_mul_ps(zmm15, zmm13)
                    zmm2_1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    zmm6_2 = _mm_mul_ps(zmm6_2, zmm9_1)
                    zmm8_2 = _mm_mul_ps(zmm14, zmm5_2)
                    zmm6_2 = _mm_add_ps(zmm6_2, zmm0_3)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm10)
                    var_168 = zmm8_2
                    zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f3b890)
                    zmm6_2 = _mm_add_ps(_mm_add_ps(zmm6_2, zmm1_1), zmm2_1)
                else
                    zmm10 = data_143f3b870
                    zmm2_1 = _mm_add_ps(zmm12, zmm12)
                    zmm1_1 = _mm_shuffle_ps(zmm12, zmm12, 4)
                    zmm0_3 = _mm_mul_ps(zmm14, zmm5_2)
                    zmm4_2 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm3_1 = _mm_mul_ps(zmm2_1, zmm12)
                    var_168 = zmm0_3
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x29))
                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x12)
                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm15)
                    zmm11 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_sub_ps(zmm1_1, zmm2_1)
                    zmm2_1 = _mm_shuffle_ps(zmm13, zmm13, 4)
                    zmm11 = _mm_mul_ps(zmm11, zmm14)
                    zmm4_2 = _mm_mul_ps(zmm4_2, zmm1_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0_3), zmm14), 
                        data_143f3b880)
                    zmm0_3 = _mm_shuffle_ps(zmm4_2, zmm1_1, 0x32)
                    zmm9_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1_1, 0), zmm0_3, 0x82)
                    zmm0_3 = _mm_shuffle_ps(zmm11, zmm1_1, 0x31)
                    zmm7_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_2, zmm1_1, 0x10), zmm0_3, 0x88)
                    zmm10[0].q = var_1a8 u>> 0x40
                    zmm8_2 = _mm_shuffle_ps(var_1a8, zmm10, 0xc4)
                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4_2, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_add_ps(zmm13, zmm13)
                    zmm4_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm0_3 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    zmm3_1 = _mm_mul_ps(zmm1_1, zmm13)
                    zmm0_3 = _mm_mul_ps(zmm0_3, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12))
                    zmm6_2 = _mm_add_ps(zmm0_3, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm0_3)
                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm6_2 = _mm_mul_ps(zmm6_2, zmm5_2)
                    zmm4_2 = _mm_mul_ps(zmm4_2, zmm2_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0_3), zmm5_2), 
                        data_143f3b880)
                    zmm0_3 = _mm_shuffle_ps(zmm4_2, zmm1_1, 0x32)
                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm1_1, 0), zmm0_3, 0x82)
                    zmm0_3 = _mm_shuffle_ps(zmm6_2, zmm1_1, 0x31)
                    zmm5_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_2, zmm1_1, 0x10), zmm0_3, 0x88)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm4_2, 0x12)
                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm1_1, 0xe8)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm11)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_2)
                    zmm10[0].q = var_138 u>> 0x40
                    zmm4_2 = _mm_shuffle_ps(var_138, zmm10, 0xc4)
                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm8_2)
                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_3, zmm9_1))
                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0), zmm9_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), zmm11)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0x55), zmm7_2)
                    zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    var_1b8 = zmm2_1
                    zmm2_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_2)
                    zmm5_2 = _mm_mul_ps(zmm5_2, zmm8_2)
                    zmm0_3 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm9_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa), zmm11)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm5_2)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                    zmm6_2 = _mm_mul_ps(zmm6_2, zmm8_2)
                    zmm0_3 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0)
                    var_1a8 = zmm3_1
                    zmm3_1 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_2)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm11)
                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm9_1)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_2)
                    zmm4_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xff), zmm8_2)
                    var_198 = zmm2_1
                    float var_188_1[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_1, zmm0_3), zmm1_1), zmm4_2)
                    zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_1b8, 0x322bcc77)
                    float zmm4_3[0x4] = __cmpps_xmmps_memps_immb(var_e8_1, var_168, 2)
                    float zmm2_2[0x4] = var_1b8[0]
                    float zmm1_2 = var_1b8[1]
                    zmm4_3 = _mm_and_ps(zmm4_3, data_143f3b8e0 ^ zmm10) ^ data_143f3b8e0
                    uint32_t zmm0_4[0x4] = var_1b8[2]
                    zmm2_2[0] = zmm2_2[0] * zmm4_3[0]
                    zmm1_2 = zmm1_2 * zmm4_3[0]
                    float zmm3_2 = var_1a8[0]
                    zmm0_4[0] = zmm0_4[0] f* zmm4_3[0]
                    var_1b8[0] = zmm2_2[0]
                    zmm2_2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                    var_1b8[2] = zmm0_4[0]
                    zmm0_4 = var_1a8[2]
                    zmm0_4[0] = zmm0_4[0] f* zmm2_2[0]
                    var_1b8[1] = zmm1_2
                    zmm1_2 = var_1a8[1] * zmm2_2[0]
                    zmm3_2 = zmm3_2 * zmm2_2[0]
                    zmm2_2 = var_198[0]
                    zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                    var_1a8[2] = zmm0_4[0]
                    zmm0_4 = var_198[2]
                    var_1a8[1] = zmm1_2
                    zmm1_2 = var_198[1]
                    zmm0_4[0] = zmm0_4[0] f* zmm4_3[0]
                    zmm2_2[0] = zmm2_2[0] * zmm4_3[0]
                    zmm1_2 = zmm1_2 * zmm4_3[0]
                    var_198[2] = zmm0_4[0]
                    var_1a8[0] = zmm3_2
                    var_198[0] = zmm2_2[0]
                    var_198[1] = zmm1_2
                    sub_14077e4a0(&var_128, &var_1b8)
                    zmm5_2 = var_128
                    zmm6_2 = data_143f3b8d0
                    zmm8_2 = var_168
                    zmm11 = var_138
                    zmm7_2 = var_f8_1
                    zmm9_1 = data_143f3b8b0
                    zmm10 = data_143f3b8a0
                    zmm1_1 = _mm_mul_ps(zmm5_2, zmm5_2)
                    arg_8.d = 0x322bcc77
                    zmm1_1 = _mm_add_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x4e))
                    zmm4_2 = _mm_add_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x39), zmm1_1)
                    zmm1_1 = _mm_rsqrt_ps(zmm4_2)
                    zmm3_1 = _mm_mul_ps(zmm4_2, zmm6_2)
                    zmm2_1 = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1_1, zmm1_1), zmm3_1)), 
                            zmm1_1), 
                        zmm1_1)
                    zmm6_2 = _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                    zmm0_3 = arg_8.d
                    zmm0_3 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), zmm4_2, 2)
                    zmm6_2 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm6_2, zmm2_1), zmm2_1), zmm5_2)
                            ^ data_143f3b8c0, 
                        zmm0_3) ^ data_143f3b8c0
                    var_128 = zmm6_2
                
                zmm5_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zx.o(0), arg_10.d[0].q), zx.o(0)[0].q)
                zmm1_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
                zmm5_2 = _mm_mul_ps(zmm5_2, zmm8_2)
                zmm3_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
                zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9), zmm1_1)
                zmm2_1 =
                    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2), zmm3_1), zmm0_3)
                zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                zmm6_2 = _mm_mul_ps(zmm6_2, zmm2_1)
                zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9), zmm1_1)
                zmm4_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                zmm6_2 = _mm_add_ps(zmm6_2, zmm5_2)
                zmm4_2 = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm4_2, zmm3_1), zmm0_3), zmm6_2)
                zmm0_3 = zmm4_2
                zmm1_1 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                zmm0_3[0] = zmm0_3[0] * zmm4_2[0]
                zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                zmm4_2[0] = zmm4_2[0] * zmm4_2[0]
                zmm1_1[0] = zmm1_1[0] + zmm0_3[0]
                zmm1_1[0] = zmm1_1[0] + zmm4_2[0]
                zmm0_3 = _mm_sqrt_ss(0, zmm1_1[0])
                zmm1_1 = __andps_xmmxud_memxud(zmm14, data_143f3b860)
                *(rbx_4 + 0x14) = zmm0_3[0]
                zmm2_1 = _mm_max_ps(_mm_max_ps(zmm1_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)), 
                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2))
                arg_8.d = zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(rbx_4 + 0x10)
                *(rbx_4 + 0x10) = zmm2_1[0]
                zmm0_3 = data_143f3b8f0
                float var_f8_2[0x4] = zmm0_3
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(zmm7_2, zmm0_3, 1)) == 0)
                    zmm1_1 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                    zmm7_2 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), 
                        _mm_shuffle_ps(zmm13, zmm13, 0x1b))
                    zmm0_3 = _mm_mul_ps(zmm15, zmm13)
                    zmm14 = _mm_mul_ps(zmm14, zmm11)
                    zmm7_2 = _mm_mul_ps(zmm7_2, zmm9_1)
                    zmm2_1 = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
                    zmm7_2 = _mm_add_ps(zmm7_2, zmm0_3)
                    zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                    zmm0_3 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                    zmm0_3 = _mm_mul_ps(zmm0_3, _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm10)
                    zmm0_3 = __mulps_xmmps_memps(zmm0_3, data_143f3b890)
                    zmm7_2 = _mm_add_ps(zmm7_2, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xd2), zmm12)
                    zmm7_2 = _mm_add_ps(zmm7_2, zmm0_3)
                    zmm1_1 =
                        _mm_sub_ps(zmm1_1, _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc9), zmm2_1))
                    zmm1_1 = _mm_add_ps(zmm1_1, zmm1_1)
                    zmm15 = _mm_mul_ps(zmm15, zmm1_1)
                    zmm6_2 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0xd2), zmm12)
                    zmm0_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
                    zmm15 = _mm_add_ps(zmm15, zmm14)
                    __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(zmm0_3, zmm2_1)), zmm15), var_158)
                else
                    zmm5_2 = var_108
                    zmm1_1 = _mm_add_ps(zmm12, zmm12)
                    zmm9_1 = data_143f3b870
                    zmm4_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                    zmm3_1 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm0_3 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29)
                    zmm2_1 = _mm_mul_ps(zmm1_1, zmm12)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm1_1, zmm1_1, 0x12), zmm15)
                    zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 4), zmm0_3)
                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1a), 
                        _mm_shuffle_ps(zmm2_1, zmm2_1, 1))
                    zmm10 = _mm_add_ps(zmm1_1, zmm12)
                    zmm2_1 = _mm_shuffle_ps(zmm13, zmm13, 4)
                    zmm12 = _mm_sub_ps(zmm12, zmm1_1)
                    zmm1_1 = _mm_sub_ps(zmm9_1, zmm0_3)
                    zmm10 = _mm_mul_ps(zmm10, zmm14)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm12)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm14), data_143f3b880)
                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm1_1, 0x32)
                    zmm8_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1_1, 0), zmm0_3, 0x82)
                    zmm0_3 = _mm_shuffle_ps(zmm10, zmm1_1, 0x31)
                    zmm7_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3_1, zmm1_1, 0x10), zmm0_3, 0x88)
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm3_1, 0x12), zmm1_1, 0xe8)
                    zmm1_1 = _mm_add_ps(zmm13, zmm13)
                    zmm9_1[0].q = var_158 u>> 0x40
                    zmm12 = _mm_shuffle_ps(var_158, zmm9_1, 0xc4)
                    zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
                    zmm3_1 = _mm_mul_ps(zmm1_1, zmm13)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
                    zmm13 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xff), zmm1_1)
                    zmm0_3 = _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), 
                        _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
                    zmm6_2 = _mm_add_ps(zmm13, zmm2_1)
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm13)
                    zmm1_1 = _mm_sub_ps(zmm9_1, zmm0_3)
                    zmm6_2 = _mm_mul_ps(zmm6_2, zmm5_2)
                    zmm4_2 = _mm_mul_ps(zmm4_2, zmm2_1)
                    zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1_1, zmm5_2), data_143f3b880)
                    zmm0_3 = _mm_shuffle_ps(zmm4_2, zmm1_1, 0x32)
                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_2, zmm1_1, 0), zmm0_3, 0x82)
                    zmm0_3 = _mm_shuffle_ps(zmm6_2, zmm1_1, 0x31)
                    zmm5_2 = _mm_shuffle_ps(zmm4_2, zmm1_1, 0x10)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm4_2, 0x12)
                    zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm0_3, 0x88)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm1_1, 0xe8)
                    zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), zmm10)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_2)
                    zmm9_1[0].q = zmm11 u>> 0x40
                    zmm11 = _mm_shuffle_ps(zmm11, zmm9_1, 0xc4)
                    zmm0_3 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), zmm12)
                    zmm2_1 = _mm_add_ps(zmm2_1, _mm_mul_ps(zmm0_3, zmm8_2))
                    zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0), zmm8_2)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), zmm10)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm3_1)
                    zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0x55), zmm7_2)
                    zmm5_2 = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                    var_1b8 = zmm2_1
                    zmm2_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_3)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm7_2)
                    zmm5_2 = _mm_mul_ps(zmm5_2, zmm12)
                    zmm0_3 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_1)
                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm8_2)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa), zmm10)
                    zmm3_1 = _mm_add_ps(zmm3_1, zmm5_2)
                    zmm6_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_3)
                    zmm6_2 = _mm_mul_ps(zmm6_2, zmm12)
                    zmm0_3 = _mm_shuffle_ps(zmm11, zmm11, 0)
                    var_1a8 = zmm3_1
                    zmm3_1 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_1)
                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_2)
                    zmm1_1 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), zmm10)
                    zmm0_3 = _mm_mul_ps(zmm0_3, zmm8_2)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm6_2)
                    zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm12)
                    var_198 = zmm2_1
                    int96_t var_188_2 =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_1, zmm0_3), zmm1_1), zmm11)[0].12
                    int128_t zmm9_2 = sub_1407740e0(&var_1b8, 0x322bcc77)
                    float zmm2_3[0x4] = var_1b8[0]
                    float zmm1_3 = var_1b8[1]
                    float zmm4_4[0x4] = _mm_and_ps(__cmpps_xmmps_memps_immb(var_f8_2, var_168, 2), 
                        data_143f3b8e0 ^ zmm9_2)
                    uint32_t zmm0_5[0x4] = var_1b8[2]
                    zmm4_4 ^= data_143f3b8e0
                    zmm2_3[0] = zmm2_3[0] * zmm4_4[0]
                    zmm1_3 = zmm1_3 * zmm4_4[0]
                    zmm0_5[0] = zmm0_5[0] f* zmm4_4[0]
                    var_1b8[0] = zmm2_3[0]
                    var_1b8[1] = zmm1_3
                    var_1b8[2] = zmm0_5[0]
                    zmm1_3 = var_1a8[1]
                    zmm0_5 = var_1a8[2]
                    float zmm3_3 = var_1a8[0]
                    zmm2_3 = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
                    zmm1_3 = zmm1_3 * zmm2_3[0]
                    zmm0_5[0] = zmm0_5[0] f* zmm2_3[0]
                    zmm3_3 = zmm3_3 * zmm2_3[0]
                    zmm2_3 = var_198[0]
                    zmm4_4 = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa)
                    var_1a8[1] = zmm1_3
                    zmm1_3 = var_198[1]
                    var_1a8[2] = zmm0_5[0]
                    zmm0_5 = var_198[2]
                    zmm1_3 = zmm1_3 * zmm4_4[0]
                    zmm0_5[0] = zmm0_5[0] f* zmm4_4[0]
                    zmm2_3[0] = zmm2_3[0] * zmm4_4[0]
                    var_198[1] = zmm1_3
                    var_198[2] = zmm0_5[0]
                    var_1a8[0] = zmm3_3
                    var_198[0] = zmm2_3[0]
                    sub_14077e4a0(&var_148, &var_1b8)
                    float zmm5_3[0x4] = var_148
                    zmm7_2 = data_143f3b8d0
                    float zmm1_4[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                    arg_8.d = 0x322bcc77
                    zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                    float zmm4_5[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                    zmm1_4 = _mm_rsqrt_ps(zmm4_5)
                    float zmm3_4[0x4] = _mm_mul_ps(zmm4_5, zmm7_2)
                    float zmm2_4[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm7_2, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3_4)), 
                            zmm1_4), 
                        zmm1_4)
                    zmm7_2 = _mm_sub_ps(zmm7_2, _mm_mul_ps(_mm_mul_ps(zmm2_4, zmm2_4), zmm3_4))
                    uint32_t zmm0_6[0x4] = arg_8.d
                    zmm0_6 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_6, zmm0_6, 0), zmm4_5, 2)
                    zmm7_2 = _mm_add_ps(_mm_mul_ps(zmm7_2, zmm2_4), zmm2_4)
                    zmm2_4 = _mm_unpacklo_ps(var_188_2:4.d, 0)
                    zmm7_2 = _mm_and_ps(_mm_mul_ps(zmm7_2, zmm5_3) ^ data_143f3b8c0, zmm0_6)
                        ^ data_143f3b8c0
                    _mm_unpacklo_ps(_mm_unpacklo_ps(var_188_2.d, var_188_2:8.d[0].q), zmm2_4[0].q)
                    var_148 = zmm7_2
                
                var_108 = zmm7_2
                arg2, zmm6 = sub_140adf5d0(&var_108, &var_1c8)
                arg2.o = zmm6
                rsi_2 += 0x50
                *(rbx_4 + 4) = var_1c8
                float var_170_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                arg2.o = _mm_shuffle_ps(arg2.o, zmm6, 0x55)
                *(rbx_4 + 0xc) = var_1c0
                *(rbx_4 - 8) = (_mm_unpacklo_ps(zmm6, arg2.q)).q
                *rbx_4 = var_170_1
                rbx_4 += 0x50
            while (rsi_2 != r12_3)
            
            rcx_20 = arg1[0xa3]
            zmm9 = 0x3f800000
        
        void* r12_4 = *(rcx_20 + 0x38)
        void* rax_29 = sx.q(*(rcx_20 + 0x40)) * 0x58 + r12_4
        
        if (r12_4 != rax_29)
            void* rsi_3 = r12_4 + 0x38
            zmm7 = 0x3f000000
            
            do
                void* rbx_5 = arg1[0xa3]
                int64_t r15_3 = sx.q(*(rbx_5 + 0x60))
                int32_t rax_30 = (r15_3 + 1).d
                *(rbx_5 + 0x60) = rax_30
                
                if (rax_30 s> *(rbx_5 + 0x64))
                    sub_140a05e50(rbx_5 + 0x58)
                
                int64_t rcx_31 = r15_3 * 0xb0
                void*** r15_4
                
                if (rcx_31 == neg.q(*(rbx_5 + 0x58)))
                    r15_4 = nullptr
                else
                    r15_4 = sub_14222a2e0(rcx_31 + *(rbx_5 + 0x58))
                
                zmm13 = *(rsi_3 + 0x18)
                zmm12 = *(rsi_3 + 0x14)
                zmm11 = *(rsi_3 + 0x10)
                zmm13[0] = zmm13[0] * zmm7[0]
                zmm12[0] = zmm12[0] * zmm7[0]
                zmm11[0] = zmm11[0] * zmm7[0]
                zmm13 = _mm_max_ss(zmm13[0], zmm9[0])
                zmm12 = _mm_max_ss(zmm12[0], zmm9[0])
                zmm11 = _mm_max_ss(zmm11[0], zmm9[0])
                zmm6 = sub_140ade170(rsi_3 + 4, &var_108)
                bool cond:1_1 = *(r15_4 + 0x3c) == 8
                float zmm0_8[0x4] = *rsi_3
                int32_t r13_1 = 0
                zmm9 = *(rsi_3 - 8)
                zmm10 = data_14399f668
                zmm8 = var_108
                zmm2 = _mm_unpacklo_ps(*(rsi_3 - 4), 0)
                zmm9 = _mm_unpacklo_ps(zmm9, zmm0_8[0].q)
                zmm0_8 = data_14399f670
                zmm9 = _mm_unpacklo_ps(zmm9, zmm2[0].q)
                zmm2 = _mm_unpacklo_ps(data_14399f66c, 0)
                zmm10 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm10, zmm0_8[0].q), zmm2[0].q)
                r15_4[7].d = 0
                
                if (not(cond:1_1))
                    sub_140638cc0(&r15_4[6], 8)
                    r13_1 = r15_4[7].d
                
                arg_8.d = (zmm13 ^ zmm6)[0]
                zmm2 = _mm_unpacklo_ps(zmm12 ^ zmm6, 0)
                zmm14 = zmm11 ^ zmm6
                float zmm4_6[0x4] = _mm_mul_ps(
                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm11 ^ zmm6, (zmm13 ^ zmm6)[0].q), zmm2[0].q), 
                    zmm10)
                r15_4[7].d = r13_1 + 1
                zmm15 = zmm12 ^ zmm6
                zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
                zmm6 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm4_6, zmm4_6, 0xc9), zmm7)
                zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_6, zmm4_6, 0xd2), zmm6)
                zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xff)
                zmm2 = _mm_sub_ps(zmm2, zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), zmm7)
                float zmm1_5[0x4] = _mm_add_ps(
                    _mm_add_ps(
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm6), zmm0_8), 
                        _mm_add_ps(_mm_mul_ps(zmm8, zmm2), zmm4_6)), 
                    zmm9)
                var_118[0] = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                var_118[2] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_118[1] = zmm0_8[0]
                
                if (r13_1 + 1 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_36 = r15_4[6]
                zmm0_8 = zx.o(var_118[0].q)
                zmm2 = _mm_unpacklo_ps(zmm15, 0)
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm13[0].q), zmm2[0].q), 
                    zmm10)
                int64_t rdx_15 = sx.q(r13_1) * 3
                float rax_34 = var_118[2]
                *(rcx_36 + (rdx_15 << 2)) = zmm0_8.q
                *(rcx_36 + (rdx_15 << 2) + 8) = rax_34
                int64_t r13_2 = sx.q(r15_4[7].d)
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                int32_t rax_35 = (r13_2 + 1).d
                zmm1_5 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6)
                r15_4[7].d = rax_35
                zmm1_5 = _mm_sub_ps(zmm1_5, zmm0_8)
                zmm1_5 = _mm_add_ps(zmm1_5, zmm1_5)
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0xc9), zmm7)
                zmm2 = _mm_add_ps(
                    _mm_add_ps(
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0xd2), zmm6), zmm0_8), 
                        _mm_add_ps(_mm_mul_ps(zmm8, zmm1_5), zmm3)), 
                    zmm9)
                var_158[0] = zmm2[0]
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                var_158[2] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                var_158[1] = zmm0_8[0]
                
                if (rax_35 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_38 = r15_4[6]
                zmm0_8 = zx.o(var_158[0].q)
                float rax_36 = var_158[2]
                int64_t rdx_18 = r13_2 * 3
                zmm2 = _mm_unpacklo_ps(zmm12, 0)
                *(rcx_38 + (rdx_18 << 2)) = zmm0_8.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, arg_8.d[0].q), zmm2[0].q), 
                    zmm10)
                *(rcx_38 + (rdx_18 << 2) + 8) = rax_36
                int64_t r13_3 = sx.q(r15_4[7].d)
                int32_t rax_37 = (r13_3 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_37
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                var_148[0] = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                var_148[2] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_148[1] = zmm0_8[0]
                
                if (rax_37 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_40 = r15_4[6]
                zmm0_8 = zx.o(var_148[0].q)
                uint32_t rax_38 = var_148[2]
                int64_t rdx_21 = r13_3 * 3
                zmm2 = _mm_unpacklo_ps(zmm12, 0)
                zmm3 = _mm_unpacklo_ps(zmm14, zmm13[0].q)
                *(rcx_40 + (rdx_21 << 2)) = zmm0_8.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm10)
                *(rcx_40 + (rdx_21 << 2) + 8) = rax_38
                int64_t r13_4 = sx.q(r15_4[7].d)
                int32_t rax_39 = (r13_4 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_39
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                var_138[0] = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                var_138[2] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_138[1] = zmm0_8[0]
                
                if (rax_39 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_42 = r15_4[6]
                zmm0_8 = zx.o(var_138[0].q)
                zmm14 = arg_8.d
                int64_t rdx_24 = r13_4 * 3
                float rax_40 = var_138[2]
                zmm2 = _mm_unpacklo_ps(zmm15, 0)
                zmm3 = _mm_unpacklo_ps(zmm11, zmm14[0].q)
                *(rcx_42 + (rdx_24 << 2)) = zmm0_8.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm10)
                *(rcx_42 + (rdx_24 << 2) + 8) = rax_40
                int64_t r13_5 = sx.q(r15_4[7].d)
                int32_t rax_41 = (r13_5 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_41
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                var_128[0] = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                var_128[2] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_128[1] = zmm0_8[0]
                
                if (rax_41 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_44 = r15_4[6]
                zmm0_8 = zx.o(var_128[0].q)
                uint32_t rax_42 = var_128[2]
                int64_t rdx_27 = r13_5 * 3
                zmm2 = _mm_unpacklo_ps(zmm15, 0)
                zmm3 = _mm_unpacklo_ps(zmm11, zmm13[0].q)
                *(rcx_44 + (rdx_27 << 2)) = zmm0_8.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm10)
                *(rcx_44 + (rdx_27 << 2) + 8) = rax_42
                int64_t r13_6 = sx.q(r15_4[7].d)
                int32_t rax_43 = (r13_6 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_43
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                var_168[0] = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                var_168[2] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_168[1] = zmm0_8[0]
                
                if (rax_43 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_46 = r15_4[6]
                zmm0_8 = zx.o(var_168[0].q)
                float rax_44 = var_168[2]
                int64_t rdx_30 = r13_6 * 3
                zmm2 = _mm_unpacklo_ps(zmm12, 0)
                zmm3 = _mm_unpacklo_ps(zmm11, zmm14[0].q)
                *(rcx_46 + (rdx_30 << 2)) = zmm0_8.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm10)
                *(rcx_46 + (rdx_30 << 2) + 8) = rax_44
                int64_t r13_7 = sx.q(r15_4[7].d)
                int32_t rax_45 = (r13_7 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_45
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                float var_178_1 = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                float var_170_2 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                float var_174_1 = zmm0_8[0]
                
                if (rax_45 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_48 = r15_4[6]
                int64_t rdx_33 = r13_7 * 3
                zmm2 = _mm_unpacklo_ps(zmm12, 0)
                zmm3 = _mm_unpacklo_ps(zmm11, zmm13[0].q)
                *(rcx_48 + (rdx_33 << 2)) = var_178_1.q
                zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm10)
                *(rcx_48 + (rdx_33 << 2) + 8) = var_170_2
                int64_t r13_8 = sx.q(r15_4[7].d)
                int32_t rax_47 = (r13_8 + 1).d
                zmm0_8 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm7)
                r15_4[7].d = rax_47
                zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm6), zmm0_8)
                zmm2 = _mm_add_ps(zmm2, zmm2)
                zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm0_8 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
                zmm0_8 = _mm_mul_ps(zmm0_8, zmm7)
                zmm2 = _mm_mul_ps(zmm2, zmm8)
                zmm1_5 =
                    _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1_5, zmm0_8), _mm_add_ps(zmm2, zmm3)), zmm9)
                var_1c8.d = zmm1_5[0]
                zmm0_8 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
                float var_1c0_1 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)[0]
                var_1c8:4.d = zmm0_8[0]
                
                if (rax_47 s> *(r15_4 + 0x3c))
                    sub_140638a00(&r15_4[6])
                
                int64_t rcx_50 = r15_4[6]
                int64_t rdx_36 = r13_8 * 3
                *(rcx_50 + (rdx_36 << 2)) = var_1c8
                *(rcx_50 + (rdx_36 << 2) + 8) = var_1c0_1
                sub_141ece930(r15_4)
                r12_4 += 0x58
                zmm7 = 0x3f000000
                rsi_3 += 0x58
                zmm9 = 0x3f800000
            while (r12_4 != rax_29)
            
            rcx_20 = arg1[0xa3]
        
        sub_141f5bbe0(rcx_20 + 0x38, 0)
        void* rax_49 = arg1[0xa3]
        void* r15_5 = *(rax_49 + 0x58)
        void* r12_6 = sx.q(*(rax_49 + 0x60)) * 0xb0 + r15_5
        
        if (r15_5 != r12_6)
            zmm14 = var_1d0
            void* rsi_4 = r15_5 + 0x80
            zmm15 = var_1d4
            
            do
                int64_t* rbx_6 = *(rsi_4 - 0x50)
                zmm9 = *(rsi_4 - 0x10)
                zmm12 = *rsi_4
                zmm13 = *(rsi_4 + 0x10)
                void* r14_1 = rbx_6 + sx.q(*(rsi_4 - 0x48)) * 0xc
                
                if (rbx_6 != r14_1)
                    zmm10 = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                    zmm11 = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
                    zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                    
                    do
                        float zmm0_9[0x4] = rbx_6[1].d
                        arg2.o = zx.o(0)
                        zmm3 = *rbx_6
                        uint32_t rcx_54 = zx.d(*(arg1 + 0x525))
                        zmm2 = _mm_unpacklo_ps(*(rbx_6 + 4), arg2.q)
                        zmm3 = _mm_mul_ps(
                            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_9[0].q), zmm2[0].q), zmm13)
                        arg2.o = zmm3
                        zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm11)
                        arg2.o = _mm_shuffle_ps(arg2.o, zmm3, 0xd2)
                        arg2.o = _mm_mul_ps(arg2.o, zmm10)
                        arg2.o = _mm_sub_ps(arg2.o, zmm0_9)
                        arg2.o = _mm_add_ps(arg2.o, arg2.o)
                        zmm0_9 = _mm_shuffle_ps(arg2.o, arg2.o, 0xc9)
                        zmm2 = _mm_shuffle_ps(arg2.o, arg2.o, 0xd2)
                        zmm0_9 = _mm_mul_ps(zmm0_9, zmm11)
                        zmm2 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm2, zmm10), zmm0_9), 
                                _mm_add_ps(_mm_mul_ps(zmm9, arg2.o), zmm3)), 
                            zmm12)
                        arg2.o = zmm2
                        arg2.o = _mm_shuffle_ps(arg2.o, zmm2, 0x55)
                        zmm2[0] = zmm2[0] f* var_1d8
                        zmm7 = arg2.o
                        zmm0_9 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        zmm7[0] = zmm7[0] * zmm15[0]
                        zmm0_9[0] = zmm0_9[0] * zmm14[0]
                        
                        if (rcx_54 == 0)
                            zmm0_9 = zmm2
                        else if (rcx_54 == 1)
                            zmm0_9 = arg2.o
                        
                        float (* rax_52)[0x4]
                        rax_52, arg2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, 
                            zmm15 = sub_141f57e90(arg1, &var_1b8, zmm0_9)
                        arg2.o = zx.o(0)
                        zmm6 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
                        zmm2 = _mm_unpacklo_ps(zmm7, 0)
                        float zmm5_4[0x4] = *rax_52
                        zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, zmm2[0].q), rax_52[2])
                        arg2.o = zmm5_4
                        arg2.o = _mm_shuffle_ps(arg2.o, zmm5_4, 0xd2)
                        float zmm4_7[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
                        zmm5_4 = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xff)
                        zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), arg2.o)
                        zmm2 =
                            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4_7), zmm0_9)
                        zmm2 = _mm_add_ps(zmm2, zmm2)
                        zmm5_4 = _mm_mul_ps(zmm5_4, zmm2)
                        zmm0_9 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xc9), arg2.o)
                        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                        zmm5_4 = _mm_add_ps(zmm5_4, zmm6)
                        zmm3 = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm4_7), zmm0_9), zmm5_4), 
                            rax_52[1])
                        arg2.o = zmm3
                        float var_1c0_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
                        arg2.o = _mm_shuffle_ps(arg2.o, zmm3, 0x55)
                        *rbx_6 = (_mm_unpacklo_ps(zmm3, arg2.q)).q
                        rbx_6[1].d = var_1c0_2
                        rbx_6 += 0xc
                    while (rbx_6 != r14_1)
                
                *(rsi_4 - 0x10) = data_143dbb0c0
                arg2.o = data_143dbb0d0
                *rsi_4 = arg2.o
                *(rsi_4 + 0x10) = data_143dbb0e0
                sub_141ece930(r15_5)
                r15_5 += 0xb0
                rsi_4 += 0xb0
            while (r15_5 != r12_6)
    else
        void* rsi = arg1[0xa3]
        int32_t i_6 = *(rsi + 0x40)
        void*** rax_14 = *(rsi + 0x38)
        
        if (i_6 != 0)
            int32_t i
            
            do
                *rax_14 = &data_142e3e610
                rax_14 = &rax_14[0xb]
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        *(rsi + 0x40) = 0
        
        if (*(rsi + 0x44) != 0)
            sub_140775cf0(rsi + 0x38, 0)
        
        int32_t i_9 = *(rsi + 0x60)
        void*** rbx_2 = *(rsi + 0x58)
        
        if (i_9 != 0)
            int32_t i_1
            
            do
                sub_14222ae60(rbx_2)
                rbx_2 = &rbx_2[0x16]
                i_1 = i_9
                i_9 -= 1
            while (i_1 != 1)
        
        *(rsi + 0x60) = 0
        
        if (*(rsi + 0x64) != 0)
            sub_140a05f70(rsi + 0x58, 0)
        
        int32_t i_7 = *(rsi + 0x50)
        void*** rax_15 = *(rsi + 0x48)
        
        if (i_7 != 0)
            int32_t i_2
            
            do
                *rax_15 = &data_142e3e610
                rax_15 = &rax_15[0xa]
                i_2 = i_7
                i_7 -= 1
            while (i_2 != 1)
        
        *(rsi + 0x50) = 0
        
        if (*(rsi + 0x54) != 0)
            sub_1405a5310(rsi + 0x48, 0)
        
        int32_t i_5 = *(rsi + 0x30)
        void*** rax_16 = *(rsi + 0x28)
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                *rax_16 = &data_142e3e610
                rax_16 = &rax_16[8]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        *(rsi + 0x30) = 0
        
        if (*(rsi + 0x34) != 0)
            sub_1405a52a0(rsi + 0x28, 0)
        
        int32_t i_8 = *(rsi + 0x70)
        void*** rax_17 = *(rsi + 0x68)
        
        if (i_8 != 0)
            int32_t i_4
            
            do
                *rax_17 = &data_142e3e610
                rax_17 = &rax_17[0xb]
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
        
        *(rsi + 0x70) = 0
        
        if (*(rsi + 0x74) != 0)
            sub_140775cf0(rsi + 0x68, 0)
        
        sub_1422499d0(rsi + 0x28)
    
    jump(*(*arg1[0xa3] + 0x260))

void* const result = arg1[0xa3]

if (result != 0)
    int32_t rax_55 = *(result + 0xc)
    
    if (rax_55 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp0_606
        int32_t temp1_1
        temp0_606:temp1_1 = sx.q(rax_55)
        uint32_t rdx_39 = zx.d(temp0_606)
        int32_t rax_57 = temp1_1 + rdx_39
        result =
            *(data_143e1d9a0 + (sx.q(rax_57 s>> 0x10) << 3)) + sx.q(zx.d(rax_57.w) - rdx_39) * 0x18
    
    *(result + 8) |= 0x20000000
    arg1[0xa3] = 0

return result
