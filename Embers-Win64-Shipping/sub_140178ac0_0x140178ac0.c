// 函数: sub_140178ac0
// 地址: 0x140178ac0
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
float zmm2[0x8]
zmm2[0].o = arg29
uint16_t* r10 = arg27
int32_t rcx_4 = ((arg31 s>> 0x1f u>> 0x1d) + arg31) & 0xfffffff8
uint64_t result
int32_t var_6c0[0x8]
float var_6a0[0x8]
uint32_t r14
uint32_t zmm0[0x8]
float zmm1[0x8]
uint32_t zmm5[0x8]
uint32_t zmm17[0x8]
uint64_t zmm18[0x4]
uint64_t zmm19[0x4]
uint32_t zmm20[0x8]
bool z_1

if (rcx_4 s<= 0)
    r14 = 0
    result = zx.q(arg31)
    z_1 = 0 == result.d
    
    if (0 - result.d s< 0 != add_overflow(0, neg.d(result.d)))
    label_14017bd5b:
        zmm0 = _mm256_mask_set1_epi32(arg5, r14)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
        zmm2 = _mm256_mask_set1_epi32(arg5, result.d)
        uint64_t k6_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm2, zmm1)
        arg6 = _mm256_slli_epi32(zmm1, 3)
        int64_t k1_52 = __kmovq_maskmskw_masku64_avx512(k6_9)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        int64_t k1_53
        uint32_t temp0_958[0x8]
        temp0_958, k1_53 = _mm256_mmask_i32gather_epi32(k1_52, *(arg2 + arg6[0].q))
        arg11 = temp0_958
        arg6 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
        int64_t k1_54 = __kmovq_maskmskw_masku64_avx512(k6_9)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k1_55
        uint32_t temp0_961[0x8]
        temp0_961, k1_55 = _mm256_mmask_i32gather_epi32(k1_54, *(arg2 + arg6[0].q))
        arg7 = temp0_961
        arg6[0].o = zx.o(arg4)
        arg6 = _mm256_mullo_epi32(arg7, _mm256_broadcastd_epi32(_mm256_slli_epi32(arg6, 2)[0]))
        int64_t k1_56 = __kmovq_maskmskw_masku64_avx512(k6_9)
        arg24[0].o = _mm_mask_xor_epi32(arg5, arg24[0].o, arg24[0].o)
        int64_t k1_57
        uint32_t temp0_966[0x8]
        temp0_966, k1_57 = _mm256_mmask_i32gather_epi32(k1_56, *(arg3 + arg6[0].q))
        char i_2 = _cvtmask32_u32(k6_9)
        arg15[0].o = zx.o(0)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        uint64_t k7_13 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
            _mm256_cmp_epi32_mask(arg5, temp0_966, arg8, 4), zmm2, zmm1)
        _kortest_mask8_u8(k7_13, k7_13)
        int128_t var_580
        int128_t var_560
        int128_t var_540
        
        if (not(z_1))
            zmm0[0].o = zx.o(r10)
            zmm1[0].o = _mm256_extracti32x4_epi32(arg5, temp0_966, 1)
            int64_t k1_59 = __kmovq_maskmskw_masku64_avx512(k7_13)
            arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
            int64_t k1_60
            uint32_t temp0_970[0x8]
            temp0_970, k1_60 = _mm256_mmask_i32gather_epi32(k1_59, *(r10 + temp0_966[0].q))
            arg18 = temp0_970
            arg7[0].o = 4
            arg12 = _mm256_mask_srli_epi32(arg5, arg18, 0x18)
            arg10 = _mm256_mask_srli_epi32(arg5, arg18, 0x1c)
            arg6 = _mm256_slli_epi32(arg10, 2)
            int64_t k1_62
            uint32_t temp0_974[0x8]
            temp0_974, k1_62 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_13), 
                *(&data_143442890 + arg6[0].q))
            arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 7)
            zmm5 = _mm256_mask_or_epi32(k7_13, _mm256_slli_epi32(arg10, 3), arg6)
            arg6 = __vpbroadcastd_ymmqq_memd(3)
            uint64_t r9 = zx.q(zmm5[0])
            uint64_t r10_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r14_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rcx_25 = zx.q(zmm5[0])
            uint64_t rax_125 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rbx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rdi_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r9 + &data_1434428b0))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r10_5 + &data_1434428b0), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r11_4 + &data_1434428b0), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r14_1 + &data_1434428b0), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rcx_25 + &data_1434428b0), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_125 + &data_1434428b0), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_13 + &data_1434428b0), 6)
            arg9[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdi_14 + &data_1434428b0), 7)
            int64_t k1_63 = _mm256_cmp_epi32_mask(k7_13, arg10, arg6, 4)
            _kortest_mask8_u8(k1_63, k1_63)
            arg7[0].o = zx.o(0)
            
            if (not(z_1))
                arg7 = _mm256_mask_cvtepu8_epi32(k1_63, zmm5[0].o)
            
            zmm17 = _mm256_mask_cvtepi32_epi64(arg5, temp0_966[0].o)
            zmm18 = _mm256_mask_cvtepi32_epi64(arg5, zmm1[0].o)
            zmm1 = _mm256_broadcastq_epi64(arg9[0].q)
            int64_t temp0_998[0x4] =
                __vpandq_ymmu64_maskmskw_ymmu64_memu64_avx512(arg5, arg18, data_143442840)
            zmm2 = _mm256_mask_mov_epi32(k7_13, temp0_974)
            zmm19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k7_13, 4)
            int64_t k1_64 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k7_13, arg10, arg6)
            _kortest_mask8_u8(k1_64, k1_64)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            
            if (z_1)
                zmm5[0].o = zx.o(0)
            else
                zmm5 = _mm256_mask_cvtepu8_epi32(k1_64, zmm5[0].o)
                arg7 = _mm256_mask_set1_epi32(k1_64, 1)
            
            uint16_t* r10_6 = arg27
            int32_t temp0_1004[0x8] = _mm256_mask_madd_epi16(arg5, zmm5, zmm19)
            arg13 = _mm256_mullo_epi32(arg7, zmm2)
            zmm20 = _mm256_mask_add_epi64(arg5, zmm1, zmm18)
            zmm19 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
            int64_t k3_42 = _mm256_cmp_epu32_mask(k7_13, temp0_998, arg6, 6)
            _kortest_mask8_u8(k3_42, k3_42)
            uint32_t zmm26[0x8]
            uint32_t zmm28[0x8]
            
            if (z_1)
                arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
            else
                zmm0 = __vpbroadcastd_ymmqq_memd(0x8000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                int64_t k4_32 = _mm256_mask_testn_epi32_mask(k3_42, arg18, zmm0)
                _kortest_mask8_u8(k4_32, k4_32)
                int64_t k3_43
                
                if (z_1)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                    arg15[0].o = zx.o(0)
                    arg6[0].o = arg29
                    k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                    _kortest_mask8_u8(k3_43, k3_43)
                    
                    if (not(z_1))
                    label_14017c0bd:
                        int64_t k1_65 = __vpcmpud_maskmskw_maskmskw_ymmu32_memu32_imm8_avx512(arg5, 
                            temp0_998, 2, 1)
                        zmm1[0].o = _mm_movm_epi16(k3_43)
                        zmm0[0].o = zx.o(0)
                        rax_125.b = zx.o(0) f>= arg6[0]
                        char temp2_1 = rax_125.b
                        rax_125.b = neg.b(rax_125.b)
                        z_1 = neg.b(temp2_1) == 0
                        arg9[0].o = _mm_mask_set1_epi8(arg5, rax_125.d)
                        arg9[0].o = _mm_mask_loadu_epi16(k1_65, data_142fc92e0)
                        zmm2[0].o = arg9[0].o & zmm1[0].o
                        int64_t k0_15 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                            zmm2[0].o, data_142fc92e0)
                        _kortest_mask8_u8(k0_15, k0_15)
                        
                        if (not(z_1))
                            int64_t k1_66 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                k0_15, zmm2[0].o, data_142fc92e0)
                            arg20 = _mm256_mask_mov_epi32(k1_66, arg20)
                            arg21 = _mm256_mask_mov_epi32(k1_66, arg21)
                        
                        zmm2[0].o = arg9[0].o ^ data_142fc92e0
                        arg19[0].o = _mm_mask_and_epi64(k0_15, zmm1[0].o, zmm2[0].o)
                        arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_15, arg19[0].o, 
                            data_142fc92e0)
                        zmm1[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z_1)
                            arg25 = _mm256_mask_mov_epi64(arg5, arg21)
                        else
                            uint32_t temp0_1041[0x8] = _mm256_mask_add_epi32(arg5, temp0_998, 
                                _mm256_cmpeq_epi32(zmm2, zmm2))
                            arg6[0].o f- 1f
                            z_1 = arg6[0] f== 1f
                            
                            if (not(arg6[0] f< 1f))
                                int64_t k1_70 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                    arg5, arg19[0].o, data_142fc92e0)
                                arg20 = _mm256_mask_blend_epi32(k1_70, temp0_1041, arg20)
                                arg25 = _mm256_mask_mov_epi32(k1_70, arg21)
                            else
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, temp0_1004, 1)
                                zmm1 = _mm256_cvtepu32_epi64(zmm1[0].o)
                                zmm2 = _mm256_mask_cvtepu32_epi64(arg5, temp0_1004[0].o)
                                zmm0[0].o = arg6[0].o
                                arg6 = _mm256_mask_mullo_epi32(arg5, arg13, temp0_998)
                                arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                zmm2 = _mm256_mask_add_epi64(arg5, zmm19, zmm2)
                                zmm5 = __vpbroadcastq_ymmqq_memq(3)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm20, zmm1)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm2 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm2, zmm5))
                                zmm1 = _mm256_add_epi64(arg7, _mm256_add_epi64(zmm1, zmm5))
                                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                                zmm26 = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                                zmm28 = _mm256_mask_and_epi64(arg5, zmm2, arg6)
                                char temp0_1059 = _cvtmask32_u32(arg5)
                                uint32_t rdi_15 = arg28 - 2
                                float temp0_1060[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
                                float temp0_1061[0x8] = _mm256_mask_cvtepi32_ps(arg5, temp0_1041)
                                float temp0_1062[0x8] = _mm256_mul_ps(temp0_1060, temp0_1061)
                                temp0_1061[0].o = arg23[0].o
                                temp0_1061[0] = float.s(arg28 - 1)
                                zmm0[0].o = temp0_1061[0].o f* zmm0[0]
                                int64_t var_4d0
                                var_4d0.o = zmm0[0].o
                                int32_t rax_127 = int.d(zmm0[0])
                                rax_125 = zx.q(rax_127) & zx.q(not.d(rax_127 s>> 0x1f))
                                
                                if (rdi_15 s> rax_125.d)
                                    rdi_15 = rax_125.d
                                
                                zmm1 = _mm256_cvttps_epi32(temp0_1062)
                                temp0_1061[0].o =
                                    __vxorps_xmmdq_xmmdq_xmmdq(temp0_1061[0].o, temp0_1061[0].o)
                                zmm1 = _mm256_max_epi32(zmm1, temp0_1061)
                                var_6a0 = _mm256_mask_store_epi64(arg5, temp0_1041)
                                arg25 = _mm256_mask_min_epi32(arg5, zmm1, temp0_1041)
                                int32_t var_5a0_2[0x8] = arg13
                                var_6c0[0].o = arg9[0].o
                                
                                if (arg28 s< 0x100)
                                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, arg25[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm28, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017c8e8
                                        
                                        goto label_14017c542
                                    
                                    rax_125 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017c8e8:
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017c552
                                        
                                        goto label_14017c900
                                    
                                label_14017c542:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017c552:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017c921
                                        
                                        goto label_14017c560
                                    
                                label_14017c900:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_125 = zx.q(*arg7[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_125.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017c921:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017c56f
                                        
                                        goto label_14017c949
                                    
                                label_14017c560:
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017c949:
                                        rax_125 = zx.q(*zmm2[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14017c960:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14017c581
                                            
                                            goto label_14017c971
                                    else
                                    label_14017c56f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017c960
                                    
                                    int32_t var_320
                                    bool cond:9_1
                                    bool cond:11_1
                                    bool cond:12_1
                                    bool cond:17_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14017c971:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_125 = zx.q(*arg6[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 6)
                                        cond:9_1 = temp0_1059 == 0
                                        cond:11_1 = temp0_1059 == 0
                                        cond:12_1 = temp0_1059 == 0
                                        cond:17_1 = temp0_1059 == 0
                                        var_320.32 = arg12
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017c995:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 7)
                                    else
                                    label_14017c581:
                                        cond:9_1 = temp0_1059 == 0
                                        cond:11_1 = temp0_1059 == 0
                                        cond:12_1 = temp0_1059 == 0
                                        cond:17_1 = temp0_1059 == 0
                                        var_320.32 = arg12
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017c995
                                    
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    zmm1[0].o &= zmm2[0].o
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg26 = _mm256_mask_set1_epi32(arg5, rdi_15)
                                    int64_t k4_34 = _mm256_cmp_epi32_mask(arg5, arg26, zmm1, 5)
                                    arg14[0].o = _mm_movm_epi16(k4_34)
                                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg19[0].o, arg14[0].o)
                                    int64_t k0_20 =
                                        _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(k0_20, k0_20)
                                    arg13 = _mm256_mask_mov_epi64(k0_20, arg25)
                                    
                                    if (not(cond:9_1))
                                        arg16 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_34, arg25, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg23 = _mm256_mask_sub_epi32(k0_20, arg25, arg12)
                                        int64_t k0_21 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_34, temp0_998, arg23)
                                        arg7[0].o = _mm_movm_epi16(k0_21)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_21, arg19[0].o, arg7[0].o)
                                        k0_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_21, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_20, k0_20)
                                        
                                        if (cond:12_1)
                                            arg13 = arg16
                                        else
                                            char rdi_17 = _cvtmask32_u32(k0_20)
                                            arg17[0].o = data_142fc92e0
                                            _mm256_mask_mov_epi64(k0_20, arg25)
                                            bool cond:30_1
                                            
                                            do
                                                zmm1 = _mm256_mask_mov_epi64(k0_20, arg23)
                                                arg13 = _mm256_mask_add_epi64(k0_20, zmm28, 
                                                    _mm256_mask_cvtepi32_epi64(k0_20, zmm1[0].o))
                                                int64_t k0_22 = _mm_mask_test_epi16_mask(k0_20, 
                                                    zmm5[0].o, arg17[0].o)
                                                char temp0_1159 = _cvtmask32_u32(k0_22)
                                                
                                                if ((temp0_1159 & 1) == 0)
                                                    if ((temp0_1159 & 2) != 0)
                                                        goto label_14017c640
                                                    
                                                    goto label_14017c743
                                                
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_1159 & 2) != 0)
                                                label_14017c640:
                                                    uint16_t rax_140[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_140, 1)
                                                    zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    
                                                    if ((temp0_1159 & 4) == 0)
                                                        goto label_14017c753
                                                    
                                                    goto label_14017c658
                                                
                                            label_14017c743:
                                                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                
                                                if ((temp0_1159 & 4) == 0)
                                                label_14017c753:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1159 & 8) != 0)
                                                        goto label_14017c67a
                                                    
                                                    goto label_14017c762
                                                
                                            label_14017c658:
                                                arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg8[0].q), 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1159 & 8) != 0)
                                                label_14017c67a:
                                                    arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_144[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_144, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_22, zmm26, zmm5)
                                                    
                                                    if ((temp0_1159 & 0x10) == 0)
                                                        goto label_14017c772
                                                    
                                                    goto label_14017c6a6
                                                
                                            label_14017c762:
                                                arg13 = _mm256_mask_add_epi64(k0_22, zmm26, zmm5)
                                                
                                                if ((temp0_1159 & 0x10) == 0)
                                                label_14017c772:
                                                    
                                                    if ((temp0_1159 & 0x20) != 0)
                                                        goto label_14017c6bb
                                                    
                                                    goto label_14017c77c
                                                
                                            label_14017c6a6:
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 4)
                                                
                                                if ((temp0_1159 & 0x20) != 0)
                                                label_14017c6bb:
                                                    uint16_t rax_148[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_148, 5)
                                                    
                                                    if ((temp0_1159 & 0x40) == 0)
                                                        goto label_14017c786
                                                    
                                                    goto label_14017c6cd
                                                
                                            label_14017c77c:
                                                
                                                if ((temp0_1159 & 0x40) != 0)
                                                label_14017c6cd:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, zx.d(*zmm5[0].q), 6)
                                                    
                                                    if (temp0_1159 s< 0)
                                                    label_14017c6e9:
                                                        zmm5[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint16_t rax_152[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 
                                                            1))
                                                        arg9[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg9[0].o, rax_152, 7)
                                                else
                                                label_14017c786:
                                                    
                                                    if (temp0_1159 s< 0)
                                                        goto label_14017c6e9
                                                
                                                zmm5[0].o = arg9[0].o & zmm2[0].o
                                                zmm5 = _mm256_cvtepu16_epi32(zmm5[0].o)
                                                arg8[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_22, zmm5, arg26), 
                                                    arg7[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_72 = _mm_mask_testn_epi16_mask(k0_22, 
                                                    arg8[0].o, zmm2[0].o)
                                                zmm0[0].o =
                                                    _mm_mask_and_epi64(k0_22, arg8[0].o, arg19[0].o)
                                                int64_t k0_23 = _mm_mask_test_epi16_mask(k0_22, 
                                                    zmm0[0].o, zmm2[0].o)
                                                rax_125 = zx.q(_cvtmask32_u32(k0_23))
                                                cond:11_1 = rdi_17 == rax_125.b
                                                cond:17_1 = rdi_17 == rax_125.b
                                                cond:30_1 = rdi_17 != rax_125.b
                                                
                                                if (rdi_17 != rax_125.b)
                                                    zmm5[0].o = arg8[0].o ^ arg7[0].o
                                                
                                                arg13 = _mm256_mask_mov_epi32(k1_72, arg16)
                                                arg23 = _mm256_mask_sub_epi32(k0_23, zmm1, arg12)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_23, temp0_998, arg23), 
                                                    zmm5[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_23, arg7[0].o, arg19[0].o)
                                                k0_20 = _mm_mask_test_epi16_mask(k0_23, zmm5[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_20, k0_20)
                                                rdi_17 = _cvtmask32_u32(k0_20)
                                                arg6 = zmm1
                                                arg16 = arg13
                                            while (cond:30_1)
                                    
                                    zmm1[0].o = arg14[0].o ^ data_142fc92e0
                                    arg6[0].o = _mm_mask_and_epi64(k0_20, arg19[0].o, zmm1[0].o)
                                    int64_t k0_27 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, 
                                        arg6[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_27, k0_27)
                                    
                                    if (not(cond:11_1))
                                        arg7 = _mm256_mask_mov_epi32(k4_34, arg13)
                                        arg14[0].o = zx.o(0)
                                        uint32_t temp0_1245[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg16 = _mm256_mask_add_epi32(k0_27, arg25, temp0_1245)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_27, arg16, arg14), 
                                            zmm1[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_27, arg9[0].o, arg19[0].o)
                                        k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_27, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_27, k0_27)
                                        
                                        if (cond:17_1)
                                            arg13 = arg7
                                        else
                                            char rdi_19 = _cvtmask32_u32(k0_27)
                                            arg25[0].o = _mm_mask_load_epi64(k0_27, data_142fc92e0)
                                            bool cond:34_1
                                            
                                            do
                                                zmm0 = _mm256_cvtepi32_epi64(arg16[0].o)
                                                arg6 = _mm256_mask_add_epi64(k0_27, zmm28, zmm0)
                                                int64_t k0_28 = _mm_mask_test_epi16_mask(k0_27, 
                                                    zmm5[0].o, arg25[0].o)
                                                char temp0_1268 = _cvtmask32_u32(k0_28)
                                                
                                                if ((temp0_1268 & 1) == 0)
                                                    if ((temp0_1268 & 2) != 0)
                                                        goto label_14017cc86
                                                    
                                                    goto label_14017cd7c
                                                
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*arg6[0].q), 0)
                                                
                                                if ((temp0_1268 & 2) != 0)
                                                label_14017cc86:
                                                    uint32_t rax_173 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_173, 1)
                                                    zmm5[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    
                                                    if ((temp0_1268 & 4) == 0)
                                                        goto label_14017cd8c
                                                    
                                                    goto label_14017cc9e
                                                
                                            label_14017cd7c:
                                                zmm5[0].o = _mm256_extracti128_si256(arg16, 1)
                                                
                                                if ((temp0_1268 & 4) == 0)
                                                label_14017cd8c:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1268 & 8) != 0)
                                                        goto label_14017ccc0
                                                    
                                                    goto label_14017cd9b
                                                
                                            label_14017cc9e:
                                                zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*zmm0[0].q), 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1268 & 8) != 0)
                                                label_14017ccc0:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    uint32_t rax_177 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_177, 3)
                                                    arg6 = _mm256_mask_add_epi64(k0_28, zmm26, zmm5)
                                                    
                                                    if ((temp0_1268 & 0x10) == 0)
                                                        goto label_14017cdab
                                                    
                                                    goto label_14017ccec
                                                
                                            label_14017cd9b:
                                                arg6 = _mm256_mask_add_epi64(k0_28, zmm26, zmm5)
                                                
                                                if ((temp0_1268 & 0x10) == 0)
                                                label_14017cdab:
                                                    
                                                    if ((temp0_1268 & 0x20) != 0)
                                                        goto label_14017cd01
                                                    
                                                    goto label_14017cdb5
                                                
                                            label_14017ccec:
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm1[0].o, zx.d(*arg6[0].q), 4)
                                                
                                                if ((temp0_1268 & 0x20) != 0)
                                                label_14017cd01:
                                                    uint32_t rax_181 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, rax_181, 5)
                                                    
                                                    if ((temp0_1268 & 0x40) == 0)
                                                        goto label_14017cdbf
                                                    
                                                    goto label_14017cd13
                                                
                                            label_14017cdb5:
                                                
                                                if ((temp0_1268 & 0x40) != 0)
                                                label_14017cd13:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm1[0].o, zx.d(*zmm0[0].q), 6)
                                                    
                                                    if (temp0_1268 s< 0)
                                                    label_14017cd2f:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(arg6, 1)
                                                        uint32_t rax_185 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1))
                                                        zmm1[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm1[0].o, rax_185, 7)
                                                else
                                                label_14017cdbf:
                                                    
                                                    if (temp0_1268 s< 0)
                                                        goto label_14017cd2f
                                                
                                                zmm0[0].o = zmm1[0].o & zmm2[0].o
                                                uint32_t temp0_1272[0x8] =
                                                    _mm256_cvtepu16_epi32(zmm0[0].o)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_28, arg26, temp0_1272, 
                                                        5), 
                                                    arg9[0].o)
                                                arg6[0].o = zx.o(0)
                                                int64_t k1_80 = _mm_mask_testn_epi16_mask(k0_28, 
                                                    zmm5[0].o, zmm2[0].o)
                                                temp0_1272[0].o =
                                                    _mm_mask_and_epi64(k0_28, zmm5[0].o, arg19[0].o)
                                                int64_t k0_29 = _mm_mask_test_epi16_mask(k0_28, 
                                                    temp0_1272[0].o, zmm2[0].o)
                                                rax_125 = zx.q(_cvtmask32_u32(k0_29))
                                                cond:34_1 = rdi_19 != rax_125.b
                                                
                                                if (rdi_19 != rax_125.b)
                                                    arg6[0].o = zmm5[0].o ^ arg9[0].o
                                                
                                                arg16 = _mm256_add_epi32(arg16, temp0_1245)
                                                arg13 = _mm256_mask_mov_epi32(k1_80, arg7)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_29, arg16, arg14), 
                                                    arg6[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_29, arg9[0].o, arg19[0].o)
                                                k0_27 = _mm_mask_test_epi16_mask(k0_29, zmm5[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_27, k0_27)
                                                rdi_19 = _cvtmask32_u32(k0_27)
                                                arg7 = arg13
                                            while (cond:34_1)
                                    
                                    arg20 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, 
                                            arg19[0].o, data_142fc92e0), 
                                        arg13, arg20)
                                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_27, arg20[0].o)
                                    zmm1 = _mm256_mask_add_epi64(k0_27, zmm28, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                        arg12 = var_320.32
                                        
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017eae5
                                        
                                        goto label_14017e992
                                    
                                    rax_125 = zmm1[0].q
                                    arg9[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg12 = var_320.32
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017eae5:
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg20, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017e9a2
                                        
                                        goto label_14017eafd
                                    
                                label_14017e992:
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg20, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017e9a2:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017eb1e
                                        
                                        goto label_14017e9b0
                                    
                                label_14017eafd:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_125 = zx.q(*zmm0[0].q)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_125.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017eb1e:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 3)
                                        zmm1 = _mm256_mask_add_epi64(k0_27, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017e9bf
                                        
                                        goto label_14017eb46
                                    
                                label_14017e9b0:
                                    zmm1 = _mm256_mask_add_epi64(k0_27, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017eb46:
                                        rax_125 = zx.q(*zmm1[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14017eb5d:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14017e9d1
                                            
                                            goto label_14017eb6e
                                    else
                                    label_14017e9bf:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017eb5d
                                    
                                    bool cond:28_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14017eb6e:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zx.q(*zmm0[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 6)
                                        cond:28_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017eb89:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_125.d, 7)
                                    else
                                    label_14017e9d1:
                                        cond:28_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017eb89
                                    
                                    int64_t k1_166 =
                                        _mm_mask_testn_epi16_mask(k0_27, arg19[0].o, zmm2[0].o)
                                    _mm256_mask_sub_epi32(k0_27, arg13, 
                                        _mm256_cmpeq_epi32(zmm0, zmm0))
                                    arg25 = _mm256_mask_mov_epi32(k1_166, arg21)
                                    zmm1[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_27, arg25, temp0_998, 5), 
                                        arg19[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_27, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:28_1))
                                        arg25 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, 
                                                    zmm2[0].o), 
                                                arg25))
                                    
                                    arg13 = var_5a0_2
                                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg25[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm28, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017ebbb
                                        
                                        goto label_14017ea47
                                    
                                    rax_125 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017ebbb:
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 1)
                                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017ea57
                                        
                                        goto label_14017ebd3
                                    
                                label_14017ea47:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017ea57:
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017ebf4
                                        
                                        goto label_14017ea65
                                    
                                label_14017ebd3:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_125 = zx.q(*zmm0[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_125.d, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017ebf4:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017ea74
                                        
                                        goto label_14017ec1c
                                    
                                label_14017ea65:
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017ec1c:
                                        rax_125 = zx.q(*arg6[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14017ec33:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14017ea86
                                            
                                            goto label_14017ec44
                                    else
                                    label_14017ea74:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017ec33
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14017ec44:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zx.q(*zmm0[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 6)
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017ec63:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 7)
                                    else
                                    label_14017ea86:
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017ec63
                                    
                                    arg9[0].o = var_6c0[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                    label_14017cfad:
                                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(zmm1, zmm2), 1)
                                        float temp0_1309[0x8] = _mm256_sub_ps(
                                            _mm256_broadcast_ss(var_4d0.d), 
                                            _mm256_cvtepi32_ps(zmm2))
                                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                                        arg6 = _mm256_div_ps(temp0_1309, zmm0)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, arg25, arg25)
                                    zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm28, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017c81e
                                        
                                        goto label_14017c253
                                    
                                    rax_125 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017c81e:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017c262
                                        
                                        goto label_14017c838
                                    
                                label_14017c253:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017c262:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017c856
                                        
                                        goto label_14017c270
                                    
                                label_14017c838:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_125 = arg7[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017c856:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017c27f
                                        
                                        goto label_14017c876
                                    
                                label_14017c270:
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017c876:
                                        rax_125 = zmm2[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14017c889:
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14017c291
                                            
                                            goto label_14017c89d
                                    else
                                    label_14017c27f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017c889
                                    
                                    bool cond:10_1
                                    bool cond:13_1
                                    bool cond:14_1
                                    bool cond:18_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14017c89d:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_125 = arg6[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 6)
                                        zmm0 = arg12
                                        cond:10_1 = temp0_1059 == 0
                                        cond:13_1 = temp0_1059 == 0
                                        cond:14_1 = temp0_1059 == 0
                                        cond:18_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017c8b9:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_14017c291:
                                        zmm0 = arg12
                                        cond:10_1 = temp0_1059 == 0
                                        cond:13_1 = temp0_1059 == 0
                                        cond:14_1 = temp0_1059 == 0
                                        cond:18_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017c8b9
                                    
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg16 = _mm256_mask_set1_epi32(arg5, rdi_15)
                                    int64_t k4_33 = _mm256_cmp_epi32_mask(arg5, arg16, zmm1, 5)
                                    arg8[0].o = _mm_movm_epi16(k4_33)
                                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg19[0].o, arg8[0].o)
                                    int64_t k0_16 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_16, k0_16)
                                    arg7 = _mm256_mask_mov_epi64(k0_16, arg25)
                                    
                                    if (not(cond:10_1))
                                        arg14 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_33, arg25, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        zmm2 = _mm256_mask_sub_epi32(k0_16, arg25, arg12)
                                        int64_t k0_17 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_33, temp0_998, zmm2)
                                        arg9[0].o = _mm_movm_epi16(k0_17)
                                        arg26[0].o =
                                            _mm_mask_and_epi64(k0_17, arg19[0].o, arg9[0].o)
                                        k0_16 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_17, arg26[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_16, k0_16)
                                        
                                        if (cond:14_1)
                                            arg7 = arg14
                                        else
                                            char rdi_16 = _cvtmask32_u32(k0_16)
                                            arg13[0].o = data_142fc92e0
                                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            _mm256_mask_mov_epi64(k0_16, arg25)
                                            bool cond:31_1
                                            
                                            do
                                                arg23 = _mm256_mask_mov_epi64(k0_16, zmm2)
                                                zmm2 = _mm256_add_epi32(zmm2, zmm2)
                                                arg7 = _mm256_mask_add_epi64(k0_16, zmm28, 
                                                    _mm256_cvtepi32_epi64(zmm2[0].o))
                                                int64_t k0_18 = _mm_mask_test_epi16_mask(k0_16, 
                                                    arg26[0].o, arg13[0].o)
                                                char temp0_1106 = _cvtmask32_u32(k0_18)
                                                
                                                if ((temp0_1106 & 1) == 0)
                                                    if ((temp0_1106 & 2) != 0)
                                                        goto label_14017c342
                                                    
                                                    goto label_14017c436
                                                
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0].q, 0)
                                                
                                                if ((temp0_1106 & 2) != 0)
                                                label_14017c342:
                                                    int64_t rax_129 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_129, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    
                                                    if ((temp0_1106 & 4) == 0)
                                                        goto label_14017c446
                                                    
                                                    goto label_14017c35d
                                                
                                            label_14017c436:
                                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1106 & 4) == 0)
                                                label_14017c446:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_1106 & 8) != 0)
                                                        goto label_14017c37c
                                                    
                                                    goto label_14017c455
                                                
                                            label_14017c35d:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *zmm5[0].q, 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_1106 & 8) != 0)
                                                label_14017c37c:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_131 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_131, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_18, zmm26, zmm2)
                                                    
                                                    if ((temp0_1106 & 0x10) == 0)
                                                        goto label_14017c465
                                                    
                                                    goto label_14017c3a2
                                                
                                            label_14017c455:
                                                arg7 = _mm256_mask_add_epi64(k0_18, zmm26, zmm2)
                                                
                                                if ((temp0_1106 & 0x10) == 0)
                                                label_14017c465:
                                                    
                                                    if ((temp0_1106 & 0x20) != 0)
                                                        goto label_14017c3b1
                                                    
                                                    goto label_14017c46f
                                                
                                            label_14017c3a2:
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0].q, 4)
                                                
                                                if ((temp0_1106 & 0x20) != 0)
                                                label_14017c3b1:
                                                    int64_t rax_133 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_133, 5)
                                                    
                                                    if ((temp0_1106 & 0x40) == 0)
                                                        goto label_14017c479
                                                    
                                                    goto label_14017c3c6
                                                
                                            label_14017c46f:
                                                
                                                if ((temp0_1106 & 0x40) != 0)
                                                label_14017c3c6:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *zmm2[0].q, 6)
                                                    
                                                    if (temp0_1106 s< 0)
                                                    label_14017c3df:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_135 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            arg6[0].o, *rax_135, 7)
                                                else
                                                label_14017c479:
                                                    
                                                    if (temp0_1106 s< 0)
                                                        goto label_14017c3df
                                                
                                                zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_18, zmm2, arg16), 
                                                    arg9[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_68 = _mm_mask_testn_epi16_mask(k0_18, 
                                                    zmm2[0].o, zmm1[0].o)
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_18, zmm2[0].o, arg19[0].o)
                                                int64_t k0_19 = _mm_mask_test_epi16_mask(k0_18, 
                                                    arg7[0].o, zmm1[0].o)
                                                rax_125 = zx.q(_cvtmask32_u32(k0_19))
                                                cond:13_1 = rdi_16 == rax_125.b
                                                cond:18_1 = rdi_16 == rax_125.b
                                                cond:31_1 = rdi_16 != rax_125.b
                                                
                                                if (rdi_16 != rax_125.b)
                                                    zmm5[0].o = zmm2[0].o ^ arg9[0].o
                                                
                                                arg7 = _mm256_mask_mov_epi32(k1_68, arg14)
                                                zmm2 = _mm256_mask_sub_epi32(k0_19, arg23, arg12)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_19, temp0_998, zmm2), 
                                                    zmm5[0].o)
                                                arg26[0].o =
                                                    _mm_mask_and_epi64(k0_19, arg9[0].o, arg19[0].o)
                                                k0_16 = _mm_mask_test_epi16_mask(k0_19, arg26[0].o, 
                                                    zmm1[0].o)
                                                _kortest_mask8_u8(k0_16, k0_16)
                                                rdi_16 = _cvtmask32_u32(k0_16)
                                                arg17 = _mm256_mask_mov_epi64(k0_16, arg23)
                                                arg14 = arg7
                                            while (cond:31_1)
                                    
                                    zmm2[0].o = arg8[0].o ^ data_142fc92e0
                                    zmm1[0].o = _mm_mask_and_epi64(k0_16, arg19[0].o, zmm2[0].o)
                                    int64_t k0_24 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_16, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_24, k0_24)
                                    
                                    if (not(cond:13_1))
                                        zmm1 = _mm256_mask_mov_epi32(k4_33, arg7)
                                        arg26[0].o =
                                            _mm_mask_xor_epi32(k0_24, arg26[0].o, arg26[0].o)
                                        uint32_t temp0_1205[0x8] = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg13 = _mm256_mask_add_epi32(k0_24, arg25, temp0_1205)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_24, arg13, arg26), 
                                            zmm2[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_24, arg9[0].o, arg19[0].o)
                                        k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_24, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_24, k0_24)
                                        
                                        if (cond:18_1)
                                            arg7 = zmm1
                                        else
                                            char rdi_18 = _cvtmask32_u32(k0_24)
                                            arg25[0].o = _mm_mask_load_epi64(k0_24, data_142fc92e0)
                                            arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            bool cond:35_1
                                            
                                            do
                                                uint32_t temp0_1227[0x8] =
                                                    _mm256_mask_add_epi32(k0_24, arg13, arg13)
                                                arg7 = _mm256_mask_add_epi64(k0_24, zmm28, 
                                                    _mm256_mask_cvtepi32_epi64(k0_24, 
                                                        temp0_1227[0].o))
                                                int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, 
                                                    zmm5[0].o, arg25[0].o)
                                                char temp0_1230 = _cvtmask32_u32(k0_25)
                                                
                                                if ((temp0_1230 & 1) == 0)
                                                    if ((temp0_1230 & 2) != 0)
                                                        goto label_14017ca41
                                                    
                                                    goto label_14017cb33
                                                
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg7[0].q, 0)
                                                
                                                if ((temp0_1230 & 2) != 0)
                                                label_14017ca41:
                                                    int64_t rax_162 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_162, 1)
                                                    zmm5[0].o = _mm256_extracti32x4_epi32(k0_25, 
                                                        temp0_1227, 1)
                                                    
                                                    if ((temp0_1230 & 4) == 0)
                                                        goto label_14017cb44
                                                    
                                                    goto label_14017ca5d
                                                
                                            label_14017cb33:
                                                zmm5[0].o =
                                                    _mm256_extracti32x4_epi32(k0_25, temp0_1227, 1)
                                                
                                                if ((temp0_1230 & 4) == 0)
                                                label_14017cb44:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1230 & 8) != 0)
                                                        goto label_14017ca7c
                                                    
                                                    goto label_14017cb53
                                                
                                            label_14017ca5d:
                                                arg8[0].o = _mm256_extracti128_si256(arg7, 1)
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg8[0].q, 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1230 & 8) != 0)
                                                label_14017ca7c:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_164 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_164, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_25, zmm26, zmm5)
                                                    
                                                    if ((temp0_1230 & 0x10) == 0)
                                                        goto label_14017cb63
                                                    
                                                    goto label_14017caa2
                                                
                                            label_14017cb53:
                                                arg7 = _mm256_mask_add_epi64(k0_25, zmm26, zmm5)
                                                
                                                if ((temp0_1230 & 0x10) == 0)
                                                label_14017cb63:
                                                    
                                                    if ((temp0_1230 & 0x20) != 0)
                                                        goto label_14017cab1
                                                    
                                                    goto label_14017cb6d
                                                
                                            label_14017caa2:
                                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm2[0].o, *arg7[0].q, 4)
                                                
                                                if ((temp0_1230 & 0x20) != 0)
                                                label_14017cab1:
                                                    int64_t rax_166 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *rax_166, 5)
                                                    
                                                    if ((temp0_1230 & 0x40) == 0)
                                                        goto label_14017cb77
                                                    
                                                    goto label_14017cac6
                                                
                                            label_14017cb6d:
                                                
                                                if ((temp0_1230 & 0x40) != 0)
                                                label_14017cac6:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm2[0].o, *zmm5[0].q, 6)
                                                    
                                                    if (temp0_1230 s< 0)
                                                    label_14017cadf:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_168 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm2[0].o, *rax_168, 7)
                                                else
                                                label_14017cb77:
                                                    
                                                    if (temp0_1230 s< 0)
                                                        goto label_14017cadf
                                                
                                                arg7 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_25, arg16, arg7, 5), 
                                                    arg9[0].o)
                                                zmm5[0].o = zx.o(0)
                                                int64_t k1_76 = _mm_mask_testn_epi16_mask(k0_25, 
                                                    arg7[0].o, arg6[0].o)
                                                arg8[0].o =
                                                    _mm_mask_and_epi64(k0_25, arg7[0].o, arg19[0].o)
                                                int64_t k0_26 = _mm_mask_test_epi16_mask(k0_25, 
                                                    arg8[0].o, arg6[0].o)
                                                rax_125 = zx.q(_cvtmask32_u32(k0_26))
                                                cond:35_1 = rdi_18 != rax_125.b
                                                
                                                if (rdi_18 != rax_125.b)
                                                    zmm5[0].o = arg7[0].o ^ arg9[0].o
                                                
                                                arg13 = _mm256_add_epi32(arg13, temp0_1205)
                                                arg7 = _mm256_mask_mov_epi32(k1_76, zmm1)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_26, arg13, arg26), 
                                                    zmm5[0].o)
                                                zmm5[0].o =
                                                    _mm_mask_and_epi64(k0_26, arg9[0].o, arg19[0].o)
                                                k0_24 = _mm_mask_test_epi16_mask(k0_26, zmm5[0].o, 
                                                    arg6[0].o)
                                                _kortest_mask8_u8(k0_24, k0_24)
                                                rdi_18 = _cvtmask32_u32(k0_24)
                                                zmm1 = arg7
                                            while (cond:35_1)
                                    
                                    arg20 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_24, 
                                            arg19[0].o, data_142fc92e0), 
                                        arg7, arg20)
                                    arg6 = _mm256_mask_add_epi32(k0_24, arg20, arg20)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, zmm28, 
                                        _mm256_cvtepi32_epi64(arg6[0].o))
                                    
                                    if ((temp0_1059 & 1) != 0)
                                        rax_125 = zmm1[0].q
                                        zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                                    
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg12 = zmm0
                                    arg13 = var_5a0_2
                                    arg9[0].o = var_6c0[0].o
                                    
                                    if ((temp0_1059 & 2) == 0)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1059 & 4) != 0)
                                            goto label_14017e800
                                        
                                        goto label_14017cea2
                                    
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) != 0)
                                    label_14017e800:
                                        zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zmm5[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) == 0)
                                            goto label_14017ceb0
                                        
                                        goto label_14017e81e
                                    
                                label_14017cea2:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) == 0)
                                    label_14017ceb0:
                                        zmm1 = _mm256_mask_add_epi64(k0_24, zmm26, arg6)
                                        
                                        if ((temp0_1059 & 0x10) != 0)
                                            goto label_14017e83e
                                        
                                        goto label_14017cebf
                                    
                                label_14017e81e:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, zmm26, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14017e83e:
                                        rax_125 = zmm1[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                        
                                        if ((temp0_1059 & 0x20) == 0)
                                            goto label_14017cec8
                                        
                                        goto label_14017e851
                                    
                                label_14017cebf:
                                    
                                    if ((temp0_1059 & 0x20) == 0)
                                    label_14017cec8:
                                        
                                        if ((temp0_1059 & 0x40) != 0)
                                            goto label_14017e865
                                        
                                        goto label_14017ced1
                                    
                                label_14017e851:
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    bool cond:29_1
                                    
                                    if ((temp0_1059 & 0x40) == 0)
                                    label_14017ced1:
                                        cond:29_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017e87d:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_14017e865:
                                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = arg6[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                        cond:29_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017e87d
                                    
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_83 =
                                        _mm_mask_testn_epi16_mask(k0_24, arg19[0].o, zmm1[0].o)
                                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                                    _mm256_mask_sub_epi32(k0_24, arg7, arg6)
                                    arg25 = _mm256_mask_mov_epi32(k1_83, arg21)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_24, arg25, temp0_998, 5), 
                                        arg19[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_24, arg6[0].o, zmm1[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:29_1))
                                        zmm0 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), 
                                            arg25)
                                        arg25 = _mm256_mask_mov_epi64(arg5, zmm0)
                                    
                                    arg7 = _mm256_mask_add_epi32(arg5, arg25, arg25)
                                    zmm1 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm28, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14017e8a6
                                        
                                        goto label_14017cf4c
                                    
                                    rax_125 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14017e8a6:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 1)
                                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14017cf5b
                                        
                                        goto label_14017e8c0
                                    
                                label_14017cf4c:
                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14017cf5b:
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14017e8de
                                        
                                        goto label_14017cf69
                                    
                                label_14017e8c0:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_125 = zmm0[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14017e8de:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14017cf78
                                        
                                        goto label_14017e8fe
                                    
                                label_14017cf69:
                                    arg6 = _mm256_mask_add_epi64(arg5, zmm26, arg7)
                                    
                                    if ((temp0_1059 & 0x10) == 0)
                                    label_14017cf78:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14017e911
                                        
                                        goto label_14017cf81
                                    
                                label_14017e8fe:
                                    rax_125 = arg6[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 4)
                                    
                                    if ((temp0_1059 & 0x20) != 0)
                                    label_14017e911:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 5)
                                        
                                        if ((temp0_1059 & 0x40) == 0)
                                            goto label_14017cf8a
                                        
                                        goto label_14017e925
                                    
                                label_14017cf81:
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14017e925:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zmm0[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 6)
                                        
                                        if (temp0_1059 s< 0)
                                        label_14017e93d:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_14017cf8a:
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14017e93d
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                        goto label_14017cfad
                                
                                zmm0[0].o = arg9[0].o & data_142fc92e0
                                zmm1 = _mm256_mask_mov_ps(
                                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, 
                                        zmm0[0].o, data_142fc92e0, 4), 
                                    arg6)
                        
                        arg15 = _mm256_mask_mov_ps(k3_43, zmm1)
                        arg21 = _mm256_mask_mov_epi64(arg5, arg25)
                else
                    zmm2[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    arg6[0].o = arg29
                    zx.o(0) f- arg6[0]
                    z_1 = 0f f== arg6[0]
                    
                    if (not(0f f< arg6[0]))
                        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                        k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                        _kortest_mask8_u8(k3_43, k3_43)
                        
                        if (not(z_1))
                            goto label_14017c0bd
                    else
                        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                        arg7[0].o = arg6[0].o
                        arg6 = _mm256_mask_add_epi32(arg5, temp0_998, zmm0)
                        arg7[0].o f- 1f
                        z_1 = arg7[0] f== 1f
                        
                        if (not(arg7[0] f< 1f))
                            arg20 = _mm256_mask_mov_epi32(k4_32, arg6)
                            arg21 = _mm256_mask_mov_epi64(arg5, arg20)
                            arg6[0].o = arg7[0].o
                            arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                            k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                            _kortest_mask8_u8(k3_43, k3_43)
                            
                            if (not(z_1))
                                goto label_14017c0bd
                        else
                            zmm0 = _mm256_broadcastss_ps(arg7[0].o)
                            zmm2 = _mm256_cvtepi32_ps(arg6)
                            arg7 = _mm256_mul_ps(zmm0, zmm2)
                            zmm5 = _mm256_round_ps(arg7, 9)
                            zmm0 = _mm256_cvttps_epi32(zmm5)
                            arg20 = _mm256_mask_min_epi32(k4_32, arg6, zmm0)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            z_1 = arg30 == 1
                            
                            if (not(z_1))
                                zmm2 = _mm256_sub_ps(arg7, zmm5)
                            
                            zmm0 =
                                _mm256_mask_sub_epi32(arg5, arg20, _mm256_cmpeq_epi32(zmm0, zmm0))
                            arg21 = _mm256_mask_min_epi32(k4_32, zmm0, arg6)
                            arg6[0].o = arg29
                            arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                            k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                            _kortest_mask8_u8(k3_43, k3_43)
                            
                            if (not(z_1))
                                goto label_14017c0bd
            
            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, temp0_1004, 1)
            int64_t temp0_1316[0x4] = _mm256_mask_cvtepu32_epi64(arg5, zmm0[0].o)
            arg22 = _mm256_mask_cvtepu32_epi64(arg5, temp0_1004[0].o)
            uint32_t temp0_1318[0x8] = _mm256_mask_mullo_epi32(arg5, arg20, arg13)
            zmm1[0].o = _mm256_extracti128_si256(temp0_1318, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
            zmm28 = _mm256_mask_cvtepi32_epi64(arg5, temp0_1318[0].o)
            zmm0 = _mm256_mask_add_epi64(arg5, zmm28, arg22)
            zmm1 = _mm256_mask_add_epi64(arg5, zmm2, temp0_1316)
            zmm26 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
            arg23 = _mm256_mask_add_epi64(arg5, zmm0, zmm19)
            int64_t k3_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 1)
            _kortest_mask8_u8(k3_44, k3_44)
            
            if (not(z_1))
                uint32_t temp0_1326[0x8] = __vpbroadcastd_ymmqq_memd(0x7000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, temp0_1326)
                uint64_t k4_35 = _mm256_mask_testn_epi32_mask(k3_44, arg18, temp0_1326)
                _kortest_mask8_u8(k4_35, k4_35)
                
                if (not(z_1))
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg22), 
                        zmm28)
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm5 = _mm256_add_epi64(zmm0, arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    uint64_t k5_44 = _kshiftri_mask8(k4_35, 4)
                    int64_t k1_87 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_88
                    float temp0_1336[0x4]
                    temp0_1336, k1_88 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_87, 
                        *(r10_6 + arg6[0].q))
                    arg19[0].o = temp0_1336
                    int64_t k1_89 = __kmovq_maskmskw_masku64_avx512(k5_44)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k1_90
                    float temp0_1338[0x4]
                    temp0_1338, k1_90 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_89, 
                        *(r10_6 + zmm5[0].q))
                    arg6[0].o = temp0_1338
                    zmm5 = __vpbroadcastq_ymmqq_memq(8)
                    arg25 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                    zmm5 = _mm256_add_epi64(arg7, zmm5)
                    int64_t k1_91 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
                    int64_t k1_92
                    float temp0_1343[0x4]
                    temp0_1343, k1_92 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_91, 
                        *(r10_6 + zmm5[0].q))
                    arg26[0].o = temp0_1343
                    int64_t k1_93 = __kmovq_maskmskw_masku64_avx512(k5_44)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int64_t k1_94
                    float temp0_1345[0x4]
                    temp0_1345, k1_94 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_93, 
                        *(r10_6 + arg25[0].q))
                    zmm5[0].o = temp0_1345
                    arg9[0].o = zx.o(0)
                    arg6 = _mm256_insertf32x4(arg5, arg19, arg6[0].o, 1)
                    zmm5 = _mm256_insertf32x4(arg5, arg26, zmm5[0].o, 1)
                    arg19 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg19)
                    arg7 = _mm256_mask_add_epi64(arg5, arg7, arg19)
                    int64_t k1_95 = __kmovq_maskmskw_masku64_avx512(k4_35)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_96
                    float temp0_1352[0x4]
                    temp0_1352, k1_96 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_95, 
                        *(r10_6 + arg7[0].q))
                    arg19[0].o = temp0_1352
                    int64_t k5_45
                    float temp0_1353[0x4]
                    temp0_1353, k5_45 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_44, 
                        *(r10_6 + zmm0[0].q))
                    arg9[0].o = temp0_1353
                    zmm0 = _mm256_insertf32x4(arg5, arg19, arg9[0].o, 1)
                    var_580.32 = _mm256_mask_storeu_ps(k4_35, arg6)
                    var_560.32 = _mm256_mask_storeu_ps(k4_35, zmm5)
                    var_540.32 = _mm256_mask_storeu_ps(k4_35, zmm0)
                
                int64_t k3_45 = _mm256_mask_test_epi32_mask(k3_44, zmm1, zmm1)
                _kortest_mask8_u8(k3_45, k3_45)
                
                if (not(z_1))
                    uint32_t temp0_1358[0x8] = _mm256_slli_epi32(arg12, 0x1f)
                    int64_t k4_36 = _mm256_movepi32_mask(temp0_1358)
                    zmm1[0].o = zx.o(0)
                    int64_t k1_97 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_45, zmm1, temp0_1358)
                    _kortest_mask8_u8(k1_97, k1_97)
                    
                    if (z_1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg23)
                        zmm1 = _mm256_mask_mov_epi64(arg5, zmm26)
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg23)
                        arg6 = _mm256_mask_add_epi64(k1_97, arg23, zmm0)
                        int64_t k5_46 = _kshiftri_mask8(k1_97, 4)
                        _mm256_mask_mov_epi64(arg5, zmm26)
                        zmm1 = _mm256_mask_add_epi64(k5_46, zmm26, zmm0)
                        arg7 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                        zmm5 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), zmm28)
                        arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                        zmm0 = _mm256_add_epi64(zmm5, zmm0)
                        int64_t k5_47 = _kshiftri_mask8(k1_97, 4)
                        zmm5[0].o = zx.o(0)
                        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                        int64_t k1_98
                        float temp0_1371[0x4]
                        temp0_1371, k1_98 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_97, 
                            *(r10_6 + zmm0[0].q))
                        arg19[0].o = temp0_1371
                        int64_t k5_48
                        float temp0_1372[0x4]
                        temp0_1372, k5_48 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_47, 
                            *(r10_6 + arg7[0].q))
                        zmm5[0].o = temp0_1372
                        arg7 = _mm256_insertf32x4(arg5, arg19, zmm5[0].o, 1)
                    
                    var_580.32 = _mm256_mask_storeu_ps(k3_45, _mm256_mask_mov_ps(k4_36, arg7))
                    uint32_t temp0_1378[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                    arg7 = _mm256_mask_and_epi32(arg5, arg18, temp0_1378)
                    int64_t k1_99 = _mm256_mask_test_epi32_mask(k3_45, arg18, temp0_1378)
                    _kortest_mask8_u8(k1_99, k1_99)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg19 = _mm256_mask_add_epi64(k1_99, arg6, zmm0)
                        int64_t k4_37 = _kshiftri_mask8(k1_99, 4)
                        int64_t k5_49 = _kshiftri_mask8(k1_99, 4)
                        int32_t temp15_1 = rax_125.d
                        int32_t temp16_1 = rax_125.d
                        rax_125 = 0
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
                        arg6 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    var_560.32 = _mm256_mask_storeu_ps(k3_45, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm5))
                    uint32_t temp0_1392[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg7 = _mm256_mask_and_epi32(arg5, arg18, temp0_1392)
                    int64_t k1_102 = _mm256_mask_test_epi32_mask(k3_45, arg18, temp0_1392)
                    _kortest_mask8_u8(k1_102, k1_102)
                    
                    if (not(z_1))
                        int64_t k4_38 = _kshiftri_mask8(k1_102, 4)
                        temp0_1392[0].o = zx.o(0)
                        int32_t temp19_1 = rax_125.d
                        int32_t temp20_1 = rax_125.d
                        rax_125 = 0
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
                        temp0_1392[0].o = temp0_1396
                        zmm1 = _mm256_insertf128_ps(zmm5, temp0_1392[0].o, 1)
                    
                    var_540.32 = _mm256_mask_storeu_ps(k3_45, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1))
            
            zmm0 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, arg10, zmm0, 4)
            int64_t k1_105 = _mm256_cmp_epi32_mask(k7_13, arg10, zmm0, 4)
            _kortest_mask8_u8(k1_105, k1_105)
            
            if (not(z_1))
                uint64_t k3_46 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 3)
                _kortest_mask8_u8(k3_46, k3_46)
                
                if (not(z_1))
                    var_6a0[0].w = _store_mask16(k6_9)
                    zmm0[0].o = zx.o(0)
                    uint32_t var_5c0_3[0x8] = zmm0
                    uint32_t var_5e0_3[0x8] = zmm0
                    uint32_t var_600_3[0x8] = zmm0
                    uint32_t var_620_3[0x8] = zmm0
                    uint32_t var_640_3[0x8] = zmm0
                    uint32_t var_660_3[0x8] = zmm0
                    int64_t k4_40 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), arg10, 3)
                    uint64_t k5_51 = _kand_mask8(k4_40, k7_13)
                    _kortest_mask8_u8(k5_51, k5_51)
                    zmm1 = _mm256_mask_mov_epi64(arg5, zmm19)
                    arg6 = _mm256_mask_mov_epi64(arg5, zmm20)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        int64_t k6_10 = _kshiftri_mask8(k5_51, 4)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_10, zmm20, zmm0)
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        arg7 = _mm256_mask_add_epi64(k5_51, zmm19, zmm0)
                        uint64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k7_13)
                        uint64_t k7_14 = _kshiftri_mask8(k5_51, 4)
                        int32_t temp8_1 = rax_125.d
                        int32_t temp9_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp8_1 == temp9_1
                        int64_t k1_107 = __kmovq_maskmskw_masku64_avx512(k5_51)
                        zmm0[0].o = zx.o(0)
                        int64_t k1_108
                        float temp0_1410[0x4]
                        temp0_1410, k1_108 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_107, *zmm19[0])
                        zmm0[0].o = temp0_1410
                        int64_t k1_109 = __kmovq_maskmskw_masku64_avx512(k7_14)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_110
                        float temp0_1411[0x4]
                        temp0_1411, k1_110 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_109, *zmm20[0].q)
                        zmm1[0].o = temp0_1411
                        var_600_3 =
                            _mm256_mask_storeu_ps(k4_40, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        zmm1 = _mm256_mask_add_epi64(k5_51, zmm19, zmm0)
                        zmm5[0].o = zx.o(0)
                        int64_t k5_52
                        float temp0_1417[0x4]
                        temp0_1417, k5_52 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_51, *arg7[0].q)
                        zmm5[0].o = temp0_1417
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k7_15
                        float temp0_1419[0x4]
                        temp0_1419, k7_15 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_14, *arg6[0].q)
                        arg7[0].o = temp0_1419
                        k7_13 = __kmovq_maskmskw_masku64_avx512(k2_36)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_10, zmm20, zmm0)
                        var_660_3 =
                            _mm256_mask_storeu_ps(k4_40, _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                    
                    int64_t k4_41 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                    int64_t k5_53 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_41, arg18, 0x2000000)
                    uint64_t k6_11 = _kand_mask8(k5_53, k7_13)
                    _kortest_mask8_u8(k6_11, k6_11)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        var_6c0[0] = _store_mask32(k7_13)
                        int64_t k7_16 = _kshiftri_mask8(k6_11, 4)
                        arg7 = _mm256_mask_add_epi64(k7_16, arg6, zmm0)
                        zmm5 = _mm256_mask_add_epi64(k6_11, zmm1, zmm0)
                        uint64_t k1_111 = _kshiftri_mask8(k6_11, 4)
                        int32_t temp11_1 = rax_125.d
                        int32_t temp12_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp11_1 == temp12_1
                        int64_t k2_37 = __kmovq_maskmskw_masku64_avx512(k6_11)
                        zmm0[0].o = zx.o(0)
                        int64_t k2_38
                        float temp0_1428[0x4]
                        temp0_1428, k2_38 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_37, *zmm1[0].q)
                        zmm0[0].o = temp0_1428
                        arg9[0].o = zx.o(0)
                        int64_t k2_40
                        float temp0_1429[0x4]
                        temp0_1429, k2_40 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k1_111), *arg6[0].q)
                        arg9[0].o = temp0_1429
                        var_5e0_3 =
                            _mm256_mask_storeu_ps(k5_53, _mm256_insertf128_ps(zmm0, arg9[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        zmm1 = _mm256_mask_add_epi64(k6_11, zmm1, zmm0)
                        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                        int64_t k6_12
                        float temp0_1435[0x4]
                        temp0_1435, k6_12 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_11, *zmm5[0].q)
                        arg19[0].o = temp0_1435
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_112
                        float temp0_1437[0x4]
                        temp0_1437, k1_112 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_111, *arg7[0].q)
                        zmm5[0].o = temp0_1437
                        arg6 = _mm256_mask_add_epi64(k7_16, arg6, zmm0)
                        k7_13 = _load_mask32(var_6c0[0])
                        var_640_3 = _mm256_mask_storeu_ps(k5_53, 
                            _mm256_insertf32x4(arg5, arg19, zmm5[0].o, 1))
                    
                    k6_9 = _load_mask16(var_6a0[0].w)
                    int64_t k4_42 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_41, arg18, 0x4000000)
                    uint64_t k5_54 = _kand_mask8(k4_42, k7_13)
                    _kortest_mask8_u8(k5_54, k5_54)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k1_113 = _kshiftri_mask8(k5_54, 4)
                        int32_t temp13_1 = rax_125.d
                        int32_t temp14_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp13_1 == temp14_1
                        int64_t k2_41 = __kmovq_maskmskw_masku64_avx512(k5_54)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k2_42
                        float temp0_1443[0x4]
                        temp0_1443, k2_42 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_41, *zmm1[0].q)
                        arg7[0].o = temp0_1443
                        zmm5[0].o = zx.o(0)
                        int64_t k2_44
                        float temp0_1444[0x4]
                        temp0_1444, k2_44 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k1_113), *arg6[0].q)
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
                        int64_t k1_114
                        float temp0_1452[0x4]
                        temp0_1452, k1_114 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_113, *arg6[0].q)
                        zmm1[0].o = temp0_1452
                        var_620_3 =
                            _mm256_mask_storeu_ps(k4_42, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    arg6 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg22), 
                        zmm28)
                    zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                    zmm1 = _mm256_add_epi64(arg6, zmm1)
                    int64_t k1_115 = _kshiftri_mask8(k3_46, 4)
                    int64_t k2_46 = __kmovq_maskmskw_masku64_avx512(k3_46)
                    arg6[0].o = zx.o(0)
                    int64_t k2_47
                    uint32_t temp0_1462[0x4]
                    temp0_1462, k2_47 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_46, 
                        *(r10_6 + zmm1[0].q))
                    arg6[0].o = temp0_1462
                    zmm1[0].o = zx.o(0)
                    int64_t k1_116
                    uint32_t temp0_1463[0x4]
                    temp0_1463, k1_116 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_115, 
                        *(r10_6 + zmm0[0].q))
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
                    float temp0_1471[0x8] = _mm256_mask_load_ps(arg5, var_620_3)
                    arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_3, arg6, var_600_3)
                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    float temp0_1475[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                    arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                        _mm256_mask_div_ps(arg5, temp0_1475, arg25), zmm5, var_5e0_3)
                    zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                arg6)), 
                            arg25), 
                        arg5, temp0_1471, var_5c0_3)
                    var_580.32 = _mm256_mask_storeu_ps(k3_46, arg7)
                    var_560.32 = _mm256_mask_storeu_ps(k3_46, zmm1)
                    var_540.32 = _mm256_mask_storeu_ps(k3_46, zmm0)
                
                int64_t k3_47 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                _ktest_mask8_u8(k3_47, k7_13)
                
                if (not(z_1))
                    int64_t k4_43 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 2)
                    _kortest_mask8_u8(k4_43, k4_43)
                    
                    if (not(z_1))
                        uint32_t temp0_1487[0x8] = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k5_56 = _mm256_movepi32_mask(temp0_1487)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_118 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_43, 
                            zmm1, temp0_1487)
                        _kortest_mask8_u8(k1_118, k1_118)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg23 = _mm256_mask_add_epi64(k1_118, arg23, zmm0)
                            int64_t k2_48 = _kshiftri_mask8(k1_118, 4)
                            zmm26 = _mm256_mask_add_epi64(k2_48, zmm26, zmm0)
                            zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg22)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm1, zmm28)
                            zmm0 = _mm256_mask_add_epi64(k2_48, _mm256_add_epi64(zmm0, zmm2), arg6)
                            zmm1 = _mm256_mask_add_epi64(k1_118, zmm1, arg6)
                            int64_t r10_7 = zmm1[0].q
                            int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t r11_5 = zmm1[0].q
                            int64_t rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_20 = zmm0[0].q
                            int64_t rsi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_28 = zmm0[0].q
                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            r10_6 = arg27
                            zmm0[0].o = zx.o(*(arg27 + r10_7))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r9_1), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r11_5), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rbx_17), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rdi_20), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rsi_10), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rcx_28), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rax_125), 7)
                            zmm1 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                        
                        var_580.32 = _mm256_mask_storeu_ps(k4_43, _mm256_mask_mov_ps(k5_56, zmm1))
                        uint32_t temp0_1512[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, temp0_1512)
                        int64_t k5_57 = _mm256_mask_test_epi32_mask(k4_43, arg18, temp0_1512)
                        _kortest_mask8_u8(k5_57, k5_57)
                        
                        if (not(z_1))
                            char temp0_1514 = _cvtmask32_u32(k5_57)
                            
                            if ((temp0_1514 & 1) == 0)
                                if ((temp0_1514 & 2) != 0)
                                    goto label_14017e0fb
                                
                                goto label_14017d7f3
                            
                            rax_125 = arg23[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                            
                            if ((temp0_1514 & 2) != 0)
                            label_14017e0fb:
                                rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                
                                if ((temp0_1514 & 4) == 0)
                                    goto label_14017d7fd
                                
                                goto label_14017e111
                            
                        label_14017d7f3:
                            
                            if ((temp0_1514 & 4) == 0)
                            label_14017d7fd:
                                
                                if ((temp0_1514 & 8) != 0)
                                    goto label_14017e12c
                                
                                goto label_14017d807
                            
                        label_14017e111:
                            temp0_1512[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                            rax_125 = temp0_1512[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                            
                            if ((temp0_1514 & 8) != 0)
                            label_14017e12c:
                                temp0_1512[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1512[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                
                                if ((temp0_1514 & 0x10) == 0)
                                    goto label_14017d811
                                
                                goto label_14017e148
                            
                        label_14017d807:
                            
                            if ((temp0_1514 & 0x10) != 0)
                            label_14017e148:
                                rax_125 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                
                                if ((temp0_1514 & 0x20) != 0)
                                label_14017e15d:
                                    rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    
                                    if ((temp0_1514 & 0x40) == 0)
                                        goto label_14017d825
                                    
                                    goto label_14017e173
                            else
                            label_14017d811:
                                
                                if ((temp0_1514 & 0x20) != 0)
                                    goto label_14017e15d
                            
                            int64_t k1_119
                            
                            if ((temp0_1514 & 0x40) != 0)
                            label_14017e173:
                                temp0_1512[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_125 = temp0_1512[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_119 = _kshiftri_mask8(k5_57, 4)
                                z_1 = temp0_1514 == 0
                                
                                if (temp0_1514 s< 0)
                                label_14017e19b:
                                    temp0_1512[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1512[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 7)
                            else
                            label_14017d825:
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_119 = _kshiftri_mask8(k5_57, 4)
                                z_1 = temp0_1514 == 0
                                
                                if (temp0_1514 s< 0)
                                    goto label_14017e19b
                            
                            arg23 = _mm256_mask_add_epi64(k5_57, arg23, arg6)
                            zmm26 = _mm256_mask_add_epi64(k1_119, zmm26, arg6)
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        var_560.32 = _mm256_mask_storeu_ps(k4_43, 
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2))
                        uint32_t temp0_1523[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, temp0_1523)
                        int64_t k1_121 = _mm256_mask_test_epi32_mask(k4_43, arg18, temp0_1523)
                        _kortest_mask8_u8(k1_121, k1_121)
                        
                        if (not(z_1))
                            char temp0_1525 = _cvtmask32_u32(k1_121)
                            
                            if ((temp0_1525 & 1) == 0)
                                if ((temp0_1525 & 2) != 0)
                                    goto label_14017e1c7
                                
                                goto label_14017d8ad
                            
                            rax_125 = arg23[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                            
                            if ((temp0_1525 & 2) != 0)
                            label_14017e1c7:
                                rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                
                                if ((temp0_1525 & 4) == 0)
                                    goto label_14017d8b7
                                
                                goto label_14017e1dd
                            
                        label_14017d8ad:
                            
                            if ((temp0_1525 & 4) == 0)
                            label_14017d8b7:
                                
                                if ((temp0_1525 & 8) != 0)
                                    goto label_14017e1f8
                                
                                goto label_14017d8c1
                            
                        label_14017e1dd:
                            temp0_1523[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                            rax_125 = temp0_1523[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                            
                            if ((temp0_1525 & 8) != 0)
                            label_14017e1f8:
                                temp0_1523[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1523[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                
                                if ((temp0_1525 & 0x10) == 0)
                                    goto label_14017d8cb
                                
                                goto label_14017e214
                            
                        label_14017d8c1:
                            
                            if ((temp0_1525 & 0x10) != 0)
                            label_14017e214:
                                rax_125 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                
                                if ((temp0_1525 & 0x20) != 0)
                                label_14017e229:
                                    rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    
                                    if ((temp0_1525 & 0x40) == 0)
                                        goto label_14017d8df
                                    
                                    goto label_14017e23f
                            else
                            label_14017d8cb:
                                
                                if ((temp0_1525 & 0x20) != 0)
                                    goto label_14017e229
                            
                            if ((temp0_1525 & 0x40) != 0)
                            label_14017e23f:
                                temp0_1523[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_125 = temp0_1523[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                z_1 = temp0_1525 == 0
                                
                                if (temp0_1525 s< 0)
                                label_14017e258:
                                    temp0_1523[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1523[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 7)
                            else
                            label_14017d8df:
                                z_1 = temp0_1525 == 0
                                
                                if (temp0_1525 s< 0)
                                    goto label_14017e258
                            
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                        var_540.32 = _mm256_mask_storeu_ps(k4_43, zmm0)
                    
                    int64_t k1_125 = _kand_mask8(
                        _kxor_mask8(k3_47, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2)), 
                        k7_13)
                    _kortest_mask8_u8(k1_125, k1_125)
                    
                    if (not(z_1))
                        int64_t k3_48 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 6)
                        _kortest_mask8_u8(k3_48, k3_48)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k3_48, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k3_48, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k3_48, zmm0)
                        
                        int64_t k1_126 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                            k1_125, arg10, 6, 4)
                        _kortest_mask8_u8(k1_126, k1_126)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k1_126, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k1_126, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k1_126, zmm0)
            
            int64_t k2_49 = _mm256_cmp_epi32_mask(k7_13, arg20, arg21, 4)
            _kortest_mask8_u8(k2_49, k2_49)
            
            if (not(z_1))
                uint32_t temp0_1537[0x8] = _mm256_mask_mullo_epi32(arg5, arg21, arg13)
                zmm1[0].o = _mm256_extracti128_si256(temp0_1537, 1)
                zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg21 = _mm256_mask_cvtepi32_epi64(arg5, temp0_1537[0].o)
                zmm0 = _mm256_mask_add_epi64(arg5, arg21, arg22)
                zmm1 = _mm256_mask_add_epi64(arg5, zmm2, temp0_1316)
                arg19 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
                arg20 = _mm256_mask_add_epi64(arg5, zmm0, zmm19)
                int64_t k3_49 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_49, arg10, 1)
                _kortest_mask8_u8(k3_49, k3_49)
                float var_480[0x8]
                float var_460[0x8]
                float var_440[0x8]
                
                if (not(z_1))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
                    zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    uint64_t k4_44 = _mm256_mask_testn_epi32_mask(k3_49, arg18, zmm0)
                    _kortest_mask8_u8(k4_44, k4_44)
                    
                    if (not(z_1))
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                        zmm0 = _mm256_add_epi64(zmm0, zmm2)
                        zmm5 = _mm256_add_epi64(zmm0, arg6)
                        arg6 = _mm256_add_epi64(arg7, arg6)
                        uint64_t k5_58 = _kshiftri_mask8(k4_44, 4)
                        int64_t k1_127 = __kmovq_maskmskw_masku64_avx512(k4_44)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_128
                        float temp0_1555[0x4]
                        temp0_1555, k1_128 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_127, *(r10_6 + arg6[0].q))
                        zmm26[0].o = temp0_1555
                        int64_t k1_129 = __kmovq_maskmskw_masku64_avx512(k5_58)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k1_130
                        float temp0_1557[0x4]
                        temp0_1557, k1_130 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_129, *(r10_6 + zmm5[0].q))
                        arg6[0].o = temp0_1557
                        zmm5 = __vpbroadcastq_ymmqq_memq(8)
                        arg23 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                        zmm5 = _mm256_add_epi64(arg7, zmm5)
                        int64_t k1_131 = __kmovq_maskmskw_masku64_avx512(k4_44)
                        zmm28[0].o = _mm_mask_xor_epi32(arg5, zmm28[0].o, zmm28[0].o)
                        int64_t k1_132
                        float temp0_1562[0x4]
                        temp0_1562, k1_132 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_131, *(r10_6 + zmm5[0].q))
                        zmm28[0].o = temp0_1562
                        int64_t k1_133 = __kmovq_maskmskw_masku64_avx512(k5_58)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_134
                        float temp0_1564[0x4]
                        temp0_1564, k1_134 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_133, *(r10_6 + arg23[0].q))
                        zmm5[0].o = temp0_1564
                        arg9[0].o = zx.o(0)
                        arg6 = _mm256_insertf32x4(arg5, zmm26, arg6[0].o, 1)
                        zmm5 = _mm256_insertf32x4(arg5, zmm28, zmm5[0].o, 1)
                        zmm26 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm26)
                        arg7 = _mm256_mask_add_epi64(arg5, arg7, zmm26)
                        int64_t k1_135 = __kmovq_maskmskw_masku64_avx512(k4_44)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_136
                        float temp0_1571[0x4]
                        temp0_1571, k1_136 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_135, *(r10_6 + arg7[0].q))
                        zmm26[0].o = temp0_1571
                        int64_t k5_59
                        float temp0_1572[0x4]
                        temp0_1572, k5_59 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_58, 
                            *(r10_6 + zmm0[0].q))
                        arg9[0].o = temp0_1572
                        zmm0 = _mm256_insertf32x4(arg5, zmm26, arg9[0].o, 1)
                        var_480 = _mm256_mask_storeu_ps(k4_44, arg6)
                        var_460 = _mm256_mask_storeu_ps(k4_44, zmm5)
                        var_440 = _mm256_mask_storeu_ps(k4_44, zmm0)
                    
                    int64_t k3_50 = _mm256_mask_test_epi32_mask(k3_49, zmm1, zmm1)
                    _kortest_mask8_u8(k3_50, k3_50)
                    
                    if (not(z_1))
                        uint32_t temp0_1577[0x8] = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k4_45 = _mm256_movepi32_mask(temp0_1577)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_137 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_50, 
                            zmm1, temp0_1577)
                        _kortest_mask8_u8(k1_137, k1_137)
                        
                        if (z_1)
                            arg6 = _mm256_mask_mov_epi64(arg5, arg20)
                            zmm1 = _mm256_mask_mov_epi64(arg5, arg19)
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg20)
                            arg6 = _mm256_mask_add_epi64(k1_137, arg20, zmm0)
                            int64_t k5_60 = _kshiftri_mask8(k1_137, 4)
                            _mm256_mask_mov_epi64(arg5, arg19)
                            zmm1 = _mm256_mask_add_epi64(k5_60, arg19, zmm0)
                            arg7 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                            zmm5 = _mm256_mask_add_epi64(arg5, 
                                _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                            arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                            zmm0 = _mm256_add_epi64(zmm5, zmm0)
                            int64_t k5_61 = _kshiftri_mask8(k1_137, 4)
                            zmm5[0].o = zx.o(0)
                            zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                            int64_t k1_138
                            float temp0_1590[0x4]
                            temp0_1590, k1_138 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k1_137, *(r10_6 + zmm0[0].q))
                            zmm26[0].o = temp0_1590
                            int64_t k5_62
                            float temp0_1591[0x4]
                            temp0_1591, k5_62 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_61, *(r10_6 + arg7[0].q))
                            zmm5[0].o = temp0_1591
                            arg7 = _mm256_insertf32x4(arg5, zmm26, zmm5[0].o, 1)
                        
                        var_480 = _mm256_mask_storeu_ps(k3_50, _mm256_mask_mov_ps(k4_45, arg7))
                        uint32_t temp0_1597[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                        arg7 = _mm256_mask_and_epi32(arg5, arg18, temp0_1597)
                        int64_t k1_139 = _mm256_mask_test_epi32_mask(k3_50, arg18, temp0_1597)
                        _kortest_mask8_u8(k1_139, k1_139)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg6)
                            zmm26 = _mm256_mask_add_epi64(k1_139, arg6, zmm0)
                            int64_t k4_46 = _kshiftri_mask8(k1_139, 4)
                            int64_t k5_63 = _kshiftri_mask8(k1_139, 4)
                            int32_t temp27_1 = rax_125.d
                            int32_t temp28_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp27_1 == temp28_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_140
                            float temp0_1603[0x4]
                            temp0_1603, k1_140 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_139, *arg6[0].q)
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
                        
                        var_460 = _mm256_mask_storeu_ps(k3_50, 
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm5))
                        uint32_t temp0_1611[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg7 = _mm256_mask_and_epi32(arg5, arg18, temp0_1611)
                        int64_t k1_142 = _mm256_mask_test_epi32_mask(k3_50, arg18, temp0_1611)
                        _kortest_mask8_u8(k1_142, k1_142)
                        
                        if (not(z_1))
                            int64_t k4_47 = _kshiftri_mask8(k1_142, 4)
                            temp0_1611[0].o = zx.o(0)
                            int32_t temp29_1 = rax_125.d
                            int32_t temp30_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp29_1 == temp30_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_143
                            float temp0_1614[0x4]
                            temp0_1614, k1_143 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_142, *arg6[0].q)
                            zmm5[0].o = temp0_1614
                            int64_t k4_48
                            float temp0_1615[0x4]
                            temp0_1615, k4_48 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_47, *zmm1[0].q)
                            temp0_1611[0].o = temp0_1615
                            zmm1 = _mm256_insertf128_ps(zmm5, temp0_1611[0].o, 1)
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1)
                        var_440 = _mm256_mask_storeu_ps(k3_50, zmm0)
                
                _ktest_mask8_u8(k2_49, arg5)
                
                if (not(z_1))
                    int64_t k1_145 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_49, arg10, 3)
                    _kortest_mask8_u8(k1_145, k1_145)
                    
                    if (not(z_1))
                        var_6c0[0] = _store_mask32(k1_145)
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
                        uint64_t k5_65 = _kand_mask8(k2_49, k4_49)
                        _kortest_mask8_u8(k5_65, k5_65)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k6_13 = _kshiftri_mask8(k5_65, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k6_13, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg6 = _mm256_mask_add_epi64(k5_65, zmm19, zmm0)
                            uint64_t k1_147 = _kshiftri_mask8(k5_65, 4)
                            int32_t temp17_1 = rax_125.d
                            int32_t temp18_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp17_1 == temp18_1
                            zmm0[0].o = zx.o(0)
                            int64_t k7_18
                            float temp0_1627[0x4]
                            temp0_1627, k7_18 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k5_65), *zmm19[0])
                            zmm0[0].o = temp0_1627
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k7_20
                            float temp0_1629[0x4]
                            temp0_1629, k7_20 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_147), *zmm20[0].q)
                            arg7[0].o = temp0_1629
                            var_600_4 = _mm256_mask_storeu_ps(k4_49, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            zmm19 = _mm256_mask_add_epi64(k5_65, zmm19, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k5_66
                            float temp0_1635[0x4]
                            temp0_1635, k5_66 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_65, *arg6[0].q)
                            arg7[0].o = temp0_1635
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_148
                            float temp0_1637[0x4]
                            temp0_1637, k1_148 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_147, *zmm1[0].q)
                            arg6[0].o = temp0_1637
                            zmm20 = _mm256_mask_add_epi64(k6_13, zmm20, zmm0)
                            var_660_4 = _mm256_mask_storeu_ps(k4_49, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        int64_t k4_50 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                        int64_t k5_67 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_50, 
                            arg18, 0x2000000)
                        uint64_t k6_14 = _kand_mask8(k2_49, k5_67)
                        _kortest_mask8_u8(k6_14, k6_14)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k7_21 = _kshiftri_mask8(k6_14, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k7_21, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg6 = _mm256_mask_add_epi64(k6_14, zmm19, zmm0)
                            uint64_t k1_149 = _kshiftri_mask8(k6_14, 4)
                            int32_t temp23_1 = rax_125.d
                            int32_t temp24_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp23_1 == temp24_1
                            int64_t k3_51 = __kmovq_maskmskw_masku64_avx512(k6_14)
                            zmm0[0].o = zx.o(0)
                            int64_t k3_52
                            float temp0_1646[0x4]
                            temp0_1646, k3_52 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_51, *zmm19[0])
                            zmm0[0].o = temp0_1646
                            int64_t k3_53 = __kmovq_maskmskw_masku64_avx512(k1_149)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k3_54
                            float temp0_1648[0x4]
                            temp0_1648, k3_54 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_53, *zmm20[0].q)
                            arg7[0].o = temp0_1648
                            var_5e0_4 = _mm256_mask_storeu_ps(k5_67, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            zmm19 = _mm256_mask_add_epi64(k6_14, zmm19, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k6_15
                            float temp0_1654[0x4]
                            temp0_1654, k6_15 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_14, *arg6[0].q)
                            arg7[0].o = temp0_1654
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_150
                            float temp0_1656[0x4]
                            temp0_1656, k1_150 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_149, *zmm1[0].q)
                            arg6[0].o = temp0_1656
                            zmm20 = _mm256_mask_add_epi64(k7_21, zmm20, zmm0)
                            var_640_4 = _mm256_mask_storeu_ps(k5_67, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        k6_9 = _load_mask16(var_6a0[0].w)
                        int64_t k4_51 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_50, 
                            arg18, 0x4000000)
                        uint64_t k5_68 = _kand_mask8(k2_49, k4_51)
                        _kortest_mask8_u8(k5_68, k5_68)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            uint64_t k1_151 = _kshiftri_mask8(k5_68, 4)
                            z_1 = rax_125.d == rax_125.d
                            int64_t k3_55 = __kmovq_maskmskw_masku64_avx512(k5_68)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k3_56
                            float temp0_1662[0x4]
                            temp0_1662, k3_56 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_55, *zmm19[0])
                            zmm1[0].o = temp0_1662
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k3_58
                            float temp0_1664[0x4]
                            temp0_1664, k3_58 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_151), *zmm20[0].q)
                            arg6[0].o = temp0_1664
                            zmm20 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_68, 4), zmm20, zmm0)
                            uint64_t temp0_1666[0x4] = _mm256_mask_add_epi64(k5_68, zmm19, zmm0)
                            zmm0 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                            var_5c0_4 = _mm256_mask_storeu_ps(k4_51, zmm0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k5_69
                            float temp0_1670[0x4]
                            temp0_1670, k5_69 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_68, *temp0_1666[0])
                            zmm0[0].o = temp0_1670
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k1_152
                            float temp0_1672[0x4]
                            temp0_1672, k1_152 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k1_151, *zmm20[0].q)
                            zmm1[0].o = temp0_1672
                            var_620_4 = _mm256_mask_storeu_ps(k4_51, 
                                _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                        zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                        zmm1 = _mm256_add_epi64(arg6, zmm1)
                        uint64_t k4_52 = _load_mask32(var_6c0[0])
                        int64_t k1_153 = _kshiftri_mask8(k4_52, 4)
                        int64_t k3_60 = __kmovq_maskmskw_masku64_avx512(k4_52)
                        arg6[0].o = zx.o(0)
                        int64_t k3_61
                        uint32_t temp0_1682[0x4]
                        temp0_1682, k3_61 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_60, 
                            *(r10_6 + zmm1[0].q))
                        arg6[0].o = temp0_1682
                        zmm1[0].o = zx.o(0)
                        int64_t k1_154
                        uint32_t temp0_1683[0x4]
                        temp0_1683, k1_154 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                            k1_153, *(r10_6 + zmm0[0].q))
                        zmm1[0].o = temp0_1683
                        zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                        zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                        arg6 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000)
                        zmm19 = _mm256_mask_load_ps(arg5, var_620_4)
                        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_4, arg6, var_600_4)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        float temp0_1695[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_mask_div_ps(arg5, temp0_1695, zmm20), var_640_4, var_5e0_4)
                        zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                    arg6)), 
                                zmm20), 
                            arg5, zmm19, var_5c0_4)
                        var_480 = _mm256_mask_storeu_ps(k4_52, arg7)
                        var_460 = _mm256_mask_storeu_ps(k4_52, zmm1)
                        var_440 = _mm256_mask_storeu_ps(k4_52, zmm0)
                    
                    arg5 = _kxor_mask8(
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                    _ktest_mask8_u8(k2_49, arg5)
                    
                    if (not(z_1))
                        int64_t k3_62 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_49, arg10, 2)
                        _kortest_mask8_u8(k3_62, k3_62)
                        
                        if (not(z_1))
                            uint32_t temp0_1707[0x8] = _mm256_slli_epi32(arg12, 0x1f)
                            int64_t k4_53 = _mm256_movepi32_mask(temp0_1707)
                            zmm1[0].o = zx.o(0)
                            int64_t k1_156 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                k3_62, zmm1, temp0_1707)
                            _kortest_mask8_u8(k1_156, k1_156)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(2)
                                arg20 = _mm256_mask_add_epi64(k1_156, arg20, zmm0)
                                int64_t k5_70 = _kshiftri_mask8(k1_156, 4)
                                arg19 = _mm256_mask_add_epi64(k5_70, arg19, zmm0)
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm18, temp0_1316)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg22)
                                arg6 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg21)
                                zmm0 =
                                    _mm256_mask_add_epi64(k5_70, _mm256_add_epi64(zmm0, zmm2), arg6)
                                zmm1 = _mm256_mask_add_epi64(k1_156, zmm1, arg6)
                                int64_t r10_8 = zmm1[0].q
                                int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t r11_6 = zmm1[0].q
                                int64_t r14_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rdi_23 = zmm0[0].q
                                int64_t rsi_11 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t rcx_29 = zmm0[0].q
                                int64_t rax_187 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(r10_6 + r10_8))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r9_2), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r11_6), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r14_2), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rdi_23), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rsi_11), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rcx_29), 6)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(r10_6 + rax_187), 7)
                                zmm1 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                            
                            var_480 = _mm256_mask_storeu_ps(k3_62, _mm256_mask_mov_ps(k4_53, zmm1))
                            uint32_t temp0_1757[0x8] = __vpbroadcastd_ymmqq_memd(0x2000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, temp0_1757)
                            int64_t k4_54 = _mm256_mask_test_epi32_mask(k3_62, arg18, temp0_1757)
                            _kortest_mask8_u8(k4_54, k4_54)
                            
                            if (not(z_1))
                                char temp0_1759 = _cvtmask32_u32(k4_54)
                                
                                if ((temp0_1759 & 1) == 0)
                                    if ((temp0_1759 & 2) != 0)
                                        goto label_14017e672
                                    
                                    goto label_14017e2bf
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg20[0].o)
                                
                                if ((temp0_1759 & 2) != 0)
                                label_14017e672:
                                    uint64_t rax_193 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg20[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_193, 1)
                                    
                                    if ((temp0_1759 & 4) == 0)
                                        goto label_14017e2c9
                                    
                                    goto label_14017e688
                                
                            label_14017e2bf:
                                
                                if ((temp0_1759 & 4) == 0)
                                label_14017e2c9:
                                    
                                    if ((temp0_1759 & 8) != 0)
                                        goto label_14017e6a3
                                    
                                    goto label_14017e2d3
                                
                            label_14017e688:
                                temp0_1757[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *temp0_1757[0].q, 2)
                                
                                if ((temp0_1759 & 8) != 0)
                                label_14017e6a3:
                                    temp0_1757[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                    int64_t rax_195 =
                                        __vpextrq_gpr64q_xmmdq_immb(temp0_1757[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_195, 3)
                                    
                                    if ((temp0_1759 & 0x10) == 0)
                                        goto label_14017e2dd
                                    
                                    goto label_14017e6c5
                                
                            label_14017e2d3:
                                
                                if ((temp0_1759 & 0x10) != 0)
                                label_14017e6c5:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg19[0].o, 4)
                                    
                                    if ((temp0_1759 & 0x20) != 0)
                                    label_14017e6d4:
                                        uint64_t rax_197 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_197, 5)
                                        
                                        if ((temp0_1759 & 0x40) == 0)
                                            goto label_14017e2f1
                                        
                                        goto label_14017e6ea
                                else
                                label_14017e2dd:
                                    
                                    if ((temp0_1759 & 0x20) != 0)
                                        goto label_14017e6d4
                                
                                int64_t k1_157
                                
                                if ((temp0_1759 & 0x40) != 0)
                                label_14017e6ea:
                                    temp0_1757[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                        *temp0_1757[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_157 = _kshiftri_mask8(k4_54, 4)
                                    z_1 = temp0_1759 == 0
                                    
                                    if (temp0_1759 s< 0)
                                    label_14017e712:
                                        temp0_1757[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        int64_t rax_199 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_1757[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_199, 7)
                                else
                                label_14017e2f1:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_157 = _kshiftri_mask8(k4_54, 4)
                                    z_1 = temp0_1759 == 0
                                    
                                    if (temp0_1759 s< 0)
                                        goto label_14017e712
                                
                                arg20 = _mm256_mask_add_epi64(k4_54, arg20, arg6)
                                arg19 = _mm256_mask_add_epi64(k1_157, arg19, arg6)
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            var_460 = _mm256_mask_storeu_ps(k3_62, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), 
                                    zmm2))
                            uint32_t temp0_1768[0x8] = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, temp0_1768)
                            int64_t k1_159 = _mm256_mask_test_epi32_mask(k3_62, arg18, temp0_1768)
                            _kortest_mask8_u8(k1_159, k1_159)
                            
                            if (not(z_1))
                                char temp0_1770 = _cvtmask32_u32(k1_159)
                                
                                if ((temp0_1770 & 1) == 0)
                                    if ((temp0_1770 & 2) != 0)
                                        goto label_14017e73e
                                    
                                    goto label_14017e379
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg20[0].o)
                                
                                if ((temp0_1770 & 2) != 0)
                                label_14017e73e:
                                    uint64_t rax_201 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg20[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_201, 1)
                                    
                                    if ((temp0_1770 & 4) == 0)
                                        goto label_14017e383
                                    
                                    goto label_14017e754
                                
                            label_14017e379:
                                
                                if ((temp0_1770 & 4) == 0)
                                label_14017e383:
                                    
                                    if ((temp0_1770 & 8) != 0)
                                        goto label_14017e76f
                                    
                                    goto label_14017e38d
                                
                            label_14017e754:
                                temp0_1768[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *temp0_1768[0].q, 2)
                                
                                if ((temp0_1770 & 8) != 0)
                                label_14017e76f:
                                    temp0_1768[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                    int64_t rax_203 =
                                        __vpextrq_gpr64q_xmmdq_immb(temp0_1768[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_203, 3)
                                    
                                    if ((temp0_1770 & 0x10) == 0)
                                        goto label_14017e397
                                    
                                    goto label_14017e791
                                
                            label_14017e38d:
                                
                                if ((temp0_1770 & 0x10) != 0)
                                label_14017e791:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg19[0].o, 4)
                                    
                                    if ((temp0_1770 & 0x20) != 0)
                                    label_14017e7a0:
                                        uint64_t rax_205 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_205, 5)
                                        
                                        if ((temp0_1770 & 0x40) == 0)
                                            goto label_14017e3ab
                                        
                                        goto label_14017e7b6
                                else
                                label_14017e397:
                                    
                                    if ((temp0_1770 & 0x20) != 0)
                                        goto label_14017e7a0
                                
                                if ((temp0_1770 & 0x40) != 0)
                                label_14017e7b6:
                                    temp0_1768[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                        *temp0_1768[0].q, 6)
                                    z_1 = temp0_1770 == 0
                                    
                                    if (temp0_1770 s< 0)
                                    label_14017e7cf:
                                        temp0_1768[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        int64_t rax_207 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_1768[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_207, 7)
                                else
                                label_14017e3ab:
                                    z_1 = temp0_1770 == 0
                                    
                                    if (temp0_1770 s< 0)
                                        goto label_14017e7cf
                                
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            zmm0 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                            var_440 = _mm256_mask_storeu_ps(k3_62, zmm0)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2))
                        int64_t k1_162 = _kand_mask8(k2_49, arg5)
                        _kortest_mask8_u8(k1_162, k1_162)
                        
                        if (not(z_1))
                            int64_t k3_63 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_49, arg10, 6)
                            _kortest_mask8_u8(k3_63, k3_63)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_480 = _mm256_mask_storeu_ps(k3_63, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k3_63, zmm0)
                                var_440 = _mm256_mask_storeu_ps(k3_63, zmm0)
                            
                            int64_t k1_163 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k1_162, arg10, 6, 4)
                            _kortest_mask8_u8(k1_163, k1_163)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_480 = _mm256_mask_storeu_ps(k1_163, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k1_163, zmm0)
                                var_440 = _mm256_mask_storeu_ps(k1_163, zmm0)
                
                arg6 = var_580.32
                arg7 = var_560.32
                zmm5 = var_540.32
                zmm0 = _mm256_sub_ps(var_480, arg6)
                float temp0_1783[0x8] = _mm256_sub_ps(var_460, arg7)
                float temp0_1784[0x8] = _mm256_sub_ps(var_440, zmm5)
                zmm0 = _mm256_fmadd_ps(zmm0, arg15, arg6)
                zmm1 = _mm256_fmadd_ps(temp0_1783, arg15, arg7)
                zmm2 = _mm256_fmadd_ps(temp0_1784, arg15, zmm5)
                var_580.32 = _mm256_mask_storeu_ps(k2_49, zmm0)
                var_560.32 = _mm256_mask_storeu_ps(k2_49, zmm1)
                var_540.32 = _mm256_mask_storeu_ps(k2_49, zmm2)
        
        int64_t k1_164 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_9, temp0_966, arg8)
        _kortest_mask8_u8(k1_164, k1_164)
        
        if (not(z_1))
            zmm0[0].o = zx.o(0)
            var_580.32 = _mm256_mask_storeu_ps(k1_164, zmm0)
            var_560.32 = _mm256_mask_storeu_ps(k1_164, zmm0)
            var_540.32 = _mm256_mask_storeu_ps(k1_164, zmm0)
        
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
        arg6[0].o = arg8[0].q | zmm0[0].q << 0x40
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
            uint64_t rcx_30 = _tzcnt_u64(i)
            int64_t var_120[0x4] = arg11
            result = sx.q(*(&var_120 + ((zx.q(rcx_30.d) & 7) << 2))) * 0x30
            zmm0[0].o = (&var_200)[rcx_30]
            *(arg1 + result + 0x20) = zmm0[0].o
            i &= rol.q(-2, rcx_30.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    uint32_t temp0_2[0x8] = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    temp0_2[0].o = zx.o(r10)
    zmm1[0].o = 4
    temp0_2[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(temp0_2[0].o, zmm1[0].o)
    uint32_t var_160_1[0x8] = _mm256_broadcastq_epi64(temp0_2[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    uint32_t var_2c0_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg31[0] = zmm0[0].o f>= zmm2[0]
    arg31[0] = neg.b(arg31[0])
    zmm0[0].o = _mm_mask_set1_epi8(arg5, arg31)
    int128_t var_2d0_1 = zmm0[0].o
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(arg28 - 1)
    int32_t rcx_6 = arg28 - 2
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rbx_2 = int.d(zmm0[0]) s>> 0x1f
    int32_t rbx_3 = rbx_2 & not.d(rbx_2)
    bool z = rcx_6 == rbx_3
    
    if (not(z) && rcx_6 - rbx_3 s< 0 == add_overflow(rcx_6, neg.d(rbx_3)))
        rcx_6 = rbx_3
    
    zmm1 = _mm256_mask_set1_epi32(arg5, rcx_6)
    var_6a0 = zmm1
    zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
    uint32_t var_180_1[0x8] = zmm0
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    int64_t zmm25[0x4]
    zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    r14 = 0
    
    do
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r14), 3), 
            data_143442140)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_2
        uint32_t temp0_54[0x8]
        temp0_54, k1_2 = _mm256_mmask_i32gather_epi32(k1_1, *(arg2 + zmm2[0].q))
        arg21 = temp0_54
        zmm2 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 4)
        int64_t k1_4
        uint32_t temp0_56[0x8]
        temp0_56, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + zmm2[0].q))
        arg6 = temp0_56
        zmm2 = __vpmulld_ymmqq_ymmqq_memqq(arg6, temp0_2)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_6
        uint32_t temp0_59[0x8]
        temp0_59, k1_6 = _mm256_mmask_i32gather_epi32(k1_5, *(arg3 + zmm2[0].q))
        arg20 = temp0_59
        uint64_t k6_1 = _mm256_cmp_epi32_mask(arg5, arg20, arg12, 4)
        _kortest_mask8_u8(k6_1, k6_1)
        int128_t var_420
        int128_t var_400
        int128_t var_3e0
        int64_t k1_44
        
        if (z)
        label_14017bbb8:
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg20, arg12)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
            label_14017bbc4:
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                var_420.32 = _mm256_mask_storeu_ps(k1_44, zmm0)
                var_400.32 = _mm256_mask_storeu_ps(k1_44, zmm0)
                var_3e0.32 = _mm256_mask_storeu_ps(k1_44, zmm0)
        else
            int64_t k2_2
            uint32_t temp0_60[0x8]
            temp0_60, k2_2 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_1), 
                *(r10 + arg20[0].q))
            arg6 = temp0_60
            uint32_t temp0_61[0x8] = _mm256_mask_srli_epi32(k6_1, arg6, 0x1c)
            uint32_t temp0_62[0x8] = _mm256_mask_slli_epi32(arg5, temp0_61, 2)
            int64_t k2_4
            uint32_t temp0_63[0x8]
            temp0_63, k2_4 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_1), 
                *(&data_143442890 + temp0_62[0].q))
            zmm2 = temp0_63
            uint32_t temp0_65[0x8] = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, 
                _mm256_srli_epi32(arg6, 0x18), 0xf)
            arg23 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, temp0_65, 7)
            uint32_t temp0_67[0x8] = _mm256_mask_slli_epi32(arg5, temp0_61, 3)
            arg7 = __vpbroadcastd_ymmqq_memd(3)
            uint32_t temp0_69[0x8] = _mm256_mask_or_epi32(k6_1, arg23, temp0_67)
            int64_t r13_1 = sx.q(temp0_69[0])
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 1))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 2))
            int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 3))
            temp0_69[0].o = _mm256_extracti128_si256(temp0_69, 1)
            int64_t rax_24 = sx.q(temp0_69[0])
            int64_t rcx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 1))
            int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 2))
            int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(temp0_69[0].o, 3))
            temp0_69[0].o = zx.o(*(r13_1 + &data_1434428b0))
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(r11_1 + &data_1434428b0), 1)
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(rbx_5 + &data_1434428b0), 2)
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(rsi_2 + &data_1434428b0), 3)
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(rax_24 + &data_1434428b0), 4)
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(rcx_9 + &data_1434428b0), 5)
            temp0_69[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(r8_1 + &data_1434428b0), 6)
            arg8[0].o =
                __vpinsrb_xmmdq_xmmdq_memb_immb(temp0_69[0].o, *(r10_2 + &data_1434428b0), 7)
            int64_t k2_6 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, temp0_61, arg7, 4), 
                arg20, arg12, 4)
            _kortest_mask8_u8(k2_6, k2_6)
            arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
            
            if (not(z))
                arg18 = _mm256_mask_cvtepu8_epi32(k2_6, arg8[0].o)
            
            arg9[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
            int64_t k2_7 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_1, temp0_61, arg7)
            _kortest_mask8_u8(k2_7, k2_7)
            uint64_t rax_8 = 1
            
            if (not(z))
                arg18 = _mm256_mask_set1_epi32(k2_7, 1)
            
            r10 = arg27
            zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg20[0].o)
            zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
            arg13 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, arg6, data_143442840)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            arg7[0].o = zx.o(0)
            
            if (not(z))
                arg7 = _mm256_mask_slli_epi32(k2_7, _mm256_cvtepu8_epi32(arg8[0].q), 2)
            
            zmm5 = var_160_1
            arg11 = _mm256_add_epi64(zmm5, zmm1)
            arg26 = _mm256_mask_add_epi64(arg5, zmm5, zmm0)
            zmm20 = _mm256_mask_mullo_epi32(k6_1, arg18, zmm2)
            arg14 = _mm256_mask_mov_epi32(k6_1, arg7)
            int64_t k2_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k6_1, arg13, arg6)
            _kortest_mask8_u8(k2_8, k2_8)
            int32_t var_5a0_1[0x8] = arg13
            uint64_t var_520[0x4]
            
            if (z)
                zmm2[0].o = zx.o(0)
                var_6c0 = zmm2
                arg16[0].o = zx.o(0)
                arg15[0].o = zx.o(0)
            else
                arg6 = __vpbroadcastd_ymmqq_memd(8)
                zmm2 = _mm256_mask_and_epi32(arg5, temp0_65, arg6)
                int64_t k3_1 = _mm256_mask_testn_epi32_mask(k2_8, temp0_65, arg6)
                _kortest_mask8_u8(k3_1, k3_1)
                int64_t k2_9
                
                if (z)
                    arg16[0].o = zx.o(0)
                    arg15[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    var_6c0 = arg6
                    k2_9 = _mm256_mask_test_epi32_mask(k2_8, zmm2, zmm2)
                    _kortest_mask8_u8(k2_9, k2_9)
                    
                    if (not(z))
                    label_14017917e:
                        int64_t k1_7 =
                            __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg13, 2, 1)
                        zmm2[0].o = _mm_movm_epi16(k2_9)
                        arg6[0].o = var_2d0_1
                        zmm19[0].o = __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_7, 
                            arg6[0].o, data_142fc92e0)
                        arg6[0].o = _mm_mask_and_epi64(arg5, zmm19[0].o, zmm2[0].o)
                        int64_t k0 = _mm_mask_test_epi16_mask(arg5, arg6[0].o, zmm25[0].o)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (not(z))
                            int64_t k1_8 = _mm_mask_testn_epi16_mask(k0, arg6[0].o, zmm25[0].o)
                            arg16 = _mm256_mask_mov_epi32(k1_8, arg16)
                            arg15 = _mm256_mask_mov_epi32(k1_8, arg15)
                        
                        arg6[0].o = _mm_mask_xor_epi64(k0, zmm19[0].o, zmm25[0].o)
                        arg10[0].o = zmm2[0].o & arg6[0].o
                        arg5 = _mm_mask_test_epi16_mask(k0, arg10[0].o, zmm25[0].o)
                        zmm2[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z)
                            arg13 = arg15
                            _mm256_mask_load_ps(arg5, var_6c0)
                        else
                            uint32_t temp0_117[0x8] = _mm256_mask_add_epi32(arg5, arg13, arg12)
                            arg6[0].o = zx.o(arg29)
                            arg6[0].o f- 1f
                            z = arg6[0] f== 1f
                            
                            if (not(arg6[0] f< 1f))
                                int64_t k1_11 =
                                    _mm_mask_testn_epi16_mask(arg5, arg10[0].o, zmm25[0].o)
                                arg16 = _mm256_mask_blend_epi32(k1_11, temp0_117, arg16)
                                arg13 =
                                    _mm256_mask_mov_epi64(arg5, _mm256_mask_mov_epi32(k1_11, arg15))
                                _mm256_mask_load_ps(arg5, var_6c0)
                            else
                                zmm2[0].o = _mm256_extracti128_si256(arg14, 1)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                arg6 = _mm256_cvtepi32_epi64(arg14[0].o)
                                var_520 = _mm256_mask_store_epi64(arg5, zmm20)
                                arg7 = _mm256_mask_mullo_epi32(arg5, zmm20, arg13)
                                arg9[0].o = _mm256_extracti128_si256(arg7, 1)
                                arg6 = _mm256_mask_add_epi64(arg5, arg26, arg6)
                                zmm2 = _mm256_add_epi64(arg11, zmm2)
                                arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 3)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm18 = _mm256_mask_cvtepi32_epi64(arg5, arg9[0].o)
                                arg6 =
                                    _mm256_add_epi64(arg7, _mm256_mask_add_epi64(arg5, arg6, arg18))
                                zmm2 = _mm256_mask_add_epi64(arg5, zmm18, 
                                    _mm256_mask_add_epi64(arg5, zmm2, arg18))
                                arg7 = __vpbroadcastq_ymmqq_memq(-4)
                                uint64_t temp0_134[0x4] = _mm256_mask_and_epi64(arg5, zmm2, arg7)
                                zmm20 = _mm256_mask_and_epi64(arg5, arg6, arg7)
                                char temp0_136 = _cvtmask32_u32(arg5)
                                arg18 = _mm256_mask_min_epi32(arg5, 
                                    __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                            _mm256_mask_cvtepi32_ps(arg5, temp0_117), var_2c0_1)), 
                                        data_142fc9440), 
                                    temp0_117)
                                rax_8 = zx.q(arg28)
                                int32_t var_340_1[0x8] = arg14
                                uint64_t temp0_142[0x2] = _mm_mask_store_epi64(arg5, zmm19[0].o)
                                int128_t var_4f0
                                int128_t var_4e0
                                
                                if (rax_8.d s< 0x100)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm20, 
                                        _mm256_mask_cvtepi32_epi64(arg5, arg18[0].o))
                                    int128_t var_2f0
                                    zmm5[0].o = var_2f0
                                    
                                    if ((temp0_136 & 1) == 0)
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140179991
                                        
                                        goto label_1401795ea
                                    
                                    rax_8 = zx.q(*zmm2[0].q)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 0)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140179991:
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_1401795fb
                                        
                                        goto label_1401799aa
                                    
                                label_1401795ea:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_1401795fb:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_1401799cc
                                        
                                        goto label_14017960a
                                    
                                label_1401799aa:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = zx.q(*arg7[0].q)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_1401799cc:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14017961a
                                        
                                        goto label_1401799f5
                                    
                                label_14017960a:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_1401799f5:
                                        rax_8 = zx.q(*zmm2[0].q)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140179a0d:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_14017962e
                                            
                                            goto label_140179a1f
                                    else
                                    label_14017961a:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140179a0d
                                    
                                    bool cond:15_1
                                    bool cond:19_1
                                    bool cond:24_1
                                    bool cond:26_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140179a1f:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 6)
                                        cond:15_1 = temp0_136 == 0
                                        cond:19_1 = temp0_136 == 0
                                        cond:24_1 = temp0_136 == 0
                                        cond:26_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140179a3b:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 7)
                                    else
                                    label_14017962e:
                                        cond:15_1 = temp0_136 == 0
                                        cond:19_1 = temp0_136 == 0
                                        cond:24_1 = temp0_136 == 0
                                        cond:26_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140179a3b
                                    
                                    arg14[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    zmm2[0].o = zmm5[0].o & arg14[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    int64_t k3_3 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm2, var_6a0, 2)
                                    arg8[0].o = _mm_movm_epi16(k3_3)
                                    zmm2[0].o = arg10[0].o & arg8[0].o
                                    int64_t k0_5 =
                                        _mm_mask_test_epi16_mask(arg5, zmm2[0].o, arg14[0].o)
                                    _kortest_mask8_u8(k0_5, k0_5)
                                    var_2f0 = zmm5[0].o
                                    
                                    if (cond:15_1)
                                        zmm19 = _mm256_mask_mov_epi64(k0_5, arg18)
                                        arg13 = _mm256_mask_mov_epi64(k0_5, arg18)
                                    else
                                        zmm2 = _mm256_mask_blend_epi32(k3_3, arg18, temp0_117)
                                        arg6 = _mm256_mask_mov_epi64(k0_5, arg18)
                                        arg18 = _mm256_mask_sub_epi32(k0_5, arg18, arg12)
                                        int64_t k0_6 =
                                            _mm256_cmp_epi32_mask(k3_3, arg18, temp0_117, 2)
                                        arg17[0].o = _mm_movm_epi16(k0_6)
                                        arg7[0].o = arg10[0].o & arg17[0].o
                                        k0_5 = _mm_mask_test_epi16_mask(k0_6, arg7[0].o, zmm25[0].o)
                                        _kortest_mask8_u8(k0_5, k0_5)
                                        
                                        if (cond:19_1)
                                            zmm19 = _mm256_mask_mov_epi64(k0_5, arg6)
                                            arg13 = zmm2
                                        else
                                            char rdi_5 = _cvtmask32_u32(k0_5)
                                            zmm19 = _mm256_mask_mov_epi64(k0_5, arg6)
                                            zmm25 = _mm256_mask_mov_epi64(k0_5, arg6)
                                            bool cond:36_1
                                            
                                            do
                                                arg6 = _mm256_mask_mov_epi64(k0_5, arg18)
                                                zmm5 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                arg13 = _mm256_mask_add_epi64(k0_5, zmm20, zmm5)
                                                int64_t k0_7 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                                    k0_5, arg7[0].o, data_142fc92e0)
                                                char temp0_227 = _cvtmask32_u32(k0_7)
                                                
                                                if ((temp0_227 & 1) == 0)
                                                    if ((temp0_227 & 2) != 0)
                                                        goto label_1401796de
                                                    
                                                    goto label_1401797e4
                                                
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_227 & 2) != 0)
                                                label_1401796de:
                                                    uint16_t rax_37[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_37, 1)
                                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    
                                                    if ((temp0_227 & 4) == 0)
                                                        goto label_1401797f3
                                                    
                                                    goto label_1401796f7
                                                
                                            label_1401797e4:
                                                arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                                
                                                if ((temp0_227 & 4) == 0)
                                                label_1401797f3:
                                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                    
                                                    if ((temp0_227 & 8) != 0)
                                                        goto label_14017971a
                                                    
                                                    goto label_140179801
                                                
                                            label_1401796f7:
                                                zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*zmm5[0].q), 2)
                                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                
                                                if ((temp0_227 & 8) != 0)
                                                label_14017971a:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_41[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_41, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_7, temp0_134, arg7)
                                                    
                                                    if ((temp0_227 & 0x10) == 0)
                                                        goto label_140179810
                                                    
                                                    goto label_140179747
                                                
                                            label_140179801:
                                                arg13 = _mm256_mask_add_epi64(k0_7, temp0_134, arg7)
                                                
                                                if ((temp0_227 & 0x10) == 0)
                                                label_140179810:
                                                    
                                                    if ((temp0_227 & 0x20) != 0)
                                                        goto label_14017975d
                                                    
                                                    goto label_140179819
                                                
                                            label_140179747:
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*arg13[0].q), 4)
                                                
                                                if ((temp0_227 & 0x20) != 0)
                                                label_14017975d:
                                                    uint16_t rax_45[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_45, 5)
                                                    
                                                    if ((temp0_227 & 0x40) == 0)
                                                        goto label_140179822
                                                    
                                                    goto label_140179770
                                                
                                            label_140179819:
                                                
                                                if ((temp0_227 & 0x40) != 0)
                                                label_140179770:
                                                    arg7[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, zx.d(*arg7[0].q), 6)
                                                    
                                                    if (temp0_227 s< 0)
                                                    label_14017978d:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint16_t rax_49[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1))
                                                        arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg25[0].o, rax_49, 7)
                                                else
                                                label_140179822:
                                                    
                                                    if (temp0_227 s< 0)
                                                        goto label_14017978d
                                                
                                                arg7[0].o =
                                                    _mm_mask_and_epi64(k0_7, arg25[0].o, arg14[0].o)
                                                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_7, arg7, var_6a0), 
                                                    arg17[0].o)
                                                arg7[0].o = zx.o(0)
                                                int64_t k4_2 = _mm_mask_testn_epi16_mask(k0_7, 
                                                    arg9[0].o, arg14[0].o)
                                                zmm5[0].o = arg9[0].o & arg10[0].o
                                                int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, 
                                                    zmm5[0].o, arg14[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_8))
                                                cond:24_1 = rdi_5 == rax_8.b
                                                cond:26_1 = rdi_5 == rax_8.b
                                                cond:36_1 = rdi_5 != rax_8.b
                                                
                                                if (rdi_5 != rax_8.b)
                                                    arg7[0].o = arg9[0].o ^ arg17[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_8, zmm25)
                                                arg13 = _mm256_mask_mov_epi32(k4_2, zmm2)
                                                arg18 = _mm256_mask_sub_epi32(k0_8, arg6, arg12)
                                                arg17[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_8, arg18, temp0_117, 
                                                        2), 
                                                    arg7[0].o)
                                                arg7[0].o = arg17[0].o & arg10[0].o
                                                k0_5 = _mm_mask_test_epi16_mask(k0_8, arg7[0].o, 
                                                    arg14[0].o)
                                                _kortest_mask8_u8(k0_5, k0_5)
                                                rdi_5 = _cvtmask32_u32(k0_5)
                                                zmm25 = _mm256_mask_mov_epi64(k0_5, arg6)
                                                zmm2 = arg13
                                            while (cond:36_1)
                                    
                                    zmm25[0].o = _mm_mask_load_epi64(k0_5, data_142fc92e0)
                                    zmm2[0].o = _mm_mask_xor_epi64(k0_5, arg8[0].o, zmm25[0].o)
                                    arg6[0].o = arg10[0].o & zmm2[0].o
                                    int64_t k0_12 =
                                        _mm_mask_test_epi16_mask(k0_5, arg6[0].o, zmm25[0].o)
                                    _kortest_mask8_u8(k0_12, k0_12)
                                    
                                    if (not(cond:24_1))
                                        arg17 = _mm256_mask_mov_epi32(k3_3, arg13)
                                        arg6 = _mm256_mask_add_epi32(k0_12, zmm19, arg12)
                                        zmm2[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                k0_12, arg6, data_142fc9440), 
                                            zmm2[0].o)
                                        arg8[0].o = zmm2[0].o & arg10[0].o
                                        k0_12 =
                                            _mm_mask_test_epi16_mask(k0_12, arg8[0].o, zmm25[0].o)
                                        _kortest_mask8_u8(k0_12, k0_12)
                                        
                                        if (cond:26_1)
                                            arg13 = arg17
                                        else
                                            char rdi_6 = _cvtmask32_u32(k0_12)
                                            bool cond:40_1
                                            
                                            do
                                                arg7 = _mm256_mask_add_epi64(k0_12, zmm20, 
                                                    _mm256_cvtepi32_epi64(arg6[0].o))
                                                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, 
                                                    arg8[0].o, zmm25[0].o)
                                                char temp0_335 = _cvtmask32_u32(k0_13)
                                                
                                                if ((temp0_335 & 1) == 0)
                                                    if ((temp0_335 & 2) != 0)
                                                        goto label_140179d3e
                                                    
                                                    goto label_140179e3a
                                                
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*arg7[0].q), 0)
                                                
                                                if ((temp0_335 & 2) != 0)
                                                label_140179d3e:
                                                    uint16_t rax_71[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_71, 1)
                                                    arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    
                                                    if ((temp0_335 & 4) == 0)
                                                        goto label_140179e49
                                                    
                                                    goto label_140179d57
                                                
                                            label_140179e3a:
                                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                                
                                                if ((temp0_335 & 4) == 0)
                                                label_140179e49:
                                                    arg18 =
                                                        _mm256_mask_cvtepi32_epi64(k0_13, arg9[0].o)
                                                    
                                                    if ((temp0_335 & 8) != 0)
                                                        goto label_140179d7b
                                                    
                                                    goto label_140179e58
                                                
                                            label_140179d57:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*zmm5[0].q), 2)
                                                arg18 = _mm256_mask_cvtepi32_epi64(k0_13, arg9[0].o)
                                                
                                                if ((temp0_335 & 8) != 0)
                                                label_140179d7b:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    uint16_t rax_75[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_75, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_13, temp0_134, 
                                                        arg18)
                                                    
                                                    if ((temp0_335 & 0x10) == 0)
                                                        goto label_140179e67
                                                    
                                                    goto label_140179da8
                                                
                                            label_140179e58:
                                                arg7 =
                                                    _mm256_mask_add_epi64(k0_13, temp0_134, arg18)
                                                
                                                if ((temp0_335 & 0x10) == 0)
                                                label_140179e67:
                                                    
                                                    if ((temp0_335 & 0x20) != 0)
                                                        goto label_140179dbe
                                                    
                                                    goto label_140179e70
                                                
                                            label_140179da8:
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*arg7[0].q), 4)
                                                
                                                if ((temp0_335 & 0x20) != 0)
                                                label_140179dbe:
                                                    uint16_t rax_79[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_79, 5)
                                                    
                                                    if ((temp0_335 & 0x40) == 0)
                                                        goto label_140179e79
                                                    
                                                    goto label_140179dd1
                                                
                                            label_140179e70:
                                                
                                                if ((temp0_335 & 0x40) != 0)
                                                label_140179dd1:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, zx.d(*zmm5[0].q), 6)
                                                    
                                                    if (temp0_335 s< 0)
                                                    label_140179dee:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        uint16_t rax_83[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1))
                                                        arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg19[0].o, rax_83, 7)
                                                else
                                                label_140179e79:
                                                    
                                                    if (temp0_335 s< 0)
                                                        goto label_140179dee
                                                
                                                arg7[0].o = _mm_mask_and_epi64(k0_13, arg19[0].o, 
                                                    arg14[0].o)
                                                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                                                arg9[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_13, arg7, var_6a0, 2), 
                                                    zmm2[0].o)
                                                arg7[0].o = zx.o(0)
                                                int64_t k3_5 = _mm_mask_testn_epi16_mask(k0_13, 
                                                    arg9[0].o, arg14[0].o)
                                                zmm5[0].o = arg9[0].o & arg10[0].o
                                                int64_t k0_14 = _mm_mask_test_epi16_mask(k0_13, 
                                                    zmm5[0].o, arg14[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_14))
                                                cond:40_1 = rdi_6 != rax_8.b
                                                
                                                if (rdi_6 != rax_8.b)
                                                    arg7[0].o = arg9[0].o ^ zmm2[0].o
                                                
                                                arg6 = _mm256_add_epi32(arg6, arg12)
                                                arg13 = _mm256_mask_mov_epi32(k3_5, arg17)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_14, arg6, data_142fc9440), 
                                                    arg7[0].o)
                                                arg8[0].o = zmm2[0].o & arg10[0].o
                                                k0_12 = _mm_mask_test_epi16_mask(k0_14, arg8[0].o, 
                                                    arg14[0].o)
                                                _kortest_mask8_u8(k0_12, k0_12)
                                                rdi_6 = _cvtmask32_u32(k0_12)
                                                arg17 = arg13
                                            while (cond:40_1)
                                    
                                    arg16 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_12, arg10[0].o, zmm25[0].o), 
                                        arg13, arg16)
                                    zmm2 = _mm256_mask_add_epi64(k0_12, zmm20, 
                                        _mm256_cvtepi32_epi64(arg16[0].o))
                                    int128_t var_4c0
                                    
                                    if ((temp0_136 & 1) != 0)
                                        rax_8 = zx.q(*zmm2[0].q)
                                        arg7[0].o = var_4c0
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 0)
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 1)
                                    else
                                        arg7[0].o = var_4c0
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 1)
                                    
                                    arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140178cf7
                                        
                                        goto label_14017a2bd
                                    
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg7[0].o = zmm5[0].o
                                    rax_8 = zx.q(*arg7[0].q)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140178cf7:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(k0_12, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14017a2cd
                                        
                                        goto label_140178d20
                                    
                                label_14017a2bd:
                                    zmm2 = _mm256_mask_add_epi64(k0_12, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_140178d20:
                                        rax_8 = zx.q(*zmm2[0].q)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140178d38:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_14017a2e1
                                            
                                            goto label_140178d4a
                                    else
                                    label_14017a2cd:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140178d38
                                    
                                    bool cond:32_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140178d4a:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 6)
                                        cond:32_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140178d66:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 7)
                                    else
                                    label_14017a2e1:
                                        cond:32_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140178d66
                                    
                                    int64_t k1_25 =
                                        _mm_mask_testn_epi16_mask(k0_12, arg10[0].o, arg14[0].o)
                                    _mm256_sub_epi32(arg13, arg12)
                                    arg13 = _mm256_mask_mov_epi32(k1_25, arg15)
                                    zmm2[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_12, 
                                            arg13, temp0_117), 
                                        arg10[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_12, zmm2[0].o, arg14[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:32_1))
                                        arg13 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm2[0].o, 
                                                    arg14[0].o), 
                                                arg13))
                                    
                                    arg9[0].o = var_4e0
                                    arg8[0].o = var_4f0
                                    _mm256_mask_load_ps(arg5, var_6c0)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm20, 
                                        _mm256_cvtepi32_epi64(arg13[0].o))
                                    
                                    if ((temp0_136 & 1) == 0)
                                        zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                        
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140178da4
                                        
                                        goto label_14017a365
                                    
                                    rax_8 = zx.q(*zmm2[0].q)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 0)
                                    zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140178da4:
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg13, 1)
                                        var_4c0 = arg7[0].o
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_14017a37e
                                        
                                        goto label_140178dc5
                                    
                                label_14017a365:
                                    arg6[0].o = _mm256_extracti128_si256(arg13, 1)
                                    var_4c0 = arg7[0].o
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_14017a37e:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140178df0
                                        
                                        goto label_14017a38d
                                    
                                label_140178dc5:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg7[0].o = var_4c0
                                    rax_8 = zx.q(*arg7[0].q)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140178df0:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14017a39d
                                        
                                        goto label_140178e19
                                    
                                label_14017a38d:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_140178e19:
                                        rax_8 = zx.q(*zmm2[0].q)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140178e31:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_14017a3b1
                                            
                                            goto label_140178e43
                                    else
                                    label_14017a39d:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140178e31
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140178e43:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 6)
                                        arg6[0].o = arg7[0].o & arg14[0].o
                                        
                                        if (temp0_136 s< 0)
                                        label_140178e64:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 7)
                                    else
                                    label_14017a3b1:
                                        arg6[0].o = arg7[0].o & arg14[0].o
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140178e64
                                    
                                    arg14 = var_340_1
                                    zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    arg6[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, zmm25[0].o)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, arg18, arg18)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm20, 
                                        _mm256_cvtepi32_epi64(arg6[0].o))
                                    int128_t var_2e0
                                    zmm5[0].o = var_2e0
                                    
                                    if ((temp0_136 & 1) == 0)
                                        if ((temp0_136 & 2) != 0)
                                            goto label_1401798c1
                                        
                                        goto label_1401792e8
                                    
                                    rax_8 = zmm2[0].q
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 0)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_1401798c1:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_1401792f8
                                        
                                        goto label_1401798dc
                                    
                                label_1401792e8:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_1401792f8:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_1401798fb
                                        
                                        goto label_140179307
                                    
                                label_1401798dc:
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0].q
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_1401798fb:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_140179317
                                        
                                        goto label_14017991c
                                    
                                label_140179307:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_14017991c:
                                        rax_8 = zmm2[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140179930:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_14017932b
                                            
                                            goto label_140179945
                                    else
                                    label_140179317:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140179930
                                    
                                    bool cond:16_1
                                    bool cond:20_1
                                    bool cond:25_1
                                    bool cond:27_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140179945:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 6)
                                        cond:16_1 = temp0_136 == 0
                                        cond:20_1 = temp0_136 == 0
                                        cond:25_1 = temp0_136 == 0
                                        cond:27_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_14017995e:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_14017932b:
                                        cond:16_1 = temp0_136 == 0
                                        cond:20_1 = temp0_136 == 0
                                        cond:25_1 = temp0_136 == 0
                                        cond:27_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_14017995e
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm5[0].o)
                                    int64_t k3_2 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm2, var_6a0, 2)
                                    arg6[0].o = _mm_movm_epi16(k3_2)
                                    zmm2[0].o = arg10[0].o & arg6[0].o
                                    int64_t k0_1 =
                                        _mm_mask_test_epi16_mask(arg5, zmm2[0].o, zmm25[0].o)
                                    _kortest_mask8_u8(k0_1, k0_1)
                                    var_2e0 = zmm5[0].o
                                    uint64_t var_300_1[0x2] = arg6[0].o
                                    
                                    if (cond:16_1)
                                        zmm19 = _mm256_mask_mov_epi64(k0_1, arg18)
                                        arg13 = _mm256_mask_mov_epi64(k0_1, arg18)
                                    else
                                        arg17 = _mm256_mask_blend_epi32(k3_2, arg18, temp0_117)
                                        arg7 = _mm256_mask_sub_epi32(k0_1, arg18, arg12)
                                        int64_t k0_2 =
                                            _mm256_cmp_epi32_mask(k3_2, arg7, temp0_117, 2)
                                        zmm2[0].o = _mm_movm_epi16(k0_2)
                                        arg14[0].o = arg10[0].o & zmm2[0].o
                                        k0_1 =
                                            _mm_mask_test_epi16_mask(k0_2, arg14[0].o, zmm25[0].o)
                                        _kortest_mask8_u8(k0_1, k0_1)
                                        
                                        if (cond:20_1)
                                            zmm19 = _mm256_mask_mov_epi64(k0_1, arg18)
                                            arg13 = arg17
                                        else
                                            char rcx_10 = _cvtmask32_u32(k0_1)
                                            zmm19 = _mm256_mask_mov_epi64(k0_1, arg18)
                                            bool cond:37_1
                                            
                                            do
                                                arg6 = arg7
                                                int32_t temp0_171[0x8] =
                                                    _mm256_add_epi32(arg7, arg7)
                                                zmm25 =
                                                    _mm256_mask_cvtepi32_epi64(k0_1, temp0_171[0].o)
                                                arg13 = _mm256_mask_add_epi64(k0_1, zmm20, zmm25)
                                                zmm25[0].o =
                                                    _mm_mask_load_epi64(k0_1, data_142fc92e0)
                                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_1, 
                                                    arg14[0].o, zmm25[0].o)
                                                char temp0_175 = _cvtmask32_u32(k0_3)
                                                
                                                if ((temp0_175 & 1) == 0)
                                                    if ((temp0_175 & 2) != 0)
                                                        goto label_1401793c5
                                                    
                                                    goto label_1401794bd
                                                
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg13[0].q, 0)
                                                
                                                if ((temp0_175 & 2) != 0)
                                                label_1401793c5:
                                                    uint16_t* rax_26 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_26, 1)
                                                    temp0_171[0].o =
                                                        _mm256_extracti128_si256(temp0_171, 1)
                                                    
                                                    if ((temp0_175 & 4) == 0)
                                                        goto label_1401794cc
                                                    
                                                    goto label_1401793e1
                                                
                                            label_1401794bd:
                                                temp0_171[0].o =
                                                    _mm256_extracti128_si256(temp0_171, 1)
                                                
                                                if ((temp0_175 & 4) == 0)
                                                label_1401794cc:
                                                    arg7 = _mm256_cvtepi32_epi64(temp0_171[0].o)
                                                    
                                                    if ((temp0_175 & 8) != 0)
                                                        goto label_140179401
                                                    
                                                    goto label_1401794da
                                                
                                            label_1401793e1:
                                                arg9[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg9[0].q, 2)
                                                arg7 = _mm256_cvtepi32_epi64(temp0_171[0].o)
                                                
                                                if ((temp0_175 & 8) != 0)
                                                label_140179401:
                                                    arg9[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    int64_t rax_28 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_28, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_3, temp0_134, arg7)
                                                    
                                                    if ((temp0_175 & 0x10) == 0)
                                                        goto label_1401794e9
                                                    
                                                    goto label_140179428
                                                
                                            label_1401794da:
                                                arg13 = _mm256_mask_add_epi64(k0_3, temp0_134, arg7)
                                                
                                                if ((temp0_175 & 0x10) == 0)
                                                label_1401794e9:
                                                    
                                                    if ((temp0_175 & 0x20) != 0)
                                                        goto label_140179438
                                                    
                                                    goto label_1401794f2
                                                
                                            label_140179428:
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg13[0].q, 4)
                                                
                                                if ((temp0_175 & 0x20) != 0)
                                                label_140179438:
                                                    uint16_t* rax_30 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_30, 5)
                                                    
                                                    if ((temp0_175 & 0x40) == 0)
                                                        goto label_1401794fb
                                                    
                                                    goto label_14017944e
                                                
                                            label_1401794f2:
                                                
                                                if ((temp0_175 & 0x40) != 0)
                                                label_14017944e:
                                                    arg7[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *arg7[0].q, 6)
                                                    
                                                    if (temp0_175 s< 0)
                                                    label_140179468:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint16_t* rax_32 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        arg22[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg22[0].o, *rax_32, 7)
                                                else
                                                label_1401794fb:
                                                    
                                                    if (temp0_175 s< 0)
                                                        goto label_140179468
                                                
                                                int32_t temp0_179[0x8] =
                                                    _mm256_mask_cvtepu16_epi32(k0_3, arg22[0].o)
                                                temp0_179[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_3, temp0_179, var_6a0), 
                                                    zmm2[0].o)
                                                arg9[0].o = zx.o(0)
                                                arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k4_1 = _mm_mask_testn_epi16_mask(k0_3, 
                                                    temp0_179[0].o, arg8[0].o)
                                                zmm5[0].o = temp0_179[0].o & arg10[0].o
                                                int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, 
                                                    zmm5[0].o, arg8[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_4))
                                                cond:25_1 = rcx_10 == rax_8.b
                                                cond:27_1 = rcx_10 == rax_8.b
                                                cond:37_1 = rcx_10 != rax_8.b
                                                
                                                if (rcx_10 != rax_8.b)
                                                    arg9[0].o = temp0_179[0].o ^ zmm2[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_4, arg18)
                                                arg13 = _mm256_mask_mov_epi32(k4_1, arg17)
                                                arg7 = _mm256_sub_epi32(arg6, arg12)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_4, arg7, temp0_117, 
                                                        2), 
                                                    arg9[0].o)
                                                arg14[0].o = zmm2[0].o & arg10[0].o
                                                k0_1 = _mm_mask_test_epi16_mask(k0_4, arg14[0].o, 
                                                    arg8[0].o)
                                                _kortest_mask8_u8(k0_1, k0_1)
                                                rcx_10 = _cvtmask32_u32(k0_1)
                                                arg18 = _mm256_mask_mov_epi64(k0_1, arg6)
                                                arg17 = arg13
                                            while (cond:37_1)
                                    
                                    zmm2[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_1, 
                                        zmm25[0].o, var_300_1)
                                    arg6[0].o = arg10[0].o & zmm2[0].o
                                    int64_t k0_9 =
                                        _mm_mask_test_epi16_mask(k0_1, arg6[0].o, zmm25[0].o)
                                    _kortest_mask8_u8(k0_9, k0_9)
                                    
                                    if (not(cond:25_1))
                                        arg14 = _mm256_mask_mov_epi32(k3_2, arg13)
                                        arg6 = _mm256_mask_add_epi32(k0_9, zmm19, arg12)
                                        zmm2[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(k0_9, 
                                                arg6, data_142fc9440), 
                                            zmm2[0].o)
                                        arg8[0].o = zmm2[0].o & arg10[0].o
                                        k0_9 = _mm_mask_test_epi16_mask(k0_9, arg8[0].o, zmm25[0].o)
                                        _kortest_mask8_u8(k0_9, k0_9)
                                        
                                        if (cond:27_1)
                                            arg13 = arg14
                                        else
                                            char rcx_12 = _cvtmask32_u32(k0_9)
                                            bool cond:41_1
                                            
                                            do
                                                arg18 = _mm256_mask_add_epi32(k0_9, arg6, arg6)
                                                arg7 = _mm256_mask_add_epi64(k0_9, zmm20, 
                                                    _mm256_mask_cvtepi32_epi64(k0_9, arg18[0].o))
                                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, 
                                                    arg8[0].o, zmm25[0].o)
                                                char temp0_299 = _cvtmask32_u32(k0_10)
                                                
                                                if ((temp0_299 & 1) == 0)
                                                    if ((temp0_299 & 2) != 0)
                                                        goto label_140179af5
                                                    
                                                    goto label_140179be1
                                                
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg7[0].q, 0)
                                                
                                                if ((temp0_299 & 2) != 0)
                                                label_140179af5:
                                                    uint16_t* rax_60 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_60, 1)
                                                    arg9[0].o =
                                                        _mm256_extracti32x4_epi32(k0_10, arg18, 1)
                                                    
                                                    if ((temp0_299 & 4) == 0)
                                                        goto label_140179bf1
                                                    
                                                    goto label_140179b12
                                                
                                            label_140179be1:
                                                arg9[0].o =
                                                    _mm256_extracti32x4_epi32(k0_10, arg18, 1)
                                                
                                                if ((temp0_299 & 4) == 0)
                                                label_140179bf1:
                                                    arg18 =
                                                        _mm256_mask_cvtepi32_epi64(k0_10, arg9[0].o)
                                                    
                                                    if ((temp0_299 & 8) != 0)
                                                        goto label_140179b33
                                                    
                                                    goto label_140179c00
                                                
                                            label_140179b12:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *zmm5[0].q, 2)
                                                arg18 = _mm256_mask_cvtepi32_epi64(k0_10, arg9[0].o)
                                                
                                                if ((temp0_299 & 8) != 0)
                                                label_140179b33:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    uint16_t* rax_62 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_62, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_10, temp0_134, 
                                                        arg18)
                                                    
                                                    if ((temp0_299 & 0x10) == 0)
                                                        goto label_140179c0f
                                                    
                                                    goto label_140179b5a
                                                
                                            label_140179c00:
                                                arg7 =
                                                    _mm256_mask_add_epi64(k0_10, temp0_134, arg18)
                                                
                                                if ((temp0_299 & 0x10) == 0)
                                                label_140179c0f:
                                                    
                                                    if ((temp0_299 & 0x20) != 0)
                                                        goto label_140179b6a
                                                    
                                                    goto label_140179c18
                                                
                                            label_140179b5a:
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg7[0].q, 4)
                                                
                                                if ((temp0_299 & 0x20) != 0)
                                                label_140179b6a:
                                                    uint16_t* rax_64 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_64, 5)
                                                    
                                                    if ((temp0_299 & 0x40) == 0)
                                                        goto label_140179c21
                                                    
                                                    goto label_140179b80
                                                
                                            label_140179c18:
                                                
                                                if ((temp0_299 & 0x40) != 0)
                                                label_140179b80:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *zmm5[0].q, 6)
                                                    
                                                    if (temp0_299 s< 0)
                                                    label_140179b9a:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        uint16_t* rax_66 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        arg24[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg24[0].o, *rax_66, 7)
                                                else
                                                label_140179c21:
                                                    
                                                    if (temp0_299 s< 0)
                                                        goto label_140179b9a
                                                
                                                arg7 = _mm256_mask_cvtepu16_epi32(k0_10, arg24[0].o)
                                                arg8[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_10, arg7, var_6a0, 2), 
                                                    zmm2[0].o)
                                                arg9[0].o = zx.o(0)
                                                arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k3_4 = _mm_mask_testn_epi16_mask(k0_10, 
                                                    arg8[0].o, arg7[0].o)
                                                zmm5[0].o = arg8[0].o & arg10[0].o
                                                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, 
                                                    zmm5[0].o, arg7[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_11))
                                                cond:41_1 = rcx_12 != rax_8.b
                                                
                                                if (rcx_12 != rax_8.b)
                                                    arg9[0].o = arg8[0].o ^ zmm2[0].o
                                                
                                                arg6 = _mm256_add_epi32(arg6, arg12)
                                                arg13 = _mm256_mask_mov_epi32(k3_4, arg14)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_11, arg6, data_142fc9440), 
                                                    arg9[0].o)
                                                arg8[0].o = zmm2[0].o & arg10[0].o
                                                k0_9 = _mm_mask_test_epi16_mask(k0_11, arg8[0].o, 
                                                    arg7[0].o)
                                                _kortest_mask8_u8(k0_9, k0_9)
                                                rcx_12 = _cvtmask32_u32(k0_9)
                                                arg14 = arg13
                                            while (cond:41_1)
                                    
                                    arg16 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_9, arg10[0].o, zmm25[0].o), 
                                        arg13, arg16)
                                    int32_t temp0_348[0x8] = _mm256_add_epi32(arg16, arg16)
                                    zmm2 = _mm256_mask_add_epi64(k0_9, zmm20, 
                                        _mm256_cvtepi32_epi64(temp0_348[0].o))
                                    int128_t var_3c0
                                    
                                    if ((temp0_136 & 1) != 0)
                                        rax_8 = zmm2[0].q
                                        arg7[0].o = var_3c0
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 0)
                                        arg14 = var_340_1
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 1)
                                    else
                                        arg14 = var_340_1
                                        arg7[0].o = var_3c0
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 1)
                                    
                                    temp0_348[0].o = _mm256_extracti128_si256(temp0_348, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                        arg6 = _mm256_cvtepi32_epi64(temp0_348[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_14017a0df
                                        
                                        goto label_140179f9e
                                    
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0].q
                                    arg7[0].o = zmm5[0].o
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(temp0_348[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_14017a0df:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(k0_9, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_140179fae
                                        
                                        goto label_14017a100
                                    
                                label_140179f9e:
                                    zmm2 = _mm256_mask_add_epi64(k0_9, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_14017a100:
                                        rax_8 = zmm2[0].q
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_14017a114:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_140179fc2
                                            
                                            goto label_14017a129
                                    else
                                    label_140179fae:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_14017a114
                                    
                                    bool cond:33_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_14017a129:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 6)
                                        cond:33_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_14017a142:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140179fc2:
                                        cond:33_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_14017a142
                                    
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_21 =
                                        _mm_mask_testn_epi16_mask(k0_9, arg10[0].o, zmm2[0].o)
                                    _mm256_sub_epi32(arg13, arg12)
                                    arg13 = _mm256_mask_mov_epi32(k1_21, arg15)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                            arg13, temp0_117), 
                                        arg10[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_9, arg6[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:33_1))
                                        arg13 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, arg6[0].o, 
                                                    zmm2[0].o), 
                                                arg13))
                                    
                                    arg9[0].o = var_4e0
                                    arg8[0].o = var_4f0
                                    _mm256_mask_load_ps(arg5, var_6c0)
                                    int32_t temp0_363[0x8] = _mm256_add_epi32(arg13, arg13)
                                    zmm2 = _mm256_mask_add_epi64(arg5, zmm20, 
                                        _mm256_cvtepi32_epi64(temp0_363[0].o))
                                    
                                    if ((temp0_136 & 1) == 0)
                                        zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                        
                                        if ((temp0_136 & 2) != 0)
                                            goto label_14017a174
                                        
                                        goto label_14017a054
                                    
                                    rax_8 = zmm2[0].q
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 0)
                                    zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_14017a174:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 1)
                                        temp0_363[0].o = _mm256_extracti128_si256(temp0_363, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_14017a064
                                        
                                        goto label_14017a18f
                                    
                                label_14017a054:
                                    temp0_363[0].o = _mm256_extracti128_si256(temp0_363, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_14017a064:
                                        arg6 = _mm256_cvtepi32_epi64(temp0_363[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_14017a1b6
                                        
                                        goto label_14017a073
                                    
                                label_14017a18f:
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_8 = arg7[0].q
                                    arg7[0].o = zmm5[0].o
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(temp0_363[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_14017a1b6:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14017a083
                                        
                                        goto label_14017a1d7
                                    
                                label_14017a073:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) == 0)
                                    label_14017a083:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_14017a1eb
                                        
                                        goto label_14017a08d
                                    
                                label_14017a1d7:
                                    rax_8 = zmm2[0].q
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 4)
                                    
                                    if ((temp0_136 & 0x20) != 0)
                                    label_14017a1eb:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 5)
                                        
                                        if ((temp0_136 & 0x40) == 0)
                                            goto label_14017a097
                                        
                                        goto label_14017a200
                                    
                                label_14017a08d:
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_14017a200:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 6)
                                        
                                        if (temp0_136 s< 0)
                                        label_14017a219:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_14017a097:
                                        
                                        if (temp0_136 s< 0)
                                            goto label_14017a219
                                    
                                    var_3c0 = arg7[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(arg7[0].o)
                                    arg6 = _mm256_cvtepu16_epi32(arg9[0].o)
                                
                                var_4f0 = arg8[0].o
                                var_4e0 = arg9[0].o
                                arg7[0].o = zx.o(0)
                                z = arg30 == 1
                                
                                if (not(z))
                                    int32_t temp0_424[0x8] =
                                        __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                        _mm256_sub_epi32(arg6, zmm2), 1)
                                    zmm2 = _mm256_sub_ps(var_180_1, _mm256_cvtepi32_ps(zmm2))
                                    arg6 = _mm256_cvtepi32_ps(temp0_424)
                                    arg7 = _mm256_div_ps(zmm2, arg6)
                                
                                zmm2[0].o = _mm_mask_and_epi64(arg5, arg17[0].o, zmm25[0].o)
                                zmm2 = _mm256_mask_mov_ps(
                                    _mm_cmp_epi16_mask(arg5, zmm2[0].o, zmm25[0].o, 4), arg7)
                        
                        arg18 = _mm256_mask_mov_ps(k2_9, zmm2)
                        var_6c0 = _mm256_mask_store_ps(arg5, arg18)
                        arg15 = arg13
                else
                    arg6[0].o = zx.o(0)
                    arg7[0].o = zx.o(0)
                    zmm5[0].o = zx.o(arg29)
                    arg7[0].o f- zmm5[0]
                    z = arg7[0] f== zmm5[0]
                    
                    if (not(arg7[0] f< zmm5[0]))
                        arg16[0].o = zx.o(0)
                        arg15[0].o = zx.o(0)
                    else
                        zmm5[0].o f- 1f
                        bool c_2 = zmm5[0] f< 1f
                        z = zmm5[0] f== 1f
                        arg7 = _mm256_add_epi32(arg13, arg12)
                        
                        if (not(c_2))
                            arg16 = _mm256_mask_mov_epi32(k3_1, arg7)
                            arg15 = arg16
                        else
                            arg18 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(arg7), var_2c0_1)
                            zmm17 = _mm256_mask_roundscale_ps(arg5, arg18, 9)
                            arg6 = _mm256_mask_cvttps_epi32(arg5, zmm17)
                            arg16 = _mm256_mask_min_epi32(k3_1, arg7, arg6)
                            arg6[0].o = zx.o(0)
                            z = arg30 == 1
                            
                            if (not(z))
                                arg6 = _mm256_mask_sub_ps(arg5, arg18, zmm17)
                            
                            zmm5 = _mm256_sub_epi32(arg16, arg12)
                            arg15 = _mm256_mask_min_epi32(k3_1, zmm5, arg7)
                    
                    arg6 = _mm256_mask_mov_ps(k3_1, arg6)
                    var_6c0 = arg6
                    k2_9 = _mm256_mask_test_epi32_mask(k2_8, zmm2, zmm2)
                    _kortest_mask8_u8(k2_9, k2_9)
                    
                    if (not(z))
                        goto label_14017917e
            
            zmm2[0].o = _mm256_extracti128_si256(arg14, 1)
            zmm17 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
            arg17 = arg14
            zmm18 = _mm256_mask_cvtepi32_epi64(arg5, arg14[0].o)
            zmm19 = _mm256_mask_mov_epi64(arg5, zmm20)
            zmm2 = _mm256_mask_mullo_epi32(arg5, arg16, zmm20)
            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg13 = _mm256_cvtepi32_epi64(arg6[0].o)
            arg14 = _mm256_cvtepi32_epi64(zmm2[0].o)
            zmm2 = _mm256_mask_add_epi64(arg5, arg14, zmm18)
            arg6 = _mm256_mask_add_epi64(arg5, arg13, zmm17)
            zmm20 = _mm256_mask_add_epi64(arg5, arg6, arg11)
            arg10 = _mm256_mask_add_epi64(arg5, zmm2, arg26)
            int64_t k2_10 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, temp0_61, 1)
            _kortest_mask8_u8(k2_10, k2_10)
            
            if (not(z))
                uint64_t k3_6 = _mm256_mask_testn_epi32_mask(k2_10, arg23, arg23)
                _kortest_mask8_u8(k3_6, k3_6)
                
                if (not(z))
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                    zmm2 = _mm256_add_epi64(zmm2, arg13)
                    arg18 = _mm256_mask_add_epi64(arg5, zmm2, arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    uint64_t k4_3 = _kshiftri_mask8(k3_6, 4)
                    int64_t k5_1 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                    int64_t k5_2
                    float temp0_453[0x4]
                    temp0_453, k5_2 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_1, *(r10 + arg6[0].q))
                    zmm25[0].o = temp0_453
                    int64_t k5_3 = __kmovq_maskmskw_masku64_avx512(k4_3)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k5_4
                    float temp0_455[0x4]
                    temp0_455, k5_4 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_3, *(r10 + arg18[0].q))
                    arg6[0].o = temp0_455
                    arg6 = _mm256_insertf32x4(arg5, zmm25, arg6[0].o, 1)
                    arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 8)
                    int64_t temp0_458[0x4] = _mm256_mask_add_epi64(arg5, zmm2, arg18)
                    arg18 = _mm256_mask_add_epi64(arg5, arg7, arg18)
                    int64_t k5_5 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    arg8[0].o = zx.o(0)
                    int64_t k5_6
                    float temp0_460[0x4]
                    temp0_460, k5_6 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_5, *(r10 + arg18[0].q))
                    arg8[0].o = temp0_460
                    int64_t k5_7 = __kmovq_maskmskw_masku64_avx512(k4_3)
                    arg9[0].o = zx.o(0)
                    int64_t k5_8
                    float temp0_461[0x4]
                    temp0_461, k5_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_7, 
                        *(r10 + temp0_458[0]))
                    arg9[0].o = temp0_461
                    arg18 = _mm256_insertf32x4(arg5, arg8, arg9[0].o, 1)
                    zmm25 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
                    arg7 = _mm256_mask_add_epi64(arg5, arg7, zmm25)
                    int64_t k5_9 = __kmovq_maskmskw_masku64_avx512(k3_6)
                    zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                    int64_t k5_10
                    float temp0_467[0x4]
                    temp0_467, k5_10 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_9, *(r10 + arg7[0].q))
                    zmm25[0].o = temp0_467
                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                    int64_t k4_4
                    float temp0_469[0x4]
                    temp0_469, k4_4 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_3, *(r10 + zmm2[0].q))
                    arg7[0].o = temp0_469
                    float temp0_470[0x8] = _mm256_insertf32x4(arg5, zmm25, arg7[0].o, 1)
                    zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    var_420.32 = _mm256_mask_storeu_ps(k3_6, arg6)
                    var_400.32 = _mm256_mask_storeu_ps(k3_6, arg18)
                    var_3e0.32 = _mm256_mask_storeu_ps(k3_6, temp0_470)
                
                int64_t k2_11 = _mm256_mask_test_epi32_mask(k2_10, arg23, arg23)
                _kortest_mask8_u8(k2_11, k2_11)
                
                if (not(z))
                    zmm2 = _mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)
                    int64_t k3_7 = _mm256_movepi32_mask(zmm2)
                    arg6[0].o = zx.o(0)
                    int64_t k4_5 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_11, arg6, zmm2)
                    _kortest_mask8_u8(k4_5, k4_5)
                    arg6 = arg10
                    zmm2 = _mm256_mask_mov_epi64(arg5, zmm20)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(k4_5, arg10, arg7)
                        int64_t k5_11 = _kshiftri_mask8(k4_5, 4)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        zmm2 = _mm256_mask_add_epi64(k5_11, zmm20, arg7)
                        arg18 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                        zmm25 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                        arg18 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, arg18, arg13), arg7)
                        arg7 = _mm256_mask_add_epi64(arg5, zmm25, arg7)
                        int64_t k5_12 = _kshiftri_mask8(k4_5, 4)
                        zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                        int64_t k4_6
                        float temp0_488[0x4]
                        temp0_488, k4_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_5, 
                            *(r10 + arg7[0].q))
                        zmm25[0].o = temp0_488
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k5_13
                        float temp0_490[0x4]
                        temp0_490, k5_13 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_12, 
                            *(r10 + arg18[0].q))
                        arg7[0].o = temp0_490
                        arg7 = _mm256_insertf32x4(arg5, zmm25, arg7[0].o, 1)
                        zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    var_420.32 = _mm256_mask_storeu_ps(k2_11, _mm256_mask_mov_ps(k3_7, arg7))
                    arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 2)
                    arg7 = _mm256_mask_and_epi32(arg5, temp0_65, arg18)
                    int64_t k3_8 = _mm256_mask_test_epi32_mask(k2_11, temp0_65, arg18)
                    _kortest_mask8_u8(k3_8, k3_8)
                    
                    if (not(z))
                        arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        zmm25 = _mm256_mask_add_epi64(k3_8, arg6, arg18)
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
                        zmm2 = _mm256_mask_add_epi64(k4_7, zmm2, arg18)
                        arg18 = _mm256_insertf32x4(arg5, arg8, arg6[0].o, 1)
                        arg6 = _mm256_mask_mov_epi64(arg5, zmm25)
                        zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    var_400.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), arg18))
                    arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 4)
                    arg7 = _mm256_mask_and_epi32(arg5, temp0_65, arg18)
                    int64_t k3_11 = _mm256_mask_test_epi32_mask(k2_11, temp0_65, arg18)
                    _kortest_mask8_u8(k3_11, k3_11)
                    
                    if (not(z))
                        int64_t k4_8 = _kshiftri_mask8(k3_11, 4)
                        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
                        z = rax_8.d == rax_8.d
                        int64_t k3_12
                        float temp0_512[0x4]
                        temp0_512, k3_12 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_11, *arg6[0].q)
                        arg18[0].o = temp0_512
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k4_9
                        float temp0_514[0x4]
                        temp0_514, k4_9 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_8, *zmm2[0].q)
                        arg6[0].o = temp0_514
                        arg18 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                    
                    var_3e0.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), arg18))
            
            zmm2 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, temp0_61, zmm2, 4)
            int64_t k2_12 = _mm256_cmp_epi32_mask(k6_1, temp0_61, zmm2, 4)
            _kortest_mask8_u8(k2_12, k2_12)
            int64_t k2_15
            
            if (not(z))
                uint64_t k2_13 =
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, temp0_61, 3)
                _kortest_mask8_u8(k2_13, k2_13)
                
                if (not(z))
                    zmm2[0].o = zx.o(0)
                    float var_5c0_1[0x8] = zmm2
                    float var_5e0_1[0x8] = zmm2
                    float var_600_1[0x8] = zmm2
                    float var_620_1[0x8] = zmm2
                    float var_640_1[0x8] = zmm2
                    float var_660_1[0x8] = zmm2
                    int64_t k3_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)), 
                        temp0_61, 3)
                    uint64_t k4_10 = _mm256_cmp_epi32_mask(k3_15, arg20, arg12, 4)
                    _kortest_mask8_u8(k4_10, k4_10)
                    zmm2 = _mm256_mask_mov_epi64(arg5, arg26)
                    arg6 = arg11
                    
                    if (not(z))
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        int64_t k5_16 = _kshiftri_mask8(k4_10, 4)
                        arg6 = _mm256_mask_add_epi64(k5_16, arg11, zmm2)
                        _mm256_mask_mov_epi64(arg5, arg26)
                        arg7 = _mm256_mask_add_epi64(k4_10, arg26, zmm2)
                        uint64_t k1_29 = __kmovq_maskmskw_masku64_avx512(k6_1)
                        uint64_t k6_2 = _kshiftri_mask8(k4_10, 4)
                        int64_t k7_1 = __kmovq_maskmskw_masku64_avx512(k4_10)
                        zmm2[0].o = zx.o(0)
                        int64_t k7_2
                        float temp0_525[0x4]
                        temp0_525, k7_2 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_1, *arg26[0])
                        zmm2[0].o = temp0_525
                        int64_t k7_3 = __kmovq_maskmskw_masku64_avx512(k6_2)
                        arg9[0].o = zx.o(0)
                        int64_t k7_4
                        float temp0_526[0x4]
                        temp0_526, k7_4 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_3, *arg11[0])
                        arg9[0].o = temp0_526
                        var_600_1 =
                            _mm256_mask_storeu_ps(k3_15, _mm256_insertf128_ps(zmm2, arg9[0].o, 1))
                        arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 8)
                        _mm256_mask_mov_epi64(arg5, arg26)
                        zmm2 = _mm256_mask_add_epi64(k4_10, arg26, arg18)
                        zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                        int64_t k4_11
                        float temp0_533[0x4]
                        temp0_533, k4_11 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_10, *arg7[0].q)
                        zmm25[0].o = temp0_533
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k6_3
                        float temp0_535[0x4]
                        temp0_535, k6_3 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_2, *arg6[0].q)
                        arg7[0].o = temp0_535
                        k6_1 = __kmovq_maskmskw_masku64_avx512(k1_29)
                        arg6 = _mm256_mask_add_epi64(k5_16, arg11, arg18)
                        var_660_1 = _mm256_mask_storeu_ps(k3_15, 
                            _mm256_insertf32x4(arg5, zmm25, arg7[0].o, 1))
                    
                    int64_t k3_16 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 3)
                    int64_t k4_12 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, temp0_65, 2)
                    uint64_t k5_17 = _mm256_cmp_epi32_mask(k4_12, arg20, arg12, 4)
                    _kortest_mask8_u8(k5_17, k5_17)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        var_520[0].d = _store_mask32(k6_1)
                        int64_t k6_4 = _kshiftri_mask8(k5_17, 4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg18 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        _mm256_mask_mov_epi64(arg5, zmm2)
                        int64_t temp0_544[0x4] = _mm256_mask_add_epi64(k5_17, zmm2, arg7)
                        uint64_t k7_5 = _kshiftri_mask8(k5_17, 4)
                        int64_t k1_30 = __kmovq_maskmskw_masku64_avx512(k5_17)
                        arg7[0].o = zx.o(0)
                        int64_t k1_31
                        float temp0_545[0x4]
                        temp0_545, k1_31 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_30, *zmm2[0].q)
                        arg7[0].o = temp0_545
                        int64_t k1_32 = __kmovq_maskmskw_masku64_avx512(k7_5)
                        arg8[0].o = zx.o(0)
                        int64_t k1_33
                        float temp0_546[0x4]
                        temp0_546, k1_33 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_32, *arg6[0].q)
                        arg8[0].o = temp0_546
                        var_5e0_1 =
                            _mm256_mask_storeu_ps(k4_12, _mm256_insertf128_ps(arg7, arg8[0].o, 1))
                        arg7 = __vpbroadcastq_ymmqq_memq(8)
                        zmm2 = _mm256_mask_add_epi64(k5_17, zmm2, arg7)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t k5_18
                        float temp0_552[0x4]
                        temp0_552, k5_18 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_17, *temp0_544[0])
                        arg8[0].o = temp0_552
                        arg9[0].o = zx.o(0)
                        int64_t k7_6
                        float temp0_553[0x4]
                        temp0_553, k7_6 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_5, *arg18[0].q)
                        arg9[0].o = temp0_553
                        arg6 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        k6_1 = _load_mask32(var_520[0].d)
                        var_640_1 =
                            _mm256_mask_storeu_ps(k4_12, _mm256_insertf128_ps(arg8, arg9[0].o, 1))
                    
                    int64_t k3_17 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, temp0_65, 4)
                    uint64_t k4_13 = _mm256_cmp_epi32_mask(k3_17, arg20, arg12, 4)
                    _kortest_mask8_u8(k4_13, k4_13)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k5_19 = _kshiftri_mask8(k4_13, 4)
                        int64_t k1_34 = __kmovq_maskmskw_masku64_avx512(k4_13)
                        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
                        int64_t k1_35
                        float temp0_559[0x4]
                        temp0_559, k1_35 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_34, *zmm2[0].q)
                        arg18[0].o = temp0_559
                        int64_t k1_36 = __kmovq_maskmskw_masku64_avx512(k5_19)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t k1_37
                        float temp0_561[0x4]
                        temp0_561, k1_37 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_36, *arg6[0].q)
                        arg9[0].o = temp0_561
                        arg6 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_13, 4), arg6, arg7)
                        zmm2 = _mm256_mask_add_epi64(k4_13, zmm2, arg7)
                        arg7 = _mm256_insertf32x4(arg5, arg18, arg9[0].o, 1)
                        var_5c0_1 = _mm256_mask_storeu_ps(k3_17, arg7)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k4_14
                        float temp0_567[0x4]
                        temp0_567, k4_14 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_13, *zmm2[0].q)
                        arg7[0].o = temp0_567
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int64_t k5_20
                        float temp0_569[0x4]
                        temp0_569, k5_20 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_19, *arg6[0].q)
                        zmm2[0].o = temp0_569
                        var_620_1 =
                            _mm256_mask_storeu_ps(k3_17, _mm256_insertf128_ps(arg7, zmm2[0].o, 1))
                    
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                    zmm2 = _mm256_add_epi64(_mm256_add_epi64(zmm2, arg13), arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    int64_t k1_39 = _kshiftri_mask8(k2_13, 4)
                    int64_t k3_18 = __kmovq_maskmskw_masku64_avx512(k2_13)
                    arg7[0].o = zx.o(0)
                    int64_t k3_19
                    uint32_t temp0_579[0x4]
                    temp0_579, k3_19 =
                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_18, *(r10 + arg6[0].q))
                    arg7[0].o = temp0_579
                    arg6[0].o = zx.o(0)
                    int64_t k1_40
                    uint32_t temp0_580[0x4]
                    temp0_580, k1_40 =
                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_39, *(r10 + zmm2[0].q))
                    arg6[0].o = temp0_580
                    zmm2 = _mm256_inserti128_si256(arg7, arg6[0].o, 1)
                    arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_srli_epi32(zmm2, 0xa), 0x7ff)
                    arg7 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3ff), 
                            0xfffffe01)), 
                        0x43ff8000)
                    arg18 = _mm256_mask_load_ps(arg5, var_660_1)
                    zmm25 = _mm256_mask_load_ps(arg5, var_640_1)
                    arg8 = var_620_1
                    arg18 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg18, arg5, arg7, 
                        var_600_1)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                    arg9 = _mm256_broadcast_ss(1023f)
                    arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_div_ps(arg6, arg9), arg5, zmm25, var_5e0_1)
                    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                        _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm2, 0x15), 
                                arg7)), 
                            arg9), 
                        arg8, var_5c0_1)
                    var_420.32 = _mm256_mask_storeu_ps(k2_13, arg18)
                    var_400.32 = _mm256_mask_storeu_ps(k2_13, arg6)
                    var_3e0.32 = _mm256_mask_storeu_ps(k2_13, zmm2)
                    zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                
                k2_15 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 3), arg5)
                int64_t k3_20 = _mm256_cmp_epi32_mask(k2_15, arg20, arg12, 4)
                _kortest_mask8_u8(k3_20, k3_20)
            
            int64_t k1_43
            
            if (z)
                zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                k1_43 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg16, arg15, 4), arg20, 
                    arg12, 4)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z))
                label_14017aec8:
                    zmm2 = _mm256_mask_mullo_epi32(arg5, arg15, zmm20)
                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                    arg13 = _mm256_cvtepi32_epi64(arg6[0].o)
                    arg14 = _mm256_cvtepi32_epi64(zmm2[0].o)
                    zmm2 = _mm256_mask_add_epi64(arg5, arg14, zmm18)
                    arg6 = _mm256_mask_add_epi64(arg5, arg13, zmm17)
                    zmm20 = _mm256_mask_add_epi64(arg5, arg6, arg11)
                    arg10 = _mm256_mask_add_epi64(arg5, zmm2, arg26)
                    int64_t k2_17 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, temp0_61, 1)
                    _kortest_mask8_u8(k2_17, k2_17)
                    arg8 = var_6c0
                    float var_3a0[0x8]
                    float var_380[0x8]
                    float var_360[0x8]
                    
                    if (not(z))
                        uint64_t k3_22 = _mm256_mask_testn_epi32_mask(k2_17, arg23, arg23)
                        _kortest_mask8_u8(k3_22, k3_22)
                        
                        if (not(z))
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                            zmm2 = _mm256_add_epi64(zmm2, arg13)
                            zmm5 = _mm256_add_epi64(zmm2, arg6)
                            arg6 = _mm256_add_epi64(arg7, arg6)
                            uint64_t k4_18 = _kshiftri_mask8(k3_22, 4)
                            int64_t k5_23 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
                            int64_t k5_24
                            float temp0_678[0x4]
                            temp0_678, k5_24 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_23, *(r10 + arg6[0].q))
                            arg18[0].o = temp0_678
                            int64_t k5_25 = __kmovq_maskmskw_masku64_avx512(k4_18)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k5_26
                            float temp0_680[0x4]
                            temp0_680, k5_26 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_25, *(r10 + zmm5[0].q))
                            arg6[0].o = temp0_680
                            arg6 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                            zmm5 = __vpbroadcastq_ymmqq_memq(8)
                            arg18 = _mm256_mask_add_epi64(arg5, zmm2, zmm5)
                            zmm5 = _mm256_add_epi64(arg7, zmm5)
                            int64_t k5_27 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                            int64_t k5_28
                            float temp0_686[0x4]
                            temp0_686, k5_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_27, *(r10 + zmm5[0].q))
                            zmm25[0].o = temp0_686
                            int64_t k5_29 = __kmovq_maskmskw_masku64_avx512(k4_18)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k5_30
                            float temp0_688[0x4]
                            temp0_688, k5_30 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_29, *(r10 + arg18[0].q))
                            zmm5[0].o = temp0_688
                            zmm5 = _mm256_insertf32x4(arg5, zmm25, zmm5[0].o, 1)
                            zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm2, arg18)
                            arg7 = _mm256_mask_add_epi64(arg5, arg7, arg18)
                            int64_t k5_31 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
                            int64_t k5_32
                            float temp0_695[0x4]
                            temp0_695, k5_32 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_31, *(r10 + arg7[0].q))
                            arg18[0].o = temp0_695
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k4_19
                            float temp0_697[0x4]
                            temp0_697, k4_19 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k4_18, *(r10 + zmm2[0].q))
                            arg7[0].o = temp0_697
                            zmm2 = _mm256_insertf32x4(arg5, arg18, arg7[0].o, 1)
                            var_3a0 = _mm256_mask_storeu_ps(k3_22, arg6)
                            var_380 = _mm256_mask_storeu_ps(k3_22, zmm5)
                            var_360 = _mm256_mask_storeu_ps(k3_22, zmm2)
                        
                        int64_t k2_18 = _mm256_mask_test_epi32_mask(k2_17, arg23, arg23)
                        _kortest_mask8_u8(k2_18, k2_18)
                        
                        if (not(z))
                            zmm2 = _mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)
                            int64_t k3_23 = _mm256_movepi32_mask(zmm2)
                            arg6[0].o = zx.o(0)
                            int64_t k4_20 =
                                __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, arg6, zmm2)
                            _kortest_mask8_u8(k4_20, k4_20)
                            arg6 = arg10
                            zmm2 = _mm256_mask_mov_epi64(arg5, zmm20)
                            
                            if (not(z))
                                arg7 = __vpbroadcastq_ymmqq_memq(4)
                                arg6 = _mm256_mask_add_epi64(k4_20, arg10, arg7)
                                int64_t k5_33 = _kshiftri_mask8(k4_20, 4)
                                _mm256_mask_mov_epi64(arg5, zmm20)
                                zmm2 = _mm256_mask_add_epi64(k5_33, zmm20, arg7)
                                zmm5 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                                arg18 = _mm256_mask_add_epi64(arg5, 
                                    _mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                                zmm5 = _mm256_add_epi64(_mm256_add_epi64(zmm5, arg13), arg7)
                                arg7 = _mm256_mask_add_epi64(arg5, arg18, arg7)
                                int64_t k5_34 = _kshiftri_mask8(k4_20, 4)
                                arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
                                int64_t k4_21
                                float temp0_715[0x4]
                                temp0_715, k4_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_20, *(r10 + arg7[0].q))
                                arg18[0].o = temp0_715
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k5_35
                                float temp0_717[0x4]
                                temp0_717, k5_35 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_34, *(r10 + zmm5[0].q))
                                arg7[0].o = temp0_717
                                arg7 = _mm256_insertf32x4(arg5, arg18, arg7[0].o, 1)
                            
                            var_3a0 = _mm256_mask_storeu_ps(k2_18, _mm256_mask_mov_ps(k3_23, arg7))
                            uint32_t temp0_721[0x8] = __vpbroadcastd_ymmqq_memd(2)
                            arg7 = _mm256_mask_and_epi32(arg5, temp0_65, temp0_721)
                            int64_t k3_24 = _mm256_mask_test_epi32_mask(k2_18, temp0_65, temp0_721)
                            _kortest_mask8_u8(k3_24, k3_24)
                            
                            if (not(z))
                                zmm5 = __vpbroadcastq_ymmqq_memq(4)
                                _mm256_mask_mov_epi64(arg5, arg6)
                                zmm25 = _mm256_mask_add_epi64(k3_24, arg6, zmm5)
                                int64_t k4_22 = _kshiftri_mask8(k3_24, 4)
                                int64_t k5_36 = _kshiftri_mask8(k3_24, 4)
                                arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
                                int64_t k3_25
                                float temp0_727[0x4]
                                temp0_727, k3_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k3_24, *arg6[0].q)
                                arg18[0].o = temp0_727
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k5_37
                                float temp0_729[0x4]
                                temp0_729, k5_37 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_36, *zmm2[0].q)
                                arg6[0].o = temp0_729
                                zmm2 = _mm256_mask_add_epi64(k4_22, zmm2, zmm5)
                                arg18 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                                arg6 = _mm256_mask_mov_epi64(arg5, zmm25)
                                zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            
                            var_380 = _mm256_mask_storeu_ps(k2_18, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), 
                                    arg18))
                            zmm5 = __vpbroadcastd_ymmqq_memd(4)
                            arg7 = _mm256_mask_and_epi32(arg5, temp0_65, zmm5)
                            int64_t k3_27 = _mm256_mask_test_epi32_mask(k2_18, temp0_65, zmm5)
                            _kortest_mask8_u8(k3_27, k3_27)
                            
                            if (not(z))
                                int64_t k4_23 = _kshiftri_mask8(k3_27, 4)
                                zmm5[0].o = zx.o(0)
                                z = &var_380 == &var_380
                                int64_t k3_28
                                float temp0_738[0x4]
                                temp0_738, k3_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k3_27, *arg6[0].q)
                                zmm5[0].o = temp0_738
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k4_24
                                float temp0_740[0x4]
                                temp0_740, k4_24 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_23, *zmm2[0].q)
                                arg6[0].o = temp0_740
                                arg18 = _mm256_insertf32x4(arg5, zmm5, arg6[0].o, 1)
                            
                            zmm2 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, arg7, arg7), arg18)
                            var_360 = _mm256_mask_storeu_ps(k2_18, zmm2)
                    
                    _ktest_mask8_u8(k1_43, arg5)
                    
                    if (not(z))
                        int64_t k2_19 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, temp0_61, 3)
                        _kortest_mask8_u8(k2_19, k2_19)
                        
                        if (not(z))
                            zmm2[0].o = zx.o(0)
                            float var_5c0_2[0x8] = zmm2
                            float var_5e0_2[0x8] = zmm2
                            float var_600_2[0x8] = zmm2
                            float var_620_2[0x8] = zmm2
                            float var_640_2[0x8] = zmm2
                            float var_660_2[0x8] = zmm2
                            int64_t k3_31 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)), 
                                temp0_61, 3)
                            uint64_t k4_25 = _kand_mask8(k1_43, k3_31)
                            _kortest_mask8_u8(k4_25, k4_25)
                            var_520[0].d = _store_mask32(k2_19)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k5_38 = _kshiftri_mask8(k4_25, 4)
                                arg6 = _mm256_mask_add_epi64(k5_38, arg11, zmm2)
                                _mm256_mask_mov_epi64(arg5, arg26)
                                arg7 = _mm256_mask_add_epi64(k4_25, arg26, zmm2)
                                uint64_t k6_5 = _kshiftri_mask8(k4_25, 4)
                                int64_t k7_7 = __kmovq_maskmskw_masku64_avx512(k4_25)
                                zmm2[0].o = zx.o(0)
                                int64_t k7_8
                                float temp0_750[0x4]
                                temp0_750, k7_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_7, *arg26[0])
                                zmm2[0].o = temp0_750
                                int64_t k7_9 = __kmovq_maskmskw_masku64_avx512(k6_5)
                                zmm5[0].o = zx.o(0)
                                int64_t k7_10
                                float temp0_751[0x4]
                                temp0_751, k7_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_9, *arg11[0])
                                zmm5[0].o = temp0_751
                                var_600_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(zmm2, zmm5[0].o, 1))
                                zmm2 = __vpbroadcastq_ymmqq_memq(8)
                                arg26 = _mm256_mask_add_epi64(k4_25, arg26, zmm2)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k4_26
                                float temp0_757[0x4]
                                temp0_757, k4_26 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_25, *arg7[0].q)
                                zmm5[0].o = temp0_757
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k6_6
                                float temp0_759[0x4]
                                temp0_759, k6_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k6_5, *arg6[0].q)
                                arg7[0].o = temp0_759
                                arg11 = _mm256_mask_add_epi64(k5_38, arg11, zmm2)
                                var_660_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            int64_t k3_32 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 3)
                            int64_t k4_27 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                k3_32, temp0_65, 2)
                            uint64_t k5_39 = _kand_mask8(k1_43, k4_27)
                            _kortest_mask8_u8(k5_39, k5_39)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k6_7 = _kshiftri_mask8(k5_39, 4)
                                arg6 = _mm256_mask_add_epi64(k6_7, arg11, zmm2)
                                _mm256_mask_mov_epi64(arg5, arg26)
                                arg7 = _mm256_mask_add_epi64(k5_39, arg26, zmm2)
                                uint64_t k7_11 = _kshiftri_mask8(k5_39, 4)
                                int64_t k2_20 = __kmovq_maskmskw_masku64_avx512(k5_39)
                                zmm2[0].o = zx.o(0)
                                int64_t k2_21
                                float temp0_767[0x4]
                                temp0_767, k2_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_20, *arg26[0])
                                zmm2[0].o = temp0_767
                                int64_t k2_22 = __kmovq_maskmskw_masku64_avx512(k7_11)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k2_23
                                float temp0_769[0x4]
                                temp0_769, k2_23 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_22, *arg11[0])
                                zmm5[0].o = temp0_769
                                var_5e0_2 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(zmm2, zmm5[0].o, 1))
                                zmm2 = __vpbroadcastq_ymmqq_memq(8)
                                arg26 = _mm256_mask_add_epi64(k5_39, arg26, zmm2)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k5_40
                                float temp0_775[0x4]
                                temp0_775, k5_40 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_39, *arg7[0].q)
                                zmm5[0].o = temp0_775
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k7_12
                                float temp0_777[0x4]
                                temp0_777, k7_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_11, *arg6[0].q)
                                arg7[0].o = temp0_777
                                arg11 = _mm256_mask_add_epi64(k6_7, arg11, zmm2)
                                var_640_2 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            uint64_t k6_8 = _load_mask32(var_520[0].d)
                            int64_t k3_33 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                k3_32, temp0_65, 4)
                            uint64_t k4_28 = _kand_mask8(k1_43, k3_33)
                            _kortest_mask8_u8(k4_28, k4_28)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                uint64_t k5_41 = _kshiftri_mask8(k4_28, 4)
                                int64_t k2_24 = __kmovq_maskmskw_masku64_avx512(k4_28)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k2_25
                                float temp0_783[0x4]
                                temp0_783, k2_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_24, *arg26[0])
                                arg6[0].o = temp0_783
                                int64_t k2_26 = __kmovq_maskmskw_masku64_avx512(k5_41)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k2_27
                                float temp0_785[0x4]
                                temp0_785, k2_27 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_26, *arg11[0])
                                arg7[0].o = temp0_785
                                arg11 =
                                    _mm256_mask_add_epi64(_kshiftri_mask8(k4_28, 4), arg11, zmm2)
                                arg26 = _mm256_mask_add_epi64(k4_28, arg26, zmm2)
                                zmm2 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                var_5c0_2 = _mm256_mask_storeu_ps(k3_33, zmm2)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k4_29
                                float temp0_791[0x4]
                                temp0_791, k4_29 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_28, *arg26[0])
                                zmm2[0].o = temp0_791
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k5_42
                                float temp0_793[0x4]
                                temp0_793, k5_42 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_41, *arg11[0])
                                arg6[0].o = temp0_793
                                var_620_2 = _mm256_mask_storeu_ps(k3_33, 
                                    _mm256_insertf128_ps(zmm2, arg6[0].o, 1))
                            
                            zmm2 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                            zmm2 = _mm256_add_epi64(_mm256_add_epi64(zmm2, arg13), arg6)
                            arg6 = _mm256_add_epi64(arg7, arg6)
                            int64_t k2_29 = _kshiftri_mask8(k6_8, 4)
                            int64_t k3_34 = __kmovq_maskmskw_masku64_avx512(k6_8)
                            arg7[0].o = zx.o(0)
                            int64_t k3_35
                            uint32_t temp0_803[0x4]
                            temp0_803, k3_35 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k3_34, *(r10 + arg6[0].q))
                            arg7[0].o = temp0_803
                            arg6[0].o = zx.o(0)
                            int64_t k2_30
                            uint32_t temp0_804[0x4]
                            temp0_804, k2_30 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k2_29, *(r10 + zmm2[0].q))
                            arg6[0].o = temp0_804
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
                            arg18 = _mm256_mask_load_ps(arg5, var_640_2)
                            zmm25 = _mm256_mask_load_ps(arg5, var_620_2)
                            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_2, arg7, var_600_2)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                            arg23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, arg6, arg23), arg5, arg18, var_5e0_2)
                            float temp0_825[0x8] =
                                __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_srli_epi32(zmm2, 0x15), arg7)), 
                                    arg23), 
                                arg5, zmm25, var_5c0_2)
                            var_3a0 = _mm256_mask_storeu_ps(k6_8, zmm5)
                            var_380 = _mm256_mask_storeu_ps(k6_8, arg6)
                            var_360 = _mm256_mask_storeu_ps(k6_8, temp0_825)
                            zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        
                        arg5 = _kxor_mask8(
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 3), 
                            arg5)
                        _ktest_mask8_u8(k1_43, arg5)
                    
                    if (z)
                        arg14 = arg17
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        arg13 = var_5a0_1
                    else
                        int64_t k2_32 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, temp0_61, 2)
                        _kortest_mask8_u8(k2_32, k2_32)
                        int128_t var_4b0
                        
                        if (z)
                            arg14 = arg17
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg13 = var_5a0_1
                            zmm1[0].o = var_4b0
                        else
                            zmm2 = _mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)
                            int64_t k3_36 = _mm256_movepi32_mask(zmm2)
                            arg6[0].o = zx.o(0)
                            int64_t k4_30 =
                                __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_32, arg6, zmm2)
                            _kortest_mask8_u8(k4_30, k4_30)
                            
                            if (not(z))
                                zmm2 = __vpbroadcastq_ymmqq_memq(2)
                                arg10 = _mm256_mask_add_epi64(k4_30, arg10, zmm2)
                                int64_t k5_43 = _kshiftri_mask8(k4_30, 4)
                                zmm20 = _mm256_mask_add_epi64(k5_43, zmm20, zmm2)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm18)
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                zmm0 = _mm256_add_epi64(zmm0, arg14)
                                zmm1 = _mm256_mask_add_epi64(k5_43, _mm256_add_epi64(zmm1, arg13), 
                                    zmm2)
                                zmm0 = _mm256_mask_add_epi64(k4_30, zmm0, zmm2)
                                int64_t r10_4 = zmm0[0].q
                                int64_t r8_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t r13_4 = zmm0[0].q
                                int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                int64_t rsi_4 = zmm1[0].q
                                int64_t rcx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t rax_88 = zmm0[0].q
                                int64_t rdi_10 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                r10 = arg27
                                zmm0[0].o = zx.o(*(arg27 + r10_4))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + r8_4), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + r13_4), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + r11_3), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + rsi_4), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + rcx_17), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + rax_88), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10 + rdi_10), 7)
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                            
                            arg14 = arg17
                            arg13 = var_5a0_1
                            zmm1[0].o = var_4b0
                            var_3a0 = _mm256_mask_storeu_ps(k2_32, _mm256_mask_mov_ps(k3_36, zmm2))
                            uint32_t temp0_882[0x8] = __vpbroadcastd_ymmqq_memd(2)
                            zmm2 = _mm256_mask_and_epi32(arg5, temp0_65, temp0_882)
                            int64_t k3_37 = _mm256_mask_test_epi32_mask(k2_32, temp0_65, temp0_882)
                            _kortest_mask8_u8(k3_37, k3_37)
                            
                            if (not(z))
                                char temp0_884 = _cvtmask32_u32(k3_37)
                                
                                if ((temp0_884 & 1) == 0)
                                    if ((temp0_884 & 2) != 0)
                                        goto label_14017b972
                                    
                                    goto label_14017b88b
                                
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg10[0], 0)
                                
                                if ((temp0_884 & 2) != 0)
                                label_14017b972:
                                    int64_t rax_106 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_106, 1)
                                    
                                    if ((temp0_884 & 4) == 0)
                                        goto label_14017b895
                                    
                                    goto label_14017b987
                                
                            label_14017b88b:
                                
                                if ((temp0_884 & 4) == 0)
                                label_14017b895:
                                    
                                    if ((temp0_884 & 8) != 0)
                                        goto label_14017b9a1
                                    
                                    goto label_14017b89f
                                
                            label_14017b987:
                                temp0_882[0].o = _mm256_extracti128_si256(arg10, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *temp0_882[0].q, 2)
                                
                                if ((temp0_884 & 8) != 0)
                                label_14017b9a1:
                                    temp0_882[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int64_t rax_108 = __vpextrq_gpr64q_xmmdq_immb(temp0_882[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_108, 3)
                                    
                                    if ((temp0_884 & 0x10) == 0)
                                        goto label_14017b8a9
                                    
                                    goto label_14017b9c2
                                
                            label_14017b89f:
                                
                                if ((temp0_884 & 0x10) != 0)
                                label_14017b9c2:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm20[0].o, 4)
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                    label_14017b9d1:
                                        uint64_t rax_110 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_110, 5)
                                        
                                        if ((temp0_884 & 0x40) == 0)
                                            goto label_14017b8bd
                                        
                                        goto label_14017b9e7
                                else
                                label_14017b8a9:
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                        goto label_14017b9d1
                                
                                int64_t k4_31
                                
                                if ((temp0_884 & 0x40) != 0)
                                label_14017b9e7:
                                    temp0_882[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                        *temp0_882[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_884 == 0
                                    
                                    if (temp0_884 s< 0)
                                    label_14017ba0f:
                                        temp0_882[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                        int64_t rax_112 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_882[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_112, 7)
                                else
                                label_14017b8bd:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_884 == 0
                                    
                                    if (temp0_884 s< 0)
                                        goto label_14017ba0f
                                
                                arg10 = _mm256_mask_add_epi64(k3_37, arg10, arg6)
                                zmm20 = _mm256_mask_add_epi64(k4_31, zmm20, arg6)
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm1[0].o), 0xffffff01))
                            
                            var_380 = _mm256_mask_storeu_ps(k2_32, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), 
                                    arg6))
                            uint32_t temp0_893[0x8] = __vpbroadcastd_ymmqq_memd(4)
                            zmm2 = _mm256_mask_and_epi32(arg5, temp0_65, temp0_893)
                            int64_t k3_39 = _mm256_mask_test_epi32_mask(k2_32, temp0_65, temp0_893)
                            _kortest_mask8_u8(k3_39, k3_39)
                            
                            if (z)
                                _mm256_mask_mov_epi64(arg5, zmm19)
                            else
                                char temp0_895 = _cvtmask32_u32(k3_39)
                                int128_t var_3b0
                                int64_t rax_114
                                
                                if ((temp0_895 & 1) != 0)
                                    arg6[0].o = var_3b0
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg10[0], 0)
                                    
                                    if ((temp0_895 & 2) != 0)
                                        rax_114 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_114, 1)
                                else
                                    arg6[0].o = var_3b0
                                    
                                    if ((temp0_895 & 2) != 0)
                                        rax_114 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_114, 1)
                                
                                if ((temp0_895 & 4) == 0)
                                    if ((temp0_895 & 8) != 0)
                                        goto label_140178c57
                                    
                                    goto label_14017ba5e
                                
                                temp0_893[0].o = _mm256_extracti128_si256(arg10, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *temp0_893[0].q, 2)
                                
                                if ((temp0_895 & 8) != 0)
                                label_140178c57:
                                    temp0_893[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(temp0_893[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_2, 3)
                                    
                                    if ((temp0_895 & 0x10) == 0)
                                        goto label_14017ba68
                                    
                                    goto label_140178c78
                                
                            label_14017ba5e:
                                
                                if ((temp0_895 & 0x10) != 0)
                                label_140178c78:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm20[0].o, 4)
                                    
                                    if ((temp0_895 & 0x20) != 0)
                                    label_140178c87:
                                        uint64_t rax_4 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_4, 5)
                                        
                                        if ((temp0_895 & 0x40) == 0)
                                            goto label_14017ba7c
                                        
                                        goto label_140178c9d
                                else
                                label_14017ba68:
                                    
                                    if ((temp0_895 & 0x20) != 0)
                                        goto label_140178c87
                                
                                if ((temp0_895 & 0x40) != 0)
                                label_140178c9d:
                                    temp0_893[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *temp0_893[0].q, 6)
                                    z = temp0_895 == 0
                                    
                                    if (temp0_895 s< 0)
                                    label_140178cb6:
                                        temp0_893[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                        int64_t rax_6 =
                                            __vpextrq_gpr64q_xmmdq_immb(temp0_893[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_6, 7)
                                else
                                label_14017ba7c:
                                    z = temp0_895 == 0
                                    
                                    if (temp0_895 s< 0)
                                        goto label_140178cb6
                                
                                _mm256_mask_mov_epi64(arg5, zmm19)
                                var_3b0 = arg6[0].o
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(arg6[0].o), 0xffffff01))
                            
                            zmm0 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6)
                            var_360 = _mm256_mask_storeu_ps(k2_32, zmm0)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 2))
                        int64_t k2_34 = _kand_mask8(k1_43, arg5)
                        _kortest_mask8_u8(k2_34, k2_34)
                        var_4b0 = zmm1[0].o
                        
                        if (not(z))
                            int64_t k3_41 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                k1_43, temp0_61, 6)
                            _kortest_mask8_u8(k3_41, k3_41)
                            
                            if (not(z))
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                var_3a0 = _mm256_mask_storeu_ps(k3_41, zmm0)
                                var_380 = _mm256_mask_storeu_ps(k3_41, zmm0)
                                var_360 = _mm256_mask_storeu_ps(k3_41, zmm0)
                            
                            int64_t k2_35 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k2_34, temp0_61, 6, 4)
                            _kortest_mask8_u8(k2_35, k2_35)
                            
                            if (not(z))
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                var_3a0 = _mm256_mask_storeu_ps(k2_35, zmm0)
                                var_380 = _mm256_mask_storeu_ps(k2_35, zmm0)
                                var_360 = _mm256_mask_storeu_ps(k2_35, zmm0)
                    
                    zmm1 = var_380
                    arg6 = var_420.32
                    arg7 = var_400.32
                    zmm5 = var_3e0.32
                    zmm0 = _mm256_sub_ps(var_3a0, arg6)
                    float temp0_927[0x8] = _mm256_sub_ps(zmm1, arg7)
                    float temp0_928[0x8] = _mm256_sub_ps(var_360, zmm5)
                    zmm0 = _mm256_fmadd_ps(zmm0, arg8, arg6)
                    zmm1 = _mm256_fmadd_ps(temp0_927, arg8, arg7)
                    zmm2 = _mm256_fmadd_ps(temp0_928, arg8, zmm5)
                    var_420.32 = _mm256_mask_storeu_ps(k1_43, zmm0)
                    var_400.32 = _mm256_mask_storeu_ps(k1_43, zmm1)
                    var_3e0.32 = _mm256_mask_storeu_ps(k1_43, zmm2)
                    goto label_14017bbb8
            else
                int64_t k3_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, temp0_61, 2)
                _kortest_mask8_u8(k3_21, k3_21)
                int128_t var_4a0
                int128_t var_490
                
                if (z)
                    zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                    zmm5[0].o = var_490
                    arg9[0].o = var_4a0
                else
                    zmm2 = _mm256_mask_slli_epi32(arg5, temp0_65, 0x1f)
                    int64_t k4_15 = _mm256_movepi32_mask(zmm2)
                    arg6[0].o = zx.o(0)
                    int64_t k5_21 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_21, arg6, zmm2)
                    _kortest_mask8_u8(k5_21, k5_21)
                    
                    if (not(z))
                        zmm2 = __vpbroadcastq_ymmqq_memq(2)
                        arg10 = _mm256_mask_add_epi64(k5_21, arg10, zmm2)
                        int64_t k1_41 = _kshiftri_mask8(k5_21, 4)
                        zmm20 = _mm256_mask_add_epi64(k1_41, zmm20, zmm2)
                        zmm2 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                        arg6 = _mm256_mask_add_epi64(arg5, zmm0, zmm18)
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_add_epi64(arg6, arg14)
                        zmm2 = _mm256_mask_add_epi64(k1_41, _mm256_add_epi64(zmm2, arg13), arg7)
                        arg6 = _mm256_mask_add_epi64(k5_21, arg6, arg7)
                        int64_t r10_3 = arg6[0].q
                        int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t r13_3 = arg6[0].q
                        int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        int64_t rsi_3 = zmm2[0].q
                        int64_t rcx_14 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t rax_87 = zmm2[0].q
                        int64_t rdi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        r10 = arg27
                        zmm2[0].o = zx.o(*(arg27 + r10_3))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + r8_3), 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + r13_3), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + r11_2), 3)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + rsi_3), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + rcx_14), 5)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + rax_87), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(r10 + rdi_7), 7)
                        zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                    
                    zmm5[0].o = var_490
                    arg9[0].o = var_4a0
                    var_420.32 = _mm256_mask_storeu_ps(k3_21, _mm256_mask_mov_ps(k4_15, zmm2))
                    arg6 = __vpbroadcastd_ymmqq_memd(2)
                    zmm2 = _mm256_mask_and_epi32(arg5, temp0_65, arg6)
                    int64_t k4_16 = _mm256_mask_test_epi32_mask(k3_21, temp0_65, arg6)
                    _kortest_mask8_u8(k4_16, k4_16)
                    
                    if (not(z))
                        char temp0_635 = _cvtmask32_u32(k4_16)
                        
                        if ((temp0_635 & 1) == 0)
                            if ((temp0_635 & 2) != 0)
                                goto label_14017b6bf
                            
                            goto label_14017ad08
                        
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg10[0], 0)
                        
                        if ((temp0_635 & 2) != 0)
                        label_14017b6bf:
                            int64_t rax_90 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_90, 1)
                            
                            if ((temp0_635 & 4) == 0)
                                goto label_14017ad12
                            
                            goto label_14017b6d4
                        
                    label_14017ad08:
                        
                        if ((temp0_635 & 4) == 0)
                        label_14017ad12:
                            
                            if ((temp0_635 & 8) != 0)
                                goto label_14017b6ee
                            
                            goto label_14017ad1c
                        
                    label_14017b6d4:
                        arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_635 & 8) != 0)
                        label_14017b6ee:
                            arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                            int64_t rax_92 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_92, 3)
                            
                            if ((temp0_635 & 0x10) == 0)
                                goto label_14017ad26
                            
                            goto label_14017b70f
                        
                    label_14017ad1c:
                        
                        if ((temp0_635 & 0x10) != 0)
                        label_14017b70f:
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm20[0].o, 4)
                            
                            if ((temp0_635 & 0x20) != 0)
                            label_14017b71e:
                                uint64_t rax_94 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_94, 5)
                                
                                if ((temp0_635 & 0x40) == 0)
                                    goto label_14017ad3a
                                
                                goto label_14017b734
                        else
                        label_14017ad26:
                            
                            if ((temp0_635 & 0x20) != 0)
                                goto label_14017b71e
                        
                        int64_t k5_22
                        
                        if ((temp0_635 & 0x40) != 0)
                        label_14017b734:
                            arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 6)
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_635 == 0
                            
                            if (temp0_635 s< 0)
                            label_14017b75c:
                                arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                int64_t rax_96 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_96, 7)
                        else
                        label_14017ad3a:
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_635 == 0
                            
                            if (temp0_635 s< 0)
                                goto label_14017b75c
                        
                        arg10 = _mm256_mask_add_epi64(k4_16, arg10, arg6)
                        zmm20 = _mm256_mask_add_epi64(k5_22, zmm20, arg6)
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(zmm5[0].o), 0xffffff01))
                    
                    var_400.32 = _mm256_mask_storeu_ps(k3_21, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6))
                    arg6 = __vpbroadcastd_ymmqq_memd(4)
                    zmm2 = _mm256_mask_and_epi32(arg5, temp0_65, arg6)
                    int64_t k4_17 = _mm256_mask_test_epi32_mask(k3_21, temp0_65, arg6)
                    _kortest_mask8_u8(k4_17, k4_17)
                    
                    if (z)
                        zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                    else
                        char temp0_646 = _cvtmask32_u32(k4_17)
                        
                        if ((temp0_646 & 1) == 0)
                            if ((temp0_646 & 2) != 0)
                                goto label_14017b787
                            
                            goto label_14017adbb
                        
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg10[0], 0)
                        
                        if ((temp0_646 & 2) != 0)
                        label_14017b787:
                            uint16_t* rax_98 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_98, 1)
                            
                            if ((temp0_646 & 4) == 0)
                                goto label_14017adc5
                            
                            goto label_14017b79c
                        
                    label_14017adbb:
                        
                        if ((temp0_646 & 4) == 0)
                        label_14017adc5:
                            
                            if ((temp0_646 & 8) != 0)
                                goto label_14017b7b6
                            
                            goto label_14017adcf
                        
                    label_14017b79c:
                        arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_646 & 8) != 0)
                        label_14017b7b6:
                            arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                            uint16_t* rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_100, 3)
                            
                            if ((temp0_646 & 0x10) == 0)
                                goto label_14017add9
                            
                            goto label_14017b7d7
                        
                    label_14017adcf:
                        
                        if ((temp0_646 & 0x10) != 0)
                        label_14017b7d7:
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm20[0].o, 4)
                            
                            if ((temp0_646 & 0x20) != 0)
                            label_14017b7e6:
                                uint16_t* rax_102 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_102, 5)
                                
                                if ((temp0_646 & 0x40) == 0)
                                    goto label_14017aded
                                
                                goto label_14017b7fc
                        else
                        label_14017add9:
                            
                            if ((temp0_646 & 0x20) != 0)
                                goto label_14017b7e6
                        
                        if ((temp0_646 & 0x40) != 0)
                        label_14017b7fc:
                            arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 6)
                            z = temp0_646 == 0
                            
                            if (temp0_646 s< 0)
                            label_14017b815:
                                arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                uint16_t* rax_104 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_104, 7)
                        else
                        label_14017aded:
                            z = temp0_646 == 0
                            
                            if (temp0_646 s< 0)
                                goto label_14017b815
                        
                        zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(arg9[0].o), 0xffffff01))
                    
                    zmm2 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6)
                    var_3e0.32 = _mm256_mask_storeu_ps(k3_21, zmm2)
                
                int64_t k2_16 = _mm256_cmp_epi32_mask(
                    _kxor_mask8(k2_15, 
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, temp0_61, 2)), 
                    arg20, arg12, 4)
                _kortest_mask8_u8(k2_16, k2_16)
                var_490 = zmm5[0].o
                var_4a0 = arg9[0].o
                
                if (not(z))
                    int64_t k1_49 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, temp0_61, 6)
                    _kortest_mask8_u8(k1_49, k1_49)
                    
                    if (not(z))
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_420.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                        var_400.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                        var_3e0.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                    
                    int64_t k1_50 =
                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k2_16, temp0_61, 6, 4)
                    _kortest_mask8_u8(k1_50, k1_50)
                    
                    if (not(z))
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_420.32 = _mm256_mask_storeu_ps(k1_50, zmm2)
                        var_400.32 = _mm256_mask_storeu_ps(k1_50, zmm2)
                        var_3e0.32 = _mm256_mask_storeu_ps(k1_50, zmm2)
                
                k1_43 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg16, arg15, 4), arg20, 
                    arg12, 4)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z))
                    goto label_14017aec8
            arg14 = arg17
            arg13 = var_5a0_1
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg20, arg12)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
                goto label_14017bbc4
        zmm2[0].o = var_420
        int128_t var_410
        arg6[0].o = var_410
        arg7[0].o = var_400
        int128_t var_3f0
        arg9[0].o = var_3f0
        arg8[0].o = var_3e0
        int128_t var_3d0
        zmm5[0].o = var_3d0
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, arg8[0].o, arg18[0].o)
        arg8[0].o = _mm_mask_unpackhi_ps(arg5, arg8[0].o, arg18[0].o)
        zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        arg7[0].o = zmm1[0].q | zmm0[0].q << 0x40
        int128_t var_280 = arg7[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        int128_t var_270_1 = zmm0[0].o
        zmm0[0].o = zmm2[0].q | arg8[0].q << 0x40
        int128_t var_260_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, zmm5[0].o, arg18[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(arg5, zmm5[0].o, arg18[0].o)
        zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg7[0].o = zmm2[0].q | zmm0[0].q << 0x40
        int128_t var_240_1 = arg7[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = arg6[0].q | zmm1[0].q << 0x40
        int128_t var_220_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t rcx_23
        int64_t rdi_13
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rdi_13 & rol.q(-2, rcx_23.b))
            uint64_t rax_115 = _tzcnt_u64(i_1)
            uint64_t var_2a0[0x4] = _mm256_mask_store_epi64(arg5, arg21)
            rdi_13 = i_1 & not.q(1 << (rax_115 u% 0x40))
            zmm0[0].o = (&var_280)[rax_115]
            *(arg1 + sx.q(*(&var_2a0 + ((zx.q(rax_115.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
            rcx_23 = _tzcnt_u64(rdi_13)
            zmm0[0].o = (&var_280)[rcx_23]
            *(arg1 + sx.q(*(&var_2a0 + ((zx.q(rcx_23.d) & 7) << 2))) * 0x30 + 0x20) = zmm0[0].o
        
        r14 += 8
        z = r14 == rcx_4
    while (r14 - rcx_4 s< 0 != add_overflow(r14, neg.d(rcx_4)))
    
    result = zx.q(arg31)
    z_1 = r14 == result.d
    
    if (r14 - result.d s< 0 != add_overflow(r14, neg.d(result.d)))
        goto label_14017bd5b
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
