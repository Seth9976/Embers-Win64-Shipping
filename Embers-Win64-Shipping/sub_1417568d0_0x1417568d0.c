// 函数: sub_1417568d0
// 地址: 0x1417568d0
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
    
    do
        int64_t r8_1 = sx.q(*(arg1 + 0x98))
        int64_t rdx_1 = sx.q(*(*(arg1 + 0x90) + (r8_1 << 2) - 4))
        int64_t rax_1 = *(arg1 + 0xb0)
        int64_t r13_1 = rdx_1
        int32_t* rbx_1 = rdx_1 * 0xb0
        int32_t arg_10 = rdx_1.d
        int32_t arg_20 = rdx_1.d
        
        if (*(rbx_1 + rax_1) != 2)
            int32_t r9_1 = *(rbx_1 + rax_1 + 0x34)
            int32_t rax_3 = *(arg1 + 0x30)
            int32_t arg_18 = r9_1
            void* var_148
            int64_t var_13c
            uint128_t zmm2
            
            if (r9_1 s>= rax_3)
                int64_t r12_1 = sx.q(rax_3)
                int32_t i_2 = r9_1 - rax_3 + 1
                int32_t rax_4 = r12_1.d + i_2
                *(arg1 + 0x30) = rax_4
                
                if (rax_4 s> *(arg1 + 0x34))
                    sub_141750030(arg1 + 0x28)
                    r9_1 = arg_18
                    r10 = arg_8
                
                void* rdx_4 = r12_1 * 0x3c + *(arg1 + 0x28)
                
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
                        int32_t var_138_1 = 0xff7fffff
                        int32_t var_134_1 = 0xff7fffff
                        __builtin_memcpy(&var_148, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x44) = var_13c
                        *(rcx_1 - 0x3c) = 0xff7fffff
                        *(rdx_4 - 0x34) = _mm_bsrli_si128(zmm2, 8).d
                        zmm2 = data_142e1c900
                        *(rcx_1 - 0x38) = zmm2.q
                        __builtin_memcpy(&var_148, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x2c) = var_13c
                        uint128_t temp0_2 = _mm_bsrli_si128(zmm2, 8)
                        int32_t var_134_2
                        *(rcx_1 - 0x24) = var_134_2
                        *(rcx_1 - 0x30) = temp0_2.d
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                rdx_1 = zx.q(r13_1.d)
            
            if (r10 s> 0)
                result = zx.q(*(arg1 + 0x84))
                
                if (*(arg1 + 0x88) s>= result.d)
                    return result
            
            void* r8_2 = *(arg1 + 0xb0)
            void* var_c0_1 = arg1 + 0x68
            int32_t rax_7 = *(arg1 + 0x78)
            int32_t var_b0_1 = rdx_1.d
            int32_t var_c8 = r9_1
            void* var_b8_1 = arg1 + 0xb0
            void* var_a8_1 = arg1 + 0x38
            void* var_a0_1 = arg1 + 0x28
            uint128_t zmm0
            
            if (*(rbx_1 + r8_2 + 0x28) s<= rax_7 || *(rbx_1 + r8_2 + 0x30) s>= *(arg1 + 0x7c))
                int64_t rax_63 = *(arg1 + 0x28)
                var_148 = nullptr
                *(sx.q(r9_1) * 0x3c + rax_63 + 0x38) = 1
                int64_t rax_64 = *(arg1 + 0xb0)
                int64_t rcx_35 = r13_1 * 0xb0
                void* r13_3 = nullptr
                int32_t i_3 = *(rcx_35 + rax_64 + 0x28)
                int64_t rbx_2 = *(rcx_35 + rax_64 + 0x20)
                int32_t i_4 = i_3
                
                if (i_3 != 0)
                    sub_1405c4b20(&var_148, i_3, 0)
                    r13_3 = var_148
                    void* rbx_3 = rbx_2 - r13_3
                    uint64_t* rcx_37 = r13_3 + 4
                    int32_t i_1
                    
                    do
                        *(rcx_37 - 4) = *(rbx_3 + rcx_37 - 4)
                        *rcx_37 = *(rbx_3 + rcx_37)
                        rcx_37[1].d = *(rbx_3 + rcx_37 + 8)
                        *(rcx_37 + 0xc) = *(rbx_3 + rcx_37 + 0xc)
                        *(rcx_37 + 0x14) = *(rbx_3 + rcx_37 + 0x14)
                        rcx_37 += 0x1c
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    i_3 = i_4
                    arg_20 = var_13c.d
                else
                    arg_20 = 0
                
                int64_t rbx_4 = sx.q(*(arg1 + 0x40))
                int32_t var_138
                __builtin_memcpy(&var_138, 
                    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
                "ff\xff\x7f\xff", 
                    0x18)
                int32_t rax_69 = (rbx_4 + 1).d
                *(arg1 + 0x40) = rax_69
                
                if (rax_69 s> *(arg1 + 0x44))
                    sub_1405c4ec0(arg1 + 0x38)
                
                int64_t rcx_39 = *(arg1 + 0x38)
                int64_t rdx_28 = rbx_4 * 5
                zmm0 = zx.o(var_138.q)
                *(rcx_39 + (rdx_28 << 3)) = r13_3
                *(rcx_39 + (rdx_28 << 3) + 0xc) = arg_20
                *(rcx_39 + (rdx_28 << 3) + 8) = i_3
                *(rcx_39 + (rdx_28 << 3) + 0x10) = zmm0.q
                int32_t var_130
                *(rcx_39 + (rdx_28 << 3) + 0x18) = var_130
                int64_t var_12c
                *(rcx_39 + (rdx_28 << 3) + 0x1c) = var_12c
                int32_t var_124
                *(rcx_39 + (rdx_28 << 3) + 0x24) = var_124
                *(sx.q(arg_18) * 0x3c + *(arg1 + 0x28) + 0x30) = rbx_4.d
                goto label_14175739f
            
            if (*(rbx_1 + r8_2) == 0)
                float zmm1[0x4] = *(rbx_1 + r8_2 + 0x10)
                zmm2 = *(rbx_1 + r8_2 + 0x14)
                zmm1[0] = zmm1[0] f- *(rbx_1 + r8_2 + 4)
                zmm2.d = zmm2.d f- *(rbx_1 + r8_2 + 8)
                zmm0.d = (*(rbx_1 + r8_2 + 0x18)).d f- *(rbx_1 + r8_2 + 0xc)
                int32_t rsi_3
                
                if (zmm1[0] f<= zmm2.d || zmm1[0] f<= zmm0.d)
                    int32_t rsi_4
                    rsi_4.b = zmm2.d f<= zmm0.d
                    rsi_3 = rsi_4 + 1
                else
                    rsi_3 = 0
                
                int64_t r12_3 = sx.q(sub_14173e730(arg1))
                int32_t rax_10 = sub_14173e730(arg1)
                *(rbx_1 + *(arg1 + 0xb0) + 0x6c) = r12_3.d
                *(rbx_1 + *(arg1 + 0xb0) + 0xa4) = rax_10
                int64_t rdx_6 = *(arg1 + 0xb0)
                zmm1 = zx.o(*(rbx_1 + rdx_6 + 4))
                int32_t rcx_6 = *(rbx_1 + rdx_6 + 0xc)
                *(rbx_1 + rdx_6 + 0x3c) = zmm1.q
                *(rbx_1 + rdx_6 + 0x48) = zmm1.q
                *(rbx_1 + rdx_6 + 0x44) = rcx_6
                *(rbx_1 + rdx_6 + 0x50) = rcx_6
                int64_t rdx_7 = *(arg1 + 0xb0)
                zmm1 = zx.o(*(rbx_1 + rdx_7 + 0x10))
                int32_t rax_11 = *(rbx_1 + rdx_7 + 0x18)
                *(rbx_1 + rdx_7 + 0x74) = zmm1.q
                *(rbx_1 + rdx_7 + 0x80) = zmm1.q
                *(rbx_1 + rdx_7 + 0x7c) = rax_11
                *(rbx_1 + rdx_7 + 0x88) = rax_11
                void* rax_12 = *(arg1 + 0xb0)
                zmm0.d = (*(rbx_1 + rax_12 + 0x10)).d f- *(rbx_1 + rax_12 + 4)
                zmm1 = *(rbx_1 + rax_12 + 0x14)
                void* rdx_9 = rax_12 + 0x3c + rbx_1
                zmm1[0] = zmm1[0] f- *(rbx_1 + rax_12 + 8)
                zmm0.d = zmm0.d f* zmm10.d
                zmm1[0] = zmm1[0] f* zmm10.d
                zmm0.d = zmm0.d f+ *(rbx_1 + rax_12 + 4)
                zmm1[0] = zmm1[0] f+ *(rbx_1 + rax_12 + 8)
                int32_t var_f0_1 = zmm0.d
                float var_ec_1 = zmm1[0]
                zmm0.d = (*(rbx_1 + rax_12 + 0x18)).d f- *(rbx_1 + rax_12 + 0xc)
                zmm0.d = zmm0.d f* zmm10.d
                zmm0.d = zmm0.d f+ *(rbx_1 + rax_12 + 0xc)
                int32_t var_e8_1 = zmm0.d
                
                if (rdx_9 != rdx_9 + 0x70)
                    void* rdx_10 = rdx_9 + 0x10
                    zmm7 = zx.o(var_f0_1.q)
                    int32_t var_e0
                    __builtin_memcpy(&var_e0, 
                        "\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x7f\x"
                    "7f\xff\xff\x7f\x7f", 
                        0x18)
                    zmm8 = zx.o(var_e0.q)
                    
                    do
                        int32_t var_d4
                        *(rdx_10 + 8) = var_d4.q
                        *(rdx_10 + 0x14) = zmm8.q
                        *(rdx_10 + 0x10) = 0x7f7fffff
                        *(rdx_10 + 0x1c) = 0xff7fffff
                        uint128_t zmm3
                        float zmm4_1[0x4]
                        uint128_t zmm5_1
                        
                        if (rsi_3 != 0)
                            int64_t rax_13 = *(arg1 + 0xb0)
                            zmm3 = var_e8_1
                            zmm4_1 = zmm7.q:4.d
                            zmm0 = _mm_min_ss((*(rdx_10 - 8)).d, zmm3.d)
                            zmm3 = __maxss_xmmss_memss(zmm3.d, *(rdx_10 + 4))
                            float temp0_5[0x4] = __minss_xmmss_memss(zmm4_1[0], *(rdx_10 - 0xc))
                            int64_t rcx_7 = r13_1 * 0x2c
                            int32_t var_118_1 = zmm0.d
                            int32_t var_10c_1 = zmm3.d
                            zmm3 = var_e8_1
                            zmm5_1 = *(rax_13 + (rcx_7 << 2) + 4)
                            zmm6 = *(rax_13 + (rcx_7 << 2) + 0x10)
                            zmm2 = __minss_xmmss_memss(zmm5_1.d, *(rdx_10 - 0x10))
                            zmm5_1 = __maxss_xmmss_memss(zmm5_1.d, *(rdx_10 - 4))
                            zmm0 = _mm_unpacklo_ps(zmm2, temp0_5[0].q)
                            zmm1 = *rdx_10
                            *(rdx_10 - 0x10) = zmm0.q
                            float temp0_9[0x4] = _mm_max_ss(zmm1[0], zmm4_1[0])
                            zmm4_1 = zmm7.q:4.d
                            *(rdx_10 - 8) = var_118_1
                            *(rdx_10 - 4) = (_mm_unpacklo_ps(zmm5_1, temp0_9[0].q)).q
                            *(rdx_10 + 4) = var_10c_1
                            float temp0_11[0x4] = __minss_xmmss_memss(zmm4_1[0], *(rdx_10 - 0xc))
                            zmm0 = *(rdx_10 - 8)
                            zmm2 = __minss_xmmss_memss(zmm6.d, *(rdx_10 - 0x10))
                            int32_t var_100_1 = _mm_min_ss(zmm0.d, zmm3.d).d
                            *(rdx_10 - 0x10) = (_mm_unpacklo_ps(zmm2, temp0_11[0].q)).q
                            *(rdx_10 - 8) = var_100_1
                            float temp0_15[0x4] = __maxss_xmmss_memss(zmm6[0], *(rdx_10 - 4))
                            zmm1 = *rdx_10
                            int32_t var_f4_1 = __maxss_xmmss_memss(zmm3.d, *(rdx_10 + 4)).d
                            *(rdx_10 - 4) =
                                (_mm_unpacklo_ps(temp0_15, _mm_max_ss(zmm1[0], zmm4_1[0])[0].q)).q
                            *(rdx_10 + 4) = var_f4_1
                        
                        if (rsi_3 != 1)
                            int64_t rax_18 = *(arg1 + 0xb0)
                            zmm0 = *(rdx_10 - 8)
                            zmm4_1 = zmm7.d
                            zmm3 = var_e8_1
                            zmm2 = _mm_min_ss((*(rdx_10 - 0x10)).d, zmm4_1[0])
                            int64_t rcx_8 = r13_1 * 0x2c
                            int32_t var_118_2 = _mm_min_ss(zmm0.d, zmm3.d).d
                            zmm5_1 = *(rax_18 + (rcx_8 << 2) + 8)
                            zmm6 = *(rax_18 + (rcx_8 << 2) + 0x14)
                            *(rdx_10 - 0x10) = (_mm_unpacklo_ps(zmm2, 
                                __minss_xmmss_memss(zmm5_1[0], *(rdx_10 - 0xc))[0].q)).q
                            *(rdx_10 - 8) = var_118_2
                            float temp0_23[0x4] = __maxss_xmmss_memss(zmm4_1[0], *(rdx_10 - 4))
                            zmm4_1 = zmm7.d
                            int32_t var_10c_2 = __maxss_xmmss_memss(zmm3.d, *(rdx_10 + 4)).d
                            zmm3 = var_e8_1
                            *(rdx_10 - 4) = (_mm_unpacklo_ps(temp0_23, 
                                __maxss_xmmss_memss(zmm5_1.d, *rdx_10).q)).q
                            *(rdx_10 + 4) = var_10c_2
                            float temp0_27[0x4] = __minss_xmmss_memss(zmm6[0], *(rdx_10 - 0xc))
                            zmm2 = *(rdx_10 - 0x10)
                            int32_t var_100_2 = _mm_min_ss((*(rdx_10 - 8)).d, zmm3.d).d
                            *(rdx_10 - 0x10) =
                                (_mm_unpacklo_ps(_mm_min_ss(zmm2.d, zmm4_1[0]), temp0_27[0].q)).q
                            *(rdx_10 - 8) = var_100_2
                            float temp0_31[0x4] = __maxss_xmmss_memss(zmm4_1[0], *(rdx_10 - 4))
                            zmm1 = *rdx_10
                            int32_t var_f4_2 = __maxss_xmmss_memss(zmm3.d, *(rdx_10 + 4)).d
                            *(rdx_10 - 4) =
                                (_mm_unpacklo_ps(temp0_31, _mm_max_ss(zmm1[0], zmm6[0])[0].q)).q
                            *(rdx_10 + 4) = var_f4_2
                        
                        uint64_t var_168_3 = zmm7.q
                        int32_t var_160_3 = var_e8_1
                        uint64_t var_158_3 = zmm7.q
                        int32_t var_150_3 = var_e8_1
                        
                        if (rsi_3 != 2)
                            int64_t rax_23 = *(arg1 + 0xb0)
                            zmm4_1 = var_168_3.d
                            zmm3 = var_168_3:4.d
                            int64_t rcx_9 = r13_1 * 0x2c
                            float temp0_37[0x4] = _mm_unpacklo_ps(
                                _mm_min_ss((*(rdx_10 - 0x10))[0], zmm4_1[0]), 
                                __minss_xmmss_memss(zmm3.d, *(rdx_10 - 0xc)).q)
                            zmm5_1 = *(rax_23 + (rcx_9 << 2) + 0xc)
                            zmm6 = *(rax_23 + (rcx_9 << 2) + 0x18)
                            zmm0 = __minss_xmmss_memss(zmm5_1.d, *(rdx_10 - 8))
                            *(rdx_10 - 0x10) = temp0_37.q
                            *(rdx_10 - 8) = zmm0.d
                            float temp0_39[0x4] = __maxss_xmmss_memss(zmm4_1[0], *(rdx_10 - 4))
                            zmm1 = *rdx_10
                            zmm5_1 = __maxss_xmmss_memss(zmm5_1.d, *(rdx_10 + 4))
                            float temp0_41[0x4] = _mm_max_ss(zmm1[0], zmm3.d)
                            zmm3 = var_158_3:4.d
                            zmm4_1 = var_158_3.d
                            int32_t var_10c_3 = zmm5_1.d
                            *(rdx_10 - 4) = (_mm_unpacklo_ps(temp0_39, temp0_41[0].q)).q
                            *(rdx_10 + 4) = var_10c_3
                            zmm1 = *(rdx_10 - 0x10)
                            zmm0 = __minss_xmmss_memss(zmm6.d, *(rdx_10 - 8))
                            zmm2 = __minss_xmmss_memss(zmm3.d, *(rdx_10 - 0xc))
                            int32_t var_100_3 = zmm0.d
                            *(rdx_10 - 0x10) =
                                (_mm_unpacklo_ps(_mm_min_ss(zmm1[0], zmm4_1[0]), zmm2.q)).q
                            *(rdx_10 - 8) = var_100_3
                            float temp0_47[0x4] = __maxss_xmmss_memss(zmm4_1[0], *(rdx_10 - 4))
                            zmm1 = *rdx_10
                            float temp0_48[0x4] = __maxss_xmmss_memss(zmm6[0], *(rdx_10 + 4))
                            float temp0_49[0x4] = _mm_max_ss(zmm1[0], zmm3.d)
                            float var_f4_3 = temp0_48[0]
                            *(rdx_10 - 4) = (_mm_unpacklo_ps(temp0_47, temp0_49[0].q)).q
                            *(rdx_10 + 4) = var_f4_3
                        
                        zmm1 = *(rdx_10 - 4)
                        zmm2.d = (*rdx_10).d f- *(rdx_10 - 0xc)
                        zmm1[0] = zmm1[0] f- *(rdx_10 - 0x10)
                        zmm0.d = (*(rdx_10 + 4)).d f- *(rdx_10 - 8)
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm1[0] = zmm1[0] * zmm1[0]
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2.d = zmm2.d f+ zmm1[0]
                        zmm2.d = zmm2.d f+ zmm0.d
                        *(rdx_10 + 0x24) = zmm2.d
                        rdx_10 += 0x38
                    while (rdx_10 - 0x10 != rdx_9 + 0x70)
                    
                    rax_12 = *(arg1 + 0xb0)
                
                *(rbx_1 + rax_12 + 0x38) = 0
                *(rbx_1 + *(arg1 + 0xb0)) = 1
                r8_2 = *(arg1 + 0xb0)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(*(rbx_1 + r8_2 + 0x28))
                int32_t rax_33 = (temp3_1 - temp2_1) s>> 1
                int64_t* rcx_11 = r8_2 + 0x20 + r12_3 * 0xb0
                
                if (rax_33 s> *(rcx_11 + 0xc))
                    sub_1413f6f70(rcx_11, rax_33)
                    r8_2 = *(arg1 + 0xb0)
                
                int64_t* rcx_15 = sx.q(rax_10) * 0xb0 + 0x20 + r8_2
                
                if (rax_33 s> *(rcx_15 + 0xc))
                    sub_1413f6f70(rcx_15, rax_33)
                    r8_2 = *(arg1 + 0xb0)
                
                r10 = arg_8
            
            void* r9_2 = rbx_1 + r8_2
            
            if (*(rbx_1 + r8_2) == 1)
                int32_t rsi_6 = *(r9_2 + 0x28)
                int32_t rdx_15 = *(r9_2 + 0x38)
                
                if (r10 s> 0)
                    int32_t rax_36 = rdx_15 - *(arg1 + 0x88) + *(arg1 + 0x84)
                    
                    if (rax_36 s<= rsi_6)
                        rsi_6 = rax_36
                
                zmm10 = sub_141736dc0(arg1, rdx_15, rsi_6, r9_2)
                *(rbx_1 + *(arg1 + 0xb0) + 0x38) = rsi_6
                
                if (arg_8 s> 0)
                    result = zx.q(*(arg1 + 0x84))
                    
                    if (*(arg1 + 0x88) s>= result.d)
                        return result
            
            int64_t rcx_17 = *(arg1 + 0xb0)
            int64_t r12_4 = sx.q(*(rbx_1 + rcx_17 + 0x6c))
            int64_t rsi_7 = sx.q(*(rbx_1 + rcx_17 + 0xa4))
            int64_t r9_3 = r12_4 * 0xb0
            int64_t r8_5
            
            if (*(rcx_17 + r9_3 + 0x28) != 0)
                r8_5 = rsi_7 * 0xb0
            
            if (*(rcx_17 + r9_3 + 0x28) == 0 || *(rcx_17 + r8_5 + 0x28) == 0)
                sub_141723c90(&var_c8)
            label_14175739f:
                *(arg1 + 0x98) -= 1
                result = sub_14173ba50(arg1, arg_10)
            else
                uint64_t* r10_1 = sx.q(arg_18) * 0x3c
                arg_10.q = r10_1
                *(r10_1 + *(arg1 + 0x28) + 0x38) = 0
                int64_t rdx_16 = *(arg1 + 0xb0)
                int64_t rcx_19 = *(arg1 + 0x28)
                *(r10_1 + rcx_19) = *(rbx_1 + rdx_16 + 0x54)
                *(r10_1 + rcx_19 + 8) = *(rbx_1 + rdx_16 + 0x5c)
                *(r10_1 + rcx_19 + 0xc) = *(rbx_1 + rdx_16 + 0x60)
                *(r10_1 + rcx_19 + 0x14) = *(rbx_1 + rdx_16 + 0x68)
                int64_t rdx_17 = *(arg1 + 0x28)
                int64_t rcx_20 = *(arg1 + 0xb0)
                *(rcx_20 + r9_3 + 4) = *(r10_1 + rdx_17)
                *(rcx_20 + r9_3 + 0xc) = *(r10_1 + rdx_17 + 8)
                *(rcx_20 + r9_3 + 0x10) = *(r10_1 + rdx_17 + 0xc)
                *(rcx_20 + r9_3 + 0x18) = *(r10_1 + rdx_17 + 0x14)
                *(r10_1 + *(arg1 + 0x28) + 0x30) = *(arg1 + 0x30)
                int64_t rdx_18 = *(arg1 + 0xb0)
                int64_t rcx_22 = *(arg1 + 0x28)
                *(r10_1 + rcx_22 + 0x18) = *(rbx_1 + rdx_18 + 0x8c)
                *(r10_1 + rcx_22 + 0x20) = *(rbx_1 + rdx_18 + 0x94)
                *(r10_1 + rcx_22 + 0x24) = *(rbx_1 + rdx_18 + 0x98)
                *(r10_1 + rcx_22 + 0x2c) = *(rbx_1 + rdx_18 + 0xa0)
                int64_t rdx_19 = *(arg1 + 0x28)
                int64_t rcx_23 = *(arg1 + 0xb0)
                *(rcx_23 + r8_5 + 4) = *(r10_1 + rdx_19 + 0x18)
                *(rcx_23 + r8_5 + 0xc) = *(r10_1 + rdx_19 + 0x20)
                *(rcx_23 + r8_5 + 0x10) = *(r10_1 + rdx_19 + 0x24)
                *(rcx_23 + r8_5 + 0x18) = *(r10_1 + rdx_19 + 0x2c)
                *(r10_1 + *(arg1 + 0x28) + 0x34) = *(arg1 + 0x30) + 1
                int64_t rcx_26 = *(arg1 + 0xb0)
                *(rcx_26 + r9_3 + 0x30) = *(rbx_1 + rcx_26 + 0x30) + 1
                int64_t rcx_27 = *(arg1 + 0xb0)
                *(rcx_27 + r8_5 + 0x30) = *(rbx_1 + rcx_27 + 0x30) + 1
                *(*(arg1 + 0xb0) + r9_3 + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x30)
                *(*(arg1 + 0xb0) + r8_5 + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x34)
                int64_t r13_2 = sx.q(*(arg1 + 0x98))
                int32_t rax_57 = (r13_2 + 1).d
                *(arg1 + 0x98) = rax_57
                
                if (rax_57 s> *(arg1 + 0x9c))
                    sub_1405a4cf0(arg1 + 0x90)
                
                *(*(arg1 + 0x90) + (r13_2 << 2)) = rsi_7.d
                int64_t rsi_8 = sx.q(*(arg1 + 0x98))
                int32_t rax_59 = (rsi_8 + 1).d
                *(arg1 + 0x98) = rax_59
                
                if (rax_59 s> *(arg1 + 0x9c))
                    sub_1405a4cf0(arg1 + 0x90)
                
                *(*(arg1 + 0x90) + (rsi_8 << 2)) = r12_4.d
                sub_14172ebf0(arg1 + 0x28, *(arg_10.q + *(arg1 + 0x28) + 0x34) - *(arg1 + 0x30) + 1)
                result = *(arg1 + 0xb0)
                *(rbx_1 + result) = 2
        else
            *(arg1 + 0x98) = (r8_1 - 1).d
            result = sub_14173ba50(arg1, rdx_1.d)
        
        r10 = arg_8
    while (*(arg1 + 0x98) != 0)

*(arg1 + 9) = 1
return result
