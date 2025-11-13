// 函数: sub_141757e10
// 地址: 0x141757e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r10 = *(arg1 + 0x84)
float zmm6[0x4]
float var_58[0x4] = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
int128_t zmm10
int128_t var_98 = zmm10
int32_t arg_8 = r10

if (*(arg1 + 0x98) != 0)
    zmm10 = 0x3f000000
    void* r13_1 = arg1 + 0x90
    
    do
        int64_t r8_1 = sx.q(*(r13_1 + 8))
        int64_t rdx_1 = sx.q(*(*r13_1 + (r8_1 << 2) - 4))
        int32_t* rax_1 = *(arg1 + 0xb0)
        int64_t r12_1 = rdx_1
        int32_t* rsi_1 = rdx_1 * 0xb0
        int32_t arg_10 = rdx_1.d
        int32_t arg_20 = rdx_1.d
        
        if (*(rax_1 + rsi_1) != 2)
            int32_t r8_2 = *(rax_1 + rsi_1 + 0x34)
            int64_t r14_1 = sx.q(*(arg1 + 0x30))
            int32_t arg_18 = r8_2
            float zmm2[0x4]
            
            if (r8_2 s>= r14_1.d)
                int32_t i_2 = r8_2 - r14_1.d + 1
                int32_t rax_3 = r14_1.d + i_2
                *(arg1 + 0x30) = rax_3
                
                if (rax_3 s> *(arg1 + 0x34))
                    sub_141750030(arg1 + 0x28)
                    r8_2 = arg_18
                    r10 = arg_8
                
                void* rdx_4 = r14_1 * 0x3c + *(arg1 + 0x28)
                
                if (i_2 != 0)
                    void* rcx_1 = rdx_4 + 0x14
                    int32_t i
                    
                    do
                        zmm2 = data_142e1c900
                        rdx_4 += 0x3c
                        *(rcx_1 - 0x10) = 0x7f7fffff
                        *(rcx_1 - 0xc) = 0x7f7fffff
                        *(rcx_1 + 0x1c) = 0
                        *(rcx_1 + 0x24) = 0
                        rcx_1 += 0x3c
                        *(rdx_4 - 0x3c) = zmm2.q
                        int32_t var_180_1 = 0xff7fffff
                        int32_t var_17c_1 = 0xff7fffff
                        int128_t var_190
                        __builtin_memcpy(&var_190, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x44) = var_190:0xc.q
                        *(rcx_1 - 0x3c) = 0xff7fffff
                        *(rdx_4 - 0x34) = _mm_bsrli_si128(zmm2, 8)[0]
                        zmm2 = data_142e1c900
                        *(rcx_1 - 0x38) = zmm2.q
                        int128_t var_190_1
                        __builtin_memcpy(&var_190_1, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x2c) = var_190_1:0xc.q
                        zmm2 = _mm_bsrli_si128(zmm2, 8)
                        *(rcx_1 - 0x24) = 0xff7fffff
                        *(rcx_1 - 0x30) = zmm2[0]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                rdx_1 = zx.q(r12_1.d)
            
            if (r10 s> 0)
                result = zx.q(*(arg1 + 0x84))
                
                if (*(arg1 + 0x88) s>= result.d)
                    return result
            
            int32_t var_d0 = r8_2
            int32_t* r8_3 = *(arg1 + 0xb0)
            void* rbx_3 = arg1 + 0x38
            void* var_c8_1 = arg1 + 0x68
            void* var_a8_1 = arg1 + 0x28
            void* var_c0_1 = arg1 + 0xb0
            int32_t var_b8_1 = rdx_1.d
            void* var_b0_1 = rbx_3
            
            if (*(r8_3 + rsi_1 + 0x28) s<= *(arg1 + 0x78)
                    || *(r8_3 + rsi_1 + 0x30) s>= *(arg1 + 0x7c))
                void* r14_4 = *(r12_1 * 0xb0 + r8_3 + 0x20)
                void* r12_5 = (sx.q(r8_3[r12_1 * 0x2c + 0xa]) << 6) + r14_4
                
                if (r14_4 != r12_5)
                    do
                        int32_t rbx_10 = *(arg1 + 0x40)
                        int64_t* rax_62 = sub_14172ea90(arg1 + 0x68, r14_4)
                        r14_4 += 0x40
                        *rax_62 = -1
                        rax_62[1].d = rbx_10
                    while (r14_4 != r12_5)
                    
                    r13_1 = arg1 + 0x90
                    rbx_3 = arg1 + 0x38
                
                int64_t r14_5 = sx.q(arg_18) * 0x3c
                *(r14_5 + *(arg1 + 0x28) + 0x38) = 1
                void* rdx_26 = *(arg1 + 0xb0)
                void** const var_168 = &data_142fc49a8
                int16_t var_160_1 = 0x100
                int64_t var_158_1 = 0
                int64_t var_150_1 = 0
                int64_t* var_108_1 = nullptr
                int32_t i_4 = 0
                int64_t var_118_1 = 0
                int32_t var_110_1 = 0
                int64_t var_f8
                __builtin_memset(&var_f8, 0, 0x20)
                int32_t var_d8_1 = 0x47c35000
                zmm10 = sub_141681000(&var_168, rdx_26 + 0x20 + rsi_1, 0, zx.o(0), 0xf)
                int64_t rsi_2 = sx.q(*(rbx_3 + 8))
                int32_t rax_65 = (rsi_2 + 1).d
                *(rbx_3 + 8) = rax_65
                
                if (rax_65 s> *(rbx_3 + 0xc))
                    sub_1417500c0(rbx_3)
                
                sub_141702d20(rsi_2 * 0x98 + *rbx_3, &var_168)
                *(r14_5 + *(arg1 + 0x28) + 0x30) = rsi_2.d
                int64_t var_e8
                
                if (var_e8 != 0)
                    sub_140a74f90(var_e8)
                
                int64_t rcx_40 = var_f8
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                int32_t i_3 = i_4
                int64_t* rbx_11 = var_108_1
                
                if (i_3 != 0)
                    int32_t i_1
                    
                    do
                        int64_t rcx_41 = *rbx_11
                        
                        if (rcx_41 != 0)
                            sub_140a74f90(rcx_41)
                        
                        rbx_11 = &rbx_11[2]
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    rbx_11 = var_108_1
                
                if (rbx_11 != 0)
                    sub_140a74f90(rbx_11)
                
                if (var_158_1 != 0)
                    sub_140a74f90(var_158_1)
                
                goto label_141758945
            
            if (*(r8_3 + rsi_1) == 0)
                float zmm1[0x4] = *(r8_3 + rsi_1 + 0x10)
                zmm2 = *(r8_3 + rsi_1 + 0x14)
                zmm1[0] = zmm1[0] f- *(r8_3 + rsi_1 + 4)
                zmm2[0] = zmm2[0] f- *(r8_3 + rsi_1 + 8)
                uint128_t zmm0
                zmm0.d = (*(r8_3 + rsi_1 + 0x18)).d f- *(r8_3 + rsi_1 + 0xc)
                int32_t rbx_4
                
                if (zmm1[0] <= zmm2[0] || zmm1[0] f<= zmm0.d)
                    int32_t rbx_5
                    rbx_5.b = zmm2[0] f<= zmm0.d
                    rbx_4 = rbx_5 + 1
                else
                    rbx_4 = 0
                
                int64_t r14_2 = sx.q(sub_14173e730(arg1))
                int32_t rax_9 = sub_14173e730(arg1)
                *(*(arg1 + 0xb0) + rsi_1 + 0x6c) = r14_2.d
                *(*(arg1 + 0xb0) + rsi_1 + 0xa4) = rax_9
                int64_t rdx_5 = *(arg1 + 0xb0)
                zmm1 = zx.o(*(rdx_5 + rsi_1 + 4))
                int32_t rcx_6 = *(rdx_5 + rsi_1 + 0xc)
                *(rdx_5 + rsi_1 + 0x3c) = zmm1.q
                *(rdx_5 + rsi_1 + 0x48) = zmm1.q
                *(rdx_5 + rsi_1 + 0x44) = rcx_6
                *(rdx_5 + rsi_1 + 0x50) = rcx_6
                int64_t rdx_6 = *(arg1 + 0xb0)
                zmm1 = zx.o(*(rdx_6 + rsi_1 + 0x10))
                int32_t rax_10 = *(rdx_6 + rsi_1 + 0x18)
                *(rdx_6 + rsi_1 + 0x74) = zmm1.q
                *(rdx_6 + rsi_1 + 0x80) = zmm1.q
                *(rdx_6 + rsi_1 + 0x7c) = rax_10
                *(rdx_6 + rsi_1 + 0x88) = rax_10
                void* rax_11 = *(arg1 + 0xb0)
                zmm0.d = (*(rax_11 + rsi_1 + 0x10)).d f- *(rax_11 + rsi_1 + 4)
                zmm1 = *(rax_11 + rsi_1 + 0x14)
                void* rdx_8 = rax_11 + 0x3c + rsi_1
                zmm1[0] = zmm1[0] f- *(rax_11 + rsi_1 + 8)
                zmm0.d = zmm0.d f* zmm10.d
                zmm1[0] = zmm1[0] f* zmm10.d
                zmm0.d = zmm0.d f+ *(rax_11 + rsi_1 + 4)
                zmm1[0] = zmm1[0] f+ *(rax_11 + rsi_1 + 8)
                int32_t var_1b8_1 = zmm0.d
                float var_1b4_1 = zmm1[0]
                zmm0.d = (*(rax_11 + rsi_1 + 0x18)).d f- *(rax_11 + rsi_1 + 0xc)
                zmm0.d = zmm0.d f* zmm10.d
                zmm0.d = zmm0.d f+ *(rax_11 + rsi_1 + 0xc)
                int32_t var_1b0_1 = zmm0.d
                
                if (rdx_8 != rdx_8 + 0x70)
                    int128_t* rdx_9 = rdx_8 + 0x10
                    zmm7 = zx.o(var_1b8_1.q)
                    int32_t var_1a8
                    __builtin_memcpy(&var_1a8, 
                        "\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\x"
                    "7f\xff\xff\x7f\x7f", 
                        0x18)
                    zmm8 = zx.o(var_1a8.q)
                    
                    do
                        int32_t var_19c
                        *(rdx_9 + 8) = var_19c.q
                        *(rdx_9 + 0x14) = zmm8.q
                        rdx_9[1].d = 0x7f7fffff
                        *(rdx_9 + 0x1c) = 0xff7fffff
                        float zmm4_1[0x4]
                        float zmm5_1[0x4]
                        
                        if (rbx_4 != 0)
                            int64_t rax_12 = *(arg1 + 0xb0)
                            zmm0 = __minss_xmmss_memss((*(rdx_9 - 8)).d, var_1b0_1)
                            zmm4_1 = zmm7.q:4.d
                            float temp0_4[0x4] = __minss_xmmss_memss(zmm4_1[0], *(rdx_9 - 0xc))
                            int64_t rcx_7 = r12_1 * 0x2c
                            int32_t var_1e0_1 = zmm0.d
                            zmm5_1 = *(rax_12 + (rcx_7 << 2) + 4)
                            zmm6 = *(rax_12 + (rcx_7 << 2) + 0x10)
                            float temp0_5[0x4] = __minss_xmmss_memss(zmm5_1[0], rdx_9[-1].d)
                            float temp0_6[0x4] = __maxss_xmmss_memss(zmm5_1[0], *(rdx_9 - 4))
                            zmm2 = *rdx_9
                            zmm0 = _mm_unpacklo_ps(temp0_5, temp0_4[0].q)
                            float temp0_8[0x4] = _mm_max_ss(zmm2[0], zmm4_1[0])
                            zmm4_1 = zmm7.q:4.d
                            rdx_9[-1].q = zmm0.q
                            zmm0 = __maxss_xmmss_memss((*(rdx_9 + 4)).d, var_1b0_1)
                            *(rdx_9 - 8) = var_1e0_1
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_6, temp0_8[0].q)).q
                            *(rdx_9 + 4) = zmm0.d
                            float temp0_11[0x4] = __minss_xmmss_memss(zmm4_1[0], *(rdx_9 - 0xc))
                            float temp0_12[0x4] = __minss_xmmss_memss(zmm6[0], rdx_9[-1].d)
                            int32_t var_1c8_1 = __minss_xmmss_memss((*(rdx_9 - 8)).d, var_1b0_1).d
                            rdx_9[-1].q = (_mm_unpacklo_ps(temp0_12, temp0_11[0].q)).q
                            *(rdx_9 - 8) = var_1c8_1
                            zmm2 = *rdx_9
                            float temp0_15[0x4] = _mm_max_ss((*(rdx_9 - 4))[0], zmm6[0])
                            zmm0 = *(rdx_9 + 4)
                            float temp0_16[0x4] = _mm_max_ss(zmm2[0], zmm4_1[0])
                            zmm0 = __maxss_xmmss_memss(zmm0.d, var_1b0_1)
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_15, temp0_16[0].q)).q
                            *(rdx_9 + 4) = zmm0.d
                        
                        if (rbx_4 != 1)
                            int64_t rax_17 = *(arg1 + 0xb0)
                            zmm4_1 = zmm7.d
                            int64_t rcx_8 = r12_1 * 0x2c
                            int32_t var_1e0_2 = __minss_xmmss_memss((*(rdx_9 - 8)).d, var_1b0_1).d
                            zmm0 = __minss_xmmss_memss(zmm4_1[0], rdx_9[-1].d)
                            zmm5_1 = *(rax_17 + (rcx_8 << 2) + 8)
                            zmm6 = *(rax_17 + (rcx_8 << 2) + 0x14)
                            rdx_9[-1].q = (_mm_unpacklo_ps(zmm0, 
                                __minss_xmmss_memss(zmm5_1[0], *(rdx_9 - 0xc))[0].q)).q
                            *(rdx_9 - 8) = var_1e0_2
                            zmm0 = *(rdx_9 + 4)
                            float temp0_23[0x4] = _mm_max_ss((*(rdx_9 - 4))[0], zmm4_1[0])
                            float temp0_24[0x4] = __maxss_xmmss_memss(zmm5_1[0], *rdx_9)
                            zmm0 = __maxss_xmmss_memss(zmm0.d, var_1b0_1)
                            zmm4_1 = zmm7.d
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_23, temp0_24[0].q)).q
                            *(rdx_9 + 4) = zmm0.d
                            float temp0_27[0x4] = __minss_xmmss_memss(zmm6[0], *(rdx_9 - 0xc))
                            float temp0_28[0x4] = __minss_xmmss_memss(zmm4_1[0], rdx_9[-1].d)
                            int32_t var_1c8_2 = __minss_xmmss_memss((*(rdx_9 - 8)).d, var_1b0_1).d
                            rdx_9[-1].q = (_mm_unpacklo_ps(temp0_28, temp0_27[0].q)).q
                            *(rdx_9 - 8) = var_1c8_2
                            zmm2 = *rdx_9
                            float temp0_31[0x4] = _mm_max_ss((*(rdx_9 - 4))[0], zmm4_1[0])
                            zmm0 = *(rdx_9 + 4)
                            float temp0_32[0x4] = _mm_max_ss(zmm2[0], zmm6[0])
                            zmm0 = __maxss_xmmss_memss(zmm0.d, var_1b0_1)
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_31, temp0_32[0].q)).q
                            *(rdx_9 + 4) = zmm0.d
                        
                        uint64_t var_208_3 = zmm7.q
                        int32_t var_200_3 = var_1b0_1
                        uint64_t var_1f8_3 = zmm7.q
                        int32_t var_1f0_3 = var_1b0_1
                        
                        if (rbx_4 != 2)
                            int64_t rax_22 = *(arg1 + 0xb0)
                            zmm4_1 = var_208_3.d
                            uint128_t zmm3 = var_208_3:4.d
                            int64_t rcx_9 = r12_1 * 0x2c
                            float temp0_37[0x4] = _mm_unpacklo_ps(
                                __minss_xmmss_memss(zmm4_1[0], rdx_9[-1].d), 
                                __minss_xmmss_memss(zmm3[0], *(rdx_9 - 0xc))[0].q)
                            zmm5_1 = *(rax_22 + (rcx_9 << 2) + 0xc)
                            zmm6 = *(rax_22 + (rcx_9 << 2) + 0x18)
                            zmm0 = __minss_xmmss_memss(zmm5_1.d, *(rdx_9 - 8))
                            rdx_9[-1].q = temp0_37.q
                            *(rdx_9 - 8) = zmm0.d
                            zmm1 = *rdx_9
                            zmm0 = _mm_max_ss((*(rdx_9 - 4)).d, zmm4_1[0])
                            float temp0_40[0x4] = __maxss_xmmss_memss(zmm5_1[0], *(rdx_9 + 4))
                            zmm4_1 = var_1f8_3.d
                            float temp0_41[0x4] = _mm_max_ss(zmm1[0], zmm3.d)
                            zmm3 = var_1f8_3:4.d
                            float var_1d4_3 = temp0_40[0]
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(zmm0, temp0_41[0].q)).q
                            *(rdx_9 + 4) = var_1d4_3
                            float temp0_43[0x4] = __minss_xmmss_memss(zmm4_1[0], rdx_9[-1].d)
                            float temp0_44[0x4] = __minss_xmmss_memss(zmm3[0], *(rdx_9 - 0xc))
                            zmm0 = _mm_min_ss((*(rdx_9 - 8)).d, zmm6[0])
                            rdx_9[-1].q = (_mm_unpacklo_ps(temp0_43, temp0_44[0].q)).q
                            *(rdx_9 - 8) = zmm0.d
                            zmm2 = *rdx_9
                            float temp0_47[0x4] = _mm_max_ss((*(rdx_9 - 4))[0], zmm4_1[0])
                            zmm0 = *(rdx_9 + 4)
                            float temp0_48[0x4] = _mm_max_ss(zmm2[0], zmm3.d)
                            zmm0 = _mm_max_ss(zmm0.d, zmm6[0])
                            *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_47, temp0_48[0].q)).q
                            *(rdx_9 + 4) = zmm0.d
                        
                        zmm1 = *(rdx_9 - 4)
                        zmm2 = *rdx_9
                        zmm2[0] = zmm2[0] f- *(rdx_9 - 0xc)
                        zmm1[0] = zmm1[0] f- rdx_9[-1].d
                        zmm0.d = (*(rdx_9 + 4)).d f- *(rdx_9 - 8)
                        zmm2[0] = zmm2[0] * zmm2[0]
                        zmm1[0] = zmm1[0] * zmm1[0]
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2[0] = zmm2[0] + zmm1[0]
                        zmm2[0] = zmm2[0] f+ zmm0.d
                        *(rdx_9 + 0x24) = zmm2[0]
                        rdx_9 += 0x38
                    while (&rdx_9[-1] != rdx_8 + 0x70)
                    
                    rax_11 = *(arg1 + 0xb0)
                
                *(rax_11 + rsi_1 + 0x38) = 0
                *(rsi_1 + *(arg1 + 0xb0)) = 1
                r8_3 = *(arg1 + 0xb0)
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(*(r8_3 + rsi_1 + 0x28))
                int32_t rax_32 = (temp2_1 - temp1_1) s>> 1
                void* rcx_11 = &r8_3[8 + r14_2 * 0x2c]
                
                if (rax_32 s> *(rcx_11 + 0xc))
                    sub_1405a52a0(rcx_11, rax_32)
                    r8_3 = *(arg1 + 0xb0)
                
                void* rcx_15 = sx.q(rax_9) * 0xb0 + 0x20 + r8_3
                
                if (rax_32 s> *(rcx_15 + 0xc))
                    sub_1405a52a0(rcx_15, rax_32)
                    r8_3 = *(arg1 + 0xb0)
                
                r10 = arg_8
            
            void* r9_1 = r8_3 + rsi_1
            
            if (*(r8_3 + rsi_1) == 1)
                int32_t rbx_7 = *(r9_1 + 0x28)
                int32_t rdx_14 = *(r9_1 + 0x38)
                
                if (r10 s> 0)
                    int32_t rax_35 = rdx_14 - *(arg1 + 0x88) + *(arg1 + 0x84)
                    
                    if (rax_35 s<= rbx_7)
                        rbx_7 = rax_35
                
                zmm10 = sub_1417370e0(arg1, rdx_14, rbx_7, r9_1)
                *(*(arg1 + 0xb0) + rsi_1 + 0x38) = rbx_7
                
                if (arg_8 s> 0)
                    result = zx.q(*(arg1 + 0x84))
                    
                    if (*(arg1 + 0x88) s>= result.d)
                        return result
            
            int64_t rcx_17 = *(arg1 + 0xb0)
            int64_t r14_3 = sx.q(*(rcx_17 + rsi_1 + 0x6c))
            int64_t rbx_8 = sx.q(*(rcx_17 + rsi_1 + 0xa4))
            int64_t r9_2 = r14_3 * 0xb0
            int64_t r8_6
            
            if (*(rcx_17 + r9_2 + 0x28) != 0)
                r8_6 = rbx_8 * 0xb0
            
            if (*(rcx_17 + r9_2 + 0x28) == 0 || *(rcx_17 + r8_6 + 0x28) == 0)
                zmm10 = sub_141724c50(&var_d0)
            label_141758945:
                *(r13_1 + 8) -= 1
                result = sub_14173ba50(arg1, arg_10)
            else
                uint64_t* r10_1 = sx.q(arg_18) * 0x3c
                arg_10.q = r10_1
                *(r10_1 + *(arg1 + 0x28) + 0x38) = 0
                int64_t rdx_15 = *(arg1 + 0xb0)
                int64_t rcx_18 = *(arg1 + 0x28)
                *(r10_1 + rcx_18) = *(rdx_15 + rsi_1 + 0x54)
                *(r10_1 + rcx_18 + 8) = *(rdx_15 + rsi_1 + 0x5c)
                *(r10_1 + rcx_18 + 0xc) = *(rdx_15 + rsi_1 + 0x60)
                *(r10_1 + rcx_18 + 0x14) = *(rdx_15 + rsi_1 + 0x68)
                int64_t rdx_16 = *(arg1 + 0x28)
                int64_t rcx_19 = *(arg1 + 0xb0)
                *(r9_2 + rcx_19 + 4) = *(r10_1 + rdx_16)
                *(r9_2 + rcx_19 + 0xc) = *(r10_1 + rdx_16 + 8)
                *(r9_2 + rcx_19 + 0x10) = *(r10_1 + rdx_16 + 0xc)
                *(r9_2 + rcx_19 + 0x18) = *(r10_1 + rdx_16 + 0x14)
                *(r10_1 + *(arg1 + 0x28) + 0x30) = *(arg1 + 0x30)
                int64_t rdx_17 = *(arg1 + 0xb0)
                int64_t rcx_21 = *(arg1 + 0x28)
                *(r10_1 + rcx_21 + 0x18) = *(rdx_17 + rsi_1 + 0x8c)
                *(r10_1 + rcx_21 + 0x20) = *(rdx_17 + rsi_1 + 0x94)
                *(r10_1 + rcx_21 + 0x24) = *(rdx_17 + rsi_1 + 0x98)
                *(r10_1 + rcx_21 + 0x2c) = *(rdx_17 + rsi_1 + 0xa0)
                int64_t rdx_18 = *(arg1 + 0x28)
                int64_t rcx_22 = *(arg1 + 0xb0)
                *(r8_6 + rcx_22 + 4) = *(r10_1 + rdx_18 + 0x18)
                *(r8_6 + rcx_22 + 0xc) = *(r10_1 + rdx_18 + 0x20)
                *(r8_6 + rcx_22 + 0x10) = *(r10_1 + rdx_18 + 0x24)
                *(r8_6 + rcx_22 + 0x18) = *(r10_1 + rdx_18 + 0x2c)
                *(r10_1 + *(arg1 + 0x28) + 0x34) = *(arg1 + 0x30) + 1
                int64_t rcx_25 = *(arg1 + 0xb0)
                *(rcx_25 + r9_2 + 0x30) = *(rcx_25 + rsi_1 + 0x30) + 1
                int64_t rcx_26 = *(arg1 + 0xb0)
                *(rcx_26 + r8_6 + 0x30) = *(rcx_26 + rsi_1 + 0x30) + 1
                *(r9_2 + *(arg1 + 0xb0) + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x30)
                *(r8_6 + *(arg1 + 0xb0) + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x34)
                int64_t r12_2 = sx.q(*(r13_1 + 8))
                int32_t rax_57 = (r12_2 + 1).d
                *(r13_1 + 8) = rax_57
                
                if (rax_57 s> *(r13_1 + 0xc))
                    sub_1405a4cf0(r13_1)
                
                *(*r13_1 + (r12_2 << 2)) = rbx_8.d
                int64_t rbx_9 = sx.q(*(r13_1 + 8))
                int32_t rax_59 = (rbx_9 + 1).d
                *(r13_1 + 8) = rax_59
                
                if (rax_59 s> *(r13_1 + 0xc))
                    sub_1405a4cf0(r13_1)
                
                *(*r13_1 + (rbx_9 << 2)) = r14_3.d
                sub_14172ebf0(arg1 + 0x28, *(arg_10.q + *(arg1 + 0x28) + 0x34) - *(arg1 + 0x30) + 1)
                result = *(arg1 + 0xb0)
                *(rsi_1 + result) = 2
        else
            *(r13_1 + 8) = (r8_1 - 1).d
            result = sub_14173ba50(arg1, rdx_1.d)
        
        r10 = arg_8
    while (*(arg1 + 0x98) != 0)

*(arg1 + 9) = 1
return result
