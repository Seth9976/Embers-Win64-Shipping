// 函数: sub_1402910f0
// 地址: 0x1402910f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t var_58[0x8] = arg16
uint128_t var_68 = arg15[0]
int128_t var_78 = arg14.o
int128_t var_88 = arg13[0].o
uint16_t zmm11[0x8]
uint16_t var_98[0x8] = zmm11
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
uint16_t zmm6[0x8]
uint16_t var_e8[0x8] = zmm6
int64_t r15 = sx.q(arg34)
uint32_t r13 = arg35
int64_t r14
r14.b = arg33
int32_t zmm30[0x8]
zmm30[0].o = _mm_mask_load_ss(arg5, arg32)
int32_t r11 = arg31
uint64_t rdx_1 = zx.q(*(&data_143442dc0 + (r15 << 2)) * *(&data_143442da0 + (r15 << 2)))
uint16_t* r12 = arg30
int32_t rcx_4 = ((r13 s>> 0x1f u>> 0x1d) + r13) & 0xfffffff8
int64_t r9
uint32_t r10
uint32_t zmm0[0x8]
float zmm1[0x8]
int64_t zmm5[0x4]
float zmm23[0x8]
int32_t zmm31[0x8]

if (rcx_4 s<= 0)
    r10 = 0
    r9 = arg2
    
    if (0 s< r13)
    label_140293246:
        arg27 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, r10), data_142fc93a0)
        zmm23 = _mm256_mask_set1_epi32(arg5, r13)
        uint64_t k1_33 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm23, arg27)
        zmm0 = _mm256_mask_slli_epi32(arg5, arg27, 3)
        int64_t k2_53
        char temp0_676
        temp0_676, k2_53 =
            _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), *(r9 + zmm0[0].q))
        arg12 = temp0_676
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm0 |= zmm1
        int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t k2_55
        char temp0_679
        temp0_679, k2_55 = _mm256_mmask_i32gather_epi32(k2_54, *(r9 + zmm0[0].q))
        arg6 = temp0_679
        zmm0[0].o = zx.o(arg4)
        zmm0 = _mm256_mullo_epi32(arg6, _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0]))
        int64_t k2_56 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
        int64_t k2_57
        char temp0_684
        temp0_684, k2_57 = _mm256_mmask_i32gather_epi32(k2_56, *(arg3 + zmm0[0].q))
        arg29 = temp0_684
        zmm0 = _mm256_add_epi32(zmm0, zmm1)
        int64_t k2_59
        char temp0_686
        temp0_686, k2_59 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + zmm0[0].q))
        zmm1 = temp0_686
        uint32_t r9_8 = _cvtmask32_u32(k1_33)
        arg17[0].o = _mm_mask_xor_epi32(arg5, arg17[0].o, arg17[0].o)
        arg23 = _mm256_mask_set1_epi32(arg5, rdx_1.d)
        int64_t k2_60 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm1, 2, 1)
        zmm0[0].o = zx.o(0)
        uint32_t rcx_150
        rcx_150.b = zx.o(0) f>= zmm30[0].o
        rcx_150.b = neg.b(rcx_150.b)
        arg28[0].o = _mm_mask_set1_epi8(arg5, rcx_150)
        zmm0[0].o = data_142fc92e0
        arg28[0].o = _mm_mask_mov_epi16(k2_60, zmm0[0].o)
        zmm0[0].o = _mm_mask_xor_epi64(arg5, arg28[0].o, zmm0[0].o)
        arg11[0].o = _mm_mask_mov_epi16(k1_33, zmm0[0].o)
        int64_t k3_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg11[0].o, data_142fc92e0)
        _kortest_mask8_u8(k3_21, k3_21)
        
        if (rcx_150.b == 0)
            arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
            arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
        else
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            arg18 = _mm256_mask_add_epi32(arg5, zmm1, arg6)
            
            if (zmm30[0].o f>= 1f)
                arg20 = _mm256_mask_mov_epi32(k3_21, arg18)
                arg22 = _mm256_mask_mov_epi64(arg5, arg20)
            else
                arg6[0].o = zx.o(r12)
                arg7 = _mm256_mask_cvtepi32_epi64(arg5, arg29[0].o)
                arg8[0].o = _mm256_extracti32x4_epi32(arg5, arg29, 1)
                arg8 = _mm256_cvtepi32_epi64(arg8[0].o)
                zmm1 = _mm256_mask_mullo_epi32(arg5, zmm1, arg23)
                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg9[0].o = 3
                arg6[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
                arg6 = _mm256_broadcastq_epi64(arg6[0].q)
                arg8 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg8), zmm5)
                zmm1 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg7), zmm1)
                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                arg17 = _mm256_mask_and_epi64(arg5, arg8, arg6)
                arg19 = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                char temp0_712 = _cvtmask32_u32(k3_21)
                uint32_t rdi_31 = r11 - 2
                zmm1 = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
                arg6 = _mm256_mask_cvtepi32_ps(arg5, arg18)
                zmm1 = _mm256_mul_ps(zmm1, arg6)
                arg6[0].o = arg20[0].o
                arg6[0] = float.s(r11 - 1)
                arg21[0].o = _mm_mask_mul_round_ss(arg5, arg6[0].o, zmm30[0].o)
                int32_t rdx_24 = int.d(arg21[0].o) s>> 0x1f
                rdx_1 = zx.q(rdx_24) & zx.q(not.d(rdx_24))
                
                if (rdi_31 s> rdx_1.d)
                    rdi_31 = rdx_1.d
                
                zmm1 = _mm256_cvttps_epi32(zmm1)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                arg20 = _mm256_mask_min_epi32(arg5, _mm256_max_epi32(zmm1, arg6), arg18)
                
                if (r11 s< 0x100)
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg20[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg19, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140293ac7
                        
                        goto label_140293723
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140293ac7:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 1)
                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_140293733
                        
                        goto label_140293adf
                    
                label_140293723:
                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_140293733:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140293b00
                        
                        goto label_140293741
                    
                label_140293adf:
                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg8[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140293b00:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_140293750
                        
                        goto label_140293b2b
                    
                label_140293741:
                    arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140293b2b:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140293b3f:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_140293762
                            
                            goto label_140293b50
                    else
                    label_140293750:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140293b3f
                    
                    bool cond:10_1
                    bool cond:12_1
                    bool cond:13_1
                    bool cond:18_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140293b50:
                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg7[0].q), 6)
                        cond:10_1 = temp0_712 == 0
                        cond:12_1 = temp0_712 == 0
                        cond:13_1 = temp0_712 == 0
                        cond:18_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140293b6c:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 7)
                    else
                    label_140293762:
                        cond:10_1 = temp0_712 == 0
                        cond:12_1 = temp0_712 == 0
                        cond:13_1 = temp0_712 == 0
                        cond:18_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140293b6c
                    
                    arg9[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm1[0].o &= arg9[0].o
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg22 = _mm256_mask_set1_epi32(arg5, rdi_31)
                    int64_t k4_4 = _mm256_cmp_epi32_mask(arg5, arg22, zmm1, 5)
                    arg24[0].o = _mm_movm_epi16(k4_4)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg11[0].o, arg24[0].o)
                    int64_t k0_4 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg9[0].o)
                    _kortest_mask8_u8(k0_4, k0_4)
                    arg25 = _mm256_mask_mov_epi64(k0_4, arg20)
                    
                    if (not(cond:10_1))
                        arg26 = _mm256_mask_blend_epi32(k4_4, arg20, arg18)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        zmm31 = _mm256_mask_sub_epi32(k0_4, arg20, arg10)
                        int64_t k0_5 = _mm256_cmp_epi32_mask(k4_4, zmm31, arg18, 2)
                        arg8[0].o = _mm_movm_epi16(k0_5)
                        arg7[0].o = arg11[0].o & arg8[0].o
                        k0_4 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_5, arg7[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_4, k0_4)
                        
                        if (cond:13_1)
                            arg25 = _mm256_mask_mov_epi64(k0_4, arg26)
                        else
                            char rdi_33 = _cvtmask32_u32(k0_4)
                            zmm30[0].o = _mm_mask_load_epi64(k0_4, data_142fc92e0)
                            zmm5 = _mm256_mask_mov_epi64(k0_4, arg20)
                            bool cond:28_1
                            
                            do
                                zmm1 = _mm256_mask_mov_epi64(k0_4, zmm31)
                                arg25 = _mm256_mask_add_epi64(k0_4, arg19, 
                                    _mm256_mask_cvtepi32_epi64(k0_4, zmm1[0].o))
                                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_4, arg7[0].o, zmm30[0].o)
                                char temp0_813 = _cvtmask32_u32(k0_6)
                                
                                if ((temp0_813 & 1) == 0)
                                    if ((temp0_813 & 2) != 0)
                                        goto label_14029381f
                                    
                                    goto label_140293923
                                
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg25[0].o), 0)
                                
                                if ((temp0_813 & 2) != 0)
                                label_14029381f:
                                    uint32_t rdx_37 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_37, 1)
                                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_813 & 4) == 0)
                                        goto label_140293933
                                    
                                    goto label_140293843
                                
                            label_140293923:
                                arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                                
                                if ((temp0_813 & 4) == 0)
                                label_140293933:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_813 & 8) != 0)
                                        goto label_140293867
                                    
                                    goto label_140293942
                                
                            label_140293843:
                                uint32_t rdx_39 =
                                    zx.d(*_mm256_extracti32x4_epi32(k0_6, arg25, 1)[0].q)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_39, 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_813 & 8) != 0)
                                label_140293867:
                                    uint32_t rdx_41 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                        _mm256_extracti32x4_epi32(k0_6, arg25, 1), 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_41, 3)
                                    arg25 = _mm256_mask_add_epi64(k0_6, arg17, arg7)
                                    
                                    if ((temp0_813 & 0x10) == 0)
                                        goto label_140293952
                                    
                                    goto label_140293888
                                
                            label_140293942:
                                arg25 = _mm256_mask_add_epi64(k0_6, arg17, arg7)
                                
                                if ((temp0_813 & 0x10) == 0)
                                label_140293952:
                                    
                                    if ((temp0_813 & 0x20) != 0)
                                        goto label_14029389e
                                    
                                    goto label_14029395c
                                
                            label_140293888:
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                    zx.d(*arg25[0].o), 4)
                                
                                if ((temp0_813 & 0x20) != 0)
                                label_14029389e:
                                    uint32_t rdx_45 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1))
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_45, 5)
                                    
                                    if ((temp0_813 & 0x40) == 0)
                                        goto label_140293966
                                    
                                    goto label_1402938b0
                                
                            label_14029395c:
                                
                                if ((temp0_813 & 0x40) != 0)
                                label_1402938b0:
                                    arg7[0].o = _mm256_extracti32x4_epi32(k0_6, arg25, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, 
                                        zx.d(*arg7[0].q), 6)
                                    
                                    if (temp0_813 s< 0)
                                    label_1402938cd:
                                        arg7[0].o = _mm256_extracti32x4_epi32(k0_6, arg25, 1)
                                        uint32_t rdx_49 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg6[0].o, rdx_49, 7)
                                else
                                label_140293966:
                                    
                                    if (temp0_813 s< 0)
                                        goto label_1402938cd
                                
                                arg7[0].o = arg6[0].o & arg9[0].o
                                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                                zmm6 = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_6, arg7, 
                                        arg22), 
                                    arg8[0].o)
                                arg7[0].o = zx.o(0)
                                int64_t k5_5 = _mm_mask_testn_epi16_mask(k0_6, zmm6, arg9[0].o)
                                zmm0[0].o = zmm6 & arg11[0].o
                                int64_t k0_7 = _mm_mask_test_epi16_mask(k0_6, zmm0[0].o, arg9[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_7))
                                cond:12_1 = rdi_33 == rdx_1.b
                                cond:18_1 = rdi_33 == rdx_1.b
                                cond:28_1 = rdi_33 != rdx_1.b
                                
                                if (rdi_33 != rdx_1.b)
                                    arg7[0].o = zmm6 ^ arg8[0].o
                                
                                _mm256_mask_mov_epi64(k0_7, zmm5)
                                arg25 = _mm256_mask_mov_epi32(k5_5, arg26)
                                zmm31 = _mm256_mask_sub_epi32(k0_7, zmm1, arg10)
                                arg8[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_7, zmm31, arg18, 2), arg7[0].o)
                                arg7[0].o = arg8[0].o & arg11[0].o
                                k0_4 = _mm_mask_test_epi16_mask(k0_7, arg7[0].o, arg9[0].o)
                                _kortest_mask8_u8(k0_4, k0_4)
                                rdi_33 = _cvtmask32_u32(k0_4)
                                zmm5 = zmm1
                                arg26 = _mm256_mask_mov_epi64(k0_4, arg25)
                            while (cond:28_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_4, arg24[0].o, 
                        data_142fc92e0)
                    arg6[0].o = arg11[0].o & zmm1[0].o
                    int64_t k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_4, 
                        arg6[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_11, k0_11)
                    
                    if (not(cond:12_1))
                        arg7 = _mm256_mask_mov_epi32(k4_4, arg25)
                        arg8[0].o = zx.o(0)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg20 = _mm256_mask_add_epi32(k0_11, arg20, arg10)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg20, arg8), 
                            zmm1[0].o)
                        arg6[0].o = zmm5[0].o & arg11[0].o
                        k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_11, arg6[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_11, k0_11)
                        
                        if (cond:18_1)
                            arg25 = _mm256_mask_mov_epi64(k0_11, arg7)
                        else
                            char rdi_35 = _cvtmask32_u32(k0_11)
                            arg26[0].o = _mm_mask_load_epi64(k0_11, data_142fc92e0)
                            bool cond:30_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg20[0].o)
                                arg24 = _mm256_mask_add_epi64(k0_11, arg19, zmm0)
                                int64_t k0_12 =
                                    _mm_mask_test_epi16_mask(k0_11, arg6[0].o, arg26[0].o)
                                char temp0_921 = _cvtmask32_u32(k0_12)
                                
                                if ((temp0_921 & 1) == 0)
                                    if ((temp0_921 & 2) != 0)
                                        goto label_140293e6f
                                    
                                    goto label_140293f6d
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg24[0].o), 0)
                                
                                if ((temp0_921 & 2) != 0)
                                label_140293e6f:
                                    uint32_t rdx_70 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg24[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_70, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_12, arg20, 1)
                                    
                                    if ((temp0_921 & 4) == 0)
                                        goto label_140293f7e
                                    
                                    goto label_140293e88
                                
                            label_140293f6d:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_12, arg20, 1)
                                
                                if ((temp0_921 & 4) == 0)
                                label_140293f7e:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_921 & 8) != 0)
                                        goto label_140293eab
                                    
                                    goto label_140293f8d
                                
                            label_140293e88:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg24, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_921 & 8) != 0)
                                label_140293eab:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg24, 1)
                                    uint32_t rdx_74 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_74, 3)
                                    arg24 = _mm256_mask_add_epi64(k0_12, arg17, arg6)
                                    
                                    if ((temp0_921 & 0x10) == 0)
                                        goto label_140293f9d
                                    
                                    goto label_140293ed9
                                
                            label_140293f8d:
                                arg24 = _mm256_mask_add_epi64(k0_12, arg17, arg6)
                                
                                if ((temp0_921 & 0x10) == 0)
                                label_140293f9d:
                                    
                                    if ((temp0_921 & 0x20) != 0)
                                        goto label_140293eef
                                    
                                    goto label_140293fa7
                                
                            label_140293ed9:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg24[0].o), 4)
                                
                                if ((temp0_921 & 0x20) != 0)
                                label_140293eef:
                                    uint32_t rdx_78 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg24[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_78, 5)
                                    
                                    if ((temp0_921 & 0x40) == 0)
                                        goto label_140293fb1
                                    
                                    goto label_140293f01
                                
                            label_140293fa7:
                                
                                if ((temp0_921 & 0x40) != 0)
                                label_140293f01:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg24, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_921 s< 0)
                                    label_140293f1e:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg24, 1)
                                        uint32_t rdx_82 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_82, 7)
                                else
                                label_140293fb1:
                                    
                                    if (temp0_921 s< 0)
                                        goto label_140293f1e
                                
                                zmm0[0].o = zmm1[0].o & arg9[0].o
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm6 = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_12, arg22, zmm0, 5), zmm5[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k4_11 = _mm_mask_testn_epi16_mask(k0_12, zmm6, arg9[0].o)
                                zmm0[0].o = zmm6 & arg11[0].o
                                int64_t k0_13 =
                                    _mm_mask_test_epi16_mask(k0_12, zmm0[0].o, arg9[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_13))
                                cond:30_1 = rdi_35 != rdx_1.b
                                
                                if (rdi_35 != rdx_1.b)
                                    arg6[0].o = zmm6 ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_13, arg20)
                                arg20 = _mm256_mask_add_epi32(k0_13, arg20, arg10)
                                arg25 = _mm256_mask_mov_epi32(k4_11, arg7)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_13, arg20, 
                                        arg8), 
                                    arg6[0].o)
                                arg6[0].o = zmm5[0].o & arg11[0].o
                                k0_11 = _mm_mask_test_epi16_mask(k0_13, arg6[0].o, arg9[0].o)
                                _kortest_mask8_u8(k0_11, k0_11)
                                rdi_35 = _cvtmask32_u32(k0_11)
                                arg7 = _mm256_mask_mov_epi64(k0_11, arg25)
                            while (cond:30_1)
                    
                    arg20 = _mm256_mask_mov_epi32(k3_21, arg25)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg20[0].o)
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg19, zmm0)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140294ed5
                        
                        goto label_14029431e
                    
                    arg8[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140294ed5:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_1.d, 1)
                        arg6[0].o = _mm256_extracti32x4_epi32(k0_11, arg20, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_14029432e
                        
                        goto label_140294eed
                    
                label_14029431e:
                    arg6[0].o = _mm256_extracti32x4_epi32(k0_11, arg20, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_14029432e:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140294f0e
                        
                        goto label_14029433c
                    
                label_140294eed:
                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140294f0e:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_1.d, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_11, arg17, arg6)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14029434b
                        
                        goto label_140294f39
                    
                label_14029433c:
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg17, arg6)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140294f39:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm1[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140294f4d:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14029435d
                            
                            goto label_140294f5e
                    else
                    label_14029434b:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140294f4d
                    
                    bool cond:26_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140294f5e:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 6)
                        cond:26_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140294f7a:
                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_1.d, 7)
                    else
                    label_14029435d:
                        cond:26_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140294f7a
                    
                    arg22 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_11, arg11[0].o, arg9[0].o), arg25, 
                        _mm256_cmpeq_epi32(zmm0, zmm0))
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg22, arg18), 
                        arg11[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_11, zmm1[0].o, arg9[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:26_1))
                        arg18 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg9[0].o), arg22)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg18)
                    
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg22[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg19, zmm0)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140294fac
                        
                        goto label_1402943be
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg6[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140294fac:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 1)
                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_1402943ce
                        
                        goto label_140294fc4
                    
                label_1402943be:
                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_1402943ce:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140294fe5
                        
                        goto label_1402943dc
                    
                label_140294fc4:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140294fe5:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_1402943eb
                        
                        goto label_140295010
                    
                label_1402943dc:
                    arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140295010:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140295024:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_1402943fd
                            
                            goto label_140295035
                    else
                    label_1402943eb:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140295024
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140295035:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 6)
                        arg7[0].o = arg8[0].o & arg9[0].o
                        
                        if (temp0_712 s< 0)
                        label_140295055:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 7)
                    else
                    label_1402943fd:
                        arg7[0].o = arg8[0].o & arg9[0].o
                        
                        if (temp0_712 s< 0)
                            goto label_140295055
                    
                    arg6 = _mm256_cvtepu16_epi32(arg7[0].o)
                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                    label_14029442a:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(zmm1, arg6), 1)
                        zmm1 = _mm256_mask_broadcastss_ps(arg5, arg21[0].o)
                        arg6 = _mm256_cvtepi32_ps(arg6)
                        zmm1 = _mm256_sub_ps(zmm1, arg6)
                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                        arg7 = _mm256_div_ps(zmm1, zmm0)
                else
                    arg7 = _mm256_mask_add_epi32(arg5, arg20, arg20)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg19, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140293a00
                        
                        goto label_140293431
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140293a00:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_140293440
                        
                        goto label_140293a1a
                    
                label_140293431:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_140293440:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140293a38
                        
                        goto label_14029344e
                    
                label_140293a1a:
                    arg8[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg8[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140293a38:
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14029345d
                        
                        goto label_140293a5d
                    
                label_14029344e:
                    arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140293a5d:
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140293a6b:
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14029346f
                            
                            goto label_140293a7f
                    else
                    label_14029345d:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140293a6b
                    
                    bool cond:11_1
                    bool cond:14_1
                    bool cond:15_1
                    bool cond:19_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140293a7f:
                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg7[0].q, 6)
                        cond:11_1 = temp0_712 == 0
                        cond:14_1 = temp0_712 == 0
                        cond:15_1 = temp0_712 == 0
                        cond:19_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140293a98:
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 7)
                    else
                    label_14029346f:
                        cond:11_1 = temp0_712 == 0
                        cond:14_1 = temp0_712 == 0
                        cond:15_1 = temp0_712 == 0
                        cond:19_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140293a98
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg22 = _mm256_mask_set1_epi32(arg5, rdi_31)
                    int64_t k4_3 = _mm256_cmp_epi32_mask(arg5, arg22, zmm1, 5)
                    arg24[0].o = _mm_movm_epi16(k4_3)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg11[0].o, arg24[0].o)
                    int64_t k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0, k0)
                    arg6 = _mm256_mask_mov_epi64(k0, arg20)
                    
                    if (not(cond:11_1))
                        arg25 = _mm256_mask_blend_epi32(k4_3, arg20, arg18)
                        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
                        arg10 = _mm256_mask_sub_epi32(k0, arg20, arg9)
                        int64_t k0_1 = _mm256_cmp_epi32_mask(k4_3, arg10, arg18, 2)
                        zmm5[0].o = _mm_movm_epi16(k0_1)
                        arg7[0].o = arg11[0].o & zmm5[0].o
                        k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_1, arg7[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (cond:15_1)
                            arg6 = _mm256_mask_mov_epi64(k0, arg25)
                        else
                            char rdi_32 = _cvtmask32_u32(k0)
                            zmm31[0].o = _mm_mask_load_epi64(k0, data_142fc92e0)
                            arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            zmm30 = _mm256_mask_mov_epi64(k0, arg20)
                            bool cond:29_1
                            
                            do
                                arg26 = _mm256_mask_mov_epi64(k0, arg10)
                                arg10 = _mm256_add_epi32(arg10, arg10)
                                arg6 = _mm256_mask_add_epi64(k0, arg19, 
                                    _mm256_cvtepi32_epi64(arg10[0].o))
                                int64_t k0_2 = _mm_mask_test_epi16_mask(k0, arg7[0].o, zmm31[0].o)
                                char temp0_759 = _cvtmask32_u32(k0_2)
                                
                                if ((temp0_759 & 1) == 0)
                                    if ((temp0_759 & 2) != 0)
                                        goto label_140293524
                                    
                                    goto label_140293617
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 0)
                                
                                if ((temp0_759 & 2) != 0)
                                label_140293524:
                                    int64_t rdx_26 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_26, 1)
                                    arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                    
                                    if ((temp0_759 & 4) == 0)
                                        goto label_140293627
                                    
                                    goto label_140293545
                                
                            label_140293617:
                                arg7[0].o = _mm256_extracti128_si256(arg10, 1)
                                
                                if ((temp0_759 & 4) == 0)
                                label_140293627:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_759 & 8) != 0)
                                        goto label_14029355e
                                    
                                    goto label_140293636
                                
                            label_140293545:
                                uint16_t* rdx_27 = _mm256_extracti128_si256(arg6, 1)[0].q
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_27, 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_759 & 8) != 0)
                                label_14029355e:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_28, 3)
                                    arg6 = _mm256_mask_add_epi64(k0_2, arg17, arg7)
                                    
                                    if ((temp0_759 & 0x10) == 0)
                                        goto label_140293646
                                    
                                    goto label_140293584
                                
                            label_140293636:
                                arg6 = _mm256_mask_add_epi64(k0_2, arg17, arg7)
                                
                                if ((temp0_759 & 0x10) == 0)
                                label_140293646:
                                    
                                    if ((temp0_759 & 0x20) != 0)
                                        goto label_140293593
                                    
                                    goto label_140293650
                                
                            label_140293584:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                                
                                if ((temp0_759 & 0x20) != 0)
                                label_140293593:
                                    int64_t rdx_30 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_30, 5)
                                    
                                    if ((temp0_759 & 0x40) == 0)
                                        goto label_14029365a
                                    
                                    goto label_1402935a8
                                
                            label_140293650:
                                
                                if ((temp0_759 & 0x40) != 0)
                                label_1402935a8:
                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg7[0].q, 6)
                                    
                                    if (temp0_759 s< 0)
                                    label_1402935c1:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        int64_t rdx_32 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_32, 7)
                                else
                                label_14029365a:
                                    
                                    if (temp0_759 s< 0)
                                        goto label_1402935c1
                                
                                arg6 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_2, arg6, 
                                        arg22), 
                                    zmm5[0].o)
                                arg7[0].o = zx.o(0)
                                int64_t k5_2 = _mm_mask_testn_epi16_mask(k0_2, arg6[0].o, arg8[0].o)
                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_2, 
                                    arg6[0].o & arg11[0].o, arg8[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_3))
                                cond:14_1 = rdi_32 == rdx_1.b
                                cond:19_1 = rdi_32 == rdx_1.b
                                cond:29_1 = rdi_32 != rdx_1.b
                                
                                if (rdi_32 != rdx_1.b)
                                    arg7[0].o = arg6[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_3, zmm30)
                                arg6 = _mm256_mask_mov_epi32(k5_2, arg25)
                                arg10 = _mm256_mask_sub_epi32(k0_3, arg26, arg9)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_3, arg10, arg18, 2), arg7[0].o)
                                arg7[0].o = zmm5[0].o & arg11[0].o
                                k0 = _mm_mask_test_epi16_mask(k0_3, arg7[0].o, arg8[0].o)
                                _kortest_mask8_u8(k0, k0)
                                rdi_32 = _cvtmask32_u32(k0)
                                zmm30 = _mm256_mask_mov_epi64(k0, arg26)
                                arg25 = _mm256_mask_mov_epi64(k0, arg6)
                            while (cond:29_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0, arg24[0].o, 
                        data_142fc92e0)
                    arg7[0].o = arg11[0].o & zmm1[0].o
                    int64_t k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, arg7[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0_8, k0_8)
                    
                    if (not(cond:14_1))
                        arg7 = _mm256_mask_mov_epi32(k4_3, arg6)
                        arg25[0].o = _mm_mask_xor_epi32(k0_8, arg25[0].o, arg25[0].o)
                        arg10 = _mm256_cmpeq_epi32(arg10, arg10)
                        arg24 = _mm256_mask_add_epi32(k0_8, arg20, arg10)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg24, arg25), 
                            zmm1[0].o)
                        arg9[0].o = zmm5[0].o & arg11[0].o
                        k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_8, arg9[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_8, k0_8)
                        
                        if (cond:19_1)
                            arg6 = arg7
                        else
                            char rdi_34 = _cvtmask32_u32(k0_8)
                            arg20[0].o = _mm_mask_load_epi64(k0_8, data_142fc92e0)
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            bool cond:31_1
                            
                            do
                                arg26 = _mm256_mask_add_epi32(k0_8, arg24, arg24)
                                arg6 = _mm256_mask_add_epi64(k0_8, arg19, 
                                    _mm256_mask_cvtepi32_epi64(k0_8, arg26[0].o))
                                int64_t k0_9 = _mm_mask_test_epi16_mask(k0_8, arg9[0].o, arg20[0].o)
                                char temp0_884 = _cvtmask32_u32(k0_9)
                                
                                if ((temp0_884 & 1) == 0)
                                    if ((temp0_884 & 2) != 0)
                                        goto label_140293c24
                                    
                                    goto label_140293d13
                                
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 0)
                                
                                if ((temp0_884 & 2) != 0)
                                label_140293c24:
                                    uint16_t* rdx_59 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_59, 1)
                                    arg9[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                    
                                    if ((temp0_884 & 4) == 0)
                                        goto label_140293d24
                                    
                                    goto label_140293c46
                                
                            label_140293d13:
                                arg9[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                
                                if ((temp0_884 & 4) == 0)
                                label_140293d24:
                                    arg26 = _mm256_mask_cvtepi32_epi64(k0_9, arg9[0].o)
                                    
                                    if ((temp0_884 & 8) != 0)
                                        goto label_140293c60
                                    
                                    goto label_140293d34
                                
                            label_140293c46:
                                uint16_t* rdx_60 = _mm256_extracti128_si256(arg6, 1)[0].q
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_60, 2)
                                arg26 = _mm256_mask_cvtepi32_epi64(k0_9, arg9[0].o)
                                
                                if ((temp0_884 & 8) != 0)
                                label_140293c60:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    uint16_t* rdx_61 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_61, 3)
                                    arg6 = _mm256_mask_add_epi64(k0_9, arg17, arg26)
                                    
                                    if ((temp0_884 & 0x10) == 0)
                                        goto label_140293d44
                                    
                                    goto label_140293c86
                                
                            label_140293d34:
                                arg6 = _mm256_mask_add_epi64(k0_9, arg17, arg26)
                                
                                if ((temp0_884 & 0x10) == 0)
                                label_140293d44:
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                        goto label_140293c95
                                    
                                    goto label_140293d4e
                                
                            label_140293c86:
                                arg8[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 4)
                                
                                if ((temp0_884 & 0x20) != 0)
                                label_140293c95:
                                    uint16_t* rdx_63 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_63, 5)
                                    
                                    if ((temp0_884 & 0x40) == 0)
                                        goto label_140293d58
                                    
                                    goto label_140293caa
                                
                            label_140293d4e:
                                
                                if ((temp0_884 & 0x40) != 0)
                                label_140293caa:
                                    arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg9[0].q, 6)
                                    
                                    if (temp0_884 s< 0)
                                    label_140293cc3:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        uint16_t* rdx_65 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rdx_65, 7)
                                else
                                label_140293d58:
                                    
                                    if (temp0_884 s< 0)
                                        goto label_140293cc3
                                
                                arg6 = _mm256_cvtepu16_epi32(arg8[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_9, arg22, arg6, 5), zmm5[0].o)
                                arg9[0].o = zx.o(0)
                                int64_t k4_7 = _mm_mask_testn_epi16_mask(k0_9, arg6[0].o, zmm1[0].o)
                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, 
                                    arg6[0].o & arg11[0].o, zmm1[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_10))
                                cond:31_1 = rdi_34 != rdx_1.b
                                
                                if (rdi_34 != rdx_1.b)
                                    arg9[0].o = arg6[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_10, arg24)
                                arg24 = _mm256_mask_add_epi32(k0_10, arg24, arg10)
                                arg6 = _mm256_mask_mov_epi32(k4_7, arg7)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_10, arg24, 
                                        arg25), 
                                    arg9[0].o)
                                arg9[0].o = zmm5[0].o & arg11[0].o
                                k0_8 = _mm_mask_test_epi16_mask(k0_10, arg9[0].o, zmm1[0].o)
                                _kortest_mask8_u8(k0_8, k0_8)
                                rdi_34 = _cvtmask32_u32(k0_8)
                                arg7 = arg6
                            while (cond:31_1)
                    
                    arg20 = _mm256_mask_mov_epi32(k3_21, arg6)
                    arg7 = _mm256_mask_add_epi32(k0_8, arg20, arg20)
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg19, _mm256_cvtepi32_epi64(arg7[0].o))
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140294185
                        
                        goto label_140294061
                    
                    arg9[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140294185:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdx_1, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_140294070
                        
                        goto label_14029419f
                    
                label_140294061:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_140294070:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_1402941bd
                        
                        goto label_14029407e
                    
                label_14029419f:
                    arg8[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg8[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_1402941bd:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdx_1, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_8, arg17, arg7)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14029408d
                        
                        goto label_1402941e2
                    
                label_14029407e:
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg17, arg7)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_1402941e2:
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm1[0].q, 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_1402941f0:
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdx_1, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14029409f
                            
                            goto label_140294204
                    else
                    label_14029408d:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_1402941f0
                    
                    bool cond:27_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140294204:
                        arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg7[0].q, 6)
                        cond:27_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_14029421d:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rdx_1, 7)
                    else
                    label_14029409f:
                        cond:27_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_14029421d
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    arg22 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_8, arg11[0].o, zmm1[0].o), arg6, 
                        _mm256_cmpeq_epi32(arg7, arg7))
                    arg6[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg22, arg18), 
                        arg11[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, zmm1[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:27_1))
                        arg18 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), arg22)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg18)
                    
                    arg7 = _mm256_mask_add_epi32(arg5, arg22, arg22)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg19, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140294246
                        
                        goto label_14029410e
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg6[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140294246:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_14029411d
                        
                        goto label_140294260
                    
                label_14029410e:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_14029411d:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_14029427e
                        
                        goto label_14029412b
                    
                label_140294260:
                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_14029427e:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14029413a
                        
                        goto label_1402942a3
                    
                label_14029412b:
                    arg6 = _mm256_mask_add_epi64(arg5, arg17, arg7)
                    
                    if ((temp0_712 & 0x10) == 0)
                    label_14029413a:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_1402942b1
                        
                        goto label_140294143
                    
                label_1402942a3:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg6[0].q, 4)
                    
                    if ((temp0_712 & 0x20) != 0)
                    label_1402942b1:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 5)
                        
                        if ((temp0_712 & 0x40) == 0)
                            goto label_14029414c
                        
                        goto label_1402942c5
                    
                label_140294143:
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_1402942c5:
                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_712 s< 0)
                        label_1402942de:
                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 7)
                    else
                    label_14029414c:
                        
                        if (temp0_712 s< 0)
                            goto label_1402942de
                    
                    arg6 = _mm256_cvtepu16_epi32(arg9[0].o)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg7[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                        goto label_14029442a
                
                zmm0[0].o =
                    __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg28[0].o, data_142fc92e0)
                arg17 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    arg7)
        
        rdx_1.b = r15.d == 3
        rdx_1.b = neg.b(rdx_1.b)
        zmm0[0].o = _mm_mask_set1_epi8(arg5, rdx_1.d)
        int64_t k0_15 = _kor_mask8(k2_60, 
            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0))
        zmm5 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(k0_15), 0x18)
        uint64_t rbx_26 = zx.q(r15.d)
        bool cond:5_1 = r15.d != 6
        float var_4e0_1[0x8]
        float var_4c0_1[0x8]
        int64_t var_4a0_1[0x4]
        int64_t k1_35
        
        if (r15.d u> 6)
        label_140294512:
            zmm0[0].o = zx.o(0)
            var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            var_4c0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
        label_14029494f:
            var_4a0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg20, arg22, 4), zmm23, arg27)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (cond:5_1)
            label_14029476a:
                
                if (r15.d u<= 6)
                    _mm256_mask_mullo_epi32(k0_15, arg22, arg23)
                    jump(sx.q((&jump_table_1402950c4)[rbx_26]) + &jump_table_1402950c4)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                uint32_t var_400_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                float var_3e0_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                float var_3c0_1[0x8] = _mm256_mask_storeu_ps(k1_35, zmm0)
                arg7 = var_4e0_1
                arg8 = var_4c0_1
                zmm5 = var_4a0_1
                zmm0 = _mm256_sub_ps(var_400_1, arg7)
                zmm1 = _mm256_sub_ps(var_3e0_1, arg8)
                arg6 = _mm256_sub_ps(var_3c0_1, zmm5)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, k0_15, arg17, arg7)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_15, arg17, arg8)
                arg6 = _mm256_mask3_fmadd_ps(arg6, k0_15, arg17, zmm5)
                var_4e0_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                var_4c0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                var_4a0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
        else
            zmm1 = _mm256_mask_mullo_epi32(k0_15, arg20, arg23)
            int64_t rdi_36 = sx.q(jump_table_1402950a8[rbx_26])
            cond:5_1 = rdi_36 != -0x1402950a8
            
            switch (rdi_36)
                case -0xbf9
                    zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(k0_15, zmm5, arg29), zmm1)
                    uint64_t k2_62 = _cvtu32_mask32(r9_8)
                    int64_t k3_30
                    char temp0_1018
                    temp0_1018, k3_30 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_62), *(r12 + zmm0[0].q))
                    zmm1 = temp0_1018
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 4)
                    int64_t k3_31 = __kmovq_maskmskw_masku64_avx512(k2_62)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k3_32
                    char temp0_1021
                    temp0_1021, k3_32 = _mm256_mmask_i32gather_ps(k3_31, *(r12 + arg6[0].q))
                    arg7 = temp0_1021
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 8)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k2_63
                    char temp0_1024
                    temp0_1024, k2_63 = _mm256_mmask_i32gather_ps(k2_62, *(r12 + zmm0[0].q))
                    arg6 = temp0_1024
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, arg7)
                case -0xb96
                    goto label_140294512
                case -0xb7d
                    zmm0 = _mm256_mask_add_epi32(k0_15, zmm5, arg29)
                    arg6 = _mm256_add_epi32(zmm0, zmm1)
                    zmm0 = _mm256_mask_add_epi32(k1_33, zmm0, zmm1)
                    int64_t r8_7 = sx.q(zmm0[0])
                    int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_5 = sx.q(zmm0[0])
                    int64_t rdi_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rsi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rcx_153 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(r12 + r8_7))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_6), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_7), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r14_1), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r15_5), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_40), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_27), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_153), 7)
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg6, 2)
                    int64_t r8_8 = sx.q(zmm1[0])
                    int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t r15_6 = sx.q(zmm1[0])
                    int64_t rdx_89 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t rdi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(r12 + r8_8))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r10_7), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_8), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r14_2), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r15_6), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdx_89), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdi_43), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_30), 7)
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg6, 4)
                    int64_t r8_9 = sx.q(arg6[0])
                    int32_t rdx_90 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                    int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    int64_t r15_7 = sx.q(arg6[0])
                    int32_t rdi_45 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1)
                    int64_t rdx_92 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int32_t rsi_32 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3)
                    arg6[0].o = zx.o(*(r12 + r8_9))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + sx.q(rdx_90)), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r10_8), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r14_3), 3)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r15_7), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + sx.q(rdi_45)), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdx_92), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + sx.q(rsi_32)), 7)
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
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                case -0x89a
                    uint64_t k2_64 = _cvtu32_mask32(r9_8)
                    int64_t k3_34
                    char temp0_1101
                    temp0_1101, k3_34 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg29[0].q))
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 4)
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k3_36
                    char temp0_1104
                    temp0_1104, k3_36 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg6[0].q))
                    arg7 = temp0_1104
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 8)
                    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                    int64_t k3_38
                    char temp0_1107
                    temp0_1107, k3_38 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg6[0].q))
                    arg8 = temp0_1107
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0xc)
                    arg18[0].o = _mm_mask_xor_epi32(k0_15, arg18[0].o, arg18[0].o)
                    int64_t k3_40
                    char temp0_1110
                    temp0_1110, k3_40 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg6[0].q))
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0x10)
                    arg19[0].o = _mm_mask_xor_ps(k0_15, arg19[0].o, arg19[0].o)
                    int64_t k3_42
                    char temp0_1113
                    temp0_1113, k3_42 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg6[0].q))
                    arg21 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg29, 0x14)
                    arg24[0].o = _mm_mask_xor_epi32(k0_15, arg24[0].o, arg24[0].o)
                    int64_t k3_44
                    char temp0_1116
                    temp0_1116, k3_44 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_64), *(r12 + arg21[0].q))
                    int64_t k2_65
                    char temp0_1119
                    temp0_1119, k2_65 = _mm256_mmask_i32gather_epi32(k2_64, 
                        *(r12 + _mm256_mask_add_epi32(k0_15, 
                            _mm256_mask_add_epi32(k0_15, zmm5, arg29), zmm1)[0].q))
                    arg6 = temp0_1119
                    zmm1 = _mm256_srli_epi32(arg6, 0x15)
                    arg21 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                        _mm256_mask_srli_epi32(k0_15, arg6, 0xa), 0x7ff)
                    arg6 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_15, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg6, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        k0_15, temp0_1110, temp0_1101)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg18 =
                        _mm256_mask_cvtepi32_ps(k0_15, _mm256_mask_add_epi32(k0_15, arg21, zmm0))
                    arg21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_15, 1023f)
                    arg18 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_15, arg18, arg21), k0_15, 
                        temp0_1113, arg7)
                    zmm0 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(k0_15, _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), 
                            arg21), 
                        k0_15, temp0_1116, arg8)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, arg6)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, arg18)
                    goto label_14029494f
            
            var_4a0_1 = _mm256_mask_storeu_ps(k1_33, arg6)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg20, arg22, 4), zmm23, arg27)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (rdi_36 != -0x1402950a8)
                goto label_14029476a
        zmm0[0].o = var_4e0_1[0].o
        zmm1[0].o = var_4e0_1[4].o
        arg6[0].o = var_4c0_1[0].o
        int128_t var_4b0
        arg7[0].o = var_4b0
        arg8[0].o = var_4a0_1[0].o
        zmm5[0].o = var_4a0_1[2].o
        arg17[0].o = _mm_mask_xor_epi32(k0_15, arg17[0].o, arg17[0].o)
        zmm6 = _mm_mask_unpacklo_epi32(k0_15, arg8[0].o, arg17[0].o)
        arg8[0].o = _mm_mask_unpackhi_epi32(k0_15, arg8[0].o, arg17[0].o)
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm6)
        int128_t var_240 = arg6[0].o
        arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm6)
        int128_t var_230_1 = arg6[0].o
        arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_220_1 = arg6[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_epi32(k0_15, zmm5[0].o, arg17[0].o)
        arg6[0].o = _mm_mask_unpackhi_epi32(k0_15, zmm5[0].o, arg17[0].o)
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
        uint64_t i = zx.q(r9_8.b)
        
        do
            uint64_t rcx_161 = _tzcnt_u64(i)
            uint32_t var_120[0x8] = arg12
            zmm0[0].o = (&var_240)[rcx_161]
            *(arg1 + sx.q(var_120[zx.q(rcx_161.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i &= rol.q(-2, rcx_161.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0 = _mm256_slli_epi32(zmm0, 2)
    arg10 = _mm256_broadcastd_epi32(zmm0[0])
    zmm0[0].o = zx.o(r12)
    arg12 = _mm256_mask_set1_epi32(arg5, rdx_1.d)
    zmm1[0].o = 3
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0 = _mm256_broadcastq_epi64(zmm0[0].q)
    uint32_t var_160_1[0x8] = zmm0
    zmm0[0].o = zx.o(0)
    int64_t rsi
    rsi.b = zx.o(0) f>= zmm30[0].o
    rsi.b = neg.b(rsi.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rsi.d)
    int128_t var_2f0_1 = zmm0[0].o
    uint32_t rsi_1 = r11 - 2
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(r11 - 1)
    float var_180_1[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
    zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm30[0].o)
    int32_t rcx_6 = int.d(zmm0[0])
    int32_t rcx_7 = rcx_6 & not.d(rcx_6 s>> 0x1f)
    
    if (rsi_1 s> rcx_7)
        rsi_1 = rcx_7
    
    arg17 = _mm256_mask_set1_epi32(arg5, rsi_1)
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    uint32_t var_1c0_1[0x8] = zmm0
    rcx_7.b = r15.d == 3
    rcx_7.b = neg.b(rcx_7.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rcx_7)
    r10 = 0
    bool cond:2_1 = true
    bool cond:3_1 = true
    arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
    float var_140_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    float var_1a0_1[0x8] = _mm256_broadcast_sd(-nan.0)
    zmm11 = data_142fc92e0
    arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    arg5 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    int64_t var_508_1 = arg3
    r9 = arg2
    int32_t var_420_1[0x8] = arg10
    
    do
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r10), 3), 
            data_143442140)
        int64_t k1_2
        char temp0_33
        temp0_33, k1_2 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r9 + zmm1[0].q))
        zmm0 = var_140_1
        int64_t k1_4
        char temp0_34
        temp0_34, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r9 + (zmm1 | zmm0)[0].q))
        zmm1 = _mm256_mullo_epi32(temp0_34, arg10)
        int64_t k1_6
        char temp0_36
        temp0_36, k1_6 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + zmm1[0].q))
        arg15 = temp0_36
        zmm1 = _mm256_add_epi32(zmm1, zmm0)
        int64_t k1_8
        char temp0_38
        temp0_38, k1_8 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + zmm1[0].q))
        arg6 = temp0_38
        int64_t k1_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg6, 2, 1)
        zmm0[0].o = var_2f0_1
        zmm23[0].o =
            __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_9, zmm0[0].o, data_142fc92e0)
        int64_t k2_1 = _mm_mask_test_epi16_mask(arg5, zmm23[0].o, zmm11)
        _kortest_mask8_u8(k2_1, k2_1)
        
        if (not(cond:2_1))
            int64_t k2_2 = _mm_mask_testn_epi16_mask(arg5, zmm23[0].o, zmm11)
            arg28 = _mm256_mask_mov_epi32(k2_2, arg28)
            arg25 = _mm256_mask_mov_epi32(k2_2, arg25)
        
        zmm31[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, zmm11)
        int64_t k2_3 = _mm_cmp_epi16_mask(arg5, zmm31[0].o, arg24[0].o, 4)
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        _kortest_mask8_u8(k2_3, k2_3)
        
        if (not(cond:3_1))
            arg13 = _mm256_add_epi32(arg6, arg11)
            
            if (zmm30[0].o f>= 1f)
                int64_t k2_5 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11)
                arg28 = _mm256_mask_blend_epi32(k2_5, arg13, arg28)
                arg13 = _mm256_mask_mov_epi32(k2_5, arg25)
                arg25 = _mm256_mask_mov_epi64(arg5, arg13)
            else
                zmm1[0].o = _mm256_extracti128_si256(arg15, 1)
                zmm0 = arg12
                arg6 = _mm256_mullo_epi32(arg6, arg12)
                arg7 = _mm256_cvtepi32_epi64(arg15[0])
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                zmm5[0].o = _mm256_extracti128_si256(arg6, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                arg18 = _mm256_mask_load_epi64(arg5, var_160_1)
                zmm1 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, arg18, zmm1), zmm5)
                arg6 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, arg18, arg7), arg6)
                arg18 = _mm256_mask_and_epi64(arg5, zmm1, var_1a0_1)
                arg23 = _mm256_mask_and_epi64(arg5, arg6, var_1a0_1)
                arg19[0].o = _mm_mask_xor_epi64(arg5, zmm23[0].o, arg24[0].o)
                char temp0_60 = _cvtmask32_u32(k2_3)
                arg12 = _mm256_min_epi32(
                    _mm256_mask_max_epi32(arg5, 
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg13), 
                            var_180_1)), 
                        arg29), 
                    arg13)
                
                if (r11 s< 0x100)
                    zmm1 = _mm256_cvtepi32_epi64(arg12[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    int128_t var_310
                    arg8[0].o = var_310
                    
                    if ((temp0_60 & 1) == 0)
                        if ((temp0_60 & 2) != 0)
                            goto label_140291bd0
                        
                        goto label_140291829
                    
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg6[0].q), 0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_140291bd0:
                        uint16_t rcx_53[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_53, 1)
                        var_1a0_1[0].o = _mm256_extracti128_si256(arg12, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_140291839
                        
                        goto label_140291be8
                    
                label_140291829:
                    var_1a0_1[0].o = _mm256_extracti128_si256(arg12, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_140291839:
                        arg7 = _mm256_cvtepi32_epi64(var_1a0_1[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140291c0a
                        
                        goto label_140291848
                    
                label_140291be8:
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm1[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(var_1a0_1[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140291c0a:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint16_t rcx_57[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_57, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_140291858
                        
                        goto label_140291c36
                    
                label_140291848:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140291c36:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_140291c4b:
                            uint16_t rcx_61[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_61, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_14029186c
                            
                            goto label_140291c5d
                    else
                    label_140291858:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140291c4b
                    
                    bool cond:16_1
                    bool cond:20_1
                    bool cond:22_1
                    bool cond:24_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_140291c5d:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm1[0].q), 6)
                        cond:16_1 = temp0_60 == 0
                        cond:20_1 = temp0_60 == 0
                        cond:22_1 = temp0_60 == 0
                        cond:24_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140291c79:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t rcx_65[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_65, 7)
                    else
                    label_14029186c:
                        cond:16_1 = temp0_60 == 0
                        cond:20_1 = temp0_60 == 0
                        cond:22_1 = temp0_60 == 0
                        cond:24_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140291c79
                    
                    arg22[0].o = __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(arg5, 0xff)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, arg22[0].o)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    int64_t k2_6 = _mm256_cmp_epi32_mask(arg5, arg17, zmm1, 5)
                    arg26[0].o = _mm_movm_epi16(k2_6)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg26[0].o, arg19[0].o)
                    int64_t k3_9 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg22[0].o)
                    _kortest_mask8_u8(k3_9, k3_9)
                    var_310 = arg8[0].o
                    
                    if (cond:16_1)
                        arg7 = arg12
                    else
                        zmm30 = _mm256_mask_blend_epi32(k2_6, arg12, arg13)
                        arg6 = _mm256_sub_epi32(arg12, arg11)
                        arg29[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_6, arg6, arg13, 2))
                        zmm6 = _mm_mask_and_epi64(arg5, arg29[0].o, arg19[0].o)
                        int64_t k3_11 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k3_11, k3_11)
                        
                        if (cond:20_1)
                            arg7 = _mm256_mask_mov_epi64(arg5, zmm30)
                        else
                            char rsi_3 = _cvtmask32_u32(k3_11)
                            bool cond:33_1
                            
                            do
                                arg24 = _mm256_mask_mov_epi64(arg5, arg6)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg24[0].o)
                                arg7 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                                char temp0_153 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_153 & 1) == 0)
                                    if ((temp0_153 & 2) != 0)
                                        goto label_14029191e
                                    
                                    goto label_140291a21
                                
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*arg7[0].q), 0)
                                
                                if ((temp0_153 & 2) != 0)
                                label_14029191e:
                                    uint16_t rcx_27[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_27, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                    
                                    if ((temp0_153 & 4) == 0)
                                        goto label_140291a31
                                    
                                    goto label_140291938
                                
                            label_140291a21:
                                arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                
                                if ((temp0_153 & 4) == 0)
                                label_140291a31:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_153 & 8) != 0)
                                        goto label_14029195b
                                    
                                    goto label_140291a3f
                                
                            label_140291938:
                                zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*zmm1[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_153 & 8) != 0)
                                label_14029195b:
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    uint16_t rcx_31[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_31, 3)
                                    arg7 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                                    
                                    if ((temp0_153 & 0x10) == 0)
                                        goto label_140291a4e
                                    
                                    goto label_140291988
                                
                            label_140291a3f:
                                arg7 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                                
                                if ((temp0_153 & 0x10) == 0)
                                label_140291a4e:
                                    
                                    if ((temp0_153 & 0x20) != 0)
                                        goto label_14029199e
                                    
                                    goto label_140291a57
                                
                            label_140291988:
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg21[0].o, zx.d(*arg7[0].q), 4)
                                
                                if ((temp0_153 & 0x20) != 0)
                                label_14029199e:
                                    uint16_t rcx_35[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, rcx_35, 5)
                                    
                                    if ((temp0_153 & 0x40) == 0)
                                        goto label_140291a60
                                    
                                    goto label_1402919b1
                                
                            label_140291a57:
                                
                                if ((temp0_153 & 0x40) != 0)
                                label_1402919b1:
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg21[0].o, zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_153 s< 0)
                                    label_1402919ce:
                                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                        uint16_t rcx_39[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg21[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg21[0].o, rcx_39, 7)
                                else
                                label_140291a60:
                                    
                                    if (temp0_153 s< 0)
                                        goto label_1402919ce
                                
                                zmm1[0].o = _mm_mask_and_epi64(arg5, arg21[0].o, arg22[0].o)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, 
                                        arg17), 
                                    arg29[0].o)
                                zmm5[0].o = zx.o(0)
                                int64_t k3_14 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg22[0].o)
                                arg6[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg19[0].o)
                                char temp0_161 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg6[0].o, arg22[0].o))
                                cond:22_1 = rsi_3 == temp0_161
                                cond:24_1 = rsi_3 == temp0_161
                                cond:33_1 = rsi_3 != temp0_161
                                
                                if (rsi_3 != temp0_161)
                                    zmm5[0].o = _mm_mask_xor_epi64(arg5, zmm1[0].o, arg29[0].o)
                                
                                arg7 = _mm256_mask_mov_epi32(k3_14, zmm30)
                                arg6 = _mm256_mask_sub_epi32(arg5, arg24, arg11)
                                arg29[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg6, arg13, 2), zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg29[0].o, arg19[0].o)
                                int64_t k3_16 = _mm_mask_test_epi16_mask(arg5, zmm6, arg22[0].o)
                                _kortest_mask8_u8(k3_16, k3_16)
                                rsi_3 = _cvtmask32_u32(k3_16)
                                _mm256_mask_mov_epi64(arg5, arg24)
                                zmm30 = _mm256_mask_mov_epi64(arg5, arg7)
                            while (cond:33_1)
                    
                    zmm1[0].o = _mm_mask_xor_epi64(arg5, arg26[0].o, zmm11)
                    arg6[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg19[0].o)
                    int64_t k3_19 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm11)
                    _kortest_mask8_u8(k3_19, k3_19)
                    uint64_t var_4f0[0x2]
                    
                    if (cond:22_1)
                        arg12 = zmm0
                        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                        zmm0[0].o = var_4f0
                    else
                        arg26 = _mm256_mask_mov_epi32(k2_6, arg7)
                        arg24 = _mm256_mask_add_epi32(arg5, arg12, arg11)
                        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                        arg6[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg24, arg29), 
                            zmm1[0].o)
                        zmm6 = _mm_mask_and_epi64(arg5, arg6[0].o, arg19[0].o)
                        int64_t k2_15 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k2_15, k2_15)
                        
                        if (cond:24_1)
                            arg7 = _mm256_mask_mov_epi64(arg5, arg26)
                            arg12 = zmm0
                            zmm0[0].o = var_4f0
                        else
                            char rsi_4 = _cvtmask32_u32(k2_15)
                            arg12 = zmm0
                            zmm0[0].o = var_4f0
                            bool cond:37_1
                            
                            do
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg24[0].o)
                                arg7 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                                char temp0_272 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_272 & 1) == 0)
                                    if ((temp0_272 & 2) != 0)
                                        goto label_140291fae
                                    
                                    goto label_1402920ab
                                
                                arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg27[0].o, zx.d(*arg7[0].q), 0)
                                
                                if ((temp0_272 & 2) != 0)
                                label_140291fae:
                                    uint16_t rcx_73[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg27[0].o, rcx_73, 1)
                                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                    
                                    if ((temp0_272 & 4) == 0)
                                        goto label_1402920bb
                                    
                                    goto label_140291fc8
                                
                            label_1402920ab:
                                zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                
                                if ((temp0_272 & 4) == 0)
                                label_1402920bb:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((temp0_272 & 8) != 0)
                                        goto label_140291feb
                                    
                                    goto label_1402920c9
                                
                            label_140291fc8:
                                zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg27[0].o, zx.d(*zmm1[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((temp0_272 & 8) != 0)
                                label_140291feb:
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    uint16_t rcx_77[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg27[0].o, rcx_77, 3)
                                    arg7 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                                    
                                    if ((temp0_272 & 0x10) == 0)
                                        goto label_1402920d8
                                    
                                    goto label_140292018
                                
                            label_1402920c9:
                                arg7 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                                
                                if ((temp0_272 & 0x10) == 0)
                                label_1402920d8:
                                    
                                    if ((temp0_272 & 0x20) != 0)
                                        goto label_14029202e
                                    
                                    goto label_1402920e1
                                
                            label_140292018:
                                arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg27[0].o, zx.d(*arg7[0].q), 4)
                                
                                if ((temp0_272 & 0x20) != 0)
                                label_14029202e:
                                    uint16_t rcx_81[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg27[0].o, rcx_81, 5)
                                    
                                    if ((temp0_272 & 0x40) == 0)
                                        goto label_1402920ea
                                    
                                    goto label_140292041
                                
                            label_1402920e1:
                                
                                if ((temp0_272 & 0x40) != 0)
                                label_140292041:
                                    zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg27[0].o, zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_272 s< 0)
                                    label_14029205e:
                                        zmm1[0].o = _mm256_extracti128_si256(arg7, 1)
                                        uint16_t rcx_85[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg27[0].o, rcx_85, 7)
                                else
                                label_1402920ea:
                                    
                                    if (temp0_272 s< 0)
                                        goto label_14029205e
                                
                                zmm1[0].o = _mm_mask_and_epi64(arg5, arg27[0].o, arg22[0].o)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg17, zmm1, 5), arg6[0].o)
                                zmm5[0].o = zx.o(0)
                                int64_t k2_18 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg22[0].o)
                                arg7[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg19[0].o)
                                char temp0_280 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg7[0].o, arg22[0].o))
                                cond:37_1 = rsi_4 != temp0_280
                                
                                if (rsi_4 != temp0_280)
                                    zmm5[0].o = zmm1[0].o ^ arg6[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg24)
                                arg24 = _mm256_mask_add_epi32(arg5, arg24, arg11)
                                arg7 = _mm256_mask_mov_epi32(k2_18, arg26)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg24, 
                                        arg29), 
                                    zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg6[0].o, arg19[0].o)
                                int64_t k2_20 = _mm_mask_test_epi16_mask(arg5, zmm6, arg22[0].o)
                                _kortest_mask8_u8(k2_20, k2_20)
                                rsi_4 = _cvtmask32_u32(k2_20)
                                arg26 = _mm256_mask_mov_epi64(arg5, arg7)
                            while (cond:37_1)
                    
                    arg28 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11), 
                        arg7, arg28)
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg28[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg6[0].q), 0)
                    
                    zmm30[0].o = _mm_mask_load_ss(arg5, arg32)
                    arg10 = var_420_1
                    arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    if ((temp0_60 & 2) == 0)
                        zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                        
                        if ((temp0_60 & 4) != 0)
                            goto label_1402925c5
                        
                        goto label_140292520
                    
                    uint32_t rcx_107 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_107, 1)
                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                    
                    if ((temp0_60 & 4) != 0)
                    label_1402925c5:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 2)
                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                        
                        if ((temp0_60 & 8) == 0)
                            goto label_14029252f
                        
                        goto label_1402925e7
                    
                label_140292520:
                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                    
                    if ((temp0_60 & 8) == 0)
                    label_14029252f:
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                        
                        if ((temp0_60 & 0x10) != 0)
                            goto label_140292613
                        
                        goto label_14029253f
                    
                label_1402925e7:
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    uint32_t rcx_111 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_111, 3)
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140292613:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_60 & 0x20) == 0)
                            goto label_140292549
                        
                        goto label_140292628
                    
                label_14029253f:
                    
                    if ((temp0_60 & 0x20) == 0)
                    label_140292549:
                        
                        if ((temp0_60 & 0x40) != 0)
                            goto label_14029263a
                        
                        goto label_140292553
                    
                label_140292628:
                    uint32_t rcx_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_115, 5)
                    bool cond:32_1
                    
                    if ((temp0_60 & 0x40) == 0)
                    label_140292553:
                        cond:32_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140292656:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint32_t rcx_119 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_119, 7)
                    else
                    label_14029263a:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 6)
                        cond:32_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140292656
                    
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, arg22[0].o)
                    int64_t k2_27 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm1[0].o, zmm11)
                    _mm256_sub_epi32(arg7, arg11)
                    arg6 = _mm256_mask_mov_epi32(k2_27, arg25)
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg6, arg13), 
                        arg19[0].o)
                    int64_t k2_29 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg22[0].o)
                    _kortest_mask8_u8(k2_29, k2_29)
                    
                    if (cond:32_1)
                        arg25 = _mm256_mask_mov_epi64(arg5, arg6)
                    else
                        arg13 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg22[0].o), arg6)
                        arg25 = _mm256_mask_mov_epi64(arg5, arg13)
                    
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg25[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    var_4f0 = zmm0[0].o
                    int128_t var_390
                    uint32_t rcx_123
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o = var_390
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg6[0].q), 0)
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_123 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_123, 1)
                    else
                        zmm0[0].o = var_390
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_123 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_123, 1)
                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                    
                    if ((temp0_60 & 4) == 0)
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140291304
                        
                        goto label_1402926e8
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140291304:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint32_t rcx_11 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_11, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_1402926f8
                        
                        goto label_140291330
                    
                label_1402926e8:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140291330:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg6[0].q), 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_140291345:
                            uint32_t rcx_15 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_15, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_14029270c
                            
                            goto label_140291357
                    else
                    label_1402926f8:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140291345
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_140291357:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 6)
                        r12 = arg30
                        arg7[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg22[0].o, var_4f0)
                        
                        if (temp0_60 s< 0)
                        label_140291382:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint32_t rcx_19 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_19, 7)
                    else
                    label_14029270c:
                        r12 = arg30
                        arg7[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg22[0].o, var_4f0)
                        
                        if (temp0_60 s< 0)
                            goto label_140291382
                    
                    r13 = arg35
                    arg6 = _mm256_cvtepu16_epi32(arg7[0].o)
                    var_390 = zmm0[0].o
                    zmm1[0].o = zmm0[0].o & zmm11
                    arg7 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm1[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                    label_140292751:
                        zmm1 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(arg7, arg6), 1)
                        zmm0 = var_1c0_1
                        zmm1 = _mm256_div_ps(_mm256_sub_ps(zmm0, _mm256_cvtepi32_ps(arg6)), 
                            _mm256_cvtepi32_ps(zmm1))
                else
                    arg7 = _mm256_add_epi32(arg12, arg12)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    int128_t var_300
                    arg8[0].o = var_300
                    
                    if ((temp0_60 & 1) == 0)
                        if ((temp0_60 & 2) != 0)
                            goto label_140291b00
                        
                        goto label_140291539
                    
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_140291b00:
                        uint16_t* rcx_43 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_43, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_140291549
                        
                        goto label_140291b1b
                    
                label_140291539:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_140291549:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140291b3a
                        
                        goto label_140291558
                    
                label_140291b1b:
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140291b3a:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        uint16_t* rcx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_45, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_140291568
                        
                        goto label_140291b60
                    
                label_140291558:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140291b60:
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_140291b6f:
                            uint16_t* rcx_47 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_47, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_14029157c
                            
                            goto label_140291b84
                    else
                    label_140291568:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140291b6f
                    
                    bool cond:17_1
                    bool cond:21_1
                    bool cond:23_1
                    bool cond:25_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_140291b84:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm1[0].q, 6)
                        cond:17_1 = temp0_60 == 0
                        cond:21_1 = temp0_60 == 0
                        cond:23_1 = temp0_60 == 0
                        cond:25_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140291b9d:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            uint16_t* rcx_49 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_49, 7)
                    else
                    label_14029157c:
                        cond:17_1 = temp0_60 == 0
                        cond:21_1 = temp0_60 == 0
                        cond:23_1 = temp0_60 == 0
                        cond:25_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140291b9d
                    
                    zmm1 = _mm256_cvtepu16_epi32(arg8[0].o)
                    int64_t k2_4 = _mm256_cmp_epi32_mask(arg5, arg17, zmm1, 5)
                    arg10[0].o = _mm_movm_epi16(k2_4)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg10[0].o, arg19[0].o)
                    int64_t k3_1 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm11)
                    _kortest_mask8_u8(k3_1, k3_1)
                    var_300 = arg8[0].o
                    
                    if (cond:17_1)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg12)
                    else
                        arg26 = _mm256_mask_blend_epi32(k2_4, arg12, arg13)
                        zmm30 = _mm256_mask_sub_epi32(arg5, arg12, arg11)
                        arg6[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_4, zmm30, arg13, 2))
                        zmm6 = _mm_mask_and_epi64(arg5, arg6[0].o, arg19[0].o)
                        int64_t k3_3 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k3_3, k3_3)
                        
                        if (cond:21_1)
                            arg22 = _mm256_mask_mov_epi64(arg5, arg26)
                        else
                            char rbx_1 = _cvtmask32_u32(k3_3)
                            arg29 = _mm256_mask_mov_epi64(arg5, arg12)
                            bool cond:35_1
                            
                            do
                                arg24 = _mm256_mask_mov_epi64(arg5, zmm30)
                                zmm30 = _mm256_mask_add_epi32(arg5, zmm30, zmm30)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, zmm30[0].o)
                                arg22 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                                char temp0_100 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_100 & 1) == 0)
                                    if ((temp0_100 & 2) != 0)
                                        goto label_14029161b
                                    
                                    goto label_140291707
                                
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg22[0].o, 0)
                                
                                if ((temp0_100 & 2) != 0)
                                label_14029161b:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1), 1)
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                    
                                    if ((temp0_100 & 4) == 0)
                                        goto label_140291717
                                    
                                    goto label_140291630
                                
                            label_140291707:
                                arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                
                                if ((temp0_100 & 4) == 0)
                                label_140291717:
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_100 & 8) != 0)
                                        goto label_14029164f
                                    
                                    goto label_140291725
                                
                            label_140291630:
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *zmm1[0].q, 2)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                
                                if ((temp0_100 & 8) != 0)
                                label_14029164f:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 3)
                                    arg22 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                                    
                                    if ((temp0_100 & 0x10) == 0)
                                        goto label_140291734
                                    
                                    goto label_140291676
                                
                            label_140291725:
                                arg22 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                                
                                if ((temp0_100 & 0x10) == 0)
                                label_140291734:
                                    
                                    if ((temp0_100 & 0x20) != 0)
                                        goto label_14029168b
                                    
                                    goto label_14029173d
                                
                            label_140291676:
                                arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *arg22[0].o, 4)
                                
                                if ((temp0_100 & 0x20) != 0)
                                label_14029168b:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1), 5)
                                    
                                    if ((temp0_100 & 0x40) == 0)
                                        goto label_140291746
                                    
                                    goto label_140291699
                                
                            label_14029173d:
                                
                                if ((temp0_100 & 0x40) != 0)
                                label_140291699:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, *zmm1[0].q, 6)
                                    
                                    if (temp0_100 s< 0)
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 7)
                                else
                                label_140291746:
                                    
                                    if (temp0_100 s< 0)
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg16, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 7)
                                
                                zmm1 = _mm256_cvtepu16_epi32(arg16)
                                zmm6 = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, 
                                        arg17), 
                                    arg6[0].o)
                                zmm5[0].o = zx.o(0)
                                arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k3_6 = _mm_mask_testn_epi16_mask(arg5, zmm6, arg7[0].o)
                                zmm1[0].o = _mm_mask_and_epi64(arg5, zmm6, arg19[0].o)
                                char temp0_108 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    zmm1[0].o, arg7[0].o))
                                cond:23_1 = rbx_1 == temp0_108
                                cond:25_1 = rbx_1 == temp0_108
                                cond:35_1 = rbx_1 != temp0_108
                                
                                if (rbx_1 != temp0_108)
                                    zmm5[0].o = zmm6 ^ arg6[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg29)
                                arg22 = _mm256_mask_mov_epi32(k3_6, arg26)
                                zmm30 = _mm256_mask_sub_epi32(arg5, arg24, arg11)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, zmm30, arg13, 2), zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg6[0].o, arg19[0].o)
                                int64_t k3_8 = _mm_mask_test_epi16_mask(arg5, zmm6, arg7[0].o)
                                _kortest_mask8_u8(k3_8, k3_8)
                                rbx_1 = _cvtmask32_u32(k3_8)
                                arg29 = _mm256_mask_mov_epi64(arg5, arg24)
                                arg26 = _mm256_mask_mov_epi64(arg5, arg22)
                            while (cond:35_1)
                    
                    zmm1[0].o = arg10[0].o ^ zmm11
                    arg6[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg19[0].o)
                    int64_t k3_17 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm11)
                    _kortest_mask8_u8(k3_17, k3_17)
                    uint16_t var_500[0x8]
                    
                    if (cond:23_1)
                        zmm30[0].o = _mm_mask_load_ss(arg5, arg32)
                        arg10 = var_420_1
                        arg12 = zmm0
                        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                        zmm0[0].o = var_500
                    else
                        arg6 = _mm256_mask_mov_epi32(k2_4, arg22)
                        arg24 = _mm256_mask_add_epi32(arg5, arg12, arg11)
                        arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                        arg7[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg24, arg29), 
                            zmm1[0].o)
                        zmm6 = _mm_mask_and_epi64(arg5, arg7[0].o, arg19[0].o)
                        int64_t k2_8 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k2_8, k2_8)
                        
                        if (cond:25_1)
                            arg22 = _mm256_mask_mov_epi64(arg5, arg6)
                            zmm30[0].o = _mm_mask_load_ss(arg5, arg32)
                            arg10 = var_420_1
                            arg12 = zmm0
                            zmm0[0].o = var_500
                        else
                            char rbx_3 = _cvtmask32_u32(k2_8)
                            zmm30[0].o = _mm_mask_load_ss(arg5, arg32)
                            arg10 = var_420_1
                            arg12 = zmm0
                            zmm0[0].o = var_500
                            bool cond:39_1
                            
                            do
                                arg26 = _mm256_mask_add_epi32(arg5, arg24, arg24)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg26[0].o)
                                arg22 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                                char temp0_228 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_228 & 1) == 0)
                                    if ((temp0_228 & 2) != 0)
                                        goto label_140291d36
                                    
                                    goto label_140291e31
                                
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg20[0].o, 
                                    *arg22[0].o, 0)
                                
                                if ((temp0_228 & 2) != 0)
                                label_140291d36:
                                    uint16_t* rdi_11 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg20[0].o, *rdi_11, 1)
                                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                                    
                                    if ((temp0_228 & 4) == 0)
                                        goto label_140291e41
                                    
                                    goto label_140291d54
                                
                            label_140291e31:
                                zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                                
                                if ((temp0_228 & 4) == 0)
                                label_140291e41:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((temp0_228 & 8) != 0)
                                        goto label_140291d75
                                    
                                    goto label_140291e4f
                                
                            label_140291d54:
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg20[0].o, 
                                    *zmm1[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((temp0_228 & 8) != 0)
                                label_140291d75:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg20[0].o, *rdi_13, 3)
                                    arg22 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                                    
                                    if ((temp0_228 & 0x10) == 0)
                                        goto label_140291e5e
                                    
                                    goto label_140291d9e
                                
                            label_140291e4f:
                                arg22 = _mm256_mask_add_epi64(arg5, arg18, zmm5)
                                
                                if ((temp0_228 & 0x10) == 0)
                                label_140291e5e:
                                    
                                    if ((temp0_228 & 0x20) != 0)
                                        goto label_140291dae
                                    
                                    goto label_140291e67
                                
                            label_140291d9e:
                                arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg20[0].o, 
                                    *arg22[0].o, 4)
                                
                                if ((temp0_228 & 0x20) != 0)
                                label_140291dae:
                                    uint16_t* rdi_15 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg20[0].o, *rdi_15, 5)
                                    
                                    if ((temp0_228 & 0x40) == 0)
                                        goto label_140291e70
                                    
                                    goto label_140291dc5
                                
                            label_140291e67:
                                
                                if ((temp0_228 & 0x40) != 0)
                                label_140291dc5:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg20[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_228 s< 0)
                                    label_140291de0:
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                        uint16_t* rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg20[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                            arg20[0].o, *rcx_66, 7)
                                else
                                label_140291e70:
                                    
                                    if (temp0_228 s< 0)
                                        goto label_140291de0
                                
                                zmm1 = _mm256_mask_cvtepu16_epi32(arg5, arg20[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg17, zmm1, 5), arg7[0].o)
                                zmm6 = zx.o(0)
                                zmm5[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k2_11 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, zmm5[0].o)
                                arg9[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg19[0].o)
                                char temp0_236 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg9[0].o, zmm5[0].o))
                                cond:39_1 = rbx_3 != temp0_236
                                
                                if (rbx_3 != temp0_236)
                                    zmm6 = zmm1[0].o ^ arg7[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg24)
                                arg24 = _mm256_mask_add_epi32(arg5, arg24, arg11)
                                arg22 = _mm256_mask_mov_epi32(k2_11, arg6)
                                arg7[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg24, 
                                        arg29), 
                                    zmm6)
                                zmm6 = _mm_mask_and_epi64(arg5, arg7[0].o, arg19[0].o)
                                int64_t k2_13 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm5[0].o)
                                _kortest_mask8_u8(k2_13, k2_13)
                                rbx_3 = _cvtmask32_u32(k2_13)
                                arg6 = _mm256_mask_mov_epi64(arg5, arg22)
                            while (cond:39_1)
                    
                    arg28 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11), 
                        arg22, arg28)
                    arg7 = _mm256_mask_add_epi32(arg5, arg28, arg28)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    
                    if ((temp0_60 & 1) == 0)
                        arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        
                        if ((temp0_60 & 2) != 0)
                            goto label_14029229b
                        
                        goto label_1402921dd
                    
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0].q, 0)
                    arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_14029229b:
                        int64_t rcx_89 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_89, 1)
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_1402921ed
                        
                        goto label_1402922b6
                    
                label_1402921dd:
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_1402921ed:
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_1402922d5
                        
                        goto label_1402921fc
                    
                label_1402922b6:
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_1402922d5:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rcx_91 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_91, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_14029220c
                        
                        goto label_1402922fb
                    
                label_1402921fc:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_1402922fb:
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0].q, 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_14029230a:
                            int64_t rcx_93 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_93, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_140292220
                            
                            goto label_14029231f
                    else
                    label_14029220c:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_14029230a
                    
                    bool cond:34_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_14029231f:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 6)
                        cond:34_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140292338:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_95 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_95, 7)
                    else
                    label_140292220:
                        cond:34_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140292338
                    
                    arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, arg6[0].o)
                    int64_t k2_22 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm1[0].o, zmm11)
                    _mm256_mask_sub_epi32(arg5, arg22, arg11)
                    arg7 = _mm256_mask_mov_epi32(k2_22, arg25)
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg7, arg13), 
                        arg19[0].o)
                    int64_t k2_24 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg6[0].o)
                    _kortest_mask8_u8(k2_24, k2_24)
                    
                    if (cond:34_1)
                        arg25 = _mm256_mask_mov_epi64(arg5, arg7)
                    else
                        arg13 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg6[0].o), arg7)
                        arg25 = _mm256_mask_mov_epi64(arg5, arg13)
                    
                    arg7 = _mm256_mask_add_epi32(arg5, arg25, arg25)
                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                    arg6 = _mm256_mask_add_epi64(arg5, arg23, zmm1)
                    var_500 = zmm0[0].o
                    int128_t var_3a0
                    int64_t rcx_97
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o = var_3a0
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0].q, 0)
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_97 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_97, 1)
                    else
                        zmm0[0].o = var_3a0
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_97 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_97, 1)
                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                    
                    if ((temp0_60 & 4) == 0)
                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140292434
                        
                        goto label_1402923bd
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 2)
                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140292434:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rcx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_99, 3)
                        arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_1402923cd
                        
                        goto label_14029245a
                    
                label_1402923bd:
                    arg6 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                    
                    if ((temp0_60 & 0x10) == 0)
                    label_1402923cd:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140292469
                        
                        goto label_1402923d7
                    
                label_14029245a:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg6[0].q, 4)
                    
                    if ((temp0_60 & 0x20) != 0)
                    label_140292469:
                        int64_t rcx_101 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_101, 5)
                        
                        if ((temp0_60 & 0x40) == 0)
                            goto label_1402923e1
                        
                        goto label_14029247e
                    
                label_1402923d7:
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_14029247e:
                        zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_60 s< 0)
                        label_140292497:
                            zmm1[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rcx_103 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_103, 7)
                    else
                    label_1402923e1:
                        
                        if (temp0_60 s< 0)
                            goto label_140292497
                    
                    r13 = arg35
                    arg6 = __vpmovzxwd_ymmqq_memdq(var_500)
                    var_3a0 = zmm0[0].o
                    arg7 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    zmm1[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                        goto label_140292751
                
                arg18 = _mm256_mask_mov_ps(_mm_cmp_epi16_mask(arg5, zmm31[0].o, zmm11, 4), zmm1)
        
        arg6 =
            __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(_kor_mask8(k1_9, arg5)), 0x18)
        uint64_t r10_1 = zx.q(r15.d)
        bool cond:4_1 = r15.d != 6
        uint32_t r10_2
        float var_480_1[0x8]
        float var_460_1[0x8]
        float var_440_1[0x8]
        uint64_t k1_18
        
        if (r15.d u> 6)
        label_140292810:
            arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
            var_440_1 = _mm256_mask_store_epi64(arg5, arg22)
            var_460_1 = _mm256_mask_store_epi64(arg5, arg22)
            var_480_1 = _mm256_mask_store_epi64(arg5, arg22)
            arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
            arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg28, arg25, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (cond:4_1)
            label_140292c0b:
                uint32_t var_380_1[0x8]
                float var_360_1[0x8]
                float var_340_1[0x8]
                
                if (r15.d u> 6)
                label_140292ca0:
                    var_380_1 = _mm256_mask_storeu_ps(k1_18, arg29)
                    var_360_1 = _mm256_mask_storeu_ps(k1_18, arg29)
                    var_340_1 = _mm256_mask_storeu_ps(k1_18, arg29)
                else
                    arg7 = _mm256_mask_mullo_epi32(arg5, arg25, arg12)
                    
                    switch (r10_1)
                        case 0, 1
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg7)
                            int64_t k2_32 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k2_33
                            char temp0_521
                            temp0_521, k2_33 = _mm256_mmask_i32gather_ps(k2_32, *(r12 + zmm0[0].q))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_35
                            char temp0_523
                            temp0_523, k2_35 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg6[0].q))
                            arg7 = temp0_523
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_37
                            char temp0_526
                            temp0_526, k2_37 = _mm256_mmask_i32gather_ps(k2_36, *(r12 + zmm0[0].q))
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, temp0_521)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg7)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, temp0_526)
                        case 2
                            zmm0 = _mm256_add_epi32(arg6, arg15)
                            zmm1 = _mm256_add_epi32(zmm0, arg7)
                            zmm0 = _mm256_mask_add_epi32(k1_18, zmm0, arg7)
                            int64_t r8_3 = sx.q(zmm0[0])
                            int64_t r9_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rsi_15 = sx.q(zmm0[0])
                            int64_t rcx_136 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t rdx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(r12 + r8_3))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r9_5), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_3), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_4), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_15), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_136), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdx_9), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rbx_15), 7)
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, zmm1, 2)
                            int64_t r8_4 = sx.q(arg6[0])
                            int64_t r9_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t rsi_17 = sx.q(arg6[0])
                            int64_t rcx_139 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t rdx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t rbx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(r12 + r8_4))
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r9_6), 1)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r10_4), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + r11_5), 3)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rsi_17), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rcx_139), 5)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rdx_12), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(r12 + rbx_18), 7)
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, zmm1, 4)
                            int64_t r8_5 = sx.q(zmm1[0])
                            int32_t rdx_13 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                            int64_t r9_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t rsi_19 = sx.q(zmm1[0])
                            int32_t rcx_141 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int32_t rdx_14 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                            zmm1[0].o = zx.o(*(r12 + r8_5))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_13)), 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_7), 2)
                            r9 = arg2
                            arg3 = var_508_1
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_6), 3)
                            r11 = arg31
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_19), 4)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                *(r12 + sx.q(rcx_141)), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_21), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_14)), 7)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg7))
                            zmm5 = _mm256_broadcast_ss(32767f)
                            zmm0 = _mm256_div_ps(zmm0, zmm5)
                            arg6 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg6[0].o), arg7)), 
                                zmm5)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm1[0].o), arg7)), 
                                zmm5)
                            arg7 = _mm256_broadcast_ss(128f)
                            zmm0 = _mm256_mul_ps(zmm0, arg7)
                            arg6 = _mm256_mul_ps(arg6, arg7)
                            zmm1 = _mm256_mul_ps(zmm1, arg7)
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg6)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, zmm1)
                            arg19 = _mm256_mask_load_ps(arg5, var_480_1)
                            arg23 = _mm256_mask_load_ps(arg5, var_460_1)
                            arg22 = _mm256_mask_load_ps(arg5, var_440_1)
                        case 3
                            int64_t k2_39
                            char temp0_604
                            temp0_604, k2_39 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg15[0].q))
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 4)
                            int64_t k2_41
                            char temp0_606
                            temp0_606, k2_41 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + zmm1[0].q))
                            zmm5 = temp0_606
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 8)
                            int64_t k2_42 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                            int64_t k2_43
                            char temp0_609
                            temp0_609, k2_43 = _mm256_mmask_i32gather_ps(k2_42, *(r12 + zmm1[0].q))
                            zmm23 = temp0_609
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0xc)
                            int64_t k2_44 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                            int64_t k2_45
                            char temp0_612
                            temp0_612, k2_45 = _mm256_mmask_i32gather_ps(k2_44, *(r12 + zmm1[0].q))
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x10)
                            int64_t k2_46 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                            int64_t k2_47
                            char temp0_615
                            temp0_615, k2_47 = _mm256_mmask_i32gather_ps(k2_46, *(r12 + zmm1[0].q))
                            arg26 = temp0_615
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x14)
                            int64_t k2_48 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                            int64_t k2_49
                            char temp0_618
                            temp0_618, k2_49 = _mm256_mmask_i32gather_ps(k2_48, *(r12 + zmm1[0].q))
                            arg29 = temp0_618
                            zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg7)
                            int64_t k2_51
                            char temp0_621
                            temp0_621, k2_51 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + zmm1[0].q))
                            arg6 = temp0_621
                            zmm1 = _mm256_srli_epi32(arg6, 0x15)
                            arg7 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                            arg6 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 
                                            0x3ff), 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_612, temp0_604)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg7 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, zmm0))
                            arg24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg7 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg7, arg24), 
                                arg5, arg26, zmm5)
                            zmm0 = _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg24)
                            arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg29, zmm23)
                            arg29[0].o = _mm_mask_xor_ps(arg5, arg29[0].o, arg29[0].o)
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, arg6)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg7)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                        case 4, 5, 6
                            goto label_140292ca0
                
                r10_2 = r10
                zmm0 = _mm256_mask_sub_ps(arg5, var_380_1, arg19)
                zmm1 = _mm256_mask_sub_ps(arg5, var_360_1, arg23)
                arg6 = _mm256_mask_sub_ps(arg5, var_340_1, arg22)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg18, arg19)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg18, arg23)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg18, arg22)
                float var_480_2[0x8] = _mm256_mask_storeu_ps(k1_18, zmm0)
                float var_460_2[0x8] = _mm256_mask_storeu_ps(k1_18, zmm1)
                float var_440_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg6)
                arg19 = _mm256_mask_load_ps(arg5, var_480_2)
                arg23 = _mm256_mask_load_ps(arg5, var_460_2)
                arg22 = _mm256_mask_load_ps(arg5, var_440_2)
            else
                r10_2 = r10
        else
            arg7 = _mm256_mask_mullo_epi32(arg5, arg28, arg12)
            int64_t rsi_5 = sx.q(jump_table_140295070[r10_1])
            cond:4_1 = rsi_5 != -0x140295070
            
            switch (rsi_5)
                case -0x28be
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg7)
                    int64_t k1_12 = _kxnor_mask16(arg5, arg5)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_13
                    char temp0_398
                    temp0_398, k1_13 = _mm256_mmask_i32gather_ps(k1_12, *(r12 + zmm1[0].q))
                    arg19 = temp0_398
                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
                    int64_t k1_14 = _kxnor_mask16(arg5, arg5)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    int64_t k1_15
                    char temp0_401
                    temp0_401, k1_15 = _mm256_mmask_i32gather_ps(k1_14, *(r12 + arg7[0].q))
                    arg23 = temp0_401
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
                    int64_t k1_16 = _kxnor_mask16(arg5, arg5)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    int64_t k1_17
                    char temp0_404
                    temp0_404, k1_17 = _mm256_mmask_i32gather_ps(k1_16, *(r12 + zmm1[0].q))
                    arg22 = temp0_404
                case -0x2860
                    goto label_140292810
                case -0x281b
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg7)
                    int64_t r12_2 = sx.q(zmm1[0])
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    arg7[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rdi_19 = sx.q(arg7[0])
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                    int64_t r9_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                    int64_t rcx_124 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                    r12 = arg30
                    arg7[0].o = zx.o(*(arg30 + r12_2))
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r13_2), 1)
                    r13 = arg35
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r8), 2)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rsi_9), 3)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rdi_19), 4)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r15_2), 5)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + r9_2), 6)
                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(r12 + rcx_124), 7)
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 2)
                    int64_t r8_1 = sx.q(zmm5[0].d)
                    int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                    int64_t rdx_4 = sx.q(zmm5[0].d)
                    int64_t rcx_127 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm5[0].o = zx.o(*(r12 + r8_1))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r9_3), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r11_2), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r15_3), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rdx_4), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rcx_127), 5)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rbx_9), 6)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rdi_22), 7)
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
                    int64_t r8_2 = sx.q(zmm1[0])
                    int32_t rdx_5 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rsi_13 = sx.q(zmm1[0])
                    int32_t rcx_129 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t rdx_6 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                    zmm1[0].o = zx.o(*(r12 + r8_2))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_5)), 1)
                    r11 = arg31
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_4), 2)
                    r9 = arg2
                    arg3 = var_508_1
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r15_4), 3)
                    r14.b = arg33
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_13), 4)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rcx_129)), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_12), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_6)), 7)
                    arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                    arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xffff8001)
                    arg7 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg7, arg19))
                    arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg7 = _mm256_mask_div_ps(arg5, arg7, arg22)
                    zmm5 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(zmm5[0].o), arg19)), 
                        arg22)
                    zmm1 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(zmm1[0].o), arg19)), 
                        arg22)
                    arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 128f)
                    arg19 = _mm256_mask_mul_ps(arg5, arg7, arg22)
                    arg23 = _mm256_mask_mul_ps(arg5, zmm5, arg22)
                    arg22 = _mm256_mask_mul_ps(arg5, zmm1, arg22)
                case -0x25cb
                    int64_t k1_20
                    char temp0_475
                    temp0_475, k1_20 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + arg15[0].q))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 4)
                    int64_t k1_21 = _kxnor_mask16(arg5, arg5)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    int64_t k1_22
                    char temp0_478
                    temp0_478, k1_22 = _mm256_mmask_i32gather_ps(k1_21, *(r12 + zmm5[0]))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 8)
                    int64_t k1_23 = _kxnor_mask16(arg5, arg5)
                    zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                    int64_t k1_24
                    char temp0_481
                    temp0_481, k1_24 = _mm256_mmask_i32gather_ps(k1_23, *(r12 + zmm5[0]))
                    zmm23 = temp0_481
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0xc)
                    int64_t k1_25 = _kxnor_mask16(arg5, arg5)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    int64_t k1_26
                    char temp0_484
                    temp0_484, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(r12 + zmm5[0]))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x10)
                    int64_t k1_27 = _kxnor_mask16(arg5, arg5)
                    arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                    int64_t k1_28
                    char temp0_487
                    temp0_487, k1_28 = _mm256_mmask_i32gather_ps(k1_27, *(r12 + zmm5[0]))
                    arg24 = temp0_487
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x14)
                    int64_t k1_29 = _kxnor_mask16(arg5, arg5)
                    arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                    int64_t k1_30
                    char temp0_490
                    temp0_490, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(r12 + zmm5[0]))
                    arg26 = temp0_490
                    arg7 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg15), arg7)
                    int64_t k1_32
                    char temp0_493
                    temp0_493, k1_32 =
                        _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r12 + arg7[0].q))
                    zmm5 = temp0_493
                    arg7 = _mm256_srli_epi32(zmm5, 0x15)
                    arg29 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, zmm5, 0xa), 0x7ff)
                    arg19 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_484, temp0_475)
                    zmm1 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm5 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg29, zmm1))
                    arg29 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg23 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, zmm5, arg29), arg5, 
                        arg24, temp0_478)
                    arg24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, zmm1))
                    arg22 = _mm256_mask_div_ps(arg5, zmm1, arg29)
                    arg29[0].o = _mm_mask_xor_ps(arg5, arg29[0].o, arg29[0].o)
                    arg22 = _mm256_mask3_fmadd_ps(arg22, arg5, arg26, zmm23)
            
            var_480_1 = _mm256_mask_store_ps(arg5, arg19)
            var_460_1 = _mm256_mask_store_ps(arg5, arg23)
            var_440_1 = _mm256_mask_store_ps(arg5, arg22)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg28, arg25, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (rsi_5 != -0x140295070)
                goto label_140292c0b
            
            r10_2 = r10
        zmm1[0].o = _mm256_extractf32x4_ps(arg5, arg19, 1)
        arg6[0].o = _mm256_extractf32x4_ps(arg5, arg23, 1)
        arg8[0].o = zx.o(0)
        arg7[0].o = _mm_mask_unpacklo_ps(arg5, arg22[0].o, zx.o(0))
        zmm5[0].o = _mm_mask_unpackhi_ps(arg5, arg22[0].o, zx.o(0))
        arg9[0].o = _mm_mask_unpacklo_ps(arg5, arg19[0].o, arg23[0].o)
        zmm6 = _mm_mask_unpackhi_ps(arg5, arg19[0].o, arg23[0].o)
        zmm0[0].o = arg9[0].q | arg7[0].q << 0x40
        int128_t var_2c0 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg7[0].o)
        int128_t var_2b0_1 = zmm0[0].o
        zmm0[0].o = zmm6[0].q | zmm5[0] << 0x40
        int128_t var_2a0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm6, zmm5[0].o)
        int128_t var_290_1 = zmm0[0].o
        zmm0[0].o = _mm256_extractf32x4_ps(arg5, arg22, 1)
        arg7[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        arg6[0].o = zmm5[0] | arg7[0].q << 0x40
        int128_t var_280_1 = arg6[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        int128_t var_270_1 = arg6[0].o
        arg6[0].o = zmm1[0].q | zmm0[0].q << 0x40
        int128_t var_260_1 = arg6[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t rcx_148
        int64_t rsi_20
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rsi_20 & rol.q(-2, rcx_148.b))
            uint64_t rcx_144 = _tzcnt_u64(i_1)
            int256_t var_2e0 = temp0_33
            rsi_20 = i_1 & not.q(1 << (rcx_144 u% 0x40))
            zmm0[0].o = (&var_2c0)[rcx_144]
            *(arg1 + sx.q(*(&var_2e0 + ((zx.q(rcx_144.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
            rcx_148 = _tzcnt_u64(rsi_20)
            zmm0[0].o = (&var_2c0)[rcx_148]
            *(arg1 + sx.q(*(&var_2e0 + ((zx.q(rcx_148.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
        
        r10 = r10_2 + 8
        cond:2_1 = r10 == rcx_4
        cond:3_1 = r10 == rcx_4
    while (r10 s< rcx_4)
    
    if (r10 s< r13)
        goto label_140293246
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_88
arg14.o = var_78
arg15[0] = var_68
_mm256_zeroupper()
return arg1
