// 函数: sub_140280090
// 地址: 0x140280090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
uint16_t var_68[0x8] = arg16
uint128_t var_78 = arg15[0]
int128_t var_88 = arg14.o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
uint64_t zmm9[0x2]
uint64_t var_b8[0x2] = zmm9
int128_t var_c8 = arg11[0].o
int128_t var_d8 = arg10[0].o
int128_t var_e8 = arg9[0].o
int64_t r10 = sx.q(arg33)
uint32_t r14 = arg34
uint64_t zmm30[0x4]
zmm30[0].o = _mm_mask_load_ss(arg5, arg31)
uint32_t rsi_1 = *(&data_143442dc0 + (r10 << 2)) * *(&data_143442da0 + (r10 << 2))
int32_t r11 = arg30
int32_t r15_4 = ((r14 s>> 0x1f u>> 0x1d) + r14) & 0xfffffff8
uint16_t* var_540 = arg4
int64_t var_530 = r10
uint32_t var_524 = rsi_1
uint32_t r13
float zmm0[0x8]
uint32_t zmm1[0x8]
int64_t zmm5[0x4]
uint32_t zmm23[0x8]
uint64_t zmm28[0x4]
uint32_t zmm31[0x8]

if (r15_4 s<= 0)
    r13 = 0
    
    if (0 s< r14)
    label_1402821b3:
        arg28 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, r13), data_142fc93a0)
        zmm23 = _mm256_mask_set1_epi32(arg5, r14)
        uint64_t k1_33 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm23, arg28)
        zmm0 = _mm256_mask_slli_epi32(arg5, arg28, 3)
        int64_t k2_53
        char temp0_688
        temp0_688, k2_53 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg2 + zmm0[0].q))
        arg12 = temp0_688
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_55
        char temp0_691
        temp0_691, k2_55 = _mm256_mmask_i32gather_epi32(k2_54, *(arg2 + (zmm0 | zmm1)[0].q))
        arg6 = temp0_691
        zmm0 = _mm256_slli_epi32(arg6, 4)
        int64_t k2_56 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
        int64_t k2_57
        char temp0_694
        temp0_694, k2_57 = _mm256_mmask_i32gather_epi32(k2_56, *(arg3 + zmm0[0].q))
        arg29 = temp0_694
        zmm0 |= zmm1
        int64_t k2_59
        char temp0_695
        temp0_695, k2_59 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + zmm0[0].q))
        zmm1 = temp0_695
        uint32_t r12_3 = _cvtmask32_u32(k1_33)
        arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
        arg24 = _mm256_mask_set1_epi32(arg5, var_524)
        int64_t k2_60 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm1, 2, 1)
        zmm0[0].o = zx.o(0)
        uint32_t rcx_145
        rcx_145.b = zx.o(0) f>= zmm30[0].o
        rcx_145.b = neg.b(rcx_145.b)
        zmm28[0].o = _mm_mask_set1_epi8(arg5, rcx_145)
        zmm0[0].o = data_142fc92e0
        zmm28[0].o = _mm_mask_mov_epi16(k2_60, zmm0[0].o)
        zmm0[0].o = _mm_mask_xor_epi64(arg5, zmm28[0].o, zmm0[0].o)
        zmm9 = _mm_mask_mov_epi16(k1_33, zmm0[0].o)
        int64_t k3_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm9, data_142fc92e0)
        _kortest_mask8_u8(k3_21, k3_21)
        
        if (rcx_145.b == 0)
            arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
            arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
        else
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            arg19 = _mm256_mask_add_epi32(arg5, zmm1, arg6)
            
            if (zmm30[0].o f>= 1f)
                arg21 = _mm256_mask_mov_epi32(k3_21, arg19)
                arg23 = _mm256_mask_mov_epi64(arg5, arg21)
            else
                arg6[0].o = zx.o(arg4)
                arg7 = _mm256_mask_cvtepi32_epi64(arg5, arg29[0].o)
                arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg29, 1)
                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                zmm1 = _mm256_mask_mullo_epi32(arg5, zmm1, arg24)
                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg10[0].o = 3
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg10[0].o)
                arg6 = _mm256_broadcastq_epi64(arg6[0].q)
                arg8 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg8), zmm5)
                zmm1 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg7), zmm1)
                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                arg18 = _mm256_mask_and_epi64(arg5, arg8, arg6)
                arg20 = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                char temp0_721 = _cvtmask32_u32(k3_21)
                int32_t rdi_39 = r11 - 2
                zmm1 = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
                arg6 = _mm256_mask_cvtepi32_ps(arg5, arg19)
                zmm1 = _mm256_mul_ps(zmm1, arg6)
                arg6[0].o = arg21[0].o
                arg6[0] = float.s(r11 - 1)
                arg22[0].o = _mm_mask_mul_round_ss(arg5, arg6[0].o, zmm30[0].o)
                int32_t rbx_25 = int.d(arg22[0].o) s>> 0x1f
                int32_t rbx_26 = rbx_25 & not.d(rbx_25)
                
                if (rdi_39 s> rbx_26)
                    rdi_39 = rbx_26
                
                zmm1 = _mm256_cvttps_epi32(zmm1)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                arg21 = _mm256_mask_min_epi32(arg5, _mm256_max_epi32(zmm1, arg6), arg19)
                
                if (r11 s< 0x100)
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg21[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_140282a27
                        
                        goto label_140282684
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_140282a27:
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 1)
                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_140282694
                        
                        goto label_140282a3f
                    
                label_140282684:
                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_140282694:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_140282a60
                        
                        goto label_1402826a2
                    
                label_140282a3f:
                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg8[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_140282a60:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_1402826b1
                        
                        goto label_140282a8b
                    
                label_1402826a2:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_721 & 0x10) != 0)
                    label_140282a8b:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_721 & 0x20) != 0)
                        label_140282a9f:
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 5)
                            
                            if ((temp0_721 & 0x40) == 0)
                                goto label_1402826c3
                            
                            goto label_140282ab0
                    else
                    label_1402826b1:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_140282a9f
                    
                    bool cond:11_1
                    bool cond:13_1
                    bool cond:14_1
                    bool cond:19_1
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_140282ab0:
                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg7[0]), 6)
                        cond:11_1 = temp0_721 == 0
                        cond:13_1 = temp0_721 == 0
                        cond:14_1 = temp0_721 == 0
                        cond:19_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                        label_140282acc:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 7)
                    else
                    label_1402826c3:
                        cond:11_1 = temp0_721 == 0
                        cond:13_1 = temp0_721 == 0
                        cond:14_1 = temp0_721 == 0
                        cond:19_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                            goto label_140282acc
                    
                    arg10[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm1[0].o &= arg10[0].o
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg23 = _mm256_mask_set1_epi32(arg5, rdi_39)
                    int64_t k4_4 = _mm256_cmp_epi32_mask(arg5, arg23, zmm1, 5)
                    arg25[0].o = _mm_movm_epi16(k4_4)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm9, arg25[0].o)
                    int64_t k0_4 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg10[0].o)
                    _kortest_mask8_u8(k0_4, k0_4)
                    arg26 = _mm256_mask_mov_epi64(k0_4, arg21)
                    
                    if (not(cond:11_1))
                        arg27 = _mm256_mask_blend_epi32(k4_4, arg21, arg19)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        zmm31 = _mm256_mask_sub_epi32(k0_4, arg21, arg11)
                        int64_t k0_5 = _mm256_cmp_epi32_mask(k4_4, zmm31, arg19, 2)
                        arg8[0].o = _mm_movm_epi16(k0_5)
                        arg7[0].o = zmm9 & arg8[0].o
                        k0_4 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_5, arg7[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_4, k0_4)
                        
                        if (cond:14_1)
                            arg26 = _mm256_mask_mov_epi64(k0_4, arg27)
                        else
                            char rdi_41 = _cvtmask32_u32(k0_4)
                            zmm30[0].o = _mm_mask_load_epi64(k0_4, data_142fc92e0)
                            zmm5 = _mm256_mask_mov_epi64(k0_4, arg21)
                            bool cond:29_1
                            
                            do
                                zmm1 = _mm256_mask_mov_epi64(k0_4, zmm31)
                                arg26 = _mm256_mask_add_epi64(k0_4, arg20, 
                                    _mm256_mask_cvtepi32_epi64(k0_4, zmm1[0].o))
                                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_4, arg7[0].o, zmm30[0].o)
                                char temp0_822 = _cvtmask32_u32(k0_6)
                                
                                if ((temp0_822 & 1) == 0)
                                    if ((temp0_822 & 2) != 0)
                                        goto label_14028277f
                                    
                                    goto label_140282883
                                
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg26[0].o), 0)
                                
                                if ((temp0_822 & 2) != 0)
                                label_14028277f:
                                    uint32_t rdx_23 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_23, 1)
                                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_822 & 4) == 0)
                                        goto label_140282893
                                    
                                    goto label_140282797
                                
                            label_140282883:
                                arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                
                                if ((temp0_822 & 4) == 0)
                                label_140282893:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_822 & 8) != 0)
                                        goto label_1402827ba
                                    
                                    goto label_1402828a2
                                
                            label_140282797:
                                arg9[0].o = _mm256_extracti32x4_epi32(k0_6, arg26, 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg9[0].q), 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_822 & 8) != 0)
                                label_1402827ba:
                                    arg9[0].o = _mm256_extracti32x4_epi32(k0_6, arg26, 1)
                                    uint32_t rdx_27 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_27, 3)
                                    arg26 = _mm256_mask_add_epi64(k0_6, arg18, arg7)
                                    
                                    if ((temp0_822 & 0x10) == 0)
                                        goto label_1402828b2
                                    
                                    goto label_1402827e8
                                
                            label_1402828a2:
                                arg26 = _mm256_mask_add_epi64(k0_6, arg18, arg7)
                                
                                if ((temp0_822 & 0x10) == 0)
                                label_1402828b2:
                                    
                                    if ((temp0_822 & 0x20) != 0)
                                        goto label_1402827fe
                                    
                                    goto label_1402828bc
                                
                            label_1402827e8:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg26[0].o), 4)
                                
                                if ((temp0_822 & 0x20) != 0)
                                label_1402827fe:
                                    uint32_t rdx_31 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_31, 5)
                                    
                                    if ((temp0_822 & 0x40) == 0)
                                        goto label_1402828c6
                                    
                                    goto label_140282810
                                
                            label_1402828bc:
                                
                                if ((temp0_822 & 0x40) != 0)
                                label_140282810:
                                    arg7[0].o = _mm256_extracti32x4_epi32(k0_6, arg26, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg7[0]), 6)
                                    
                                    if (temp0_822 s< 0)
                                    label_14028282d:
                                        arg7[0].o = _mm256_extracti32x4_epi32(k0_6, arg26, 1)
                                        uint32_t rdx_35 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_35, 7)
                                else
                                label_1402828c6:
                                    
                                    if (temp0_822 s< 0)
                                        goto label_14028282d
                                
                                arg7[0].o = arg6[0].o & arg10[0].o
                                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_6, arg7, 
                                        arg23), 
                                    arg8[0].o)
                                arg7[0].o = zx.o(0)
                                int64_t k5_5 =
                                    _mm_mask_testn_epi16_mask(k0_6, arg9[0].o, arg10[0].o)
                                zmm0[0].o = arg9[0].o & zmm9
                                int64_t k0_7 = _mm_mask_test_epi16_mask(k0_6, zmm0[0].o, arg10[0].o)
                                arg2 = zx.q(_cvtmask32_u32(k0_7))
                                cond:13_1 = rdi_41 == arg2.b
                                cond:19_1 = rdi_41 == arg2.b
                                cond:29_1 = rdi_41 != arg2.b
                                
                                if (rdi_41 != arg2.b)
                                    arg7[0].o = arg9[0].o ^ arg8[0].o
                                
                                _mm256_mask_mov_epi64(k0_7, zmm5)
                                arg26 = _mm256_mask_mov_epi32(k5_5, arg27)
                                zmm31 = _mm256_mask_sub_epi32(k0_7, zmm1, arg11)
                                arg8[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_7, zmm31, arg19, 2), arg7[0].o)
                                arg7[0].o = arg8[0].o & zmm9
                                k0_4 = _mm_mask_test_epi16_mask(k0_7, arg7[0].o, arg10[0].o)
                                _kortest_mask8_u8(k0_4, k0_4)
                                rdi_41 = _cvtmask32_u32(k0_4)
                                zmm5 = zmm1
                                arg27 = _mm256_mask_mov_epi64(k0_4, arg26)
                            while (cond:29_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_4, arg25[0].o, 
                        data_142fc92e0)
                    arg6[0].o = zmm9 & zmm1[0].o
                    int64_t k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_4, 
                        arg6[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_11, k0_11)
                    
                    if (not(cond:13_1))
                        arg7 = _mm256_mask_mov_epi32(k4_4, arg26)
                        arg8[0].o = zx.o(0)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        arg21 = _mm256_mask_add_epi32(k0_11, arg21, arg11)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg21, arg8), 
                            zmm1[0].o)
                        arg6[0].o = zmm5[0].o & zmm9
                        k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_11, arg6[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_11, k0_11)
                        
                        if (cond:19_1)
                            arg26 = _mm256_mask_mov_epi64(k0_11, arg7)
                        else
                            char rdi_43 = _cvtmask32_u32(k0_11)
                            arg27[0].o = _mm_mask_load_epi64(k0_11, data_142fc92e0)
                            bool cond:31_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg21[0].o)
                                arg25 = _mm256_mask_add_epi64(k0_11, arg20, zmm0)
                                int64_t k0_12 =
                                    _mm_mask_test_epi16_mask(k0_11, arg6[0].o, arg27[0].o)
                                char temp0_930 = _cvtmask32_u32(k0_12)
                                
                                if ((temp0_930 & 1) == 0)
                                    if ((temp0_930 & 2) != 0)
                                        goto label_140282dcf
                                    
                                    goto label_140282ecd
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg25[0].o), 0)
                                
                                if ((temp0_930 & 2) != 0)
                                label_140282dcf:
                                    uint32_t rdx_56 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_56, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                    
                                    if ((temp0_930 & 4) == 0)
                                        goto label_140282ede
                                    
                                    goto label_140282de8
                                
                            label_140282ecd:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                
                                if ((temp0_930 & 4) == 0)
                                label_140282ede:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_930 & 8) != 0)
                                        goto label_140282e0b
                                    
                                    goto label_140282eed
                                
                            label_140282de8:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg25, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_930 & 8) != 0)
                                label_140282e0b:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg25, 1)
                                    uint32_t rdx_60 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_60, 3)
                                    arg25 = _mm256_mask_add_epi64(k0_12, arg18, arg6)
                                    
                                    if ((temp0_930 & 0x10) == 0)
                                        goto label_140282efd
                                    
                                    goto label_140282e39
                                
                            label_140282eed:
                                arg25 = _mm256_mask_add_epi64(k0_12, arg18, arg6)
                                
                                if ((temp0_930 & 0x10) == 0)
                                label_140282efd:
                                    
                                    if ((temp0_930 & 0x20) != 0)
                                        goto label_140282e4f
                                    
                                    goto label_140282f07
                                
                            label_140282e39:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg25[0].o), 4)
                                
                                if ((temp0_930 & 0x20) != 0)
                                label_140282e4f:
                                    uint32_t rdx_64 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_64, 5)
                                    
                                    if ((temp0_930 & 0x40) == 0)
                                        goto label_140282f11
                                    
                                    goto label_140282e61
                                
                            label_140282f07:
                                
                                if ((temp0_930 & 0x40) != 0)
                                label_140282e61:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg25, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_930 s< 0)
                                    label_140282e7e:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg25, 1)
                                        uint32_t rdx_68 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_68, 7)
                                else
                                label_140282f11:
                                    
                                    if (temp0_930 s< 0)
                                        goto label_140282e7e
                                
                                zmm0[0].o = zmm1[0].o & arg10[0].o
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_12, arg23, zmm0, 5), zmm5[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k4_11 =
                                    _mm_mask_testn_epi16_mask(k0_12, arg9[0].o, arg10[0].o)
                                zmm0[0].o = arg9[0].o & zmm9
                                int64_t k0_13 =
                                    _mm_mask_test_epi16_mask(k0_12, zmm0[0].o, arg10[0].o)
                                arg2 = zx.q(_cvtmask32_u32(k0_13))
                                cond:31_1 = rdi_43 != arg2.b
                                
                                if (rdi_43 != arg2.b)
                                    arg6[0].o = arg9[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_13, arg21)
                                arg21 = _mm256_mask_add_epi32(k0_13, arg21, arg11)
                                arg26 = _mm256_mask_mov_epi32(k4_11, arg7)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_13, arg21, 
                                        arg8), 
                                    arg6[0].o)
                                arg6[0].o = zmm5[0].o & zmm9
                                k0_11 = _mm_mask_test_epi16_mask(k0_13, arg6[0].o, arg10[0].o)
                                _kortest_mask8_u8(k0_11, k0_11)
                                rdi_43 = _cvtmask32_u32(k0_11)
                                arg7 = _mm256_mask_mov_epi64(k0_11, arg26)
                            while (cond:31_1)
                    
                    arg21 = _mm256_mask_mov_epi32(k3_21, arg26)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg21[0].o)
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg20, zmm0)
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_140283e85
                        
                        goto label_140283281
                    
                    arg8[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_140283e85:
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, arg2.d, 1)
                        arg6[0].o = _mm256_extracti32x4_epi32(k0_11, arg21, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_140283291
                        
                        goto label_140283e9d
                    
                label_140283281:
                    arg6[0].o = _mm256_extracti32x4_epi32(k0_11, arg21, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_140283291:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_140283ebe
                        
                        goto label_14028329f
                    
                label_140283e9d:
                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_140283ebe:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, arg2.d, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_11, arg18, arg6)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_1402832ae
                        
                        goto label_140283ee9
                    
                label_14028329f:
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg18, arg6)
                    
                    if ((temp0_721 & 0x10) != 0)
                    label_140283ee9:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm1[0].q), 4)
                        
                        if ((temp0_721 & 0x20) != 0)
                        label_140283efd:
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, arg2.d, 5)
                            
                            if ((temp0_721 & 0x40) == 0)
                                goto label_1402832c0
                            
                            goto label_140283f0e
                    else
                    label_1402832ae:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_140283efd
                    
                    bool cond:27_1
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_140283f0e:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 6)
                        cond:27_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                        label_140283f2a:
                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, arg2.d, 7)
                    else
                    label_1402832c0:
                        cond:27_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                            goto label_140283f2a
                    
                    arg23 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_11, zmm9, arg10[0].o), arg26, 
                        _mm256_cmpeq_epi32(zmm0, zmm0))
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg23, arg19), 
                        zmm9)
                    arg5 = _mm_mask_test_epi16_mask(k0_11, zmm1[0].o, arg10[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:27_1))
                        arg19 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg10[0].o), arg23)
                        arg23 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg23[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg20, zmm0)
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_140283f5c
                        
                        goto label_140283321
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_140283f5c:
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 1)
                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_140283331
                        
                        goto label_140283f74
                    
                label_140283321:
                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_140283331:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_140283f95
                        
                        goto label_14028333f
                    
                label_140283f74:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_140283f95:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_14028334e
                        
                        goto label_140283fc0
                    
                label_14028333f:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_721 & 0x10) != 0)
                    label_140283fc0:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_721 & 0x20) != 0)
                        label_140283fd4:
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 5)
                            
                            if ((temp0_721 & 0x40) == 0)
                                goto label_140283360
                            
                            goto label_140283fe5
                    else
                    label_14028334e:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_140283fd4
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_140283fe5:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 6)
                        arg7[0].o = arg8[0].o & arg10[0].o
                        
                        if (temp0_721 s< 0)
                        label_140284005:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg2 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, arg2.d, 7)
                    else
                    label_140283360:
                        arg7[0].o = arg8[0].o & arg10[0].o
                        
                        if (temp0_721 s< 0)
                            goto label_140284005
                    
                    arg6 = _mm256_cvtepu16_epi32(arg7[0].o)
                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                    label_140283390:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(zmm1, arg6), 1)
                        zmm1 = _mm256_mask_broadcastss_ps(arg5, arg22[0].o)
                        arg6 = _mm256_cvtepi32_ps(arg6)
                        zmm1 = _mm256_sub_ps(zmm1, arg6)
                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                        arg7 = _mm256_div_ps(zmm1, zmm0)
                else
                    arg7 = _mm256_mask_add_epi32(arg5, arg21, arg21)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_140282960
                        
                        goto label_14028238e
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_140282960:
                        int64_t rsi_27 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rsi_27, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_14028239d
                        
                        goto label_14028297a
                    
                label_14028238e:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_14028239d:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_140282998
                        
                        goto label_1402823ab
                    
                label_14028297a:
                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg8[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_140282998:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rsi_29 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rsi_29, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_1402823ba
                        
                        goto label_1402829bd
                    
                label_1402823ab:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_721 & 0x10) != 0)
                    label_1402829bd:
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_721 & 0x20) != 0)
                        label_1402829cb:
                            int64_t rsi_31 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rsi_31, 5)
                            
                            if ((temp0_721 & 0x40) == 0)
                                goto label_1402823cc
                            
                            goto label_1402829df
                    else
                    label_1402823ba:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_1402829cb
                    
                    bool cond:12_1
                    bool cond:15_1
                    bool cond:16_1
                    bool cond:20_1
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_1402829df:
                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg7[0], 6)
                        cond:12_1 = temp0_721 == 0
                        cond:15_1 = temp0_721 == 0
                        cond:16_1 = temp0_721 == 0
                        cond:20_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                        label_1402829f8:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rsi_33 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rsi_33, 7)
                    else
                    label_1402823cc:
                        cond:12_1 = temp0_721 == 0
                        cond:15_1 = temp0_721 == 0
                        cond:16_1 = temp0_721 == 0
                        cond:20_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                            goto label_1402829f8
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg23 = _mm256_mask_set1_epi32(arg5, rdi_39)
                    int64_t k4_3 = _mm256_cmp_epi32_mask(arg5, arg23, zmm1, 5)
                    arg25[0].o = _mm_movm_epi16(k4_3)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm9, arg25[0].o)
                    int64_t k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0, k0)
                    arg6 = _mm256_mask_mov_epi64(k0, arg21)
                    
                    if (not(cond:12_1))
                        arg26 = _mm256_mask_blend_epi32(k4_3, arg21, arg19)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg11 = _mm256_mask_sub_epi32(k0, arg21, arg10)
                        int64_t k0_1 = _mm256_cmp_epi32_mask(k4_3, arg11, arg19, 2)
                        zmm5[0].o = _mm_movm_epi16(k0_1)
                        arg7[0].o = zmm9 & zmm5[0].o
                        k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_1, arg7[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (cond:16_1)
                            arg6 = _mm256_mask_mov_epi64(k0, arg26)
                        else
                            char rdi_40 = _cvtmask32_u32(k0)
                            zmm31[0].o = _mm_mask_load_epi64(k0, data_142fc92e0)
                            arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            zmm30 = _mm256_mask_mov_epi64(k0, arg21)
                            bool cond:30_1
                            
                            do
                                arg27 = _mm256_mask_mov_epi64(k0, arg11)
                                arg11 = _mm256_add_epi32(arg11, arg11)
                                arg6 = _mm256_mask_add_epi64(k0, arg20, 
                                    _mm256_cvtepi32_epi64(arg11[0].o))
                                int64_t k0_2 = _mm_mask_test_epi16_mask(k0, arg7[0].o, zmm31[0].o)
                                char temp0_768 = _cvtmask32_u32(k0_2)
                                
                                if ((temp0_768 & 1) == 0)
                                    if ((temp0_768 & 2) != 0)
                                        goto label_140282484
                                    
                                    goto label_140282578
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 0)
                                
                                if ((temp0_768 & 2) != 0)
                                label_140282484:
                                    int64_t rdx_13 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_13, 1)
                                    arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                    
                                    if ((temp0_768 & 4) == 0)
                                        goto label_140282588
                                    
                                    goto label_14028249f
                                
                            label_140282578:
                                arg7[0].o = _mm256_extracti128_si256(arg11, 1)
                                
                                if ((temp0_768 & 4) == 0)
                                label_140282588:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_768 & 8) != 0)
                                        goto label_1402824be
                                    
                                    goto label_140282597
                                
                            label_14028249f:
                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg9[0].q, 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_768 & 8) != 0)
                                label_1402824be:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rdx_15 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_15, 3)
                                    arg6 = _mm256_mask_add_epi64(k0_2, arg18, arg7)
                                    
                                    if ((temp0_768 & 0x10) == 0)
                                        goto label_1402825a7
                                    
                                    goto label_1402824e4
                                
                            label_140282597:
                                arg6 = _mm256_mask_add_epi64(k0_2, arg18, arg7)
                                
                                if ((temp0_768 & 0x10) == 0)
                                label_1402825a7:
                                    
                                    if ((temp0_768 & 0x20) != 0)
                                        goto label_1402824f3
                                    
                                    goto label_1402825b1
                                
                            label_1402824e4:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                                
                                if ((temp0_768 & 0x20) != 0)
                                label_1402824f3:
                                    int64_t rdx_17 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_17, 5)
                                    
                                    if ((temp0_768 & 0x40) == 0)
                                        goto label_1402825bb
                                    
                                    goto label_140282508
                                
                            label_1402825b1:
                                
                                if ((temp0_768 & 0x40) != 0)
                                label_140282508:
                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg7[0], 6)
                                    
                                    if (temp0_768 s< 0)
                                    label_140282521:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        int64_t rdx_19 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_19, 7)
                                else
                                label_1402825bb:
                                    
                                    if (temp0_768 s< 0)
                                        goto label_140282521
                                
                                arg6 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_2, arg6, 
                                        arg23), 
                                    zmm5[0].o)
                                arg7[0].o = zx.o(0)
                                int64_t k5_2 = _mm_mask_testn_epi16_mask(k0_2, arg6[0].o, arg8[0].o)
                                arg9[0].o = arg6[0].o & zmm9
                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_2, arg9[0].o, arg8[0].o)
                                arg2 = zx.q(_cvtmask32_u32(k0_3))
                                cond:15_1 = rdi_40 == arg2.b
                                cond:20_1 = rdi_40 == arg2.b
                                cond:30_1 = rdi_40 != arg2.b
                                
                                if (rdi_40 != arg2.b)
                                    arg7[0].o = arg6[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_3, zmm30)
                                arg6 = _mm256_mask_mov_epi32(k5_2, arg26)
                                arg11 = _mm256_mask_sub_epi32(k0_3, arg27, arg10)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_3, arg11, arg19, 2), arg7[0].o)
                                arg7[0].o = zmm5[0].o & zmm9
                                k0 = _mm_mask_test_epi16_mask(k0_3, arg7[0].o, arg8[0].o)
                                _kortest_mask8_u8(k0, k0)
                                rdi_40 = _cvtmask32_u32(k0)
                                zmm30 = _mm256_mask_mov_epi64(k0, arg27)
                                arg26 = _mm256_mask_mov_epi64(k0, arg6)
                            while (cond:30_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0, arg25[0].o, 
                        data_142fc92e0)
                    arg7[0].o = zmm9 & zmm1[0].o
                    int64_t k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, arg7[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0_8, k0_8)
                    
                    if (not(cond:15_1))
                        arg7 = _mm256_mask_mov_epi32(k4_3, arg6)
                        arg26[0].o = _mm_mask_xor_epi32(k0_8, arg26[0].o, arg26[0].o)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        arg25 = _mm256_mask_add_epi32(k0_8, arg21, arg11)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg25, arg26), 
                            zmm1[0].o)
                        arg10[0].o = zmm5[0].o & zmm9
                        k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_8, arg10[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_8, k0_8)
                        
                        if (cond:20_1)
                            arg6 = arg7
                        else
                            char rdi_42 = _cvtmask32_u32(k0_8)
                            arg21[0].o = _mm_mask_load_epi64(k0_8, data_142fc92e0)
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            bool cond:32_1
                            
                            do
                                arg27 = _mm256_mask_add_epi32(k0_8, arg25, arg25)
                                arg6 = _mm256_mask_add_epi64(k0_8, arg20, 
                                    _mm256_mask_cvtepi32_epi64(k0_8, arg27[0].o))
                                int64_t k0_9 =
                                    _mm_mask_test_epi16_mask(k0_8, arg10[0].o, arg21[0].o)
                                char temp0_893 = _cvtmask32_u32(k0_9)
                                
                                if ((temp0_893 & 1) == 0)
                                    if ((temp0_893 & 2) != 0)
                                        goto label_140282b84
                                    
                                    goto label_140282c73
                                
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 0)
                                
                                if ((temp0_893 & 2) != 0)
                                label_140282b84:
                                    int64_t rdx_45 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_45, 1)
                                    arg10[0].o = _mm256_extracti32x4_epi32(k0_9, arg27, 1)
                                    
                                    if ((temp0_893 & 4) == 0)
                                        goto label_140282c84
                                    
                                    goto label_140282ba0
                                
                            label_140282c73:
                                arg10[0].o = _mm256_extracti32x4_epi32(k0_9, arg27, 1)
                                
                                if ((temp0_893 & 4) == 0)
                                label_140282c84:
                                    arg27 = _mm256_mask_cvtepi32_epi64(k0_9, arg10[0].o)
                                    
                                    if ((temp0_893 & 8) != 0)
                                        goto label_140282bc0
                                    
                                    goto label_140282c94
                                
                            label_140282ba0:
                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg9[0].q, 2)
                                arg27 = _mm256_mask_cvtepi32_epi64(k0_9, arg10[0].o)
                                
                                if ((temp0_893 & 8) != 0)
                                label_140282bc0:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rdx_47 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_47, 3)
                                    arg6 = _mm256_mask_add_epi64(k0_9, arg18, arg27)
                                    
                                    if ((temp0_893 & 0x10) == 0)
                                        goto label_140282ca4
                                    
                                    goto label_140282be6
                                
                            label_140282c94:
                                arg6 = _mm256_mask_add_epi64(k0_9, arg18, arg27)
                                
                                if ((temp0_893 & 0x10) == 0)
                                label_140282ca4:
                                    
                                    if ((temp0_893 & 0x20) != 0)
                                        goto label_140282bf5
                                    
                                    goto label_140282cae
                                
                            label_140282be6:
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 4)
                                
                                if ((temp0_893 & 0x20) != 0)
                                label_140282bf5:
                                    int64_t rdx_49 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_49, 5)
                                    
                                    if ((temp0_893 & 0x40) == 0)
                                        goto label_140282cb8
                                    
                                    goto label_140282c0a
                                
                            label_140282cae:
                                
                                if ((temp0_893 & 0x40) != 0)
                                label_140282c0a:
                                    arg10[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg10[0].q, 6)
                                    
                                    if (temp0_893 s< 0)
                                    label_140282c23:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        int64_t rdx_51 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_51, 7)
                                else
                                label_140282cb8:
                                    
                                    if (temp0_893 s< 0)
                                        goto label_140282c23
                                
                                arg6 = _mm256_cvtepu16_epi32(arg8[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_9, arg23, arg6, 5), zmm5[0].o)
                                arg10[0].o = zx.o(0)
                                int64_t k4_7 = _mm_mask_testn_epi16_mask(k0_9, arg6[0].o, zmm1[0].o)
                                arg9[0].o = arg6[0].o & zmm9
                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, arg9[0].o, zmm1[0].o)
                                arg2 = zx.q(_cvtmask32_u32(k0_10))
                                cond:32_1 = rdi_42 != arg2.b
                                
                                if (rdi_42 != arg2.b)
                                    arg10[0].o = arg6[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_10, arg25)
                                arg25 = _mm256_mask_add_epi32(k0_10, arg25, arg11)
                                arg6 = _mm256_mask_mov_epi32(k4_7, arg7)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_10, arg25, 
                                        arg26), 
                                    arg10[0].o)
                                arg10[0].o = zmm5[0].o & zmm9
                                k0_8 = _mm_mask_test_epi16_mask(k0_10, arg10[0].o, zmm1[0].o)
                                _kortest_mask8_u8(k0_8, k0_8)
                                rdi_42 = _cvtmask32_u32(k0_8)
                                arg7 = arg6
                            while (cond:32_1)
                    
                    arg21 = _mm256_mask_mov_epi32(k3_21, arg6)
                    arg7 = _mm256_mask_add_epi32(k0_8, arg21, arg21)
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg20, _mm256_cvtepi32_epi64(arg7[0].o))
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_1402830e8
                        
                        goto label_140282fc1
                    
                    arg10[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_1402830e8:
                        arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg2, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_140282fd0
                        
                        goto label_140283102
                    
                label_140282fc1:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_140282fd0:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_140283120
                        
                        goto label_140282fde
                    
                label_140283102:
                    arg8[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg8[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_140283120:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg2, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_8, arg18, arg7)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_140282fed
                        
                        goto label_140283145
                    
                label_140282fde:
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg18, arg7)
                    
                    if ((temp0_721 & 0x10) != 0)
                    label_140283145:
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *zmm1[0].q, 4)
                        
                        if ((temp0_721 & 0x20) != 0)
                        label_140283153:
                            arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg2, 5)
                            
                            if ((temp0_721 & 0x40) == 0)
                                goto label_140282fff
                            
                            goto label_140283167
                    else
                    label_140282fed:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_140283153
                    
                    bool cond:28_1
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_140283167:
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg7[0], 6)
                        cond:28_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                        label_140283180:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg10[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10[0].o, *arg2, 7)
                    else
                    label_140282fff:
                        cond:28_1 = temp0_721 == 0
                        
                        if (temp0_721 s< 0)
                            goto label_140283180
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    arg23 = _mm256_mask_sub_epi32(_mm_mask_test_epi16_mask(k0_8, zmm9, zmm1[0].o), 
                        arg6, _mm256_cmpeq_epi32(arg7, arg7))
                    arg6[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg23, arg19), zmm9)
                    arg5 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:28_1))
                        arg19 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), arg23)
                        arg23 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    arg7 = _mm256_mask_add_epi32(arg5, arg23, arg23)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    
                    if ((temp0_721 & 1) == 0)
                        if ((temp0_721 & 2) != 0)
                            goto label_1402831a9
                        
                        goto label_14028306e
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((temp0_721 & 2) != 0)
                    label_1402831a9:
                        arg2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg2, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_721 & 4) == 0)
                            goto label_14028307d
                        
                        goto label_1402831c3
                    
                label_14028306e:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_721 & 4) == 0)
                    label_14028307d:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_721 & 8) != 0)
                            goto label_1402831e1
                        
                        goto label_14028308b
                    
                label_1402831c3:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_721 & 8) != 0)
                    label_1402831e1:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg2, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_721 & 0x10) == 0)
                            goto label_14028309a
                        
                        goto label_140283206
                    
                label_14028308b:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_721 & 0x10) == 0)
                    label_14028309a:
                        
                        if ((temp0_721 & 0x20) != 0)
                            goto label_140283214
                        
                        goto label_1402830a3
                    
                label_140283206:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                    
                    if ((temp0_721 & 0x20) != 0)
                    label_140283214:
                        arg2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg2, 5)
                        
                        if ((temp0_721 & 0x40) == 0)
                            goto label_1402830ac
                        
                        goto label_140283228
                    
                label_1402830a3:
                    
                    if ((temp0_721 & 0x40) != 0)
                    label_140283228:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_721 s< 0)
                        label_140283241:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            arg2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg2, 7)
                    else
                    label_1402830ac:
                        
                        if (temp0_721 s< 0)
                            goto label_140283241
                    
                    arg6 = _mm256_cvtepu16_epi32(arg10[0].o)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                        goto label_140283390
                
                zmm0[0].o =
                    __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, zmm28[0].o, data_142fc92e0)
                arg18 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    arg7)
        
        arg2.b = r10.d == 3
        arg2.b = neg.b(arg2.b)
        zmm0[0].o = _mm_mask_set1_epi8(arg5, arg2.d)
        int64_t k0_15 = _kor_mask8(k2_60, 
            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0))
        zmm5 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(k0_15), 0x18)
        uint64_t rdx_70 = zx.q(r10.d)
        bool cond:5_1 = r10.d != 6
        uint64_t var_500_1[0x4]
        int32_t var_4e0_1[0x8]
        int64_t var_4c0_1[0x4]
        int64_t k1_35
        
        if (r10.d u> 6)
        label_140283478:
            zmm0[0].o = zx.o(0)
            var_500_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
        label_140283906:
            var_4c0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg21, arg23, 4), zmm23, arg28)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (cond:5_1)
            label_140283721:
                
                if (r10.d u<= 6)
                    _mm256_mask_mullo_epi32(k0_15, arg23, arg24)
                    jump(sx.q(*(&jump_table_140284074 + (rdx_70 << 2))) + &jump_table_140284074)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                float var_420_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                uint32_t var_400_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                float var_3e0_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                arg7 = var_500_1
                arg8 = var_4e0_1
                zmm5 = var_4c0_1
                zmm0 = _mm256_sub_ps(var_420_1, arg7)
                zmm1 = _mm256_sub_ps(var_400_1, arg8)
                arg6 = _mm256_sub_ps(var_3e0_1, zmm5)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, k0_15, arg18, arg7)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_15, arg18, arg8)
                arg6 = _mm256_mask3_fmadd_ps(arg6, k0_15, arg18, zmm5)
                var_500_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                var_4e0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                var_4c0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
        else
            zmm1 = _mm256_mask_mullo_epi32(k0_15, arg21, arg24)
            int64_t rdi_44 = sx.q(jump_table_140284058[rdx_70])
            cond:5_1 = rdi_44 != -0x140284058
            
            switch (rdi_44)
                case -0xc43
                    zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(k0_15, zmm5, arg29), zmm1)
                    uint64_t k2_62 = _cvtu32_mask32(r12_3)
                    int64_t k3_30
                    char temp0_1027
                    temp0_1027, k3_30 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_62), *(arg4 + zmm0[0].q))
                    zmm1 = temp0_1027
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 4)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k3_32
                    char temp0_1030
                    temp0_1030, k3_32 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_62), *(arg4 + arg6[0].q))
                    arg7 = temp0_1030
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 8)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k2_63
                    char temp0_1033
                    temp0_1033, k2_63 = _mm256_mmask_i32gather_ps(k2_62, *(arg4 + zmm0[0].q))
                    arg6 = temp0_1033
                    var_500_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, arg7)
                case -0xbe0
                    goto label_140283478
                case -0xbc7
                    zmm0 = _mm256_mask_add_epi32(k0_15, zmm5, arg29)
                    arg6 = _mm256_add_epi32(zmm0, zmm1)
                    zmm0 = _mm256_mask_add_epi32(k1_33, zmm0, zmm1)
                    int64_t r10_7 = sx.q(zmm0[0])
                    int64_t r8_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_9 = sx.q(zmm0[0])
                    int64_t rbx_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rsi_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rcx_148 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(var_540 + r10_7))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + r8_7), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + r11_8), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + r14_8), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + r15_9), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + rbx_31), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + rsi_38), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(var_540 + rcx_148), 7)
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg6, 2)
                    int64_t r8_8 = sx.q(zmm1[0])
                    int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t r15_10 = sx.q(zmm1[0])
                    int64_t rbx_36 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t rdi_57 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(var_540 + r8_8))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + r10_8), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + r11_9), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + r14_9), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + r15_10), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + rbx_36), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + rdi_57), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(var_540 + rsi_41), 7)
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg6, 4)
                    int64_t r8_9 = sx.q(arg6[0])
                    int32_t rbx_37 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                    int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r14_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    int64_t r15_11 = sx.q(arg6[0])
                    int32_t rdi_59 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                    int64_t rbx_39 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int32_t rsi_43 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                    arg6[0].o = zx.o(*(var_540 + r8_9))
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + sx.q(rbx_37)), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + r10_9), 2)
                    r10 = var_530
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + r14_10), 3)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + r15_11), 4)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + sx.q(rdi_59)), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + rbx_39), 6)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(var_540 + sx.q(rsi_43)), 7)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg7))
                    arg8 = _mm256_broadcast_ss(32767f)
                    zmm0 = _mm256_div_ps(zmm0, arg8)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                            arg7)), 
                        arg8)
                    arg6 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 
                            arg7)), 
                        arg8)
                    arg7 = _mm256_broadcast_ss(128f)
                    zmm0 = _mm256_mul_ps(zmm0, arg7)
                    zmm1 = _mm256_mul_ps(zmm1, arg7)
                    arg6 = _mm256_mul_ps(arg6, arg7)
                    var_500_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                case -0x893
                    uint64_t k2_64 = _cvtu32_mask32(r12_3)
                    int64_t k3_34
                    char temp0_1110
                    temp0_1110, k3_34 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(arg4 + arg29[0].q))
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 4)
                    int64_t k3_35 = __kmovq_maskmskw_masku64_avx512(k2_64)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k3_36
                    char temp0_1113
                    temp0_1113, k3_36 = _mm256_mmask_i32gather_ps(k3_35, *(arg4 + arg6[0].q))
                    arg7 = temp0_1113
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 8)
                    int64_t k3_37 = __kmovq_maskmskw_masku64_avx512(k2_64)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    int64_t k3_38
                    char temp0_1116
                    temp0_1116, k3_38 = _mm256_mmask_i32gather_ps(k3_37, *(arg4 + arg6[0].q))
                    arg8 = temp0_1116
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0xc)
                    int64_t k3_39 = __kmovq_maskmskw_masku64_avx512(k2_64)
                    arg19[0].o = _mm_mask_xor_epi32(k0_15, arg19[0].o, arg19[0].o)
                    int64_t k3_40
                    char temp0_1119
                    temp0_1119, k3_40 = _mm256_mmask_i32gather_ps(k3_39, *(arg4 + arg6[0].q))
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0x10)
                    int64_t k3_41 = __kmovq_maskmskw_masku64_avx512(k2_64)
                    arg20[0].o = _mm_mask_xor_epi32(k0_15, arg20[0].o, arg20[0].o)
                    int64_t k3_42
                    char temp0_1122
                    temp0_1122, k3_42 = _mm256_mmask_i32gather_ps(k3_41, *(arg4 + arg6[0].q))
                    arg22 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0x14)
                    int64_t k3_43 = __kmovq_maskmskw_masku64_avx512(k2_64)
                    arg25[0].o = _mm_mask_xor_epi32(k0_15, arg25[0].o, arg25[0].o)
                    int64_t k3_44
                    char temp0_1125
                    temp0_1125, k3_44 = _mm256_mmask_i32gather_ps(k3_43, *(arg4 + arg22[0].q))
                    int64_t k2_65
                    char temp0_1128
                    temp0_1128, k2_65 = _mm256_mmask_i32gather_epi32(k2_64, 
                        *(arg4 + _mm256_mask_add_epi32(k0_15, 
                            _mm256_mask_add_epi32(k0_15, zmm5, arg29), zmm1)[0].q))
                    arg6 = temp0_1128
                    zmm1 = _mm256_srli_epi32(arg6, 0x15)
                    arg22 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                        _mm256_mask_srli_epi32(k0_15, arg6, 0xa), 0x7ff)
                    arg6 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_15, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg6, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        k0_15, temp0_1119, temp0_1110)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg19 =
                        _mm256_mask_cvtepi32_ps(k0_15, _mm256_mask_add_epi32(k0_15, arg22, zmm0))
                    arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_15, 1023f)
                    arg19 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_15, arg19, arg22), k0_15, 
                        temp0_1122, arg7)
                    zmm0 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(k0_15, _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), 
                            arg22), 
                        k0_15, temp0_1125, arg8)
                    var_500_1 = _mm256_mask_storeu_ps(k1_33, arg6)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, arg19)
                    goto label_140283906
            
            var_4c0_1 = _mm256_mask_storeu_ps(k1_33, arg6)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg21, arg23, 4), zmm23, arg28)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (rdi_44 != -0x140284058)
                goto label_140283721
        zmm0[0].o = var_500_1[0].o
        zmm1[0].o = var_500_1[2].o
        arg6[0].o = var_4e0_1[0].o
        arg7[0].o = var_4e0_1[4].o
        arg8[0].o = var_4c0_1[0].o
        int128_t var_4b0
        zmm5[0].o = var_4b0
        arg18[0].o = _mm_mask_xor_epi32(k0_15, arg18[0].o, arg18[0].o)
        arg9[0].o = _mm_mask_unpacklo_epi32(k0_15, arg8[0].o, arg18[0].o)
        arg8[0].o = _mm_mask_unpackhi_epi32(k0_15, arg8[0].o, arg18[0].o)
        arg10[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
        int128_t var_240 = arg6[0].o
        arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg9[0].o)
        int128_t var_230_1 = arg6[0].o
        arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_220_1 = arg6[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_epi32(k0_15, zmm5[0].o, arg18[0].o)
        arg6[0].o = _mm_mask_unpackhi_epi32(k0_15, zmm5[0].o, arg18[0].o)
        arg8[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg7[0].o)
        arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_200_1 = arg7[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        int128_t var_1e0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        uint64_t i = zx.q(r12_3.b)
        
        do
            uint64_t rcx_169 = _tzcnt_u64(i)
            int32_t var_120[0x8] = arg12
            zmm0[0].o = (&var_240)[rcx_169]
            *(arg1 + sx.q(var_120[zx.q(rcx_169.d) & 7]) * 0x30 + 0x10) = zmm0[0].o
            i &= rol.q(-2, rcx_169.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm28 = _mm256_mask_set1_epi32(arg5, rsi_1)
    zmm1[0].o = 3
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0 = _mm256_broadcastq_epi64(zmm0[0].q)
    float var_140_1[0x8] = zmm0
    zmm0[0].o = zx.o(0)
    rsi_1.b = zx.o(0) f>= zmm30[0].o
    rsi_1.b = neg.b(rsi_1.b)
    arg29[0].o = _mm_mask_set1_epi8(arg5, rsi_1)
    uint32_t rsi_2 = r11 - 2
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(r11 - 1)
    float var_160_1[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
    zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm30[0].o)
    int32_t rcx_1 = int.d(zmm0[0])
    int32_t rcx_2 = rcx_1 & not.d(rcx_1 s>> 0x1f)
    
    if (rsi_2 s> rcx_2)
        rsi_2 = rcx_2
    
    arg12 = _mm256_mask_set1_epi32(arg5, rsi_2)
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    uint64_t var_1a0_1[0x4] = zmm0
    rcx_2.b = r10.d == 3
    rcx_2.b = neg.b(rcx_2.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rcx_2)
    zmm31 = _mm256_mask_load_epi64(arg5, data_143442140)
    r13 = 0
    bool cond:2_1 = true
    bool cond:3_1 = true
    arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
    arg17 = __vpbroadcastd_ymmqq_memd(4)
    zmm1 = __vpbroadcastq_ymmqq_memq(-4)
    float var_180_1[0x8] = zmm1
    zmm9 = data_142fc92e0
    zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    arg5 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    int64_t var_508_1 = arg3
    uint16_t* var_510_1 = arg2
    int32_t var_534_1 = r15_4
    uint64_t var_440_1[0x4] = _mm256_mask_store_epi64(arg5, zmm28)
    int64_t var_380_1[0x4] = arg17
    
    do
        arg6 = _mm256_mask_add_epi32(arg5, _mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r13), 3), 
            zmm31)
        int64_t k1_2
        char temp0_31
        temp0_31, k1_2 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + arg6[0].q))
        int64_t k1_4
        char temp0_32
        temp0_32, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + (arg6 | arg17)[0].q))
        arg6 = _mm256_slli_epi32(temp0_32, 4)
        int64_t k1_6
        char temp0_34
        temp0_34, k1_6 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + arg6[0].q))
        arg15 = temp0_34
        arg7 = arg6 | arg17
        int64_t k1_8
        char temp0_35
        temp0_35, k1_8 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + arg7[0]))
        arg6 = temp0_35
        int64_t k1_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg6, 2, 1)
        arg23[0].o =
            __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_9, arg29[0].o, data_142fc92e0)
        int64_t k2_1 = _mm_mask_test_epi16_mask(arg5, arg23[0].o, zmm9)
        _kortest_mask8_u8(k2_1, k2_1)
        
        if (not(cond:2_1))
            int64_t k2_2 = _mm_mask_testn_epi16_mask(arg5, arg23[0].o, zmm9)
            arg28 = _mm256_mask_mov_epi32(k2_2, arg28)
            arg18 = _mm256_mask_mov_epi32(k2_2, arg18)
        
        arg26[0].o = _mm_mask_and_epi64(arg5, arg23[0].o, zmm9)
        int64_t k2_3 = _mm_cmp_epi16_mask(arg5, arg26[0].o, zmm23[0].o, 4)
        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
        _kortest_mask8_u8(k2_3, k2_3)
        
        if (not(cond:3_1))
            arg13 = _mm256_add_epi32(arg6, zmm1)
            
            if (zmm30[0].o f>= 1f)
                int64_t k2_5 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg26[0].o, zmm9)
                arg28 = _mm256_mask_blend_epi32(k2_5, arg13, arg28)
                arg13 = _mm256_mask_mov_epi32(k2_5, arg18)
                arg18 = _mm256_mask_mov_epi64(arg5, arg13)
            else
                arg10[0].o = _mm_mask_mov_epi64(arg5, arg29[0].o)
                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                arg6 = _mm256_mask_mullo_epi32(arg5, arg6, zmm28)
                arg8 = _mm256_cvtepi32_epi64(arg15[0])
                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                arg7 = _mm256_add_epi64(_mm256_add_epi64(var_140_1, arg7), zmm5)
                arg8 = _mm256_add_epi64(var_140_1, arg8)
                arg17 = arg7 & var_180_1
                arg25 = _mm256_mask_and_epi64(arg5, _mm256_add_epi64(arg8, arg6), var_180_1)
                arg24[0].o = _mm_mask_xor_epi64(arg5, arg23[0].o, zmm23[0].o)
                char temp0_56 = _cvtmask32_u32(k2_3)
                arg29 = _mm256_mask_min_epi32(arg5, 
                    _mm256_mask_max_epi32(arg5, 
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg13), 
                            var_160_1)), 
                        arg27), 
                    arg13)
                
                if (r11 s< 0x100)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg29[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                    int128_t var_300
                    arg7[0].o = var_300
                    
                    if ((temp0_56 & 1) == 0)
                        if ((temp0_56 & 2) != 0)
                            goto label_140280b1e
                        
                        goto label_14028078a
                    
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg6[0].q), 0)
                    
                    if ((temp0_56 & 2) != 0)
                    label_140280b1e:
                        uint32_t rcx_48 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_48, 1)
                        arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg29, 1)
                        
                        if ((temp0_56 & 4) == 0)
                            goto label_14028079b
                        
                        goto label_140280b37
                    
                label_14028078a:
                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg29, 1)
                    
                    if ((temp0_56 & 4) == 0)
                    label_14028079b:
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) != 0)
                            goto label_140280b59
                        
                        goto label_1402807aa
                    
                label_140280b37:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 2)
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) != 0)
                    label_140280b59:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint32_t rcx_52 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_52, 3)
                        arg6 = _mm256_add_epi64(arg17, arg8)
                        
                        if ((temp0_56 & 0x10) == 0)
                            goto label_1402807b8
                        
                        goto label_140280b83
                    
                label_1402807aa:
                    arg6 = _mm256_add_epi64(arg17, arg8)
                    
                    if ((temp0_56 & 0x10) != 0)
                    label_140280b83:
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_56 & 0x20) != 0)
                        label_140280b98:
                            uint32_t rcx_56 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_56, 5)
                            
                            if ((temp0_56 & 0x40) == 0)
                                goto label_1402807cc
                            
                            goto label_140280baa
                    else
                    label_1402807b8:
                        
                        if ((temp0_56 & 0x20) != 0)
                            goto label_140280b98
                    
                    bool cond:17_1
                    bool cond:21_1
                    bool cond:23_1
                    bool cond:25_1
                    
                    if ((temp0_56 & 0x40) != 0)
                    label_140280baa:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 6)
                        cond:17_1 = temp0_56 == 0
                        cond:21_1 = temp0_56 == 0
                        cond:23_1 = temp0_56 == 0
                        cond:25_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                        label_140280bc6:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint32_t rcx_60 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_60, 7)
                    else
                    label_1402807cc:
                        cond:17_1 = temp0_56 == 0
                        cond:21_1 = temp0_56 == 0
                        cond:23_1 = temp0_56 == 0
                        cond:25_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                            goto label_140280bc6
                    
                    zmm23[0].o = __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(arg5, 0xff)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, zmm23[0].o)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    int64_t k2_6 = _mm256_cmp_epi32_mask(arg5, arg12, zmm0, 5)
                    arg22[0].o = _mm_movm_epi16(k2_6)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg22[0].o, arg24[0].o)
                    int64_t k3_9 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm23[0].o)
                    _kortest_mask8_u8(k3_9, k3_9)
                    
                    if (cond:17_1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg29)
                    else
                        zmm28 = _mm256_mask_blend_epi32(k2_6, arg29, arg13)
                        arg9 = _mm256_mask_sub_epi32(arg5, arg29, zmm1)
                        arg27[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_6, arg9, arg13, 2))
                        zmm31[0].o = _mm_mask_and_epi64(arg5, arg27[0].o, arg24[0].o)
                        int64_t k3_11 = _mm_mask_test_epi16_mask(arg5, zmm31[0].o, zmm9)
                        _kortest_mask8_u8(k3_11, k3_11)
                        
                        if (cond:21_1)
                            arg6 = _mm256_mask_mov_epi64(arg5, zmm28)
                        else
                            char rsi_4 = _cvtmask32_u32(k3_11)
                            zmm30 = _mm256_mask_mov_epi64(arg5, arg29)
                            bool cond:34_1
                            
                            do
                                arg19 = _mm256_mask_mov_epi64(arg5, arg9)
                                zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg19[0].o)
                                arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                                char temp0_150 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm31[0].o, zmm9))
                                
                                if ((temp0_150 & 1) == 0)
                                    if ((temp0_150 & 2) != 0)
                                        goto label_14028086e
                                    
                                    goto label_140280971
                                
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg20[0].o, zx.d(*arg6[0].q), 0)
                                
                                if ((temp0_150 & 2) != 0)
                                label_14028086e:
                                    uint16_t rcx_22[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg20[0].o, rcx_22, 1)
                                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    
                                    if ((temp0_150 & 4) == 0)
                                        goto label_140280981
                                    
                                    goto label_140280888
                                
                            label_140280971:
                                arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                
                                if ((temp0_150 & 4) == 0)
                                label_140280981:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_150 & 8) != 0)
                                        goto label_1402808ab
                                    
                                    goto label_14028098f
                                
                            label_140280888:
                                zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg20[0].o, zx.d(*zmm0[0].q), 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_150 & 8) != 0)
                                label_1402808ab:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    uint16_t rcx_26[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg20[0].o, rcx_26, 3)
                                    arg6 = _mm256_add_epi64(arg17, arg8)
                                    
                                    if ((temp0_150 & 0x10) == 0)
                                        goto label_14028099c
                                    
                                    goto label_1402808d6
                                
                            label_14028098f:
                                arg6 = _mm256_add_epi64(arg17, arg8)
                                
                                if ((temp0_150 & 0x10) == 0)
                                label_14028099c:
                                    
                                    if ((temp0_150 & 0x20) != 0)
                                        goto label_1402808ec
                                    
                                    goto label_1402809a5
                                
                            label_1402808d6:
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg20[0].o, zx.d(*arg6[0].q), 4)
                                
                                if ((temp0_150 & 0x20) != 0)
                                label_1402808ec:
                                    uint16_t rcx_30[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg20[0].o, rcx_30, 5)
                                    
                                    if ((temp0_150 & 0x40) == 0)
                                        goto label_1402809ae
                                    
                                    goto label_1402808ff
                                
                            label_1402809a5:
                                
                                if ((temp0_150 & 0x40) != 0)
                                label_1402808ff:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg20[0].o, zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_150 s< 0)
                                    label_14028091c:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        uint16_t rcx_34[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg20[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg20[0].o, rcx_34, 7)
                                else
                                label_1402809ae:
                                    
                                    if (temp0_150 s< 0)
                                        goto label_14028091c
                                
                                zmm0[0].o = _mm_mask_and_epi64(arg5, arg20[0].o, zmm23[0].o)
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm0, 
                                        arg12), 
                                    arg27[0].o)
                                arg8[0].o = zx.o(0)
                                int64_t k3_14 =
                                    _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm23[0].o)
                                zmm0[0].o = _mm_mask_and_epi64(arg5, arg6[0].o, arg24[0].o)
                                char temp0_158 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    zmm0[0].o, zmm23[0].o))
                                cond:23_1 = rsi_4 == temp0_158
                                cond:25_1 = rsi_4 == temp0_158
                                cond:34_1 = rsi_4 != temp0_158
                                
                                if (rsi_4 != temp0_158)
                                    arg8[0].o = _mm_mask_xor_epi64(arg5, arg6[0].o, arg27[0].o)
                                
                                _mm256_mask_mov_epi64(arg5, zmm30)
                                arg6 = _mm256_mask_mov_epi32(k3_14, zmm28)
                                arg9 = _mm256_mask_sub_epi32(arg5, arg19, zmm1)
                                arg27[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg9, arg13, 2), arg8[0].o)
                                zmm31[0].o = _mm_mask_and_epi64(arg5, arg27[0].o, arg24[0].o)
                                int64_t k3_16 =
                                    _mm_mask_test_epi16_mask(arg5, zmm31[0].o, zmm23[0].o)
                                _kortest_mask8_u8(k3_16, k3_16)
                                rsi_4 = _cvtmask32_u32(k3_16)
                                zmm30 = _mm256_mask_mov_epi64(arg5, arg19)
                                zmm28 = _mm256_mask_mov_epi64(arg5, arg6)
                            while (cond:34_1)
                    
                    var_300 = arg7[0].o
                    arg7[0].o = _mm_mask_xor_epi64(arg5, arg22[0].o, zmm9)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, arg24[0].o)
                    int64_t k3_19 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm9)
                    _kortest_mask8_u8(k3_19, k3_19)
                    int128_t var_520
                    
                    if (cond:23_1)
                        arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                        arg7[0].o = var_520
                    else
                        arg22 = _mm256_mask_mov_epi32(k2_6, arg6)
                        arg19 = _mm256_mask_add_epi32(arg5, arg29, zmm1)
                        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                        arg9[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg19, arg27), 
                            arg7[0].o)
                        arg8[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                        int64_t k2_15 = _mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm9)
                        _kortest_mask8_u8(k2_15, k2_15)
                        
                        if (cond:25_1)
                            arg6 = _mm256_mask_mov_epi64(arg5, arg22)
                            arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                            arg7[0].o = var_520
                        else
                            char rsi_5 = _cvtmask32_u32(k2_15)
                            arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                            arg7[0].o = var_520
                            bool cond:37_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg19[0].o)
                                arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                                char temp0_275 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm9))
                                
                                if ((temp0_275 & 1) == 0)
                                    if ((temp0_275 & 2) != 0)
                                        goto label_140280ede
                                    
                                    goto label_140280fdb
                                
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*arg6[0].q), 0)
                                
                                if ((temp0_275 & 2) != 0)
                                label_140280ede:
                                    uint16_t rcx_68[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_68, 1)
                                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    
                                    if ((temp0_275 & 4) == 0)
                                        goto label_140280feb
                                    
                                    goto label_140280ef8
                                
                            label_140280fdb:
                                arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                
                                if ((temp0_275 & 4) == 0)
                                label_140280feb:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_275 & 8) != 0)
                                        goto label_140280f1b
                                    
                                    goto label_140280ff9
                                
                            label_140280ef8:
                                zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*zmm0[0].q), 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_275 & 8) != 0)
                                label_140280f1b:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    uint16_t rcx_72[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_72, 3)
                                    arg6 = _mm256_add_epi64(arg17, arg8)
                                    
                                    if ((temp0_275 & 0x10) == 0)
                                        goto label_140281006
                                    
                                    goto label_140280f46
                                
                            label_140280ff9:
                                arg6 = _mm256_add_epi64(arg17, arg8)
                                
                                if ((temp0_275 & 0x10) == 0)
                                label_140281006:
                                    
                                    if ((temp0_275 & 0x20) != 0)
                                        goto label_140280f5c
                                    
                                    goto label_14028100f
                                
                            label_140280f46:
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*arg6[0].q), 4)
                                
                                if ((temp0_275 & 0x20) != 0)
                                label_140280f5c:
                                    uint16_t rcx_76[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_76, 5)
                                    
                                    if ((temp0_275 & 0x40) == 0)
                                        goto label_140281018
                                    
                                    goto label_140280f6f
                                
                            label_14028100f:
                                
                                if ((temp0_275 & 0x40) != 0)
                                label_140280f6f:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_275 s< 0)
                                    label_140280f8c:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        uint16_t rcx_80[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg21[0].o, rcx_80, 7)
                                else
                                label_140281018:
                                    
                                    if (temp0_275 s< 0)
                                        goto label_140280f8c
                                
                                zmm0[0].o = _mm_mask_and_epi64(arg5, arg21[0].o, zmm23[0].o)
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg12, zmm0, 5), arg9[0].o)
                                arg8[0].o = zx.o(0)
                                int64_t k2_18 =
                                    _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm23[0].o)
                                zmm0[0].o = _mm_mask_and_epi64(arg5, arg6[0].o, arg24[0].o)
                                char temp0_283 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    zmm0[0].o, zmm23[0].o))
                                cond:37_1 = rsi_5 != temp0_283
                                
                                if (rsi_5 != temp0_283)
                                    arg8[0].o = arg6[0].o ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg19)
                                arg19 = _mm256_mask_add_epi32(arg5, arg19, zmm1)
                                arg6 = _mm256_mask_mov_epi32(k2_18, arg22)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg19, 
                                        arg27), 
                                    arg8[0].o)
                                arg8[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                                int64_t k2_20 =
                                    _mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm23[0].o)
                                _kortest_mask8_u8(k2_20, k2_20)
                                rsi_5 = _cvtmask32_u32(k2_20)
                                arg22 = _mm256_mask_mov_epi64(arg5, arg6)
                            while (cond:37_1)
                    
                    arg28 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg26[0].o, zmm9), 
                        arg6, arg28)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg28[0].o)
                    arg19 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                    
                    if ((temp0_56 & 1) != 0)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg19[0].o), 0)
                    
                    zmm30[0].o = _mm_mask_load_ss(arg5, arg31)
                    zmm28 = _mm256_mask_load_epi64(arg5, var_440_1)
                    zmm31 = _mm256_mask_load_epi64(arg5, data_143442140)
                    
                    if ((temp0_56 & 2) == 0)
                        arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                        
                        if ((temp0_56 & 4) != 0)
                            goto label_140281522
                        
                        goto label_140281477
                    
                    uint32_t rcx_102 = zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_102, 1)
                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                    
                    if ((temp0_56 & 4) != 0)
                    label_140281522:
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 2)
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) == 0)
                            goto label_140281486
                        
                        goto label_140281545
                    
                label_140281477:
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) == 0)
                    label_140281486:
                        arg19 = _mm256_mask_add_epi64(arg5, arg17, arg8)
                        
                        if ((temp0_56 & 0x10) != 0)
                            goto label_140281573
                        
                        goto label_140281496
                    
                label_140281545:
                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                    uint32_t rcx_106 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_106, 3)
                    arg19 = _mm256_mask_add_epi64(arg5, arg17, arg8)
                    
                    if ((temp0_56 & 0x10) != 0)
                    label_140281573:
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*arg19[0].o), 4)
                        
                        if ((temp0_56 & 0x20) == 0)
                            goto label_1402814a0
                        
                        goto label_140281589
                    
                label_140281496:
                    
                    if ((temp0_56 & 0x20) == 0)
                    label_1402814a0:
                        
                        if ((temp0_56 & 0x40) != 0)
                            goto label_14028159b
                        
                        goto label_1402814aa
                    
                label_140281589:
                    uint32_t rcx_110 = zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_110, 5)
                    bool cond:33_1
                    
                    if ((temp0_56 & 0x40) == 0)
                    label_1402814aa:
                        cond:33_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                        label_1402815b8:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                            uint32_t rcx_114 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rcx_114, 7)
                    else
                    label_14028159b:
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, zx.d(*zmm0[0].q), 6)
                        cond:33_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                            goto label_1402815b8
                    
                    var_520 = arg7[0].o
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg23[0].o, zmm23[0].o)
                    int64_t k2_27 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm9)
                    _mm256_sub_epi32(arg6, zmm1)
                    arg6 = _mm256_mask_mov_epi32(k2_27, arg18)
                    arg7[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg6, arg13), 
                        arg24[0].o)
                    int64_t k2_29 = _mm_mask_test_epi16_mask(arg5, arg7[0].o, zmm23[0].o)
                    _kortest_mask8_u8(k2_29, k2_29)
                    
                    if (cond:33_1)
                        arg18 = _mm256_mask_mov_epi64(arg5, arg6)
                    else
                        arg13 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg7[0].o, zmm23[0].o), arg6)
                        arg18 = _mm256_mask_mov_epi64(arg5, arg13)
                    
                    int128_t var_390
                    zmm1[0].o = var_390
                    arg7[0].o = var_520
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg18[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                    
                    if ((temp0_56 & 1) == 0)
                        if ((temp0_56 & 2) != 0)
                            goto label_140280285
                        
                        goto label_140281607
                    
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 0)
                    
                    if ((temp0_56 & 2) != 0)
                    label_140280285:
                        uint32_t rcx_6 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_6, 1)
                        arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                        
                        if ((temp0_56 & 4) == 0)
                            goto label_140281618
                        
                        goto label_14028029e
                    
                label_140281607:
                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                    
                    if ((temp0_56 & 4) == 0)
                    label_140281618:
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) != 0)
                            goto label_1402802c0
                        
                        goto label_140281627
                    
                label_14028029e:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 2)
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) != 0)
                    label_1402802c0:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint32_t rcx_10 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_10, 3)
                        arg6 = _mm256_add_epi64(arg17, arg8)
                        
                        if ((temp0_56 & 0x10) == 0)
                            goto label_140281635
                        
                        goto label_1402802ea
                    
                label_140281627:
                    arg6 = _mm256_add_epi64(arg17, arg8)
                    
                    if ((temp0_56 & 0x10) == 0)
                    label_140281635:
                        arg17 = var_380_1
                        
                        if ((temp0_56 & 0x20) != 0)
                            goto label_140280308
                        
                        goto label_140281648
                    
                label_1402802ea:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 4)
                    arg17 = var_380_1
                    
                    if ((temp0_56 & 0x20) == 0)
                    label_140281648:
                        
                        if ((temp0_56 & 0x40) != 0)
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 6)
                    else
                    label_140280308:
                        uint32_t rcx_14 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_14, 5)
                        
                        if ((temp0_56 & 0x40) != 0)
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 6)
                    
                    arg4 = var_540
                    r15_4 = var_534_1
                    arg8[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, zmm23[0].o)
                    
                    if (temp0_56 s< 0)
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint16_t rcx_118[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_118, 7)
                    
                    zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    arg6 = _mm256_cvtepu16_epi32(arg8[0].o)
                    var_390 = zmm1[0].o
                    zmm0[0].o = zmm1[0].o & zmm9
                    arg19 = _mm256_mask_cvtepu16_epi32(arg5, zmm0[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                        goto label_1402816c2
                else
                    arg8 = _mm256_mask_add_epi32(arg5, arg29, arg29)
                    arg6 = _mm256_mask_add_epi64(arg5, arg25, _mm256_cvtepi32_epi64(arg8[0].o))
                    int128_t var_2f0
                    var_180_1[0].o = var_2f0
                    
                    if ((temp0_56 & 1) == 0)
                        if ((temp0_56 & 2) != 0)
                            goto label_140280a50
                        
                        goto label_1402804a4
                    
                    var_180_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *arg6[0].q, 0)
                    
                    if ((temp0_56 & 2) != 0)
                    label_140280a50:
                        uint16_t* rcx_38 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        var_180_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *rcx_38, 1)
                        arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                        
                        if ((temp0_56 & 4) == 0)
                            goto label_1402804b4
                        
                        goto label_140280a6b
                    
                label_1402804a4:
                    arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                    
                    if ((temp0_56 & 4) == 0)
                    label_1402804b4:
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) != 0)
                            goto label_140280a8a
                        
                        goto label_1402804c3
                    
                label_140280a6b:
                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                    var_180_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *arg7[0], 2)
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) != 0)
                    label_140280a8a:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint16_t* rcx_40 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        var_180_1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *rcx_40, 3)
                        arg6 = _mm256_add_epi64(arg17, arg8)
                        
                        if ((temp0_56 & 0x10) == 0)
                            goto label_1402804d1
                        
                        goto label_140280aae
                    
                label_1402804c3:
                    arg6 = _mm256_add_epi64(arg17, arg8)
                    
                    if ((temp0_56 & 0x10) != 0)
                    label_140280aae:
                        var_180_1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_56 & 0x20) != 0)
                        label_140280abd:
                            uint16_t* rcx_42 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            var_180_1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *rcx_42, 5)
                            
                            if ((temp0_56 & 0x40) == 0)
                                goto label_1402804e5
                            
                            goto label_140280ad2
                    else
                    label_1402804d1:
                        
                        if ((temp0_56 & 0x20) != 0)
                            goto label_140280abd
                    
                    bool cond:18_1
                    bool cond:22_1
                    bool cond:24_1
                    bool cond:26_1
                    
                    if ((temp0_56 & 0x40) != 0)
                    label_140280ad2:
                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                        var_180_1[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *arg7[0], 6)
                        cond:18_1 = temp0_56 == 0
                        cond:22_1 = temp0_56 == 0
                        cond:24_1 = temp0_56 == 0
                        cond:26_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                        label_140280aeb:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rcx_44 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            var_180_1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(var_180_1[0].o, *rcx_44, 7)
                    else
                    label_1402804e5:
                        cond:18_1 = temp0_56 == 0
                        cond:22_1 = temp0_56 == 0
                        cond:24_1 = temp0_56 == 0
                        cond:26_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                            goto label_140280aeb
                    
                    arg6 = _mm256_cvtepu16_epi32(var_180_1[0].o)
                    int64_t k2_4 = _mm256_cmp_epi32_mask(arg5, arg12, arg6, 5)
                    zmm28[0].o = _mm_movm_epi16(k2_4)
                    arg6[0].o = _mm_mask_and_epi64(arg5, zmm28[0].o, arg24[0].o)
                    int64_t k3_1 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm9)
                    _kortest_mask8_u8(k3_1, k3_1)
                    var_2f0 = var_180_1[0].o
                    
                    if (cond:18_1)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg29)
                    else
                        zmm23 = _mm256_mask_blend_epi32(k2_4, arg29, arg13)
                        zmm31 = _mm256_mask_sub_epi32(arg5, arg29, zmm1)
                        arg9[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_4, zmm31, arg13, 2))
                        arg6[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                        int64_t k3_3 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm9)
                        _kortest_mask8_u8(k3_3, k3_3)
                        
                        if (cond:22_1)
                            arg22 = _mm256_mask_mov_epi64(arg5, zmm23)
                        else
                            char rbx_1 = _cvtmask32_u32(k3_3)
                            arg27 = _mm256_mask_mov_epi64(arg5, arg29)
                            bool cond:36_1
                            
                            do
                                arg19 = _mm256_mask_mov_epi64(arg5, zmm31)
                                arg8 = _mm256_mask_add_epi32(arg5, zmm31, zmm31)
                                arg7 = _mm256_cvtepi32_epi64(arg8[0].o)
                                arg22 = _mm256_mask_add_epi64(arg5, arg25, arg7)
                                char temp0_96 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm9))
                                
                                if ((temp0_96 & 1) == 0)
                                    if ((temp0_96 & 2) != 0)
                                        goto label_14028057b
                                    
                                    goto label_140280666
                                
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg22[0].o, 0)
                                
                                if ((temp0_96 & 2) != 0)
                                label_14028057b:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1), 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg8, 1)
                                    
                                    if ((temp0_96 & 4) == 0)
                                        goto label_140280675
                                    
                                    goto label_14028058f
                                
                            label_140280666:
                                arg6[0].o = _mm256_extracti128_si256(arg8, 1)
                                
                                if ((temp0_96 & 4) == 0)
                                label_140280675:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_96 & 8) != 0)
                                        goto label_1402805ae
                                    
                                    goto label_140280683
                                
                            label_14028058f:
                                arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg7[0], 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_96 & 8) != 0)
                                label_1402805ae:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1), 3)
                                    arg22 = _mm256_mask_add_epi64(arg5, arg17, arg6)
                                    
                                    if ((temp0_96 & 0x10) == 0)
                                        goto label_140280692
                                    
                                    goto label_1402805d5
                                
                            label_140280683:
                                arg22 = _mm256_mask_add_epi64(arg5, arg17, arg6)
                                
                                if ((temp0_96 & 0x10) == 0)
                                label_140280692:
                                    
                                    if ((temp0_96 & 0x20) != 0)
                                        goto label_1402805ea
                                    
                                    goto label_14028069b
                                
                            label_1402805d5:
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg22[0].o, 4)
                                
                                if ((temp0_96 & 0x20) != 0)
                                label_1402805ea:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1), 5)
                                    
                                    if ((temp0_96 & 0x40) == 0)
                                        goto label_1402806a4
                                    
                                    goto label_1402805f8
                                
                            label_14028069b:
                                
                                if ((temp0_96 & 0x40) != 0)
                                label_1402805f8:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg6[0].q, 6)
                                    
                                    if (temp0_96 s< 0)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                            *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1), 7)
                                else
                                label_1402806a4:
                                    
                                    if (temp0_96 s< 0)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                            *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1), 7)
                                
                                arg6 = _mm256_cvtepu16_epi32(arg16)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg6, 
                                        arg12), 
                                    arg9[0].o)
                                arg6[0].o = zx.o(0)
                                arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k3_6 = _mm_mask_testn_epi16_mask(arg5, zmm5[0].o, arg8[0].o)
                                arg7[0].o = _mm_mask_and_epi64(arg5, zmm5[0].o, arg24[0].o)
                                char temp0_104 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg7[0].o, arg8[0].o))
                                cond:24_1 = rbx_1 == temp0_104
                                cond:26_1 = rbx_1 == temp0_104
                                cond:36_1 = rbx_1 != temp0_104
                                
                                if (rbx_1 != temp0_104)
                                    arg6[0].o = zmm5[0].o ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg27)
                                arg22 = _mm256_mask_mov_epi32(k3_6, zmm23)
                                zmm31 = _mm256_mask_sub_epi32(arg5, arg19, zmm1)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, zmm31, arg13, 2), arg6[0].o)
                                arg6[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                                int64_t k3_8 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, arg8[0].o)
                                _kortest_mask8_u8(k3_8, k3_8)
                                rbx_1 = _cvtmask32_u32(k3_8)
                                arg27 = _mm256_mask_mov_epi64(arg5, arg19)
                                zmm23 = _mm256_mask_mov_epi64(arg5, arg22)
                            while (cond:36_1)
                    
                    arg7[0].o = _mm_mask_xor_epi64(arg5, zmm28[0].o, zmm9)
                    arg6[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, arg24[0].o)
                    int64_t k3_17 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm9)
                    _kortest_mask8_u8(k3_17, k3_17)
                    
                    if (cond:24_1)
                        zmm28 = _mm256_mask_load_epi64(arg5, var_440_1)
                        arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                    else
                        arg6 = _mm256_mask_mov_epi32(k2_4, arg22)
                        arg19 = _mm256_mask_add_epi32(arg5, arg29, zmm1)
                        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                        arg9[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg19, arg27), 
                            arg7[0].o)
                        arg8[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                        int64_t k2_8 = _mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm9)
                        _kortest_mask8_u8(k2_8, k2_8)
                        
                        if (cond:26_1)
                            arg22 = _mm256_mask_mov_epi64(arg5, arg6)
                            zmm28 = _mm256_mask_load_epi64(arg5, var_440_1)
                            arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                        else
                            char rbx_3 = _cvtmask32_u32(k2_8)
                            zmm28 = _mm256_mask_load_epi64(arg5, var_440_1)
                            arg29[0].o = _mm_mask_mov_epi64(arg5, arg10[0].o)
                            bool cond:38_1
                            
                            do
                                zmm23 = _mm256_mask_add_epi32(arg5, arg19, arg19)
                                arg7 = _mm256_mask_cvtepi32_epi64(arg5, zmm23[0].o)
                                arg22 = _mm256_mask_add_epi64(arg5, arg25, arg7)
                                char temp0_229 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm9))
                                
                                if ((temp0_229 & 1) == 0)
                                    if ((temp0_229 & 2) != 0)
                                        goto label_140280c74
                                    
                                    goto label_140280d61
                                
                                arg11[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *arg22[0].o, 0)
                                
                                if ((temp0_229 & 2) != 0)
                                label_140280c74:
                                    uint16_t* rdi_11 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    arg11[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *rdi_11, 1)
                                    arg8[0].o = _mm256_extracti32x4_epi32(arg5, zmm23, 1)
                                    
                                    if ((temp0_229 & 4) == 0)
                                        goto label_140280d71
                                    
                                    goto label_140280c90
                                
                            label_140280d61:
                                arg8[0].o = _mm256_extracti32x4_epi32(arg5, zmm23, 1)
                                
                                if ((temp0_229 & 4) == 0)
                                label_140280d71:
                                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                    
                                    if ((temp0_229 & 8) != 0)
                                        goto label_140280caf
                                    
                                    goto label_140280d7f
                                
                            label_140280c90:
                                arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                arg11[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *arg7[0], 2)
                                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                                
                                if ((temp0_229 & 8) != 0)
                                label_140280caf:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                    arg11[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *rdi_13, 3)
                                    arg22 = _mm256_mask_add_epi64(arg5, arg17, arg8)
                                    
                                    if ((temp0_229 & 0x10) == 0)
                                        goto label_140280d8e
                                    
                                    goto label_140280cd6
                                
                            label_140280d7f:
                                arg22 = _mm256_mask_add_epi64(arg5, arg17, arg8)
                                
                                if ((temp0_229 & 0x10) == 0)
                                label_140280d8e:
                                    
                                    if ((temp0_229 & 0x20) != 0)
                                        goto label_140280ce4
                                    
                                    goto label_140280d97
                                
                            label_140280cd6:
                                arg11[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *arg22[0].o, 4)
                                
                                if ((temp0_229 & 0x20) != 0)
                                label_140280ce4:
                                    uint16_t* rdi_15 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    arg11[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *rdi_15, 5)
                                    
                                    if ((temp0_229 & 0x40) == 0)
                                        goto label_140280da0
                                    
                                    goto label_140280cf9
                                
                            label_140280d97:
                                
                                if ((temp0_229 & 0x40) != 0)
                                label_140280cf9:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg11[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *arg7[0], 6)
                                    
                                    if (temp0_229 s< 0)
                                    label_140280d12:
                                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        uint16_t* rcx_61 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                        arg11[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *rcx_61, 7)
                                else
                                label_140280da0:
                                    
                                    if (temp0_229 s< 0)
                                        goto label_140280d12
                                
                                arg7 = _mm256_cvtepu16_epi32(arg11[0].o)
                                arg7[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg12, arg7, 5), arg9[0].o)
                                arg8[0].o = zx.o(0)
                                zmm5[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k2_11 =
                                    _mm_mask_testn_epi16_mask(arg5, arg7[0].o, zmm5[0].o)
                                var_180_1[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, arg24[0].o)
                                char temp0_237 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    var_180_1[0].o, zmm5[0].o))
                                cond:38_1 = rbx_3 != temp0_237
                                
                                if (rbx_3 != temp0_237)
                                    arg8[0].o = arg7[0].o ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg19)
                                arg19 = _mm256_mask_add_epi32(arg5, arg19, zmm1)
                                arg22 = _mm256_mask_mov_epi32(k2_11, arg6)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg19, 
                                        arg27), 
                                    arg8[0].o)
                                arg8[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg24[0].o)
                                int64_t k2_13 = _mm_mask_test_epi16_mask(arg5, arg8[0].o, zmm5[0].o)
                                _kortest_mask8_u8(k2_13, k2_13)
                                rbx_3 = _cvtmask32_u32(k2_13)
                                arg6 = _mm256_mask_mov_epi64(arg5, arg22)
                            while (cond:38_1)
                    
                    arg28 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg26[0].o, zmm9), 
                        arg22, arg28)
                    arg8 = _mm256_mask_add_epi32(arg5, arg28, arg28)
                    zmm0 = _mm256_cvtepi32_epi64(arg8[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                    int128_t var_3b0
                    uint16_t* rcx_84
                    
                    if ((temp0_56 & 1) != 0)
                        zmm5[0].o = var_3b0
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 0)
                        zmm31 = _mm256_mask_load_epi64(arg5, data_143442140)
                        zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        
                        if ((temp0_56 & 2) != 0)
                            rcx_84 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rcx_84, 1)
                    else
                        zmm31 = _mm256_mask_load_epi64(arg5, data_143442140)
                        zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        zmm5[0].o = var_3b0
                        
                        if ((temp0_56 & 2) != 0)
                            rcx_84 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rcx_84, 1)
                    arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                    
                    if ((temp0_56 & 4) == 0)
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) != 0)
                            goto label_140281200
                        
                        goto label_140281162
                    
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm0[0].q, 2)
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) != 0)
                    label_140281200:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint16_t* rcx_86 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rcx_86, 3)
                        arg6 = _mm256_add_epi64(arg17, arg8)
                        
                        if ((temp0_56 & 0x10) == 0)
                            goto label_140281170
                        
                        goto label_140281224
                    
                label_140281162:
                    arg6 = _mm256_add_epi64(arg17, arg8)
                    
                    if ((temp0_56 & 0x10) != 0)
                    label_140281224:
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_56 & 0x20) != 0)
                        label_140281233:
                            uint16_t* rcx_88 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rcx_88, 5)
                            
                            if ((temp0_56 & 0x40) == 0)
                                goto label_140281184
                            
                            goto label_140281248
                    else
                    label_140281170:
                        
                        if ((temp0_56 & 0x20) != 0)
                            goto label_140281233
                    
                    bool cond:35_1
                    
                    if ((temp0_56 & 0x40) != 0)
                    label_140281248:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm0[0].q, 6)
                        cond:35_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                        label_140281261:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rcx_90 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rcx_90, 7)
                    else
                    label_140281184:
                        cond:35_1 = temp0_56 == 0
                        
                        if (temp0_56 s< 0)
                            goto label_140281261
                    
                    arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg23[0].o, arg6[0].o)
                    int64_t k2_22 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm9)
                    _mm256_mask_sub_epi32(arg5, arg22, zmm1)
                    arg8 = _mm256_mask_mov_epi32(k2_22, arg18)
                    arg7[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg8, arg13), 
                        arg24[0].o)
                    int64_t k2_24 = _mm_mask_test_epi16_mask(arg5, arg7[0].o, arg6[0].o)
                    _kortest_mask8_u8(k2_24, k2_24)
                    
                    if (cond:35_1)
                        arg18 = _mm256_mask_mov_epi64(arg5, arg8)
                    else
                        arg13 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg7[0].o, arg6[0].o), arg8)
                        arg18 = _mm256_mask_mov_epi64(arg5, arg13)
                    
                    int128_t var_3a0
                    zmm1[0].o = var_3a0
                    arg8 = _mm256_mask_add_epi32(arg5, arg18, arg18)
                    zmm0 = _mm256_cvtepi32_epi64(arg8[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                    
                    if ((temp0_56 & 1) == 0)
                        if ((temp0_56 & 2) != 0)
                            goto label_140281348
                        
                        goto label_1402812ab
                    
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 0)
                    
                    if ((temp0_56 & 2) != 0)
                    label_140281348:
                        int64_t rcx_92 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_92, 1)
                        arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                        
                        if ((temp0_56 & 4) == 0)
                            goto label_1402812bb
                        
                        goto label_140281363
                    
                label_1402812ab:
                    arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                    
                    if ((temp0_56 & 4) == 0)
                    label_1402812bb:
                        arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                        
                        if ((temp0_56 & 8) != 0)
                            goto label_140281382
                        
                        goto label_1402812ca
                    
                label_140281363:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                    arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                    
                    if ((temp0_56 & 8) != 0)
                    label_140281382:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rcx_94 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_94, 3)
                        arg6 = _mm256_add_epi64(arg17, arg8)
                        
                        if ((temp0_56 & 0x10) == 0)
                            goto label_1402812d8
                        
                        goto label_1402813a6
                    
                label_1402812ca:
                    arg6 = _mm256_add_epi64(arg17, arg8)
                    
                    if ((temp0_56 & 0x10) == 0)
                    label_1402812d8:
                        arg17 = var_380_1
                        
                        if ((temp0_56 & 0x20) != 0)
                            goto label_1402813be
                        
                        goto label_1402812eb
                    
                label_1402813a6:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                    arg17 = var_380_1
                    
                    if ((temp0_56 & 0x20) != 0)
                    label_1402813be:
                        int64_t rcx_96 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_96, 5)
                        
                        if ((temp0_56 & 0x40) == 0)
                            goto label_1402812f5
                        
                        goto label_1402813d3
                    
                label_1402812eb:
                    
                    if ((temp0_56 & 0x40) != 0)
                    label_1402813d3:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_56 s< 0)
                        label_1402813ec:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_98 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_98, 7)
                    else
                    label_1402812f5:
                        
                        if (temp0_56 s< 0)
                            goto label_1402813ec
                    
                    var_3b0 = zmm5[0].o
                    arg6 = _mm256_cvtepu16_epi32(zmm5[0].o)
                    var_3a0 = zmm1[0].o
                    arg19 = _mm256_mask_cvtepu16_epi32(arg5, zmm1[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                    label_1402816c2:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_mask_sub_epi32(arg5, arg19, arg6), 1)
                        arg6 = _mm256_sub_ps(var_1a0_1, _mm256_cvtepi32_ps(arg6))
                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                        arg7 = _mm256_div_ps(arg6, zmm0)
                
                arg19 = _mm256_mask_mov_ps(_mm_cmp_epi16_mask(arg5, arg26[0].o, zmm9, 4), arg7)
        
        arg6 =
            __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(_kor_mask8(k1_9, arg5)), 0x18)
        uint64_t r12_2 = zx.q(r10.d)
        bool cond:4_1 = r10.d == 6
        float var_4a0_1[0x8]
        float var_480_1[0x8]
        float var_460_1[0x8]
        uint64_t k1_18
        
        if (r10.d u> 6)
        label_140281780:
            arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
            var_460_1 = _mm256_mask_store_epi64(arg5, arg24)
            var_480_1 = _mm256_mask_store_epi64(arg5, arg24)
            var_4a0_1 = _mm256_mask_store_epi64(arg5, arg24)
            arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
            arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg28, arg18, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (not(cond:4_1))
            label_1402817bf:
                float var_360_1[0x8]
                float var_340_1[0x8]
                uint64_t var_320_1[0x4]
                
                if (r10.d u> 6)
                label_140281850:
                    var_360_1 = _mm256_mask_storeu_ps(k1_18, arg27)
                    var_340_1 = _mm256_mask_storeu_ps(k1_18, arg27)
                    var_320_1 = _mm256_mask_storeu_ps(k1_18, arg27)
                else
                    arg8 = _mm256_mask_mullo_epi32(arg5, arg18, zmm28)
                    
                    switch (r12_2)
                        case 0, 1
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg8)
                            int64_t k2_33
                            char temp0_426
                            temp0_426, k2_33 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + zmm0[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_35
                            char temp0_428
                            temp0_428, k2_35 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0]))
                            arg8 = temp0_428
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_37
                            char temp0_431
                            temp0_431, k2_37 = _mm256_mmask_i32gather_ps(k2_36, *(arg4 + zmm0[0].q))
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, temp0_426)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, arg8)
                            var_320_1 = _mm256_mask_storeu_ps(k1_18, temp0_431)
                        case 2
                            zmm0 = _mm256_add_epi32(arg6, arg15)
                            arg6 = _mm256_add_epi32(zmm0, arg8)
                            zmm0 = _mm256_mask_add_epi32(k1_18, zmm0, arg8)
                            int64_t r8_3 = sx.q(zmm0[0])
                            int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rsi_16 = sx.q(zmm0[0])
                            int64_t rcx_131 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t rdx_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(arg4 + r8_3))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_4), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_5), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_5), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_16), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_131), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_7), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_15), 7)
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, arg6, 2)
                            int64_t r8_4 = sx.q(arg7[0].d)
                            int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t rsi_18 = sx.q(arg7[0].d)
                            int64_t rcx_134 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                            int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t rbx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = zx.o(*(arg4 + r8_4))
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_5), 1)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r11_6), 2)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r14_6), 3)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rsi_18), 4)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rcx_134), 5)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdx_10), 6)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rbx_18), 7)
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, arg6, 4)
                            int64_t r8_5 = sx.q(arg6[0])
                            int32_t rdx_11 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                            int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t r15_8 = sx.q(arg6[0])
                            int32_t rcx_136 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                            int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int32_t rsi_20 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                            arg3 = var_508_1
                            arg6[0].o = zx.o(*(arg4 + r8_5))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rdx_11)), 1)
                            r11 = arg30
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_6), 2)
                            r10 = var_530
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_7), 3)
                            r14 = arg34
                            arg2 = var_510_1
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_8), 4)
                            r15_4 = var_534_1
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rcx_136)), 5)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rbx_21), 6)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rsi_20)), 7)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                            zmm5 = _mm256_broadcast_ss(32767f)
                            zmm0 = _mm256_div_ps(zmm0, zmm5)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg7[0].o), arg8)), 
                                zmm5)
                            arg6 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg6[0].o), arg8)), 
                                zmm5)
                            arg8 = _mm256_broadcast_ss(128f)
                            zmm0 = _mm256_mul_ps(zmm0, arg8)
                            arg7 = _mm256_mul_ps(arg7, arg8)
                            arg6 = _mm256_mul_ps(arg6, arg8)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, arg7)
                            var_320_1 = _mm256_mask_storeu_ps(k1_18, arg6)
                            arg23 = _mm256_mask_load_ps(arg5, var_4a0_1)
                            arg22 = _mm256_mask_load_ps(arg5, var_480_1)
                            arg24 = _mm256_mask_load_ps(arg5, var_460_1)
                        case 3
                            int64_t k2_38 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k2_39
                            char temp0_615
                            temp0_615, k2_39 =
                                _mm256_mmask_i32gather_ps(k2_38, *(arg4 + arg15[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 4)
                            int64_t k2_41
                            char temp0_617
                            temp0_617, k2_41 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0]))
                            zmm5 = temp0_617
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 8)
                            int64_t k2_42 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                            int64_t k2_43
                            char temp0_620
                            temp0_620, k2_43 = _mm256_mmask_i32gather_ps(k2_42, *(arg4 + arg7[0]))
                            zmm23 = temp0_620
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0xc)
                            int64_t k2_44 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
                            int64_t k2_45
                            char temp0_623
                            temp0_623, k2_45 = _mm256_mmask_i32gather_ps(k2_44, *(arg4 + arg7[0]))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x10)
                            int64_t k2_46 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                            int64_t k2_47
                            char temp0_626
                            temp0_626, k2_47 = _mm256_mmask_i32gather_ps(k2_46, *(arg4 + arg7[0]))
                            arg26 = temp0_626
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x14)
                            int64_t k2_48 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                            int64_t k2_49
                            char temp0_629
                            temp0_629, k2_49 = _mm256_mmask_i32gather_ps(k2_48, *(arg4 + arg7[0]))
                            arg27 = temp0_629
                            arg6 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg8)
                            int64_t k2_51
                            char temp0_632
                            temp0_632, k2_51 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg6[0].q))
                            arg7 = temp0_632
                            arg6 = _mm256_srli_epi32(arg7, 0x15)
                            arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg7, 0xa), 0x7ff)
                            arg7 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 
                                            0x3ff), 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_623, temp0_615)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg8 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, zmm0))
                            arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg8 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg8, arg25), 
                                arg5, arg26, zmm5)
                            zmm0 = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm0)), arg25), 
                                arg5, arg27, zmm23)
                            zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            arg27[0].o = _mm_mask_xor_ps(arg5, arg27[0].o, arg27[0].o)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg7)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, arg8)
                            var_320_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                        case 4, 5, 6
                            goto label_140281850
                
                zmm0 = _mm256_mask_sub_ps(arg5, var_360_1, arg23)
                arg6 = _mm256_mask_sub_ps(arg5, var_340_1, arg22)
                arg7 = _mm256_mask_sub_ps(arg5, var_320_1, arg24)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg19, arg23)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg19, arg22)
                arg7 = _mm256_mask3_fmadd_ps(arg7, arg5, arg19, arg24)
                float var_4a0_2[0x8] = _mm256_mask_storeu_ps(k1_18, zmm0)
                float var_480_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg6)
                float var_460_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg7)
                arg23 = _mm256_mask_load_ps(arg5, var_4a0_2)
                arg22 = _mm256_mask_load_ps(arg5, var_480_2)
                arg24 = _mm256_mask_load_ps(arg5, var_460_2)
        else
            arg8 = _mm256_mask_mullo_epi32(arg5, arg28, zmm28)
            int64_t rsi_6 = sx.q(jump_table_140284020[r12_2])
            cond:4_1 = rsi_6 == -0x140284020
            
            switch (rsi_6)
                case -0x28fd
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg8)
                    int64_t k1_12 = _kxnor_mask16(arg5, arg5)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    int64_t k1_13
                    char temp0_410
                    temp0_410, k1_13 = _mm256_mmask_i32gather_ps(k1_12, *(arg4 + zmm0[0].q))
                    arg23 = temp0_410
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                    int64_t k1_14 = _kxnor_mask16(arg5, arg5)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    int64_t k1_15
                    char temp0_413
                    temp0_413, k1_15 = _mm256_mmask_i32gather_ps(k1_14, *(arg4 + arg7[0]))
                    arg22 = temp0_413
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                    int64_t k1_16 = _kxnor_mask16(arg5, arg5)
                    arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                    int64_t k1_17
                    char temp0_416
                    temp0_416, k1_17 = _mm256_mmask_i32gather_ps(k1_16, *(arg4 + zmm0[0].q))
                    arg24 = temp0_416
                case -0x28a0
                    goto label_140281780
                case -0x27ae
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg8)
                    int64_t r15_6 = sx.q(zmm0[0])
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rsi_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    arg7[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t rdi_19 = sx.q(arg7[0].d)
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                    int64_t rcx_121 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                    arg7[0].o = zx.o(*(var_540 + r15_6))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + r13_2), 1)
                    arg4 = var_540
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + r8), 2)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + rsi_10), 3)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + rdi_19), 4)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + r14_2), 5)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + r11_2), 6)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(var_540 + rcx_121), 7)
                    arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 2)
                    int64_t r8_1 = sx.q(arg8[0])
                    int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                    int64_t r11_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                    arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                    int64_t rdx_3 = sx.q(arg8[0])
                    int64_t rcx_124 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                    int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                    arg8[0].o = zx.o(*(arg4 + r8_1))
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r10_2), 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r11_3), 2)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r14_3), 3)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdx_3), 4)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rcx_124), 5)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rbx_9), 6)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdi_22), 7)
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                    int64_t r8_2 = sx.q(zmm0[0])
                    int32_t rdx_4 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_7 = sx.q(zmm0[0])
                    int32_t rcx_126 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1)
                    int64_t rbx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int32_t rsi_14 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3)
                    arg3 = var_508_1
                    zmm0[0].o = zx.o(*(arg4 + r8_2))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdx_4)), 1)
                    r11 = arg30
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_3), 2)
                    r10 = var_530
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_4), 3)
                    r14 = arg34
                    arg2 = var_510_1
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_7), 4)
                    r15_4 = var_534_1
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rcx_126)), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_12), 6)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_14)), 7)
                    arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                    zmm5 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, zmm5))
                    arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg7 = _mm256_mask_div_ps(arg5, arg7, arg22)
                    arg8 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg8[0].o), 
                            zmm5)), 
                        arg22)
                    zmm0 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            zmm5)), 
                        arg22)
                    zmm5 = _mm256_broadcast_ss(128f)
                    arg23 = _mm256_mask_mul_ps(arg5, arg7, zmm5)
                    arg22 = _mm256_mask_mul_ps(arg5, arg8, zmm5)
                    arg24 = _mm256_mask_mul_ps(arg5, zmm0, zmm5)
                case -0x2569
                    int64_t k1_19 = _kxnor_mask16(arg5, arg5)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    int64_t k1_20
                    char temp0_503
                    temp0_503, k1_20 = _mm256_mmask_i32gather_ps(k1_19, *(arg4 + arg15[0].q))
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 4)
                    int64_t k1_22
                    char temp0_505
                    temp0_505, k1_22 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg7[0]))
                    zmm5 = temp0_505
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 8)
                    int64_t k1_23 = _kxnor_mask16(arg5, arg5)
                    zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                    int64_t k1_24
                    char temp0_508
                    temp0_508, k1_24 = _mm256_mmask_i32gather_ps(k1_23, *(arg4 + arg7[0]))
                    zmm23 = temp0_508
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0xc)
                    int64_t k1_25 = _kxnor_mask16(arg5, arg5)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    int64_t k1_26
                    char temp0_511
                    temp0_511, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(arg4 + arg7[0]))
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x10)
                    int64_t k1_27 = _kxnor_mask16(arg5, arg5)
                    arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                    int64_t k1_28
                    char temp0_514
                    temp0_514, k1_28 = _mm256_mmask_i32gather_ps(k1_27, *(arg4 + arg7[0]))
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x14)
                    int64_t k1_29 = _kxnor_mask16(arg5, arg5)
                    arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
                    int64_t k1_30
                    char temp0_517
                    temp0_517, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(arg4 + arg7[0]))
                    arg25 = temp0_517
                    arg7 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg8)
                    int64_t k1_32
                    char temp0_520
                    temp0_520, k1_32 =
                        _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg4 + arg7[0]))
                    arg8 = temp0_520
                    arg7 = _mm256_srli_epi32(arg8, 0x15)
                    arg26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, arg8, 0xa), 0x7ff)
                    arg23 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_511, temp0_503)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg8 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg26, zmm0))
                    arg26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg22 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg8, arg26), arg5, 
                        temp0_514, zmm5)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, zmm0))
                    arg24 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, zmm0, arg26), arg5, 
                        arg25, zmm23)
                    zmm23[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
            
            var_4a0_1 = _mm256_mask_store_ps(arg5, arg23)
            var_480_1 = _mm256_mask_store_ps(arg5, arg22)
            var_460_1 = _mm256_mask_store_ps(arg5, arg24)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg28, arg18, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (rsi_6 != -0x140284020)
                goto label_1402817bf
        zmm0[0].o = _mm256_extractf32x4_ps(arg5, arg23, 1)
        arg6[0].o = _mm256_extractf32x4_ps(arg5, arg22, 1)
        zmm1[0].o = zx.o(0)
        arg7[0].o = _mm_mask_unpacklo_ps(arg5, arg24[0].o, zx.o(0))
        arg8[0].o = _mm_mask_unpackhi_ps(arg5, arg24[0].o, zx.o(0))
        zmm5[0].o = _mm_mask_unpacklo_ps(arg5, arg23[0].o, arg22[0].o)
        arg9[0].o = _mm_mask_unpackhi_ps(arg5, arg23[0].o, arg22[0].o)
        arg10[0].o = zmm5[0] | arg7[0] << 0x40
        int128_t var_2c0 = arg10[0].o
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        int128_t var_2b0_1 = arg7[0].o
        arg7[0].o = arg9[0].q | arg8[0].q << 0x40
        int128_t var_2a0_1 = arg7[0].o
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
        int128_t var_290_1 = arg7[0].o
        arg7[0].o = _mm256_extractf32x4_ps(arg5, arg24, 1)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, zx.o(0))
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, zx.o(0))
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        arg6[0].o = zmm5[0] | arg8[0].q << 0x40
        int128_t var_280_1 = arg6[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg8[0].o)
        int128_t var_270_1 = arg6[0].o
        arg6[0].o = zmm0[0].q | arg7[0] << 0x40
        int128_t var_260_1 = arg6[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t rcx_143
        int64_t rsi_21
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rsi_21 & rol.q(-2, rcx_143.b))
            uint64_t rcx_139 = _tzcnt_u64(i_1)
            int256_t var_2e0 = temp0_31
            rsi_21 = i_1 & not.q(1 << (rcx_139 u% 0x40))
            zmm0[0].o = (&var_2c0)[rcx_139]
            *(arg1 + sx.q(*(&var_2e0 + ((zx.q(rcx_139.d) & 7) << 2))) * 0x30 + 0x10) = zmm0[0].o
            rcx_143 = _tzcnt_u64(rsi_21)
            zmm0[0].o = (&var_2c0)[rcx_143]
            *(arg1 + sx.q(*(&var_2e0 + ((zx.q(rcx_143.d) & 7) << 2))) * 0x30 + 0x10) = zmm0[0].o
        
        r13 += 8
        cond:2_1 = r13 == r15_4
        cond:3_1 = r13 == r15_4
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    while (r13 s< r15_4)
    
    if (r13 s< r14)
        goto label_1402821b3
arg9[0].o = var_e8
arg10[0].o = var_d8
arg11[0].o = var_c8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14.o = var_88
arg15[0] = var_78
arg17[0].o = var_58
_mm256_zeroupper()
return arg1
