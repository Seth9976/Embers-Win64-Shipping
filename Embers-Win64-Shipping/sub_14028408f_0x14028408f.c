// 函数: sub_14028408f
// 地址: 0x14028408f
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t rdx_117
int64_t rbp
int64_t r8
int32_t r9_9
float zmm4[0x8]
int64_t zmm5[0x4]
result, rdx_117, r8, r9_9, zmm4, zmm5 = (*(rbp + 0x41))()
int64_t rdi
int64_t var_8 = rdi
int64_t var_30 = rdi
uint16_t var_50[0x8] = arg13
uint128_t var_60 = arg12[0]
int128_t var_70 = arg11.o
int128_t var_80 = arg10[0].o
uint16_t zmm11[0x8]
uint16_t var_90[0x8] = zmm11
int128_t var_a0 = arg9[0].o
int128_t var_b0 = arg8[0].o
int128_t var_c0 = arg7[0].o
int128_t var_d0 = arg6[0].o
uint16_t zmm6[0x8]
uint16_t var_e0[0x8] = zmm6
int64_t r15 = sx.q(arg31)
uint32_t r13 = arg32
int64_t r14
r14.b = arg30
int32_t zmm30[0x8]
zmm30[0].o = _mm_mask_load_ss(arg5, arg29)
int32_t r11 = arg28
uint64_t rdx_1 = zx.q(*(&data_143442dc0 + (r15 << 2)) * *(&data_143442da0 + (r15 << 2)))
uint16_t* r12 = arg27
int32_t rcx_4 = ((r13 s>> 0x1f u>> 0x1d) + r13) & 0xfffffff8
int64_t r9
uint32_t r10
uint32_t zmm0[0x8]
float zmm1[0x8]
float zmm23[0x8]
int32_t zmm31[0x8]

if (rcx_4 s<= 0)
    r10 = 0
    r9 = rdx_117
    
    if (0 s< r13)
    label_1402861e6:
        arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, r10), data_142fc93a0)
        zmm23 = _mm256_mask_set1_epi32(arg5, r13)
        uint64_t k1_33 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm23, arg24)
        zmm0 = _mm256_mask_slli_epi32(arg5, arg24, 3)
        int64_t k2_53
        char temp0_676
        temp0_676, k2_53 =
            _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), *(r9 + zmm0[0].q))
        arg9 = temp0_676
        zmm1 = __vpbroadcastd_ymmqq_memd(4)
        zmm0 |= zmm1
        int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
        int64_t k2_55
        char temp0_679
        temp0_679, k2_55 = _mm256_mmask_i32gather_epi32(k2_54, *(r9 + zmm0[0].q))
        arg3 = temp0_679
        zmm0[0].o = zx.o(r9_9)
        zmm0 = _mm256_mullo_epi32(arg3, _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0]))
        int64_t k2_56 = __kmovq_maskmskw_masku64_avx512(k1_33)
        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
        int64_t k2_57
        char temp0_684
        temp0_684, k2_57 = _mm256_mmask_i32gather_epi32(k2_56, *(r8 + zmm0[0].q))
        arg26 = temp0_684
        zmm0 = _mm256_add_epi32(zmm0, zmm1)
        int64_t k2_59
        char temp0_686
        temp0_686, k2_59 =
            _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), *(r8 + zmm0[0].q))
        zmm1 = temp0_686
        uint32_t r9_8 = _cvtmask32_u32(k1_33)
        arg14[0].o = _mm_mask_xor_epi32(arg5, arg14[0].o, arg14[0].o)
        arg20 = _mm256_mask_set1_epi32(arg5, rdx_1.d)
        int64_t k2_60 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm1, 2, 1)
        zmm0[0].o = zx.o(0)
        uint32_t rcx_150
        rcx_150.b = zx.o(0) f>= zmm30[0].o
        rcx_150.b = neg.b(rcx_150.b)
        arg25[0].o = _mm_mask_set1_epi8(arg5, rcx_150)
        zmm0[0].o = data_142fc92e0
        arg25[0].o = _mm_mask_mov_epi16(k2_60, zmm0[0].o)
        zmm0[0].o = _mm_mask_xor_epi64(arg5, arg25[0].o, zmm0[0].o)
        arg8[0].o = _mm_mask_mov_epi16(k1_33, zmm0[0].o)
        int64_t k3_21 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg8[0].o, data_142fc92e0)
        _kortest_mask8_u8(k3_21, k3_21)
        
        if (rcx_150.b == 0)
            arg17[0].o = _mm_mask_xor_epi32(arg5, arg17[0].o, arg17[0].o)
            arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        else
            arg3 = _mm256_cmpeq_epi32(arg3, arg3)
            arg15 = _mm256_mask_add_epi32(arg5, zmm1, arg3)
            
            if (zmm30[0].o f>= 1f)
                arg17 = _mm256_mask_mov_epi32(k3_21, arg15)
                arg19 = _mm256_mask_mov_epi64(arg5, arg17)
            else
                arg3[0].o = zx.o(r12)
                arg4 = _mm256_mask_cvtepi32_epi64(arg5, arg26[0].o)
                zmm4[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                zmm1 = _mm256_mask_mullo_epi32(arg5, zmm1, arg20)
                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg6[0].o = 3
                arg3[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(arg3[0].o, arg6[0].o)
                arg3 = _mm256_broadcastq_epi64(arg3[0].q)
                zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg3, zmm4), zmm5)
                zmm1 = _mm256_add_epi64(_mm256_add_epi64(arg3, arg4), zmm1)
                arg3 = __vpbroadcastq_ymmqq_memq(-4)
                arg14 = _mm256_mask_and_epi64(arg5, zmm4, arg3)
                arg16 = _mm256_mask_and_epi64(arg5, zmm1, arg3)
                char temp0_712 = _cvtmask32_u32(k3_21)
                uint32_t rdi_31 = r11 - 2
                zmm1 = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
                arg3 = _mm256_mask_cvtepi32_ps(arg5, arg15)
                zmm1 = _mm256_mul_ps(zmm1, arg3)
                arg3[0].o = arg17[0].o
                arg3[0] = float.s(r11 - 1)
                arg18[0].o = _mm_mask_mul_round_ss(arg5, arg3[0].o, zmm30[0].o)
                int32_t rdx_24 = int.d(arg18[0].o) s>> 0x1f
                rdx_1 = zx.q(rdx_24) & zx.q(not.d(rdx_24))
                
                if (rdi_31 s> rdx_1.d)
                    rdi_31 = rdx_1.d
                
                zmm1 = _mm256_cvttps_epi32(zmm1)
                arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                arg17 = _mm256_mask_min_epi32(arg5, _mm256_max_epi32(zmm1, arg3), arg15)
                
                if (r11 s< 0x100)
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg17[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg16, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140286a67
                        
                        goto label_1402866c3
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg3[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140286a67:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 1)
                        arg4[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_1402866d3
                        
                        goto label_140286a7f
                    
                label_1402866c3:
                    arg4[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_1402866d3:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140286aa0
                        
                        goto label_1402866e1
                    
                label_140286a7f:
                    zmm4[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm4[0].q), 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140286aa0:
                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_1402866f0
                        
                        goto label_140286acb
                    
                label_1402866e1:
                    arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140286acb:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140286adf:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_140286702
                            
                            goto label_140286af0
                    else
                    label_1402866f0:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140286adf
                    
                    bool cond:10_1
                    bool cond:12_1
                    bool cond:13_1
                    bool cond:18_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140286af0:
                        arg4[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg4[0].q), 6)
                        cond:10_1 = temp0_712 == 0
                        cond:12_1 = temp0_712 == 0
                        cond:13_1 = temp0_712 == 0
                        cond:18_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140286b0c:
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 7)
                    else
                    label_140286702:
                        cond:10_1 = temp0_712 == 0
                        cond:12_1 = temp0_712 == 0
                        cond:13_1 = temp0_712 == 0
                        cond:18_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140286b0c
                    
                    arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm1[0].o &= arg6[0].o
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg19 = _mm256_mask_set1_epi32(arg5, rdi_31)
                    int64_t k4_4 = _mm256_cmp_epi32_mask(arg5, arg19, zmm1, 5)
                    arg21[0].o = _mm_movm_epi16(k4_4)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, arg21[0].o)
                    int64_t k0_4 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg6[0].o)
                    _kortest_mask8_u8(k0_4, k0_4)
                    arg22 = _mm256_mask_mov_epi64(k0_4, arg17)
                    
                    if (not(cond:10_1))
                        arg23 = _mm256_mask_blend_epi32(k4_4, arg17, arg15)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        zmm31 = _mm256_mask_sub_epi32(k0_4, arg17, arg7)
                        int64_t k0_5 = _mm256_cmp_epi32_mask(k4_4, zmm31, arg15, 2)
                        zmm4[0].o = _mm_movm_epi16(k0_5)
                        arg4[0].o = arg8[0].o & zmm4[0].o
                        k0_4 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_5, arg4[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_4, k0_4)
                        
                        if (cond:13_1)
                            arg22 = _mm256_mask_mov_epi64(k0_4, arg23)
                        else
                            char rdi_33 = _cvtmask32_u32(k0_4)
                            zmm30[0].o = _mm_mask_load_epi64(k0_4, data_142fc92e0)
                            zmm5 = _mm256_mask_mov_epi64(k0_4, arg17)
                            bool cond:28_1
                            
                            do
                                zmm1 = _mm256_mask_mov_epi64(k0_4, zmm31)
                                arg22 = _mm256_mask_add_epi64(k0_4, arg16, 
                                    _mm256_mask_cvtepi32_epi64(k0_4, zmm1[0].o))
                                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_4, arg4[0].o, zmm30[0].o)
                                char temp0_813 = _cvtmask32_u32(k0_6)
                                
                                if ((temp0_813 & 1) == 0)
                                    if ((temp0_813 & 2) != 0)
                                        goto label_1402867bf
                                    
                                    goto label_1402868c3
                                
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, 
                                    zx.d(*arg22[0].o), 0)
                                
                                if ((temp0_813 & 2) != 0)
                                label_1402867bf:
                                    uint32_t rdx_37 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1))
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdx_37, 1)
                                    arg4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    
                                    if ((temp0_813 & 4) == 0)
                                        goto label_1402868d3
                                    
                                    goto label_1402867e3
                                
                            label_1402868c3:
                                arg4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                
                                if ((temp0_813 & 4) == 0)
                                label_1402868d3:
                                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                    
                                    if ((temp0_813 & 8) != 0)
                                        goto label_140286807
                                    
                                    goto label_1402868e2
                                
                            label_1402867e3:
                                uint32_t rdx_39 =
                                    zx.d(*_mm256_extracti32x4_epi32(k0_6, arg22, 1)[0].q)
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdx_39, 2)
                                arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                
                                if ((temp0_813 & 8) != 0)
                                label_140286807:
                                    uint32_t rdx_41 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(
                                        _mm256_extracti32x4_epi32(k0_6, arg22, 1), 1))
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdx_41, 3)
                                    arg22 = _mm256_mask_add_epi64(k0_6, arg14, arg4)
                                    
                                    if ((temp0_813 & 0x10) == 0)
                                        goto label_1402868f2
                                    
                                    goto label_140286828
                                
                            label_1402868e2:
                                arg22 = _mm256_mask_add_epi64(k0_6, arg14, arg4)
                                
                                if ((temp0_813 & 0x10) == 0)
                                label_1402868f2:
                                    
                                    if ((temp0_813 & 0x20) != 0)
                                        goto label_14028683e
                                    
                                    goto label_1402868fc
                                
                            label_140286828:
                                arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, 
                                    zx.d(*arg22[0].o), 4)
                                
                                if ((temp0_813 & 0x20) != 0)
                                label_14028683e:
                                    uint32_t rdx_45 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1))
                                    arg3[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdx_45, 5)
                                    
                                    if ((temp0_813 & 0x40) == 0)
                                        goto label_140286906
                                    
                                    goto label_140286850
                                
                            label_1402868fc:
                                
                                if ((temp0_813 & 0x40) != 0)
                                label_140286850:
                                    arg4[0].o = _mm256_extracti32x4_epi32(k0_6, arg22, 1)
                                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, 
                                        zx.d(*arg4[0].q), 6)
                                    
                                    if (temp0_813 s< 0)
                                    label_14028686d:
                                        arg4[0].o = _mm256_extracti32x4_epi32(k0_6, arg22, 1)
                                        uint32_t rdx_49 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                        arg3[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg3[0].o, rdx_49, 7)
                                else
                                label_140286906:
                                    
                                    if (temp0_813 s< 0)
                                        goto label_14028686d
                                
                                arg4[0].o = arg3[0].o & arg6[0].o
                                arg4 = _mm256_cvtepu16_epi32(arg4[0].o)
                                zmm6 = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_6, arg4, 
                                        arg19), 
                                    zmm4[0].o)
                                arg4[0].o = zx.o(0)
                                int64_t k5_5 = _mm_mask_testn_epi16_mask(k0_6, zmm6, arg6[0].o)
                                zmm0[0].o = zmm6 & arg8[0].o
                                int64_t k0_7 = _mm_mask_test_epi16_mask(k0_6, zmm0[0].o, arg6[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_7))
                                cond:12_1 = rdi_33 == rdx_1.b
                                cond:18_1 = rdi_33 == rdx_1.b
                                cond:28_1 = rdi_33 != rdx_1.b
                                
                                if (rdi_33 != rdx_1.b)
                                    arg4[0].o = zmm6 ^ zmm4[0].o
                                
                                _mm256_mask_mov_epi64(k0_7, zmm5)
                                arg22 = _mm256_mask_mov_epi32(k5_5, arg23)
                                zmm31 = _mm256_mask_sub_epi32(k0_7, zmm1, arg7)
                                zmm4[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_7, zmm31, arg15, 2), arg4[0].o)
                                arg4[0].o = zmm4[0].o & arg8[0].o
                                k0_4 = _mm_mask_test_epi16_mask(k0_7, arg4[0].o, arg6[0].o)
                                _kortest_mask8_u8(k0_4, k0_4)
                                rdi_33 = _cvtmask32_u32(k0_4)
                                zmm5 = zmm1
                                arg23 = _mm256_mask_mov_epi64(k0_4, arg22)
                            while (cond:28_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_4, arg21[0].o, 
                        data_142fc92e0)
                    arg3[0].o = arg8[0].o & zmm1[0].o
                    int64_t k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_4, 
                        arg3[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_11, k0_11)
                    
                    if (not(cond:12_1))
                        arg4 = _mm256_mask_mov_epi32(k4_4, arg22)
                        zmm4[0].o = zx.o(0)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        arg17 = _mm256_mask_add_epi32(k0_11, arg17, arg7)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg17, zmm4), 
                            zmm1[0].o)
                        arg3[0].o = zmm5[0].o & arg8[0].o
                        k0_11 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_11, arg3[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_11, k0_11)
                        
                        if (cond:18_1)
                            arg22 = _mm256_mask_mov_epi64(k0_11, arg4)
                        else
                            char rdi_35 = _cvtmask32_u32(k0_11)
                            arg23[0].o = _mm_mask_load_epi64(k0_11, data_142fc92e0)
                            bool cond:30_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg17[0].o)
                                arg21 = _mm256_mask_add_epi64(k0_11, arg16, zmm0)
                                int64_t k0_12 =
                                    _mm_mask_test_epi16_mask(k0_11, arg3[0].o, arg23[0].o)
                                char temp0_921 = _cvtmask32_u32(k0_12)
                                
                                if ((temp0_921 & 1) == 0)
                                    if ((temp0_921 & 2) != 0)
                                        goto label_140286e0f
                                    
                                    goto label_140286f0d
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg21[0].o), 0)
                                
                                if ((temp0_921 & 2) != 0)
                                label_140286e0f:
                                    uint32_t rdx_70 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg21[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_70, 1)
                                    arg3[0].o = _mm256_extracti32x4_epi32(k0_12, arg17, 1)
                                    
                                    if ((temp0_921 & 4) == 0)
                                        goto label_140286f1e
                                    
                                    goto label_140286e28
                                
                            label_140286f0d:
                                arg3[0].o = _mm256_extracti32x4_epi32(k0_12, arg17, 1)
                                
                                if ((temp0_921 & 4) == 0)
                                label_140286f1e:
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    
                                    if ((temp0_921 & 8) != 0)
                                        goto label_140286e4b
                                    
                                    goto label_140286f2d
                                
                            label_140286e28:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                
                                if ((temp0_921 & 8) != 0)
                                label_140286e4b:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                    uint32_t rdx_74 =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_74, 3)
                                    arg21 = _mm256_mask_add_epi64(k0_12, arg14, arg3)
                                    
                                    if ((temp0_921 & 0x10) == 0)
                                        goto label_140286f3d
                                    
                                    goto label_140286e79
                                
                            label_140286f2d:
                                arg21 = _mm256_mask_add_epi64(k0_12, arg14, arg3)
                                
                                if ((temp0_921 & 0x10) == 0)
                                label_140286f3d:
                                    
                                    if ((temp0_921 & 0x20) != 0)
                                        goto label_140286e8f
                                    
                                    goto label_140286f47
                                
                            label_140286e79:
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                    zx.d(*arg21[0].o), 4)
                                
                                if ((temp0_921 & 0x20) != 0)
                                label_140286e8f:
                                    uint32_t rdx_78 =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg21[0].o, 1))
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_78, 5)
                                    
                                    if ((temp0_921 & 0x40) == 0)
                                        goto label_140286f51
                                    
                                    goto label_140286ea1
                                
                            label_140286f47:
                                
                                if ((temp0_921 & 0x40) != 0)
                                label_140286ea1:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_921 s< 0)
                                    label_140286ebe:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg21, 1)
                                        uint32_t rdx_82 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_82, 7)
                                else
                                label_140286f51:
                                    
                                    if (temp0_921 s< 0)
                                        goto label_140286ebe
                                
                                zmm0[0].o = zmm1[0].o & arg6[0].o
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm6 = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_12, arg19, zmm0, 5), zmm5[0].o)
                                arg3[0].o = zx.o(0)
                                int64_t k4_11 = _mm_mask_testn_epi16_mask(k0_12, zmm6, arg6[0].o)
                                zmm0[0].o = zmm6 & arg8[0].o
                                int64_t k0_13 =
                                    _mm_mask_test_epi16_mask(k0_12, zmm0[0].o, arg6[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_13))
                                cond:30_1 = rdi_35 != rdx_1.b
                                
                                if (rdi_35 != rdx_1.b)
                                    arg3[0].o = zmm6 ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_13, arg17)
                                arg17 = _mm256_mask_add_epi32(k0_13, arg17, arg7)
                                arg22 = _mm256_mask_mov_epi32(k4_11, arg4)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_13, arg17, 
                                        zmm4), 
                                    arg3[0].o)
                                arg3[0].o = zmm5[0].o & arg8[0].o
                                k0_11 = _mm_mask_test_epi16_mask(k0_13, arg3[0].o, arg6[0].o)
                                _kortest_mask8_u8(k0_11, k0_11)
                                rdi_35 = _cvtmask32_u32(k0_11)
                                arg4 = _mm256_mask_mov_epi64(k0_11, arg22)
                            while (cond:30_1)
                    
                    arg17 = _mm256_mask_mov_epi32(k3_21, arg22)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg17[0].o)
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg16, zmm0)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140287e75
                        
                        goto label_1402872be
                    
                    zmm4[0].o = __vpbroadcastb_xmmdq_memb(*zmm1[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140287e75:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rdx_1.d, 1)
                        arg3[0].o = _mm256_extracti32x4_epi32(k0_11, arg17, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_1402872ce
                        
                        goto label_140287e8d
                    
                label_1402872be:
                    arg3[0].o = _mm256_extracti32x4_epi32(k0_11, arg17, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_1402872ce:
                        arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140287eae
                        
                        goto label_1402872dc
                    
                label_140287e8d:
                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm0[0].q), 2)
                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140287eae:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rdx_1.d, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_11, arg14, arg3)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_1402872eb
                        
                        goto label_140287ed9
                    
                label_1402872dc:
                    zmm1 = _mm256_mask_add_epi64(k0_11, arg14, arg3)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140287ed9:
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140287eed:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_1402872fd
                            
                            goto label_140287efe
                    else
                    label_1402872eb:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140287eed
                    
                    bool cond:26_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140287efe:
                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm0[0].q), 6)
                        cond:26_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140287f1a:
                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rdx_1.d, 7)
                    else
                    label_1402872fd:
                        cond:26_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140287f1a
                    
                    arg19 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_11, arg8[0].o, arg6[0].o), arg22, 
                        _mm256_cmpeq_epi32(zmm0, zmm0))
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg19, arg15), 
                        arg8[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_11, zmm1[0].o, arg6[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:26_1))
                        arg15 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg6[0].o), arg19)
                        arg19 = _mm256_mask_mov_epi64(arg5, arg15)
                    
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg19[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg16, zmm0)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140287f4c
                        
                        goto label_14028735e
                    
                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*arg3[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140287f4c:
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 1)
                        arg4[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_14028736e
                        
                        goto label_140287f64
                    
                label_14028735e:
                    arg4[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_14028736e:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_140287f85
                        
                        goto label_14028737c
                    
                label_140287f64:
                    zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_140287f85:
                        zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                        rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14028738b
                        
                        goto label_140287fb0
                    
                label_14028737c:
                    arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140287fb0:
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140287fc4:
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14028739d
                            
                            goto label_140287fd5
                    else
                    label_14028738b:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140287fc4
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140287fd5:
                        zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm1[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, zx.d(*zmm0[0].q), 6)
                        arg4[0].o = zmm4[0].o & arg6[0].o
                        
                        if (temp0_712 s< 0)
                        label_140287ff5:
                            zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                            rdx_1 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rdx_1.d, 7)
                    else
                    label_14028739d:
                        arg4[0].o = zmm4[0].o & arg6[0].o
                        
                        if (temp0_712 s< 0)
                            goto label_140287ff5
                    
                    arg3 = _mm256_cvtepu16_epi32(arg4[0].o)
                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg4[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                    label_1402873ca:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(zmm1, arg3), 1)
                        zmm1 = _mm256_mask_broadcastss_ps(arg5, arg18[0].o)
                        arg3 = _mm256_cvtepi32_ps(arg3)
                        zmm1 = _mm256_sub_ps(zmm1, arg3)
                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                        arg4 = _mm256_div_ps(zmm1, zmm0)
                else
                    arg4 = _mm256_mask_add_epi32(arg5, arg17, arg17)
                    zmm1 = _mm256_cvtepi32_epi64(arg4[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg16, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_1402869a0
                        
                        goto label_1402863d1
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_1402869a0:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 1)
                        arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_1402863e0
                        
                        goto label_1402869ba
                    
                label_1402863d1:
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_1402863e0:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_1402869d8
                        
                        goto label_1402863ee
                    
                label_1402869ba:
                    zmm4[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm4[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_1402869d8:
                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_1402863fd
                        
                        goto label_1402869fd
                    
                label_1402863ee:
                    arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_1402869fd:
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg3[0].q, 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140286a0b:
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14028640f
                            
                            goto label_140286a1f
                    else
                    label_1402863fd:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140286a0b
                    
                    bool cond:11_1
                    bool cond:14_1
                    bool cond:15_1
                    bool cond:19_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140286a1f:
                        arg4[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg4[0].q, 6)
                        cond:11_1 = temp0_712 == 0
                        cond:14_1 = temp0_712 == 0
                        cond:15_1 = temp0_712 == 0
                        cond:19_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_140286a38:
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 7)
                    else
                    label_14028640f:
                        cond:11_1 = temp0_712 == 0
                        cond:14_1 = temp0_712 == 0
                        cond:15_1 = temp0_712 == 0
                        cond:19_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_140286a38
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg19 = _mm256_mask_set1_epi32(arg5, rdi_31)
                    int64_t k4_3 = _mm256_cmp_epi32_mask(arg5, arg19, zmm1, 5)
                    arg21[0].o = _mm_movm_epi16(k4_3)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, arg21[0].o)
                    int64_t k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0, k0)
                    arg3 = _mm256_mask_mov_epi64(k0, arg17)
                    
                    if (not(cond:11_1))
                        arg22 = _mm256_mask_blend_epi32(k4_3, arg17, arg15)
                        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                        arg7 = _mm256_mask_sub_epi32(k0, arg17, arg6)
                        int64_t k0_1 = _mm256_cmp_epi32_mask(k4_3, arg7, arg15, 2)
                        zmm5[0].o = _mm_movm_epi16(k0_1)
                        arg4[0].o = arg8[0].o & zmm5[0].o
                        k0 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_1, arg4[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (cond:15_1)
                            arg3 = _mm256_mask_mov_epi64(k0, arg22)
                        else
                            char rdi_32 = _cvtmask32_u32(k0)
                            zmm31[0].o = _mm_mask_load_epi64(k0, data_142fc92e0)
                            zmm4[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            zmm30 = _mm256_mask_mov_epi64(k0, arg17)
                            bool cond:29_1
                            
                            do
                                arg23 = _mm256_mask_mov_epi64(k0, arg7)
                                arg7 = _mm256_add_epi32(arg7, arg7)
                                arg3 = _mm256_mask_add_epi64(k0, arg16, 
                                    _mm256_cvtepi32_epi64(arg7[0].o))
                                int64_t k0_2 = _mm_mask_test_epi16_mask(k0, arg4[0].o, zmm31[0].o)
                                char temp0_759 = _cvtmask32_u32(k0_2)
                                
                                if ((temp0_759 & 1) == 0)
                                    if ((temp0_759 & 2) != 0)
                                        goto label_1402864c4
                                    
                                    goto label_1402865b7
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg3[0].q, 0)
                                
                                if ((temp0_759 & 2) != 0)
                                label_1402864c4:
                                    int64_t rdx_26 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_26, 1)
                                    arg4[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_759 & 4) == 0)
                                        goto label_1402865c7
                                    
                                    goto label_1402864e5
                                
                            label_1402865b7:
                                arg4[0].o = _mm256_extracti128_si256(arg7, 1)
                                
                                if ((temp0_759 & 4) == 0)
                                label_1402865c7:
                                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                    
                                    if ((temp0_759 & 8) != 0)
                                        goto label_1402864fe
                                    
                                    goto label_1402865d6
                                
                            label_1402864e5:
                                uint16_t* rdx_27 = _mm256_extracti128_si256(arg3, 1)[0].q
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_27, 2)
                                arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                
                                if ((temp0_759 & 8) != 0)
                                label_1402864fe:
                                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                    int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_28, 3)
                                    arg3 = _mm256_mask_add_epi64(k0_2, arg14, arg4)
                                    
                                    if ((temp0_759 & 0x10) == 0)
                                        goto label_1402865e6
                                    
                                    goto label_140286524
                                
                            label_1402865d6:
                                arg3 = _mm256_mask_add_epi64(k0_2, arg14, arg4)
                                
                                if ((temp0_759 & 0x10) == 0)
                                label_1402865e6:
                                    
                                    if ((temp0_759 & 0x20) != 0)
                                        goto label_140286533
                                    
                                    goto label_1402865f0
                                
                            label_140286524:
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg3[0].q, 4)
                                
                                if ((temp0_759 & 0x20) != 0)
                                label_140286533:
                                    int64_t rdx_30 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_30, 5)
                                    
                                    if ((temp0_759 & 0x40) == 0)
                                        goto label_1402865fa
                                    
                                    goto label_140286548
                                
                            label_1402865f0:
                                
                                if ((temp0_759 & 0x40) != 0)
                                label_140286548:
                                    arg4[0].o = _mm256_extracti128_si256(arg3, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg4[0].q, 6)
                                    
                                    if (temp0_759 s< 0)
                                    label_140286561:
                                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                        int64_t rdx_32 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_32, 7)
                                else
                                label_1402865fa:
                                    
                                    if (temp0_759 s< 0)
                                        goto label_140286561
                                
                                arg3 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                arg3[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_2, arg3, 
                                        arg19), 
                                    zmm5[0].o)
                                arg4[0].o = zx.o(0)
                                int64_t k5_2 = _mm_mask_testn_epi16_mask(k0_2, arg3[0].o, zmm4[0].o)
                                int64_t k0_3 =
                                    _mm_mask_test_epi16_mask(k0_2, arg3[0].o & arg8[0].o, zmm4[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_3))
                                cond:14_1 = rdi_32 == rdx_1.b
                                cond:19_1 = rdi_32 == rdx_1.b
                                cond:29_1 = rdi_32 != rdx_1.b
                                
                                if (rdi_32 != rdx_1.b)
                                    arg4[0].o = arg3[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_3, zmm30)
                                arg3 = _mm256_mask_mov_epi32(k5_2, arg22)
                                arg7 = _mm256_mask_sub_epi32(k0_3, arg23, arg6)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_3, arg7, arg15, 2), arg4[0].o)
                                arg4[0].o = zmm5[0].o & arg8[0].o
                                k0 = _mm_mask_test_epi16_mask(k0_3, arg4[0].o, zmm4[0].o)
                                _kortest_mask8_u8(k0, k0)
                                rdi_32 = _cvtmask32_u32(k0)
                                zmm30 = _mm256_mask_mov_epi64(k0, arg23)
                                arg22 = _mm256_mask_mov_epi64(k0, arg3)
                            while (cond:29_1)
                    
                    zmm1[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0, arg21[0].o, 
                        data_142fc92e0)
                    arg4[0].o = arg8[0].o & zmm1[0].o
                    int64_t k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, arg4[0].o, 
                        data_142fc92e0)
                    _kortest_mask8_u8(k0_8, k0_8)
                    
                    if (not(cond:14_1))
                        arg4 = _mm256_mask_mov_epi32(k4_3, arg3)
                        arg22[0].o = _mm_mask_xor_epi32(k0_8, arg22[0].o, arg22[0].o)
                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                        arg21 = _mm256_mask_add_epi32(k0_8, arg17, arg7)
                        zmm5[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg21, arg22), 
                            zmm1[0].o)
                        arg6[0].o = zmm5[0].o & arg8[0].o
                        k0_8 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_8, arg6[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_8, k0_8)
                        
                        if (cond:19_1)
                            arg3 = arg4
                        else
                            char rdi_34 = _cvtmask32_u32(k0_8)
                            arg17[0].o = _mm_mask_load_epi64(k0_8, data_142fc92e0)
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            bool cond:31_1
                            
                            do
                                arg23 = _mm256_mask_add_epi32(k0_8, arg21, arg21)
                                arg3 = _mm256_mask_add_epi64(k0_8, arg16, 
                                    _mm256_mask_cvtepi32_epi64(k0_8, arg23[0].o))
                                int64_t k0_9 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, arg17[0].o)
                                char temp0_884 = _cvtmask32_u32(k0_9)
                                
                                if ((temp0_884 & 1) == 0)
                                    if ((temp0_884 & 2) != 0)
                                        goto label_140286bc4
                                    
                                    goto label_140286cb3
                                
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 0)
                                
                                if ((temp0_884 & 2) != 0)
                                label_140286bc4:
                                    uint16_t* rdx_59 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_59, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_9, arg23, 1)
                                    
                                    if ((temp0_884 & 4) == 0)
                                        goto label_140286cc4
                                    
                                    goto label_140286be6
                                
                            label_140286cb3:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_9, arg23, 1)
                                
                                if ((temp0_884 & 4) == 0)
                                label_140286cc4:
                                    arg23 = _mm256_mask_cvtepi32_epi64(k0_9, arg6[0].o)
                                    
                                    if ((temp0_884 & 8) != 0)
                                        goto label_140286c00
                                    
                                    goto label_140286cd4
                                
                            label_140286be6:
                                uint16_t* rdx_60 = _mm256_extracti128_si256(arg3, 1)[0].q
                                zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_60, 2)
                                arg23 = _mm256_mask_cvtepi32_epi64(k0_9, arg6[0].o)
                                
                                if ((temp0_884 & 8) != 0)
                                label_140286c00:
                                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                    uint16_t* rdx_61 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_61, 3)
                                    arg3 = _mm256_mask_add_epi64(k0_9, arg14, arg23)
                                    
                                    if ((temp0_884 & 0x10) == 0)
                                        goto label_140286ce4
                                    
                                    goto label_140286c26
                                
                            label_140286cd4:
                                arg3 = _mm256_mask_add_epi64(k0_9, arg14, arg23)
                                
                                if ((temp0_884 & 0x10) == 0)
                                label_140286ce4:
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                        goto label_140286c35
                                    
                                    goto label_140286cee
                                
                            label_140286c26:
                                zmm4[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 4)
                                
                                if ((temp0_884 & 0x20) != 0)
                                label_140286c35:
                                    uint16_t* rdx_63 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_63, 5)
                                    
                                    if ((temp0_884 & 0x40) == 0)
                                        goto label_140286cf8
                                    
                                    goto label_140286c4a
                                
                            label_140286cee:
                                
                                if ((temp0_884 & 0x40) != 0)
                                label_140286c4a:
                                    arg6[0].o = _mm256_extracti128_si256(arg3, 1)
                                    zmm4[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg6[0].q, 6)
                                    
                                    if (temp0_884 s< 0)
                                    label_140286c63:
                                        arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                                        uint16_t* rdx_65 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rdx_65, 7)
                                else
                                label_140286cf8:
                                    
                                    if (temp0_884 s< 0)
                                        goto label_140286c63
                                
                                arg3 = _mm256_cvtepu16_epi32(zmm4[0].o)
                                arg3[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_9, arg19, arg3, 5), zmm5[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k4_7 = _mm_mask_testn_epi16_mask(k0_9, arg3[0].o, zmm1[0].o)
                                int64_t k0_10 =
                                    _mm_mask_test_epi16_mask(k0_9, arg3[0].o & arg8[0].o, zmm1[0].o)
                                rdx_1 = zx.q(_cvtmask32_u32(k0_10))
                                cond:31_1 = rdi_34 != rdx_1.b
                                
                                if (rdi_34 != rdx_1.b)
                                    arg6[0].o = arg3[0].o ^ zmm5[0].o
                                
                                _mm256_mask_mov_epi64(k0_10, arg21)
                                arg21 = _mm256_mask_add_epi32(k0_10, arg21, arg7)
                                arg3 = _mm256_mask_mov_epi32(k4_7, arg4)
                                zmm5[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_10, arg21, 
                                        arg22), 
                                    arg6[0].o)
                                arg6[0].o = zmm5[0].o & arg8[0].o
                                k0_8 = _mm_mask_test_epi16_mask(k0_10, arg6[0].o, zmm1[0].o)
                                _kortest_mask8_u8(k0_8, k0_8)
                                rdi_34 = _cvtmask32_u32(k0_8)
                                arg4 = arg3
                            while (cond:31_1)
                    
                    arg17 = _mm256_mask_mov_epi32(k3_21, arg3)
                    arg4 = _mm256_mask_add_epi32(k0_8, arg17, arg17)
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg16, _mm256_cvtepi32_epi64(arg4[0].o))
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_140287125
                        
                        goto label_140287001
                    
                    arg6[0].o = __vpbroadcastw_xmmdq_memw(*zmm1[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_140287125:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rdx_1, 1)
                        arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_140287010
                        
                        goto label_14028713f
                    
                label_140287001:
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_140287010:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_14028715d
                        
                        goto label_14028701e
                    
                label_14028713f:
                    zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm4[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_14028715d:
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rdx_1, 3)
                        zmm1 = _mm256_mask_add_epi64(k0_8, arg14, arg4)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_14028702d
                        
                        goto label_140287182
                    
                label_14028701e:
                    zmm1 = _mm256_mask_add_epi64(k0_8, arg14, arg4)
                    
                    if ((temp0_712 & 0x10) != 0)
                    label_140287182:
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm1[0].q, 4)
                        
                        if ((temp0_712 & 0x20) != 0)
                        label_140287190:
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rdx_1, 5)
                            
                            if ((temp0_712 & 0x40) == 0)
                                goto label_14028703f
                            
                            goto label_1402871a4
                    else
                    label_14028702d:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140287190
                    
                    bool cond:27_1
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_1402871a4:
                        arg4[0].o = _mm256_extracti128_si256(zmm1, 1)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg4[0].q, 6)
                        cond:27_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                        label_1402871bd:
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rdx_1, 7)
                    else
                    label_14028703f:
                        cond:27_1 = temp0_712 == 0
                        
                        if (temp0_712 s< 0)
                            goto label_1402871bd
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    arg19 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_8, arg8[0].o, zmm1[0].o), arg3, 
                        _mm256_cmpeq_epi32(arg4, arg4))
                    arg3[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg19, arg15), 
                        arg8[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_8, arg3[0].o, zmm1[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:27_1))
                        arg15 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg3[0].o, zmm1[0].o), arg19)
                        arg19 = _mm256_mask_mov_epi64(arg5, arg15)
                    
                    arg4 = _mm256_mask_add_epi32(arg5, arg19, arg19)
                    zmm1 = _mm256_cvtepi32_epi64(arg4[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg16, zmm1)
                    
                    if ((temp0_712 & 1) == 0)
                        if ((temp0_712 & 2) != 0)
                            goto label_1402871e6
                        
                        goto label_1402870ae
                    
                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*arg3[0].q)
                    
                    if ((temp0_712 & 2) != 0)
                    label_1402871e6:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 1)
                        arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                        
                        if ((temp0_712 & 4) == 0)
                            goto label_1402870bd
                        
                        goto label_140287200
                    
                label_1402870ae:
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_712 & 4) == 0)
                    label_1402870bd:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_712 & 8) != 0)
                            goto label_14028721e
                        
                        goto label_1402870cb
                    
                label_140287200:
                    zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_712 & 8) != 0)
                    label_14028721e:
                        zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                        
                        if ((temp0_712 & 0x10) == 0)
                            goto label_1402870da
                        
                        goto label_140287243
                    
                label_1402870cb:
                    arg3 = _mm256_mask_add_epi64(arg5, arg14, arg4)
                    
                    if ((temp0_712 & 0x10) == 0)
                    label_1402870da:
                        
                        if ((temp0_712 & 0x20) != 0)
                            goto label_140287251
                        
                        goto label_1402870e3
                    
                label_140287243:
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg3[0].q, 4)
                    
                    if ((temp0_712 & 0x20) != 0)
                    label_140287251:
                        rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 5)
                        
                        if ((temp0_712 & 0x40) == 0)
                            goto label_1402870ec
                        
                        goto label_140287265
                    
                label_1402870e3:
                    
                    if ((temp0_712 & 0x40) != 0)
                    label_140287265:
                        zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_712 s< 0)
                        label_14028727e:
                            zmm0[0].o = _mm256_extracti128_si256(arg3, 1)
                            rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rdx_1, 7)
                    else
                    label_1402870ec:
                        
                        if (temp0_712 s< 0)
                            goto label_14028727e
                    
                    arg3 = _mm256_cvtepu16_epi32(arg6[0].o)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg4[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                        goto label_1402873ca
                
                zmm0[0].o =
                    __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg25[0].o, data_142fc92e0)
                arg14 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    arg4)
        
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
        uint64_t k1_35
        
        if (r15.d u> 6)
        label_1402874b2:
            zmm0[0].o = zx.o(0)
            var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            var_4c0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
        label_1402878ef:
            var_4a0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg17, arg19, 4), zmm23, arg24)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (cond:5_1)
            label_14028770e:
                uint32_t var_400_1[0x8]
                float var_3e0_1[0x8]
                float var_3c0_1[0x8]
                
                if (r15.d u> 6)
                label_140287795:
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_400_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                else
                    zmm1 = _mm256_mask_mullo_epi32(k0_15, arg19, arg20)
                    
                    switch (rbx_26)
                        case 0, 1
                            zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(k0_15, zmm5, arg26), zmm1)
                            int64_t k2_65
                            char temp0_1100
                            temp0_1100, k2_65 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + zmm0[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 4)
                            int64_t k2_66 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                            int64_t k2_67
                            char temp0_1103
                            temp0_1103, k2_67 = _mm256_mmask_i32gather_ps(k2_66, *(r12 + arg3[0].q))
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 8)
                            arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                            int64_t k2_69
                            char temp0_1106
                            temp0_1106, k2_69 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + zmm0[0].q))
                            var_400_1 = _mm256_mask_storeu_ps(k1_35, temp0_1100)
                            var_3e0_1 = _mm256_mask_storeu_ps(k1_35, temp0_1103)
                            var_3c0_1 = _mm256_mask_storeu_ps(k1_35, temp0_1106)
                        case 2
                            zmm0 = _mm256_mask_add_epi32(k0_15, zmm5, arg26)
                            arg3 = _mm256_add_epi32(zmm0, zmm1)
                            zmm0 = _mm256_mask_add_epi32(k1_35, zmm0, zmm1)
                            int64_t r8_11 = sx.q(zmm0[0])
                            int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rsi_34 = sx.q(zmm0[0])
                            int64_t rcx_163 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t rdx_97 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rbx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(r12 + r8_11))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_9), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_10), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r14_4), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_34), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_163), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdx_97), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rbx_29), 7)
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, arg3, 2)
                            int64_t r8_12 = sx.q(zmm1[0])
                            int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                            int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t rsi_36 = sx.q(zmm1[0])
                            int64_t rcx_166 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                            int64_t rdx_100 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int64_t rbx_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                            zmm1[0].o = zx.o(*(r12 + r8_12))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r10_10), 1)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_11), 2)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r14_5), 3)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_36), 4)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rcx_166), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdx_100), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_32), 7)
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, arg3, 4)
                            int64_t r8_13 = sx.q(arg3[0])
                            int32_t rdx_101 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1)
                            int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rsi_38 = sx.q(arg3[0])
                            int32_t rcx_168 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1)
                            int64_t rbx_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int32_t rdx_102 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3)
                            arg3[0].o = zx.o(*(r12 + r8_13))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                *(r12 + sx.q(rdx_101)), 1)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r10_11), 2)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r14_6), 3)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rsi_38), 4)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                *(r12 + sx.q(rcx_168)), 5)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rbx_35), 6)
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, 
                                *(r12 + sx.q(rdx_102)), 7)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg4))
                            zmm4 = _mm256_broadcast_ss(32767f)
                            zmm0 = _mm256_div_ps(zmm0, zmm4)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm1[0].o), arg4)), 
                                zmm4)
                            arg3 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg3[0].o), arg4)), 
                                zmm4)
                            arg4 = _mm256_broadcast_ss(128f)
                            zmm0 = _mm256_mul_ps(zmm0, arg4)
                            zmm1 = _mm256_mul_ps(zmm1, arg4)
                            arg3 = _mm256_mul_ps(arg3, arg4)
                            var_400_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                            var_3e0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                            var_3c0_1 = _mm256_mask_storeu_ps(k1_35, arg3)
                        case 3
                            int64_t k2_72 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k2_73
                            char temp0_1222
                            temp0_1222, k2_73 =
                                _mm256_mmask_i32gather_ps(k2_72, *(r12 + arg26[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 4)
                            int64_t k2_74 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                            int64_t k2_75
                            char temp0_1225
                            temp0_1225, k2_75 = _mm256_mmask_i32gather_ps(k2_74, *(r12 + arg3[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 8)
                            int64_t k2_76 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            int64_t k2_77
                            char temp0_1228
                            temp0_1228, k2_77 = _mm256_mmask_i32gather_ps(k2_76, *(r12 + arg3[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0xc)
                            int64_t k2_78 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            arg15[0].o = _mm_mask_xor_epi32(k0_15, arg15[0].o, arg15[0].o)
                            int64_t k2_79
                            char temp0_1231
                            temp0_1231, k2_79 = _mm256_mmask_i32gather_ps(k2_78, *(r12 + arg3[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0x10)
                            int64_t k2_80 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            arg16[0].o = _mm_mask_xor_ps(k0_15, arg16[0].o, arg16[0].o)
                            int64_t k2_81
                            char temp0_1234
                            temp0_1234, k2_81 = _mm256_mmask_i32gather_ps(k2_80, *(r12 + arg3[0].q))
                            arg17 =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0x14)
                            int64_t k2_82 = __kmovq_maskmskw_masku64_avx512(k1_35)
                            arg18[0].o = _mm_mask_xor_epi32(k0_15, arg18[0].o, arg18[0].o)
                            int64_t k2_83
                            char temp0_1237
                            temp0_1237, k2_83 =
                                _mm256_mmask_i32gather_ps(k2_82, *(r12 + arg17[0].q))
                            zmm1 = _mm256_add_epi32(_mm256_mask_add_epi32(k0_15, zmm5, arg26), zmm1)
                            int64_t k2_85
                            char temp0_1240
                            temp0_1240, k2_85 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_35), *(r12 + zmm1[0].q))
                            arg3 = temp0_1240
                            zmm1 = _mm256_srli_epi32(arg3, 0x15)
                            zmm5 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                                _mm256_srli_epi32(arg3, 0xa), 0x7ff)
                            arg3 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_15, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                                        __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg3, 
                                            0x3ff), 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                k0_15, temp0_1231, temp0_1222)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm5 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm5, zmm0))
                            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_15, 1023f)
                            zmm5 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_15, zmm5, arg15), 
                                k0_15, temp0_1234, temp0_1225)
                            zmm0 = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(k0_15, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg15), 
                                k0_15, temp0_1237, temp0_1228)
                            var_400_1 = _mm256_mask_storeu_ps(k1_35, arg3)
                            var_3e0_1 = _mm256_mask_storeu_ps(k1_35, zmm5)
                            var_3c0_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                        case 4, 5, 6
                            goto label_140287795
                
                arg4 = var_4e0_1
                zmm4 = var_4c0_1
                zmm5 = var_4a0_1
                zmm0 = _mm256_sub_ps(var_400_1, arg4)
                zmm1 = _mm256_sub_ps(var_3e0_1, zmm4)
                arg3 = _mm256_sub_ps(var_3c0_1, zmm5)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, k0_15, arg14, arg4)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_15, arg14, zmm4)
                arg3 = _mm256_mask3_fmadd_ps(arg3, k0_15, arg14, zmm5)
                var_4e0_1 = _mm256_mask_storeu_ps(k1_35, zmm0)
                var_4c0_1 = _mm256_mask_storeu_ps(k1_35, zmm1)
                var_4a0_1 = _mm256_mask_storeu_ps(k1_35, arg3)
        else
            zmm1 = _mm256_mask_mullo_epi32(k0_15, arg17, arg20)
            int64_t rdi_36 = sx.q(jump_table_140288048[rbx_26])
            cond:5_1 = rdi_36 != -0x140288048
            
            switch (rdi_36)
                case -0xbf9
                    zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(k0_15, zmm5, arg26), zmm1)
                    uint64_t k2_62 = _cvtu32_mask32(r9_8)
                    int64_t k3_30
                    char temp0_1018
                    temp0_1018, k3_30 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_62), *(r12 + zmm0[0].q))
                    zmm1 = temp0_1018
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 4)
                    int64_t k3_31 = __kmovq_maskmskw_masku64_avx512(k2_62)
                    arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                    int64_t k3_32
                    char temp0_1021
                    temp0_1021, k3_32 = _mm256_mmask_i32gather_ps(k3_31, *(r12 + arg3[0].q))
                    arg4 = temp0_1021
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, zmm0, 8)
                    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                    int64_t k2_63
                    char temp0_1024
                    temp0_1024, k2_63 = _mm256_mmask_i32gather_ps(k2_62, *(r12 + zmm0[0].q))
                    arg3 = temp0_1024
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, arg4)
                case -0xb96
                    goto label_1402874b2
                case -0xb7d
                    zmm0 = _mm256_mask_add_epi32(k0_15, zmm5, arg26)
                    arg3 = _mm256_add_epi32(zmm0, zmm1)
                    zmm0 = _mm256_mask_add_epi32(k1_33, zmm0, zmm1)
                    int64_t r8_8 = sx.q(zmm0[0])
                    int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t r14_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t r15_5 = sx.q(zmm0[0])
                    int64_t rdi_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int64_t rsi_27 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                    int64_t rcx_153 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(r12 + r8_8))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r10_6), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r11_7), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r14_1), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + r15_5), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rdi_40), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rsi_27), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r12 + rcx_153), 7)
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg3, 2)
                    int64_t r8_9 = sx.q(zmm1[0])
                    int64_t r10_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t r15_6 = sx.q(zmm1[0])
                    int64_t rdx_89 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t rdi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_30 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = zx.o(*(r12 + r8_9))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r10_7), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_8), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r14_2), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r15_6), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdx_89), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rdi_43), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_30), 7)
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg3, 4)
                    int64_t r8_10 = sx.q(arg3[0])
                    int32_t rdx_90 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1)
                    int64_t r10_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                    arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                    int64_t r15_7 = sx.q(arg3[0])
                    int32_t rdi_45 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1)
                    int64_t rdx_92 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                    int32_t rsi_32 = __vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3)
                    arg3[0].o = zx.o(*(r12 + r8_10))
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + sx.q(rdx_90)), 1)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r10_8), 2)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r14_3), 3)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r15_7), 4)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + sx.q(rdi_45)), 5)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rdx_92), 6)
                    arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + sx.q(rsi_32)), 7)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg4))
                    zmm4 = _mm256_broadcast_ss(32767f)
                    zmm0 = _mm256_div_ps(zmm0, zmm4)
                    zmm1 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm1[0].o), 
                            arg4)), 
                        zmm4)
                    arg3 = _mm256_div_ps(
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg3[0].o), 
                            arg4)), 
                        zmm4)
                    arg4 = _mm256_broadcast_ss(128f)
                    zmm0 = _mm256_mul_ps(zmm0, arg4)
                    zmm1 = _mm256_mul_ps(zmm1, arg4)
                    arg3 = _mm256_mul_ps(arg3, arg4)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, zmm0)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, zmm1)
                case -0x89a
                    uint64_t k2_70 = _cvtu32_mask32(r9_8)
                    int64_t k3_34
                    char temp0_1113
                    temp0_1113, k3_34 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg26[0].q))
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 4)
                    arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                    int64_t k3_36
                    char temp0_1116
                    temp0_1116, k3_36 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg3[0].q))
                    arg4 = temp0_1116
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 8)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    int64_t k3_38
                    char temp0_1119
                    temp0_1119, k3_38 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg3[0].q))
                    zmm4 = temp0_1119
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0xc)
                    arg15[0].o = _mm_mask_xor_epi32(k0_15, arg15[0].o, arg15[0].o)
                    int64_t k3_40
                    char temp0_1122
                    temp0_1122, k3_40 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg3[0].q))
                    arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0x10)
                    arg16[0].o = _mm_mask_xor_ps(k0_15, arg16[0].o, arg16[0].o)
                    int64_t k3_42
                    char temp0_1125
                    temp0_1125, k3_42 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg3[0].q))
                    arg16 = temp0_1125
                    arg18 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg26, 0x14)
                    arg21[0].o = _mm_mask_xor_epi32(k0_15, arg21[0].o, arg21[0].o)
                    int64_t k3_44
                    char temp0_1128
                    temp0_1128, k3_44 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_70), *(r12 + arg18[0].q))
                    int64_t k2_71
                    char temp0_1131
                    temp0_1131, k2_71 = _mm256_mmask_i32gather_epi32(k2_70, 
                        *(r12 + _mm256_mask_add_epi32(k0_15, 
                            _mm256_mask_add_epi32(k0_15, zmm5, arg26), zmm1)[0].q))
                    arg3 = temp0_1131
                    zmm1 = _mm256_srli_epi32(arg3, 0x15)
                    arg18 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                        _mm256_mask_srli_epi32(k0_15, arg3, 0xa), 0x7ff)
                    arg3 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_15, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_15, arg3, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        k0_15, temp0_1122, temp0_1113)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg15 =
                        _mm256_mask_cvtepi32_ps(k0_15, _mm256_mask_add_epi32(k0_15, arg18, zmm0))
                    arg18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_15, 1023f)
                    arg15 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_15, arg15, arg18), k0_15, 
                        arg16, arg4)
                    zmm0 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(k0_15, _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), 
                            arg18), 
                        k0_15, temp0_1128, zmm4)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_33, arg3)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_33, arg15)
                    goto label_1402878ef
            
            var_4a0_1 = _mm256_mask_storeu_ps(k1_33, arg3)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_15, arg17, arg19, 4), zmm23, arg24)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (rdi_36 != -0x140288048)
                goto label_14028770e
        zmm0[0].o = var_4e0_1[0].o
        zmm1[0].o = var_4e0_1[4].o
        arg3[0].o = var_4c0_1[0].o
        int128_t var_4b0
        arg4[0].o = var_4b0
        zmm4[0].o = var_4a0_1[0].o
        zmm5[0].o = var_4a0_1[2].o
        arg14[0].o = _mm_mask_xor_epi32(k0_15, arg14[0].o, arg14[0].o)
        zmm6 = _mm_mask_unpacklo_epi32(k0_15, zmm4[0].o, arg14[0].o)
        zmm4[0].o = _mm_mask_unpackhi_epi32(k0_15, zmm4[0].o, arg14[0].o)
        arg6[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm6)
        int128_t var_240 = arg3[0].o
        arg3[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm6)
        int128_t var_230_1 = arg3[0].o
        arg3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        int128_t var_220_1 = arg3[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        int128_t var_210_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_epi32(k0_15, zmm5[0].o, arg14[0].o)
        arg3[0].o = _mm_mask_unpackhi_epi32(k0_15, zmm5[0].o, arg14[0].o)
        zmm4[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
        arg4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        int128_t var_200_1 = arg4[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        int128_t var_1e0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        uint64_t i = zx.q(r9_8.b)
        
        do
            uint64_t rcx_171 = _tzcnt_u64(i)
            uint32_t var_120[0x8] = arg9
            zmm0[0].o = (&var_240)[rcx_171]
            *(result + sx.q(var_120[zx.q(rcx_171.d) & 7]) * 0x30 + 0x20) = zmm0[0].o
            i &= rol.q(-2, rcx_171.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(r9_9)
    zmm0 = _mm256_slli_epi32(zmm0, 2)
    arg7 = _mm256_broadcastd_epi32(zmm0[0])
    zmm0[0].o = zx.o(r12)
    arg9 = _mm256_mask_set1_epi32(arg5, rdx_1.d)
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
    zmm0[0].o = arg3[0].o
    zmm0[0] = float.s(r11 - 1)
    float var_180_1[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm30[0].o)
    zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm30[0].o)
    int32_t rcx_6 = int.d(zmm0[0])
    int32_t rcx_7 = rcx_6 & not.d(rcx_6 s>> 0x1f)
    
    if (rsi_1 s> rcx_7)
        rsi_1 = rcx_7
    
    arg14 = _mm256_mask_set1_epi32(arg5, rsi_1)
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    uint32_t var_1c0_1[0x8] = zmm0
    rcx_7.b = r15.d == 3
    rcx_7.b = neg.b(rcx_7.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rcx_7)
    r10 = 0
    bool cond:2_1 = true
    bool cond:3_1 = true
    arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
    float var_140_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    float var_1a0_1[0x8] = _mm256_broadcast_sd(-nan.0)
    zmm11 = data_142fc92e0
    arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    arg5 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
    int64_t var_508_1 = r8
    r9 = rdx_117
    int32_t var_420_1[0x8] = arg7
    
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
        zmm1 = _mm256_mullo_epi32(temp0_34, arg7)
        int64_t k1_6
        char temp0_36
        temp0_36, k1_6 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r8 + zmm1[0].q))
        arg12 = temp0_36
        zmm1 = _mm256_add_epi32(zmm1, zmm0)
        int64_t k1_8
        char temp0_38
        temp0_38, k1_8 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r8 + zmm1[0].q))
        arg3 = temp0_38
        int64_t k1_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg3, 2, 1)
        zmm0[0].o = var_2f0_1
        zmm23[0].o =
            __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_9, zmm0[0].o, data_142fc92e0)
        int64_t k2_1 = _mm_mask_test_epi16_mask(arg5, zmm23[0].o, zmm11)
        _kortest_mask8_u8(k2_1, k2_1)
        
        if (not(cond:2_1))
            int64_t k2_2 = _mm_mask_testn_epi16_mask(arg5, zmm23[0].o, zmm11)
            arg25 = _mm256_mask_mov_epi32(k2_2, arg25)
            arg22 = _mm256_mask_mov_epi32(k2_2, arg22)
        
        zmm31[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, zmm11)
        int64_t k2_3 = _mm_cmp_epi16_mask(arg5, zmm31[0].o, arg21[0].o, 4)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        _kortest_mask8_u8(k2_3, k2_3)
        
        if (not(cond:3_1))
            arg10 = _mm256_add_epi32(arg3, arg8)
            
            if (zmm30[0].o f>= 1f)
                int64_t k2_5 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11)
                arg25 = _mm256_mask_blend_epi32(k2_5, arg10, arg25)
                arg10 = _mm256_mask_mov_epi32(k2_5, arg22)
                arg22 = _mm256_mask_mov_epi64(arg5, arg10)
            else
                zmm1[0].o = _mm256_extracti128_si256(arg12, 1)
                zmm0 = arg9
                arg3 = _mm256_mullo_epi32(arg3, arg9)
                arg4 = _mm256_cvtepi32_epi64(arg12[0])
                zmm1 = _mm256_cvtepi32_epi64(zmm1[0].o)
                zmm5[0].o = _mm256_extracti128_si256(arg3, 1)
                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                arg15 = _mm256_mask_load_epi64(arg5, var_160_1)
                zmm1 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, arg15, zmm1), zmm5)
                arg3 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, arg15, arg4), arg3)
                arg15 = _mm256_mask_and_epi64(arg5, zmm1, var_1a0_1)
                arg20 = _mm256_mask_and_epi64(arg5, arg3, var_1a0_1)
                arg16[0].o = _mm_mask_xor_epi64(arg5, zmm23[0].o, arg21[0].o)
                char temp0_60 = _cvtmask32_u32(k2_3)
                arg9 = _mm256_min_epi32(
                    _mm256_mask_max_epi32(arg5, 
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg10), 
                            var_180_1)), 
                        arg26), 
                    arg10)
                
                if (r11 s< 0x100)
                    zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    int128_t var_310
                    zmm4[0].o = var_310
                    
                    if ((temp0_60 & 1) == 0)
                        if ((temp0_60 & 2) != 0)
                            goto label_140284b70
                        
                        goto label_1402847c9
                    
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*arg3[0].q), 0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_140284b70:
                        uint16_t rcx_53[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_53, 1)
                        var_1a0_1[0].o = _mm256_extracti128_si256(arg9, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_1402847d9
                        
                        goto label_140284b88
                    
                label_1402847c9:
                    var_1a0_1[0].o = _mm256_extracti128_si256(arg9, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_1402847d9:
                        arg4 = _mm256_cvtepi32_epi64(var_1a0_1[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140284baa
                        
                        goto label_1402847e8
                    
                label_140284b88:
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 2)
                    arg4 = _mm256_cvtepi32_epi64(var_1a0_1[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140284baa:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        uint16_t rcx_57[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_57, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_1402847f8
                        
                        goto label_140284bd6
                    
                label_1402847e8:
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140284bd6:
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_140284beb:
                            uint16_t rcx_61[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_61, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_14028480c
                            
                            goto label_140284bfd
                    else
                    label_1402847f8:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140284beb
                    
                    bool cond:16_1
                    bool cond:20_1
                    bool cond:22_1
                    bool cond:24_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_140284bfd:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, zx.d(*zmm1[0].q), 6)
                        cond:16_1 = temp0_60 == 0
                        cond:20_1 = temp0_60 == 0
                        cond:22_1 = temp0_60 == 0
                        cond:24_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140284c19:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            uint16_t rcx_65[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_65, 7)
                    else
                    label_14028480c:
                        cond:16_1 = temp0_60 == 0
                        cond:20_1 = temp0_60 == 0
                        cond:22_1 = temp0_60 == 0
                        cond:24_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140284c19
                    
                    arg19[0].o = __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(arg5, 0xff)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm4[0].o, arg19[0].o)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    int64_t k2_6 = _mm256_cmp_epi32_mask(arg5, arg14, zmm1, 5)
                    arg23[0].o = _mm_movm_epi16(k2_6)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg23[0].o, arg16[0].o)
                    int64_t k3_9 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg19[0].o)
                    _kortest_mask8_u8(k3_9, k3_9)
                    var_310 = zmm4[0].o
                    
                    if (cond:16_1)
                        arg4 = arg9
                    else
                        zmm30 = _mm256_mask_blend_epi32(k2_6, arg9, arg10)
                        arg3 = _mm256_sub_epi32(arg9, arg8)
                        arg26[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_6, arg3, arg10, 2))
                        zmm6 = _mm_mask_and_epi64(arg5, arg26[0].o, arg16[0].o)
                        int64_t k3_11 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k3_11, k3_11)
                        
                        if (cond:20_1)
                            arg4 = _mm256_mask_mov_epi64(arg5, zmm30)
                        else
                            char rsi_3 = _cvtmask32_u32(k3_11)
                            bool cond:33_1
                            
                            do
                                arg21 = _mm256_mask_mov_epi64(arg5, arg3)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg21[0].o)
                                arg4 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                                char temp0_153 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_153 & 1) == 0)
                                    if ((temp0_153 & 2) != 0)
                                        goto label_1402848be
                                    
                                    goto label_1402849c1
                                
                                arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg18[0].o, zx.d(*arg4[0].q), 0)
                                
                                if ((temp0_153 & 2) != 0)
                                label_1402848be:
                                    uint16_t rcx_27[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                    arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg18[0].o, rcx_27, 1)
                                    arg3[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                    
                                    if ((temp0_153 & 4) == 0)
                                        goto label_1402849d1
                                    
                                    goto label_1402848d8
                                
                            label_1402849c1:
                                arg3[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                
                                if ((temp0_153 & 4) == 0)
                                label_1402849d1:
                                    arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                    
                                    if ((temp0_153 & 8) != 0)
                                        goto label_1402848fb
                                    
                                    goto label_1402849df
                                
                            label_1402848d8:
                                zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg18[0].o, zx.d(*zmm1[0].q), 2)
                                arg3 = _mm256_cvtepi32_epi64(arg3[0].o)
                                
                                if ((temp0_153 & 8) != 0)
                                label_1402848fb:
                                    zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                    uint16_t rcx_31[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg18[0].o, rcx_31, 3)
                                    arg4 = _mm256_mask_add_epi64(arg5, arg15, arg3)
                                    
                                    if ((temp0_153 & 0x10) == 0)
                                        goto label_1402849ee
                                    
                                    goto label_140284928
                                
                            label_1402849df:
                                arg4 = _mm256_mask_add_epi64(arg5, arg15, arg3)
                                
                                if ((temp0_153 & 0x10) == 0)
                                label_1402849ee:
                                    
                                    if ((temp0_153 & 0x20) != 0)
                                        goto label_14028493e
                                    
                                    goto label_1402849f7
                                
                            label_140284928:
                                arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg18[0].o, zx.d(*arg4[0].q), 4)
                                
                                if ((temp0_153 & 0x20) != 0)
                                label_14028493e:
                                    uint16_t rcx_35[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                    arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg18[0].o, rcx_35, 5)
                                    
                                    if ((temp0_153 & 0x40) == 0)
                                        goto label_140284a00
                                    
                                    goto label_140284951
                                
                            label_1402849f7:
                                
                                if ((temp0_153 & 0x40) != 0)
                                label_140284951:
                                    zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                    arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg18[0].o, zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_153 s< 0)
                                    label_14028496e:
                                        zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                        uint16_t rcx_39[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg18[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg18[0].o, rcx_39, 7)
                                else
                                label_140284a00:
                                    
                                    if (temp0_153 s< 0)
                                        goto label_14028496e
                                
                                zmm1[0].o = _mm_mask_and_epi64(arg5, arg18[0].o, arg19[0].o)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, 
                                        arg14), 
                                    arg26[0].o)
                                zmm5[0].o = zx.o(0)
                                int64_t k3_14 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg19[0].o)
                                arg3[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg16[0].o)
                                char temp0_161 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg3[0].o, arg19[0].o))
                                cond:22_1 = rsi_3 == temp0_161
                                cond:24_1 = rsi_3 == temp0_161
                                cond:33_1 = rsi_3 != temp0_161
                                
                                if (rsi_3 != temp0_161)
                                    zmm5[0].o = _mm_mask_xor_epi64(arg5, zmm1[0].o, arg26[0].o)
                                
                                arg4 = _mm256_mask_mov_epi32(k3_14, zmm30)
                                arg3 = _mm256_mask_sub_epi32(arg5, arg21, arg8)
                                arg26[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg3, arg10, 2), zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg26[0].o, arg16[0].o)
                                int64_t k3_16 = _mm_mask_test_epi16_mask(arg5, zmm6, arg19[0].o)
                                _kortest_mask8_u8(k3_16, k3_16)
                                rsi_3 = _cvtmask32_u32(k3_16)
                                _mm256_mask_mov_epi64(arg5, arg21)
                                zmm30 = _mm256_mask_mov_epi64(arg5, arg4)
                            while (cond:33_1)
                    
                    zmm1[0].o = _mm_mask_xor_epi64(arg5, arg23[0].o, zmm11)
                    arg3[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg16[0].o)
                    int64_t k3_19 = _mm_mask_test_epi16_mask(arg5, arg3[0].o, zmm11)
                    _kortest_mask8_u8(k3_19, k3_19)
                    uint64_t var_4f0[0x2]
                    
                    if (cond:22_1)
                        arg9 = zmm0
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        zmm0[0].o = var_4f0
                    else
                        arg23 = _mm256_mask_mov_epi32(k2_6, arg4)
                        arg21 = _mm256_mask_add_epi32(arg5, arg9, arg8)
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        arg3[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg21, arg26), 
                            zmm1[0].o)
                        zmm6 = _mm_mask_and_epi64(arg5, arg3[0].o, arg16[0].o)
                        int64_t k2_15 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k2_15, k2_15)
                        
                        if (cond:24_1)
                            arg4 = _mm256_mask_mov_epi64(arg5, arg23)
                            arg9 = zmm0
                            zmm0[0].o = var_4f0
                        else
                            char rsi_4 = _cvtmask32_u32(k2_15)
                            arg9 = zmm0
                            zmm0[0].o = var_4f0
                            bool cond:37_1
                            
                            do
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg21[0].o)
                                arg4 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                                char temp0_272 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_272 & 1) == 0)
                                    if ((temp0_272 & 2) != 0)
                                        goto label_140284f4e
                                    
                                    goto label_14028504b
                                
                                arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg24[0].o, zx.d(*arg4[0].q), 0)
                                
                                if ((temp0_272 & 2) != 0)
                                label_140284f4e:
                                    uint16_t rcx_73[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                    arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg24[0].o, rcx_73, 1)
                                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                    
                                    if ((temp0_272 & 4) == 0)
                                        goto label_14028505b
                                    
                                    goto label_140284f68
                                
                            label_14028504b:
                                zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                
                                if ((temp0_272 & 4) == 0)
                                label_14028505b:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((temp0_272 & 8) != 0)
                                        goto label_140284f8b
                                    
                                    goto label_140285069
                                
                            label_140284f68:
                                zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg24[0].o, zx.d(*zmm1[0].q), 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((temp0_272 & 8) != 0)
                                label_140284f8b:
                                    zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                    uint16_t rcx_77[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                    arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg24[0].o, rcx_77, 3)
                                    arg4 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                                    
                                    if ((temp0_272 & 0x10) == 0)
                                        goto label_140285078
                                    
                                    goto label_140284fb8
                                
                            label_140285069:
                                arg4 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                                
                                if ((temp0_272 & 0x10) == 0)
                                label_140285078:
                                    
                                    if ((temp0_272 & 0x20) != 0)
                                        goto label_140284fce
                                    
                                    goto label_140285081
                                
                            label_140284fb8:
                                arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                    arg24[0].o, zx.d(*arg4[0].q), 4)
                                
                                if ((temp0_272 & 0x20) != 0)
                                label_140284fce:
                                    uint16_t rcx_81[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1))
                                    arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg24[0].o, rcx_81, 5)
                                    
                                    if ((temp0_272 & 0x40) == 0)
                                        goto label_14028508a
                                    
                                    goto label_140284fe1
                                
                            label_140285081:
                                
                                if ((temp0_272 & 0x40) != 0)
                                label_140284fe1:
                                    zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                    arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                        arg24[0].o, zx.d(*zmm1[0].q), 6)
                                    
                                    if (temp0_272 s< 0)
                                    label_140284ffe:
                                        zmm1[0].o = _mm256_extracti128_si256(arg4, 1)
                                        uint16_t rcx_85[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg24[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                            arg24[0].o, rcx_85, 7)
                                else
                                label_14028508a:
                                    
                                    if (temp0_272 s< 0)
                                        goto label_140284ffe
                                
                                zmm1[0].o = _mm_mask_and_epi64(arg5, arg24[0].o, arg19[0].o)
                                zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg14, zmm1, 5), arg3[0].o)
                                zmm5[0].o = zx.o(0)
                                int64_t k2_18 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg19[0].o)
                                arg4[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg16[0].o)
                                char temp0_280 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg4[0].o, arg19[0].o))
                                cond:37_1 = rsi_4 != temp0_280
                                
                                if (rsi_4 != temp0_280)
                                    zmm5[0].o = zmm1[0].o ^ arg3[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg21)
                                arg21 = _mm256_mask_add_epi32(arg5, arg21, arg8)
                                arg4 = _mm256_mask_mov_epi32(k2_18, arg23)
                                arg3[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg21, 
                                        arg26), 
                                    zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg3[0].o, arg16[0].o)
                                int64_t k2_20 = _mm_mask_test_epi16_mask(arg5, zmm6, arg19[0].o)
                                _kortest_mask8_u8(k2_20, k2_20)
                                rsi_4 = _cvtmask32_u32(k2_20)
                                arg23 = _mm256_mask_mov_epi64(arg5, arg4)
                            while (cond:37_1)
                    
                    arg25 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11), 
                        arg4, arg25)
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg25[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg3[0].q), 0)
                    
                    zmm30[0].o = _mm_mask_load_ss(arg5, arg29)
                    arg7 = var_420_1
                    arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    if ((temp0_60 & 2) == 0)
                        zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                        
                        if ((temp0_60 & 4) != 0)
                            goto label_140285565
                        
                        goto label_1402854c0
                    
                    uint32_t rcx_107 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_107, 1)
                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                    
                    if ((temp0_60 & 4) != 0)
                    label_140285565:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 2)
                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                        
                        if ((temp0_60 & 8) == 0)
                            goto label_1402854cf
                        
                        goto label_140285587
                    
                label_1402854c0:
                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                    
                    if ((temp0_60 & 8) == 0)
                    label_1402854cf:
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                        
                        if ((temp0_60 & 0x10) != 0)
                            goto label_1402855b3
                        
                        goto label_1402854df
                    
                label_140285587:
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    uint32_t rcx_111 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_111, 3)
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_1402855b3:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((temp0_60 & 0x20) == 0)
                            goto label_1402854e9
                        
                        goto label_1402855c8
                    
                label_1402854df:
                    
                    if ((temp0_60 & 0x20) == 0)
                    label_1402854e9:
                        
                        if ((temp0_60 & 0x40) != 0)
                            goto label_1402855da
                        
                        goto label_1402854f3
                    
                label_1402855c8:
                    uint32_t rcx_115 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_115, 5)
                    bool cond:32_1
                    
                    if ((temp0_60 & 0x40) == 0)
                    label_1402854f3:
                        cond:32_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_1402855f6:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            uint32_t rcx_119 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_119, 7)
                    else
                    label_1402855da:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 6)
                        cond:32_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_1402855f6
                    
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, arg19[0].o)
                    int64_t k2_27 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm1[0].o, zmm11)
                    _mm256_sub_epi32(arg4, arg8)
                    arg3 = _mm256_mask_mov_epi32(k2_27, arg22)
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg3, arg10), 
                        arg16[0].o)
                    int64_t k2_29 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg19[0].o)
                    _kortest_mask8_u8(k2_29, k2_29)
                    
                    if (cond:32_1)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg3)
                    else
                        arg10 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg19[0].o), arg3)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg10)
                    
                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg22[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    var_4f0 = zmm0[0].o
                    int128_t var_390
                    uint32_t rcx_123
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o = var_390
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg3[0].q), 0)
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_123 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_123, 1)
                    else
                        zmm0[0].o = var_390
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_123 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_123, 1)
                    arg4[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                    
                    if ((temp0_60 & 4) == 0)
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_1402842a4
                        
                        goto label_140285688
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_1402842a4:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        uint32_t rcx_11 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_11, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_140285698
                        
                        goto label_1402842d0
                    
                label_140285688:
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_1402842d0:
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg3[0].q), 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_1402842e5:
                            uint32_t rcx_15 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_15, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_1402856ac
                            
                            goto label_1402842f7
                    else
                    label_140285698:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_1402842e5
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_1402842f7:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm1[0].q), 6)
                        r12 = arg27
                        arg4[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg19[0].o, var_4f0)
                        
                        if (temp0_60 s< 0)
                        label_140284322:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            uint32_t rcx_19 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_19, 7)
                    else
                    label_1402856ac:
                        r12 = arg27
                        arg4[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg19[0].o, var_4f0)
                        
                        if (temp0_60 s< 0)
                            goto label_140284322
                    
                    r13 = arg32
                    arg3 = _mm256_cvtepu16_epi32(arg4[0].o)
                    var_390 = zmm0[0].o
                    zmm1[0].o = zmm0[0].o & zmm11
                    arg4 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    zmm1[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                    label_1402856f1:
                        zmm1 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(arg4, arg3), 1)
                        zmm0 = var_1c0_1
                        zmm1 = _mm256_div_ps(_mm256_sub_ps(zmm0, _mm256_cvtepi32_ps(arg3)), 
                            _mm256_cvtepi32_ps(zmm1))
                else
                    arg4 = _mm256_add_epi32(arg9, arg9)
                    zmm1 = _mm256_cvtepi32_epi64(arg4[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    int128_t var_300
                    zmm4[0].o = var_300
                    
                    if ((temp0_60 & 1) == 0)
                        if ((temp0_60 & 2) != 0)
                            goto label_140284aa0
                        
                        goto label_1402844d9
                    
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_140284aa0:
                        uint16_t* rcx_43 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_43, 1)
                        arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_1402844e9
                        
                        goto label_140284abb
                    
                label_1402844d9:
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_1402844e9:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140284ada
                        
                        goto label_1402844f8
                    
                label_140284abb:
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140284ada:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        uint16_t* rcx_45 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_45, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_140284508
                        
                        goto label_140284b00
                    
                label_1402844f8:
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_140284b00:
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *arg3[0].q, 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_140284b0f:
                            uint16_t* rcx_47 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_47, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_14028451c
                            
                            goto label_140284b24
                    else
                    label_140284508:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140284b0f
                    
                    bool cond:17_1
                    bool cond:21_1
                    bool cond:23_1
                    bool cond:25_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_140284b24:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *zmm1[0].q, 6)
                        cond:17_1 = temp0_60 == 0
                        cond:21_1 = temp0_60 == 0
                        cond:23_1 = temp0_60 == 0
                        cond:25_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_140284b3d:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            uint16_t* rcx_49 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm4[0].o, *rcx_49, 7)
                    else
                    label_14028451c:
                        cond:17_1 = temp0_60 == 0
                        cond:21_1 = temp0_60 == 0
                        cond:23_1 = temp0_60 == 0
                        cond:25_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_140284b3d
                    
                    zmm1 = _mm256_cvtepu16_epi32(zmm4[0].o)
                    int64_t k2_4 = _mm256_cmp_epi32_mask(arg5, arg14, zmm1, 5)
                    arg7[0].o = _mm_movm_epi16(k2_4)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg7[0].o, arg16[0].o)
                    int64_t k3_1 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm11)
                    _kortest_mask8_u8(k3_1, k3_1)
                    var_300 = zmm4[0].o
                    
                    if (cond:17_1)
                        arg19 = _mm256_mask_mov_epi64(arg5, arg9)
                    else
                        arg23 = _mm256_mask_blend_epi32(k2_4, arg9, arg10)
                        zmm30 = _mm256_mask_sub_epi32(arg5, arg9, arg8)
                        arg3[0].o = _mm_movm_epi16(_mm256_cmp_epi32_mask(k2_4, zmm30, arg10, 2))
                        zmm6 = _mm_mask_and_epi64(arg5, arg3[0].o, arg16[0].o)
                        int64_t k3_3 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k3_3, k3_3)
                        
                        if (cond:21_1)
                            arg19 = _mm256_mask_mov_epi64(arg5, arg23)
                        else
                            char rbx_1 = _cvtmask32_u32(k3_3)
                            arg26 = _mm256_mask_mov_epi64(arg5, arg9)
                            bool cond:35_1
                            
                            do
                                arg21 = _mm256_mask_mov_epi64(arg5, zmm30)
                                zmm30 = _mm256_mask_add_epi32(arg5, zmm30, zmm30)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, zmm30[0].o)
                                arg19 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                                char temp0_100 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_100 & 1) == 0)
                                    if ((temp0_100 & 2) != 0)
                                        goto label_1402845bb
                                    
                                    goto label_1402846a7
                                
                                arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, *arg19[0].o, 0)
                                
                                if ((temp0_100 & 2) != 0)
                                label_1402845bb:
                                    arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1), 1)
                                    arg4[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                    
                                    if ((temp0_100 & 4) == 0)
                                        goto label_1402846b7
                                    
                                    goto label_1402845d0
                                
                            label_1402846a7:
                                arg4[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                
                                if ((temp0_100 & 4) == 0)
                                label_1402846b7:
                                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                    
                                    if ((temp0_100 & 8) != 0)
                                        goto label_1402845ef
                                    
                                    goto label_1402846c5
                                
                            label_1402845d0:
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, *zmm1[0].q, 2)
                                arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                                
                                if ((temp0_100 & 8) != 0)
                                label_1402845ef:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, 
                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 3)
                                    arg19 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                                    
                                    if ((temp0_100 & 0x10) == 0)
                                        goto label_1402846d4
                                    
                                    goto label_140284616
                                
                            label_1402846c5:
                                arg19 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                                
                                if ((temp0_100 & 0x10) == 0)
                                label_1402846d4:
                                    
                                    if ((temp0_100 & 0x20) != 0)
                                        goto label_14028462b
                                    
                                    goto label_1402846dd
                                
                            label_140284616:
                                arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, *arg19[0].o, 4)
                                
                                if ((temp0_100 & 0x20) != 0)
                                label_14028462b:
                                    arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, 
                                        *__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1), 5)
                                    
                                    if ((temp0_100 & 0x40) == 0)
                                        goto label_1402846e6
                                    
                                    goto label_140284639
                                
                            label_1402846dd:
                                
                                if ((temp0_100 & 0x40) != 0)
                                label_140284639:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, *zmm1[0].q, 6)
                                    
                                    if (temp0_100 s< 0)
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 7)
                                else
                                label_1402846e6:
                                    
                                    if (temp0_100 s< 0)
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        arg13 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1), 7)
                                
                                zmm1 = _mm256_cvtepu16_epi32(arg13)
                                zmm6 = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, 
                                        arg14), 
                                    arg3[0].o)
                                zmm5[0].o = zx.o(0)
                                arg4[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k3_6 = _mm_mask_testn_epi16_mask(arg5, zmm6, arg4[0].o)
                                zmm1[0].o = _mm_mask_and_epi64(arg5, zmm6, arg16[0].o)
                                char temp0_108 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    zmm1[0].o, arg4[0].o))
                                cond:23_1 = rbx_1 == temp0_108
                                cond:25_1 = rbx_1 == temp0_108
                                cond:35_1 = rbx_1 != temp0_108
                                
                                if (rbx_1 != temp0_108)
                                    zmm5[0].o = zmm6 ^ arg3[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg26)
                                arg19 = _mm256_mask_mov_epi32(k3_6, arg23)
                                zmm30 = _mm256_mask_sub_epi32(arg5, arg21, arg8)
                                arg3[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, zmm30, arg10, 2), zmm5[0].o)
                                zmm6 = _mm_mask_and_epi64(arg5, arg3[0].o, arg16[0].o)
                                int64_t k3_8 = _mm_mask_test_epi16_mask(arg5, zmm6, arg4[0].o)
                                _kortest_mask8_u8(k3_8, k3_8)
                                rbx_1 = _cvtmask32_u32(k3_8)
                                arg26 = _mm256_mask_mov_epi64(arg5, arg21)
                                arg23 = _mm256_mask_mov_epi64(arg5, arg19)
                            while (cond:35_1)
                    
                    zmm1[0].o = arg7[0].o ^ zmm11
                    arg3[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg16[0].o)
                    int64_t k3_17 = _mm_mask_test_epi16_mask(arg5, arg3[0].o, zmm11)
                    _kortest_mask8_u8(k3_17, k3_17)
                    uint16_t var_500[0x8]
                    
                    if (cond:23_1)
                        zmm30[0].o = _mm_mask_load_ss(arg5, arg29)
                        arg7 = var_420_1
                        arg9 = zmm0
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        zmm0[0].o = var_500
                    else
                        arg3 = _mm256_mask_mov_epi32(k2_4, arg19)
                        arg21 = _mm256_mask_add_epi32(arg5, arg9, arg8)
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        arg4[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg21, arg26), 
                            zmm1[0].o)
                        zmm6 = _mm_mask_and_epi64(arg5, arg4[0].o, arg16[0].o)
                        int64_t k2_8 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm11)
                        _kortest_mask8_u8(k2_8, k2_8)
                        
                        if (cond:25_1)
                            arg19 = _mm256_mask_mov_epi64(arg5, arg3)
                            zmm30[0].o = _mm_mask_load_ss(arg5, arg29)
                            arg7 = var_420_1
                            arg9 = zmm0
                            zmm0[0].o = var_500
                        else
                            char rbx_3 = _cvtmask32_u32(k2_8)
                            zmm30[0].o = _mm_mask_load_ss(arg5, arg29)
                            arg7 = var_420_1
                            arg9 = zmm0
                            zmm0[0].o = var_500
                            bool cond:39_1
                            
                            do
                                arg23 = _mm256_mask_add_epi32(arg5, arg21, arg21)
                                zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg23[0].o)
                                arg19 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                                char temp0_228 =
                                    _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, zmm6, zmm11))
                                
                                if ((temp0_228 & 1) == 0)
                                    if ((temp0_228 & 2) != 0)
                                        goto label_140284cd6
                                    
                                    goto label_140284dd1
                                
                                arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg17[0].o, 
                                    *arg19[0].o, 0)
                                
                                if ((temp0_228 & 2) != 0)
                                label_140284cd6:
                                    uint16_t* rdi_11 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                    arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg17[0].o, *rdi_11, 1)
                                    zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                    
                                    if ((temp0_228 & 4) == 0)
                                        goto label_140284de1
                                    
                                    goto label_140284cf4
                                
                            label_140284dd1:
                                zmm5[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                
                                if ((temp0_228 & 4) == 0)
                                label_140284de1:
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((temp0_228 & 8) != 0)
                                        goto label_140284d15
                                    
                                    goto label_140284def
                                
                            label_140284cf4:
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg17[0].o, 
                                    *zmm1[0].q, 2)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                
                                if ((temp0_228 & 8) != 0)
                                label_140284d15:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    uint16_t* rdi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg17[0].o, *rdi_13, 3)
                                    arg19 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                                    
                                    if ((temp0_228 & 0x10) == 0)
                                        goto label_140284dfe
                                    
                                    goto label_140284d3e
                                
                            label_140284def:
                                arg19 = _mm256_mask_add_epi64(arg5, arg15, zmm5)
                                
                                if ((temp0_228 & 0x10) == 0)
                                label_140284dfe:
                                    
                                    if ((temp0_228 & 0x20) != 0)
                                        goto label_140284d4e
                                    
                                    goto label_140284e07
                                
                            label_140284d3e:
                                arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg17[0].o, 
                                    *arg19[0].o, 4)
                                
                                if ((temp0_228 & 0x20) != 0)
                                label_140284d4e:
                                    uint16_t* rdi_15 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                    arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg17[0].o, *rdi_15, 5)
                                    
                                    if ((temp0_228 & 0x40) == 0)
                                        goto label_140284e10
                                    
                                    goto label_140284d65
                                
                            label_140284e07:
                                
                                if ((temp0_228 & 0x40) != 0)
                                label_140284d65:
                                    zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg17[0].o, *zmm1[0].q, 6)
                                    
                                    if (temp0_228 s< 0)
                                    label_140284d80:
                                        zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        uint16_t* rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                        arg17[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                            arg17[0].o, *rcx_66, 7)
                                else
                                label_140284e10:
                                    
                                    if (temp0_228 s< 0)
                                        goto label_140284d80
                                
                                zmm1 = _mm256_mask_cvtepu16_epi32(arg5, arg17[0].o)
                                zmm1[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(arg5, arg14, zmm1, 5), arg4[0].o)
                                zmm6 = zx.o(0)
                                zmm5[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k2_11 =
                                    _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, zmm5[0].o)
                                arg6[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg16[0].o)
                                char temp0_236 = _cvtmask32_u32(_mm_mask_test_epi16_mask(arg5, 
                                    arg6[0].o, zmm5[0].o))
                                cond:39_1 = rbx_3 != temp0_236
                                
                                if (rbx_3 != temp0_236)
                                    zmm6 = zmm1[0].o ^ arg4[0].o
                                
                                _mm256_mask_mov_epi64(arg5, arg21)
                                arg21 = _mm256_mask_add_epi32(arg5, arg21, arg8)
                                arg19 = _mm256_mask_mov_epi32(k2_11, arg3)
                                arg4[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg21, 
                                        arg26), 
                                    zmm6)
                                zmm6 = _mm_mask_and_epi64(arg5, arg4[0].o, arg16[0].o)
                                int64_t k2_13 = _mm_mask_test_epi16_mask(arg5, zmm6, zmm5[0].o)
                                _kortest_mask8_u8(k2_13, k2_13)
                                rbx_3 = _cvtmask32_u32(k2_13)
                                arg3 = _mm256_mask_mov_epi64(arg5, arg19)
                            while (cond:39_1)
                    
                    arg25 = _mm256_mask_blend_epi32(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm31[0].o, zmm11), 
                        arg19, arg25)
                    arg4 = _mm256_mask_add_epi32(arg5, arg25, arg25)
                    zmm1 = _mm256_cvtepi32_epi64(arg4[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    
                    if ((temp0_60 & 1) == 0)
                        arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        
                        if ((temp0_60 & 2) != 0)
                            goto label_14028523b
                        
                        goto label_14028517d
                    
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg3[0].q, 0)
                    arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    if ((temp0_60 & 2) != 0)
                    label_14028523b:
                        int64_t rcx_89 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_89, 1)
                        arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                        
                        if ((temp0_60 & 4) == 0)
                            goto label_14028518d
                        
                        goto label_140285256
                    
                label_14028517d:
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_60 & 4) == 0)
                    label_14028518d:
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_140285275
                        
                        goto label_14028519c
                    
                label_140285256:
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_140285275:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        int64_t rcx_91 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_91, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_1402851ac
                        
                        goto label_14028529b
                    
                label_14028519c:
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                    
                    if ((temp0_60 & 0x10) != 0)
                    label_14028529b:
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg3[0].q, 4)
                        
                        if ((temp0_60 & 0x20) != 0)
                        label_1402852aa:
                            int64_t rcx_93 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_93, 5)
                            
                            if ((temp0_60 & 0x40) == 0)
                                goto label_1402851c0
                            
                            goto label_1402852bf
                    else
                    label_1402851ac:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_1402852aa
                    
                    bool cond:34_1
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_1402852bf:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 6)
                        cond:34_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                        label_1402852d8:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rcx_95 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_95, 7)
                    else
                    label_1402851c0:
                        cond:34_1 = temp0_60 == 0
                        
                        if (temp0_60 s< 0)
                            goto label_1402852d8
                    
                    arg3[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm1[0].o = _mm_mask_and_epi64(arg5, zmm23[0].o, arg3[0].o)
                    int64_t k2_22 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm1[0].o, zmm11)
                    _mm256_mask_sub_epi32(arg5, arg19, arg8)
                    arg4 = _mm256_mask_mov_epi32(k2_22, arg22)
                    zmm1[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg4, arg10), 
                        arg16[0].o)
                    int64_t k2_24 = _mm_mask_test_epi16_mask(arg5, zmm1[0].o, arg3[0].o)
                    _kortest_mask8_u8(k2_24, k2_24)
                    
                    if (cond:34_1)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg4)
                    else
                        arg10 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, arg3[0].o), arg4)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg10)
                    
                    arg4 = _mm256_mask_add_epi32(arg5, arg22, arg22)
                    zmm1 = _mm256_cvtepi32_epi64(arg4[0].o)
                    arg3 = _mm256_mask_add_epi64(arg5, arg20, zmm1)
                    var_500 = zmm0[0].o
                    int128_t var_3a0
                    int64_t rcx_97
                    
                    if ((temp0_60 & 1) != 0)
                        zmm0[0].o = var_3a0
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg3[0].q, 0)
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_97 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_97, 1)
                    else
                        zmm0[0].o = var_3a0
                        
                        if ((temp0_60 & 2) != 0)
                            rcx_97 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_97, 1)
                    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
                    
                    if ((temp0_60 & 4) == 0)
                        arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                        
                        if ((temp0_60 & 8) != 0)
                            goto label_1402853d4
                        
                        goto label_14028535d
                    
                    zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 2)
                    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
                    
                    if ((temp0_60 & 8) != 0)
                    label_1402853d4:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        int64_t rcx_99 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_99, 3)
                        arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                        
                        if ((temp0_60 & 0x10) == 0)
                            goto label_14028536d
                        
                        goto label_1402853fa
                    
                label_14028535d:
                    arg3 = _mm256_mask_add_epi64(arg5, arg15, arg4)
                    
                    if ((temp0_60 & 0x10) == 0)
                    label_14028536d:
                        
                        if ((temp0_60 & 0x20) != 0)
                            goto label_140285409
                        
                        goto label_140285377
                    
                label_1402853fa:
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg3[0].q, 4)
                    
                    if ((temp0_60 & 0x20) != 0)
                    label_140285409:
                        int64_t rcx_101 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_101, 5)
                        
                        if ((temp0_60 & 0x40) == 0)
                            goto label_140285381
                        
                        goto label_14028541e
                    
                label_140285377:
                    
                    if ((temp0_60 & 0x40) != 0)
                    label_14028541e:
                        zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm1[0].q, 6)
                        
                        if (temp0_60 s< 0)
                        label_140285437:
                            zmm1[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rcx_103 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_103, 7)
                    else
                    label_140285381:
                        
                        if (temp0_60 s< 0)
                            goto label_140285437
                    
                    r13 = arg32
                    arg3 = __vpmovzxwd_ymmqq_memdq(var_500)
                    var_3a0 = zmm0[0].o
                    arg4 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    zmm1[0].o = zx.o(0)
                    
                    if (r14.b != 1)
                        goto label_1402856f1
                
                arg15 = _mm256_mask_mov_ps(_mm_cmp_epi16_mask(arg5, zmm31[0].o, zmm11, 4), zmm1)
        
        arg3 =
            __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(_kor_mask8(k1_9, arg5)), 0x18)
        uint64_t r10_1 = zx.q(r15.d)
        bool cond:4_1 = r15.d != 6
        uint32_t r10_2
        float var_480_1[0x8]
        float var_460_1[0x8]
        float var_440_1[0x8]
        uint64_t k1_18
        
        if (r15.d u> 6)
        label_1402857b0:
            arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
            var_440_1 = _mm256_mask_store_epi64(arg5, arg19)
            var_460_1 = _mm256_mask_store_epi64(arg5, arg19)
            var_480_1 = _mm256_mask_store_epi64(arg5, arg19)
            arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
            arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg25, arg22, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (cond:4_1)
            label_140285bab:
                uint32_t var_380_1[0x8]
                float var_360_1[0x8]
                float var_340_1[0x8]
                
                if (r15.d u> 6)
                label_140285c40:
                    var_380_1 = _mm256_mask_storeu_ps(k1_18, arg26)
                    var_360_1 = _mm256_mask_storeu_ps(k1_18, arg26)
                    var_340_1 = _mm256_mask_storeu_ps(k1_18, arg26)
                else
                    arg4 = _mm256_mask_mullo_epi32(arg5, arg22, arg9)
                    
                    switch (r10_1)
                        case 0, 1
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg3, arg12), arg4)
                            int64_t k2_32 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k2_33
                            char temp0_521
                            temp0_521, k2_33 = _mm256_mmask_i32gather_ps(k2_32, *(r12 + zmm0[0].q))
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_35
                            char temp0_523
                            temp0_523, k2_35 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg3[0].q))
                            arg4 = temp0_523
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                            int64_t k2_37
                            char temp0_526
                            temp0_526, k2_37 = _mm256_mmask_i32gather_ps(k2_36, *(r12 + zmm0[0].q))
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, temp0_521)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg4)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, temp0_526)
                        case 2
                            zmm0 = _mm256_add_epi32(arg3, arg12)
                            zmm1 = _mm256_add_epi32(zmm0, arg4)
                            zmm0 = _mm256_mask_add_epi32(k1_18, zmm0, arg4)
                            int64_t r8_4 = sx.q(zmm0[0])
                            int64_t r9_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rsi_15 = sx.q(zmm0[0])
                            int64_t rcx_136 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int64_t rdx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
                            int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(r12 + r8_4))
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
                            arg3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, zmm1, 2)
                            int64_t r8_5 = sx.q(arg3[0])
                            int64_t r9_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = _mm256_extracti128_si256(arg3, 1)
                            int64_t rsi_17 = sx.q(arg3[0])
                            int64_t rcx_139 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 1))
                            int64_t rdx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 2))
                            int64_t rbx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg3[0].o, 3))
                            arg3[0].o = zx.o(*(r12 + r8_5))
                            arg3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r9_6), 1)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r10_4), 2)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + r11_5), 3)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rsi_17), 4)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rcx_139), 5)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rdx_12), 6)
                            arg3[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg3[0].o, *(r12 + rbx_18), 7)
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, zmm1, 4)
                            int64_t r8_6 = sx.q(zmm1[0])
                            int32_t rdx_13 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                            int64_t r9_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t rsi_19 = sx.q(zmm1[0])
                            int32_t rcx_141 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                            int32_t rdx_14 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                            zmm1[0].o = zx.o(*(r12 + r8_6))
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_13)), 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_7), 2)
                            r9 = rdx_117
                            r8 = var_508_1
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r11_6), 3)
                            r11 = arg28
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_19), 4)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                *(r12 + sx.q(rcx_141)), 5)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_21), 6)
                            zmm1[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_14)), 7)
                            zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                            arg4 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg4))
                            zmm5 = _mm256_broadcast_ss(32767f)
                            zmm0 = _mm256_div_ps(zmm0, zmm5)
                            arg3 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg3[0].o), arg4)), 
                                zmm5)
                            zmm1 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm1[0].o), arg4)), 
                                zmm5)
                            arg4 = _mm256_broadcast_ss(128f)
                            zmm0 = _mm256_mul_ps(zmm0, arg4)
                            arg3 = _mm256_mul_ps(arg3, arg4)
                            zmm1 = _mm256_mul_ps(zmm1, arg4)
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg3)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, zmm1)
                            arg16 = _mm256_mask_load_ps(arg5, var_480_1)
                            arg20 = _mm256_mask_load_ps(arg5, var_460_1)
                            arg19 = _mm256_mask_load_ps(arg5, var_440_1)
                        case 3
                            int64_t k2_39
                            char temp0_604
                            temp0_604, k2_39 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + arg12[0].q))
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 4)
                            int64_t k2_41
                            char temp0_606
                            temp0_606, k2_41 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + zmm1[0].q))
                            zmm5 = temp0_606
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 8)
                            int64_t k2_42 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                            int64_t k2_43
                            char temp0_609
                            temp0_609, k2_43 = _mm256_mmask_i32gather_ps(k2_42, *(r12 + zmm1[0].q))
                            zmm23 = temp0_609
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0xc)
                            int64_t k2_44 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                            int64_t k2_45
                            char temp0_612
                            temp0_612, k2_45 = _mm256_mmask_i32gather_ps(k2_44, *(r12 + zmm1[0].q))
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x10)
                            int64_t k2_46 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                            int64_t k2_47
                            char temp0_615
                            temp0_615, k2_47 = _mm256_mmask_i32gather_ps(k2_46, *(r12 + zmm1[0].q))
                            arg23 = temp0_615
                            zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x14)
                            int64_t k2_48 = __kmovq_maskmskw_masku64_avx512(k1_18)
                            arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                            int64_t k2_49
                            char temp0_618
                            temp0_618, k2_49 = _mm256_mmask_i32gather_ps(k2_48, *(r12 + zmm1[0].q))
                            arg26 = temp0_618
                            zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg3, arg12), arg4)
                            int64_t k2_51
                            char temp0_621
                            temp0_621, k2_51 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(r12 + zmm1[0].q))
                            arg3 = temp0_621
                            zmm1 = _mm256_srli_epi32(arg3, 0x15)
                            arg4 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg3, 0xa), 0x7ff)
                            arg3 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg3, 
                                            0x3ff), 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_612, temp0_604)
                            zmm0 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg4 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg4, zmm0))
                            arg21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg4 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg4, arg21), 
                                arg5, arg23, zmm5)
                            zmm0 = _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm0)), arg21)
                            arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg26, zmm23)
                            arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
                            var_380_1 = _mm256_mask_storeu_ps(k1_18, arg3)
                            var_360_1 = _mm256_mask_storeu_ps(k1_18, arg4)
                            var_340_1 = _mm256_mask_storeu_ps(k1_18, zmm0)
                        case 4, 5, 6
                            goto label_140285c40
                
                r10_2 = r10
                zmm0 = _mm256_mask_sub_ps(arg5, var_380_1, arg16)
                zmm1 = _mm256_mask_sub_ps(arg5, var_360_1, arg20)
                arg3 = _mm256_mask_sub_ps(arg5, var_340_1, arg19)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg15, arg16)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg15, arg20)
                arg3 = _mm256_mask3_fmadd_ps(arg3, arg5, arg15, arg19)
                float var_480_2[0x8] = _mm256_mask_storeu_ps(k1_18, zmm0)
                float var_460_2[0x8] = _mm256_mask_storeu_ps(k1_18, zmm1)
                float var_440_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg3)
                arg16 = _mm256_mask_load_ps(arg5, var_480_2)
                arg20 = _mm256_mask_load_ps(arg5, var_460_2)
                arg19 = _mm256_mask_load_ps(arg5, var_440_2)
            else
                r10_2 = r10
        else
            arg4 = _mm256_mask_mullo_epi32(arg5, arg25, arg9)
            int64_t rsi_5 = sx.q(jump_table_140288010[r10_1])
            cond:4_1 = rsi_5 != -0x140288010
            
            switch (rsi_5)
                case -0x28be
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg3, arg12), arg4)
                    int64_t k1_12 = _kxnor_mask16(arg5, arg5)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    int64_t k1_13
                    char temp0_398
                    temp0_398, k1_13 = _mm256_mmask_i32gather_ps(k1_12, *(r12 + zmm1[0].q))
                    arg16 = temp0_398
                    arg4 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
                    int64_t k1_14 = _kxnor_mask16(arg5, arg5)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    int64_t k1_15
                    char temp0_401
                    temp0_401, k1_15 = _mm256_mmask_i32gather_ps(k1_14, *(r12 + arg4[0].q))
                    arg20 = temp0_401
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
                    int64_t k1_16 = _kxnor_mask16(arg5, arg5)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_17
                    char temp0_404
                    temp0_404, k1_17 = _mm256_mmask_i32gather_ps(k1_16, *(r12 + zmm1[0].q))
                    arg19 = temp0_404
                case -0x2860
                    goto label_1402857b0
                case -0x281b
                    zmm1 = _mm256_add_epi32(_mm256_add_epi32(arg3, arg12), arg4)
                    int64_t r12_2 = sx.q(zmm1[0])
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1))
                    int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    arg4[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rdi_19 = sx.q(arg4[0])
                    int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 1))
                    int64_t r9_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 2))
                    int64_t rcx_124 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg4[0].o, 3))
                    r12 = arg27
                    arg4[0].o = zx.o(*(arg27 + r12_2))
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + r13_2), 1)
                    r13 = arg32
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + r8_1), 2)
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + rsi_9), 3)
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + rdi_19), 4)
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + r15_2), 5)
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + r9_2), 6)
                    arg4[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg4[0].o, *(r12 + rcx_124), 7)
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 2)
                    int64_t r8_2 = sx.q(zmm5[0].d)
                    int64_t r9_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
                    int64_t rdx_4 = sx.q(zmm5[0].d)
                    int64_t rcx_127 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
                    int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
                    zmm5[0].o = zx.o(*(r12 + r8_2))
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r9_3), 1)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r11_2), 2)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + r15_3), 3)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rdx_4), 4)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rcx_127), 5)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rbx_9), 6)
                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *(r12 + rdi_22), 7)
                    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
                    int64_t r8_3 = sx.q(zmm1[0])
                    int32_t rdx_5 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                    int64_t r9_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int64_t r15_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3))
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    int64_t rsi_13 = sx.q(zmm1[0])
                    int32_t rcx_129 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 1)
                    int64_t rbx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 2))
                    int32_t rdx_6 = __vpextrd_gpr32d_xmmdq_immb(zmm1[0].o, 3)
                    zmm1[0].o = zx.o(*(r12 + r8_3))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_5)), 1)
                    r11 = arg28
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r9_4), 2)
                    r9 = rdx_117
                    r8 = var_508_1
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + r15_4), 3)
                    r14.b = arg30
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rsi_13), 4)
                    zmm1[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rcx_129)), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + rbx_12), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(r12 + sx.q(rdx_6)), 7)
                    arg4 = _mm256_cvtepu16_epi32(arg4[0].o)
                    arg16 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xffff8001)
                    arg4 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg4, arg16))
                    arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg4 = _mm256_mask_div_ps(arg5, arg4, arg19)
                    zmm5 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(zmm5[0].o), arg16)), 
                        arg19)
                    zmm1 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(zmm1[0].o), arg16)), 
                        arg19)
                    arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 128f)
                    arg16 = _mm256_mask_mul_ps(arg5, arg4, arg19)
                    arg20 = _mm256_mask_mul_ps(arg5, zmm5, arg19)
                    arg19 = _mm256_mask_mul_ps(arg5, zmm1, arg19)
                case -0x25cb
                    int64_t k1_20
                    char temp0_475
                    temp0_475, k1_20 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(r12 + arg12[0].q))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 4)
                    int64_t k1_21 = _kxnor_mask16(arg5, arg5)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_22
                    char temp0_478
                    temp0_478, k1_22 = _mm256_mmask_i32gather_ps(k1_21, *(r12 + zmm5[0]))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 8)
                    int64_t k1_23 = _kxnor_mask16(arg5, arg5)
                    zmm23[0].o = _mm_mask_xor_epi32(arg5, zmm23[0].o, zmm23[0].o)
                    int64_t k1_24
                    char temp0_481
                    temp0_481, k1_24 = _mm256_mmask_i32gather_ps(k1_23, *(r12 + zmm5[0]))
                    zmm23 = temp0_481
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0xc)
                    int64_t k1_25 = _kxnor_mask16(arg5, arg5)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    int64_t k1_26
                    char temp0_484
                    temp0_484, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(r12 + zmm5[0]))
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x10)
                    int64_t k1_27 = _kxnor_mask16(arg5, arg5)
                    arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                    int64_t k1_28
                    char temp0_487
                    temp0_487, k1_28 = _mm256_mmask_i32gather_ps(k1_27, *(r12 + zmm5[0]))
                    arg21 = temp0_487
                    zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x14)
                    int64_t k1_29 = _kxnor_mask16(arg5, arg5)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    int64_t k1_30
                    char temp0_490
                    temp0_490, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(r12 + zmm5[0]))
                    arg23 = temp0_490
                    arg4 = _mm256_add_epi32(_mm256_add_epi32(arg3, arg12), arg4)
                    int64_t k1_32
                    char temp0_493
                    temp0_493, k1_32 =
                        _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r12 + arg4[0].q))
                    zmm5 = temp0_493
                    arg4 = _mm256_srli_epi32(zmm5, 0x15)
                    arg26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, zmm5, 0xa), 0x7ff)
                    arg16 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_484, temp0_475)
                    zmm1 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm5 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg26, zmm1))
                    arg26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg20 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, zmm5, arg26), arg5, 
                        arg21, temp0_478)
                    arg21[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg4, zmm1))
                    arg19 = _mm256_mask_div_ps(arg5, zmm1, arg26)
                    arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
                    arg19 = _mm256_mask3_fmadd_ps(arg19, arg5, arg23, zmm23)
            
            var_480_1 = _mm256_mask_store_ps(arg5, arg16)
            var_460_1 = _mm256_mask_store_ps(arg5, arg20)
            var_440_1 = _mm256_mask_store_ps(arg5, arg19)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg25, arg22, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (rsi_5 != -0x140288010)
                goto label_140285bab
            
            r10_2 = r10
        zmm1[0].o = _mm256_extractf32x4_ps(arg5, arg16, 1)
        arg3[0].o = _mm256_extractf32x4_ps(arg5, arg20, 1)
        zmm4[0].o = zx.o(0)
        arg4[0].o = _mm_mask_unpacklo_ps(arg5, arg19[0].o, zx.o(0))
        zmm5[0].o = _mm_mask_unpackhi_ps(arg5, arg19[0].o, zx.o(0))
        arg6[0].o = _mm_mask_unpacklo_ps(arg5, arg16[0].o, arg20[0].o)
        zmm6 = _mm_mask_unpackhi_ps(arg5, arg16[0].o, arg20[0].o)
        zmm0[0].o = arg6[0].q | arg4[0].q << 0x40
        int128_t var_2c0 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg4[0].o)
        int128_t var_2b0_1 = zmm0[0].o
        zmm0[0].o = zmm6[0].q | zmm5[0] << 0x40
        int128_t var_2a0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm6, zmm5[0].o)
        int128_t var_290_1 = zmm0[0].o
        zmm0[0].o = _mm256_extractf32x4_ps(arg5, arg19, 1)
        arg4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
        zmm0[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zx.o(0))
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        arg3[0].o = zmm5[0] | arg4[0].q << 0x40
        int128_t var_280_1 = arg3[0].o
        arg3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
        int128_t var_270_1 = arg3[0].o
        arg3[0].o = zmm1[0].q | zmm0[0].q << 0x40
        int128_t var_260_1 = arg3[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_250_1 = zmm0[0].o
        uint64_t rcx_148
        int64_t rsi_20
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rsi_20 & rol.q(-2, rcx_148.b))
            uint64_t rcx_144 = _tzcnt_u64(i_1)
            int256_t var_2e0 = temp0_33
            rsi_20 = i_1 & not.q(1 << (rcx_144 u% 0x40))
            zmm0[0].o = (&var_2c0)[rcx_144]
            *(result + sx.q(*(&var_2e0 + ((zx.q(rcx_144.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
            rcx_148 = _tzcnt_u64(rsi_20)
            zmm0[0].o = (&var_2c0)[rcx_148]
            *(result + sx.q(*(&var_2e0 + ((zx.q(rcx_148.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
        
        r10 = r10_2 + 8
        cond:2_1 = r10 == rcx_4
        cond:3_1 = r10 == rcx_4
    while (r10 s< rcx_4)
    
    if (r10 s< r13)
        goto label_1402861e6
arg6[0].o = var_d0
arg7[0].o = var_c0
arg8[0].o = var_b0
arg9[0].o = var_a0
arg10[0].o = var_80
arg11.o = var_70
arg12[0] = var_60
_mm256_zeroupper()
return result
