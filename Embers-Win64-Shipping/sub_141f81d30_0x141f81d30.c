// 函数: sub_141f81d30
// 地址: 0x141f81d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t result = *(arg1 + 0x49c)
*(arg1 + 0x498) = 0

if (result s<= 0xffffffff)
    sub_1405a5130(arg1 + 0x490, 0)

if (*(arg1 + 0x4b8) != 0)
    result = sub_140ab3dc0(arg1 + 0x4d0)

if (*(arg1 + 0x4b8) == 0 || result.b != 0)
    result.b = 0
else
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(*(arg1 + 0x4b8) + 0x6c)))
    int32_t var_220
    int32_t* var_180_1 = &var_220
    int32_t var_21c
    int32_t* var_170_1 = &var_21c
    uint32_t var_218 = 0xffffffff
    var_220 = 0
    uint128_t zmm13 = zx.o(0)
    zmm0.d = zmm0.d f+ *(arg1 + 0x4f0)
    int32_t var_210_1 = 0xbf800000
    int32_t var_224_1 = 0
    var_21c = 0
    int64_t* var_188 = arg2
    zmm0.d = zmm0.d f* *(arg1 + 0x4e8)
    int64_t* var_178_1 = arg3
    void* var_168_1 = arg1
    int32_t* var_160_1 = &var_218
    float var_1e4_1 = zmm0.d
    int64_t* rax_3 = sub_140ac6680(arg1 + 0x4d0)
    int16_t* rdi_1
    
    if (rax_3[1].d == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *rax_3
    
    int16_t* var_1c8_1 = rdi_1
    int16_t* var_1c0_1 = rdi_1
    
    if (*rdi_1 != 0)
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        uint128_t zmm15
        uint128_t var_d8_1 = zmm15
        
        while (true)
            uint128_t zmm3 = *(arg1 + 0x4e8)
            void* r8 = *(arg1 + 0x4b8)
            int32_t var_238_1 = (*(arg1 + 0x4f4)).d
            uint128_t zmm1 = *(arg1 + 0x4ec)
            uint128_t var_158 = var_1c8_1.o
            int32_t var_1d8
            uint128_t zmm7_1
            uint128_t zmm8_1
            uint128_t zmm9_1
            zmm7_1, zmm8_1, zmm9_1 =
                sub_141f83e10(&var_1d8, &var_158, r8, zmm3, zmm1.d, (*(arg1 + 0x4f0)).d, var_238_1)
            uint32_t rcx_4 = zx.d(*(arg1 + 0x4f8))
            uint128_t zmm6_1 = zmm13
            int32_t var_228_1 = zmm6_1.d
            
            if (rcx_4 == 1)
                zmm6_1.d = var_1d8.d f* -0.5f
                var_228_1 = zmm6_1.d
            else if (rcx_4 == 2)
                zmm6_1 = var_1d8 ^ data_142d3f780
                var_228_1 = zmm6_1.d
            
            int32_t var_1d4
            uint128_t zmm0_1 = var_1d4
            int32_t var_1e0_1 = zmm0_1.d
            
            if (not(zmm8_1.d f>= zmm13.d))
                var_210_1 = zmm0_1.d
            
            float zmm10_1 = zmm13.d
            
            while (true)
                int16_t rdx_1 = *rdi_1
                
                if (rdx_1 == 0)
                    break
                
                if (rdx_1 == 0x3c && rdi_1[1] == 0x62 && rdi_1[2] == 0x72 && rdi_1[3] == 0x3e)
                    rdi_1 = &rdi_1[4]
                    int16_t* var_1c0_3 = rdi_1
                    break
                
                rdi_1 = &rdi_1[1]
                int16_t* var_1c0_2 = rdi_1
                
                if (rdx_1 == 0xa)
                    break
                
                int16_t rax_4 = sub_14200d6b0(*(arg1 + 0x4b8), rdx_1)
                void* rdx_2 = *(arg1 + 0x4b8)
                
                if (zx.d(rax_4) s< *(rdx_2 + 0x40))
                    int64_t r13_1 = *(rdx_2 + 0x38)
                    uint64_t r12_1 = zx.q(rax_4) * 3
                    uint32_t rax_6 = zx.d(*(r13_1 + (r12_1 << 3) + 0x10))
                    
                    if (rax_6 s< *(rdx_2 + 0x50))
                        uint32_t rcx_8 = var_218
                        
                        if (rcx_8 != rax_6)
                            if (rcx_8 != 0xffffffff)
                                if (arg2[1].d s> var_220 && arg3[1].d s> var_21c)
                                    void* rcx_9 = arg1 + 0x490
                                    int64_t r15_1 = sx.q(*(rcx_9 + 8))
                                    int32_t rax_9 = (r15_1 + 1).d
                                    *(rcx_9 + 8) = rax_9
                                    
                                    if (rax_9 s> *(rcx_9 + 0xc))
                                        sub_1405a4df0(rcx_9)
                                        rcx_9 = arg1 + 0x490
                                    
                                    int64_t r8_1 = r15_1 * 3
                                    int64_t r9_1 = *rcx_9
                                    *(r9_1 + (r8_1 << 3)) = var_21c
                                    *(r9_1 + (r8_1 << 3) + 4) = arg3[1].d - var_21c
                                    *(r9_1 + (r8_1 << 3) + 8) = var_220
                                    *(r9_1 + (r8_1 << 3) + 0xc) = arg2[1].d - var_220
                                    *(r9_1 + (r8_1 << 3) + 0x10) = 0
                                    int64_t* rdx_4 = *(arg1 + 0x4c0)
                                    
                                    if (rdx_4 == 0)
                                        *(r9_1 + (r8_1 << 3) + 0x10) = *(arg1 + 0x4b0)
                                    else
                                        int64_t rax_16 = sx.q(var_218)
                                        
                                        if (rax_16.d s< 0 || rax_16.d s>= rdx_4[1].d)
                                            *(r9_1 + (r8_1 << 3) + 0x10) = *(arg1 + 0x4b0)
                                        else
                                            int64_t rdx_5 = *(*rdx_4 + (rax_16 << 3))
                                            *(r9_1 + (r8_1 << 3) + 0x10) = rdx_5
                                            
                                            if (rdx_5 == 0)
                                                *(r9_1 + (r8_1 << 3) + 0x10) = *(arg1 + 0x4b0)
                                
                                rdx_2 = *(arg1 + 0x4b8)
                                var_220 = arg2[1].d
                                var_21c = arg3[1].d
                                rax_6 = zx.d(*(r13_1 + (r12_1 << 3) + 0x10))
                            
                            var_218 = zx.d(rax_6.b)
                            rax_6 = zx.d(*(r13_1 + (r12_1 << 3) + 0x10))
                        
                        void* rax_23 = *(*(rdx_2 + 0x48) + (zx.q(rax_6.b) << 3))
                        
                        if (rax_23 != 0)
                            int64_t rax_24 = *(rax_23 + 0xc4)
                            uint128_t zmm4_1 = zx.o(*(r13_1 + (r12_1 << 3) + 0x14))
                            uint128_t zmm11_1 = zx.o(*(r13_1 + (r12_1 << 3) + 0xc))
                            zmm1 = zmm9_1
                            zmm8_1 = zx.o(*(r13_1 + (r12_1 << 3)))
                            float zmm2 = zmm9_1.d
                            zmm9_1 = zx.o(*(r13_1 + (r12_1 << 3) + 4))
                            zmm3.d = zmm6_1.d f+ zmm10_1
                            zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_24.d))
                            int32_t var_208 = 0
                            int32_t var_204_1 = 0xbf800000
                            int32_t var_200_1 = 0
                            zmm4_1 = _mm_cvtepi32_ps(zmm4_1)
                            int64_t var_1f8 = 0x3f800000
                            int32_t var_1f0_1 = 0
                            zmm2 = zmm2 f/ zmm0_1.d
                            zmm0_1 = _mm_cvtepi32_ps(zx.o((rax_24 u>> 0x20).d))
                            zmm11_1 = _mm_cvtepi32_ps(zmm11_1)
                            zmm1.d = zmm1.d f/ zmm0_1.d
                            zmm0_1 = *(arg1 + 0x4ec)
                            zmm6_1 = zmm11_1
                            zmm4_1.d = zmm4_1.d f* zmm0_1.d
                            zmm11_1.d = zmm11_1.d f* zmm0_1.d
                            zmm4_1.d = zmm4_1.d f+ zmm7_1.d
                            zmm6_1.d = zmm6_1.d f* zmm1.d
                            zmm7_1 = _mm_cvtepi32_ps(zx.o(*(r13_1 + (r12_1 << 3) + 8)))
                            zmm11_1.d = zmm11_1.d f+ zmm4_1.d
                            zmm15 = zmm7_1
                            zmm7_1.d = zmm7_1.d f* zmm2
                            zmm15.d = zmm15.d f* *(arg1 + 0x4e8)
                            zmm9_1.d = _mm_cvtepi32_ps(zmm9_1).d f* zmm1.d
                            zmm12.d = zmm15.d f+ zmm3.d
                            zmm14 = zmm3 ^ 0x80000000
                            zmm13 = zmm4_1 ^ 0x80000000
                            zmm11_1 ^= 0x80000000
                            zmm12 ^= 0x80000000
                            uint64_t var_148_1 = (_mm_unpacklo_ps(zx.o(0), zmm14.q)).q
                            int32_t var_140_1 = zmm13.d
                            zmm8_1.d = _mm_cvtepi32_ps(zmm8_1).d f* zmm2
                            void var_fc
                            sub_1414f8a70(&var_fc, &var_208)
                            int64_t var_f8
                            sub_1414f8a70(&var_f8, &var_1f8)
                            int64_t r15_2 = sx.q(arg2[1].d)
                            int32_t var_f4_1 = *(arg1 + 0x4a0)
                            int16_t var_214_1 = r15_2.w
                            int32_t var_13c_1 = zmm8_1.d
                            int32_t var_138_1 = zmm9_1.d
                            int32_t var_134_1 = zmm8_1.d
                            int32_t var_130_1 = zmm9_1.d
                            int32_t var_12c_1 = zmm8_1.d
                            int32_t var_128_1 = zmm9_1.d
                            int32_t var_124_1 = zmm8_1.d
                            int32_t var_120_1 = zmm9_1.d
                            int32_t var_11c_1 = zmm8_1.d
                            int32_t var_118_1 = zmm9_1.d
                            int32_t var_114_1 = zmm8_1.d
                            int32_t var_110_1 = zmm9_1.d
                            int32_t var_10c_1 = zmm8_1.d
                            int32_t var_108_1 = zmm9_1.d
                            int32_t var_104_1 = zmm8_1.d
                            int32_t var_100_1 = zmm9_1.d
                            char var_f5_1 = 0x7f
                            int32_t rax_28 = (r15_2 + 1).d
                            arg2[1].d = rax_28
                            
                            if (rax_28 s> *(arg2 + 0xc))
                                sub_1407755b0(arg2)
                            
                            int64_t rax_29 = *arg2
                            zmm7_1.d = zmm7_1.d f+ zmm8_1.d
                            uint128_t* rcx_15 = r15_2 * 0x58
                            int32_t var_1a4_1 = zmm13.d
                            zmm13 = zx.o(0)
                            *(rcx_15 + rax_29) = var_148_1.o
                            *(rcx_15 + rax_29 + 0x10) = var_138_1.o
                            *(rcx_15 + rax_29 + 0x20) = var_128_1.o
                            *(rcx_15 + rax_29 + 0x30) = var_118_1.o
                            uint128_t zmm1_1 = zx.o(var_f8)
                            *(rcx_15 + rax_29 + 0x40) = var_108_1.o
                            *(rcx_15 + rax_29 + 0x50) = zmm1_1.q
                            uint64_t var_148_2 = (_mm_unpacklo_ps(zx.o(0), zmm12.q)).q
                            int32_t var_140_2 = var_1a4_1
                            sub_1414f8a70(&var_fc, &var_208)
                            sub_1414f8a70(&var_f8, &var_1f8)
                            int64_t r15_3 = sx.q(arg2[1].d)
                            int32_t var_f4_2 = *(arg1 + 0x4a0)
                            int32_t var_13c_2 = zmm7_1.d
                            int32_t rax_32 = (r15_3 + 1).d
                            int32_t var_138_2 = zmm9_1.d
                            int32_t var_134_2 = zmm7_1.d
                            int32_t var_130_2 = zmm9_1.d
                            int32_t var_12c_2 = zmm7_1.d
                            int32_t var_128_2 = zmm9_1.d
                            int32_t var_124_2 = zmm7_1.d
                            int32_t var_120_2 = zmm9_1.d
                            int32_t var_11c_2 = zmm7_1.d
                            int32_t var_118_2 = zmm9_1.d
                            int32_t var_114_2 = zmm7_1.d
                            int32_t var_110_2 = zmm9_1.d
                            int32_t var_10c_2 = zmm7_1.d
                            int32_t var_108_2 = zmm9_1.d
                            int32_t var_104_2 = zmm7_1.d
                            int32_t var_100_2 = zmm9_1.d
                            char var_f5_2 = 0x7f
                            int16_t var_1e8_1 = r15_3.w
                            arg2[1].d = rax_32
                            
                            if (rax_32 s> *(arg2 + 0xc))
                                sub_1407755b0(arg2)
                            
                            int64_t rax_33 = *arg2
                            zmm6_1.d = zmm6_1.d f+ zmm9_1.d
                            uint128_t* rcx_19 = r15_3 * 0x58
                            int32_t var_198_1 = zmm11_1.d
                            *(rcx_19 + rax_33) = var_148_2.o
                            *(rcx_19 + rax_33 + 0x10) = var_138_2.o
                            *(rcx_19 + rax_33 + 0x20) = var_128_2.o
                            *(rcx_19 + rax_33 + 0x30) = var_118_2.o
                            uint128_t zmm1_2 = zx.o(var_f8)
                            *(rcx_19 + rax_33 + 0x40) = var_108_2.o
                            *(rcx_19 + rax_33 + 0x50) = zmm1_2.q
                            uint64_t var_148_3 = (_mm_unpacklo_ps(zx.o(0), zmm14.q)).q
                            int32_t var_140_3 = var_198_1
                            sub_1414f8a70(&var_fc, &var_208)
                            sub_1414f8a70(&var_f8, &var_1f8)
                            int64_t r12_2 = sx.q(arg2[1].d)
                            int32_t var_f4_3 = *(arg1 + 0x4a0)
                            int32_t var_13c_3 = zmm8_1.d
                            int32_t var_138_3 = zmm6_1.d
                            int32_t rax_36 = (r12_2 + 1).d
                            int32_t var_134_3 = zmm8_1.d
                            int32_t var_130_3 = zmm6_1.d
                            int32_t var_12c_3 = zmm8_1.d
                            int32_t var_128_3 = zmm6_1.d
                            int32_t var_124_3 = zmm8_1.d
                            int32_t var_120_3 = zmm6_1.d
                            int32_t var_11c_3 = zmm8_1.d
                            int32_t var_118_3 = zmm6_1.d
                            int32_t var_114_3 = zmm8_1.d
                            int32_t var_110_3 = zmm6_1.d
                            int32_t var_10c_3 = zmm8_1.d
                            int32_t var_108_3 = zmm6_1.d
                            int32_t var_104_3 = zmm8_1.d
                            int32_t var_100_3 = zmm6_1.d
                            char var_f5_3 = 0x7f
                            arg2[1].d = rax_36
                            
                            if (rax_36 s> *(arg2 + 0xc))
                                sub_1407755b0(arg2)
                            
                            int64_t rax_37 = *arg2
                            uint128_t* rcx_23 = r12_2 * 0x58
                            int32_t var_18c_1 = zmm11_1.d
                            *(rcx_23 + rax_37) = var_148_3.o
                            *(rcx_23 + rax_37 + 0x10) = var_138_3.o
                            *(rcx_23 + rax_37 + 0x20) = var_128_3.o
                            *(rcx_23 + rax_37 + 0x30) = var_118_3.o
                            uint128_t zmm1_3 = zx.o(var_f8)
                            *(rcx_23 + rax_37 + 0x40) = var_108_3.o
                            *(rcx_23 + rax_37 + 0x50) = zmm1_3.q
                            uint64_t var_148_4 = (_mm_unpacklo_ps(zx.o(0), zmm12.q)).q
                            int32_t var_140_4 = var_18c_1
                            sub_1414f8a70(&var_fc, &var_208)
                            sub_1414f8a70(&var_f8, &var_1f8)
                            int64_t r15_4 = sx.q(arg2[1].d)
                            int32_t var_f4_4 = *(arg1 + 0x4a0)
                            int32_t var_13c_4 = zmm7_1.d
                            int32_t var_138_4 = zmm6_1.d
                            int32_t rax_40 = (r15_4 + 1).d
                            int32_t var_134_4 = zmm7_1.d
                            int32_t var_130_4 = zmm6_1.d
                            int32_t var_12c_4 = zmm7_1.d
                            int32_t var_128_4 = zmm6_1.d
                            int32_t var_124_4 = zmm7_1.d
                            int32_t var_120_4 = zmm6_1.d
                            int32_t var_11c_4 = zmm7_1.d
                            int32_t var_118_4 = zmm6_1.d
                            int32_t var_114_4 = zmm7_1.d
                            int32_t var_110_4 = zmm6_1.d
                            int32_t var_10c_4 = zmm7_1.d
                            int32_t var_108_4 = zmm6_1.d
                            int32_t var_104_4 = zmm7_1.d
                            int32_t var_100_4 = zmm6_1.d
                            char var_f5_4 = 0x7f
                            arg2[1].d = rax_40
                            
                            if (rax_40 s> *(arg2 + 0xc))
                                sub_1407755b0(arg2)
                            
                            int64_t rax_41 = *arg2
                            uint128_t* rcx_27 = r15_4 * 0x58
                            *(rcx_27 + rax_41) = var_148_4.o
                            *(rcx_27 + rax_41 + 0x10) = var_138_4.o
                            *(rcx_27 + rax_41 + 0x20) = var_128_4.o
                            *(rcx_27 + rax_41 + 0x30) = var_118_4.o
                            zmm1 = zx.o(var_f8)
                            *(rcx_27 + rax_41 + 0x40) = var_108_4.o
                            *(rcx_27 + rax_41 + 0x50) = zmm1.q
                            int64_t r13_2 = sx.q(arg3[1].d)
                            int32_t rax_42 = (r13_2 + 1).d
                            arg3[1].d = rax_42
                            
                            if (rax_42 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            *(*arg3 + (r13_2 << 1)) = var_214_1
                            int64_t r13_3 = sx.q(arg3[1].d)
                            int32_t rax_44 = (r13_3 + 1).d
                            arg3[1].d = rax_44
                            
                            if (rax_44 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            *(*arg3 + (r13_3 << 1)) = r15_4.w
                            int64_t r13_4 = sx.q(arg3[1].d)
                            int32_t rax_46 = (r13_4 + 1).d
                            arg3[1].d = rax_46
                            
                            if (rax_46 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            *(*arg3 + (r13_4 << 1)) = var_1e8_1
                            int64_t r13_5 = sx.q(arg3[1].d)
                            int32_t rax_48 = (r13_5 + 1).d
                            arg3[1].d = rax_48
                            
                            if (rax_48 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            *(*arg3 + (r13_5 << 1)) = var_214_1
                            int64_t r13_6 = sx.q(arg3[1].d)
                            int32_t rax_50 = (r13_6 + 1).d
                            arg3[1].d = rax_50
                            
                            if (rax_50 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            *(*arg3 + (r13_6 << 1)) = r12_2.w
                            int64_t r13_7 = sx.q(arg3[1].d)
                            int32_t rax_52 = (r13_7 + 1).d
                            arg3[1].d = rax_52
                            
                            if (rax_52 s> *(arg3 + 0xc))
                                sub_140594770(arg3)
                            
                            zmm10_1 = zmm10_1 f+ zmm15.d
                            zmm6_1 = var_228_1
                            zmm7_1 = var_224_1
                            zmm9_1 = 0x3f800000
                            *(*arg3 + (r13_7 << 1)) = r15_4.w
                            wint_t _C = *rdi_1
                            
                            if (_C != 0)
                                if (_C == 0x3c && rdi_1[1] == 0x62 && rdi_1[2] == 0x72
                                        && rdi_1[3] == 0x3e)
                                    continue
                                
                                zmm6_1 = var_228_1
                                zmm7_1 = var_224_1
                                zmm9_1 = 0x3f800000
                                
                                if (_C != 0xa && iswspace(_C) == 0)
                                    zmm10_1 = zmm10_1 + var_1e4_1
            
            zmm0_1 = var_1e0_1
            
            if (not(zmm0_1.d f> zmm13.d))
                zmm0_1, zmm7_1 = sub_142005cc0(*(arg1 + 0x4b8))
            
            zmm7_1.d = zmm7_1.d f+ zmm0_1.d
            var_224_1 = zmm7_1.d
            
            if (*rdi_1 == 0)
                break
    
    sub_141f7def0(&var_188)
    result.b = arg2[1].d s> 0

__security_check_cookie(rax_1 ^ &var_268)
return result
