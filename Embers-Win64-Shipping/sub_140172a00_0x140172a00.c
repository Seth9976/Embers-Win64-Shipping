// 函数: sub_140172a00
// 地址: 0x140172a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
int32_t zmm2[0x8]
zmm2[0].o = arg30
int32_t rdx_4 = ((arg32 s>> 0x1f u>> 0x1d) + arg32) & 0xfffffff8
uint64_t result
float var_6e0[0x8]
int32_t var_6a0[0x8]
uint32_t r10
uint32_t zmm0[0x8]
float zmm1[0x8]
uint32_t zmm5[0x8]
int32_t zmm17[0x8]
uint64_t zmm20[0x4]
uint32_t zmm25[0x8]
uint32_t zmm26[0x8]
int32_t zmm30[0x8]
bool z_1

if (rdx_4 s<= 0)
    r10 = 0
    result = zx.q(arg32)
    z_1 = 0 == result.d
    
    if (0 - result.d s< 0 != add_overflow(0, neg.d(result.d)))
    label_140175b93:
        zmm0 = _mm256_mask_set1_epi32(arg5, r10)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
        zmm2 = _mm256_mask_set1_epi32(arg5, result.d)
        uint64_t k6_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm2, zmm1)
        arg6 = _mm256_slli_epi32(zmm1, 3)
        int64_t k1_53
        int128_t temp0_960
        temp0_960, k1_53 =
            _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_9), *(arg2 + arg6[0].q))
        arg11 = temp0_960
        arg6 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
        int64_t k1_54 = __kmovq_maskmskw_masku64_avx512(k6_9)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k1_55
        int128_t temp0_963
        temp0_963, k1_55 = _mm256_mmask_i32gather_epi32(k1_54, *(arg2 + arg6[0].q))
        arg7 = temp0_963
        arg6 = _mm256_slli_epi32(arg7, 3)
        int64_t k1_56 = __kmovq_maskmskw_masku64_avx512(k6_9)
        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
        int64_t k1_57
        int128_t temp0_966
        temp0_966, k1_57 = _mm256_mmask_i32gather_epi32(k1_56, *(arg3 + arg6[0].q))
        arg27 = temp0_966
        char i_2 = _cvtmask32_u32(k6_9)
        arg15[0].o = zx.o(0)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        uint64_t k7_13 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
            _mm256_cmp_epi32_mask(arg5, arg27, arg8, 4), zmm2, zmm1)
        _kortest_mask8_u8(k7_13, k7_13)
        int128_t var_580
        int128_t var_560
        int128_t var_540
        
        if (not(z_1))
            zmm0[0].o = zx.o(arg4)
            zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg27, 1)
            int64_t k1_59 = __kmovq_maskmskw_masku64_avx512(k7_13)
            arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
            int64_t k1_60
            int128_t temp0_970
            temp0_970, k1_60 = _mm256_mmask_i32gather_epi32(k1_59, *(arg4 + arg27[0].q))
            arg18 = temp0_970
            arg7[0].o = 4
            arg12 = _mm256_mask_srli_epi32(arg5, arg18, 0x18)
            arg10 = _mm256_mask_srli_epi32(arg5, arg18, 0x1c)
            arg6 = _mm256_slli_epi32(arg10, 2)
            int64_t k1_62
            int128_t temp0_974
            temp0_974, k1_62 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_13), 
                *(&data_143442890 + arg6[0].q))
            arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 7)
            zmm5 = _mm256_mask_or_epi32(k7_13, _mm256_slli_epi32(arg10, 3), arg6)
            arg6 = __vpbroadcastd_ymmqq_memd(3)
            uint64_t r10_1 = zx.q(zmm5[0])
            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r14_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r12_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rcx_20 = zx.q(zmm5[0])
            int64_t rax_127 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rbx_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rdi_15 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r10_1 + &data_1434428b0))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r11_4 + &data_1434428b0), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r14_1 + &data_1434428b0), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r12_5 + &data_1434428b0), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rcx_20 + &data_1434428b0), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_127 + &data_1434428b0), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_8 + &data_1434428b0), 6)
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdi_15 + &data_1434428b0), 7)
            int64_t k1_63 = _mm256_cmp_epi32_mask(k7_13, arg10, arg6, 4)
            _kortest_mask8_u8(k1_63, k1_63)
            arg7[0].o = zx.o(0)
            
            if (not(z_1))
                arg7 = _mm256_mask_cvtepu8_epi32(k1_63, zmm5[0].o)
            
            zmm17 = _mm256_mask_cvtepi32_epi64(arg5, arg27[0].o)
            arg19 = _mm256_mask_cvtepi32_epi64(arg5, zmm1[0].o)
            zmm1 = _mm256_broadcastq_epi64(arg9[0].q)
            zmm25 = __vpandq_ymmu64_maskmskw_ymmu64_memu64_avx512(arg5, arg18, data_143442840)
            zmm2 = _mm256_mask_mov_epi32(k7_13, temp0_974)
            arg20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k7_13, 4)
            int64_t k1_64 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k7_13, arg10, arg6)
            _kortest_mask8_u8(k1_64, k1_64)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            
            if (z_1)
                zmm5[0].o = zx.o(0)
            else
                zmm5 = _mm256_mask_cvtepu8_epi32(k1_64, zmm5[0].o)
                arg7 = _mm256_mask_set1_epi32(k1_64, 1)
            
            arg24 = _mm256_mask_madd_epi16(arg5, zmm5, arg20)
            arg13 = _mm256_mullo_epi32(arg7, zmm2)
            zmm20 = _mm256_mask_add_epi64(arg5, zmm1, arg19)
            arg20 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
            int64_t k3_42 = _mm256_cmp_epu32_mask(k7_13, zmm25, arg6, 6)
            _kortest_mask8_u8(k3_42, k3_42)
            
            if (z_1)
                arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
            else
                zmm0 = __vpbroadcastd_ymmqq_memd(0x8000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                int64_t k4_32 = _mm256_mask_testn_epi32_mask(k3_42, arg18, zmm0)
                _kortest_mask8_u8(k4_32, k4_32)
                int64_t k3_43
                
                if (z_1)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    arg15[0].o = zx.o(0)
                    arg6[0].o = arg30
                    k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                    _kortest_mask8_u8(k3_43, k3_43)
                    
                    if (not(z_1))
                    label_140175ee6:
                        int64_t k1_65 =
                            __vpcmpud_maskmskw_maskmskw_ymmu32_memu32_imm8_avx512(arg5, zmm25, 2, 1)
                        zmm1[0].o = _mm_movm_epi16(k3_43)
                        zmm0[0].o = zx.o(0)
                        rax_127.b = zx.o(0) f>= arg6[0]
                        char temp2_1 = rax_127.b
                        rax_127.b = neg.b(rax_127.b)
                        z_1 = neg.b(temp2_1) == 0
                        arg9[0].o = _mm_mask_set1_epi8(arg5, rax_127.d)
                        arg9[0].o = _mm_mask_loadu_epi16(k1_65, data_142fc92e0)
                        zmm2[0].o = arg9[0].o & zmm1[0].o
                        int64_t k0_15 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                            zmm2[0].o, data_142fc92e0)
                        _kortest_mask8_u8(k0_15, k0_15)
                        
                        if (not(z_1))
                            int64_t k1_66 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                k0_15, zmm2[0].o, data_142fc92e0)
                            arg22 = _mm256_mask_mov_epi32(k1_66, arg22)
                            arg23 = _mm256_mask_mov_epi32(k1_66, arg23)
                        
                        zmm2[0].o = arg9[0].o ^ data_142fc92e0
                        arg21[0].o = _mm_mask_and_epi64(k0_15, zmm1[0].o, zmm2[0].o)
                        arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_15, arg21[0].o, 
                            data_142fc92e0)
                        zmm1[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z_1)
                            zmm30 = _mm256_mask_mov_epi64(arg5, arg23)
                        else
                            zmm30 =
                                _mm256_mask_add_epi32(arg5, zmm25, _mm256_cmpeq_epi32(zmm2, zmm2))
                            arg6[0].o f- 1f
                            z_1 = arg6[0] == 1f
                            
                            if (not(arg6[0] < 1f))
                                int64_t k1_70 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                    arg5, arg21[0].o, data_142fc92e0)
                                arg22 = _mm256_mask_blend_epi32(k1_70, zmm30, arg22)
                                zmm30 = _mm256_mask_mov_epi32(k1_70, arg23)
                            else
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                zmm1 = _mm256_cvtepu32_epi64(zmm1[0].o)
                                zmm2 = _mm256_mask_cvtepu32_epi64(arg5, arg24[0].o)
                                zmm0[0].o = arg6[0].o
                                arg6 = _mm256_mask_mullo_epi32(arg5, arg13, zmm25)
                                arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                zmm2 = _mm256_mask_add_epi64(arg5, arg20, zmm2)
                                zmm5 = __vpbroadcastq_ymmqq_memq(3)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm20, zmm1)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm2 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm2, zmm5))
                                zmm1 = _mm256_add_epi64(arg7, _mm256_add_epi64(zmm1, zmm5))
                                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                                zmm26 = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                                arg26 = _mm256_mask_and_epi64(arg5, zmm2, arg6)
                                char temp0_1059 = _cvtmask32_u32(arg5)
                                uint32_t rdi_16 = arg29 - 2
                                zmm1 = _mm256_broadcastss_ps(zmm0[0].o)
                                zmm2 = _mm256_mask_cvtepi32_ps(arg5, zmm30)
                                zmm1 = _mm256_mul_ps(zmm1, zmm2)
                                zmm2[0].o = arg25[0].o
                                zmm2[0] = float.s(arg29 - 1)
                                zmm0[0].o = zmm2[0].o f* zmm0[0]
                                int64_t var_4f0
                                var_4f0.o = zmm0[0].o
                                int32_t rax_129 = int.d(zmm0[0])
                                rax_127 = zx.q(rax_129) & zx.q(not.d(rax_129 s>> 0x1f))
                                
                                if (rdi_16 s> rax_127.d)
                                    rdi_16 = rax_127.d
                                
                                zmm1 = _mm256_cvttps_epi32(zmm1)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm1 = _mm256_max_epi32(zmm1, zmm2)
                                var_6a0 = _mm256_mask_store_epi64(arg5, zmm30)
                                zmm30 = _mm256_mask_min_epi32(arg5, zmm1, zmm30)
                                int32_t var_5a0_2[0x8] = arg13
                                var_6e0[0].o = arg9[0].o
                                
                                if (arg29 s< 0x100)
                                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, zmm30[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg26, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_140176708
                                        
                                        goto label_140176362
                                    
                                    rax_127 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_127)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_140176708:
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_140176372
                                        
                                        goto label_140176720
                                    
                                label_140176362:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_140176372:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_140176741
                                        
                                        goto label_140176380
                                    
                                label_140176720:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_127 = zx.q(*arg7[0])
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_127.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_140176741:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017638f
                                        
                                        goto label_140176769
                                    
                                label_140176380:
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140176769:
                                        rax_127 = zx.q(*zmm2[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_140176780:
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_127.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_1401763a1
                                            
                                            goto label_140176791
                                    else
                                    label_14017638f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_140176780
                                    
                                    int64_t var_300
                                    bool cond:7_1
                                    bool cond:9_1
                                    bool cond:10_1
                                    bool cond:15_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_140176791:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_127 = zx.q(*arg6[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 6)
                                        cond:7_1 = temp0_1059 == 0
                                        cond:9_1 = temp0_1059 == 0
                                        cond:10_1 = temp0_1059 == 0
                                        cond:15_1 = temp0_1059 == 0
                                        var_300.32 = arg12
                                        
                                        if (temp0_1059 s< 0)
                                        label_1401767b5:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_127.d, 7)
                                    else
                                    label_1401763a1:
                                        cond:7_1 = temp0_1059 == 0
                                        cond:9_1 = temp0_1059 == 0
                                        cond:10_1 = temp0_1059 == 0
                                        cond:15_1 = temp0_1059 == 0
                                        var_300.32 = arg12
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_1401767b5
                                    
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    zmm1[0].o &= zmm2[0].o
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg28 = _mm256_mask_set1_epi32(arg5, rdi_16)
                                    int64_t k4_34 = _mm256_cmp_epi32_mask(arg5, arg28, zmm1, 5)
                                    arg14[0].o = _mm_movm_epi16(k4_34)
                                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg21[0].o, arg14[0].o)
                                    int64_t k0_20 =
                                        _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(k0_20, k0_20)
                                    arg13 = _mm256_mask_mov_epi64(k0_20, zmm30)
                                    
                                    if (not(cond:7_1))
                                        arg16 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_34, zmm30, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg25 = _mm256_mask_sub_epi32(k0_20, zmm30, arg12)
                                        int64_t k0_21 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_34, zmm25, arg25)
                                        arg7[0].o = _mm_movm_epi16(k0_21)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_21, arg21[0].o, arg7[0].o)
                                        k0_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_21, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_20, k0_20)
                                        
                                        if (cond:10_1)
                                            arg13 = arg16
                                        else
                                            char rdi_18 = _cvtmask32_u32(k0_20)
                                            arg17[0].o = data_142fc92e0
                                            _mm256_mask_mov_epi64(k0_20, zmm30)
                                            bool cond:28_1
                                            
                                            do
                                                zmm1 = _mm256_mask_mov_epi64(k0_20, arg25)
                                                arg13 = _mm256_mask_add_epi64(k0_20, arg26, 
                                                    _mm256_mask_cvtepi32_epi64(k0_20, zmm1[0].o))
                                                int64_t k0_22 = _mm_mask_test_epi16_mask(k0_20, 
                                                    zmm5[0].o, arg17[0].o)
                                                char temp0_1159 = _cvtmask32_u32(k0_22)
                                                
                                                if ((temp0_1159 & 1) == 0)
                                                    if ((temp0_1159 & 2) != 0)
                                                        goto label_140176460
                                                    
                                                    goto label_140176563
                                                
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_1159 & 2) != 0)
                                                label_140176460:
                                                    uint16_t rax_142[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_142, 1)
                                                    zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    
                                                    if ((temp0_1159 & 4) == 0)
                                                        goto label_140176573
                                                    
                                                    goto label_140176478
                                                
                                            label_140176563:
                                                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                
                                                if ((temp0_1159 & 4) == 0)
                                                label_140176573:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1159 & 8) != 0)
                                                        goto label_14017649a
                                                    
                                                    goto label_140176582
                                                
                                            label_140176478:
                                                arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg8[0]), 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1159 & 8) != 0)
                                                label_14017649a:
                                                    arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint32_t rax_146 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_146, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_22, zmm26, zmm5)
                                                    
                                                    if ((temp0_1159 & 0x10) == 0)
                                                        goto label_140176592
                                                    
                                                    goto label_1401764c6
                                                
                                            label_140176582:
                                                arg13 = _mm256_mask_add_epi64(k0_22, zmm26, zmm5)
                                                
                                                if ((temp0_1159 & 0x10) == 0)
                                                label_140176592:
                                                    
                                                    if ((temp0_1159 & 0x20) != 0)
                                                        goto label_1401764db
                                                    
                                                    goto label_14017659c
                                                
                                            label_1401764c6:
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 4)
                                                
                                                if ((temp0_1159 & 0x20) != 0)
                                                label_1401764db:
                                                    uint16_t rax_150[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_150, 5)
                                                    
                                                    if ((temp0_1159 & 0x40) == 0)
                                                        goto label_1401765a6
                                                    
                                                    goto label_1401764ed
                                                
                                            label_14017659c:
                                                
                                                if ((temp0_1159 & 0x40) != 0)
                                                label_1401764ed:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, zx.d(*zmm5[0].q), 6)
                                                    
                                                    if (temp0_1159 s< 0)
                                                    label_140176509:
                                                        zmm5[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint16_t rax_154[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 
                                                            1))
                                                        arg9[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg9[0].o, rax_154, 7)
                                                else
                                                label_1401765a6:
                                                    
                                                    if (temp0_1159 s< 0)
                                                        goto label_140176509
                                                
                                                zmm5[0].o = arg9[0].o & zmm2[0].o
                                                zmm5 = _mm256_cvtepu16_epi32(zmm5[0].o)
                                                arg8[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_22, zmm5, arg28), 
                                                    arg7[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_72 = _mm_mask_testn_epi16_mask(k0_22, 
                                                    arg8[0].o, zmm2[0].o)
                                                zmm0[0].o =
                                                    _mm_mask_and_epi64(k0_22, arg8[0].o, arg21[0].o)
                                                int64_t k0_23 = _mm_mask_test_epi16_mask(k0_22, 
                                                    zmm0[0].o, zmm2[0].o)
                                                rax_127 = zx.q(_cvtmask32_u32(k0_23))
                                                cond:9_1 = rdi_18 == rax_127.b
                                                cond:15_1 = rdi_18 == rax_127.b
                                                cond:28_1 = rdi_18 != rax_127.b
                                                
                                                if (rdi_18 != rax_127.b)
                                                    zmm5[0].o = arg8[0].o ^ arg7[0].o
                                                
                                                arg13 = _mm256_mask_mov_epi32(k1_72, arg16)
                                                arg25 = _mm256_mask_sub_epi32(k0_23, zmm1, arg12)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_23, zmm25, arg25), 
                                                    zmm5[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_23, arg7[0].o, arg21[0].o)
                                                k0_20 = _mm_mask_test_epi16_mask(k0_23, zmm5[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_20, k0_20)
                                                rdi_18 = _cvtmask32_u32(k0_20)
                                                arg6 = zmm1
                                                arg16 = arg13
                                            while (cond:28_1)
                                    
                                    zmm1[0].o = arg14[0].o ^ data_142fc92e0
                                    arg6[0].o = _mm_mask_and_epi64(k0_20, arg21[0].o, zmm1[0].o)
                                    int64_t k0_27 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, 
                                        arg6[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_27, k0_27)
                                    
                                    if (not(cond:9_1))
                                        arg7 = _mm256_mask_mov_epi32(k4_34, arg13)
                                        arg14[0].o = zx.o(0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg16 = _mm256_mask_add_epi32(k0_27, zmm30, arg12)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_27, arg16, arg14), 
                                            zmm1[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_27, arg9[0].o, arg21[0].o)
                                        k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_27, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_27, k0_27)
                                        
                                        if (cond:15_1)
                                            arg13 = arg7
                                        else
                                            char rdi_20 = _cvtmask32_u32(k0_27)
                                            zmm30[0].o = _mm_mask_load_epi64(k0_27, data_142fc92e0)
                                            bool cond:32_1
                                            
                                            do
                                                zmm0 = _mm256_cvtepi32_epi64(arg16[0].o)
                                                arg6 = _mm256_mask_add_epi64(k0_27, arg26, zmm0)
                                                int64_t k0_28 = _mm_mask_test_epi16_mask(k0_27, 
                                                    zmm5[0].o, zmm30[0].o)
                                                char temp0_1268 = _cvtmask32_u32(k0_28)
                                                
                                                if ((temp0_1268 & 1) == 0)
                                                    if ((temp0_1268 & 2) != 0)
                                                        goto label_140176aa6
                                                    
                                                    goto label_140176b9c
                                                
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*arg6[0].q), 0)
                                                
                                                if ((temp0_1268 & 2) != 0)
                                                label_140176aa6:
                                                    uint16_t rax_175[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_175, 1)
                                                    zmm5[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    
                                                    if ((temp0_1268 & 4) == 0)
                                                        goto label_140176bac
                                                    
                                                    goto label_140176abe
                                                
                                            label_140176b9c:
                                                zmm5[0].o = _mm256_extracti128_si256(arg16, 1)
                                                
                                                if ((temp0_1268 & 4) == 0)
                                                label_140176bac:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1268 & 8) != 0)
                                                        goto label_140176ae0
                                                    
                                                    goto label_140176bbb
                                                
                                            label_140176abe:
                                                zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*zmm0[0].q), 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1268 & 8) != 0)
                                                label_140176ae0:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    uint16_t rax_179[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_179, 3)
                                                    arg6 = _mm256_mask_add_epi64(k0_28, zmm26, zmm5)
                                                    
                                                    if ((temp0_1268 & 0x10) == 0)
                                                        goto label_140176bcb
                                                    
                                                    goto label_140176b0c
                                                
                                            label_140176bbb:
                                                arg6 = _mm256_mask_add_epi64(k0_28, zmm26, zmm5)
                                                
                                                if ((temp0_1268 & 0x10) == 0)
                                                label_140176bcb:
                                                    
                                                    if ((temp0_1268 & 0x20) != 0)
                                                        goto label_140176b21
                                                    
                                                    goto label_140176bd5
                                                
                                            label_140176b0c:
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*arg6[0].q), 4)
                                                
                                                if ((temp0_1268 & 0x20) != 0)
                                                label_140176b21:
                                                    uint16_t rax_183[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_183, 5)
                                                    
                                                    if ((temp0_1268 & 0x40) == 0)
                                                        goto label_140176bdf
                                                    
                                                    goto label_140176b33
                                                
                                            label_140176bd5:
                                                
                                                if ((temp0_1268 & 0x40) != 0)
                                                label_140176b33:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, zx.d(*zmm0[0].q), 6)
                                                    
                                                    if (temp0_1268 s< 0)
                                                    label_140176b4f:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(arg6, 1)
                                                        uint16_t rax_187[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1))
                                                        zmm1[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm1[0].o, rax_187, 7)
                                                else
                                                label_140176bdf:
                                                    
                                                    if (temp0_1268 s< 0)
                                                        goto label_140176b4f
                                                
                                                zmm0[0].o = zmm1[0].o & zmm2[0].o
                                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_28, arg28, zmm0, 5), 
                                                    arg9[0].o)
                                                arg6[0].o = zx.o(0)
                                                int64_t k1_80 = _mm_mask_testn_epi16_mask(k0_28, 
                                                    zmm5[0].o, zmm2[0].o)
                                                zmm0[0].o =
                                                    _mm_mask_and_epi64(k0_28, zmm5[0].o, arg21[0].o)
                                                int64_t k0_29 = _mm_mask_test_epi16_mask(k0_28, 
                                                    zmm0[0].o, zmm2[0].o)
                                                rax_127 = zx.q(_cvtmask32_u32(k0_29))
                                                cond:32_1 = rdi_20 != rax_127.b
                                                
                                                if (rdi_20 != rax_127.b)
                                                    arg6[0].o = zmm5[0].o ^ arg9[0].o
                                                
                                                arg16 = _mm256_add_epi32(arg16, arg12)
                                                arg13 = _mm256_mask_mov_epi32(k1_80, arg7)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_29, arg16, arg14), 
                                                    arg6[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_29, arg9[0].o, arg21[0].o)
                                                k0_27 = _mm_mask_test_epi16_mask(k0_29, zmm5[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_27, k0_27)
                                                rdi_20 = _cvtmask32_u32(k0_27)
                                                arg7 = arg13
                                            while (cond:32_1)
                                    
                                    arg22 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, 
                                            arg21[0].o, data_142fc92e0), 
                                        arg13, arg22)
                                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_27, arg22[0].o)
                                    zmm1 = _mm256_mask_add_epi64(k0_27, arg26, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                        arg12 = var_300.32
                                        
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_140178926
                                        
                                        goto label_1401787d2
                                    
                                    rax_127 = zmm1[0].q
                                    arg9[0].o = __vpbroadcastb_xmmdq_memb(*rax_127)
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg12 = var_300.32
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_140178926:
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_127.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg22, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_1401787e2
                                        
                                        goto label_14017893e
                                    
                                label_1401787d2:
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg22, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_1401787e2:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017895f
                                        
                                        goto label_1401787f0
                                    
                                label_14017893e:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_127 = zx.q(*zmm0[0].q)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_127.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017895f:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_127.d, 3)
                                        zmm1 = _mm256_mask_add_epi64(k0_27, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_1401787ff
                                        
                                        goto label_140178987
                                    
                                label_1401787f0:
                                    zmm1 = _mm256_mask_add_epi64(k0_27, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140178987:
                                        rax_127 = zx.q(*zmm1[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_127.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14017899e:
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_127.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_140178811
                                            
                                            goto label_1401789af
                                    else
                                    label_1401787ff:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017899e
                                    
                                    bool cond:26_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_1401789af:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_127 = zx.q(*zmm0[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_127.d, 6)
                                        cond:26_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_1401789ca:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_127.d, 7)
                                    else
                                    label_140178811:
                                        cond:26_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_1401789ca
                                    
                                    int64_t k1_167 =
                                        _mm_mask_testn_epi16_mask(k0_27, arg21[0].o, zmm2[0].o)
                                    _mm256_mask_sub_epi32(k0_27, arg13, 
                                        _mm256_cmpeq_epi32(zmm0, zmm0))
                                    zmm30 = _mm256_mask_mov_epi32(k1_167, arg23)
                                    zmm1[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_27, zmm30, zmm25, 5), arg21[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_27, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:26_1))
                                        zmm30 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, 
                                                    zmm2[0].o), 
                                                zmm30))
                                    
                                    arg13 = var_5a0_2
                                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, zmm30[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, arg26, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_1401789fc
                                        
                                        goto label_140178887
                                    
                                    rax_127 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_127)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_1401789fc:
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 1)
                                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_140178897
                                        
                                        goto label_140178a14
                                    
                                label_140178887:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_140178897:
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_140178a35
                                        
                                        goto label_1401788a5
                                    
                                label_140178a14:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_127 = zx.q(*zmm0[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_127.d, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_140178a35:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_127 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_1401788b4
                                        
                                        goto label_140178a5d
                                    
                                label_1401788a5:
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140178a5d:
                                        rax_127 = zx.q(*arg6[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_140178a74:
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_127.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_1401788c6
                                            
                                            goto label_140178a85
                                    else
                                    label_1401788b4:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_140178a74
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_140178a85:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_127 = zx.q(*zmm0[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_127.d, 6)
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                        label_140178aa4:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_127 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_127.d, 7)
                                    else
                                    label_1401788c6:
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_140178aa4
                                    
                                    arg9[0].o = var_6e0[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg31 == 1
                                    
                                    if (not(z_1))
                                    label_140176dce:
                                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(zmm1, zmm2), 1)
                                        zmm1 = _mm256_sub_ps(_mm256_broadcast_ss(var_4f0.d), 
                                            _mm256_cvtepi32_ps(zmm2))
                                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                                        arg6 = _mm256_div_ps(zmm1, zmm0)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, zmm30, zmm30)
                                    zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg26, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017663e
                                        
                                        goto label_14017607d
                                    
                                    rax_127 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_127)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017663e:
                                        rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017608c
                                        
                                        goto label_140176658
                                    
                                label_14017607d:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017608c:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_140176676
                                        
                                        goto label_14017609a
                                    
                                label_140176658:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_127 = arg7[0]
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_140176676:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_1401760a9
                                        
                                        goto label_140176696
                                    
                                label_14017609a:
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140176696:
                                        rax_127 = zmm2[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_1401766a9:
                                            rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_127, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_1401760bb
                                            
                                            goto label_1401766bd
                                    else
                                    label_1401760a9:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_1401766a9
                                    
                                    bool cond:8_1
                                    bool cond:11_1
                                    bool cond:12_1
                                    bool cond:16_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_1401766bd:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_127 = arg6[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 6)
                                        zmm0 = arg12
                                        cond:8_1 = temp0_1059 == 0
                                        cond:11_1 = temp0_1059 == 0
                                        cond:12_1 = temp0_1059 == 0
                                        cond:16_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_1401766d9:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_127, 7)
                                    else
                                    label_1401760bb:
                                        zmm0 = arg12
                                        cond:8_1 = temp0_1059 == 0
                                        cond:11_1 = temp0_1059 == 0
                                        cond:12_1 = temp0_1059 == 0
                                        cond:16_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_1401766d9
                                    
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg16 = _mm256_mask_set1_epi32(arg5, rdi_16)
                                    int64_t k4_33 = _mm256_cmp_epi32_mask(arg5, arg16, zmm1, 5)
                                    arg8[0].o = _mm_movm_epi16(k4_33)
                                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg21[0].o, arg8[0].o)
                                    int64_t k0_16 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_16, k0_16)
                                    arg7 = _mm256_mask_mov_epi64(k0_16, zmm30)
                                    
                                    if (not(cond:8_1))
                                        arg14 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_33, zmm30, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        zmm2 = _mm256_mask_sub_epi32(k0_16, zmm30, arg12)
                                        int64_t k0_17 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_33, zmm25, zmm2)
                                        arg9[0].o = _mm_movm_epi16(k0_17)
                                        arg28[0].o =
                                            _mm_mask_and_epi64(k0_17, arg21[0].o, arg9[0].o)
                                        k0_16 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_17, arg28[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_16, k0_16)
                                        
                                        if (cond:12_1)
                                            arg7 = arg14
                                        else
                                            char rdi_17 = _cvtmask32_u32(k0_16)
                                            arg13[0].o = data_142fc92e0
                                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            _mm256_mask_mov_epi64(k0_16, zmm30)
                                            bool cond:29_1
                                            
                                            do
                                                arg25 = _mm256_mask_mov_epi64(k0_16, zmm2)
                                                zmm2 = _mm256_add_epi32(zmm2, zmm2)
                                                arg7 = _mm256_mask_add_epi64(k0_16, arg26, 
                                                    _mm256_cvtepi32_epi64(zmm2[0].o))
                                                int64_t k0_18 = _mm_mask_test_epi16_mask(k0_16, 
                                                    arg28[0].o, arg13[0].o)
                                                char temp0_1106 = _cvtmask32_u32(k0_18)
                                                
                                                if ((temp0_1106 & 1) == 0)
                                                    if ((temp0_1106 & 2) != 0)
                                                        goto label_14017616c
                                                    
                                                    goto label_140176256
                                                
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0], 0)
                                                
                                                if ((temp0_1106 & 2) != 0)
                                                label_14017616c:
                                                    int64_t rax_131 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_131, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    
                                                    if ((temp0_1106 & 4) == 0)
                                                        goto label_140176266
                                                    
                                                    goto label_140176187
                                                
                                            label_140176256:
                                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1106 & 4) == 0)
                                                label_140176266:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_1106 & 8) != 0)
                                                        goto label_1401761a6
                                                    
                                                    goto label_140176275
                                                
                                            label_140176187:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *zmm5[0].q, 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_1106 & 8) != 0)
                                                label_1401761a6:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_133 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_133, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_18, zmm26, zmm2)
                                                    
                                                    if ((temp0_1106 & 0x10) == 0)
                                                        goto label_140176285
                                                    
                                                    goto label_1401761cc
                                                
                                            label_140176275:
                                                arg7 = _mm256_mask_add_epi64(k0_18, zmm26, zmm2)
                                                
                                                if ((temp0_1106 & 0x10) == 0)
                                                label_140176285:
                                                    
                                                    if ((temp0_1106 & 0x20) != 0)
                                                        goto label_1401761db
                                                    
                                                    goto label_14017628f
                                                
                                            label_1401761cc:
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0], 4)
                                                
                                                if ((temp0_1106 & 0x20) != 0)
                                                label_1401761db:
                                                    int64_t rax_135 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_135, 5)
                                                    
                                                    if ((temp0_1106 & 0x40) == 0)
                                                        goto label_140176299
                                                    
                                                    goto label_1401761f0
                                                
                                            label_14017628f:
                                                
                                                if ((temp0_1106 & 0x40) != 0)
                                                label_1401761f0:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *zmm2[0].q, 6)
                                                    
                                                    if (temp0_1106 s< 0)
                                                    label_140176209:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_137 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            arg6[0].o, *rax_137, 7)
                                                else
                                                label_140176299:
                                                    
                                                    if (temp0_1106 s< 0)
                                                        goto label_140176209
                                                
                                                zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_18, zmm2, arg16), 
                                                    arg9[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_68 = _mm_mask_testn_epi16_mask(k0_18, 
                                                    zmm2[0].o, zmm1[0].o)
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_18, zmm2[0].o, arg21[0].o)
                                                int64_t k0_19 = _mm_mask_test_epi16_mask(k0_18, 
                                                    arg7[0].o, zmm1[0].o)
                                                rax_127 = zx.q(_cvtmask32_u32(k0_19))
                                                cond:11_1 = rdi_17 == rax_127.b
                                                cond:16_1 = rdi_17 == rax_127.b
                                                cond:29_1 = rdi_17 != rax_127.b
                                                
                                                if (rdi_17 != rax_127.b)
                                                    zmm5[0].o = zmm2[0].o ^ arg9[0].o
                                                
                                                arg7 = _mm256_mask_mov_epi32(k1_68, arg14)
                                                zmm2 = _mm256_mask_sub_epi32(k0_19, arg25, arg12)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_19, zmm25, zmm2), 
                                                    zmm5[0].o)
                                                arg28[0].o =
                                                    _mm_mask_and_epi64(k0_19, arg9[0].o, arg21[0].o)
                                                k0_16 = _mm_mask_test_epi16_mask(k0_19, arg28[0].o, 
                                                    zmm1[0].o)
                                                _kortest_mask8_u8(k0_16, k0_16)
                                                rdi_17 = _cvtmask32_u32(k0_16)
                                                arg17 = _mm256_mask_mov_epi64(k0_16, arg25)
                                                arg14 = arg7
                                            while (cond:29_1)
                                    
                                    zmm2[0].o = arg8[0].o ^ data_142fc92e0
                                    zmm1[0].o = _mm_mask_and_epi64(k0_16, arg21[0].o, zmm2[0].o)
                                    int64_t k0_24 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_16, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_24, k0_24)
                                    
                                    if (not(cond:11_1))
                                        zmm1 = _mm256_mask_mov_epi32(k4_33, arg7)
                                        arg28[0].o =
                                            _mm_mask_xor_epi32(k0_24, arg28[0].o, arg28[0].o)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg13 = _mm256_mask_add_epi32(k0_24, zmm30, arg12)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_24, arg13, arg28), 
                                            zmm2[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_24, arg9[0].o, arg21[0].o)
                                        k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_24, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_24, k0_24)
                                        
                                        if (cond:16_1)
                                            arg7 = zmm1
                                        else
                                            char rdi_19 = _cvtmask32_u32(k0_24)
                                            zmm30[0].o = _mm_mask_load_epi64(k0_24, data_142fc92e0)
                                            arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            bool cond:33_1
                                            
                                            do
                                                arg25 = _mm256_mask_add_epi32(k0_24, arg13, arg13)
                                                arg7 = _mm256_mask_add_epi64(k0_24, arg26, 
                                                    _mm256_mask_cvtepi32_epi64(k0_24, arg25[0].o))
                                                int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, 
                                                    zmm5[0].o, zmm30[0].o)
                                                char temp0_1230 = _cvtmask32_u32(k0_25)
                                                
                                                if ((temp0_1230 & 1) == 0)
                                                    if ((temp0_1230 & 2) != 0)
                                                        goto label_140176861
                                                    
                                                    goto label_140176953
                                                
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg7[0], 0)
                                                
                                                if ((temp0_1230 & 2) != 0)
                                                label_140176861:
                                                    int64_t rax_164 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_164, 1)
                                                    zmm5[0].o =
                                                        _mm256_extracti32x4_epi32(k0_25, arg25, 1)
                                                    
                                                    if ((temp0_1230 & 4) == 0)
                                                        goto label_140176964
                                                    
                                                    goto label_14017687d
                                                
                                            label_140176953:
                                                zmm5[0].o =
                                                    _mm256_extracti32x4_epi32(k0_25, arg25, 1)
                                                
                                                if ((temp0_1230 & 4) == 0)
                                                label_140176964:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1230 & 8) != 0)
                                                        goto label_14017689c
                                                    
                                                    goto label_140176973
                                                
                                            label_14017687d:
                                                arg8[0].o = _mm256_extracti128_si256(arg7, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg8[0], 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1230 & 8) != 0)
                                                label_14017689c:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_166 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_166, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_25, zmm26, zmm5)
                                                    
                                                    if ((temp0_1230 & 0x10) == 0)
                                                        goto label_140176983
                                                    
                                                    goto label_1401768c2
                                                
                                            label_140176973:
                                                arg7 = _mm256_mask_add_epi64(k0_25, zmm26, zmm5)
                                                
                                                if ((temp0_1230 & 0x10) == 0)
                                                label_140176983:
                                                    
                                                    if ((temp0_1230 & 0x20) != 0)
                                                        goto label_1401768d1
                                                    
                                                    goto label_14017698d
                                                
                                            label_1401768c2:
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg7[0], 4)
                                                
                                                if ((temp0_1230 & 0x20) != 0)
                                                label_1401768d1:
                                                    int64_t rax_168 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_168, 5)
                                                    
                                                    if ((temp0_1230 & 0x40) == 0)
                                                        goto label_140176997
                                                    
                                                    goto label_1401768e6
                                                
                                            label_14017698d:
                                                
                                                if ((temp0_1230 & 0x40) != 0)
                                                label_1401768e6:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm5[0].q, 6)
                                                    
                                                    if (temp0_1230 s< 0)
                                                    label_1401768ff:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_170 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm2[0].o, *rax_170, 7)
                                                else
                                                label_140176997:
                                                    
                                                    if (temp0_1230 s< 0)
                                                        goto label_1401768ff
                                                
                                                arg7 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_25, arg16, arg7, 5), 
                                                    arg9[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_76 = _mm_mask_testn_epi16_mask(k0_25, 
                                                    arg7[0].o, arg6[0].o)
                                                arg8[0].o =
                                                    _mm_mask_and_epi64(k0_25, arg7[0].o, arg21[0].o)
                                                int64_t k0_26 = _mm_mask_test_epi16_mask(k0_25, 
                                                    arg8[0].o, arg6[0].o)
                                                rax_127 = zx.q(_cvtmask32_u32(k0_26))
                                                cond:33_1 = rdi_19 != rax_127.b
                                                
                                                if (rdi_19 != rax_127.b)
                                                    zmm5[0].o = arg7[0].o ^ arg9[0].o
                                                
                                                arg13 = _mm256_add_epi32(arg13, arg12)
                                                arg7 = _mm256_mask_mov_epi32(k1_76, zmm1)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_26, arg13, arg28), 
                                                    zmm5[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_26, arg9[0].o, arg21[0].o)
                                                k0_24 = _mm_mask_test_epi16_mask(k0_26, zmm5[0].o, 
                                                    arg6[0].o)
                                                _kortest_mask8_u8(k0_24, k0_24)
                                                rdi_19 = _cvtmask32_u32(k0_24)
                                                zmm1 = arg7
                                            while (cond:33_1)
                                    
                                    arg22 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_24, 
                                            arg21[0].o, data_142fc92e0), 
                                        arg7, arg22)
                                    arg6 = _mm256_mask_add_epi32(k0_24, arg22, arg22)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, arg26, 
                                        _mm256_cvtepi32_epi64(arg6[0].o))
                                    
                                    if ((temp0_1059 & 1) != 0)
                                        rax_127 = zmm1[0].q
                                        zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_127)
                                    
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg12 = zmm0
                                    arg13 = var_5a0_2
                                    arg9[0].o = var_6e0[0].o
                                    
                                    if ((temp0_1059 & 2) == 0)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1059 & 4) != 0)
                                            goto label_140178640
                                        
                                        goto label_140176cc3
                                    
                                    rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) != 0)
                                    label_140178640:
                                        zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_127 = zmm5[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 2)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) == 0)
                                            goto label_140176cd1
                                        
                                        goto label_14017865e
                                    
                                label_140176cc3:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) == 0)
                                    label_140176cd1:
                                        zmm1 = _mm256_mask_add_epi64(k0_24, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) != 0)
                                            goto label_14017867e
                                        
                                        goto label_140176ce0
                                    
                                label_14017865e:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 3)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017867e:
                                        rax_127 = zmm1[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 4)
                                        
                                        if ((temp0_1059 & 0x20) == 0)
                                            goto label_140176ce9
                                        
                                        goto label_140178691
                                    
                                label_140176ce0:
                                    
                                    if ((temp0_1059 & 0x20) == 0)
                                    label_140176ce9:
                                        
                                        if ((temp0_1059 & 0x40) != 0)
                                            goto label_1401786a5
                                        
                                        goto label_140176cf2
                                    
                                label_140178691:
                                    rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 5)
                                    bool cond:27_1
                                    
                                    if ((temp0_1059 & 0x40) == 0)
                                    label_140176cf2:
                                        cond:27_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_1401786bd:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_127, 7)
                                    else
                                    label_1401786a5:
                                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_127 = arg6[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 6)
                                        cond:27_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_1401786bd
                                    
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_83 =
                                        _mm_mask_testn_epi16_mask(k0_24, arg21[0].o, zmm1[0].o)
                                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                                    _mm256_mask_sub_epi32(k0_24, arg7, arg6)
                                    zmm30 = _mm256_mask_mov_epi32(k1_83, arg23)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_24, zmm30, zmm25, 5), arg21[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_24, arg6[0].o, zmm1[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:27_1))
                                        zmm0 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), 
                                            zmm30)
                                        zmm30 = _mm256_mask_mov_epi64(arg5, zmm0)
                                    
                                    arg7 = _mm256_mask_add_epi32(arg5, zmm30, zmm30)
                                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, arg26, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_1401786e6
                                        
                                        goto label_140176d6d
                                    
                                    rax_127 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_127)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_1401786e6:
                                        rax_127 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 1)
                                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_140176d7c
                                        
                                        goto label_140178700
                                    
                                label_140176d6d:
                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_140176d7c:
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017871e
                                        
                                        goto label_140176d8a
                                    
                                label_140178700:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_127 = zmm0[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017871e:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_140176d99
                                        
                                        goto label_14017873e
                                    
                                label_140176d8a:
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                    
                                    if ((temp0_1059 & 0x10) == 0)
                                    label_140176d99:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_140178751
                                        
                                        goto label_140176da2
                                    
                                label_14017873e:
                                    rax_127 = arg6[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 4)
                                    
                                    if ((temp0_1059 & 0x20) != 0)
                                    label_140178751:
                                        rax_127 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 5)
                                        
                                        if ((temp0_1059 & 0x40) == 0)
                                            goto label_140176dab
                                        
                                        goto label_140178765
                                    
                                label_140176da2:
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_140178765:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_127 = zmm0[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_127, 6)
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017877d:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_127, 7)
                                    else
                                    label_140176dab:
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017877d
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg31 == 1
                                    
                                    if (not(z_1))
                                        goto label_140176dce
                                
                                zmm0[0].o = arg9[0].o & data_142fc92e0
                                zmm1 = _mm256_mask_mov_ps(
                                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, 
                                        zmm0[0].o, data_142fc92e0, 4), 
                                    arg6)
                        
                        arg15 = _mm256_mask_mov_ps(k3_43, zmm1)
                        arg23 = _mm256_mask_mov_epi64(arg5, zmm30)
                else
                    zmm2[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    arg6[0].o = arg30
                    zx.o(0) f- arg6[0]
                    z_1 = 0f == arg6[0]
                    
                    if (not(0f < arg6[0]))
                        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                        arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                        arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                        k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                        _kortest_mask8_u8(k3_43, k3_43)
                        
                        if (not(z_1))
                            goto label_140175ee6
                    else
                        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                        arg7[0].o = arg6[0].o
                        arg6 = _mm256_mask_add_epi32(arg5, zmm25, zmm0)
                        arg7[0].o f- 1f
                        z_1 = arg7[0].d f== 1f
                        
                        if (not(arg7[0].d f< 1f))
                            arg22 = _mm256_mask_mov_epi32(k4_32, arg6)
                            arg23 = _mm256_mask_mov_epi64(arg5, arg22)
                            arg6[0].o = arg7[0].o
                            arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                            k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                            _kortest_mask8_u8(k3_43, k3_43)
                            
                            if (not(z_1))
                                goto label_140175ee6
                        else
                            zmm0 = _mm256_broadcastss_ps(arg7[0].o)
                            zmm2 = _mm256_cvtepi32_ps(arg6)
                            arg7 = _mm256_mul_ps(zmm0, zmm2)
                            zmm5 = _mm256_round_ps(arg7, 9)
                            zmm0 = _mm256_cvttps_epi32(zmm5)
                            arg22 = _mm256_mask_min_epi32(k4_32, arg6, zmm0)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            z_1 = arg31 == 1
                            
                            if (not(z_1))
                                zmm2 = _mm256_sub_ps(arg7, zmm5)
                            
                            zmm0 =
                                _mm256_mask_sub_epi32(arg5, arg22, _mm256_cmpeq_epi32(zmm0, zmm0))
                            arg23 = _mm256_mask_min_epi32(k4_32, zmm0, arg6)
                            arg6[0].o = arg30
                            arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                            k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                            _kortest_mask8_u8(k3_43, k3_43)
                            
                            if (not(z_1))
                                goto label_140175ee6
            
            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
            zmm25 = _mm256_mask_cvtepu32_epi64(arg5, zmm0[0].o)
            arg24 = _mm256_mask_cvtepu32_epi64(arg5, arg24[0].o)
            zmm0 = _mm256_mask_mullo_epi32(arg5, arg22, arg13)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
            arg26 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
            zmm0 = _mm256_mask_add_epi64(arg5, arg26, arg24)
            zmm1 = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
            zmm26 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
            arg25 = _mm256_mask_add_epi64(arg5, zmm0, arg20)
            int64_t k3_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 1)
            _kortest_mask8_u8(k3_44, k3_44)
            
            if (not(z_1))
                zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                uint64_t k4_35 = _mm256_mask_testn_epi32_mask(k3_44, arg18, zmm0)
                _kortest_mask8_u8(k4_35, k4_35)
                
                if (not(z_1))
                    zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg24), 
                        arg26)
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm5 = _mm256_add_epi64(zmm0, arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    uint64_t k5_44 = _kshiftri_mask8(k4_35, 4)
                    int64_t k1_87 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                    int64_t k1_88
                    float temp0_1336[0x4]
                    temp0_1336, k1_88 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_87, *(arg4 + arg6[0].q))
                    arg21[0].o = temp0_1336
                    int64_t k1_89 = __kmovq_maskmskw_masku64_avx512(k5_44)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k1_90
                    float temp0_1338[0x4]
                    temp0_1338, k1_90 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_89, *(arg4 + zmm5[0].q))
                    arg6[0].o = temp0_1338
                    zmm5 = __vpbroadcastq_ymmqq_memq(8)
                    zmm30 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                    zmm5 = _mm256_add_epi64(arg7, zmm5)
                    int64_t k1_91 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
                    int64_t k1_92
                    float temp0_1343[0x4]
                    temp0_1343, k1_92 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_91, *(arg4 + zmm5[0].q))
                    arg28[0].o = temp0_1343
                    int64_t k1_93 = __kmovq_maskmskw_masku64_avx512(k5_44)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int64_t k1_94
                    float temp0_1345[0x4]
                    temp0_1345, k1_94 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_93, 
                        *(arg4 + zmm30[0].q))
                    zmm5[0].o = temp0_1345
                    arg9[0].o = zx.o(0)
                    arg6 = _mm256_insertf32x4(arg5, arg21, arg6[0].o, 1)
                    zmm5 = _mm256_insertf32x4(arg5, arg28, zmm5[0].o, 1)
                    arg21 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg21)
                    arg7 = _mm256_mask_add_epi64(arg5, arg7, arg21)
                    int64_t k1_95 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                    int64_t k1_96
                    float temp0_1352[0x4]
                    temp0_1352, k1_96 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_95, *(arg4 + arg7[0]))
                    arg21[0].o = temp0_1352
                    int64_t k5_45
                    float temp0_1353[0x4]
                    temp0_1353, k5_45 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_44, *(arg4 + zmm0[0].q))
                    arg9[0].o = temp0_1353
                    zmm0 = _mm256_insertf32x4(arg5, arg21, arg9[0].o, 1)
                    var_580.32 = _mm256_mask_storeu_ps(k4_35, arg6)
                    var_560.32 = _mm256_mask_storeu_ps(k4_35, zmm5)
                    var_540.32 = _mm256_mask_storeu_ps(k4_35, zmm0)
                
                int64_t k3_45 = _mm256_mask_test_epi32_mask(k3_44, zmm1, zmm1)
                _kortest_mask8_u8(k3_45, k3_45)
                
                if (not(z_1))
                    zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                    int64_t k4_36 = _mm256_movepi32_mask(zmm0)
                    zmm1[0].o = zx.o(0)
                    int64_t k1_97 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_45, zmm1, zmm0)
                    _kortest_mask8_u8(k1_97, k1_97)
                    
                    if (z_1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg25)
                        zmm1 = _mm256_mask_mov_epi64(arg5, zmm26)
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg25)
                        arg6 = _mm256_mask_add_epi64(k1_97, arg25, zmm0)
                        int64_t k5_46 = _kshiftri_mask8(k1_97, 4)
                        _mm256_mask_mov_epi64(arg5, zmm26)
                        zmm1 = _mm256_mask_add_epi64(k5_46, zmm26, zmm0)
                        arg7 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                        zmm5 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg24), arg26)
                        arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                        zmm0 = _mm256_add_epi64(zmm5, zmm0)
                        int64_t k5_47 = _kshiftri_mask8(k1_97, 4)
                        zmm5[0].o = zx.o(0)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        int64_t k1_98
                        float temp0_1371[0x4]
                        temp0_1371, k1_98 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_97, 
                            *(arg4 + zmm0[0].q))
                        arg21[0].o = temp0_1371
                        int64_t k5_48
                        float temp0_1372[0x4]
                        temp0_1372, k5_48 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_47, 
                            *(arg4 + arg7[0]))
                        zmm5[0].o = temp0_1372
                        arg7 = _mm256_insertf32x4(arg5, arg21, zmm5[0].o, 1)
                    
                    var_580.32 = _mm256_mask_storeu_ps(k3_45, _mm256_mask_mov_ps(k4_36, arg7))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    int64_t k1_99 = _mm256_mask_test_epi32_mask(k3_45, arg18, zmm0)
                    _kortest_mask8_u8(k1_99, k1_99)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg21 = _mm256_mask_add_epi64(k1_99, arg6, zmm0)
                        int64_t k4_37 = _kshiftri_mask8(k1_99, 4)
                        int64_t k5_49 = _kshiftri_mask8(k1_99, 4)
                        int32_t temp15_1 = rax_127.d
                        int32_t temp16_1 = rax_127.d
                        rax_127 = 0
                        z_1 = temp15_1 == temp16_1
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_100
                        float temp0_1384[0x4]
                        temp0_1384, k1_100 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_99, *arg6[0].q)
                        zmm5[0].o = temp0_1384
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k5_50
                        float temp0_1386[0x4]
                        temp0_1386, k5_50 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_49, *zmm1[0].q)
                        arg6[0].o = temp0_1386
                        zmm1 = _mm256_mask_add_epi64(k4_37, zmm1, zmm0)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg21)
                    
                    var_560.32 = _mm256_mask_storeu_ps(k3_45, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm5))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    int64_t k1_102 = _mm256_mask_test_epi32_mask(k3_45, arg18, zmm0)
                    _kortest_mask8_u8(k1_102, k1_102)
                    
                    if (not(z_1))
                        int64_t k4_38 = _kshiftri_mask8(k1_102, 4)
                        zmm0[0].o = zx.o(0)
                        int32_t temp19_1 = rax_127.d
                        int32_t temp20_1 = rax_127.d
                        rax_127 = 0
                        z_1 = temp19_1 == temp20_1
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_103
                        float temp0_1395[0x4]
                        temp0_1395, k1_103 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_102, *arg6[0].q)
                        zmm5[0].o = temp0_1395
                        int64_t k4_39
                        float temp0_1396[0x4]
                        temp0_1396, k4_39 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_38, *zmm1[0].q)
                        zmm0[0].o = temp0_1396
                        zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                    
                    var_540.32 = _mm256_mask_storeu_ps(k3_45, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1))
            
            zmm0 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, arg10, zmm0, 4)
            int64_t k1_105 = _mm256_cmp_epi32_mask(k7_13, arg10, zmm0, 4)
            _kortest_mask8_u8(k1_105, k1_105)
            
            if (not(z_1))
                int64_t k1_106 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 3)
                _kortest_mask8_u8(k1_106, k1_106)
                
                if (not(z_1))
                    var_6a0[0] = _store_mask32(k1_106)
                    zmm0[0].o = zx.o(0)
                    float var_5c0_3[0x8] = zmm0
                    uint32_t var_5e0_3[0x8] = zmm0
                    uint32_t var_600_3[0x8] = zmm0
                    uint32_t var_620_3[0x8] = zmm0
                    uint32_t var_640_3[0x8] = zmm0
                    uint32_t var_660_3[0x8] = zmm0
                    int64_t k4_40 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), arg10, 3)
                    uint64_t k5_51 = _kand_mask8(k4_40, k7_13)
                    _kortest_mask8_u8(k5_51, k5_51)
                    zmm1 = _mm256_mask_mov_epi64(arg5, arg20)
                    arg6 = _mm256_mask_mov_epi64(arg5, zmm20)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k6_9)
                        int64_t k6_10 = _kshiftri_mask8(k5_51, 4)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_10, zmm20, zmm0)
                        _mm256_mask_mov_epi64(arg5, arg20)
                        arg7 = _mm256_mask_add_epi64(k5_51, arg20, zmm0)
                        uint64_t k3_46 = __kmovq_maskmskw_masku64_avx512(k7_13)
                        uint64_t k7_14 = _kshiftri_mask8(k5_51, 4)
                        int32_t temp8_1 = rax_127.d
                        int32_t temp9_1 = rax_127.d
                        rax_127 = 0
                        z_1 = temp8_1 == temp9_1
                        int64_t k1_108 = __kmovq_maskmskw_masku64_avx512(k5_51)
                        zmm0[0].o = zx.o(0)
                        int64_t k1_109
                        float temp0_1410[0x4]
                        temp0_1410, k1_109 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_108, *arg20[0])
                        zmm0[0].o = temp0_1410
                        zmm1[0].o = zx.o(0)
                        int64_t k1_111
                        float temp0_1411[0x4]
                        temp0_1411, k1_111 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k7_14), *zmm20[0])
                        zmm1[0].o = temp0_1411
                        var_600_3 =
                            _mm256_mask_storeu_ps(k4_40, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        _mm256_mask_mov_epi64(arg5, arg20)
                        zmm1 = _mm256_mask_add_epi64(k5_51, arg20, zmm0)
                        zmm5[0].o = zx.o(0)
                        int64_t k5_52
                        float temp0_1417[0x4]
                        temp0_1417, k5_52 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_51, *arg7[0])
                        zmm5[0].o = temp0_1417
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k7_15
                        float temp0_1419[0x4]
                        temp0_1419, k7_15 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_14, *arg6[0].q)
                        arg7[0].o = temp0_1419
                        k7_13 = __kmovq_maskmskw_masku64_avx512(k3_46)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_10, zmm20, zmm0)
                        k6_9 = __kmovq_maskmskw_masku64_avx512(k2_36)
                        var_660_3 =
                            _mm256_mask_storeu_ps(k4_40, _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                    
                    int64_t k4_41 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                    int64_t k5_53 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_41, arg18, 0x2000000)
                    uint64_t k2_37 = _kand_mask8(k5_53, k7_13)
                    _kortest_mask8_u8(k2_37, k2_37)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        var_6e0[0] = _store_mask32(k7_13)
                        int64_t k7_16 = _kshiftri_mask8(k2_37, 4)
                        arg7 = _mm256_mask_add_epi64(k7_16, arg6, zmm0)
                        zmm5 = _mm256_mask_add_epi64(k2_37, zmm1, zmm0)
                        uint64_t k1_112 = _kshiftri_mask8(k2_37, 4)
                        int32_t temp11_1 = rax_127.d
                        int32_t temp12_1 = rax_127.d
                        rax_127 = 0
                        z_1 = temp11_1 == temp12_1
                        zmm0[0].o = zx.o(0)
                        uint64_t k3_47 = __kmovq_maskmskw_masku64_avx512(k6_9)
                        int64_t k6_12
                        float temp0_1428[0x4]
                        temp0_1428, k6_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k2_37), *zmm1[0].q)
                        zmm0[0].o = temp0_1428
                        arg9[0].o = zx.o(0)
                        int64_t k6_14
                        float temp0_1429[0x4]
                        temp0_1429, k6_14 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k1_112), *arg6[0].q)
                        arg9[0].o = temp0_1429
                        k6_9 = __kmovq_maskmskw_masku64_avx512(k3_47)
                        var_5e0_3 =
                            _mm256_mask_storeu_ps(k5_53, _mm256_insertf128_ps(zmm0, arg9[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        zmm1 = _mm256_mask_add_epi64(k2_37, zmm1, zmm0)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        int64_t k2_38
                        float temp0_1435[0x4]
                        temp0_1435, k2_38 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_37, *zmm5[0].q)
                        arg21[0].o = temp0_1435
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_113
                        float temp0_1437[0x4]
                        temp0_1437, k1_113 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_112, *arg7[0])
                        zmm5[0].o = temp0_1437
                        arg6 = _mm256_mask_add_epi64(k7_16, arg6, zmm0)
                        k7_13 = _load_mask32(var_6e0[0])
                        var_640_3 = _mm256_mask_storeu_ps(k5_53, 
                            _mm256_insertf32x4(arg5, arg21, zmm5[0].o, 1))
                    
                    uint64_t k3_48 = _load_mask32(var_6a0[0])
                    int64_t k4_42 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_41, arg18, 0x4000000)
                    uint64_t k5_54 = _kand_mask8(k4_42, k7_13)
                    _kortest_mask8_u8(k5_54, k5_54)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k1_114 = _kshiftri_mask8(k5_54, 4)
                        int32_t temp13_1 = rax_127.d
                        int32_t temp14_1 = rax_127.d
                        rax_127 = 0
                        z_1 = temp13_1 == temp14_1
                        int64_t k2_39 = __kmovq_maskmskw_masku64_avx512(k5_54)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k2_40
                        float temp0_1443[0x4]
                        temp0_1443, k2_40 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_39, *zmm1[0].q)
                        arg7[0].o = temp0_1443
                        int64_t k2_41 = __kmovq_maskmskw_masku64_avx512(k1_114)
                        zmm5[0].o = zx.o(0)
                        int64_t k2_42
                        float temp0_1444[0x4]
                        temp0_1444, k2_42 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_41, *arg6[0].q)
                        zmm5[0].o = temp0_1444
                        arg6 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_54, 4), arg6, zmm0)
                        zmm1 = _mm256_mask_add_epi64(k5_54, zmm1, zmm0)
                        zmm0 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        var_5c0_3 = _mm256_mask_storeu_ps(k4_42, zmm0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        int64_t k5_55
                        float temp0_1450[0x4]
                        temp0_1450, k5_55 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_54, *zmm1[0].q)
                        zmm0[0].o = temp0_1450
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int64_t k1_115
                        float temp0_1452[0x4]
                        temp0_1452, k1_115 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_114, *arg6[0].q)
                        zmm1[0].o = temp0_1452
                        var_620_3 =
                            _mm256_mask_storeu_ps(k4_42, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    
                    zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    arg6 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg24), 
                        arg26)
                    zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                    zmm1 = _mm256_add_epi64(arg6, zmm1)
                    int64_t k1_116 = _kshiftri_mask8(k3_48, 4)
                    arg6[0].o = zx.o(0)
                    int64_t k2_45
                    uint32_t temp0_1462[0x4]
                    temp0_1462, k2_45 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_48), *(arg4 + zmm1[0].q))
                    arg6[0].o = temp0_1462
                    zmm1[0].o = zx.o(0)
                    int64_t k1_117
                    uint32_t temp0_1463[0x4]
                    temp0_1463, k1_117 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_116, 
                        *(arg4 + zmm0[0].q))
                    zmm1[0].o = temp0_1463
                    zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                    zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                    arg6 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff), 
                            0xfffffe01)), 
                        0x43ff8000)
                    zmm5 = var_640_3
                    arg21 = _mm256_mask_load_ps(arg5, var_620_3)
                    arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_3, arg6, var_600_3)
                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                    zmm30 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_mask_div_ps(arg5, zmm1, zmm30), 
                        zmm5, var_5e0_3)
                    zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                arg6)), 
                            zmm30), 
                        arg5, arg21, var_5c0_3)
                    var_580.32 = _mm256_mask_storeu_ps(k3_48, arg7)
                    var_560.32 = _mm256_mask_storeu_ps(k3_48, zmm1)
                    var_540.32 = _mm256_mask_storeu_ps(k3_48, zmm0)
                
                int64_t k3_49 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                _ktest_mask8_u8(k3_49, k7_13)
                
                if (not(z_1))
                    int64_t k4_43 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 2)
                    _kortest_mask8_u8(k4_43, k4_43)
                    
                    if (not(z_1))
                        zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k5_56 = _mm256_movepi32_mask(zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_119 =
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_43, zmm1, zmm0)
                        _kortest_mask8_u8(k1_119, k1_119)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg25 = _mm256_mask_add_epi64(k1_119, arg25, zmm0)
                            int64_t k2_46 = _kshiftri_mask8(k1_119, 4)
                            zmm26 = _mm256_mask_add_epi64(k2_46, zmm26, zmm0)
                            zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg24)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg26)
                            zmm0 = _mm256_mask_add_epi64(k2_46, _mm256_add_epi64(zmm0, zmm2), arg6)
                            zmm1 = _mm256_mask_add_epi64(k1_119, zmm1, arg6)
                            int64_t r11_5 = zmm1[0].q
                            int64_t r10_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t r14_2 = zmm1[0].q
                            int64_t rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_21 = zmm0[0].q
                            int64_t rsi_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_23 = zmm0[0].q
                            rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zx.o(*(arg4 + r11_5))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_2), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_2), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_12), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_21), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_12), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_23), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_127), 7)
                            zmm1 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                        
                        var_580.32 = _mm256_mask_storeu_ps(k4_43, _mm256_mask_mov_ps(k5_56, zmm1))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k5_57 = _mm256_mask_test_epi32_mask(k4_43, arg18, zmm0)
                        _kortest_mask8_u8(k5_57, k5_57)
                        
                        if (not(z_1))
                            char temp0_1514 = _cvtmask32_u32(k5_57)
                            
                            if ((temp0_1514 & 1) == 0)
                                if ((temp0_1514 & 2) != 0)
                                    goto label_140177f35
                                
                                goto label_140177624
                            
                            rax_127 = arg25[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_127)
                            
                            if ((temp0_1514 & 2) != 0)
                            label_140177f35:
                                rax_127 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 1)
                                
                                if ((temp0_1514 & 4) == 0)
                                    goto label_14017762e
                                
                                goto label_140177f4b
                            
                        label_140177624:
                            
                            if ((temp0_1514 & 4) == 0)
                            label_14017762e:
                                
                                if ((temp0_1514 & 8) != 0)
                                    goto label_140177f66
                                
                                goto label_140177638
                            
                        label_140177f4b:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                            rax_127 = zmm0[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 2)
                            
                            if ((temp0_1514 & 8) != 0)
                            label_140177f66:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 3)
                                
                                if ((temp0_1514 & 0x10) == 0)
                                    goto label_140177642
                                
                                goto label_140177f82
                            
                        label_140177638:
                            
                            if ((temp0_1514 & 0x10) != 0)
                            label_140177f82:
                                rax_127 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 4)
                                
                                if ((temp0_1514 & 0x20) != 0)
                                label_140177f97:
                                    rax_127 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 5)
                                    
                                    if ((temp0_1514 & 0x40) == 0)
                                        goto label_140177656
                                    
                                    goto label_140177fad
                            else
                            label_140177642:
                                
                                if ((temp0_1514 & 0x20) != 0)
                                    goto label_140177f97
                            
                            int64_t k1_120
                            
                            if ((temp0_1514 & 0x40) != 0)
                            label_140177fad:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_127 = zmm0[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 6)
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_120 = _kshiftri_mask8(k5_57, 4)
                                z_1 = temp0_1514 == 0
                                
                                if (temp0_1514 s< 0)
                                label_140177fd5:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 7)
                            else
                            label_140177656:
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_120 = _kshiftri_mask8(k5_57, 4)
                                z_1 = temp0_1514 == 0
                                
                                if (temp0_1514 s< 0)
                                    goto label_140177fd5
                            
                            arg25 = _mm256_mask_add_epi64(k5_57, arg25, arg6)
                            zmm26 = _mm256_mask_add_epi64(k1_120, zmm26, arg6)
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        var_560.32 = _mm256_mask_storeu_ps(k4_43, 
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_122 = _mm256_mask_test_epi32_mask(k4_43, arg18, zmm0)
                        _kortest_mask8_u8(k1_122, k1_122)
                        
                        if (not(z_1))
                            char temp0_1525 = _cvtmask32_u32(k1_122)
                            
                            if ((temp0_1525 & 1) == 0)
                                if ((temp0_1525 & 2) != 0)
                                    goto label_140178001
                                
                                goto label_1401776de
                            
                            rax_127 = arg25[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_127)
                            
                            if ((temp0_1525 & 2) != 0)
                            label_140178001:
                                rax_127 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg25[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 1)
                                
                                if ((temp0_1525 & 4) == 0)
                                    goto label_1401776e8
                                
                                goto label_140178017
                            
                        label_1401776de:
                            
                            if ((temp0_1525 & 4) == 0)
                            label_1401776e8:
                                
                                if ((temp0_1525 & 8) != 0)
                                    goto label_140178032
                                
                                goto label_1401776f2
                            
                        label_140178017:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                            rax_127 = zmm0[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 2)
                            
                            if ((temp0_1525 & 8) != 0)
                            label_140178032:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 3)
                                
                                if ((temp0_1525 & 0x10) == 0)
                                    goto label_1401776fc
                                
                                goto label_14017804e
                            
                        label_1401776f2:
                            
                            if ((temp0_1525 & 0x10) != 0)
                            label_14017804e:
                                rax_127 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 4)
                                
                                if ((temp0_1525 & 0x20) != 0)
                                label_140178063:
                                    rax_127 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 5)
                                    
                                    if ((temp0_1525 & 0x40) == 0)
                                        goto label_140177710
                                    
                                    goto label_140178079
                            else
                            label_1401776fc:
                                
                                if ((temp0_1525 & 0x20) != 0)
                                    goto label_140178063
                            
                            if ((temp0_1525 & 0x40) != 0)
                            label_140178079:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_127 = zmm0[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 6)
                                z_1 = temp0_1525 == 0
                                
                                if (temp0_1525 s< 0)
                                label_140178092:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_127 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_127, 7)
                            else
                            label_140177710:
                                z_1 = temp0_1525 == 0
                                
                                if (temp0_1525 s< 0)
                                    goto label_140178092
                            
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                        var_540.32 = _mm256_mask_storeu_ps(k4_43, zmm0)
                    
                    int64_t k1_126 = _kand_mask8(
                        _kxor_mask8(k3_49, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2)), 
                        k7_13)
                    _kortest_mask8_u8(k1_126, k1_126)
                    
                    if (not(z_1))
                        int64_t k3_50 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 6)
                        _kortest_mask8_u8(k3_50, k3_50)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                        
                        int64_t k1_127 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                            k1_126, arg10, 6, 4)
                        _kortest_mask8_u8(k1_127, k1_127)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k1_127, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k1_127, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k1_127, zmm0)
            
            int64_t k2_47 = _mm256_cmp_epi32_mask(k7_13, arg22, arg23, 4)
            _kortest_mask8_u8(k2_47, k2_47)
            
            if (not(z_1))
                zmm0 = _mm256_mask_mullo_epi32(arg5, arg23, arg13)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg23 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
                zmm0 = _mm256_mask_add_epi64(arg5, arg23, arg24)
                zmm1 = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
                arg21 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
                arg22 = _mm256_mask_add_epi64(arg5, zmm0, arg20)
                int64_t k3_51 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_47, arg10, 1)
                _kortest_mask8_u8(k3_51, k3_51)
                uint32_t var_4a0[0x8]
                float var_480[0x8]
                int32_t var_460[0x8]
                
                if (not(z_1))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
                    zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    uint64_t k4_44 = _mm256_mask_testn_epi32_mask(k3_51, arg18, zmm0)
                    _kortest_mask8_u8(k4_44, k4_44)
                    
                    if (not(z_1))
                        zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg24), arg23)
                        zmm0 = _mm256_add_epi64(zmm0, zmm2)
                        zmm5 = _mm256_add_epi64(zmm0, arg6)
                        arg6 = _mm256_add_epi64(arg7, arg6)
                        uint64_t k5_58 = _kshiftri_mask8(k4_44, 4)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_129
                        float temp0_1555[0x4]
                        temp0_1555, k1_129 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k4_44), *(arg4 + arg6[0].q))
                        zmm26[0].o = temp0_1555
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k1_131
                        float temp0_1557[0x4]
                        temp0_1557, k1_131 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k5_58), *(arg4 + zmm5[0].q))
                        arg6[0].o = temp0_1557
                        zmm5 = __vpbroadcastq_ymmqq_memq(8)
                        arg25 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                        zmm5 = _mm256_add_epi64(arg7, zmm5)
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        int64_t k1_133
                        float temp0_1562[0x4]
                        temp0_1562, k1_133 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k4_44), *(arg4 + zmm5[0].q))
                        arg26[0].o = temp0_1562
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_135
                        float temp0_1564[0x4]
                        temp0_1564, k1_135 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k5_58), *(arg4 + arg25[0].q))
                        zmm5[0].o = temp0_1564
                        arg9[0].o = zx.o(0)
                        arg6 = _mm256_insertf32x4(arg5, zmm26, arg6[0].o, 1)
                        zmm5 = _mm256_insertf32x4(arg5, arg26, zmm5[0].o, 1)
                        zmm26 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm26)
                        arg7 = _mm256_mask_add_epi64(arg5, arg7, zmm26)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_137
                        float temp0_1571[0x4]
                        temp0_1571, k1_137 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k4_44), *(arg4 + arg7[0]))
                        zmm26[0].o = temp0_1571
                        int64_t k5_59
                        float temp0_1572[0x4]
                        temp0_1572, k5_59 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_58, 
                            *(arg4 + zmm0[0].q))
                        arg9[0].o = temp0_1572
                        zmm0 = _mm256_insertf32x4(arg5, zmm26, arg9[0].o, 1)
                        var_4a0 = _mm256_mask_storeu_ps(k4_44, arg6)
                        var_480 = _mm256_mask_storeu_ps(k4_44, zmm5)
                        var_460 = _mm256_mask_storeu_ps(k4_44, zmm0)
                    
                    int64_t k3_52 = _mm256_mask_test_epi32_mask(k3_51, zmm1, zmm1)
                    _kortest_mask8_u8(k3_52, k3_52)
                    
                    if (not(z_1))
                        zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k4_45 = _mm256_movepi32_mask(zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_138 =
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_52, zmm1, zmm0)
                        _kortest_mask8_u8(k1_138, k1_138)
                        
                        if (z_1)
                            arg6 = _mm256_mask_mov_epi64(arg5, arg22)
                            zmm1 = _mm256_mask_mov_epi64(arg5, arg21)
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg22)
                            arg6 = _mm256_mask_add_epi64(k1_138, arg22, zmm0)
                            int64_t k5_60 = _kshiftri_mask8(k1_138, 4)
                            _mm256_mask_mov_epi64(arg5, arg21)
                            zmm1 = _mm256_mask_add_epi64(k5_60, arg21, zmm0)
                            arg7 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                            zmm5 = _mm256_mask_add_epi64(arg5, 
                                _mm256_mask_add_epi64(arg5, zmm17, arg24), arg23)
                            arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                            zmm0 = _mm256_add_epi64(zmm5, zmm0)
                            int64_t k5_61 = _kshiftri_mask8(k1_138, 4)
                            zmm5[0].o = zx.o(0)
                            zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                            int64_t k1_139
                            float temp0_1590[0x4]
                            temp0_1590, k1_139 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k1_138, *(arg4 + zmm0[0].q))
                            zmm26[0].o = temp0_1590
                            int64_t k5_62
                            float temp0_1591[0x4]
                            temp0_1591, k5_62 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_61, *(arg4 + arg7[0]))
                            zmm5[0].o = temp0_1591
                            arg7 = _mm256_insertf32x4(arg5, zmm26, zmm5[0].o, 1)
                        
                        var_4a0 = _mm256_mask_storeu_ps(k3_52, _mm256_mask_mov_ps(k4_45, arg7))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_140 = _mm256_mask_test_epi32_mask(k3_52, arg18, zmm0)
                        _kortest_mask8_u8(k1_140, k1_140)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg6)
                            zmm26 = _mm256_mask_add_epi64(k1_140, arg6, zmm0)
                            int64_t k4_46 = _kshiftri_mask8(k1_140, 4)
                            int64_t k5_63 = _kshiftri_mask8(k1_140, 4)
                            int32_t temp27_1 = rax_127.d
                            int32_t temp28_1 = rax_127.d
                            rax_127 = 0
                            z_1 = temp27_1 == temp28_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_141
                            float temp0_1603[0x4]
                            temp0_1603, k1_141 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_140, *arg6[0].q)
                            zmm5[0].o = temp0_1603
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k5_64
                            float temp0_1605[0x4]
                            temp0_1605, k5_64 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_63, *zmm1[0].q)
                            arg6[0].o = temp0_1605
                            zmm1 = _mm256_mask_add_epi64(k4_46, zmm1, zmm0)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                            arg6 = _mm256_mask_mov_epi64(arg5, zmm26)
                        
                        var_480 = _mm256_mask_storeu_ps(k3_52, 
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_143 = _mm256_mask_test_epi32_mask(k3_52, arg18, zmm0)
                        _kortest_mask8_u8(k1_143, k1_143)
                        
                        if (not(z_1))
                            int64_t k4_47 = _kshiftri_mask8(k1_143, 4)
                            zmm0[0].o = zx.o(0)
                            int32_t temp29_1 = rax_127.d
                            int32_t temp30_1 = rax_127.d
                            rax_127 = 0
                            z_1 = temp29_1 == temp30_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_144
                            float temp0_1614[0x4]
                            temp0_1614, k1_144 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_143, *arg6[0].q)
                            zmm5[0].o = temp0_1614
                            int64_t k4_48
                            float temp0_1615[0x4]
                            temp0_1615, k4_48 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_47, *zmm1[0].q)
                            zmm0[0].o = temp0_1615
                            zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1)
                        var_460 = _mm256_mask_storeu_ps(k3_52, zmm0)
                
                _ktest_mask8_u8(k2_47, arg5)
                
                if (not(z_1))
                    int64_t k1_146 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_47, arg10, 3)
                    _kortest_mask8_u8(k1_146, k1_146)
                    
                    if (not(z_1))
                        var_6e0[0] = _store_mask32(k1_146)
                        var_6a0[0].w = _store_mask16(k6_9)
                        zmm0[0].o = zx.o(0)
                        float var_5c0_4[0x8] = zmm0
                        uint32_t var_5e0_4[0x8] = zmm0
                        uint32_t var_600_4[0x8] = zmm0
                        uint32_t var_620_4[0x8] = zmm0
                        uint32_t var_640_4[0x8] = zmm0
                        uint32_t var_660_4[0x8] = zmm0
                        int64_t k4_49 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                            _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), arg10, 3)
                        uint64_t k5_65 = _kand_mask8(k2_47, k4_49)
                        _kortest_mask8_u8(k5_65, k5_65)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k6_15 = _kshiftri_mask8(k5_65, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k6_15, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, arg20)
                            arg6 = _mm256_mask_add_epi64(k5_65, arg20, zmm0)
                            uint64_t k1_148 = _kshiftri_mask8(k5_65, 4)
                            int32_t temp17_1 = rax_127.d
                            int32_t temp18_1 = rax_127.d
                            rax_127 = 0
                            z_1 = temp17_1 == temp18_1
                            int64_t k7_17 = __kmovq_maskmskw_masku64_avx512(k5_65)
                            zmm0[0].o = zx.o(0)
                            int64_t k7_18
                            float temp0_1627[0x4]
                            temp0_1627, k7_18 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_17, *arg20[0])
                            zmm0[0].o = temp0_1627
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k7_20
                            float temp0_1629[0x4]
                            temp0_1629, k7_20 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_148), *zmm20[0])
                            arg7[0].o = temp0_1629
                            var_600_4 = _mm256_mask_storeu_ps(k4_49, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            arg20 = _mm256_mask_add_epi64(k5_65, arg20, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k5_66
                            float temp0_1635[0x4]
                            temp0_1635, k5_66 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_65, *arg6[0].q)
                            arg7[0].o = temp0_1635
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_149
                            float temp0_1637[0x4]
                            temp0_1637, k1_149 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_148, *zmm1[0].q)
                            arg6[0].o = temp0_1637
                            zmm20 = _mm256_mask_add_epi64(k6_15, zmm20, zmm0)
                            var_660_4 = _mm256_mask_storeu_ps(k4_49, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        int64_t k4_50 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                        int64_t k5_67 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_50, 
                            arg18, 0x2000000)
                        uint64_t k6_16 = _kand_mask8(k2_47, k5_67)
                        _kortest_mask8_u8(k6_16, k6_16)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k7_21 = _kshiftri_mask8(k6_16, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k7_21, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, arg20)
                            arg6 = _mm256_mask_add_epi64(k6_16, arg20, zmm0)
                            uint64_t k1_150 = _kshiftri_mask8(k6_16, 4)
                            int32_t temp23_1 = rax_127.d
                            int32_t temp24_1 = rax_127.d
                            rax_127 = 0
                            z_1 = temp23_1 == temp24_1
                            int64_t k3_53 = __kmovq_maskmskw_masku64_avx512(k6_16)
                            zmm0[0].o = zx.o(0)
                            int64_t k3_54
                            float temp0_1646[0x4]
                            temp0_1646, k3_54 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_53, *arg20[0])
                            zmm0[0].o = temp0_1646
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k3_56
                            float temp0_1648[0x4]
                            temp0_1648, k3_56 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_150), *zmm20[0])
                            arg7[0].o = temp0_1648
                            var_5e0_4 = _mm256_mask_storeu_ps(k5_67, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            arg20 = _mm256_mask_add_epi64(k6_16, arg20, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k6_17
                            float temp0_1654[0x4]
                            temp0_1654, k6_17 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_16, *arg6[0].q)
                            arg7[0].o = temp0_1654
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_151
                            float temp0_1656[0x4]
                            temp0_1656, k1_151 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_150, *zmm1[0].q)
                            arg6[0].o = temp0_1656
                            zmm20 = _mm256_mask_add_epi64(k7_21, zmm20, zmm0)
                            var_640_4 = _mm256_mask_storeu_ps(k5_67, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        k6_9 = _load_mask16(var_6a0[0].w)
                        int64_t k4_51 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_50, 
                            arg18, 0x4000000)
                        uint64_t k5_68 = _kand_mask8(k2_47, k4_51)
                        _kortest_mask8_u8(k5_68, k5_68)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            uint64_t k1_152 = _kshiftri_mask8(k5_68, 4)
                            z_1 = rax_127.d == rax_127.d
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k3_58
                            float temp0_1662[0x4]
                            temp0_1662, k3_58 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k5_68), *arg20[0])
                            zmm1[0].o = temp0_1662
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k3_60
                            float temp0_1664[0x4]
                            temp0_1664, k3_60 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_152), *zmm20[0])
                            arg6[0].o = temp0_1664
                            zmm20 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_68, 4), zmm20, zmm0)
                            arg20 = _mm256_mask_add_epi64(k5_68, arg20, zmm0)
                            zmm0 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                            var_5c0_4 = _mm256_mask_storeu_ps(k4_51, zmm0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k5_69
                            float temp0_1670[0x4]
                            temp0_1670, k5_69 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_68, *arg20[0])
                            zmm0[0].o = temp0_1670
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k1_153
                            float temp0_1672[0x4]
                            temp0_1672, k1_153 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_152, *zmm20[0])
                            zmm1[0].o = temp0_1672
                            var_620_4 = _mm256_mask_storeu_ps(k4_51, 
                                _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        
                        zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg24), arg23)
                        zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                        zmm1 = _mm256_add_epi64(arg6, zmm1)
                        uint64_t k4_52 = _load_mask32(var_6e0[0])
                        int64_t k1_154 = _kshiftri_mask8(k4_52, 4)
                        int64_t k3_62 = __kmovq_maskmskw_masku64_avx512(k4_52)
                        arg6[0].o = zx.o(0)
                        int64_t k3_63
                        uint32_t temp0_1682[0x4]
                        temp0_1682, k3_63 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_62, 
                            *(arg4 + zmm1[0].q))
                        arg6[0].o = temp0_1682
                        zmm1[0].o = zx.o(0)
                        int64_t k1_155
                        uint32_t temp0_1683[0x4]
                        temp0_1683, k1_155 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                            k1_154, *(arg4 + zmm0[0].q))
                        zmm1[0].o = temp0_1683
                        zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                        zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                        arg6 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000)
                        arg20 = _mm256_mask_load_ps(arg5, var_620_4)
                        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_4, arg6, var_600_4)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_mask_div_ps(arg5, zmm1, zmm20), var_640_4, var_5e0_4)
                        zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                    arg6)), 
                                zmm20), 
                            arg5, arg20, var_5c0_4)
                        var_4a0 = _mm256_mask_storeu_ps(k4_52, arg7)
                        var_480 = _mm256_mask_storeu_ps(k4_52, zmm1)
                        var_460 = _mm256_mask_storeu_ps(k4_52, zmm0)
                    
                    arg5 = _kxor_mask8(
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                    _ktest_mask8_u8(k2_47, arg5)
                    
                    if (not(z_1))
                        int64_t k3_64 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_47, arg10, 2)
                        _kortest_mask8_u8(k3_64, k3_64)
                        
                        if (not(z_1))
                            zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                            int64_t k4_53 = _mm256_movepi32_mask(zmm0)
                            zmm1[0].o = zx.o(0)
                            int64_t k1_157 =
                                __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_64, zmm1, zmm0)
                            _kortest_mask8_u8(k1_157, k1_157)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(2)
                                arg22 = _mm256_mask_add_epi64(k1_157, arg22, zmm0)
                                int64_t k5_70 = _kshiftri_mask8(k1_157, 4)
                                arg21 = _mm256_mask_add_epi64(k5_70, arg21, zmm0)
                                zmm0 = _mm256_mask_add_epi64(arg5, arg19, zmm25)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg24)
                                arg6 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg23)
                                zmm0 =
                                    _mm256_mask_add_epi64(k5_70, _mm256_add_epi64(zmm0, zmm2), arg6)
                                zmm1 = _mm256_mask_add_epi64(k1_157, zmm1, arg6)
                                int64_t r11_6 = zmm1[0].q
                                int64_t r10_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t r14_3 = zmm1[0].q
                                int64_t rbx_15 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rdi_24 = zmm0[0].q
                                int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t rcx_24 = zmm0[0].q
                                int64_t rax_189 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(arg4 + r11_6))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_3), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_3), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_15), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_24), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_13), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_24), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_189), 7)
                                zmm1 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                            
                            var_4a0 = _mm256_mask_storeu_ps(k3_64, _mm256_mask_mov_ps(k4_53, zmm1))
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                            int64_t k4_54 = _mm256_mask_test_epi32_mask(k3_64, arg18, zmm0)
                            _kortest_mask8_u8(k4_54, k4_54)
                            
                            if (not(z_1))
                                char temp0_1759 = _cvtmask32_u32(k4_54)
                                
                                if ((temp0_1759 & 1) == 0)
                                    if ((temp0_1759 & 2) != 0)
                                        goto label_1401784b2
                                    
                                    goto label_1401780f9
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg22[0].o)
                                
                                if ((temp0_1759 & 2) != 0)
                                label_1401784b2:
                                    uint64_t rax_195 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_195, 1)
                                    
                                    if ((temp0_1759 & 4) == 0)
                                        goto label_140178103
                                    
                                    goto label_1401784c8
                                
                            label_1401780f9:
                                
                                if ((temp0_1759 & 4) == 0)
                                label_140178103:
                                    
                                    if ((temp0_1759 & 8) != 0)
                                        goto label_1401784e3
                                    
                                    goto label_14017810d
                                
                            label_1401784c8:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_1759 & 8) != 0)
                                label_1401784e3:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    int64_t rax_197 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_197, 3)
                                    
                                    if ((temp0_1759 & 0x10) == 0)
                                        goto label_140178117
                                    
                                    goto label_140178505
                                
                            label_14017810d:
                                
                                if ((temp0_1759 & 0x10) != 0)
                                label_140178505:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg21[0].o, 4)
                                    
                                    if ((temp0_1759 & 0x20) != 0)
                                    label_140178514:
                                        uint64_t rax_199 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg21[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_199, 5)
                                        
                                        if ((temp0_1759 & 0x40) == 0)
                                            goto label_14017812b
                                        
                                        goto label_14017852a
                                else
                                label_140178117:
                                    
                                    if ((temp0_1759 & 0x20) != 0)
                                        goto label_140178514
                                
                                int64_t k1_158
                                
                                if ((temp0_1759 & 0x40) != 0)
                                label_14017852a:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_158 = _kshiftri_mask8(k4_54, 4)
                                    z_1 = temp0_1759 == 0
                                    
                                    if (temp0_1759 s< 0)
                                    label_140178552:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                        int64_t rax_201 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_201, 7)
                                else
                                label_14017812b:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_158 = _kshiftri_mask8(k4_54, 4)
                                    z_1 = temp0_1759 == 0
                                    
                                    if (temp0_1759 s< 0)
                                        goto label_140178552
                                
                                arg22 = _mm256_mask_add_epi64(k4_54, arg22, arg6)
                                arg21 = _mm256_mask_add_epi64(k1_158, arg21, arg6)
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            var_480 = _mm256_mask_storeu_ps(k3_64, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), 
                                    zmm2))
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                            int64_t k1_160 = _mm256_mask_test_epi32_mask(k3_64, arg18, zmm0)
                            _kortest_mask8_u8(k1_160, k1_160)
                            
                            if (not(z_1))
                                char temp0_1770 = _cvtmask32_u32(k1_160)
                                
                                if ((temp0_1770 & 1) == 0)
                                    if ((temp0_1770 & 2) != 0)
                                        goto label_14017857e
                                    
                                    goto label_1401781b3
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg22[0].o)
                                
                                if ((temp0_1770 & 2) != 0)
                                label_14017857e:
                                    uint64_t rax_203 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg22[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_203, 1)
                                    
                                    if ((temp0_1770 & 4) == 0)
                                        goto label_1401781bd
                                    
                                    goto label_140178594
                                
                            label_1401781b3:
                                
                                if ((temp0_1770 & 4) == 0)
                                label_1401781bd:
                                    
                                    if ((temp0_1770 & 8) != 0)
                                        goto label_1401785af
                                    
                                    goto label_1401781c7
                                
                            label_140178594:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_1770 & 8) != 0)
                                label_1401785af:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                    int64_t rax_205 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_205, 3)
                                    
                                    if ((temp0_1770 & 0x10) == 0)
                                        goto label_1401781d1
                                    
                                    goto label_1401785d1
                                
                            label_1401781c7:
                                
                                if ((temp0_1770 & 0x10) != 0)
                                label_1401785d1:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg21[0].o, 4)
                                    
                                    if ((temp0_1770 & 0x20) != 0)
                                    label_1401785e0:
                                        uint64_t rax_207 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg21[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_207, 5)
                                        
                                        if ((temp0_1770 & 0x40) == 0)
                                            goto label_1401781e5
                                        
                                        goto label_1401785f6
                                else
                                label_1401781d1:
                                    
                                    if ((temp0_1770 & 0x20) != 0)
                                        goto label_1401785e0
                                
                                if ((temp0_1770 & 0x40) != 0)
                                label_1401785f6:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    z_1 = temp0_1770 == 0
                                    
                                    if (temp0_1770 s< 0)
                                    label_14017860f:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                                        int64_t rax_209 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_209, 7)
                                else
                                label_1401781e5:
                                    z_1 = temp0_1770 == 0
                                    
                                    if (temp0_1770 s< 0)
                                        goto label_14017860f
                                
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            zmm0 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                            var_460 = _mm256_mask_storeu_ps(k3_64, zmm0)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2))
                        int64_t k1_163 = _kand_mask8(k2_47, arg5)
                        _kortest_mask8_u8(k1_163, k1_163)
                        
                        if (not(z_1))
                            int64_t k3_65 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_47, arg10, 6)
                            _kortest_mask8_u8(k3_65, k3_65)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_4a0 = _mm256_mask_storeu_ps(k3_65, zmm0)
                                var_480 = _mm256_mask_storeu_ps(k3_65, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k3_65, zmm0)
                            
                            int64_t k1_164 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k1_163, arg10, 6, 4)
                            _kortest_mask8_u8(k1_164, k1_164)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_4a0 = _mm256_mask_storeu_ps(k1_164, zmm0)
                                var_480 = _mm256_mask_storeu_ps(k1_164, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k1_164, zmm0)
                
                arg6 = var_580.32
                arg7 = var_560.32
                zmm5 = var_540.32
                zmm0 = _mm256_sub_ps(var_4a0, arg6)
                zmm1 = _mm256_sub_ps(var_480, arg7)
                zmm2 = _mm256_sub_ps(var_460, zmm5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg15, arg6)
                zmm1 = _mm256_fmadd_ps(zmm1, arg15, arg7)
                zmm2 = _mm256_fmadd_ps(zmm2, arg15, zmm5)
                var_580.32 = _mm256_mask_storeu_ps(k2_47, zmm0)
                var_560.32 = _mm256_mask_storeu_ps(k2_47, zmm1)
                var_540.32 = _mm256_mask_storeu_ps(k2_47, zmm2)
        
        int64_t k1_165 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_9, arg27, arg8)
        _kortest_mask8_u8(k1_165, k1_165)
        
        if (not(z_1))
            zmm0[0].o = zx.o(0)
            var_580.32 = _mm256_mask_storeu_ps(k1_165, zmm0)
            var_560.32 = _mm256_mask_storeu_ps(k1_165, zmm0)
            var_540.32 = _mm256_mask_storeu_ps(k1_165, zmm0)
        
        zmm1[0].o = var_580
        int128_t var_570
        zmm2[0].o = var_570
        arg6[0].o = var_560
        int128_t var_550
        arg7[0].o = var_550
        zmm5[0].o = var_540
        int128_t var_530
        arg9[0].o = var_530
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, zmm5[0].o, arg18[0].o)
        zmm5[0].o = _mm_mask_unpackhi_ps(arg5, zmm5[0].o, arg18[0].o)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        zmm1[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        arg6[0].o = arg8[0] | zmm0[0].q << 0x40
        int128_t var_200 = arg6[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_1f0_1 = zmm0[0].o
        zmm0[0].o = zmm1[0].q | zmm5[0].q << 0x40
        int128_t var_1e0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_1d0_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, arg9[0].o, arg18[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(arg5, arg9[0].o, arg18[0].o)
        arg6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        arg7[0].o = arg6[0].q | zmm0[0].q << 0x40
        int128_t var_1c0_1 = arg7[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        int128_t var_1b0_1 = zmm0[0].o
        zmm0[0].o = zmm2[0].q | zmm1[0].q << 0x40
        int128_t var_1a0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        int128_t var_190_1 = zmm0[0].o
        uint64_t i = zx.q(i_2)
        
        do
            uint64_t rcx_25 = _tzcnt_u64(i)
            uint32_t var_120[0x8] = arg11
            result = sx.q(var_120[zx.q(rcx_25.d) & 7]) * 0x30
            zmm0[0].o = (&var_200)[rcx_25]
            *(arg1 + result + 0x10) = zmm0[0].o
            i &= rol.q(-2, rcx_25.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    uint32_t var_140_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    float var_2c0_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int64_t rbx
    rbx.b = zmm0[0].o f>= zmm2[0]
    rbx.b = neg.b(rbx.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rbx.d)
    int128_t var_2d0_1 = zmm0[0].o
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(arg29 - 1)
    int32_t rcx_2 = arg29 - 2
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rbx_2 = int.d(zmm0[0]) s>> 0x1f
    int32_t rbx_3 = rbx_2 & not.d(rbx_2)
    bool z = rcx_2 == rbx_3
    
    if (not(z) && rcx_2 - rbx_3 s< 0 == add_overflow(rcx_2, neg.d(rbx_3)))
        rcx_2 = rbx_3
    
    zmm1 = _mm256_mask_set1_epi32(arg5, rcx_2)
    var_6a0 = zmm1
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    uint64_t var_160_1[0x4] = zmm0
    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    arg9[0].o = data_142fc92e0
    r10 = 0
    
    do
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r10), 3), 
            data_143442140)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_2
        int128_t temp0_51
        temp0_51, k1_2 = _mm256_mmask_i32gather_epi32(k1_1, *(arg2 + zmm2[0].q))
        arg20 = temp0_51
        zmm2 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 4)
        int64_t k1_4
        int128_t temp0_53
        temp0_53, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + zmm2[0].q))
        arg6 = temp0_53
        zmm2 = _mm256_slli_epi32(arg6, 3)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
        int64_t k1_6
        int128_t temp0_56
        temp0_56, k1_6 = _mm256_mmask_i32gather_epi32(k1_5, *(arg3 + zmm2[0].q))
        arg22 = temp0_56
        uint64_t k6_1 = _mm256_cmp_epi32_mask(arg5, arg22, arg10, 4)
        _kortest_mask8_u8(k6_1, k6_1)
        int128_t var_440
        int128_t var_420
        int128_t var_400
        int64_t k1_44
        
        if (z)
        label_1401759ea:
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg22, arg10)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
            label_1401759f6:
                var_440.32 = _mm256_mask_storeu_ps(k1_44, arg19)
                var_420.32 = _mm256_mask_storeu_ps(k1_44, arg19)
                var_400.32 = _mm256_mask_storeu_ps(k1_44, arg19)
        else
            int64_t k2_2
            int128_t temp0_57
            temp0_57, k2_2 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_1), 
                *(arg4 + arg22[0].q))
            arg6 = temp0_57
            arg25 = _mm256_mask_srli_epi32(k6_1, arg6, 0x1c)
            zmm0 = _mm256_mask_slli_epi32(arg5, arg25, 2)
            int64_t k2_4
            int128_t temp0_60
            temp0_60, k2_4 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_1), 
                *(&data_143442890 + zmm0[0].q))
            zmm2 = temp0_60
            zmm25 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, 
                _mm256_srli_epi32(arg6, 0x18), 0xf)
            zmm26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm25, 7)
            zmm0 = _mm256_mask_slli_epi32(arg5, arg25, 3)
            zmm5 = __vpbroadcastd_ymmqq_memd(3)
            zmm0 = _mm256_mask_or_epi32(k6_1, zmm26, zmm0)
            int64_t r12_1 = sx.q(zmm0[0])
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
            int64_t rax_25 = sx.q(zmm0[0])
            int64_t rcx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = zx.o(*(r12_1 + &data_1434428b0))
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r11_1 + &data_1434428b0), 1)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_2 + &data_1434428b0), 2)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_5 + &data_1434428b0), 3)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rax_25 + &data_1434428b0), 4)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rcx_5 + &data_1434428b0), 5)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r8_1 + &data_1434428b0), 6)
            arg8[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r13_2 + &data_1434428b0), 7)
            int64_t k2_6 =
                _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg25, zmm5, 4), arg22, arg10, 4)
            _kortest_mask8_u8(k2_6, k2_6)
            arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
            
            if (not(z))
                arg18 = _mm256_mask_cvtepu8_epi32(k2_6, arg8[0].o)
            
            arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
            int64_t k2_7 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_1, arg25, zmm5)
            _kortest_mask8_u8(k2_7, k2_7)
            uint64_t rax_8 = 1
            
            if (not(z))
                arg18 = _mm256_mask_set1_epi32(k2_7, 1)
            
            zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg22[0].o)
            zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
            arg28 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, arg6, data_143442840)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            arg7[0].o = zx.o(0)
            
            if (not(z))
                arg7 = _mm256_mask_slli_epi32(k2_7, _mm256_cvtepu8_epi32(arg8[0]), 2)
            
            zmm5 = var_140_1
            zmm30 = _mm256_mask_add_epi64(arg5, zmm5, zmm1)
            zmm20 = _mm256_mask_add_epi64(arg5, zmm5, zmm0)
            arg15 = _mm256_mask_mullo_epi32(k6_1, arg18, zmm2)
            arg12 = _mm256_mask_mov_epi32(k6_1, arg7)
            int64_t k2_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k6_1, arg28, arg6)
            _kortest_mask8_u8(k2_8, k2_8)
            uint64_t var_5a0_1[0x4] = _mm256_mask_store_epi64(arg5, arg28)
            uint64_t var_6b0[0x2]
            
            if (z)
                zmm2[0].o = zx.o(0)
                var_6e0 = zmm2
                arg14[0].o = zx.o(0)
                arg11[0].o = zx.o(0)
            else
                arg6 = __vpbroadcastd_ymmqq_memd(8)
                zmm2 = _mm256_mask_and_epi32(arg5, zmm25, arg6)
                int64_t k3_1 = _mm256_mask_testn_epi32_mask(k2_8, zmm25, arg6)
                _kortest_mask8_u8(k3_1, k3_1)
                int64_t k2_9
                
                if (z)
                    arg14[0].o = zx.o(0)
                    arg11[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    var_6e0 = arg6
                    k2_9 = _mm256_mask_test_epi32_mask(k2_8, zmm2, zmm2)
                    _kortest_mask8_u8(k2_9, k2_9)
                    
                    if (not(z))
                    label_1401730a1:
                        int64_t k1_7 =
                            __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg28, 2, 1)
                        zmm2[0].o = _mm_movm_epi16(k2_9)
                        arg6[0].o = var_2d0_1
                        arg8[0].o = __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_7, 
                            arg6[0].o, data_142fc92e0)
                        arg6[0].o = arg8[0].o & zmm2[0].o
                        int64_t k0 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, arg9[0].o)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (not(z))
                            int64_t k1_8 = _mm_mask_testn_epi16_mask(k0, arg6[0].o, arg9[0].o)
                            arg14 = _mm256_mask_mov_epi32(k1_8, arg14)
                            arg11 = _mm256_mask_mov_epi32(k1_8, arg11)
                        
                        arg6[0].o = arg8[0].o ^ arg9[0].o
                        arg18[0].o = _mm_mask_and_epi64(k0, zmm2[0].o, arg6[0].o)
                        arg5 = _mm_mask_test_epi16_mask(k0, arg18[0].o, arg9[0].o)
                        zmm2[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z)
                            arg28 = _mm256_mask_mov_epi64(arg5, arg11)
                            _mm256_mask_load_ps(arg5, var_6e0)
                        else
                            zmm17 = _mm256_mask_add_epi32(arg5, arg28, arg10)
                            arg6[0].o = arg30
                            arg6[0].o f- 1f
                            z = arg6[0] == 1f
                            
                            if (not(arg6[0] < 1f))
                                int64_t k1_11 =
                                    _mm_mask_testn_epi16_mask(arg5, arg18[0].o, arg9[0].o)
                                arg14 = _mm256_mask_blend_epi32(k1_11, zmm17, arg14)
                                arg28 =
                                    _mm256_mask_mov_epi64(arg5, _mm256_mask_mov_epi32(k1_11, arg11))
                                _mm256_mask_load_ps(arg5, var_6e0)
                            else
                                zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                arg6 = _mm256_cvtepi32_epi64(arg12[0].o)
                                arg7 = _mm256_mask_mullo_epi32(arg5, arg15, arg28)
                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                arg6 = _mm256_mask_add_epi64(arg5, zmm20, arg6)
                                zmm2 = _mm256_mask_add_epi64(arg5, zmm30, zmm2)
                                arg24 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 3)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                arg6 =
                                    _mm256_add_epi64(arg7, _mm256_mask_add_epi64(arg5, arg6, arg24))
                                zmm2 =
                                    _mm256_add_epi64(zmm5, _mm256_mask_add_epi64(arg5, zmm2, arg24))
                                arg7 = __vpbroadcastq_ymmqq_memq(-4)
                                arg16 = zmm2 & arg7
                                arg17 = arg6 & arg7
                                char temp0_130 = _cvtmask32_u32(arg5)
                                arg24 = _mm256_mask_min_epi32(arg5, 
                                    _mm256_mask_max_epi32(arg5, 
                                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                            _mm256_mask_cvtepi32_ps(arg5, zmm17), var_2c0_1)), 
                                        arg19), 
                                    zmm17)
                                rax_8 = zx.q(arg29)
                                uint32_t var_320_1[0x8] = arg12
                                uint32_t var_340_1[0x8] = arg15
                                var_6b0 = arg8[0].o
                                
                                if (rax_8.d s< 0x100)
                                    zmm2 = _mm256_add_epi64(arg17, 
                                        _mm256_mask_cvtepi32_epi64(arg5, arg24[0].o))
                                    int128_t var_3c0
                                    
                                    if ((temp0_130 & 1) != 0)
                                        rax_8 = zx.q(*zmm2[0].q)
                                        zmm5[0].o = var_3c0
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 0)
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 1)
                                    else
                                        zmm5[0].o = var_3c0
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 1)
                                    
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                    
                                    if ((temp0_130 & 4) == 0)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_1401738e2
                                        
                                        goto label_140173616
                                    
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = zx.q(*arg7[0])
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_1401738e2:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_add_epi64(arg16, arg6)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_140173624
                                        
                                        goto label_140173909
                                    
                                label_140173616:
                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                    
                                    if ((temp0_130 & 0x10) != 0)
                                    label_140173909:
                                        rax_8 = zx.q(*zmm2[0].q)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                        label_140173921:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_130 & 0x40) == 0)
                                                goto label_140173638
                                            
                                            goto label_140173933
                                    else
                                    label_140173624:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_140173921
                                    
                                    bool cond:13_1
                                    bool cond:17_1
                                    bool cond:22_1
                                    bool cond:24_1
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_140173933:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 6)
                                        cond:13_1 = temp0_130 == 0
                                        cond:17_1 = temp0_130 == 0
                                        cond:22_1 = temp0_130 == 0
                                        cond:24_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                        label_14017394e:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 7)
                                    else
                                    label_140173638:
                                        cond:13_1 = temp0_130 == 0
                                        cond:17_1 = temp0_130 == 0
                                        cond:22_1 = temp0_130 == 0
                                        cond:24_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                            goto label_14017394e
                                    
                                    arg12[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    zmm2[0].o = zmm5[0].o & arg12[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    int64_t k3_3 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm2, var_6a0, 2)
                                    arg6[0].o = _mm_movm_epi16(k3_3)
                                    zmm2[0].o = _mm_mask_and_epi64(arg5, arg18[0].o, arg6[0].o)
                                    int64_t k0_5 =
                                        _mm_mask_test_epi16_mask(arg5, zmm2[0].o, arg12[0].o)
                                    _kortest_mask8_u8(k0_5, k0_5)
                                    var_3c0 = zmm5[0].o
                                    int128_t var_4e0_2 = arg6[0].o
                                    
                                    if (cond:13_1)
                                        arg8 = _mm256_mask_mov_epi64(k0_5, arg24)
                                        zmm2 = _mm256_mask_mov_epi64(k0_5, arg24)
                                    else
                                        zmm5 = _mm256_mask_blend_epi32(k3_3, arg24, zmm17)
                                        arg13 = _mm256_mask_sub_epi32(k0_5, arg24, arg10)
                                        int64_t k0_6 = _mm256_cmp_epi32_mask(k3_3, arg13, zmm17, 2)
                                        arg15[0].o = _mm_movm_epi16(k0_6)
                                        arg6[0].o = _mm_mask_and_epi64(k0_6, arg18[0].o, arg15[0].o)
                                        k0_5 = _mm_mask_test_epi16_mask(k0_6, arg6[0].o, arg9[0].o)
                                        _kortest_mask8_u8(k0_5, k0_5)
                                        
                                        if (cond:17_1)
                                            arg8 = _mm256_mask_mov_epi64(k0_5, arg24)
                                            zmm2 = zmm5
                                        else
                                            char rcx_7 = _cvtmask32_u32(k0_5)
                                            arg8 = _mm256_mask_mov_epi64(k0_5, arg24)
                                            bool cond:34_1
                                            
                                            do
                                                arg28 = _mm256_mask_mov_epi64(k0_5, arg13)
                                                zmm2 = _mm256_add_epi64(arg17, 
                                                    _mm256_mask_cvtepi32_epi64(k0_5, arg28[0].o))
                                                int64_t k0_7 = _mm_mask_test_epi16_mask(k0_5, 
                                                    arg6[0].o, arg9[0].o)
                                                char temp0_241 = _cvtmask32_u32(k0_7)
                                                
                                                if ((temp0_241 & 1) == 0)
                                                    if ((temp0_241 & 2) != 0)
                                                        goto label_1401736ef
                                                    
                                                    goto label_1401737f1
                                                
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*zmm2[0].q), 0)
                                                
                                                if ((temp0_241 & 2) != 0)
                                                label_1401736ef:
                                                    uint16_t rax_40[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rax_40, 1)
                                                    arg6[0].o =
                                                        _mm256_extracti32x4_epi32(k0_7, arg28, 1)
                                                    
                                                    if ((temp0_241 & 4) == 0)
                                                        goto label_140173802
                                                    
                                                    goto label_14017370a
                                                
                                            label_1401737f1:
                                                arg6[0].o =
                                                    _mm256_extracti32x4_epi32(k0_7, arg28, 1)
                                                
                                                if ((temp0_241 & 4) == 0)
                                                label_140173802:
                                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                    
                                                    if ((temp0_241 & 8) != 0)
                                                        goto label_14017372e
                                                    
                                                    goto label_140173811
                                                
                                            label_14017370a:
                                                arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*arg7[0]), 2)
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_241 & 8) != 0)
                                                label_14017372e:
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    uint16_t rax_44[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rax_44, 3)
                                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                                    
                                                    if ((temp0_241 & 0x10) == 0)
                                                        goto label_14017381f
                                                    
                                                    goto label_14017375a
                                                
                                            label_140173811:
                                                zmm2 = _mm256_add_epi64(arg16, arg6)
                                                
                                                if ((temp0_241 & 0x10) == 0)
                                                label_14017381f:
                                                    
                                                    if ((temp0_241 & 0x20) != 0)
                                                        goto label_140173771
                                                    
                                                    goto label_140173829
                                                
                                            label_14017375a:
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*zmm2[0].q), 4)
                                                
                                                if ((temp0_241 & 0x20) != 0)
                                                label_140173771:
                                                    uint16_t rax_48[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rax_48, 5)
                                                    
                                                    if ((temp0_241 & 0x40) == 0)
                                                        goto label_140173833
                                                    
                                                    goto label_140173785
                                                
                                            label_140173829:
                                                
                                                if ((temp0_241 & 0x40) != 0)
                                                label_140173785:
                                                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, zx.d(*arg6[0].q), 6)
                                                    
                                                    if (temp0_241 s< 0)
                                                    label_1401737a3:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(zmm2, 1)
                                                        uint16_t rax_52[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1))
                                                        arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg26[0].o, rax_52, 7)
                                                else
                                                label_140173833:
                                                    
                                                    if (temp0_241 s< 0)
                                                        goto label_1401737a3
                                                
                                                zmm2[0].o =
                                                    _mm_mask_and_epi64(k0_7, arg26[0].o, arg12[0].o)
                                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_7, zmm2, var_6a0), 
                                                    arg15[0].o)
                                                arg6[0].o = zx.o(0)
                                                int64_t k4_2 = _mm_mask_testn_epi16_mask(k0_7, 
                                                    zmm2[0].o, arg12[0].o)
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_7, zmm2[0].o, arg18[0].o)
                                                int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, 
                                                    arg7[0].o, arg12[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_8))
                                                cond:22_1 = rcx_7 == rax_8.b
                                                cond:24_1 = rcx_7 == rax_8.b
                                                cond:34_1 = rcx_7 != rax_8.b
                                                
                                                if (rcx_7 != rax_8.b)
                                                    arg6[0].o = zmm2[0].o ^ arg15[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_8, arg24)
                                                zmm2 = _mm256_mask_mov_epi32(k4_2, zmm5)
                                                arg13 = _mm256_mask_sub_epi32(k0_8, arg28, arg10)
                                                arg15[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_8, arg13, zmm17, 2), 
                                                    arg6[0].o)
                                                arg6[0].o =
                                                    _mm_mask_and_epi64(k0_8, arg15[0].o, arg18[0].o)
                                                k0_5 = _mm_mask_test_epi16_mask(k0_8, arg6[0].o, 
                                                    arg12[0].o)
                                                _kortest_mask8_u8(k0_5, k0_5)
                                                rcx_7 = _cvtmask32_u32(k0_5)
                                                arg24 = _mm256_mask_mov_epi64(k0_5, arg28)
                                                zmm5 = zmm2
                                            while (cond:34_1)
                                    
                                    arg6[0].o = arg9[0].o ^ var_4e0_2
                                    arg7[0].o = _mm_mask_and_epi64(k0_5, arg18[0].o, arg6[0].o)
                                    int64_t k0_12 =
                                        _mm_mask_test_epi16_mask(k0_5, arg7[0].o, arg9[0].o)
                                    _kortest_mask8_u8(k0_12, k0_12)
                                    
                                    if (not(cond:22_1))
                                        arg15 = _mm256_mask_mov_epi32(k3_3, zmm2)
                                        arg28 = _mm256_mask_add_epi32(k0_12, arg8, arg10)
                                        zmm5[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_12, arg28, arg19), 
                                            arg6[0].o)
                                        arg6[0].o = _mm_mask_and_epi64(k0_12, zmm5[0].o, arg18[0].o)
                                        k0_12 =
                                            _mm_mask_test_epi16_mask(k0_12, arg6[0].o, arg9[0].o)
                                        _kortest_mask8_u8(k0_12, k0_12)
                                        
                                        if (cond:24_1)
                                            zmm2 = arg15
                                        else
                                            char rcx_8 = _cvtmask32_u32(k0_12)
                                            bool cond:36_1
                                            
                                            do
                                                zmm2 = _mm256_add_epi64(arg17, 
                                                    _mm256_mask_cvtepi32_epi64(k0_12, arg28[0].o))
                                                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, 
                                                    arg6[0].o, arg9[0].o)
                                                char temp0_335 = _cvtmask32_u32(k0_13)
                                                
                                                if ((temp0_335 & 1) == 0)
                                                    if ((temp0_335 & 2) != 0)
                                                        goto label_140173c4f
                                                    
                                                    goto label_140173d4b
                                                
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*zmm2[0].q), 0)
                                                
                                                if ((temp0_335 & 2) != 0)
                                                label_140173c4f:
                                                    uint16_t rax_72[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rax_72, 1)
                                                    arg6[0].o =
                                                        _mm256_extracti32x4_epi32(k0_13, arg28, 1)
                                                    
                                                    if ((temp0_335 & 4) == 0)
                                                        goto label_140173d5c
                                                    
                                                    goto label_140173c6a
                                                
                                            label_140173d4b:
                                                arg6[0].o =
                                                    _mm256_extracti32x4_epi32(k0_13, arg28, 1)
                                                
                                                if ((temp0_335 & 4) == 0)
                                                label_140173d5c:
                                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                    
                                                    if ((temp0_335 & 8) != 0)
                                                        goto label_140173c8e
                                                    
                                                    goto label_140173d6b
                                                
                                            label_140173c6a:
                                                arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*arg7[0]), 2)
                                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                
                                                if ((temp0_335 & 8) != 0)
                                                label_140173c8e:
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    uint16_t rax_76[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rax_76, 3)
                                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                                    
                                                    if ((temp0_335 & 0x10) == 0)
                                                        goto label_140173d79
                                                    
                                                    goto label_140173cba
                                                
                                            label_140173d6b:
                                                zmm2 = _mm256_add_epi64(arg16, arg6)
                                                
                                                if ((temp0_335 & 0x10) == 0)
                                                label_140173d79:
                                                    
                                                    if ((temp0_335 & 0x20) != 0)
                                                        goto label_140173cd1
                                                    
                                                    goto label_140173d83
                                                
                                            label_140173cba:
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*zmm2[0].q), 4)
                                                
                                                if ((temp0_335 & 0x20) != 0)
                                                label_140173cd1:
                                                    uint16_t rax_80[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rax_80, 5)
                                                    
                                                    if ((temp0_335 & 0x40) == 0)
                                                        goto label_140173d8d
                                                    
                                                    goto label_140173ce5
                                                
                                            label_140173d83:
                                                
                                                if ((temp0_335 & 0x40) != 0)
                                                label_140173ce5:
                                                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, zx.d(*arg6[0].q), 6)
                                                    
                                                    if (temp0_335 s< 0)
                                                    label_140173d03:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(zmm2, 1)
                                                        uint16_t rax_84[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1))
                                                        arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg27[0].o, rax_84, 7)
                                                else
                                                label_140173d8d:
                                                    
                                                    if (temp0_335 s< 0)
                                                        goto label_140173d03
                                                
                                                zmm2[0].o = _mm_mask_and_epi64(k0_13, arg27[0].o, 
                                                    arg12[0].o)
                                                zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_13, zmm2, var_6a0, 2), 
                                                    zmm5[0].o)
                                                arg6[0].o = zx.o(0)
                                                int64_t k3_5 = _mm_mask_testn_epi16_mask(k0_13, 
                                                    zmm2[0].o, arg12[0].o)
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_13, zmm2[0].o, arg18[0].o)
                                                int64_t k0_14 = _mm_mask_test_epi16_mask(k0_13, 
                                                    arg7[0].o, arg12[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_14))
                                                cond:36_1 = rcx_8 != rax_8.b
                                                
                                                if (rcx_8 != rax_8.b)
                                                    arg6[0].o = zmm2[0].o ^ zmm5[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_14, arg28)
                                                arg28 = _mm256_mask_add_epi32(k0_14, arg28, arg10)
                                                zmm2 = _mm256_mask_mov_epi32(k3_5, arg15)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_14, arg28, arg19), 
                                                    arg6[0].o)
                                                arg6[0].o =
                                                    _mm_mask_and_epi64(k0_14, zmm5[0].o, arg18[0].o)
                                                k0_12 = _mm_mask_test_epi16_mask(k0_14, arg6[0].o, 
                                                    arg12[0].o)
                                                _kortest_mask8_u8(k0_12, k0_12)
                                                rcx_8 = _cvtmask32_u32(k0_12)
                                                arg15 = zmm2
                                            while (cond:36_1)
                                    
                                    arg14 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_12, arg18[0].o, arg9[0].o), 
                                        zmm2, arg14)
                                    arg6 =
                                        _mm256_add_epi64(arg17, _mm256_cvtepi32_epi64(arg14[0].o))
                                    int128_t var_510
                                    
                                    if ((temp0_130 & 1) != 0)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg8[0].o = var_510
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 0)
                                        arg15 = var_340_1
                                        arg24[0].o = _mm_mask_load_epi64(k0_12, var_6b0)
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 1)
                                    else
                                        arg15 = var_340_1
                                        arg8[0].o = var_510
                                        arg24[0].o = _mm_mask_load_epi64(k0_12, var_6b0)
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 1)
                                    
                                    zmm5[0].o = _mm256_extracti128_si256(arg14, 1)
                                    
                                    if ((temp0_130 & 4) == 0)
                                        zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_140172c13
                                        
                                        goto label_1401741c5
                                    
                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_8 = zx.q(*arg7[0])
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 2)
                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_140172c13:
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 3)
                                        arg6 = _mm256_add_epi64(arg16, zmm5)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_1401741d3
                                        
                                        goto label_140172c3a
                                    
                                label_1401741c5:
                                    arg6 = _mm256_add_epi64(arg16, zmm5)
                                    
                                    if ((temp0_130 & 0x10) != 0)
                                    label_140172c3a:
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                        label_140172c52:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_130 & 0x40) == 0)
                                                goto label_1401741e7
                                            
                                            goto label_140172c64
                                    else
                                    label_1401741d3:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_140172c52
                                    
                                    int128_t var_3e0
                                    bool cond:30_1
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_140172c64:
                                        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_8 = zx.q(*arg7[0])
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 6)
                                        arg7[0].o = var_3e0
                                        cond:30_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                        label_140172c88:
                                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 7)
                                    else
                                    label_1401741e7:
                                        arg7[0].o = var_3e0
                                        cond:30_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                            goto label_140172c88
                                    
                                    var_510 = arg8[0].o
                                    int64_t k1_25 =
                                        _mm_mask_testn_epi16_mask(k0_12, arg18[0].o, arg12[0].o)
                                    _mm256_mask_sub_epi32(k0_12, zmm2, arg10)
                                    arg28 = _mm256_mask_mov_epi32(k1_25, arg11)
                                    zmm2[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_12, 
                                            arg28, zmm17), 
                                        arg18[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_12, zmm2[0].o, arg12[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:30_1))
                                        arg28 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm2[0].o, 
                                                    arg12[0].o), 
                                                arg28))
                                    
                                    _mm256_mask_load_ps(arg5, var_6e0)
                                    zmm2 = _mm256_add_epi64(arg17, 
                                        _mm256_mask_cvtepi32_epi64(arg5, arg28[0].o))
                                    
                                    if ((temp0_130 & 1) == 0)
                                        if ((temp0_130 & 2) != 0)
                                            goto label_140172cbe
                                        
                                        goto label_140174263
                                    
                                    rax_8 = zx.q(*zmm2[0].q)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 0)
                                    
                                    if ((temp0_130 & 2) != 0)
                                    label_140172cbe:
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                                        
                                        if ((temp0_130 & 4) == 0)
                                            goto label_140174274
                                        
                                        goto label_140172cd7
                                    
                                label_140174263:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                                    
                                    if ((temp0_130 & 4) == 0)
                                    label_140174274:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_140172d01
                                        
                                        goto label_140174283
                                    
                                label_140172cd7:
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg7[0].o = zmm5[0].o
                                    rax_8 = zx.q(*arg7[0])
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_140172d01:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_add_epi64(arg16, arg6)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_140174291
                                        
                                        goto label_140172d28
                                    
                                label_140174283:
                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                    
                                    if ((temp0_130 & 0x10) != 0)
                                    label_140172d28:
                                        rax_8 = zx.q(*zmm2[0].q)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                        label_140172d40:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_130 & 0x40) == 0)
                                                goto label_1401742a5
                                            
                                            goto label_140172d52
                                    else
                                    label_140174291:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_140172d40
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_140172d52:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 6)
                                        arg6[0].o = arg12[0].o & var_510
                                        
                                        if (temp0_130 s< 0)
                                        label_140172d76:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 7)
                                    else
                                    label_1401742a5:
                                        arg6[0].o = arg12[0].o & var_510
                                        
                                        if (temp0_130 s< 0)
                                            goto label_140172d76
                                    
                                    arg12 = var_320_1
                                    zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    var_3e0 = arg7[0].o
                                    arg6[0].o = arg7[0].o & arg9[0].o
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    arg7[0].o = zx.o(0)
                                    z = arg31 == 1
                                    
                                    if (not(z))
                                    label_1401742e7:
                                        arg6 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(arg6, zmm2), 1)
                                        zmm2 = _mm256_sub_ps(var_160_1, _mm256_cvtepi32_ps(zmm2))
                                        arg6 = _mm256_cvtepi32_ps(arg6)
                                        arg7 = _mm256_div_ps(zmm2, arg6)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, arg24, arg24)
                                    zmm2 = _mm256_add_epi64(arg17, _mm256_cvtepi32_epi64(arg6[0].o))
                                    int128_t var_2e0
                                    zmm5[0].o = var_2e0
                                    
                                    if ((temp0_130 & 1) == 0)
                                        if ((temp0_130 & 2) != 0)
                                            goto label_140173521
                                        
                                        goto label_1401731fb
                                    
                                    rax_8 = zmm2[0].q
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 0)
                                    
                                    if ((temp0_130 & 2) != 0)
                                    label_140173521:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_130 & 4) == 0)
                                            goto label_14017320a
                                        
                                        goto label_14017353b
                                    
                                label_1401731fb:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_130 & 4) == 0)
                                    label_14017320a:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_140173559
                                        
                                        goto label_140173218
                                    
                                label_14017353b:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0]
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_140173559:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 3)
                                        zmm2 = _mm256_add_epi64(arg16, arg6)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_140173225
                                        
                                        goto label_140173577
                                    
                                label_140173218:
                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                    
                                    if ((temp0_130 & 0x10) != 0)
                                    label_140173577:
                                        rax_8 = zmm2[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 4)
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                        label_14017358a:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_130 & 0x40) == 0)
                                                goto label_140173237
                                            
                                            goto label_14017359e
                                    else
                                    label_140173225:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_14017358a
                                    
                                    bool cond:14_1
                                    bool cond:18_1
                                    bool cond:23_1
                                    bool cond:25_1
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_14017359e:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 6)
                                        cond:14_1 = temp0_130 == 0
                                        cond:18_1 = temp0_130 == 0
                                        cond:23_1 = temp0_130 == 0
                                        cond:25_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                        label_1401735b6:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140173237:
                                        cond:14_1 = temp0_130 == 0
                                        cond:18_1 = temp0_130 == 0
                                        cond:23_1 = temp0_130 == 0
                                        cond:25_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                            goto label_1401735b6
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm5[0].o)
                                    int64_t k3_2 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm2, var_6a0, 2)
                                    arg7[0].o = _mm_movm_epi16(k3_2)
                                    zmm2[0].o = _mm_mask_and_epi64(arg5, arg18[0].o, arg7[0].o)
                                    int64_t k0_1 =
                                        _mm_mask_test_epi16_mask(arg5, zmm2[0].o, arg9[0].o)
                                    _kortest_mask8_u8(k0_1, k0_1)
                                    var_2e0 = zmm5[0].o
                                    int128_t var_4e0_1 = arg7[0].o
                                    
                                    if (cond:14_1)
                                        arg12 = _mm256_mask_mov_epi64(k0_1, arg24)
                                    else
                                        arg15 = _mm256_mask_blend_epi32(k3_2, arg24, zmm17)
                                        arg6 = _mm256_mask_sub_epi32(k0_1, arg24, arg10)
                                        int64_t k0_2 = _mm256_cmp_epi32_mask(k3_2, arg6, zmm17, 2)
                                        zmm5[0].o = _mm_movm_epi16(k0_2)
                                        zmm2[0].o = _mm_mask_and_epi64(k0_2, arg18[0].o, zmm5[0].o)
                                        k0_1 = _mm_mask_test_epi16_mask(k0_2, zmm2[0].o, arg9[0].o)
                                        _kortest_mask8_u8(k0_1, k0_1)
                                        
                                        if (cond:18_1)
                                            arg12 = arg15
                                        else
                                            char rdi_4 = _cvtmask32_u32(k0_1)
                                            _mm256_mask_mov_epi64(k0_1, arg24)
                                            bool cond:35_1
                                            
                                            do
                                                arg28 = _mm256_mask_mov_epi64(k0_1, arg6)
                                                arg6 = _mm256_add_epi32(arg6, arg6)
                                                arg7 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                arg12 = _mm256_add_epi64(arg17, arg7)
                                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_1, 
                                                    zmm2[0].o, arg9[0].o)
                                                char temp0_170 = _cvtmask32_u32(k0_3)
                                                
                                                if ((temp0_170 & 1) == 0)
                                                    if ((temp0_170 & 2) != 0)
                                                        goto label_1401732d6
                                                    
                                                    goto label_1401733d4
                                                
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *arg12[0].q, 0)
                                                
                                                if ((temp0_170 & 2) != 0)
                                                label_1401732d6:
                                                    uint16_t* rax_27 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rax_27, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    
                                                    if ((temp0_170 & 4) == 0)
                                                        goto label_1401733e4
                                                    
                                                    goto label_1401732f3
                                                
                                            label_1401733d4:
                                                zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                                                
                                                if ((temp0_170 & 4) == 0)
                                                label_1401733e4:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_170 & 8) != 0)
                                                        goto label_140173314
                                                    
                                                    goto label_1401733f3
                                                
                                            label_1401732f3:
                                                arg6[0].o = _mm256_extracti128_si256(arg12, 1)
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *arg6[0].q, 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_170 & 8) != 0)
                                                label_140173314:
                                                    arg6[0].o = _mm256_extracti128_si256(arg12, 1)
                                                    uint16_t* rax_29 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rax_29, 3)
                                                    arg12 = _mm256_add_epi64(arg16, zmm2)
                                                    
                                                    if ((temp0_170 & 0x10) == 0)
                                                        goto label_140173401
                                                    
                                                    goto label_14017333a
                                                
                                            label_1401733f3:
                                                arg12 = _mm256_add_epi64(arg16, zmm2)
                                                
                                                if ((temp0_170 & 0x10) == 0)
                                                label_140173401:
                                                    
                                                    if ((temp0_170 & 0x20) != 0)
                                                        goto label_14017334b
                                                    
                                                    goto label_14017340b
                                                
                                            label_14017333a:
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *arg12[0].q, 4)
                                                
                                                if ((temp0_170 & 0x20) != 0)
                                                label_14017334b:
                                                    uint16_t* rax_31 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rax_31, 5)
                                                    
                                                    if ((temp0_170 & 0x40) == 0)
                                                        goto label_140173415
                                                    
                                                    goto label_140173362
                                                
                                            label_14017340b:
                                                
                                                if ((temp0_170 & 0x40) != 0)
                                                label_140173362:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *zmm2[0].q, 6)
                                                    
                                                    if (temp0_170 s< 0)
                                                    label_14017337d:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg12, 1)
                                                        uint16_t* rax_33 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        arg23[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg23[0].o, *rax_33, 7)
                                                else
                                                label_140173415:
                                                    
                                                    if (temp0_170 s< 0)
                                                        goto label_14017337d
                                                
                                                zmm2 = _mm256_mask_cvtepu16_epi32(k0_3, arg23[0].o)
                                                arg6[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_3, zmm2, var_6a0), 
                                                    zmm5[0].o)
                                                zmm2[0].o = zx.o(0)
                                                arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k4_1 = _mm_mask_testn_epi16_mask(k0_3, 
                                                    arg6[0].o, arg8[0].o)
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_3, arg6[0].o, arg18[0].o)
                                                int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, 
                                                    arg7[0].o, arg8[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_4))
                                                cond:23_1 = rdi_4 == rax_8.b
                                                cond:25_1 = rdi_4 == rax_8.b
                                                cond:35_1 = rdi_4 != rax_8.b
                                                
                                                if (rdi_4 != rax_8.b)
                                                    zmm2[0].o = arg6[0].o ^ zmm5[0].o
                                                
                                                arg12 = _mm256_mask_mov_epi32(k4_1, arg15)
                                                arg6 = _mm256_mask_sub_epi32(k0_4, arg28, arg10)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_4, arg6, zmm17, 2), 
                                                    zmm2[0].o)
                                                zmm2[0].o =
                                                    _mm_mask_and_epi64(k0_4, zmm5[0].o, arg18[0].o)
                                                k0_1 = _mm_mask_test_epi16_mask(k0_4, zmm2[0].o, 
                                                    arg8[0].o)
                                                _kortest_mask8_u8(k0_1, k0_1)
                                                rdi_4 = _cvtmask32_u32(k0_1)
                                                _mm256_mask_mov_epi64(k0_1, arg28)
                                                arg15 = arg12
                                            while (cond:35_1)
                                    
                                    zmm2[0].o = arg9[0].o ^ var_4e0_1
                                    arg6[0].o = _mm_mask_and_epi64(k0_1, arg18[0].o, zmm2[0].o)
                                    int64_t k0_9 =
                                        _mm_mask_test_epi16_mask(k0_1, arg6[0].o, arg9[0].o)
                                    _kortest_mask8_u8(k0_9, k0_9)
                                    
                                    if (not(cond:23_1))
                                        zmm5 = _mm256_mask_mov_epi32(k3_2, arg12)
                                        arg28 = _mm256_mask_add_epi32(k0_9, arg24, arg10)
                                        zmm2[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                                arg28, arg19), 
                                            zmm2[0].o)
                                        arg8[0].o = _mm_mask_and_epi64(k0_9, zmm2[0].o, arg18[0].o)
                                        k0_9 = _mm_mask_test_epi16_mask(k0_9, arg8[0].o, arg9[0].o)
                                        _kortest_mask8_u8(k0_9, k0_9)
                                        
                                        if (cond:25_1)
                                            arg12 = zmm5
                                        else
                                            char rdi_6 = _cvtmask32_u32(k0_9)
                                            bool cond:37_1
                                            
                                            do
                                                arg24 = _mm256_mask_add_epi32(k0_9, arg28, arg28)
                                                arg6 = _mm256_add_epi64(arg17, 
                                                    _mm256_mask_cvtepi32_epi64(k0_9, arg24[0].o))
                                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, 
                                                    arg8[0].o, arg9[0].o)
                                                char temp0_296 = _cvtmask32_u32(k0_10)
                                                
                                                if ((temp0_296 & 1) == 0)
                                                    if ((temp0_296 & 2) != 0)
                                                        goto label_1401739f6
                                                    
                                                    goto label_140173af1
                                                
                                                arg21[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg21[0].o, *arg6[0].q, 0)
                                                
                                                if ((temp0_296 & 2) != 0)
                                                label_1401739f6:
                                                    uint16_t* rax_61 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg21[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg21[0].o, *rax_61, 1)
                                                    arg7[0].o =
                                                        _mm256_extracti32x4_epi32(k0_10, arg24, 1)
                                                    
                                                    if ((temp0_296 & 4) == 0)
                                                        goto label_140173b02
                                                    
                                                    goto label_140173a14
                                                
                                            label_140173af1:
                                                arg7[0].o =
                                                    _mm256_extracti32x4_epi32(k0_10, arg24, 1)
                                                
                                                if ((temp0_296 & 4) == 0)
                                                label_140173b02:
                                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                    
                                                    if ((temp0_296 & 8) != 0)
                                                        goto label_140173a35
                                                    
                                                    goto label_140173b11
                                                
                                            label_140173a14:
                                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                                arg21[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg21[0].o, *arg9[0].q, 2)
                                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                
                                                if ((temp0_296 & 8) != 0)
                                                label_140173a35:
                                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    uint16_t* rax_63 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg21[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg21[0].o, *rax_63, 3)
                                                    arg6 = _mm256_add_epi64(arg16, arg7)
                                                    
                                                    if ((temp0_296 & 0x10) == 0)
                                                        goto label_140173b1f
                                                    
                                                    goto label_140173a5b
                                                
                                            label_140173b11:
                                                arg6 = _mm256_add_epi64(arg16, arg7)
                                                
                                                if ((temp0_296 & 0x10) == 0)
                                                label_140173b1f:
                                                    
                                                    if ((temp0_296 & 0x20) != 0)
                                                        goto label_140173a6c
                                                    
                                                    goto label_140173b29
                                                
                                            label_140173a5b:
                                                arg21[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg21[0].o, *arg6[0].q, 4)
                                                
                                                if ((temp0_296 & 0x20) != 0)
                                                label_140173a6c:
                                                    uint16_t* rax_65 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    arg21[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg21[0].o, *rax_65, 5)
                                                    
                                                    if ((temp0_296 & 0x40) == 0)
                                                        goto label_140173b33
                                                    
                                                    goto label_140173a83
                                                
                                            label_140173b29:
                                                
                                                if ((temp0_296 & 0x40) != 0)
                                                label_140173a83:
                                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    arg21[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg21[0].o, *arg7[0], 6)
                                                    
                                                    if (temp0_296 s< 0)
                                                    label_140173a9e:
                                                        arg6[0].o =
                                                            _mm256_extracti128_si256(arg6, 1)
                                                        uint16_t* rax_67 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 
                                                            1)
                                                        arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg21[0].o, *rax_67, 7)
                                                else
                                                label_140173b33:
                                                    
                                                    if (temp0_296 s< 0)
                                                        goto label_140173a9e
                                                
                                                arg6 = _mm256_mask_cvtepu16_epi32(k0_10, arg21[0].o)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_10, arg6, var_6a0, 2), 
                                                    zmm2[0].o)
                                                arg8[0].o = zx.o(0)
                                                arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k3_4 = _mm_mask_testn_epi16_mask(k0_10, 
                                                    arg7[0].o, arg6[0].o)
                                                arg9[0].o =
                                                    _mm_mask_and_epi64(k0_10, arg7[0].o, arg18[0].o)
                                                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, 
                                                    arg9[0].o, arg6[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_11))
                                                cond:37_1 = rdi_6 != rax_8.b
                                                
                                                if (rdi_6 != rax_8.b)
                                                    arg8[0].o = arg7[0].o ^ zmm2[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_11, arg28)
                                                arg28 = _mm256_mask_add_epi32(k0_11, arg28, arg10)
                                                arg12 = _mm256_mask_mov_epi32(k3_4, zmm5)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_11, arg28, arg19), 
                                                    arg8[0].o)
                                                arg8[0].o =
                                                    _mm_mask_and_epi64(k0_11, zmm2[0].o, arg18[0].o)
                                                k0_9 = _mm_mask_test_epi16_mask(k0_11, arg8[0].o, 
                                                    arg6[0].o)
                                                _kortest_mask8_u8(k0_9, k0_9)
                                                rdi_6 = _cvtmask32_u32(k0_9)
                                                zmm5 = arg12
                                                arg9[0].o = data_142fc92e0
                                            while (cond:37_1)
                                    
                                    arg14 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_9, arg18[0].o, arg9[0].o), 
                                        arg12, arg14)
                                    arg6 = _mm256_add_epi32(arg14, arg14)
                                    zmm2 = _mm256_add_epi64(arg17, _mm256_cvtepi32_epi64(arg6[0].o))
                                    uint16_t var_500[0x8]
                                    
                                    if ((temp0_130 & 1) != 0)
                                        rax_8 = zmm2[0].q
                                        zmm5[0].o = var_500
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 0)
                                        arg15 = var_340_1
                                        arg24[0].o = _mm_mask_load_epi64(k0_9, var_6b0)
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 1)
                                    else
                                        arg15 = var_340_1
                                        zmm5[0].o = var_500
                                        arg24[0].o = _mm_mask_load_epi64(k0_9, var_6b0)
                                        
                                        if ((temp0_130 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 1)
                                    
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int128_t var_3d0
                                    
                                    if ((temp0_130 & 4) == 0)
                                        arg7[0].o = var_3d0
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_140173ff1
                                        
                                        goto label_140173eb1
                                    
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0]
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg7[0].o = var_3d0
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_140173ff1:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 3)
                                        zmm2 = _mm256_add_epi64(arg16, arg6)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_140173ebe
                                        
                                        goto label_14017400f
                                    
                                label_140173eb1:
                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                    
                                    if ((temp0_130 & 0x10) != 0)
                                    label_14017400f:
                                        rax_8 = zmm2[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 4)
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                        label_140174022:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_130 & 0x40) == 0)
                                                goto label_140173ed0
                                            
                                            goto label_140174036
                                    else
                                    label_140173ebe:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_140174022
                                    
                                    bool cond:31_1
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_140174036:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 6)
                                        cond:31_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                        label_14017404e:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140173ed0:
                                        cond:31_1 = temp0_130 == 0
                                        
                                        if (temp0_130 s< 0)
                                            goto label_14017404e
                                    
                                    var_500 = zmm5[0].o
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_21 =
                                        _mm_mask_testn_epi16_mask(k0_9, arg18[0].o, zmm2[0].o)
                                    _mm256_mask_sub_epi32(k0_9, arg12, arg10)
                                    arg28 = _mm256_mask_mov_epi32(k1_21, arg11)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                            arg28, zmm17), 
                                        arg18[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_9, arg6[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:31_1))
                                        arg28 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, arg6[0].o, 
                                                    zmm2[0].o), 
                                                arg28))
                                    
                                    arg12 = var_320_1
                                    _mm256_mask_load_ps(arg5, var_6e0)
                                    arg6 = _mm256_mask_add_epi32(arg5, arg28, arg28)
                                    zmm2 = _mm256_add_epi64(arg17, _mm256_cvtepi32_epi64(arg6[0].o))
                                    
                                    if ((temp0_130 & 1) == 0)
                                        if ((temp0_130 & 2) != 0)
                                            goto label_140174077
                                        
                                        goto label_140173f58
                                    
                                    rax_8 = zmm2[0].q
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 0)
                                    
                                    if ((temp0_130 & 2) != 0)
                                    label_140174077:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_130 & 4) == 0)
                                            goto label_140173f67
                                        
                                        goto label_140174091
                                    
                                label_140173f58:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_130 & 4) == 0)
                                    label_140173f67:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_130 & 8) != 0)
                                            goto label_1401740b7
                                        
                                        goto label_140173f75
                                    
                                label_140174091:
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0]
                                    arg7[0].o = zmm5[0].o
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_130 & 8) != 0)
                                    label_1401740b7:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 3)
                                        zmm2 = _mm256_add_epi64(arg16, arg6)
                                        
                                        if ((temp0_130 & 0x10) == 0)
                                            goto label_140173f82
                                        
                                        goto label_1401740d5
                                    
                                label_140173f75:
                                    zmm2 = _mm256_add_epi64(arg16, arg6)
                                    
                                    if ((temp0_130 & 0x10) == 0)
                                    label_140173f82:
                                        
                                        if ((temp0_130 & 0x20) != 0)
                                            goto label_1401740e8
                                        
                                        goto label_140173f8b
                                    
                                label_1401740d5:
                                    rax_8 = zmm2[0].q
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 4)
                                    
                                    if ((temp0_130 & 0x20) != 0)
                                    label_1401740e8:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 5)
                                        
                                        if ((temp0_130 & 0x40) == 0)
                                            goto label_140173f94
                                        
                                        goto label_1401740fc
                                    
                                label_140173f8b:
                                    
                                    if ((temp0_130 & 0x40) != 0)
                                    label_1401740fc:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 6)
                                        
                                        if (temp0_130 s< 0)
                                        label_140174114:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140173f94:
                                        
                                        if (temp0_130 s< 0)
                                            goto label_140174114
                                    
                                    zmm2 = __vpmovzxwd_ymmqq_memdq(var_500)
                                    var_3d0 = arg7[0].o
                                    arg6 = _mm256_cvtepu16_epi32(arg7[0].o)
                                    arg7[0].o = zx.o(0)
                                    z = arg31 == 1
                                    
                                    if (not(z))
                                        goto label_1401742e7
                                
                                zmm2[0].o = _mm_mask_and_epi64(arg5, arg24[0].o, arg9[0].o)
                                zmm2 = _mm256_mask_mov_ps(
                                    _mm_cmp_epi16_mask(arg5, zmm2[0].o, arg9[0].o, 4), arg7)
                        
                        var_6e0 = _mm256_mask_store_ps(arg5, _mm256_mask_mov_ps(k2_9, zmm2))
                        arg11 = _mm256_mask_mov_epi64(arg5, arg28)
                else
                    arg6[0].o = zx.o(0)
                    arg7[0].o = zx.o(0)
                    zmm5[0].o = zx.o(arg30)
                    arg7[0].o f- zmm5[0]
                    z = arg7[0].d f== zmm5[0]
                    
                    if (not(arg7[0].d f< zmm5[0]))
                        arg14[0].o = zx.o(0)
                        arg11[0].o = zx.o(0)
                    else
                        zmm5[0].o f- 1f
                        bool c_2 = zmm5[0] f< 1f
                        z = zmm5[0] f== 1f
                        zmm5 = _mm256_mask_add_epi32(arg5, arg28, arg10)
                        
                        if (not(c_2))
                            arg14 = _mm256_mask_mov_epi32(k3_1, zmm5)
                            arg11 = arg14
                        else
                            arg7 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm5), var_2c0_1)
                            arg18 = _mm256_mask_roundscale_ps(arg5, arg7, 9)
                            arg6 = _mm256_mask_cvttps_epi32(arg5, arg18)
                            arg14 = _mm256_mask_min_epi32(k3_1, zmm5, arg6)
                            arg6[0].o = zx.o(0)
                            z = arg31 == 1
                            
                            if (not(z))
                                arg6 = _mm256_mask_sub_ps(arg5, arg7, arg18)
                            
                            arg7 = _mm256_sub_epi32(arg14, arg10)
                            arg11 = _mm256_mask_min_epi32(k3_1, arg7, zmm5)
                    
                    arg6 = _mm256_mask_mov_ps(k3_1, arg6)
                    var_6e0 = arg6
                    k2_9 = _mm256_mask_test_epi32_mask(k2_8, zmm2, zmm2)
                    _kortest_mask8_u8(k2_9, k2_9)
                    
                    if (not(z))
                        goto label_1401730a1
            
            zmm2[0].o = _mm256_extracti128_si256(arg12, 1)
            arg18 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
            arg13 = arg12
            zmm17 = _mm256_mask_cvtepi32_epi64(arg5, arg12[0].o)
            arg17 = arg15
            zmm2 = _mm256_mullo_epi32(arg14, arg15)
            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg28 = _mm256_mask_cvtepi32_epi64(arg5, arg6[0].o)
            arg12 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm2 = _mm256_mask_add_epi64(arg5, arg12, zmm17)
            arg6 = _mm256_mask_add_epi64(arg5, arg28, arg18)
            arg15 = _mm256_mask_add_epi64(arg5, arg6, zmm30)
            arg16 = _mm256_mask_add_epi64(arg5, zmm2, zmm20)
            int64_t k2_10 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, arg25, 1)
            _kortest_mask8_u8(k2_10, k2_10)
            
            if (not(z))
                uint64_t k3_6 = _mm256_mask_testn_epi32_mask(k2_10, zmm26, zmm26)
                _kortest_mask8_u8(k3_6, k3_6)
                
                if (not(z))
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm2, arg28)
                    zmm5 = _mm256_add_epi64(zmm2, arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    uint64_t k4_3 = _kshiftri_mask8(k3_6, 4)
                    int64_t k5_1 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                    int64_t k5_2
                    float temp0_456[0x4]
                    temp0_456, k5_2 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_1, *(arg4 + arg6[0].q))
                    arg24[0].o = temp0_456
                    int64_t k5_3 = __kmovq_maskmskw_masku64_avx512(k4_3)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k5_4
                    float temp0_458[0x4]
                    temp0_458, k5_4 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_3, *(arg4 + zmm5[0].q))
                    arg6[0].o = temp0_458
                    arg6 = _mm256_insertf32x4(arg5, arg24, arg6[0].o, 1)
                    zmm5 = __vpbroadcastq_ymmqq_memq(8)
                    arg24 = _mm256_mask_add_epi64(arg5, zmm2, zmm5)
                    zmm5 = _mm256_add_epi64(arg7, zmm5)
                    int64_t k5_5 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    arg8[0].o = zx.o(0)
                    int64_t k5_6
                    float temp0_463[0x4]
                    temp0_463, k5_6 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_5, *(arg4 + zmm5[0].q))
                    arg8[0].o = temp0_463
                    int64_t k5_7 = __kmovq_maskmskw_masku64_avx512(k4_3)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int64_t k5_8
                    float temp0_465[0x4]
                    temp0_465, k5_8 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_7, *(arg4 + arg24[0]))
                    zmm5[0].o = temp0_465
                    zmm5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                    arg24 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm2, arg24)
                    arg7 = _mm256_mask_add_epi64(arg5, arg7, arg24)
                    int64_t k5_9 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                    int64_t k5_10
                    float temp0_471[0x4]
                    temp0_471, k5_10 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_9, *(arg4 + arg7[0]))
                    arg24[0].o = temp0_471
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k4_4
                    float temp0_473[0x4]
                    temp0_473, k4_4 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_3, *(arg4 + zmm2[0].q))
                    arg7[0].o = temp0_473
                    zmm2 = _mm256_insertf32x4(arg5, arg24, arg7[0].o, 1)
                    var_440.32 = _mm256_mask_storeu_ps(k3_6, arg6)
                    var_420.32 = _mm256_mask_storeu_ps(k3_6, zmm5)
                    var_400.32 = _mm256_mask_storeu_ps(k3_6, zmm2)
                
                int64_t k2_11 = _mm256_mask_test_epi32_mask(k2_10, zmm26, zmm26)
                _kortest_mask8_u8(k2_11, k2_11)
                
                if (not(z))
                    zmm2 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                    int64_t k3_7 = _mm256_movepi32_mask(zmm2)
                    int64_t k4_5 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_11, arg19, zmm2)
                    _kortest_mask8_u8(k4_5, k4_5)
                    arg6 = arg16
                    zmm2 = arg15
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(k4_5, arg16, arg7)
                        zmm2 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_5, 4), arg15, arg7)
                        zmm5 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                        arg24 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                        zmm5 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm5, arg28), arg7)
                        arg7 = _mm256_mask_add_epi64(arg5, arg24, arg7)
                        int64_t k5_12 = _kshiftri_mask8(k4_5, 4)
                        arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                        int64_t k4_6
                        float temp0_489[0x4]
                        temp0_489, k4_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_5, 
                            *(arg4 + arg7[0]))
                        arg24[0].o = temp0_489
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k5_13
                        float temp0_491[0x4]
                        temp0_491, k5_13 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_12, 
                            *(arg4 + zmm5[0].q))
                        arg7[0].o = temp0_491
                        arg7 = _mm256_insertf32x4(arg5, arg24, arg7[0].o, 1)
                    
                    var_440.32 = _mm256_mask_storeu_ps(k2_11, _mm256_mask_mov_ps(k3_7, arg7))
                    arg7 = __vpbroadcastd_ymmqq_memd(2)
                    zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg7)
                    int64_t k3_8 = _mm256_mask_test_epi32_mask(k2_11, zmm25, arg7)
                    _kortest_mask8_u8(k3_8, k3_8)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg24 = _mm256_mask_add_epi64(k3_8, arg6, arg7)
                        int64_t k4_7 = _kshiftri_mask8(k3_8, 4)
                        int64_t k5_14 = _kshiftri_mask8(k3_8, 4)
                        arg8[0].o = zx.o(0)
                        rax_8 = 0
                        int64_t k3_9
                        float temp0_500[0x4]
                        temp0_500, k3_9 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_8, *arg6[0].q)
                        arg8[0].o = temp0_500
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k5_15
                        float temp0_502[0x4]
                        temp0_502, k5_15 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_14, *zmm2[0].q)
                        arg6[0].o = temp0_502
                        zmm2 = _mm256_mask_add_epi64(k4_7, zmm2, arg7)
                        arg7 = _mm256_insertf128_ps(arg8, arg6[0].o, 1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg24)
                    
                    var_420.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm5, zmm5), arg7))
                    arg7 = __vpbroadcastd_ymmqq_memd(4)
                    zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg7)
                    int64_t k3_11 = _mm256_mask_test_epi32_mask(k2_11, zmm25, arg7)
                    _kortest_mask8_u8(k3_11, k3_11)
                    
                    if (not(z))
                        int64_t k4_8 = _kshiftri_mask8(k3_11, 4)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        z = rax_8.d == rax_8.d
                        int64_t k3_12
                        float temp0_511[0x4]
                        temp0_511, k3_12 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_11, *arg6[0].q)
                        arg7[0].o = temp0_511
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k4_9
                        float temp0_513[0x4]
                        temp0_513, k4_9 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_8, *zmm2[0].q)
                        arg6[0].o = temp0_513
                        arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                    
                    var_400.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm5, zmm5), arg7))
            
            zmm2 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, arg25, zmm2, 4)
            int64_t k2_12 = _mm256_cmp_epi32_mask(k6_1, arg25, zmm2, 4)
            _kortest_mask8_u8(k2_12, k2_12)
            int64_t k2_15
            
            if (not(z))
                uint64_t k2_13 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, arg25, 3)
                _kortest_mask8_u8(k2_13, k2_13)
                
                if (not(z))
                    float var_5c0_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                    float var_5e0_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                    float var_600_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                    double var_620_1[0x4] = _mm256_mask_store_epi64(arg5, arg19)
                    float var_640_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                    uint32_t var_660_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                    int64_t k3_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm25, 0x1f)), arg25, 3)
                    uint64_t k4_10 = _mm256_cmp_epi32_mask(k3_15, arg22, arg10, 4)
                    _kortest_mask8_u8(k4_10, k4_10)
                    zmm2 = _mm256_mask_mov_epi64(arg5, zmm20)
                    arg6 = _mm256_mask_mov_epi64(arg5, zmm30)
                    
                    if (not(z))
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        int64_t k5_16 = _kshiftri_mask8(k4_10, 4)
                        _mm256_mask_mov_epi64(arg5, zmm30)
                        arg6 = _mm256_mask_add_epi64(k5_16, zmm30, zmm2)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg7 = _mm256_mask_add_epi64(k4_10, zmm20, zmm2)
                        uint64_t k1_29 = __kmovq_maskmskw_masku64_avx512(k6_1)
                        uint64_t k6_2 = _kshiftri_mask8(k4_10, 4)
                        int64_t k7_1 = __kmovq_maskmskw_masku64_avx512(k4_10)
                        zmm2[0].o = zx.o(0)
                        int64_t k7_2
                        float temp0_532[0x4]
                        temp0_532, k7_2 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_1, *zmm20[0])
                        zmm2[0].o = temp0_532
                        int64_t k7_3 = __kmovq_maskmskw_masku64_avx512(k6_2)
                        zmm5[0].o = zx.o(0)
                        int64_t k7_4
                        float temp0_533[0x4]
                        temp0_533, k7_4 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_3, *zmm30[0].q)
                        zmm5[0].o = temp0_533
                        var_600_1 =
                            _mm256_mask_storeu_ps(k3_15, _mm256_insertf128_ps(zmm2, zmm5[0].o, 1))
                        zmm5 = __vpbroadcastq_ymmqq_memq(8)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        zmm2 = _mm256_mask_add_epi64(k4_10, zmm20, zmm5)
                        arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                        int64_t k4_11
                        float temp0_540[0x4]
                        temp0_540, k4_11 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_10, *arg7[0])
                        arg24[0].o = temp0_540
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k6_3
                        float temp0_542[0x4]
                        temp0_542, k6_3 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_2, *arg6[0].q)
                        arg7[0].o = temp0_542
                        k6_1 = __kmovq_maskmskw_masku64_avx512(k1_29)
                        _mm256_mask_mov_epi64(arg5, zmm30)
                        arg6 = _mm256_mask_add_epi64(k5_16, zmm30, zmm5)
                        var_660_1 = _mm256_mask_storeu_ps(k3_15, 
                            _mm256_insertf32x4(arg5, arg24, arg7[0].o, 1))
                    
                    int64_t k3_16 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 3)
                    int64_t k4_12 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, zmm25, 2)
                    uint64_t k5_17 = _mm256_cmp_epi32_mask(k4_12, arg22, arg10, 4)
                    _kortest_mask8_u8(k5_17, k5_17)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        var_6b0[0].d = _store_mask32(k6_1)
                        int64_t k6_4 = _kshiftri_mask8(k5_17, 4)
                        zmm5 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        _mm256_mask_mov_epi64(arg5, zmm2)
                        arg24 = _mm256_mask_add_epi64(k5_17, zmm2, arg7)
                        uint64_t k7_5 = _kshiftri_mask8(k5_17, 4)
                        int64_t k1_30 = __kmovq_maskmskw_masku64_avx512(k5_17)
                        arg7[0].o = zx.o(0)
                        int64_t k1_31
                        float temp0_552[0x4]
                        temp0_552, k1_31 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_30, *zmm2[0].q)
                        arg7[0].o = temp0_552
                        int64_t k1_32 = __kmovq_maskmskw_masku64_avx512(k7_5)
                        arg8[0].o = zx.o(0)
                        int64_t k1_33
                        float temp0_553[0x4]
                        temp0_553, k1_33 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_32, *arg6[0].q)
                        arg8[0].o = temp0_553
                        var_5e0_1 =
                            _mm256_mask_storeu_ps(k4_12, _mm256_insertf128_ps(arg7, arg8[0].o, 1))
                        arg7 = __vpbroadcastq_ymmqq_memq(8)
                        zmm2 = _mm256_mask_add_epi64(k5_17, zmm2, arg7)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t k5_18
                        float temp0_559[0x4]
                        temp0_559, k5_18 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_17, *arg24[0])
                        arg8[0].o = temp0_559
                        arg9[0].o = zx.o(0)
                        int64_t k7_6
                        float temp0_560[0x4]
                        temp0_560, k7_6 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_5, *zmm5[0].q)
                        arg9[0].o = temp0_560
                        arg6 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        k6_1 = _load_mask32(var_6b0[0].d)
                        var_640_1 =
                            _mm256_mask_storeu_ps(k4_12, _mm256_insertf128_ps(arg8, arg9[0].o, 1))
                    
                    int64_t k3_17 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, zmm25, 4)
                    uint64_t k4_13 = _mm256_cmp_epi32_mask(k3_17, arg22, arg10, 4)
                    _kortest_mask8_u8(k4_13, k4_13)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k5_19 = _kshiftri_mask8(k4_13, 4)
                        int64_t k1_34 = __kmovq_maskmskw_masku64_avx512(k4_13)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_35
                        float temp0_566[0x4]
                        temp0_566, k1_35 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_34, *zmm2[0].q)
                        zmm5[0].o = temp0_566
                        int64_t k1_36 = __kmovq_maskmskw_masku64_avx512(k5_19)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t k1_37
                        float temp0_568[0x4]
                        temp0_568, k1_37 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_36, *arg6[0].q)
                        arg9[0].o = temp0_568
                        arg6 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_13, 4), arg6, arg7)
                        zmm2 = _mm256_mask_add_epi64(k4_13, zmm2, arg7)
                        arg7 = _mm256_insertf128_ps(zmm5, arg9[0].o, 1)
                        var_5c0_1 = _mm256_mask_storeu_ps(k3_17, arg7)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k4_14
                        float temp0_574[0x4]
                        temp0_574, k4_14 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_13, *zmm2[0].q)
                        arg7[0].o = temp0_574
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int64_t k5_20
                        float temp0_576[0x4]
                        temp0_576, k5_20 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_19, *arg6[0].q)
                        zmm2[0].o = temp0_576
                        var_620_1 =
                            _mm256_mask_storeu_ps(k3_17, _mm256_insertf128_ps(arg7, zmm2[0].o, 1))
                    
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                    zmm2 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm2, arg28), arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    int64_t k1_39 = _kshiftri_mask8(k2_13, 4)
                    int64_t k3_18 = __kmovq_maskmskw_masku64_avx512(k2_13)
                    arg7[0].o = zx.o(0)
                    int64_t k3_19
                    uint32_t temp0_586[0x4]
                    temp0_586, k3_19 =
                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_18, *(arg4 + arg6[0].q))
                    arg7[0].o = temp0_586
                    arg6[0].o = zx.o(0)
                    int64_t k1_40
                    uint32_t temp0_587[0x4]
                    temp0_587, k1_40 =
                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_39, *(arg4 + zmm2[0].q))
                    arg6[0].o = temp0_587
                    zmm2 = _mm256_inserti128_si256(arg7, arg6[0].o, 1)
                    arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_srli_epi32(zmm2, 0xa), 0x7ff)
                    arg7 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3ff), 
                            0xfffffe01)), 
                        0x43ff8000)
                    arg24 = _mm256_mask_load_ps(arg5, var_640_1)
                    arg8 = var_620_1
                    zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_1, arg7, var_600_1)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                    arg9 = _mm256_broadcast_ss(1023f)
                    arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_div_ps(arg6, arg9), arg5, arg24, var_5e0_1)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm2, 0x15), 
                                arg7)), 
                            arg9), 
                        arg8, var_5c0_1)
                    var_440.32 = _mm256_mask_storeu_ps(k2_13, zmm5)
                    var_420.32 = _mm256_mask_storeu_ps(k2_13, arg6)
                    var_400.32 = _mm256_mask_storeu_ps(k2_13, zmm2)
                
                k2_15 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 3), arg5)
                int64_t k3_20 = _mm256_cmp_epi32_mask(k2_15, arg22, arg10, 4)
                _kortest_mask8_u8(k3_20, k3_20)
            
            int64_t k1_43
            
            if (z)
                arg15 = arg17
                k1_43 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg14, arg11, 4), arg22, 
                    arg10, 4)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z))
                label_140174d48:
                    zmm2 = _mm256_mullo_epi32(arg11, arg15)
                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                    arg28 = _mm256_mask_cvtepi32_epi64(arg5, arg6[0].o)
                    arg12 = _mm256_cvtepi32_epi64(zmm2[0].o)
                    zmm2 = _mm256_mask_add_epi64(arg5, arg12, zmm17)
                    arg6 = _mm256_mask_add_epi64(arg5, arg28, arg18)
                    arg11 = _mm256_mask_add_epi64(arg5, arg6, zmm30)
                    arg14 = _mm256_mask_add_epi64(arg5, zmm2, zmm20)
                    int64_t k2_17 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, arg25, 1)
                    _kortest_mask8_u8(k2_17, k2_17)
                    uint32_t var_3a0[0x8]
                    float var_380[0x8]
                    int32_t var_360[0x8]
                    
                    if (not(z))
                        uint64_t k3_22 = _mm256_mask_testn_epi32_mask(k2_17, zmm26, zmm26)
                        _kortest_mask8_u8(k3_22, k3_22)
                        
                        if (not(z))
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm2, arg28)
                            zmm5 = _mm256_add_epi64(zmm2, arg6)
                            arg6 = _mm256_add_epi64(arg7, arg6)
                            uint64_t k4_18 = _kshiftri_mask8(k3_22, 4)
                            int64_t k5_23 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                            int64_t k5_24
                            float temp0_678[0x4]
                            temp0_678, k5_24 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_23, *(arg4 + arg6[0].q))
                            arg24[0].o = temp0_678
                            int64_t k5_25 = __kmovq_maskmskw_masku64_avx512(k4_18)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k5_26
                            float temp0_680[0x4]
                            temp0_680, k5_26 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_25, *(arg4 + zmm5[0].q))
                            arg6[0].o = temp0_680
                            arg6 = _mm256_insertf32x4(arg5, arg24, arg6[0].o, 1)
                            zmm5 = __vpbroadcastq_ymmqq_memq(8)
                            arg24 = _mm256_mask_add_epi64(arg5, zmm2, zmm5)
                            zmm5 = _mm256_add_epi64(arg7, zmm5)
                            int64_t k5_27 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            arg8[0].o = zx.o(0)
                            int64_t k5_28
                            float temp0_685[0x4]
                            temp0_685, k5_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_27, *(arg4 + zmm5[0].q))
                            arg8[0].o = temp0_685
                            int64_t k5_29 = __kmovq_maskmskw_masku64_avx512(k4_18)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k5_30
                            float temp0_687[0x4]
                            temp0_687, k5_30 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_29, *(arg4 + arg24[0]))
                            zmm5[0].o = temp0_687
                            zmm5 = _mm256_insertf128_ps(arg8, zmm5[0].o, 1)
                            arg24 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm2, arg24)
                            arg7 = _mm256_mask_add_epi64(arg5, arg7, arg24)
                            int64_t k5_31 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                            int64_t k5_32
                            float temp0_693[0x4]
                            temp0_693, k5_32 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_31, *(arg4 + arg7[0]))
                            arg24[0].o = temp0_693
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k4_19
                            float temp0_695[0x4]
                            temp0_695, k4_19 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k4_18, *(arg4 + zmm2[0].q))
                            arg7[0].o = temp0_695
                            zmm2 = _mm256_insertf32x4(arg5, arg24, arg7[0].o, 1)
                            var_3a0 = _mm256_mask_storeu_ps(k3_22, arg6)
                            var_380 = _mm256_mask_storeu_ps(k3_22, zmm5)
                            var_360 = _mm256_mask_storeu_ps(k3_22, zmm2)
                        
                        int64_t k2_18 = _mm256_mask_test_epi32_mask(k2_17, zmm26, zmm26)
                        _kortest_mask8_u8(k2_18, k2_18)
                        
                        if (not(z))
                            zmm2 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                            int64_t k3_23 = _mm256_movepi32_mask(zmm2)
                            int64_t k4_20 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                k2_18, arg19, zmm2)
                            _kortest_mask8_u8(k4_20, k4_20)
                            arg6 = arg14
                            zmm2 = arg11
                            
                            if (not(z))
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                arg6 = _mm256_mask_add_epi64(k4_20, arg14, arg7)
                                zmm2 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_20, 4), arg11, arg7)
                                zmm5 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                                arg24 = _mm256_mask_add_epi64(arg5, 
                                    _mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                                zmm5 =
                                    _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm5, arg28), arg7)
                                arg7 = _mm256_mask_add_epi64(arg5, arg24, arg7)
                                int64_t k5_34 = _kshiftri_mask8(k4_20, 4)
                                arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
                                int64_t k4_21
                                float temp0_711[0x4]
                                temp0_711, k4_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_20, *(arg4 + arg7[0]))
                                arg24[0].o = temp0_711
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k5_35
                                float temp0_713[0x4]
                                temp0_713, k5_35 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_34, *(arg4 + zmm5[0].q))
                                arg7[0].o = temp0_713
                                arg7 = _mm256_insertf32x4(arg5, arg24, arg7[0].o, 1)
                            
                            var_3a0 = _mm256_mask_storeu_ps(k2_18, _mm256_mask_mov_ps(k3_23, arg7))
                            arg7 = __vpbroadcastd_ymmqq_memd(2)
                            zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg7)
                            int64_t k3_24 = _mm256_mask_test_epi32_mask(k2_18, zmm25, arg7)
                            _kortest_mask8_u8(k3_24, k3_24)
                            
                            if (not(z))
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                _mm256_mask_mov_epi64(arg5, arg6)
                                arg24 = _mm256_mask_add_epi64(k3_24, arg6, arg7)
                                int64_t k4_22 = _kshiftri_mask8(k3_24, 4)
                                int64_t k5_36 = _kshiftri_mask8(k3_24, 4)
                                zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                                int64_t k3_25
                                float temp0_723[0x4]
                                temp0_723, k3_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k3_24, *arg6[0].q)
                                zmm26[0].o = temp0_723
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k5_37
                                float temp0_725[0x4]
                                temp0_725, k5_37 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_36, *zmm2[0].q)
                                arg6[0].o = temp0_725
                                zmm2 = _mm256_mask_add_epi64(k4_22, zmm2, arg7)
                                arg7 = _mm256_insertf32x4(arg5, zmm26, arg6[0].o, 1)
                                arg6 = _mm256_mask_mov_epi64(arg5, arg24)
                            
                            var_380 = _mm256_mask_storeu_ps(k2_18, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm5, zmm5), 
                                    arg7))
                            arg7 = __vpbroadcastd_ymmqq_memd(4)
                            zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg7)
                            int64_t k3_27 = _mm256_mask_test_epi32_mask(k2_18, zmm25, arg7)
                            _kortest_mask8_u8(k3_27, k3_27)
                            
                            if (not(z))
                                int64_t k4_23 = _kshiftri_mask8(k3_27, 4)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                z = &var_380 == &var_380
                                int64_t k3_28
                                float temp0_734[0x4]
                                temp0_734, k3_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k3_27, *arg6[0].q)
                                arg7[0].o = temp0_734
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k4_24
                                float temp0_736[0x4]
                                temp0_736, k4_24 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_23, *zmm2[0].q)
                                arg6[0].o = temp0_736
                                arg7 = _mm256_insertf128_ps(arg7, arg6[0].o, 1)
                            
                            var_360 = _mm256_mask_storeu_ps(k2_18, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm5, zmm5), 
                                    arg7))
                    
                    _ktest_mask8_u8(k1_43, arg5)
                    
                    if (not(z))
                        int64_t k2_19 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, arg25, 3)
                        _kortest_mask8_u8(k2_19, k2_19)
                        
                        if (not(z))
                            float var_5c0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_5e0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_600_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_620_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_640_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            uint32_t var_660_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            int64_t k3_31 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm25, 0x1f)), 
                                arg25, 3)
                            uint64_t k4_25 = _kand_mask8(k1_43, k3_31)
                            _kortest_mask8_u8(k4_25, k4_25)
                            var_6b0[0].d = _store_mask32(k2_19)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k5_38 = _kshiftri_mask8(k4_25, 4)
                                _mm256_mask_mov_epi64(arg5, zmm30)
                                arg6 = _mm256_mask_add_epi64(k5_38, zmm30, zmm2)
                                _mm256_mask_mov_epi64(arg5, zmm20)
                                arg7 = _mm256_mask_add_epi64(k4_25, zmm20, zmm2)
                                uint64_t k6_5 = _kshiftri_mask8(k4_25, 4)
                                int64_t k7_7 = __kmovq_maskmskw_masku64_avx512(k4_25)
                                zmm2[0].o = zx.o(0)
                                int64_t k7_8
                                float temp0_753[0x4]
                                temp0_753, k7_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_7, *zmm20[0])
                                zmm2[0].o = temp0_753
                                int64_t k7_9 = __kmovq_maskmskw_masku64_avx512(k6_5)
                                zmm5[0].o = zx.o(0)
                                int64_t k7_10
                                float temp0_754[0x4]
                                temp0_754, k7_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_9, *zmm30[0].q)
                                zmm5[0].o = temp0_754
                                var_600_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(zmm2, zmm5[0].o, 1))
                                zmm2 = __vpbroadcastq_ymmqq_memq(8)
                                zmm20 = _mm256_mask_add_epi64(k4_25, zmm20, zmm2)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k4_26
                                float temp0_760[0x4]
                                temp0_760, k4_26 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_25, *arg7[0])
                                zmm5[0].o = temp0_760
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k6_6
                                float temp0_762[0x4]
                                temp0_762, k6_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k6_5, *arg6[0].q)
                                arg7[0].o = temp0_762
                                zmm30 = _mm256_mask_add_epi64(k5_38, zmm30, zmm2)
                                var_660_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            int64_t k3_32 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 3)
                            int64_t k4_27 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_32, zmm25, 2)
                            uint64_t k5_39 = _kand_mask8(k1_43, k4_27)
                            _kortest_mask8_u8(k5_39, k5_39)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k6_7 = _kshiftri_mask8(k5_39, 4)
                                _mm256_mask_mov_epi64(arg5, zmm30)
                                arg6 = _mm256_mask_add_epi64(k6_7, zmm30, zmm2)
                                _mm256_mask_mov_epi64(arg5, zmm20)
                                arg7 = _mm256_mask_add_epi64(k5_39, zmm20, zmm2)
                                uint64_t k7_11 = _kshiftri_mask8(k5_39, 4)
                                int64_t k2_20 = __kmovq_maskmskw_masku64_avx512(k5_39)
                                zmm2[0].o = zx.o(0)
                                int64_t k2_21
                                float temp0_771[0x4]
                                temp0_771, k2_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_20, *zmm20[0])
                                zmm2[0].o = temp0_771
                                int64_t k2_22 = __kmovq_maskmskw_masku64_avx512(k7_11)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k2_23
                                float temp0_773[0x4]
                                temp0_773, k2_23 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_22, *zmm30[0].q)
                                zmm5[0].o = temp0_773
                                var_5e0_2 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(zmm2, zmm5[0].o, 1))
                                zmm2 = __vpbroadcastq_ymmqq_memq(8)
                                zmm20 = _mm256_mask_add_epi64(k5_39, zmm20, zmm2)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k5_40
                                float temp0_779[0x4]
                                temp0_779, k5_40 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_39, *arg7[0])
                                zmm5[0].o = temp0_779
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k7_12
                                float temp0_781[0x4]
                                temp0_781, k7_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_11, *arg6[0].q)
                                arg7[0].o = temp0_781
                                zmm30 = _mm256_mask_add_epi64(k6_7, zmm30, zmm2)
                                var_640_2 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            uint64_t k6_8 = _load_mask32(var_6b0[0].d)
                            int64_t k3_33 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_32, zmm25, 4)
                            uint64_t k4_28 = _kand_mask8(k1_43, k3_33)
                            _kortest_mask8_u8(k4_28, k4_28)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                uint64_t k5_41 = _kshiftri_mask8(k4_28, 4)
                                int64_t k2_24 = __kmovq_maskmskw_masku64_avx512(k4_28)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k2_25
                                float temp0_787[0x4]
                                temp0_787, k2_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_24, *zmm20[0])
                                arg6[0].o = temp0_787
                                int64_t k2_26 = __kmovq_maskmskw_masku64_avx512(k5_41)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k2_27
                                float temp0_789[0x4]
                                temp0_789, k2_27 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_26, *zmm30[0].q)
                                arg7[0].o = temp0_789
                                zmm30 =
                                    _mm256_mask_add_epi64(_kshiftri_mask8(k4_28, 4), zmm30, zmm2)
                                zmm20 = _mm256_mask_add_epi64(k4_28, zmm20, zmm2)
                                zmm2 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                var_5c0_2 = _mm256_mask_storeu_ps(k3_33, zmm2)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k4_29
                                float temp0_795[0x4]
                                temp0_795, k4_29 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_28, *zmm20[0])
                                zmm2[0].o = temp0_795
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k5_42
                                float temp0_797[0x4]
                                temp0_797, k5_42 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_41, *zmm30[0].q)
                                arg6[0].o = temp0_797
                                var_620_2 = _mm256_mask_storeu_ps(k3_33, 
                                    _mm256_insertf128_ps(zmm2, arg6[0].o, 1))
                            
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm17), arg12)
                            zmm2 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm2, arg28), arg6)
                            arg6 = _mm256_add_epi64(arg7, arg6)
                            int64_t k2_29 = _kshiftri_mask8(k6_8, 4)
                            int64_t k3_34 = __kmovq_maskmskw_masku64_avx512(k6_8)
                            arg7[0].o = zx.o(0)
                            int64_t k3_35
                            uint32_t temp0_807[0x4]
                            temp0_807, k3_35 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k3_34, *(arg4 + arg6[0].q))
                            arg7[0].o = temp0_807
                            arg6[0].o = zx.o(0)
                            int64_t k2_30
                            uint32_t temp0_808[0x4]
                            temp0_808, k2_30 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k2_29, *(arg4 + zmm2[0].q))
                            arg6[0].o = temp0_808
                            zmm2 = _mm256_inserti128_si256(arg7, arg6[0].o, 1)
                            arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(zmm2, 0xa), 0x7ff)
                            arg7 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                    arg5, 
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 
                                        0x3ff), 
                                    0xfffffe01)), 
                                0x43ff8000)
                            zmm20 = _mm256_mask_load_ps(arg5, var_640_2)
                            arg24 = _mm256_mask_load_ps(arg5, var_620_2)
                            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_2, arg7, var_600_2)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                            zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, arg6, zmm26), arg5, zmm20, var_5e0_2)
                            zmm2 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_srli_epi32(zmm2, 0x15), arg7)), 
                                    zmm26), 
                                arg5, arg24, var_5c0_2)
                            var_3a0 = _mm256_mask_storeu_ps(k6_8, zmm5)
                            var_380 = _mm256_mask_storeu_ps(k6_8, arg6)
                            var_360 = _mm256_mask_storeu_ps(k6_8, zmm2)
                        
                        arg5 = _kxor_mask8(
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 3), arg5)
                        _ktest_mask8_u8(k1_43, arg5)
                    
                    if (z)
                        arg12 = arg13
                        arg28 = _mm256_mask_load_epi64(arg5, var_5a0_1)
                        arg18 = _mm256_mask_load_ps(arg5, var_6e0)
                    else
                        int64_t k2_32 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, arg25, 2)
                        _kortest_mask8_u8(k2_32, k2_32)
                        int128_t var_4d0
                        
                        if (z)
                            arg12 = arg13
                            arg28 = _mm256_mask_load_epi64(arg5, var_5a0_1)
                            zmm1[0].o = var_4d0
                            arg18 = _mm256_mask_load_ps(arg5, var_6e0)
                        else
                            zmm2 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                            int64_t k3_36 = _mm256_movepi32_mask(zmm2)
                            int64_t k4_30 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                k2_32, arg19, zmm2)
                            _kortest_mask8_u8(k4_30, k4_30)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(2)
                                arg14 = _mm256_mask_add_epi64(k4_30, arg14, zmm2)
                                int64_t k5_43 = _kshiftri_mask8(k4_30, 4)
                                arg11 = _mm256_mask_add_epi64(k5_43, arg11, zmm2)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm17)
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                zmm0 = _mm256_add_epi64(zmm0, arg12)
                                zmm1 = _mm256_mask_add_epi64(k5_43, 
                                    _mm256_mask_add_epi64(arg5, zmm1, arg28), zmm2)
                                zmm0 = _mm256_mask_add_epi64(k4_30, zmm0, zmm2)
                                int64_t r11_3 = zmm0[0].q
                                int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t r12_4 = zmm0[0].q
                                int64_t rbx_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rdi_11 = zmm1[0].q
                                int64_t rsi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t rcx_12 = zmm0[0].q
                                int64_t rax_89 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(arg4 + r11_3))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_3), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_4), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_7), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_11), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_6), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_12), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_89), 7)
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                            
                            arg12 = arg13
                            arg28 = _mm256_mask_load_epi64(arg5, var_5a0_1)
                            zmm1[0].o = var_4d0
                            var_3a0 = _mm256_mask_storeu_ps(k2_32, _mm256_mask_mov_ps(k3_36, zmm2))
                            zmm0 = __vpbroadcastd_ymmqq_memd(2)
                            zmm2 = _mm256_mask_and_epi32(arg5, zmm25, zmm0)
                            int64_t k3_37 = _mm256_mask_test_epi32_mask(k2_32, zmm25, zmm0)
                            _kortest_mask8_u8(k3_37, k3_37)
                            
                            if (not(z))
                                char temp0_890 = _cvtmask32_u32(k3_37)
                                
                                if ((temp0_890 & 1) == 0)
                                    if ((temp0_890 & 2) != 0)
                                        goto label_1401757ad
                                    
                                    goto label_1401756c4
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg14[0].q, 0)
                                
                                if ((temp0_890 & 2) != 0)
                                label_1401757ad:
                                    int64_t rax_107 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_107, 1)
                                    
                                    if ((temp0_890 & 4) == 0)
                                        goto label_1401756ce
                                    
                                    goto label_1401757c2
                                
                            label_1401756c4:
                                
                                if ((temp0_890 & 4) == 0)
                                label_1401756ce:
                                    
                                    if ((temp0_890 & 8) != 0)
                                        goto label_1401757dc
                                    
                                    goto label_1401756d8
                                
                            label_1401757c2:
                                zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_890 & 8) != 0)
                                label_1401757dc:
                                    zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                    uint16_t* rax_109 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_109, 3)
                                    
                                    if ((temp0_890 & 0x10) == 0)
                                        goto label_1401756e2
                                    
                                    goto label_1401757fc
                                
                            label_1401756d8:
                                
                                if ((temp0_890 & 0x10) != 0)
                                label_1401757fc:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg11[0].q, 4)
                                    
                                    if ((temp0_890 & 0x20) != 0)
                                    label_14017580b:
                                        int64_t rax_111 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_111, 5)
                                        
                                        if ((temp0_890 & 0x40) == 0)
                                            goto label_1401756f6
                                        
                                        goto label_140175820
                                else
                                label_1401756e2:
                                    
                                    if ((temp0_890 & 0x20) != 0)
                                        goto label_14017580b
                                
                                int64_t k4_31
                                
                                if ((temp0_890 & 0x40) != 0)
                                label_140175820:
                                    zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_890 == 0
                                    
                                    if (temp0_890 s< 0)
                                    label_140175847:
                                        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                        uint16_t* rax_113 =
                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_113, 7)
                                else
                                label_1401756f6:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_890 == 0
                                    
                                    if (temp0_890 s< 0)
                                        goto label_140175847
                                
                                arg14 = _mm256_mask_add_epi64(k3_37, arg14, arg6)
                                arg11 = _mm256_mask_add_epi64(k4_31, arg11, arg6)
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm1[0].o), 0xffffff01))
                            
                            var_380 = _mm256_mask_storeu_ps(k2_32, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), 
                                    arg6))
                            zmm0 = __vpbroadcastd_ymmqq_memd(4)
                            zmm2 = _mm256_mask_and_epi32(arg5, zmm25, zmm0)
                            int64_t k3_39 = _mm256_mask_test_epi32_mask(k2_32, zmm25, zmm0)
                            _kortest_mask8_u8(k3_39, k3_39)
                            
                            if (z)
                                arg18 = _mm256_mask_load_ps(arg5, var_6e0)
                            else
                                char temp0_901 = _cvtmask32_u32(k3_39)
                                int128_t var_3b0
                                int64_t rax_115
                                
                                if ((temp0_901 & 1) != 0)
                                    arg6[0].o = var_3b0
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg14[0].q, 0)
                                    
                                    if ((temp0_901 & 2) != 0)
                                        rax_115 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_115, 1)
                                else
                                    arg6[0].o = var_3b0
                                    
                                    if ((temp0_901 & 2) != 0)
                                        rax_115 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_115, 1)
                                
                                if ((temp0_901 & 4) == 0)
                                    if ((temp0_901 & 8) != 0)
                                        goto label_140172b7f
                                    
                                    goto label_140175895
                                
                                zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_901 & 8) != 0)
                                label_140172b7f:
                                    zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_2, 3)
                                    
                                    if ((temp0_901 & 0x10) == 0)
                                        goto label_14017589f
                                    
                                    goto label_140172b9f
                                
                            label_140175895:
                                
                                if ((temp0_901 & 0x10) != 0)
                                label_140172b9f:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg11[0].q, 4)
                                    
                                    if ((temp0_901 & 0x20) != 0)
                                    label_140172bae:
                                        int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_4, 5)
                                        
                                        if ((temp0_901 & 0x40) == 0)
                                            goto label_1401758b3
                                        
                                        goto label_140172bc3
                                else
                                label_14017589f:
                                    
                                    if ((temp0_901 & 0x20) != 0)
                                        goto label_140172bae
                                
                                if ((temp0_901 & 0x40) != 0)
                                label_140172bc3:
                                    zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 6)
                                    z = temp0_901 == 0
                                    
                                    if (temp0_901 s< 0)
                                    label_140172bdb:
                                        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                                        int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_6, 7)
                                else
                                label_1401758b3:
                                    z = temp0_901 == 0
                                    
                                    if (temp0_901 s< 0)
                                        goto label_140172bdb
                                
                                arg18 = _mm256_mask_load_ps(arg5, var_6e0)
                                var_3b0 = arg6[0].o
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(arg6[0].o), 0xffffff01))
                            
                            var_360 = _mm256_mask_storeu_ps(k2_32, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), 
                                    arg6))
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 2))
                        int64_t k2_34 = _kand_mask8(k1_43, arg5)
                        _kortest_mask8_u8(k2_34, k2_34)
                        var_4d0 = zmm1[0].o
                        
                        if (not(z))
                            int64_t k3_41 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, arg25, 6)
                            _kortest_mask8_u8(k3_41, k3_41)
                            
                            if (not(z))
                                var_3a0 = _mm256_mask_storeu_ps(k3_41, arg19)
                                var_380 = _mm256_mask_storeu_ps(k3_41, arg19)
                                var_360 = _mm256_mask_storeu_ps(k3_41, arg19)
                            
                            int64_t k2_35 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k2_34, arg25, 6, 4)
                            _kortest_mask8_u8(k2_35, k2_35)
                            
                            if (not(z))
                                var_3a0 = _mm256_mask_storeu_ps(k2_35, arg19)
                                var_380 = _mm256_mask_storeu_ps(k2_35, arg19)
                                var_360 = _mm256_mask_storeu_ps(k2_35, arg19)
                    
                    zmm1 = var_380
                    arg6 = var_440.32
                    arg7 = var_420.32
                    zmm5 = var_400.32
                    zmm0 = _mm256_sub_ps(var_3a0, arg6)
                    zmm1 = _mm256_sub_ps(zmm1, arg7)
                    zmm2 = _mm256_sub_ps(var_360, zmm5)
                    zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg18, arg6)
                    zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg18, arg7)
                    zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, arg18, zmm5)
                    var_440.32 = _mm256_mask_storeu_ps(k1_43, zmm0)
                    var_420.32 = _mm256_mask_storeu_ps(k1_43, zmm1)
                    var_400.32 = _mm256_mask_storeu_ps(k1_43, zmm2)
                    goto label_1401759ea
            else
                int64_t k3_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, arg25, 2)
                _kortest_mask8_u8(k3_21, k3_21)
                int128_t var_4c0
                int128_t var_4b0
                
                if (z)
                    arg15 = arg17
                    zmm5[0].o = var_4b0
                    arg9[0].o = var_4c0
                else
                    zmm2 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                    int64_t k4_15 = _mm256_movepi32_mask(zmm2)
                    int64_t k5_21 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_21, arg19, zmm2)
                    _kortest_mask8_u8(k5_21, k5_21)
                    
                    if (not(z))
                        zmm2 = __vpbroadcastq_ymmqq_memq(2)
                        arg16 = _mm256_mask_add_epi64(k5_21, arg16, zmm2)
                        int64_t k1_41 = _kshiftri_mask8(k5_21, 4)
                        arg15 = _mm256_mask_add_epi64(k1_41, arg15, zmm2)
                        zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg18)
                        arg6 = _mm256_mask_add_epi64(arg5, zmm0, zmm17)
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_add_epi64(arg6, arg12)
                        zmm2 = _mm256_mask_add_epi64(k1_41, 
                            _mm256_mask_add_epi64(arg5, zmm2, arg28), arg7)
                        arg6 = _mm256_mask_add_epi64(k5_21, arg6, arg7)
                        int64_t r11_2 = arg6[0].q
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t rbx_6 = arg6[0].q
                        int64_t r12_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        int64_t rsi_5 = zmm2[0].q
                        int64_t rdx_6 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t rcx_9 = zmm2[0].q
                        int64_t rax_88 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = zx.o(*(arg4 + r11_2))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r8_2), 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rbx_6), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_3), 3)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rsi_5), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_6), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_9), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rax_88), 7)
                        zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                    
                    zmm5[0].o = var_4b0
                    arg9[0].o = var_4c0
                    var_440.32 = _mm256_mask_storeu_ps(k3_21, _mm256_mask_mov_ps(k4_15, zmm2))
                    arg6 = __vpbroadcastd_ymmqq_memd(2)
                    zmm2 = _mm256_mask_and_epi32(arg5, zmm25, arg6)
                    int64_t k4_16 = _mm256_mask_test_epi32_mask(k3_21, zmm25, arg6)
                    _kortest_mask8_u8(k4_16, k4_16)
                    
                    if (not(z))
                        char temp0_639 = _cvtmask32_u32(k4_16)
                        
                        if ((temp0_639 & 1) == 0)
                            if ((temp0_639 & 2) != 0)
                                goto label_140175501
                            
                            goto label_140174b95
                        
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg16[0].q, 0)
                        
                        if ((temp0_639 & 2) != 0)
                        label_140175501:
                            int64_t rax_91 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_91, 1)
                            
                            if ((temp0_639 & 4) == 0)
                                goto label_140174b9f
                            
                            goto label_140175516
                        
                    label_140174b95:
                        
                        if ((temp0_639 & 4) == 0)
                        label_140174b9f:
                            
                            if ((temp0_639 & 8) != 0)
                                goto label_140175530
                            
                            goto label_140174ba9
                        
                    label_140175516:
                        arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_639 & 8) != 0)
                        label_140175530:
                            arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                            int64_t rax_93 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_93, 3)
                            
                            if ((temp0_639 & 0x10) == 0)
                                goto label_140174bb3
                            
                            goto label_140175550
                        
                    label_140174ba9:
                        
                        if ((temp0_639 & 0x10) != 0)
                        label_140175550:
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg15[0].q, 4)
                            
                            if ((temp0_639 & 0x20) != 0)
                            label_14017555f:
                                int64_t rax_95 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_95, 5)
                                
                                if ((temp0_639 & 0x40) == 0)
                                    goto label_140174bc7
                                
                                goto label_140175574
                        else
                        label_140174bb3:
                            
                            if ((temp0_639 & 0x20) != 0)
                                goto label_14017555f
                        
                        int64_t k5_22
                        
                        if ((temp0_639 & 0x40) != 0)
                        label_140175574:
                            arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 6)
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_639 == 0
                            
                            if (temp0_639 s< 0)
                            label_14017559b:
                                arg7[0].o = _mm256_extracti128_si256(arg15, 1)
                                int64_t rax_97 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_97, 7)
                        else
                        label_140174bc7:
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_639 == 0
                            
                            if (temp0_639 s< 0)
                                goto label_14017559b
                        
                        arg16 = _mm256_mask_add_epi64(k4_16, arg16, arg6)
                        arg15 = _mm256_mask_add_epi64(k5_22, arg15, arg6)
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(zmm5[0].o), 0xffffff01))
                    
                    var_420.32 = _mm256_mask_storeu_ps(k3_21, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6))
                    arg6 = __vpbroadcastd_ymmqq_memd(4)
                    zmm2 = _mm256_mask_and_epi32(arg5, zmm25, arg6)
                    int64_t k4_17 = _mm256_mask_test_epi32_mask(k3_21, zmm25, arg6)
                    _kortest_mask8_u8(k4_17, k4_17)
                    
                    if (z)
                        arg15 = arg17
                    else
                        char temp0_650 = _cvtmask32_u32(k4_17)
                        
                        if ((temp0_650 & 1) == 0)
                            if ((temp0_650 & 2) != 0)
                                goto label_1401755c5
                            
                            goto label_140174c48
                        
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg16[0].q, 0)
                        
                        if ((temp0_650 & 2) != 0)
                        label_1401755c5:
                            uint16_t* rax_99 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_99, 1)
                            
                            if ((temp0_650 & 4) == 0)
                                goto label_140174c52
                            
                            goto label_1401755da
                        
                    label_140174c48:
                        
                        if ((temp0_650 & 4) == 0)
                        label_140174c52:
                            
                            if ((temp0_650 & 8) != 0)
                                goto label_1401755f4
                            
                            goto label_140174c5c
                        
                    label_1401755da:
                        arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_650 & 8) != 0)
                        label_1401755f4:
                            arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                            uint16_t* rax_101 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_101, 3)
                            
                            if ((temp0_650 & 0x10) == 0)
                                goto label_140174c66
                            
                            goto label_140175614
                        
                    label_140174c5c:
                        
                        if ((temp0_650 & 0x10) != 0)
                        label_140175614:
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg15[0].q, 4)
                            
                            if ((temp0_650 & 0x20) != 0)
                            label_140175623:
                                uint16_t* rax_103 = __vpextrq_gpr64q_xmmdq_immb(arg15[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_103, 5)
                                
                                if ((temp0_650 & 0x40) == 0)
                                    goto label_140174c7a
                                
                                goto label_140175638
                        else
                        label_140174c66:
                            
                            if ((temp0_650 & 0x20) != 0)
                                goto label_140175623
                        
                        if ((temp0_650 & 0x40) != 0)
                        label_140175638:
                            arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 6)
                            z = temp0_650 == 0
                            
                            if (temp0_650 s< 0)
                            label_140175650:
                                arg6[0].o = _mm256_extracti128_si256(arg15, 1)
                                uint16_t* rax_105 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_105, 7)
                        else
                        label_140174c7a:
                            z = temp0_650 == 0
                            
                            if (temp0_650 s< 0)
                                goto label_140175650
                        
                        arg15 = arg17
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(arg9[0].o), 0xffffff01))
                    
                    zmm2 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6)
                    var_400.32 = _mm256_mask_storeu_ps(k3_21, zmm2)
                
                int64_t k2_16 = _mm256_cmp_epi32_mask(
                    _kxor_mask8(k2_15, 
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg25, 2)), 
                    arg22, arg10, 4)
                _kortest_mask8_u8(k2_16, k2_16)
                var_4b0 = zmm5[0].o
                var_4c0 = arg9[0].o
                
                if (not(z))
                    int64_t k1_49 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, arg25, 6)
                    _kortest_mask8_u8(k1_49, k1_49)
                    
                    if (not(z))
                        var_440.32 = _mm256_mask_storeu_ps(k1_49, arg19)
                        var_420.32 = _mm256_mask_storeu_ps(k1_49, arg19)
                        var_400.32 = _mm256_mask_storeu_ps(k1_49, arg19)
                    
                    int64_t k1_50 =
                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k2_16, arg25, 6, 4)
                    _kortest_mask8_u8(k1_50, k1_50)
                    
                    if (not(z))
                        var_440.32 = _mm256_mask_storeu_ps(k1_50, arg19)
                        var_420.32 = _mm256_mask_storeu_ps(k1_50, arg19)
                        var_400.32 = _mm256_mask_storeu_ps(k1_50, arg19)
                
                k1_43 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg14, arg11, 4), arg22, 
                    arg10, 4)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z))
                    goto label_140174d48
            arg12 = arg13
            arg28 = _mm256_mask_load_epi64(arg5, var_5a0_1)
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg22, arg10)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
                goto label_1401759f6
        zmm2[0].o = var_440
        int128_t var_430
        arg6[0].o = var_430
        arg7[0].o = var_420
        int128_t var_410
        zmm5[0].o = var_410
        arg8[0].o = var_400
        int128_t var_3f0
        arg9[0].o = var_3f0
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, arg8[0].o, arg18[0].o)
        arg8[0].o = _mm_mask_unpackhi_ps(arg5, arg8[0].o, arg18[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        arg7[0].o = zmm1[0].q | zmm0[0].q << 0x40
        int128_t var_280 = arg7[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = zmm2[0].q | arg8[0] << 0x40
        int128_t var_260_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, arg9[0].o, arg18[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(arg5, arg9[0].o, arg18[0].o)
        zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5[0].o)
        arg7[0].o = zmm2[0].q | zmm0[0].q << 0x40
        int128_t var_240_1 = arg7[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = arg6[0].q | zmm1[0].q << 0x40
        int128_t var_220_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t rcx_18
        int64_t rdi_14
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rdi_14 & rol.q(-2, rcx_18.b))
            uint64_t rax_116 = _tzcnt_u64(i_1)
            int256_t var_2a0 = _mm256_mask_store_epi64(arg5, arg20)
            rdi_14 = i_1 & not.q(1 << (rax_116 u% 0x40))
            zmm0[0].o = (&var_280)[rax_116]
            *(arg1 + sx.q(*(&var_2a0 + ((zx.q(rax_116.d) & 7) << 2))) * 0x30 + 0x10) = zmm0[0].o
            rcx_18 = _tzcnt_u64(rdi_14)
            zmm0[0].o = (&var_280)[rcx_18]
            *(arg1 + sx.q(*(&var_2a0 + ((zx.q(rcx_18.d) & 7) << 2))) * 0x30 + 0x10) = zmm0[0].o
        
        r10 += 8
        z = r10 == rdx_4
        arg9[0].o = data_142fc92e0
    while (r10 - rdx_4 s< 0 != add_overflow(r10, neg.d(rdx_4)))
    
    result = zx.q(arg32)
    z_1 = r10 == result.d
    
    if (r10 - result.d s< 0 != add_overflow(r10, neg.d(result.d)))
        goto label_140175b93
arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return result
