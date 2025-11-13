// 函数: sub_141c37d40
// 地址: 0x141c37d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = *arg1
int32_t* rdi = arg1
char r9 = r13.b
int32_t i_1
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]

if ((r13.b & 1) == 0)
    zmm6 = sub_141c43e30(arg1, arg2, arg3, r9)
    i_1 = 2
else
    zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_141c446a0(arg1, arg2, arg3, r9)
    i_1 = 3

int32_t i_2 = i_1
float var_48[0x4] = zmm6
int32_t i = i_1

if (i_1 s< r13 - 4)
    zmm6 = data_142d3f7c0
    
    do
        uint64_t r8 = zx.q(1 << (r13.b - i.b - 2))
        
        if (r8.d s> 0)
            int64_t rdx = sx.q((r8 << 2).d)
            int64_t r9_2 = sx.q((r8 * 2).d) - rdx
            int64_t r10_4 = sx.q((r8 * 3).d * 2) - rdx
            void* rcx_3 = arg3 + (rdx << 2)
            int64_t rdx_1 = neg.q(rdx)
            uint64_t j_2 = zx.q(((r8.d - 1) u>> 1) + 1)
            uint64_t j
            
            do
                float zmm4_1[0x4] = *(rcx_3 + (r9_2 << 2))
                float zmm5_1[0x4] = *(rcx_3 + (rdx_1 << 2))
                float zmm3_1[0x4] = *rcx_3
                float temp0_1[0x4] = _mm_add_ps(*(rcx_3 + (r10_4 << 2)), zmm4_1)
                float temp0_2[0x4] = __subps_xmmps_memps(zmm4_1, *(rcx_3 + (r10_4 << 2)))
                float temp0_3[0x4] = _mm_add_ps(zmm3_1, zmm5_1)
                float temp0_4[0x4] = __subps_xmmps_memps(zmm5_1, *rcx_3)
                float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm6)
                float temp0_6[0x4] = _mm_add_ps(temp0_1, temp0_3)
                float temp0_7[0x4] = _mm_sub_ps(temp0_3, temp0_1)
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xb1)
                *(rcx_3 + (rdx_1 << 2)) = temp0_6
                *(rcx_3 + (r9_2 << 2)) = temp0_7
                float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_4)
                float temp0_10[0x4] = _mm_sub_ps(temp0_4, temp0_8)
                *rcx_3 = temp0_9
                *(rcx_3 + (r10_4 << 2)) = temp0_10
                rcx_3 += 0x10
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        i += 2
    while (i s< r13 - 4)

int32_t r14 = 1

if (i_1 s< r13 - 4)
    float var_58_1[0x4] = zmm7
    float var_68_1[0x4] = zmm8
    float var_78_1[0x4] = zmm9
    float var_88_1[0x4] = zmm10
    float var_98_1[0x4] = zmm11
    float var_a8_1[0x4] = zmm12
    float var_b8_1[0x4] = zmm13
    int32_t rdx_2 = rol.d(1, i_1.b)
    float var_c8_1[0x4] = zmm14
    float var_d8_1[0x4] = zmm15
    int32_t var_e8_1 = rdx_2
    
    do
        if (r14 s< rdx_2)
            int64_t rbp_1 = sx.q(r14) * 0xb0
            
            do
                int32_t j_1 = i_1
                
                if (i_1 s< r13 - 4)
                    int128_t* r9_3 = *(rdi + 0x10)
                    zmm7 = *(r9_3 + rbp_1)
                    zmm8 = *(r9_3 + rbp_1 + 0x40)
                    zmm9 = *(r9_3 + rbp_1 + 0x50)
                    zmm10 = *(r9_3 + rbp_1 + 0x70)
                    zmm11 = *(r9_3 + rbp_1 + 0x80)
                    zmm12 = *(r9_3 + rbp_1 + 0xa0)
                    zmm13 = *(r9_3 + rbp_1 + 0x90)
                    zmm14 = *(r9_3 + rbp_1 + 0x60)
                    zmm15 = *(r9_3 + rbp_1 + 0x10)
                    
                    do
                        char rax_5 = r13.b - j_1.b
                        uint64_t r10_5 = zx.q(1 << (rax_5 - 2))
                        
                        if (r10_5.d s> 0)
                            int32_t rdx_4 = r14 << rax_5
                            int64_t r8_3 = sx.q(rdx_4 * 2)
                            void* rsi_1 = arg3 + (r8_3 << 2)
                            int64_t rbx_1 = sx.q((r10_5.d + rdx_4) * 2) - r8_3
                            int64_t rdi_2 = sx.q((rdx_4 + (r10_5 << 1).d) * 2) - r8_3
                            int64_t rdx_6 = sx.q((rdx_4 + (r10_5 << 1).d + r10_5.d) * 2) - r8_3
                            uint64_t k_1 = zx.q(((r10_5 - 1).d u>> 1) + 1)
                            uint64_t k
                            
                            do
                                float zmm2_1[0x4] = *(rsi_1 + (rdx_6 << 2))
                                float zmm1[0x4] = *(rsi_1 + (rdi_2 << 2))
                                float zmm0_1[0x4] = *(rsi_1 + (rbx_1 << 2))
                                float temp0_11[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
                                float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xb1)
                                float temp0_13[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xb1)
                                float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm12)
                                float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm10)
                                float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm8)
                                float temp0_17[0x4] = _mm_add_ps(temp0_14, zmm2_1)
                                float temp0_18[0x4] = _mm_add_ps(temp0_15, zmm1)
                                float temp0_19[0x4] = _mm_add_ps(temp0_16, zmm0_1)
                                float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm13)
                                float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm11)
                                float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm9)
                                float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_19)
                                float temp0_24[0x4] = _mm_mul_ps(temp0_18, zmm14)
                                float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_19)
                                float temp0_26[0x4] = __addps_xmmps_memps(temp0_22, *rsi_1)
                                float temp0_27[0x4] = __addps_xmmps_memps(temp0_24, *rsi_1)
                                float temp0_28[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xb1)
                                float temp0_29[0x4] = _mm_mul_ps(temp0_25, zmm15)
                                float temp0_30[0x4] = _mm_mul_ps(temp0_25, zmm7)
                                float temp0_31[0x4] = _mm_add_ps(temp0_29, temp0_26)
                                *rsi_1 = _mm_add_ps(temp0_30, temp0_26)
                                float temp0_33[0x4] =
                                    __mulps_xmmps_memps(temp0_28, *(r9_3 + rbp_1 + 0x20))
                                float temp0_34[0x4] =
                                    __mulps_xmmps_memps(temp0_28, *(r9_3 + rbp_1 + 0x30))
                                *(rsi_1 + (rbx_1 << 2)) = temp0_31
                                float temp0_35[0x4] = _mm_add_ps(temp0_33, temp0_27)
                                float temp0_36[0x4] = _mm_add_ps(temp0_34, temp0_27)
                                *(rsi_1 + (rdi_2 << 2)) = temp0_35
                                *(rsi_1 + (rdx_6 << 2)) = temp0_36
                                rsi_1 += 0x10
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                        
                        j_1 += 2
                    while (j_1 s< r13 - 4)
                    
                    i_1 = i_2
                    rdx_2 = var_e8_1
                    rdi = arg1
                
                r14 += 1
                rbp_1 += 0xb0
            while (r14 s< rdx_2)
        
        i_1 += 2
        rdx_2 = rol.d(rdx_2, 2)
        i_2 = i_1
        var_e8_1 = rdx_2
    while (i_1 s< r13 - 4)

if (i_1 s< r13 - 2)
    sub_141c43c50(rdi, arg3, (r13 - 4).b)

return sub_141c43f60(rdi, arg3, (r13 - 2).b) __tailcall
