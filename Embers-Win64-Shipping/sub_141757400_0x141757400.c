// 函数: sub_141757400
// 地址: 0x141757400
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
        int64_t rsi_1 = sx.q(*(*(arg1 + 0x90) + (r8_1 << 2) - 4))
        int32_t* rax_1 = *(arg1 + 0xb0)
        int64_t r13_1 = rsi_1
        int32_t* rdi_1 = rsi_1 * 0xb0
        int32_t arg_18 = rsi_1.d
        int32_t arg_20 = rsi_1.d
        
        if (*(rax_1 + rdi_1) != 2)
            int32_t rdx_1 = *(rax_1 + rdi_1 + 0x34)
            int64_t r12_1 = sx.q(*(arg1 + 0x30))
            int32_t arg_10 = rdx_1
            uint128_t zmm2
            
            if (rdx_1 s>= r12_1.d)
                int32_t i_1 = rdx_1 - r12_1.d + 1
                int32_t rax_3 = r12_1.d + i_1
                *(arg1 + 0x30) = rax_3
                
                if (rax_3 s> *(arg1 + 0x34))
                    sub_141750030(arg1 + 0x28)
                    r10 = arg_8
                
                void* rdx_4 = r12_1 * 0x3c + *(arg1 + 0x28)
                
                if (i_1 != 0)
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
                        int32_t var_d0_1 = 0xff7fffff
                        int32_t var_cc_1 = 0xff7fffff
                        int128_t var_e0
                        __builtin_memcpy(&var_e0, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x44) = var_e0:0xc.q
                        *(rcx_1 - 0x3c) = 0xff7fffff
                        *(rdx_4 - 0x34) = _mm_bsrli_si128(zmm2, 8).d
                        zmm2 = data_142e1c900
                        *(rcx_1 - 0x38) = zmm2.q
                        int128_t var_e0_1
                        __builtin_memcpy(&var_e0_1, 
                            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x"
                        "7f\xff\xff\xff\x7f\xff", 
                            0x18)
                        *(rcx_1 - 0x2c) = var_e0_1:0xc.q
                        uint128_t temp0_2 = _mm_bsrli_si128(zmm2, 8)
                        *(rcx_1 - 0x24) = 0xff7fffff
                        *(rcx_1 - 0x30) = temp0_2.d
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                rdx_1 = arg_10
                rsi_1 = zx.q(r13_1.d)
            
            if (r10 s> 0)
                result = zx.q(*(arg1 + 0x84))
                
                if (*(arg1 + 0x88) s>= result.d)
                    return result
            
            void* r8_2 = *(arg1 + 0xb0)
            void* var_c0_1 = arg1 + 0x68
            int32_t var_c8 = rdx_1
            void* var_a8_1 = arg1 + 0x38
            void* var_b8_1 = arg1 + 0xb0
            int32_t var_b0_1 = rsi_1.d
            void* var_a0_1 = arg1 + 0x28
            
            if (*(rdi_1 + r8_2 + 0x28) s<= *(arg1 + 0x78)
                    || *(rdi_1 + r8_2 + 0x30) s>= *(arg1 + 0x7c))
                sub_14171a6c0(&var_c8)
                *(arg1 + 0x98) -= 1
                result = sub_14173ba50(arg1, rsi_1.d)
            else
                if (*(rdi_1 + r8_2) == 0)
                    float zmm1[0x4] = *(rdi_1 + r8_2 + 0x10)
                    zmm2 = *(rdi_1 + r8_2 + 0x14)
                    zmm1[0] = zmm1[0] f- *(rdi_1 + r8_2 + 4)
                    zmm2.d = zmm2.d f- *(rdi_1 + r8_2 + 8)
                    uint128_t zmm0
                    zmm0.d = (*(rdi_1 + r8_2 + 0x18)).d f- *(rdi_1 + r8_2 + 0xc)
                    int32_t rsi_4
                    
                    if (zmm1[0] f<= zmm2.d || zmm1[0] f<= zmm0.d)
                        int32_t rsi_5
                        rsi_5.b = zmm2.d f<= zmm0.d
                        rsi_4 = rsi_5 + 1
                    else
                        rsi_4 = 0
                    
                    int64_t r12_2 = sx.q(sub_14173e730(arg1))
                    int32_t rax_9 = sub_14173e730(arg1)
                    *(*(arg1 + 0xb0) + rdi_1 + 0x6c) = r12_2.d
                    *(*(arg1 + 0xb0) + rdi_1 + 0xa4) = rax_9
                    int64_t rdx_5 = *(arg1 + 0xb0)
                    zmm1 = zx.o(*(rdx_5 + rdi_1 + 4))
                    int32_t rcx_7 = *(rdx_5 + rdi_1 + 0xc)
                    *(rdx_5 + rdi_1 + 0x3c) = zmm1.q
                    *(rdx_5 + rdi_1 + 0x48) = zmm1.q
                    *(rdx_5 + rdi_1 + 0x44) = rcx_7
                    *(rdx_5 + rdi_1 + 0x50) = rcx_7
                    int64_t rdx_6 = *(arg1 + 0xb0)
                    zmm1 = zx.o(*(rdx_6 + rdi_1 + 0x10))
                    int32_t rax_10 = *(rdx_6 + rdi_1 + 0x18)
                    *(rdx_6 + rdi_1 + 0x74) = zmm1.q
                    *(rdx_6 + rdi_1 + 0x80) = zmm1.q
                    *(rdx_6 + rdi_1 + 0x7c) = rax_10
                    *(rdx_6 + rdi_1 + 0x88) = rax_10
                    void* rax_11 = *(arg1 + 0xb0)
                    zmm0.d = (*(rdi_1 + rax_11 + 0x10)).d f- *(rdi_1 + rax_11 + 4)
                    zmm1 = *(rdi_1 + rax_11 + 0x14)
                    void* rdx_8 = rax_11 + 0x3c + rdi_1
                    zmm1[0] = zmm1[0] f- *(rdi_1 + rax_11 + 8)
                    zmm0.d = zmm0.d f* zmm10.d
                    zmm1[0] = zmm1[0] f* zmm10.d
                    zmm0.d = zmm0.d f+ *(rdi_1 + rax_11 + 4)
                    zmm1[0] = zmm1[0] f+ *(rdi_1 + rax_11 + 8)
                    int32_t var_108_1 = zmm0.d
                    float var_104_1 = zmm1[0]
                    zmm0.d = (*(rdi_1 + rax_11 + 0x18)).d f- *(rdi_1 + rax_11 + 0xc)
                    zmm0.d = zmm0.d f* zmm10.d
                    zmm0.d = zmm0.d f+ *(rdi_1 + rax_11 + 0xc)
                    float var_100_1 = zmm0.d
                    
                    if (rdx_8 != rdx_8 + 0x70)
                        float (* rdx_9)[0x4] = rdx_8 + 0x10
                        zmm7 = zx.o(var_108_1.q)
                        int32_t var_f8
                        __builtin_memcpy(&var_f8, 
                            "\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\x7f\xff\xff\x"
                        "7f\x7f\xff\xff\x7f\x7f", 
                            0x18)
                        zmm8 = zx.o(var_f8.q)
                        
                        do
                            int32_t var_ec
                            *(rdx_9 + 8) = var_ec.q
                            *(rdx_9 + 0x14) = zmm8.q
                            rdx_9[1][0] = 3.40282347e+38f
                            (*rdx_9)[7] = -3.40282347e+38f
                            uint64_t var_158_1 = zmm7.q
                            uint64_t var_148_1 = zmm7.q
                            float zmm4_1[0x4]
                            float zmm5_1[0x4]
                            
                            if (rsi_4 != 0)
                                int64_t rax_12 = *(arg1 + 0xb0)
                                zmm2 = rdx_9[-1][0]
                                zmm0 = (*rdx_9)[-2]
                                float temp0_3[0x4] =
                                    __minss_xmmss_memss((*rdx_9)[-3][0], var_158_1:4.d)
                                zmm4_1 = var_100_1
                                int64_t rcx_8 = r13_1 * 0x2c
                                int32_t var_130_1 = _mm_min_ss(zmm0.d, zmm4_1[0]).d
                                float var_124_1 = __maxss_xmmss_memss(zmm4_1[0], (*rdx_9)[1])[0]
                                zmm4_1 = var_100_1
                                zmm5_1 = *(rax_12 + (rcx_8 << 2) + 4)
                                zmm6 = *(rax_12 + (rcx_8 << 2) + 0x10)
                                zmm2 = _mm_min_ss(zmm2.d, zmm5_1[0])
                                float temp0_7[0x4] = __maxss_xmmss_memss(zmm5_1[0], (*rdx_9)[-1])
                                zmm0 = _mm_unpacklo_ps(zmm2, temp0_3[0].q)
                                float temp0_9[0x4] = __maxss_xmmss_memss((*rdx_9)[0], var_158_1:4.d)
                                rdx_9[-1][0].q = zmm0.q
                                (*rdx_9)[-2] = var_130_1
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_7, temp0_9[0].q)).q
                                (*rdx_9)[1] = var_124_1
                                zmm1 = (*rdx_9)[-3]
                                zmm0 = _mm_min_ss((*rdx_9)[-2].d, zmm4_1[0])
                                rdx_9[-1][0].q = (_mm_unpacklo_ps(
                                    __minss_xmmss_memss(zmm6.d, rdx_9[-1][0]), 
                                    __minss_xmmss_memss(zmm1[0], var_148_1:4.d)[0].q)).q
                                (*rdx_9)[-2] = zmm0.d
                                float temp0_15[0x4] = __maxss_xmmss_memss(zmm6[0], (*rdx_9)[-1])
                                zmm1 = *rdx_9
                                float temp0_16[0x4] = __maxss_xmmss_memss(zmm4_1[0], (*rdx_9)[1])
                                float temp0_17[0x4] = __maxss_xmmss_memss(zmm1[0], var_148_1:4.d)
                                float var_10c_1 = temp0_16[0]
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_15, temp0_17[0].q)).q
                                (*rdx_9)[1] = var_10c_1
                            
                            if (rsi_4 != 1)
                                int64_t rax_17 = *(arg1 + 0xb0)
                                zmm2 = rdx_9[-1][0]
                                zmm1 = (*rdx_9)[-3]
                                zmm5_1 = zmm7.d
                                zmm0 = _mm_min_ss((*rdx_9)[-2].d, var_100_1)
                                zmm2 = _mm_min_ss(zmm2.d, zmm5_1[0])
                                int64_t rcx_9 = r13_1 * 0x2c
                                zmm4_1 = *(rax_17 + (rcx_9 << 2) + 8)
                                zmm6 = *(rax_17 + (rcx_9 << 2) + 0x14)
                                rdx_9[-1][0].q =
                                    (_mm_unpacklo_ps(zmm2, _mm_min_ss(zmm1[0], zmm4_1[0])[0].q)).q
                                (*rdx_9)[-2] = zmm0.d
                                float temp0_23 = __maxss_xmmss_memss(var_100_1, (*rdx_9)[1])
                                zmm1 = *rdx_9
                                float temp0_24[0x4] = __maxss_xmmss_memss(zmm5_1[0], (*rdx_9)[-1])
                                float temp0_25[0x4] = _mm_max_ss(zmm1[0], zmm4_1[0])
                                zmm4_1 = zmm7.d
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_24, temp0_25[0].q)).q
                                (*rdx_9)[1] = temp0_23
                                zmm2 = rdx_9[-1][0]
                                zmm0 = _mm_min_ss((*rdx_9)[-2].d, var_100_1)
                                float temp0_28[0x4] = __minss_xmmss_memss(zmm6[0], (*rdx_9)[-3])
                                rdx_9[-1][0].q = (_mm_unpacklo_ps(_mm_min_ss(zmm2.d, zmm4_1[0]), 
                                    temp0_28[0].q)).q
                                (*rdx_9)[-2] = zmm0.d
                                float temp0_31[0x4] = __maxss_xmmss_memss(zmm4_1[0], (*rdx_9)[-1])
                                float temp0_32[0x4] = __maxss_xmmss_memss(zmm6[0], *rdx_9)
                                float temp0_33 = __maxss_xmmss_memss(var_100_1, (*rdx_9)[1])
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_31, temp0_32[0].q)).q
                                (*rdx_9)[1] = temp0_33
                            
                            uint64_t var_158_3 = zmm7.q
                            float var_150_3 = var_100_1
                            uint64_t var_148_3 = zmm7.q
                            float var_140_3 = var_100_1
                            
                            if (rsi_4 != 2)
                                int64_t rax_22 = *(arg1 + 0xb0)
                                zmm1 = rdx_9[-1][0]
                                zmm4_1 = var_158_3.d
                                zmm2 = __minss_xmmss_memss((*rdx_9)[-3].d, var_158_3:4.d)
                                int64_t rcx_10 = r13_1 * 0x2c
                                float temp0_37[0x4] =
                                    _mm_unpacklo_ps(_mm_min_ss(zmm1[0], zmm4_1[0]), zmm2.q)
                                zmm5_1 = *(rax_22 + (rcx_10 << 2) + 0xc)
                                zmm6 = *(rax_22 + (rcx_10 << 2) + 0x18)
                                zmm0 = __minss_xmmss_memss(zmm5_1.d, (*rdx_9)[-2])
                                rdx_9[-1][0].q = temp0_37.q
                                (*rdx_9)[-2] = zmm0.d
                                float temp0_39[0x4] = __maxss_xmmss_memss(zmm4_1[0], (*rdx_9)[-1])
                                zmm1 = *rdx_9
                                float temp0_40[0x4] = __maxss_xmmss_memss(zmm5_1[0], (*rdx_9)[1])
                                float temp0_41[0x4] = __maxss_xmmss_memss(zmm1[0], var_158_3:4.d)
                                zmm4_1 = var_148_3.d
                                float var_124_3 = temp0_40[0]
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_39, temp0_41[0].q)).q
                                (*rdx_9)[1] = var_124_3
                                zmm0 = (*rdx_9)[-2]
                                float temp0_43[0x4] = _mm_min_ss(rdx_9[-1][0][0], zmm4_1[0])
                                zmm2 = (*rdx_9)[-3]
                                zmm0 = _mm_min_ss(zmm0.d, zmm6[0])
                                rdx_9[-1][0].q = (_mm_unpacklo_ps(temp0_43, 
                                    __minss_xmmss_memss(zmm2.d, var_148_3:4.d).q)).q
                                (*rdx_9)[-2] = zmm0.d
                                float temp0_47[0x4] = __maxss_xmmss_memss(zmm4_1[0], (*rdx_9)[-1])
                                zmm1 = *rdx_9
                                float temp0_48[0x4] = __maxss_xmmss_memss(zmm6[0], (*rdx_9)[1])
                                float temp0_49[0x4] = __maxss_xmmss_memss(zmm1[0], var_148_3:4.d)
                                float var_10c_3 = temp0_48[0]
                                *(rdx_9 - 4) = (_mm_unpacklo_ps(temp0_47, temp0_49[0].q)).q
                                (*rdx_9)[1] = var_10c_3
                            
                            zmm1 = (*rdx_9)[-1]
                            zmm2.d = (*rdx_9).d f- (*rdx_9)[-3]
                            zmm1[0] = zmm1[0] - rdx_9[-1][0]
                            zmm0.d = (*rdx_9)[1].d f- (*rdx_9)[-2]
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm2.d = zmm2.d f+ zmm1[0]
                            zmm2.d = zmm2.d f+ zmm0.d
                            (*rdx_9)[9] = zmm2.d
                            rdx_9 = &(*rdx_9)[0xe]
                        while (&rdx_9[-1] != rdx_8 + 0x70)
                        
                        rax_11 = *(arg1 + 0xb0)
                    
                    *(rdi_1 + rax_11 + 0x38) = 0
                    *(rdi_1 + *(arg1 + 0xb0)) = 1
                    r8_2 = *(arg1 + 0xb0)
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(*(rdi_1 + r8_2 + 0x28))
                    int32_t rax_32 = (temp2_1 - temp1_1) s>> 1
                    uint64_t* rcx_12 = r8_2 + 0x20 + r12_2 * 0xb0
                    
                    if (rax_32 s> *(rcx_12 + 0xc))
                        sub_1405a52a0(rcx_12, rax_32)
                        r8_2 = *(arg1 + 0xb0)
                    
                    uint64_t* rcx_16 = sx.q(rax_9) * 0xb0 + 0x20 + r8_2
                    
                    if (rax_32 s> *(rcx_16 + 0xc))
                        sub_1405a52a0(rcx_16, rax_32)
                        r8_2 = *(arg1 + 0xb0)
                    
                    r10 = arg_8
                
                void* r9_1 = rdi_1 + r8_2
                
                if (*(rdi_1 + r8_2) == 1)
                    int32_t rsi_7 = *(r9_1 + 0x28)
                    int32_t rdx_14 = *(r9_1 + 0x38)
                    
                    if (r10 s> 0)
                        int32_t rax_35 = rdx_14 - *(arg1 + 0x88) + *(arg1 + 0x84)
                        
                        if (rax_35 s<= rsi_7)
                            rsi_7 = rax_35
                    
                    zmm10 = sub_1417370e0(arg1, rdx_14, rsi_7, r9_1)
                    *(*(arg1 + 0xb0) + rdi_1 + 0x38) = rsi_7
                    
                    if (arg_8 s> 0)
                        result = zx.q(*(arg1 + 0x84))
                        
                        if (*(arg1 + 0x88) s>= result.d)
                            return result
                
                int64_t rcx_18 = *(arg1 + 0xb0)
                int64_t r12_3 = sx.q(*(rdi_1 + rcx_18 + 0x6c))
                int64_t rsi_8 = sx.q(*(rdi_1 + rcx_18 + 0xa4))
                int64_t r9_2 = r12_3 * 0xb0
                int64_t r8_5
                
                if (*(rcx_18 + r9_2 + 0x28) != 0)
                    r8_5 = rsi_8 * 0xb0
                
                if (*(rcx_18 + r9_2 + 0x28) == 0 || *(rcx_18 + r8_5 + 0x28) == 0)
                    sub_14171a6c0(&var_c8)
                    *(arg1 + 0x98) -= 1
                    result = sub_14173ba50(arg1, arg_18)
                else
                    uint64_t* r10_1 = sx.q(arg_10) * 0x3c
                    arg_10.q = r10_1
                    *(r10_1 + *(arg1 + 0x28) + 0x38) = 0
                    int64_t rdx_15 = *(arg1 + 0xb0)
                    int64_t rcx_19 = *(arg1 + 0x28)
                    *(r10_1 + rcx_19) = *(rdx_15 + rdi_1 + 0x54)
                    *(r10_1 + rcx_19 + 8) = *(rdx_15 + rdi_1 + 0x5c)
                    *(r10_1 + rcx_19 + 0xc) = *(rdx_15 + rdi_1 + 0x60)
                    *(r10_1 + rcx_19 + 0x14) = *(rdx_15 + rdi_1 + 0x68)
                    int64_t rdx_16 = *(arg1 + 0x28)
                    int64_t rcx_20 = *(arg1 + 0xb0)
                    *(rcx_20 + r9_2 + 4) = *(r10_1 + rdx_16)
                    *(rcx_20 + r9_2 + 0xc) = *(r10_1 + rdx_16 + 8)
                    *(rcx_20 + r9_2 + 0x10) = *(r10_1 + rdx_16 + 0xc)
                    *(rcx_20 + r9_2 + 0x18) = *(r10_1 + rdx_16 + 0x14)
                    *(r10_1 + *(arg1 + 0x28) + 0x30) = *(arg1 + 0x30)
                    int64_t rdx_17 = *(arg1 + 0xb0)
                    int64_t rcx_22 = *(arg1 + 0x28)
                    *(r10_1 + rcx_22 + 0x18) = *(rdx_17 + rdi_1 + 0x8c)
                    *(r10_1 + rcx_22 + 0x20) = *(rdx_17 + rdi_1 + 0x94)
                    *(r10_1 + rcx_22 + 0x24) = *(rdx_17 + rdi_1 + 0x98)
                    *(r10_1 + rcx_22 + 0x2c) = *(rdx_17 + rdi_1 + 0xa0)
                    int64_t rdx_18 = *(arg1 + 0x28)
                    int64_t rcx_23 = *(arg1 + 0xb0)
                    *(rcx_23 + r8_5 + 4) = *(r10_1 + rdx_18 + 0x18)
                    *(rcx_23 + r8_5 + 0xc) = *(r10_1 + rdx_18 + 0x20)
                    *(rcx_23 + r8_5 + 0x10) = *(r10_1 + rdx_18 + 0x24)
                    *(rcx_23 + r8_5 + 0x18) = *(r10_1 + rdx_18 + 0x2c)
                    *(r10_1 + *(arg1 + 0x28) + 0x34) = *(arg1 + 0x30) + 1
                    int64_t rcx_26 = *(arg1 + 0xb0)
                    *(rcx_26 + r9_2 + 0x30) = *(rdi_1 + rcx_26 + 0x30) + 1
                    int64_t rcx_27 = *(arg1 + 0xb0)
                    *(rcx_27 + r8_5 + 0x30) = *(rdi_1 + rcx_27 + 0x30) + 1
                    *(*(arg1 + 0xb0) + r9_2 + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x30)
                    *(*(arg1 + 0xb0) + r8_5 + 0x34) = *(r10_1 + *(arg1 + 0x28) + 0x34)
                    int64_t r13_2 = sx.q(*(arg1 + 0x98))
                    int32_t rax_57 = (r13_2 + 1).d
                    *(arg1 + 0x98) = rax_57
                    
                    if (rax_57 s> *(arg1 + 0x9c))
                        sub_1405a4cf0(arg1 + 0x90)
                    
                    *(*(arg1 + 0x90) + (r13_2 << 2)) = rsi_8.d
                    int64_t rsi_9 = sx.q(*(arg1 + 0x98))
                    int32_t rax_59 = (rsi_9 + 1).d
                    *(arg1 + 0x98) = rax_59
                    
                    if (rax_59 s> *(arg1 + 0x9c))
                        sub_1405a4cf0(arg1 + 0x90)
                    
                    *(*(arg1 + 0x90) + (rsi_9 << 2)) = r12_3.d
                    sub_14172ebf0(arg1 + 0x28, 
                        *(arg_10.q + *(arg1 + 0x28) + 0x34) - *(arg1 + 0x30) + 1)
                    result = *(arg1 + 0xb0)
                    *(rdi_1 + result) = 2
        else
            *(arg1 + 0x98) = (r8_1 - 1).d
            result = sub_14173ba50(arg1, rsi_1.d)
        
        r10 = arg_8
    while (*(arg1 + 0x98) != 0)

*(arg1 + 9) = 1
return result
