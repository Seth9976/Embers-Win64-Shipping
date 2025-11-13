// 函数: sub_140159200
// 地址: 0x140159200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
int128_t* r10 = arg1
float zmm2[0x8]
zmm2[0].o = arg29
float rdx_4 = ((arg31 s>> 0x1f u>> 0x1d) + arg31) & 0xfffffff8
uint64_t result
int32_t var_780[0x8]
int32_t var_6c0[0x8]
uint32_t var_620[0x8]
uint32_t r11
float zmm0[0x8]
uint32_t zmm1[0x8]
float zmm4[0x8]
int32_t zmm5[0x8]
uint64_t zmm20[0x4]
uint64_t zmm24[0x4]
uint32_t zmm25[0x8]
uint32_t zmm27[0x8]
int32_t zmm30[0x8]

if (rdx_4 s<= 0)
    r11 = 0
    result = zx.q(arg31)
    
    if (0 s< result.d)
    label_14015c8c9:
        zmm0 = _mm256_mask_set1_epi32(arg5, r11)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
        zmm2 = _mm256_mask_set1_epi32(arg5, result.d)
        uint64_t k7_11 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm2, zmm1)
        arg6 = _mm256_slli_epi32(zmm1, 3)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_128
        int128_t temp0_1119
        temp0_1119, k1_128 =
            _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_11), *(arg2 + arg6[0]))
        arg20 = temp0_1119
        uint32_t temp0_1120 = _cvtmask32_u32(k7_11)
        zmm4 = __vpbroadcastd_ymmqq_memd(4)
        int64_t k1_130
        int128_t temp0_1122
        temp0_1122, k1_130 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_11), 
            *(arg2 + (arg6 | zmm4)[0]))
        zmm5 = temp0_1122
        arg6 = _mm256_slli_epi32(zmm5, 3) | zmm4
        zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
        uint32_t rax_53
        rax_53.b = temp0_1120.b u>> 4
        bool z_2 = (temp0_1120.b & 0xf0) == 0
        int64_t k1_131 = _cvtu32_mask32(rax_53)
        int64_t k2_20 = __kmovq_maskmskw_masku64_avx512(k7_11)
        zmm5[0].o = zx.o(0)
        int64_t k2_21
        uint32_t temp0_1127[0x4]
        temp0_1127, k2_21 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_20, *(arg3 + arg6[0]))
        zmm5[0].o = temp0_1127
        arg6[0].o = zx.o(0)
        int64_t k1_132
        uint32_t temp0_1128[0x4]
        temp0_1128, k1_132 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_131, *(arg3 + zmm4[0].q))
        arg6[0].o = temp0_1128
        arg16[0].o = zx.o(0)
        arg9 = _mm256_inserti128_si256(zmm5, arg6[0].o, 1)
        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
        uint64_t k6_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
            _mm256_cmp_epi32_mask(arg5, arg9, arg11, 4), zmm2, zmm1)
        _kortest_mask8_u8(k6_16, k6_16)
        int128_t var_760
        int128_t var_740
        int128_t var_720
        int128_t var_700
        
        if (not(z_2))
            zmm0[0].o = zx.o(arg4)
            zmm1[0].o = _mm256_extracti128_si256(arg9, 1)
            arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
            int64_t k1_135
            int128_t temp0_1133
            temp0_1133, k1_135 = _mm256_mmask_i32gather_epi32(
                __kmovq_maskmskw_masku64_avx512(k6_16), *(arg4 + arg9[0].q))
            arg18 = temp0_1133
            zmm4[0].o = 4
            arg12 = _mm256_mask_srli_epi32(arg5, arg18, 0x18)
            zmm20 = _mm256_mask_srli_epi32(arg5, arg18, 0x1c)
            arg6 = _mm256_mask_slli_epi32(arg5, zmm20, 2)
            int64_t k1_137
            int128_t temp0_1137
            temp0_1137, k1_137 = _mm256_mmask_i32gather_epi32(
                __kmovq_maskmskw_masku64_avx512(k6_16), *(&data_143442890 + arg6[0]))
            arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 7)
            zmm5 = _mm256_mask_or_epi32(k6_16, _mm256_mask_slli_epi32(arg5, zmm20, 3), arg6)
            arg6 = __vpbroadcastd_ymmqq_memd(3)
            uint64_t r11_1 = zx.q(zmm5[0])
            uint64_t r14_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r15_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r12_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rcx_102 = zx.q(zmm5[0])
            uint16_t* rax_55 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t rbx_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t rdi_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = zx.o(*(r11_1 + &data_1434428b0))
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r14_5 + &data_1434428b0), 1)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r15_3 + &data_1434428b0), 2)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(r12_1 + &data_1434428b0), 3)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rcx_102 + &data_1434428b0), 4)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rax_55 + &data_1434428b0), 5)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rbx_6 + &data_1434428b0), 6)
            arg8[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm5[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm5[0].o, *(rdi_13 + &data_1434428b0), 7)
            int64_t k1_138 = _mm256_cmp_epi32_mask(k6_16, zmm20, arg6, 4)
            _kortest_mask8_u8(k1_138, k1_138)
            zmm4[0].o = zx.o(0)
            
            if (not(z_2))
                zmm4 = _mm256_mask_cvtepu8_epi32(k1_138, zmm5[0].o)
            
            arg10 = _mm256_cvtepi32_epi64(arg9[0].o)
            arg17 = _mm256_mask_cvtepi32_epi64(arg5, zmm1[0].o)
            zmm1 = _mm256_broadcastq_epi64(arg8[0].q)
            zmm25 = __vpandq_ymmu64_maskmskw_ymmu64_memu64_avx512(arg5, arg18, data_143442840)
            zmm2 = _mm256_mask_mov_epi32(k6_16, temp0_1137)
            arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k6_16, 4)
            int64_t k1_139 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_16, zmm20, arg6)
            _kortest_mask8_u8(k1_139, k1_139)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            zmm0[0].o = arg29
            
            if (z_2)
                zmm5[0].o = zx.o(0)
            else
                zmm5 = _mm256_mask_cvtepu8_epi32(k1_139, zmm5[0].o)
                zmm4 = _mm256_mask_set1_epi32(k1_139, 1)
            
            zmm24 = _mm256_mask_madd_epi16(arg5, zmm5, arg19)
            arg21 = _mm256_mask_mullo_epi32(arg5, zmm4, zmm2)
            arg27 = _mm256_mask_add_epi64(arg5, zmm1, arg17)
            arg19 = _mm256_mask_add_epi64(arg5, zmm1, arg10)
            int64_t k3_18 = _mm256_cmp_epu32_mask(k6_16, zmm25, arg6, 6)
            _kortest_mask8_u8(k3_18, k3_18)
            
            if (z_2)
                arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
            else
                zmm2 = __vpbroadcastd_ymmqq_memd(0x8000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm2)
                int64_t k4_22 = _mm256_mask_testn_epi32_mask(k3_18, arg18, zmm2)
                _kortest_mask8_u8(k4_22, k4_22)
                int64_t k3_19
                
                if (z_2)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                    arg16[0].o = zx.o(0)
                    k3_19 = _mm256_mask_test_epi32_mask(k3_18, zmm1, zmm1)
                    _kortest_mask8_u8(k3_19, k3_19)
                    
                    if (not(z_2))
                    label_14015cc34:
                        int64_t k1_140 =
                            __vpcmpud_maskmskw_maskmskw_ymmu32_memu32_imm8_avx512(arg5, zmm25, 2, 1)
                        zmm1[0].o = _mm_movm_epi16(k3_19)
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        rax_55.b = zmm2[0].o f>= zmm0[0]
                        char temp3_1 = rax_55.b
                        rax_55.b = neg.b(rax_55.b)
                        z_2 = neg.b(temp3_1) == 0
                        arg14[0].o = _mm_mask_set1_epi8(arg5, rax_55.d)
                        arg14[0].o = _mm_mask_loadu_epi16(k1_140, data_142fc92e0)
                        zmm2[0].o = arg14[0].o & zmm1[0].o
                        int64_t k0_15 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                            zmm2[0].o, data_142fc92e0)
                        _kortest_mask8_u8(k0_15, k0_15)
                        
                        if (not(z_2))
                            int64_t k1_141 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                k0_15, zmm2[0].o, data_142fc92e0)
                            arg22 = _mm256_mask_mov_epi32(k1_141, arg22)
                            arg23 = _mm256_mask_mov_epi32(k1_141, arg23)
                        
                        zmm2[0].o = arg14[0].o ^ data_142fc92e0
                        arg7[0].o = zmm1[0].o & zmm2[0].o
                        arg5 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_15, arg7[0].o, 
                            data_142fc92e0)
                        zmm1[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z_2)
                            zmm30 = _mm256_mask_mov_epi64(arg5, arg23)
                        else
                            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                            zmm30 = _mm256_mask_add_epi32(arg5, zmm25, zmm2)
                            zmm0[0].o f- 1f
                            z_2 = zmm0[0] == 1f
                            
                            if (not(zmm0[0] < 1f))
                                int64_t k1_145 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                    arg5, arg7[0].o, data_142fc92e0)
                                arg22 = _mm256_mask_blend_epi32(k1_145, zmm30, arg22)
                                zmm30 = _mm256_mask_mov_epi32(k1_145, arg23)
                            else
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, zmm24, 1)
                                zmm1 = _mm256_cvtepu32_epi64(zmm1[0].o)
                                zmm2 = _mm256_mask_cvtepu32_epi64(arg5, zmm24[0].o)
                                arg6 = _mm256_mask_mullo_epi32(arg5, arg21, zmm25)
                                zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                                zmm2 = _mm256_mask_add_epi64(arg5, arg19, zmm2)
                                zmm5 = __vpbroadcastq_ymmqq_memq(3)
                                zmm1 = _mm256_mask_add_epi64(arg5, arg27, zmm1)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                zmm2 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm2, zmm5))
                                zmm1 = _mm256_add_epi64(zmm4, _mm256_add_epi64(zmm1, zmm5))
                                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                                arg24 = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                                arg25 = _mm256_mask_and_epi64(arg5, zmm2, arg6)
                                char temp0_1221 = _cvtmask32_u32(arg5)
                                uint32_t rdi_14 = arg28 - 2
                                zmm1 = _mm256_broadcastss_ps(zmm0[0].o)
                                zmm2 = _mm256_mask_cvtepi32_ps(arg5, zmm30)
                                zmm1 = _mm256_mul_ps(zmm1, zmm2)
                                zmm2[0].o = arg20[0].o
                                zmm2[0] = float.s(arg28 - 1)
                                zmm0[0].o = zmm2[0].o f* zmm0[0]
                                int32_t rax_57 = int.d(zmm0[0])
                                rax_55 = zx.q(rax_57) & zx.q(not.d(rax_57 s>> 0x1f))
                                
                                if (rdi_14 s> rax_55.d)
                                    rdi_14 = rax_55.d
                                
                                zmm1 = _mm256_cvttps_epi32(zmm1)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm5 =
                                    _mm256_mask_min_epi32(arg5, _mm256_max_epi32(zmm1, zmm2), zmm30)
                                var_780 = zmm5
                                int64_t var_420
                                var_420.32 = _mm256_mask_store_epi64(arg5, arg27)
                                int64_t var_4c0
                                var_4c0.32 = arg12
                                float var_4d0
                                var_4d0.o = zmm0[0].o
                                var_620 = _mm256_mask_store_epi64(arg5, zmm30)
                                
                                if (arg28 s< 0x100)
                                    zmm1 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg25, zmm1)
                                    
                                    if ((temp0_1221 & 1) == 0)
                                        if ((temp0_1221 & 2) != 0)
                                            goto label_14015d443
                                        
                                        goto label_14015d0b1
                                    
                                    rax_55 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_55)
                                    
                                    if ((temp0_1221 & 2) != 0)
                                    label_14015d443:
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 1)
                                        arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                        
                                        if ((temp0_1221 & 4) == 0)
                                            goto label_14015d0c0
                                        
                                        goto label_14015d45a
                                    
                                label_14015d0b1:
                                    arg6[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((temp0_1221 & 4) == 0)
                                    label_14015d0c0:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1221 & 8) != 0)
                                            goto label_14015d47b
                                        
                                        goto label_14015d0ce
                                    
                                label_14015d45a:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_55 = zx.q(*zmm4[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_55.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1221 & 8) != 0)
                                    label_14015d47b:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, arg24, arg6)
                                        
                                        if ((temp0_1221 & 0x10) == 0)
                                            goto label_14015d0dd
                                        
                                        goto label_14015d4a3
                                    
                                label_14015d0ce:
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg24, arg6)
                                    
                                    if ((temp0_1221 & 0x10) != 0)
                                    label_14015d4a3:
                                        rax_55 = zx.q(*zmm2[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 4)
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                        label_14015d4ba:
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_55.d, 5)
                                            
                                            if ((temp0_1221 & 0x40) == 0)
                                                goto label_14015d0ef
                                            
                                            goto label_14015d4cb
                                    else
                                    label_14015d0dd:
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                            goto label_14015d4ba
                                    
                                    bool cond:6_1
                                    bool cond:8_1
                                    bool cond:9_1
                                    bool cond:14_1
                                    
                                    if ((temp0_1221 & 0x40) != 0)
                                    label_14015d4cb:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_55 = zx.q(*arg6[0])
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 6)
                                        cond:6_1 = temp0_1221 == 0
                                        cond:8_1 = temp0_1221 == 0
                                        cond:9_1 = temp0_1221 == 0
                                        cond:14_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015d4e6:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_55.d, 7)
                                    else
                                    label_14015d0ef:
                                        cond:6_1 = temp0_1221 == 0
                                        cond:8_1 = temp0_1221 == 0
                                        cond:9_1 = temp0_1221 == 0
                                        cond:14_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015d4e6
                                    
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    zmm1[0].o &= zmm2[0].o
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg27 = _mm256_mask_set1_epi32(arg5, rdi_14)
                                    int64_t k4_24 = _mm256_cmp_epi32_mask(arg5, arg27, zmm1, 5)
                                    arg13[0].o = _mm_movm_epi16(k4_24)
                                    zmm1[0].o = arg7[0].o & arg13[0].o
                                    int64_t k0_20 =
                                        _mm_mask_test_epi16_mask(arg5, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(k0_20, k0_20)
                                    arg12 = zmm5
                                    
                                    if (not(cond:6_1))
                                        zmm30 = _mm256_mask_load_epi64(k0_20, var_780)
                                        arg15 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_24, zmm30, var_620)
                                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                        arg26 = _mm256_mask_sub_epi32(k0_20, zmm30, arg11)
                                        int64_t k0_21 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_24, zmm25, arg26)
                                        arg8[0].o = _mm_movm_epi16(k0_21)
                                        zmm5[0].o = arg7[0].o & arg8[0].o
                                        k0_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_21, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_20, k0_20)
                                        
                                        if (cond:9_1)
                                            arg12 = arg15
                                        else
                                            char rdi_16 = _cvtmask32_u32(k0_20)
                                            zmm27[0].o = _mm_mask_load_epi64(k0_20, data_142fc92e0)
                                            bool cond:27_1
                                            
                                            do
                                                zmm1 = _mm256_mask_mov_epi64(k0_20, arg26)
                                                zmm4 = _mm256_cvtepi32_epi64(zmm1[0].o)
                                                arg12 = _mm256_mask_add_epi64(k0_20, arg25, zmm4)
                                                int64_t k0_22 = _mm_mask_test_epi16_mask(k0_20, 
                                                    zmm5[0].o, zmm27[0].o)
                                                char temp0_1316 = _cvtmask32_u32(k0_22)
                                                
                                                if ((temp0_1316 & 1) == 0)
                                                    if ((temp0_1316 & 2) != 0)
                                                        goto label_14015d1a4
                                                    
                                                    goto label_14015d2a2
                                                
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, zx.d(*arg12[0].q), 0)
                                                
                                                if ((temp0_1316 & 2) != 0)
                                                label_14015d1a4:
                                                    uint16_t rax_70[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_70, 1)
                                                    zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    
                                                    if ((temp0_1316 & 4) == 0)
                                                        goto label_14015d2b2
                                                    
                                                    goto label_14015d1bc
                                                
                                            label_14015d2a2:
                                                zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                
                                                if ((temp0_1316 & 4) == 0)
                                                label_14015d2b2:
                                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                                    
                                                    if ((temp0_1316 & 8) != 0)
                                                        goto label_14015d1de
                                                    
                                                    goto label_14015d2c1
                                                
                                            label_14015d1bc:
                                                zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, zx.d(*zmm5[0].q), 2)
                                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                                
                                                if ((temp0_1316 & 8) != 0)
                                                label_14015d1de:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg12, 1)
                                                    uint16_t rax_74[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_74, 3)
                                                    arg12 =
                                                        _mm256_mask_add_epi64(k0_22, arg24, zmm4)
                                                    
                                                    if ((temp0_1316 & 0x10) == 0)
                                                        goto label_14015d2d1
                                                    
                                                    goto label_14015d20a
                                                
                                            label_14015d2c1:
                                                arg12 = _mm256_mask_add_epi64(k0_22, arg24, zmm4)
                                                
                                                if ((temp0_1316 & 0x10) == 0)
                                                label_14015d2d1:
                                                    
                                                    if ((temp0_1316 & 0x20) != 0)
                                                        goto label_14015d21f
                                                    
                                                    goto label_14015d2db
                                                
                                            label_14015d20a:
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg6[0].o, zx.d(*arg12[0].q), 4)
                                                
                                                if ((temp0_1316 & 0x20) != 0)
                                                label_14015d21f:
                                                    uint16_t rax_78[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg12[0].o, 1))
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, rax_78, 5)
                                                    
                                                    if ((temp0_1316 & 0x40) == 0)
                                                        goto label_14015d2e5
                                                    
                                                    goto label_14015d231
                                                
                                            label_14015d2db:
                                                
                                                if ((temp0_1316 & 0x40) != 0)
                                                label_14015d231:
                                                    zmm4[0].o = _mm256_extracti128_si256(arg12, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg6[0].o, zx.d(*zmm4[0].q), 6)
                                                    
                                                    if (temp0_1316 s< 0)
                                                    label_14015d24d:
                                                        zmm4[0].o =
                                                            _mm256_extracti128_si256(arg12, 1)
                                                        uint16_t rax_82[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 
                                                            1))
                                                        arg6[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg6[0].o, rax_82, 7)
                                                else
                                                label_14015d2e5:
                                                    
                                                    if (temp0_1316 s< 0)
                                                        goto label_14015d24d
                                                
                                                zmm4[0].o = arg6[0].o & zmm2[0].o
                                                zmm4 = _mm256_cvtepu16_epi32(zmm4[0].o)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_22, zmm4, arg27), 
                                                    arg8[0].o)
                                                zmm4[0].o = zx.o(0)
                                                int64_t k1_147 = _mm_mask_testn_epi16_mask(k0_22, 
                                                    zmm5[0].o, zmm2[0].o)
                                                zmm0[0].o = zmm5[0].o & arg7[0].o
                                                int64_t k0_23 = _mm_mask_test_epi16_mask(k0_22, 
                                                    zmm0[0].o, zmm2[0].o)
                                                rax_55 = zx.q(_cvtmask32_u32(k0_23))
                                                cond:8_1 = rdi_16 == rax_55.b
                                                cond:14_1 = rdi_16 == rax_55.b
                                                cond:27_1 = rdi_16 != rax_55.b
                                                
                                                if (rdi_16 != rax_55.b)
                                                    zmm4[0].o = zmm5[0].o ^ arg8[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_23, zmm30)
                                                arg12 = _mm256_mask_mov_epi32(k1_147, arg15)
                                                arg26 = _mm256_mask_sub_epi32(k0_23, zmm1, arg11)
                                                arg8[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_23, zmm25, arg26), 
                                                    zmm4[0].o)
                                                zmm5[0].o = arg8[0].o & arg7[0].o
                                                k0_20 = _mm_mask_test_epi16_mask(k0_23, zmm5[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_20, k0_20)
                                                rdi_16 = _cvtmask32_u32(k0_20)
                                                zmm30 = _mm256_mask_mov_epi64(k0_20, zmm1)
                                                arg15 = arg12
                                            while (cond:27_1)
                                    
                                    zmm1[0].o = arg13[0].o ^ data_142fc92e0
                                    arg6[0].o = arg7[0].o & zmm1[0].o
                                    int64_t k0_27 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, 
                                        arg6[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_27, k0_27)
                                    
                                    if (not(cond:8_1))
                                        arg8 = _mm256_mask_mov_epi32(k4_24, arg12)
                                        arg15[0].o = zx.o(0)
                                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                        arg13 = __vpaddd_ymmqq_ymmqq_memqq(arg11, var_780)
                                        arg6[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_27, arg13, arg15), 
                                            zmm1[0].o)
                                        zmm4[0].o = arg6[0].o & arg7[0].o
                                        k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_27, zmm4[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_27, k0_27)
                                        
                                        if (cond:14_1)
                                            arg12 = arg8
                                        else
                                            char rdi_18 = _cvtmask32_u32(k0_27)
                                            zmm30[0].o = _mm_mask_load_epi64(k0_27, data_142fc92e0)
                                            bool cond:31_1
                                            
                                            do
                                                zmm0 = _mm256_cvtepi32_epi64(arg13[0].o)
                                                zmm1 = _mm256_mask_add_epi64(k0_27, arg25, zmm0)
                                                int64_t k0_28 = _mm_mask_test_epi16_mask(k0_27, 
                                                    zmm4[0].o, zmm30[0].o)
                                                char temp0_1419 = _cvtmask32_u32(k0_28)
                                                
                                                if ((temp0_1419 & 1) == 0)
                                                    if ((temp0_1419 & 2) != 0)
                                                        goto label_14015d7bd
                                                    
                                                    goto label_14015d8ac
                                                
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm5[0].o, zx.d(*zmm1[0].q), 0)
                                                
                                                if ((temp0_1419 & 2) != 0)
                                                label_14015d7bd:
                                                    uint16_t rax_103[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm5[0].o, rax_103, 1)
                                                    zmm4[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    
                                                    if ((temp0_1419 & 4) == 0)
                                                        goto label_14015d8bc
                                                    
                                                    goto label_14015d7d5
                                                
                                            label_14015d8ac:
                                                zmm4[0].o = _mm256_extracti128_si256(arg13, 1)
                                                
                                                if ((temp0_1419 & 4) == 0)
                                                label_14015d8bc:
                                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                                    
                                                    if ((temp0_1419 & 8) != 0)
                                                        goto label_14015d7f7
                                                    
                                                    goto label_14015d8cb
                                                
                                            label_14015d7d5:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm5[0].o, zx.d(*zmm0[0].q), 2)
                                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                                
                                                if ((temp0_1419 & 8) != 0)
                                                label_14015d7f7:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    uint16_t rax_107[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm5[0].o, rax_107, 3)
                                                    zmm1 = _mm256_mask_add_epi64(k0_28, arg24, zmm4)
                                                    
                                                    if ((temp0_1419 & 0x10) == 0)
                                                        goto label_14015d8db
                                                    
                                                    goto label_14015d823
                                                
                                            label_14015d8cb:
                                                zmm1 = _mm256_mask_add_epi64(k0_28, arg24, zmm4)
                                                
                                                if ((temp0_1419 & 0x10) == 0)
                                                label_14015d8db:
                                                    
                                                    if ((temp0_1419 & 0x20) != 0)
                                                        goto label_14015d838
                                                    
                                                    goto label_14015d8e5
                                                
                                            label_14015d823:
                                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    zmm5[0].o, zx.d(*zmm1[0].q), 4)
                                                
                                                if ((temp0_1419 & 0x20) != 0)
                                                label_14015d838:
                                                    uint16_t rax_111[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm5[0].o, rax_111, 5)
                                                    
                                                    if ((temp0_1419 & 0x40) == 0)
                                                        goto label_14015d8ef
                                                    
                                                    goto label_14015d84a
                                                
                                            label_14015d8e5:
                                                
                                                if ((temp0_1419 & 0x40) != 0)
                                                label_14015d84a:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        zmm5[0].o, zx.d(*zmm0[0].q), 6)
                                                    
                                                    if (temp0_1419 s< 0)
                                                    label_14015d866:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(zmm1, 1)
                                                        uint16_t rax_115[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1))
                                                        zmm5[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            zmm5[0].o, rax_115, 7)
                                                else
                                                label_14015d8ef:
                                                    
                                                    if (temp0_1419 s< 0)
                                                        goto label_14015d866
                                                
                                                zmm0[0].o = zmm5[0].o & zmm2[0].o
                                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                                zmm4[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_28, arg27, zmm0, 5), 
                                                    arg6[0].o)
                                                zmm1[0].o = zx.o(0)
                                                int64_t k1_155 = _mm_mask_testn_epi16_mask(k0_28, 
                                                    zmm4[0].o, zmm2[0].o)
                                                zmm0[0].o = zmm4[0].o & arg7[0].o
                                                int64_t k0_29 = _mm_mask_test_epi16_mask(k0_28, 
                                                    zmm0[0].o, zmm2[0].o)
                                                rax_55 = zx.q(_cvtmask32_u32(k0_29))
                                                cond:31_1 = rdi_18 != rax_55.b
                                                
                                                if (rdi_18 != rax_55.b)
                                                    zmm1[0].o = zmm4[0].o ^ arg6[0].o
                                                
                                                arg13 = _mm256_add_epi32(arg13, arg11)
                                                arg12 = _mm256_mask_mov_epi32(k1_155, arg8)
                                                arg6[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_29, arg13, arg15), 
                                                    zmm1[0].o)
                                                zmm4[0].o = arg6[0].o & arg7[0].o
                                                k0_27 = _mm_mask_test_epi16_mask(k0_29, zmm4[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_27, k0_27)
                                                rdi_18 = _cvtmask32_u32(k0_27)
                                                arg8 = arg12
                                            while (cond:31_1)
                                    
                                    arg22 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, 
                                            arg7[0].o, data_142fc92e0), 
                                        arg12, arg22)
                                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_27, arg22[0].o)
                                    zmm1 = _mm256_mask_add_epi64(k0_27, arg25, zmm0)
                                    
                                    if ((temp0_1221 & 1) == 0)
                                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                        arg27 = _mm256_mask_load_epi64(k0_27, var_420.32)
                                        
                                        if ((temp0_1221 & 2) != 0)
                                            goto label_14015fb1d
                                        
                                        goto label_14015f9cc
                                    
                                    rax_55 = zmm1[0].q
                                    zmm5[0].o = __vpbroadcastb_xmmdq_memb(*rax_55)
                                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                    arg27 = _mm256_mask_load_epi64(k0_27, var_420.32)
                                    
                                    if ((temp0_1221 & 2) != 0)
                                    label_14015fb1d:
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                            rax_55.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg22, 1)
                                        
                                        if ((temp0_1221 & 4) == 0)
                                            goto label_14015f9dc
                                        
                                        goto label_14015fb35
                                    
                                label_14015f9cc:
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg22, 1)
                                    
                                    if ((temp0_1221 & 4) == 0)
                                    label_14015f9dc:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1221 & 8) != 0)
                                            goto label_14015fb56
                                        
                                        goto label_14015f9ea
                                    
                                label_14015fb35:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_55 = zx.q(*zmm0[0].q)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_55.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1221 & 8) != 0)
                                    label_14015fb56:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                            rax_55.d, 3)
                                        zmm1 = _mm256_mask_add_epi64(k0_27, arg24, arg6)
                                        
                                        if ((temp0_1221 & 0x10) == 0)
                                            goto label_14015f9f9
                                        
                                        goto label_14015fb7e
                                    
                                label_14015f9ea:
                                    zmm1 = _mm256_mask_add_epi64(k0_27, arg24, arg6)
                                    
                                    if ((temp0_1221 & 0x10) != 0)
                                    label_14015fb7e:
                                        rax_55 = zx.q(*zmm1[0].q)
                                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                            rax_55.d, 4)
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                        label_14015fb95:
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_55.d, 5)
                                            
                                            if ((temp0_1221 & 0x40) == 0)
                                                goto label_14015fa0b
                                            
                                            goto label_14015fba6
                                    else
                                    label_14015f9f9:
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                            goto label_14015fb95
                                    
                                    bool cond:25_1
                                    
                                    if ((temp0_1221 & 0x40) != 0)
                                    label_14015fba6:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_55 = zx.q(*zmm0[0].q)
                                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, 
                                            rax_55.d, 6)
                                        cond:25_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015fbc1:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_55.d, 7)
                                    else
                                    label_14015fa0b:
                                        cond:25_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015fbc1
                                    
                                    int64_t k1_238 =
                                        _mm_mask_testn_epi16_mask(k0_27, arg7[0].o, zmm2[0].o)
                                    _mm256_mask_sub_epi32(k0_27, arg12, 
                                        _mm256_cmpeq_epi32(zmm0, zmm0))
                                    zmm30 = _mm256_mask_mov_epi32(k1_238, arg23)
                                    zmm1[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_27, zmm30, zmm25, 5), arg7[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_27, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:25_1))
                                        zmm30 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, 
                                                    zmm2[0].o), 
                                                zmm30))
                                    
                                    arg12 = var_4c0.32
                                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, zmm30[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                                    
                                    if ((temp0_1221 & 1) == 0)
                                        if ((temp0_1221 & 2) != 0)
                                            goto label_14015fbf3
                                        
                                        goto label_14015fa84
                                    
                                    rax_55 = arg6[0]
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_55)
                                    
                                    if ((temp0_1221 & 2) != 0)
                                    label_14015fbf3:
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 1)
                                        zmm4[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                        
                                        if ((temp0_1221 & 4) == 0)
                                            goto label_14015fa94
                                        
                                        goto label_14015fc0b
                                    
                                label_14015fa84:
                                    zmm4[0].o = _mm256_extracti32x4_epi32(arg5, zmm30, 1)
                                    
                                    if ((temp0_1221 & 4) == 0)
                                    label_14015fa94:
                                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                        
                                        if ((temp0_1221 & 8) != 0)
                                            goto label_14015fc2c
                                        
                                        goto label_14015faa2
                                    
                                label_14015fc0b:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_55 = zx.q(*zmm0[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_55.d, 2)
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_1221 & 8) != 0)
                                    label_14015fc2c:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_55 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, arg24, zmm4)
                                        
                                        if ((temp0_1221 & 0x10) == 0)
                                            goto label_14015fab1
                                        
                                        goto label_14015fc54
                                    
                                label_14015faa2:
                                    arg6 = _mm256_mask_add_epi64(arg5, arg24, zmm4)
                                    
                                    if ((temp0_1221 & 0x10) != 0)
                                    label_14015fc54:
                                        rax_55 = zx.q(*arg6[0])
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 4)
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                        label_14015fc6b:
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_55.d, 5)
                                            
                                            if ((temp0_1221 & 0x40) == 0)
                                                goto label_14015fac3
                                            
                                            goto label_14015fc7c
                                    else
                                    label_14015fab1:
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                            goto label_14015fc6b
                                    
                                    if ((temp0_1221 & 0x40) != 0)
                                    label_14015fc7c:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_55 = zx.q(*zmm0[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_55.d, 6)
                                        zmm2[0].o &= zmm5[0].o
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015fc9b:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_55 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_55.d, 7)
                                    else
                                    label_14015fac3:
                                        zmm2[0].o &= zmm5[0].o
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015fc9b
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_2 = arg30 == 1
                                    
                                    if (not(z_2))
                                    label_14015dade:
                                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(zmm1, zmm2), 1)
                                        zmm1 = _mm256_broadcast_ss(var_4d0)
                                        zmm2 = _mm256_cvtepi32_ps(zmm2)
                                        zmm1 = _mm256_sub_ps(zmm1, zmm2)
                                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                                        arg6 = _mm256_div_ps(zmm1, zmm0)
                                else
                                    arg6 = _mm256_add_epi32(zmm5, zmm5)
                                    zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg25, zmm1)
                                    
                                    if ((temp0_1221 & 1) == 0)
                                        if ((temp0_1221 & 2) != 0)
                                            goto label_14015d37d
                                        
                                        goto label_14015cdcb
                                    
                                    rax_55 = zmm2[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                                    
                                    if ((temp0_1221 & 2) != 0)
                                    label_14015d37d:
                                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1221 & 4) == 0)
                                            goto label_14015cdda
                                        
                                        goto label_14015d397
                                    
                                label_14015cdcb:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1221 & 4) == 0)
                                    label_14015cdda:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1221 & 8) != 0)
                                            goto label_14015d3b5
                                        
                                        goto label_14015cde8
                                    
                                label_14015d397:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_55 = zmm4[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1221 & 8) != 0)
                                    label_14015d3b5:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, arg24, arg6)
                                        
                                        if ((temp0_1221 & 0x10) == 0)
                                            goto label_14015cdf7
                                        
                                        goto label_14015d3d5
                                    
                                label_14015cde8:
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg24, arg6)
                                    
                                    if ((temp0_1221 & 0x10) != 0)
                                    label_14015d3d5:
                                        rax_55 = zmm2[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 4)
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                        label_14015d3e8:
                                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_55, 5)
                                            
                                            if ((temp0_1221 & 0x40) == 0)
                                                goto label_14015ce09
                                            
                                            goto label_14015d3fc
                                    else
                                    label_14015cdf7:
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                            goto label_14015d3e8
                                    
                                    bool cond:7_1
                                    bool cond:10_1
                                    bool cond:11_1
                                    bool cond:15_1
                                    
                                    if ((temp0_1221 & 0x40) != 0)
                                    label_14015d3fc:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_55 = arg6[0]
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 6)
                                        cond:7_1 = temp0_1221 == 0
                                        cond:10_1 = temp0_1221 == 0
                                        cond:11_1 = temp0_1221 == 0
                                        cond:15_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015d414:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_55, 7)
                                    else
                                    label_14015ce09:
                                        cond:7_1 = temp0_1221 == 0
                                        cond:10_1 = temp0_1221 == 0
                                        cond:11_1 = temp0_1221 == 0
                                        cond:15_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015d414
                                    
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg26 = _mm256_mask_set1_epi32(arg5, rdi_14)
                                    int64_t k4_23 = _mm256_cmp_epi32_mask(arg5, arg26, zmm1, 5)
                                    zmm1[0].o = _mm_movm_epi16(k4_23)
                                    zmm0[0].o = zmm1[0].o
                                    zmm1[0].o &= arg7[0].o
                                    int64_t k0_16 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_16, k0_16)
                                    arg6 = zmm5
                                    
                                    if (not(cond:7_1))
                                        arg15 = var_780
                                        arg13 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_23, arg15, var_620)
                                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                        zmm30 = _mm256_mask_sub_epi32(k0_16, arg15, arg11)
                                        int64_t k0_17 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_23, zmm25, zmm30)
                                        zmm5[0].o = _mm_movm_epi16(k0_17)
                                        arg27[0].o = _mm_mask_and_epi64(k0_17, arg7[0].o, zmm5[0].o)
                                        k0_16 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_17, arg27[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_16, k0_16)
                                        
                                        if (cond:11_1)
                                            arg6 = arg13
                                        else
                                            char rdi_15 = _cvtmask32_u32(k0_16)
                                            arg12[0].o = data_142fc92e0
                                            arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            bool cond:28_1
                                            
                                            do
                                                zmm27 = _mm256_mask_mov_epi64(k0_16, zmm30)
                                                zmm2 = _mm256_mask_add_epi32(k0_16, zmm30, zmm30)
                                                arg6 = _mm256_mask_add_epi64(k0_16, arg25, 
                                                    _mm256_cvtepi32_epi64(zmm2[0].o))
                                                int64_t k0_18 = _mm_mask_test_epi16_mask(k0_16, 
                                                    arg27[0].o, arg12[0].o)
                                                char temp0_1266 = _cvtmask32_u32(k0_18)
                                                
                                                if ((temp0_1266 & 1) == 0)
                                                    if ((temp0_1266 & 2) != 0)
                                                        goto label_14015ceb6
                                                    
                                                    goto label_14015cfa8
                                                
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg6[0], 0)
                                                
                                                if ((temp0_1266 & 2) != 0)
                                                label_14015ceb6:
                                                    int64_t rax_59 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_59, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    
                                                    if ((temp0_1266 & 4) == 0)
                                                        goto label_14015cfb8
                                                    
                                                    goto label_14015ced1
                                                
                                            label_14015cfa8:
                                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1266 & 4) == 0)
                                                label_14015cfb8:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_1266 & 8) != 0)
                                                        goto label_14015cef0
                                                    
                                                    goto label_14015cfc7
                                                
                                            label_14015ced1:
                                                zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm4[0].q, 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_1266 & 8) != 0)
                                                label_14015cef0:
                                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    int64_t rax_61 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_61, 3)
                                                    arg6 = _mm256_mask_add_epi64(k0_18, arg24, zmm2)
                                                    
                                                    if ((temp0_1266 & 0x10) == 0)
                                                        goto label_14015cfd7
                                                    
                                                    goto label_14015cf16
                                                
                                            label_14015cfc7:
                                                arg6 = _mm256_mask_add_epi64(k0_18, arg24, zmm2)
                                                
                                                if ((temp0_1266 & 0x10) == 0)
                                                label_14015cfd7:
                                                    
                                                    if ((temp0_1266 & 0x20) != 0)
                                                        goto label_14015cf25
                                                    
                                                    goto label_14015cfe1
                                                
                                            label_14015cf16:
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg6[0], 4)
                                                
                                                if ((temp0_1266 & 0x20) != 0)
                                                label_14015cf25:
                                                    int64_t rax_63 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_63, 5)
                                                    
                                                    if ((temp0_1266 & 0x40) == 0)
                                                        goto label_14015cfeb
                                                    
                                                    goto label_14015cf3a
                                                
                                            label_14015cfe1:
                                                
                                                if ((temp0_1266 & 0x40) != 0)
                                                label_14015cf3a:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *zmm2[0].q, 6)
                                                    
                                                    if (temp0_1266 s< 0)
                                                    label_14015cf53:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg6, 1)
                                                        int64_t rax_65 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_65, 7)
                                                else
                                                label_14015cfeb:
                                                    
                                                    if (temp0_1266 s< 0)
                                                        goto label_14015cf53
                                                
                                                zmm2 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                                arg6[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_18, zmm2, arg26), 
                                                    zmm5[0].o)
                                                zmm2[0].o = zx.o(0)
                                                int64_t k1_143 = _mm_mask_testn_epi16_mask(k0_18, 
                                                    arg6[0].o, arg8[0].o)
                                                zmm4[0].o = arg6[0].o & arg7[0].o
                                                int64_t k0_19 = _mm_mask_test_epi16_mask(k0_18, 
                                                    zmm4[0].o, arg8[0].o)
                                                rax_55 = zx.q(_cvtmask32_u32(k0_19))
                                                cond:10_1 = rdi_15 == rax_55.b
                                                cond:15_1 = rdi_15 == rax_55.b
                                                cond:28_1 = rdi_15 != rax_55.b
                                                
                                                if (rdi_15 != rax_55.b)
                                                    zmm2[0].o = arg6[0].o ^ zmm5[0].o
                                                
                                                arg6 = _mm256_mask_mov_epi32(k1_143, arg13)
                                                zmm30 = _mm256_mask_sub_epi32(k0_19, zmm27, arg11)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_19, zmm25, zmm30), 
                                                    zmm2[0].o)
                                                arg27[0].o =
                                                    _mm_mask_and_epi64(k0_19, zmm5[0].o, arg7[0].o)
                                                k0_16 = _mm_mask_test_epi16_mask(k0_19, arg27[0].o, 
                                                    arg8[0].o)
                                                _kortest_mask8_u8(k0_16, k0_16)
                                                rdi_15 = _cvtmask32_u32(k0_16)
                                                arg15 = _mm256_mask_mov_epi64(k0_16, zmm27)
                                                arg13 = arg6
                                            while (cond:28_1)
                                    
                                    zmm1[0].o = zmm0[0].o ^ data_142fc92e0
                                    zmm2[0].o = arg7[0].o & zmm1[0].o
                                    int64_t k0_24 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_16, 
                                        zmm2[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_24, k0_24)
                                    
                                    if (not(cond:10_1))
                                        arg27 = _mm256_mask_mov_epi32(k4_23, arg6)
                                        arg12[0].o = zx.o(0)
                                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                        arg13 = __vpaddd_ymmqq_ymmqq_memqq(arg11, var_780)
                                        arg8[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_24, arg13, arg12), 
                                            zmm1[0].o)
                                        zmm2[0].o = arg8[0].o & arg7[0].o
                                        k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_24, zmm2[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_24, k0_24)
                                        
                                        if (cond:15_1)
                                            arg6 = _mm256_mask_mov_epi64(k0_24, arg27)
                                        else
                                            char rdi_17 = _cvtmask32_u32(k0_24)
                                            zmm30[0].o = _mm_mask_load_epi64(k0_24, data_142fc92e0)
                                            zmm5[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            bool cond:32_1
                                            
                                            do
                                                zmm4 = _mm256_add_epi32(arg13, arg13)
                                                arg6 = _mm256_mask_add_epi64(k0_24, arg25, 
                                                    _mm256_cvtepi32_epi64(zmm4[0].o))
                                                int64_t k0_25 = _mm_mask_test_epi16_mask(k0_24, 
                                                    zmm2[0].o, zmm30[0].o)
                                                char temp0_1384 = _cvtmask32_u32(k0_25)
                                                
                                                if ((temp0_1384 & 1) == 0)
                                                    if ((temp0_1384 & 2) != 0)
                                                        goto label_14015d58d
                                                    
                                                    goto label_14015d671
                                                
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg6[0], 0)
                                                
                                                if ((temp0_1384 & 2) != 0)
                                                label_14015d58d:
                                                    int64_t rax_92 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_92, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm4, 1)
                                                    
                                                    if ((temp0_1384 & 4) == 0)
                                                        goto label_14015d681
                                                    
                                                    goto label_14015d5a8
                                                
                                            label_14015d671:
                                                zmm2[0].o = _mm256_extracti128_si256(zmm4, 1)
                                                
                                                if ((temp0_1384 & 4) == 0)
                                                label_14015d681:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_1384 & 8) != 0)
                                                        goto label_14015d5c7
                                                    
                                                    goto label_14015d690
                                                
                                            label_14015d5a8:
                                                zmm4[0].o = _mm256_extracti128_si256(arg6, 1)
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *zmm4[0].q, 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_1384 & 8) != 0)
                                                label_14015d5c7:
                                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    int64_t rax_94 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_94, 3)
                                                    arg6 = _mm256_mask_add_epi64(k0_25, arg24, zmm2)
                                                    
                                                    if ((temp0_1384 & 0x10) == 0)
                                                        goto label_14015d6a0
                                                    
                                                    goto label_14015d5ed
                                                
                                            label_14015d690:
                                                arg6 = _mm256_mask_add_epi64(k0_25, arg24, zmm2)
                                                
                                                if ((temp0_1384 & 0x10) == 0)
                                                label_14015d6a0:
                                                    
                                                    if ((temp0_1384 & 0x20) != 0)
                                                        goto label_14015d5fc
                                                    
                                                    goto label_14015d6aa
                                                
                                            label_14015d5ed:
                                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    zmm1[0].o, *arg6[0], 4)
                                                
                                                if ((temp0_1384 & 0x20) != 0)
                                                label_14015d5fc:
                                                    int64_t rax_96 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *rax_96, 5)
                                                    
                                                    if ((temp0_1384 & 0x40) == 0)
                                                        goto label_14015d6b4
                                                    
                                                    goto label_14015d611
                                                
                                            label_14015d6aa:
                                                
                                                if ((temp0_1384 & 0x40) != 0)
                                                label_14015d611:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        zmm1[0].o, *zmm2[0].q, 6)
                                                    
                                                    if (temp0_1384 s< 0)
                                                    label_14015d62a:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg6, 1)
                                                        int64_t rax_98 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            zmm1[0].o, *rax_98, 7)
                                                else
                                                label_14015d6b4:
                                                    
                                                    if (temp0_1384 s< 0)
                                                        goto label_14015d62a
                                                
                                                zmm2 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                                arg6[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_25, arg26, zmm2, 5), 
                                                    arg8[0].o)
                                                zmm2[0].o = zx.o(0)
                                                int64_t k1_151 = _mm_mask_testn_epi16_mask(k0_25, 
                                                    arg6[0].o, zmm5[0].o)
                                                zmm4[0].o = arg6[0].o & arg7[0].o
                                                int64_t k0_26 = _mm_mask_test_epi16_mask(k0_25, 
                                                    zmm4[0].o, zmm5[0].o)
                                                rax_55 = zx.q(_cvtmask32_u32(k0_26))
                                                cond:32_1 = rdi_17 != rax_55.b
                                                
                                                if (rdi_17 != rax_55.b)
                                                    zmm2[0].o = arg6[0].o ^ arg8[0].o
                                                
                                                arg13 = _mm256_add_epi32(arg13, arg11)
                                                arg6 = _mm256_mask_mov_epi32(k1_151, arg27)
                                                arg8[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_26, arg13, arg12), 
                                                    zmm2[0].o)
                                                zmm2[0].o = arg8[0].o & arg7[0].o
                                                k0_24 = _mm_mask_test_epi16_mask(k0_26, zmm2[0].o, 
                                                    zmm5[0].o)
                                                _kortest_mask8_u8(k0_24, k0_24)
                                                rdi_17 = _cvtmask32_u32(k0_24)
                                                arg27 = _mm256_mask_mov_epi64(k0_24, arg6)
                                            while (cond:32_1)
                                    
                                    arg22 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_24, 
                                            arg7[0].o, data_142fc92e0), 
                                        arg6, arg22)
                                    zmm4 = _mm256_mask_add_epi32(k0_24, arg22, arg22)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, arg25, 
                                        _mm256_cvtepi32_epi64(zmm4[0].o))
                                    
                                    if ((temp0_1221 & 1) != 0)
                                        rax_55 = zmm1[0].q
                                        zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                                    
                                    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                                    arg27 = _mm256_mask_load_epi64(k0_24, var_420.32)
                                    arg12 = var_4c0.32
                                    
                                    if ((temp0_1221 & 2) == 0)
                                        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                        
                                        if ((temp0_1221 & 4) != 0)
                                            goto label_14015f83a
                                        
                                        goto label_14015d9d0
                                    
                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 1)
                                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_1221 & 4) != 0)
                                    label_14015f83a:
                                        zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_55 = zmm5[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 2)
                                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                        
                                        if ((temp0_1221 & 8) == 0)
                                            goto label_14015d9de
                                        
                                        goto label_14015f858
                                    
                                label_14015d9d0:
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_1221 & 8) == 0)
                                    label_14015d9de:
                                        zmm1 = _mm256_mask_add_epi64(k0_24, arg24, zmm4)
                                        
                                        if ((temp0_1221 & 0x10) != 0)
                                            goto label_14015f878
                                        
                                        goto label_14015d9ed
                                    
                                label_14015f858:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 3)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, arg24, zmm4)
                                    
                                    if ((temp0_1221 & 0x10) != 0)
                                    label_14015f878:
                                        rax_55 = zmm1[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 4)
                                        
                                        if ((temp0_1221 & 0x20) == 0)
                                            goto label_14015d9f6
                                        
                                        goto label_14015f88b
                                    
                                label_14015d9ed:
                                    
                                    if ((temp0_1221 & 0x20) == 0)
                                    label_14015d9f6:
                                        
                                        if ((temp0_1221 & 0x40) != 0)
                                            goto label_14015f89f
                                        
                                        goto label_14015d9ff
                                    
                                label_14015f88b:
                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 5)
                                    bool cond:26_1
                                    
                                    if ((temp0_1221 & 0x40) == 0)
                                    label_14015d9ff:
                                        cond:26_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015f8b7:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_55, 7)
                                    else
                                    label_14015f89f:
                                        zmm4[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_55 = zmm4[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_55, 6)
                                        cond:26_1 = temp0_1221 == 0
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015f8b7
                                    
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_158 =
                                        _mm_mask_testn_epi16_mask(k0_24, arg7[0].o, zmm1[0].o)
                                    _mm256_mask_sub_epi32(k0_24, arg6, 
                                        _mm256_cmpeq_epi32(zmm4, zmm4))
                                    zmm30 = _mm256_mask_mov_epi32(k1_158, arg23)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_24, zmm30, zmm25, 5), arg7[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_24, arg6[0].o, zmm1[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:26_1))
                                        zmm0 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), 
                                            zmm30)
                                        zmm30 = _mm256_mask_mov_epi64(arg5, zmm0)
                                    
                                    zmm4 = _mm256_mask_add_epi32(arg5, zmm30, zmm30)
                                    zmm1 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, arg25, zmm1)
                                    
                                    if ((temp0_1221 & 1) == 0)
                                        if ((temp0_1221 & 2) != 0)
                                            goto label_14015f8e0
                                        
                                        goto label_14015da7d
                                    
                                    rax_55 = arg6[0]
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                                    
                                    if ((temp0_1221 & 2) != 0)
                                    label_14015f8e0:
                                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 1)
                                        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                        
                                        if ((temp0_1221 & 4) == 0)
                                            goto label_14015da8c
                                        
                                        goto label_14015f8fa
                                    
                                label_14015da7d:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_1221 & 4) == 0)
                                    label_14015da8c:
                                        zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                        
                                        if ((temp0_1221 & 8) != 0)
                                            goto label_14015f918
                                        
                                        goto label_14015da9a
                                    
                                label_14015f8fa:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_55 = zmm0[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 2)
                                    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    
                                    if ((temp0_1221 & 8) != 0)
                                    label_14015f918:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, arg24, zmm4)
                                        
                                        if ((temp0_1221 & 0x10) == 0)
                                            goto label_14015daa9
                                        
                                        goto label_14015f938
                                    
                                label_14015da9a:
                                    arg6 = _mm256_mask_add_epi64(arg5, arg24, zmm4)
                                    
                                    if ((temp0_1221 & 0x10) == 0)
                                    label_14015daa9:
                                        
                                        if ((temp0_1221 & 0x20) != 0)
                                            goto label_14015f94b
                                        
                                        goto label_14015dab2
                                    
                                label_14015f938:
                                    rax_55 = arg6[0]
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 4)
                                    
                                    if ((temp0_1221 & 0x20) != 0)
                                    label_14015f94b:
                                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 5)
                                        
                                        if ((temp0_1221 & 0x40) == 0)
                                            goto label_14015dabb
                                        
                                        goto label_14015f95f
                                    
                                label_14015dab2:
                                    
                                    if ((temp0_1221 & 0x40) != 0)
                                    label_14015f95f:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_55 = zmm0[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 6)
                                        
                                        if (temp0_1221 s< 0)
                                        label_14015f977:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_55, 7)
                                    else
                                    label_14015dabb:
                                        
                                        if (temp0_1221 s< 0)
                                            goto label_14015f977
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_2 = arg30 == 1
                                    
                                    if (not(z_2))
                                        goto label_14015dade
                                
                                zmm0[0].o = arg14[0].o & data_142fc92e0
                                zmm1 = _mm256_mask_mov_ps(
                                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, 
                                        zmm0[0].o, data_142fc92e0, 4), 
                                    arg6)
                        
                        arg16 = _mm256_mask_mov_ps(k3_19, zmm1)
                        arg23 = _mm256_mask_mov_epi64(arg5, zmm30)
                else
                    zmm2[0].o = zx.o(0)
                    arg6[0].o = zx.o(0)
                    zx.o(0) f- zmm0[0]
                    z_2 = 0f == zmm0[0]
                    
                    if (not(0f < zmm0[0]))
                        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                        arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                        arg16 = _mm256_mask_mov_ps(k4_22, zmm2)
                        k3_19 = _mm256_mask_test_epi32_mask(k3_18, zmm1, zmm1)
                        _kortest_mask8_u8(k3_19, k3_19)
                        
                        if (not(z_2))
                            goto label_14015cc34
                    else
                        arg6 = _mm256_mask_add_epi32(arg5, zmm25, _mm256_cmpeq_epi32(arg6, arg6))
                        zmm0[0].o f- 1f
                        z_2 = zmm0[0] == 1f
                        
                        if (not(zmm0[0] < 1f))
                            arg22 = _mm256_mask_mov_epi32(k4_22, arg6)
                            arg23 = _mm256_mask_mov_epi64(arg5, arg22)
                            arg16 = _mm256_mask_mov_ps(k4_22, zmm2)
                            k3_19 = _mm256_mask_test_epi32_mask(k3_18, zmm1, zmm1)
                            _kortest_mask8_u8(k3_19, k3_19)
                            
                            if (not(z_2))
                                goto label_14015cc34
                        else
                            zmm4 = _mm256_mul_ps(_mm256_broadcastss_ps(zmm0[0].o), 
                                _mm256_cvtepi32_ps(arg6))
                            zmm5 = _mm256_round_ps(zmm4, 9)
                            zmm2 = _mm256_cvttps_epi32(zmm5)
                            arg22 = _mm256_mask_min_epi32(k4_22, arg6, zmm2)
                            zmm2[0].o = zx.o(0)
                            z_2 = arg30 == 1
                            
                            if (not(z_2))
                                zmm2 = _mm256_sub_ps(zmm4, zmm5)
                            
                            zmm4 =
                                _mm256_mask_sub_epi32(arg5, arg22, _mm256_cmpeq_epi32(zmm4, zmm4))
                            arg23 = _mm256_mask_min_epi32(k4_22, zmm4, arg6)
                            arg16 = _mm256_mask_mov_ps(k4_22, zmm2)
                            k3_19 = _mm256_mask_test_epi32_mask(k3_18, zmm1, zmm1)
                            _kortest_mask8_u8(k3_19, k3_19)
                            
                            if (not(z_2))
                                goto label_14015cc34
            
            zmm1[0].o = _mm256_extracti32x4_epi32(arg5, zmm24, 1)
            zmm25 = _mm256_mask_cvtepu32_epi64(arg5, zmm1[0].o)
            zmm24 = _mm256_mask_cvtepu32_epi64(arg5, zmm24[0].o)
            zmm1 = _mm256_mask_mullo_epi32(arg5, arg22, arg21)
            zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
            arg24 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
            zmm27 = _mm256_mask_cvtepi32_epi64(arg5, zmm1[0].o)
            int64_t k3_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_16, zmm20, 2)
            _kortest_mask8_u8(k3_20, k3_20)
            
            if (not(z_2))
                zmm1 = _mm256_mask_add_epi64(arg5, zmm27, zmm24)
                zmm2 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, arg24, zmm25), arg27)
                arg26 = _mm256_mask_add_epi64(arg5, zmm1, arg19)
                zmm5 = _mm256_slli_epi32(arg12, 0x1f)
                zmm1[0].o = zx.o(0)
                int64_t k1_162 =
                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_20, zmm1, zmm5)
                _kortest_mask8_u8(k1_162, k1_162)
                int64_t k4_25
                
                if (z_2)
                    arg6 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    k4_25 = _mm256_mask_test_epi32_mask(k3_20, arg18, arg6)
                    _kortest_mask8_u8(k4_25, k4_25)
                    
                    if (not(z_2))
                    label_14015dc7e:
                        char temp0_1500 = _cvtmask32_u32(k4_25)
                        
                        if ((temp0_1500 & 1) == 0)
                            if ((temp0_1500 & 2) != 0)
                                goto label_14015e871
                            
                            goto label_14015dc97
                        
                        rax_55 = arg26[0].o
                        zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                        
                        if ((temp0_1500 & 2) != 0)
                        label_14015e871:
                            rax_55 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 1)
                            
                            if ((temp0_1500 & 4) == 0)
                                goto label_14015dca0
                            
                            goto label_14015e886
                        
                    label_14015dc97:
                        
                        if ((temp0_1500 & 4) == 0)
                        label_14015dca0:
                            
                            if ((temp0_1500 & 8) != 0)
                                goto label_14015e8a0
                            
                            goto label_14015dca9
                        
                    label_14015e886:
                        zmm4[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                        rax_55 = zmm4[0].q
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 2)
                        
                        if ((temp0_1500 & 8) != 0)
                        label_14015e8a0:
                            zmm4[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 3)
                            
                            if ((temp0_1500 & 0x10) == 0)
                                goto label_14015dcb2
                            
                            goto label_14015e8bb
                        
                    label_14015dca9:
                        
                        if ((temp0_1500 & 0x10) != 0)
                        label_14015e8bb:
                            rax_55 = zmm2[0].q
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 4)
                            
                            if ((temp0_1500 & 0x20) != 0)
                            label_14015e8ce:
                                rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 5)
                                
                                if ((temp0_1500 & 0x40) == 0)
                                    goto label_14015dcc4
                                
                                goto label_14015e8e2
                        else
                        label_14015dcb2:
                            
                            if ((temp0_1500 & 0x20) != 0)
                                goto label_14015e8ce
                        
                        int64_t k1_163
                        
                        if ((temp0_1500 & 0x40) != 0)
                        label_14015e8e2:
                            zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                            rax_55 = zmm4[0].q
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 6)
                            zmm4 = __vpbroadcastq_ymmqq_memq(2)
                            k1_163 = _kshiftri_mask8(k4_25, 4)
                            z_2 = temp0_1500 == 0
                            
                            if (temp0_1500 s< 0)
                            label_14015e909:
                                arg8[0].o = _mm256_extracti128_si256(zmm2, 1)
                                rax_55 = __vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 7)
                        else
                        label_14015dcc4:
                            zmm4 = __vpbroadcastq_ymmqq_memq(2)
                            k1_163 = _kshiftri_mask8(k4_25, 4)
                            z_2 = temp0_1500 == 0
                            
                            if (temp0_1500 s< 0)
                                goto label_14015e909
                        
                        arg26 = _mm256_mask_add_epi64(k4_25, arg26, zmm4)
                        zmm2 = _mm256_mask_add_epi64(k1_163, zmm2, zmm4)
                        zmm1 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm1[0].o))
                else
                    zmm1 = __vpbroadcastq_ymmqq_memq(2)
                    arg26 = _mm256_mask_add_epi64(k1_162, arg26, zmm1)
                    int64_t k2_22 = _kshiftri_mask8(k1_162, 4)
                    zmm2 = _mm256_mask_add_epi64(k2_22, zmm2, zmm1)
                    zmm1 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                    arg6 = _mm256_mask_add_epi64(arg5, arg10, zmm24)
                    zmm4 = __vpbroadcastq_ymmqq_memq(4)
                    arg6 = _mm256_mask_add_epi64(arg5, arg6, zmm27)
                    zmm1 =
                        _mm256_mask_add_epi64(k2_22, _mm256_mask_add_epi64(arg5, zmm1, arg24), zmm4)
                    arg6 = _mm256_mask_add_epi64(k1_162, arg6, zmm4)
                    int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    uint64_t rcx_105 = arg6[0]
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    uint64_t r14_6 = arg6[0]
                    int64_t rbx_10 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                    int64_t rdi_19 = zmm1[0].q
                    int64_t rsi_13 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                    rax_55 = zmm1[0].q
                    int64_t rdx_57 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                    zmm1[0].o = zx.o(*(arg4 + rcx_105))
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r11_2), 1)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + r14_6), 2)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rbx_10), 3)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdi_19), 4)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rsi_13), 5)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rax_55), 6)
                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *(arg4 + rdx_57), 7)
                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                    arg25 = _mm256_mask_cvtepi32_ps(arg5, zmm1)
                    arg6 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    k4_25 = _mm256_mask_test_epi32_mask(k3_20, arg18, arg6)
                    _kortest_mask8_u8(k4_25, k4_25)
                    
                    if (not(z_2))
                        goto label_14015dc7e
                int64_t k4_26 = _mm256_movepi32_mask(zmm5)
                arg6 = _mm256_mask_and_epi32(arg5, arg18, arg6)
                zmm4 = __vpbroadcastd_ymmqq_memd(0x4000000)
                zmm5 = _mm256_mask_and_epi32(arg5, arg18, zmm4)
                arg5 = _mm256_mask_test_epi32_mask(k3_20, arg18, zmm4)
                _kortest_mask8_u8(arg5, arg5)
                
                if (not(z_2))
                    char temp0_1510 = _cvtmask32_u32(arg5)
                    
                    if ((temp0_1510 & 1) == 0)
                        if ((temp0_1510 & 2) != 0)
                            goto label_14015e933
                        
                        goto label_14015dd4b
                    
                    rax_55 = arg26[0].o
                    arg8[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                    
                    if ((temp0_1510 & 2) != 0)
                    label_14015e933:
                        rax_55 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 1)
                        
                        if ((temp0_1510 & 4) == 0)
                            goto label_14015dd54
                        
                        goto label_14015e948
                    
                label_14015dd4b:
                    
                    if ((temp0_1510 & 4) == 0)
                    label_14015dd54:
                        
                        if ((temp0_1510 & 8) != 0)
                            goto label_14015e962
                        
                        goto label_14015dd5d
                    
                label_14015e948:
                    zmm4[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                    rax_55 = zmm4[0].q
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 2)
                    
                    if ((temp0_1510 & 8) != 0)
                    label_14015e962:
                        zmm4[0].o = _mm256_extracti32x4_epi32(arg5, arg26, 1)
                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 3)
                        
                        if ((temp0_1510 & 0x10) == 0)
                            goto label_14015dd66
                        
                        goto label_14015e97d
                    
                label_14015dd5d:
                    
                    if ((temp0_1510 & 0x10) != 0)
                    label_14015e97d:
                        rax_55 = zmm2[0].q
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 4)
                        
                        if ((temp0_1510 & 0x20) != 0)
                        label_14015e990:
                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 5)
                            
                            if ((temp0_1510 & 0x40) == 0)
                                goto label_14015dd78
                            
                            goto label_14015e9a4
                    else
                    label_14015dd66:
                        
                        if ((temp0_1510 & 0x20) != 0)
                            goto label_14015e990
                    
                    if ((temp0_1510 & 0x40) != 0)
                    label_14015e9a4:
                        zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                        rax_55 = zmm4[0].q
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 6)
                        z_2 = temp0_1510 == 0
                        
                        if (temp0_1510 s< 0)
                        label_14015e9bc:
                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rax_55, 7)
                    else
                    label_14015dd78:
                        z_2 = temp0_1510 == 0
                        
                        if (temp0_1510 s< 0)
                            goto label_14015e9bc
                    
                    zmm2 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(arg8[0].o))
                
                int64_t k1_164 = _mm256_mask_test_epi32_mask(arg5, zmm5, zmm5)
                zmm4[0].o = zx.o(0)
                int64_t k2_23 = _mm256_mask_test_epi32_mask(arg5, arg6, arg6)
                arg6 = _mm256_broadcast_ss(-32767f)
                zmm5 = _mm256_mask_add_ps(arg5, arg25, arg6)
                arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 3.05185094e-05f)
                zmm5 = _mm256_mask_mul_ps(k4_26, zmm5, arg25)
                zmm1 = _mm256_mask_mul_ps(k2_23, _mm256_add_ps(zmm1, arg6), arg25)
                zmm2 = _mm256_mask_mul_ps(k1_164, _mm256_add_ps(zmm2, arg6), arg25)
                var_760.32 = _mm256_mask_storeu_ps(k3_20, zmm5)
                zmm5 = _mm256_fnmadd_ps(
                    _mm256_fnmadd_ps(
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm5, arg5, zmm5, 
                            0x3f800000), 
                        zmm1, zmm1), 
                    zmm2, zmm2)
                arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm4, zmm5, 2), zmm5)
                var_740.32 = _mm256_mask_storeu_ps(k3_20, zmm1)
                var_720.32 = _mm256_mask_storeu_ps(k3_20, zmm2)
                var_700.32 = _mm256_mask_storeu_ps(k3_20, arg6)
            
            zmm1 = __vpbroadcastd_ymmqq_memd(2)
            uint64_t k5_14 = _mm256_cmp_epi32_mask(arg5, zmm20, zmm1, 4)
            int64_t k1_166 = _mm256_cmp_epi32_mask(k6_16, zmm20, zmm1, 4)
            _kortest_mask8_u8(k1_166, k1_166)
            
            if (not(z_2))
                uint64_t k3_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_16, zmm20, 1)
                _kortest_mask8_u8(k3_21, k3_21)
                
                if (not(z_2))
                    zmm1 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    arg6 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, arg10, zmm24), 
                        zmm27)
                    zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg24)
                    zmm4 = _mm256_add_epi64(zmm1, zmm2)
                    zmm2 = _mm256_add_epi64(arg6, zmm2)
                    uint64_t k4_27 = _kshiftri_mask8(k3_21, 4)
                    zmm5[0].o = zx.o(0)
                    int64_t k1_168
                    float temp0_1537[0x4]
                    temp0_1537, k1_168 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_21), *(arg4 + zmm2[0].q))
                    zmm5[0].o = temp0_1537
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    int64_t k1_170
                    float temp0_1539[0x4]
                    temp0_1539, k1_170 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k4_27), *(arg4 + zmm4[0].q))
                    zmm2[0].o = temp0_1539
                    zmm4 = __vpbroadcastq_ymmqq_memq(8)
                    arg25 = _mm256_mask_add_epi64(arg5, zmm1, zmm4)
                    zmm4 = _mm256_add_epi64(arg6, zmm4)
                    arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                    int64_t k1_172
                    float temp0_1544[0x4]
                    temp0_1544, k1_172 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_21), *(arg4 + zmm4[0].q))
                    arg26[0].o = temp0_1544
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    int64_t k1_174
                    float temp0_1546[0x4]
                    temp0_1546, k1_174 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k4_27), *(arg4 + arg25[0].q))
                    zmm4[0].o = temp0_1546
                    arg25 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg25)
                    arg6 = _mm256_mask_add_epi64(arg5, arg6, arg25)
                    arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
                    int64_t k1_176
                    float temp0_1551[0x4]
                    temp0_1551, k1_176 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_21), *(arg4 + arg6[0]))
                    arg25[0].o = temp0_1551
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k4_28
                    float temp0_1553[0x4]
                    temp0_1553, k4_28 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_27, *(arg4 + zmm1[0].q))
                    arg6[0].o = temp0_1553
                    zmm1 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                    zmm2 = _mm256_insertf32x4(arg5, arg26, zmm4[0].o, 1)
                    var_760.32 = _mm256_mask_storeu_ps(k3_21, zmm1)
                    zmm1 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, arg5, zmm1, 
                        0x3f800000)
                    arg6 = _mm256_insertf32x4(arg5, arg25, arg6[0].o, 1)
                    zmm1 = _mm256_fnmadd_ps(_mm256_fnmadd_ps(zmm1, zmm2, zmm2), arg6, arg6)
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    zmm1 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm4, zmm1, 1), zmm1)
                    var_740.32 = _mm256_mask_storeu_ps(k3_21, zmm2)
                    var_720.32 = _mm256_mask_storeu_ps(k3_21, arg6)
                    var_700.32 = _mm256_mask_storeu_ps(k3_21, zmm1)
                
                arg5 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 1), k5_14)
                _ktest_mask8_u8(arg5, k6_16)
                
                if (not(z_2))
                    uint64_t k4_29 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_16, zmm20, 3)
                    _kortest_mask8_u8(k4_29, k4_29)
                    
                    if (not(z_2))
                        var_620[0].w = _store_mask16(k5_14)
                        var_6c0[0].w = _store_mask16(k7_11)
                        zmm1[0].o = zx.o(0)
                        uint32_t var_5c0_3[0x8] = zmm1
                        float var_5e0_3[0x8] = zmm1
                        float var_600_3[0x8] = zmm1
                        uint32_t var_660_3[0x8] = zmm1
                        uint32_t var_680_3[0x8] = zmm1
                        uint32_t var_6a0_3[0x8] = zmm1
                        int64_t k5_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                            _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), zmm20, 3)
                        var_780[0] = _store_mask32(k6_16)
                        uint64_t k6_17 = _kand_mask8(k5_15, k6_16)
                        _kortest_mask8_u8(k6_17, k6_17)
                        zmm1 = _mm256_mask_mov_epi64(arg5, arg19)
                        zmm2 = _mm256_mask_mov_epi64(arg5, arg27)
                        
                        if (not(z_2))
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k7_12 = _kshiftri_mask8(k6_17, 4)
                            _mm256_mask_mov_epi64(arg5, arg27)
                            zmm2 = _mm256_mask_add_epi64(k7_12, arg27, zmm1)
                            _mm256_mask_mov_epi64(arg5, arg19)
                            arg6 = _mm256_mask_add_epi64(k6_17, arg19, zmm1)
                            uint64_t k1_180 = _kshiftri_mask8(k6_17, 4)
                            int32_t temp10_1 = rax_55.d
                            int32_t temp11_1 = rax_55.d
                            rax_55 = nullptr
                            z_2 = temp10_1 == temp11_1
                            int64_t k2_24 = __kmovq_maskmskw_masku64_avx512(k6_17)
                            zmm1[0].o = zx.o(0)
                            int64_t k2_25
                            float temp0_1577[0x4]
                            temp0_1577, k2_25 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_24, *arg19[0].q)
                            zmm1[0].o = temp0_1577
                            int64_t k2_26 = __kmovq_maskmskw_masku64_avx512(k1_180)
                            zmm4[0].o = zx.o(0)
                            int64_t k2_27
                            float temp0_1578[0x4]
                            temp0_1578, k2_27 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_26, *arg27[0])
                            zmm4[0].o = temp0_1578
                            var_600_3 = _mm256_mask_storeu_ps(k5_15, 
                                _mm256_insertf128_ps(zmm1, zmm4[0].o, 1))
                            zmm4 = __vpbroadcastq_ymmqq_memq(8)
                            _mm256_mask_mov_epi64(arg5, arg19)
                            zmm1 = _mm256_mask_add_epi64(k6_17, arg19, zmm4)
                            zmm5[0].o = zx.o(0)
                            int64_t k6_18
                            float temp0_1584[0x4]
                            temp0_1584, k6_18 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_17, *arg6[0])
                            zmm5[0].o = temp0_1584
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_181
                            float temp0_1586[0x4]
                            temp0_1586, k1_181 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_180, *zmm2[0].q)
                            arg6[0].o = temp0_1586
                            _mm256_mask_mov_epi64(arg5, arg27)
                            zmm2 = _mm256_mask_add_epi64(k7_12, arg27, zmm4)
                            var_6a0_3 = _mm256_mask_storeu_ps(k5_15, 
                                _mm256_insertf128_ps(zmm5, arg6[0].o, 1))
                        
                        int64_t k5_16 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 3)
                        int64_t k6_19 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k5_16, 
                            arg18, 0x2000000)
                        uint64_t k7_13 = _kand_mask8(k6_19, _load_mask32(var_780[0]))
                        _kortest_mask8_u8(k7_13, k7_13)
                        
                        if (not(z_2))
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k1_183 = _kshiftri_mask8(k7_13, 4)
                            zmm4 = _mm256_mask_add_epi64(k1_183, zmm2, arg6)
                            zmm5 = _mm256_mask_add_epi64(k7_13, zmm1, arg6)
                            uint64_t k2_28 = _kshiftri_mask8(k7_13, 4)
                            int32_t temp12_1 = rax_55.d
                            int32_t temp13_1 = rax_55.d
                            rax_55 = nullptr
                            z_2 = temp12_1 == temp13_1
                            int64_t k3_22 = __kmovq_maskmskw_masku64_avx512(k7_13)
                            arg6[0].o = zx.o(0)
                            int64_t k3_23
                            float temp0_1594[0x4]
                            temp0_1594, k3_23 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_22, *zmm1[0].q)
                            arg6[0].o = temp0_1594
                            arg8[0].o = zx.o(0)
                            int64_t k3_25
                            float temp0_1595[0x4]
                            temp0_1595, k3_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k2_28), *zmm2[0].q)
                            arg8[0].o = temp0_1595
                            var_5e0_3 = _mm256_mask_storeu_ps(k6_19, 
                                _mm256_insertf128_ps(arg6, arg8[0].o, 1))
                            arg6 = __vpbroadcastq_ymmqq_memq(8)
                            zmm1 = _mm256_mask_add_epi64(k7_13, zmm1, arg6)
                            arg25[0].o = _mm_mask_xor_ps(arg5, arg25[0].o, arg25[0].o)
                            int64_t k7_14
                            float temp0_1601[0x4]
                            temp0_1601, k7_14 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_13, *zmm5[0].q)
                            arg25[0].o = temp0_1601
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k2_29
                            float temp0_1603[0x4]
                            temp0_1603, k2_29 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_28, *zmm4[0].q)
                            zmm5[0].o = temp0_1603
                            zmm2 = _mm256_mask_add_epi64(k1_183, zmm2, arg6)
                            var_680_3 = _mm256_mask_storeu_ps(k6_19, 
                                _mm256_insertf32x4(arg5, arg25, zmm5[0].o, 1))
                        
                        int64_t k5_17 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k5_16, 
                            arg18, 0x4000000)
                        k6_16 = _load_mask32(var_780[0])
                        uint64_t k1_184 = _kand_mask8(k5_17, k6_16)
                        _kortest_mask8_u8(k1_184, k1_184)
                        k7_11 = _load_mask16(var_6c0[0].w)
                        
                        if (not(z_2))
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            uint64_t k2_30 = _kshiftri_mask8(k1_184, 4)
                            int32_t temp14_1 = rax_55.d
                            int32_t temp15_1 = rax_55.d
                            rax_55 = nullptr
                            z_2 = temp14_1 == temp15_1
                            int64_t k3_26 = __kmovq_maskmskw_masku64_avx512(k1_184)
                            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                            int64_t k3_27
                            float temp0_1609[0x4]
                            temp0_1609, k3_27 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_26, *zmm1[0].q)
                            zmm4[0].o = temp0_1609
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k3_29
                            float temp0_1611[0x4]
                            temp0_1611, k3_29 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k2_30), *zmm2[0].q)
                            zmm5[0].o = temp0_1611
                            zmm2 = _mm256_mask_add_epi64(_kshiftri_mask8(k1_184, 4), zmm2, arg6)
                            zmm1 = _mm256_mask_add_epi64(k1_184, zmm1, arg6)
                            arg6 = _mm256_insertf128_ps(zmm4, zmm5[0].o, 1)
                            var_5c0_3 = _mm256_mask_storeu_ps(k5_17, arg6)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_185
                            float temp0_1617[0x4]
                            temp0_1617, k1_185 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_184, *zmm1[0].q)
                            arg6[0].o = temp0_1617
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k2_31
                            float temp0_1619[0x4]
                            temp0_1619, k2_31 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_30, *zmm2[0].q)
                            zmm1[0].o = temp0_1619
                            var_660_3 = _mm256_mask_storeu_ps(k5_17, 
                                _mm256_insertf128_ps(arg6, zmm1[0].o, 1))
                        
                        zmm1 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, arg10, zmm24), zmm27)
                        zmm1 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm1, arg24), zmm2)
                        zmm2 = _mm256_add_epi64(arg6, zmm2)
                        int64_t k1_186 = _kshiftri_mask8(k4_29, 4)
                        int64_t k2_32 = __kmovq_maskmskw_masku64_avx512(k4_29)
                        arg6[0].o = zx.o(0)
                        int64_t k2_33
                        uint32_t temp0_1629[0x4]
                        temp0_1629, k2_33 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_32, 
                            *(arg4 + zmm2[0].q))
                        arg6[0].o = temp0_1629
                        zmm2[0].o = zx.o(0)
                        int64_t k1_187
                        uint32_t temp0_1630[0x4]
                        temp0_1630, k1_187 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                            k1_186, *(arg4 + zmm1[0].q))
                        zmm2[0].o = temp0_1630
                        zmm1 = _mm256_inserti128_si256(arg6, zmm2[0].o, 1)
                        zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm1, 0xa), 0x7ff)
                        arg6 = _mm256_srli_epi32(zmm1, 0x15)
                        zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x3ff)
                        zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm4))
                        zmm5 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(arg6, zmm5)
                        arg25 = _mm256_mask_load_ps(arg5, var_6a0_3)
                        arg26 = _mm256_mask_load_ps(arg5, var_680_3)
                        zmm30 = _mm256_mask_load_ps(arg5, var_660_3)
                        arg25 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg25, arg5, 
                            arg6, var_600_3)
                        zmm2 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm4)), zmm5), 
                            arg5, arg26, var_5e0_3)
                        zmm1 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                    arg5, zmm1, 0xfffffe01)), 
                                0x43ff8000), 
                            arg5, zmm30, var_5c0_3)
                        var_760.32 = _mm256_mask_storeu_ps(k4_29, arg25)
                        arg25 = _mm256_mask3_fnmadd_ps(
                            _mm256_mask3_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg25, arg5, 
                                    arg25, 0x3f800000), 
                                arg5, zmm2, zmm2), 
                            arg5, zmm1, zmm1)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, arg25, 1), arg25)
                        var_740.32 = _mm256_mask_storeu_ps(k4_29, zmm2)
                        var_720.32 = _mm256_mask_storeu_ps(k4_29, zmm1)
                        var_700.32 = _mm256_mask_storeu_ps(k4_29, arg6)
                        k5_14 = _load_mask16(var_620[0].w)
                    
                    int64_t k3_31 = _kxor_mask8(arg5, 
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 3))
                    _ktest_mask8_u8(k3_31, k6_16)
                    
                    if (not(z_2))
                        uint64_t k4_30 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_16, zmm20, 5)
                        _kortest_mask8_u8(k4_30, k4_30)
                        
                        if (not(z_2))
                            zmm1 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            arg6 = _mm256_mask_add_epi64(arg5, 
                                _mm256_mask_add_epi64(arg5, arg10, zmm24), zmm27)
                            zmm1 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm1, arg24), zmm2)
                            zmm2 = _mm256_add_epi64(arg6, zmm2)
                            int64_t k1_190 = _kshiftri_mask8(k4_30, 4)
                            int64_t k2_34 = __kmovq_maskmskw_masku64_avx512(k4_30)
                            arg6[0].o = zx.o(0)
                            int64_t k2_35
                            uint32_t temp0_1669[0x4]
                            temp0_1669, k2_35 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k2_34, *(arg4 + zmm2[0].q))
                            arg6[0].o = temp0_1669
                            zmm2[0].o = zx.o(0)
                            int64_t k1_191
                            uint32_t temp0_1670[0x4]
                            temp0_1670, k1_191 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k1_190, *(arg4 + zmm1[0].q))
                            zmm2[0].o = temp0_1670
                            zmm1 = _mm256_inserti128_si256(arg6, zmm2[0].o, 1)
                            zmm2 = _mm256_srli_epi32(zmm1, 0x15)
                            arg6 = _mm256_srli_epi32(zmm1, 0xa)
                            zmm4 = _mm256_srli_epi32(zmm1, 5)
                            zmm5 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg25 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                            zmm4 = _mm256_mask_or_epi32(arg5, zmm4 & zmm5, 
                                _mm256_mask_and_epi32(arg5, zmm2, arg25))
                            arg26 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                            zmm30 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                            zmm2 = zmm4 | _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, zmm2, arg26), zmm30)
                            zmm4 = (_mm256_slli_epi32(zmm1, 6) & zmm5)
                                | _mm256_mask_and_epi32(arg5, arg6, arg25)
                            arg6 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, arg6, arg26), zmm30)
                            zmm5 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x1c0)
                            arg25 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_mask_slli_epi32(arg5, zmm1, 0x11), 0x7e0000)
                            zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x200)
                            zmm5 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0x1ec0)
                            arg6 |= zmm4
                            var_760.32 = _mm256_mask_storeu_ps(k4_30, zmm2)
                            zmm2 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, 
                                zmm2, 0x3f800000)
                            zmm1 = _mm256_mask_or_epi32(arg5, arg25, zmm1 | zmm5)
                            zmm2 = _mm256_fnmadd_ps(_mm256_fnmadd_ps(zmm2, arg6, arg6), zmm1, zmm1)
                            zmm4[0].o = zx.o(0)
                            zmm2 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm4, zmm2, 1), zmm2)
                            var_740.32 = _mm256_mask_storeu_ps(k4_30, arg6)
                            var_720.32 = _mm256_mask_storeu_ps(k4_30, zmm1)
                            var_700.32 = _mm256_mask_storeu_ps(k4_30, zmm2)
                        
                        arg5 = _kxor_mask8(k3_31, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 5))
                        int64_t k3_32 = _kand_mask8(arg5, k6_16)
                        _kortest_mask8_u8(k3_32, k3_32)
                        
                        if (not(z_2))
                            uint64_t k4_31 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_32, zmm20, 4)
                            _kortest_mask8_u8(k4_31, k4_31)
                            
                            if (not(z_2))
                                zmm1 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                                zmm2 = _mm256_mask_add_epi64(arg5, arg10, zmm24)
                                arg6 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = _mm256_mask_add_epi64(arg5, zmm2, zmm27)
                                zmm1 =
                                    _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm1, arg24), arg6)
                                zmm2 = _mm256_add_epi64(zmm2, arg6)
                                int64_t k1_193 = _kshiftri_mask8(k4_31, 4)
                                arg6[0].o = zx.o(0)
                                int64_t k2_36 = __kmovq_maskmskw_masku64_avx512(k4_31)
                                zmm4[0].o = zx.o(0)
                                int64_t k2_37
                                uint32_t temp0_1708[0x4]
                                temp0_1708, k2_37 =
                                    __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_36, 
                                    *(arg4 + zmm2[0].q))
                                zmm4[0].o = temp0_1708
                                int64_t k1_194
                                uint32_t temp0_1709[0x4]
                                temp0_1709, k1_194 =
                                    __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_193, 
                                    *(arg4 + zmm1[0].q))
                                arg6[0].o = temp0_1709
                                zmm1 = _mm256_inserti128_si256(zmm4, arg6[0].o, 1)
                                zmm2 = _mm256_srli_epi32(zmm1, 0x15)
                                arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_srli_epi32(zmm1, 0xa), 0x7ff)
                                zmm1 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0x3ff)
                                zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm4))
                                zmm5 = _mm256_broadcast_ss(1023f)
                                zmm2 = _mm256_div_ps(zmm2, zmm5)
                                arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, zmm4))
                                zmm1 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 
                                        0xfffffe01)), 
                                    0x43ff8000)
                                var_760.32 = _mm256_mask_storeu_ps(k4_31, zmm2)
                                zmm2 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, 
                                    arg5, zmm2, 0x3f800000)
                                arg6 = _mm256_div_ps(arg6, zmm5)
                                zmm2 =
                                    _mm256_fnmadd_ps(_mm256_fnmadd_ps(zmm2, arg6, arg6), zmm1, zmm1)
                                zmm4[0].o = zx.o(0)
                                zmm2 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm4, zmm2, 1), 
                                    zmm2)
                                var_740.32 = _mm256_mask_storeu_ps(k4_31, arg6)
                                var_720.32 = _mm256_mask_storeu_ps(k4_31, zmm1)
                                var_700.32 = _mm256_mask_storeu_ps(k4_31, zmm2)
                            
                            int64_t k1_196 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k3_32, zmm20, 4, 4)
                            _kortest_mask8_u8(k1_196, k1_196)
                            
                            if (not(z_2))
                                int64_t k2_38 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                    k3_32, zmm20, 6)
                                _kortest_mask8_u8(k2_38, k2_38)
                                
                                if (not(z_2))
                                    zmm1[0].o = zx.o(0)
                                    var_760.32 = _mm256_mask_storeu_ps(k2_38, zmm1)
                                    var_740.32 = _mm256_mask_storeu_ps(k2_38, zmm1)
                                    var_720.32 = _mm256_mask_storeu_ps(k2_38, zmm1)
                                    zmm1 = _mm256_broadcast_ss(1f)
                                    var_700.32 = _mm256_mask_storeu_ps(k2_38, zmm1)
                                
                                int64_t k1_197 =
                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_196, 
                                    zmm20, 6, 4)
                                _kortest_mask8_u8(k1_197, k1_197)
                                
                                if (not(z_2))
                                    zmm1[0].o = zx.o(0)
                                    var_760.32 = _mm256_mask_storeu_ps(k1_197, zmm1)
                                    var_740.32 = _mm256_mask_storeu_ps(k1_197, zmm1)
                                    var_720.32 = _mm256_mask_storeu_ps(k1_197, zmm1)
                                    zmm1 = _mm256_broadcast_ss(1f)
                                    var_700.32 = _mm256_mask_storeu_ps(k1_197, zmm1)
            
            int64_t k3_33 = _mm256_cmp_epi32_mask(k6_16, arg22, arg23, 4)
            _kortest_mask8_u8(k3_33, k3_33)
            
            if (not(z_2))
                zmm0 = _mm256_mask_mullo_epi32(arg5, arg23, arg21)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg21 = _mm256_mask_cvtepi32_epi64(arg5, zmm1[0].o)
                arg22 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
                int64_t k4_32 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_33, zmm20, 2)
                _kortest_mask8_u8(k4_32, k4_32)
                float var_580[0x8]
                int32_t var_560[0x8]
                float var_540[0x8]
                float var_520[0x8]
                
                if (not(z_2))
                    zmm0 = _mm256_mask_add_epi64(arg5, arg22, zmm24)
                    zmm1 = _mm256_mask_add_epi64(arg5, arg21, zmm25)
                    zmm2 = _mm256_mask_add_epi64(arg5, zmm1, arg27)
                    arg24 = _mm256_mask_add_epi64(arg5, zmm0, arg19)
                    zmm27 = _mm256_mask_slli_epi32(arg5, arg12, 0x1f)
                    zmm0[0].o = zx.o(0)
                    int64_t k1_198 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_32, zmm0, zmm27)
                    zmm5 = _mm256_broadcast_ss(nanf)
                    arg5 = __kmovq_maskmskw_masku64_avx512(k5_14)
                    _kortest_mask8_u8(k1_198, k1_198)
                    int64_t k5_18
                    
                    if (z_2)
                        arg23 = _mm256_mask_mov_ps(arg5, zmm5)
                        arg6 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        k5_18 = _mm256_mask_test_epi32_mask(k4_32, arg18, arg6)
                        _kortest_mask8_u8(k5_18, k5_18)
                        
                        if (not(z_2))
                        label_14015e7d2:
                            char temp0_1778 = _cvtmask32_u32(k5_18)
                            
                            if ((temp0_1778 & 1) == 0)
                                if ((temp0_1778 & 2) != 0)
                                    goto label_14015f6bf
                                
                                goto label_14015e7eb
                            
                            rax_55 = arg24[0].o
                            zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                            
                            if ((temp0_1778 & 2) != 0)
                            label_14015f6bf:
                                rax_55 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg24[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 1)
                                
                                if ((temp0_1778 & 4) == 0)
                                    goto label_14015e7f4
                                
                                goto label_14015f6d4
                            
                        label_14015e7eb:
                            
                            if ((temp0_1778 & 4) == 0)
                            label_14015e7f4:
                                
                                if ((temp0_1778 & 8) != 0)
                                    goto label_14015f6ee
                                
                                goto label_14015e7fd
                            
                        label_14015f6d4:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                            rax_55 = zmm0[0].q
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 2)
                            
                            if ((temp0_1778 & 8) != 0)
                            label_14015f6ee:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                                rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 3)
                                
                                if ((temp0_1778 & 0x10) == 0)
                                    goto label_14015e806
                                
                                goto label_14015f709
                            
                        label_14015e7fd:
                            
                            if ((temp0_1778 & 0x10) != 0)
                            label_14015f709:
                                rax_55 = zmm2[0].q
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 4)
                                
                                if ((temp0_1778 & 0x20) != 0)
                                label_14015f71c:
                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 5)
                                    
                                    if ((temp0_1778 & 0x40) == 0)
                                        goto label_14015e818
                                    
                                    goto label_14015f730
                            else
                            label_14015e806:
                                
                                if ((temp0_1778 & 0x20) != 0)
                                    goto label_14015f71c
                            
                            int64_t k1_199
                            
                            if ((temp0_1778 & 0x40) != 0)
                            label_14015f730:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                rax_55 = zmm0[0].q
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 6)
                                zmm4 = __vpbroadcastq_ymmqq_memq(2)
                                k1_199 = _kshiftri_mask8(k5_18, 4)
                                z_2 = temp0_1778 == 0
                                
                                if (temp0_1778 s< 0)
                                label_14015f757:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_55, 7)
                            else
                            label_14015e818:
                                zmm4 = __vpbroadcastq_ymmqq_memq(2)
                                k1_199 = _kshiftri_mask8(k5_18, 4)
                                z_2 = temp0_1778 == 0
                                
                                if (temp0_1778 s< 0)
                                    goto label_14015f757
                            
                            arg24 = _mm256_mask_add_epi64(k5_18, arg24, zmm4)
                            zmm2 = _mm256_mask_add_epi64(k1_199, zmm2, zmm4)
                            zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm1[0].o)), 
                                    0xc6fffe00), 
                                0x38000100)
                        else
                            zmm1 = zmm5
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(2)
                        arg24 = _mm256_mask_add_epi64(k1_198, arg24, zmm0)
                        int64_t k2_39 = _kshiftri_mask8(k1_198, 4)
                        zmm2 = _mm256_mask_add_epi64(k2_39, zmm2, zmm0)
                        zmm0 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                        zmm1 = _mm256_mask_add_epi64(arg5, arg10, zmm24)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg22)
                        zmm0 = _mm256_mask_add_epi64(k2_39, 
                            _mm256_mask_add_epi64(arg5, zmm0, arg21), arg6)
                        zmm1 = _mm256_mask_add_epi64(k1_198, zmm1, arg6)
                        int64_t r14_7 = zmm1[0].q
                        int64_t r11_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                        int64_t r15_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                        int64_t rbx_13 = zmm1[0].q
                        int64_t rdi_20 = zmm0[0].q
                        int64_t rsi_14 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rcx_107 = zmm0[0].q
                        rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(arg4 + r14_7))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_3), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_13), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_4), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_20), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_14), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rcx_107), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_55), 7)
                        zmm0 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o)), 0xc6fffe00)
                        arg23 =
                            __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, 0x38000100)
                        arg6 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        k5_18 = _mm256_mask_test_epi32_mask(k4_32, arg18, arg6)
                        _kortest_mask8_u8(k5_18, k5_18)
                        
                        if (not(z_2))
                            goto label_14015e7d2
                        
                        zmm1 = zmm5
                    int64_t k5_19 = _mm256_movepi32_mask(zmm27)
                    arg6 = _mm256_mask_and_epi32(arg5, arg18, arg6)
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    zmm27 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    int64_t k1_200 = _mm256_mask_test_epi32_mask(k4_32, arg18, zmm0)
                    _kortest_mask8_u8(k1_200, k1_200)
                    
                    if (not(z_2))
                        char temp0_1816 = _cvtmask32_u32(k1_200)
                        
                        if ((temp0_1816 & 1) == 0)
                            if ((temp0_1816 & 2) != 0)
                                goto label_14015f781
                            
                            goto label_14015ea35
                        
                        rax_55 = arg24[0].o
                        zmm5[0].o = __vpbroadcastw_xmmdq_memw(*rax_55)
                        
                        if ((temp0_1816 & 2) != 0)
                        label_14015f781:
                            rax_55 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg24[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 1)
                            
                            if ((temp0_1816 & 4) == 0)
                                goto label_14015ea3e
                            
                            goto label_14015f796
                        
                    label_14015ea35:
                        
                        if ((temp0_1816 & 4) == 0)
                        label_14015ea3e:
                            
                            if ((temp0_1816 & 8) != 0)
                                goto label_14015f7b0
                            
                            goto label_14015ea47
                        
                    label_14015f796:
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                        rax_55 = zmm0[0].q
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 2)
                        
                        if ((temp0_1816 & 8) != 0)
                        label_14015f7b0:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg24, 1)
                            rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 3)
                            
                            if ((temp0_1816 & 0x10) == 0)
                                goto label_14015ea50
                            
                            goto label_14015f7cb
                        
                    label_14015ea47:
                        
                        if ((temp0_1816 & 0x10) != 0)
                        label_14015f7cb:
                            rax_55 = zmm2[0].q
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 4)
                            
                            if ((temp0_1816 & 0x20) != 0)
                            label_14015f7de:
                                rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 5)
                                
                                if ((temp0_1816 & 0x40) == 0)
                                    goto label_14015ea62
                                
                                goto label_14015f7f2
                        else
                        label_14015ea50:
                            
                            if ((temp0_1816 & 0x20) != 0)
                                goto label_14015f7de
                        
                        if ((temp0_1816 & 0x40) != 0)
                        label_14015f7f2:
                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                            rax_55 = zmm0[0].q
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 6)
                            z_2 = temp0_1816 == 0
                            
                            if (temp0_1816 s< 0)
                            label_14015f80a:
                                zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                rax_55 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_55, 7)
                        else
                        label_14015ea62:
                            z_2 = temp0_1816 == 0
                            
                            if (temp0_1816 s< 0)
                                goto label_14015f80a
                        
                        zmm0 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm5[0].o)), 0xc6fffe00)
                        zmm5 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, 0x38000100)
                    
                    int64_t k1_201 = _mm256_mask_test_epi32_mask(arg5, zmm27, zmm27)
                    zmm0[0].o = zx.o(0)
                    int64_t k2_40 = _mm256_mask_test_epi32_mask(arg5, arg6, arg6)
                    zmm2 = _mm256_mask_mov_ps(k5_19, arg23)
                    zmm1 = _mm256_mask_mov_ps(k2_40, zmm1)
                    arg6 = _mm256_mask_mov_ps(k1_201, zmm5)
                    var_580 = _mm256_mask_storeu_ps(k4_32, zmm2)
                    zmm2 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, zmm2, 
                                0x3f800000), 
                            zmm1, zmm1), 
                        arg6, arg6)
                    zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, zmm2, 2), zmm2)
                    var_560 = _mm256_mask_storeu_ps(k4_32, zmm1)
                    var_540 = _mm256_mask_storeu_ps(k4_32, arg6)
                    var_520 = _mm256_mask_storeu_ps(k4_32, zmm0)
                    k5_14 = __kmovq_maskmskw_masku64_avx512(arg5)
                
                _ktest_mask8_u8(k3_33, k5_14)
                
                if (not(z_2))
                    uint64_t k4_33 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_33, zmm20, 1)
                    _kortest_mask8_u8(k4_33, k4_33)
                    
                    if (not(z_2))
                        zmm0 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, arg10, zmm24), arg22)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg21)
                        arg6 = _mm256_add_epi64(zmm0, zmm1)
                        zmm1 = _mm256_add_epi64(zmm2, zmm1)
                        arg5 = __kmovq_maskmskw_masku64_avx512(k5_14)
                        uint64_t k5_20 = _kshiftri_mask8(k4_33, 4)
                        int64_t k1_203 = __kmovq_maskmskw_masku64_avx512(k4_33)
                        zmm4[0].o = zx.o(0)
                        int64_t k1_204
                        float temp0_1839[0x4]
                        temp0_1839, k1_204 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_203, *(arg4 + zmm1[0].q))
                        zmm4[0].o = temp0_1839
                        int64_t k1_205 = __kmovq_maskmskw_masku64_avx512(k5_20)
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int64_t k1_206
                        float temp0_1841[0x4]
                        temp0_1841, k1_206 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_205, *(arg4 + arg6[0]))
                        zmm1[0].o = temp0_1841
                        arg6 = __vpbroadcastq_ymmqq_memq(8)
                        zmm5 = _mm256_add_epi64(zmm0, arg6)
                        arg6 = _mm256_add_epi64(zmm2, arg6)
                        int64_t k1_207 = __kmovq_maskmskw_masku64_avx512(k4_33)
                        arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                        int64_t k1_208
                        float temp0_1846[0x4]
                        temp0_1846, k1_208 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_207, *(arg4 + arg6[0]))
                        arg23[0].o = temp0_1846
                        int64_t k1_209 = __kmovq_maskmskw_masku64_avx512(k5_20)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k1_210
                        float temp0_1848[0x4]
                        temp0_1848, k1_210 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_209, *(arg4 + zmm5[0].q))
                        arg6[0].o = temp0_1848
                        zmm5 = __vpbroadcastq_ymmqq_memq(0xc)
                        zmm0 = _mm256_add_epi64(zmm0, zmm5)
                        zmm2 = _mm256_add_epi64(zmm2, zmm5)
                        int64_t k1_211 = __kmovq_maskmskw_masku64_avx512(k4_33)
                        zmm5[0].o = zx.o(0)
                        int64_t k1_212
                        float temp0_1852[0x4]
                        temp0_1852, k1_212 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_211, *(arg4 + zmm2[0].q))
                        zmm5[0].o = temp0_1852
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int64_t k5_21
                        float temp0_1854[0x4]
                        temp0_1854, k5_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_20, 
                            *(arg4 + zmm0[0].q))
                        zmm2[0].o = temp0_1854
                        k5_14 = __kmovq_maskmskw_masku64_avx512(arg5)
                        zmm0 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
                        zmm1 = _mm256_insertf32x4(arg5, arg23, arg6[0].o, 1)
                        var_580 = _mm256_mask_storeu_ps(k4_33, zmm0)
                        zmm0 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                            zmm0, 0x3f800000)
                        zmm2 = _mm256_insertf128_ps(zmm5, zmm2[0].o, 1)
                        zmm0 = _mm256_fnmadd_ps(_mm256_fnmadd_ps(zmm0, zmm1, zmm1), zmm2, zmm2)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm0, 1), zmm0)
                        var_560 = _mm256_mask_storeu_ps(k4_33, zmm1)
                        var_540 = _mm256_mask_storeu_ps(k4_33, zmm2)
                        var_520 = _mm256_mask_storeu_ps(k4_33, zmm0)
                    
                    arg5 = _kxor_mask8(
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 1), k5_14)
                    _ktest_mask8_u8(k3_33, arg5)
                    
                    if (not(z_2))
                        uint64_t k4_34 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_33, zmm20, 3)
                        _kortest_mask8_u8(k4_34, k4_34)
                        
                        if (not(z_2))
                            var_780[0] = _store_mask32(k6_16)
                            zmm0[0].o = zx.o(0)
                            float var_5c0_4[0x8] = zmm0
                            float var_5e0_4[0x8] = zmm0
                            float var_600_4[0x8] = zmm0
                            float var_660_4[0x8] = zmm0
                            float var_680_4[0x8] = zmm0
                            float var_6a0_4[0x8] = zmm0
                            int64_t k5_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), zmm20, 3)
                            uint64_t k6_20 = _kand_mask8(k3_33, k5_22)
                            _kortest_mask8_u8(k6_20, k6_20)
                            var_6c0[0].w = _store_mask16(k7_11)
                            
                            if (not(z_2))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k1_215 = _kshiftri_mask8(k6_20, 4)
                                _mm256_mask_mov_epi64(arg5, arg27)
                                zmm1 = _mm256_mask_add_epi64(k1_215, arg27, zmm0)
                                _mm256_mask_mov_epi64(arg5, arg19)
                                zmm2 = _mm256_mask_add_epi64(k6_20, arg19, zmm0)
                                uint64_t k2_41 = _kshiftri_mask8(k6_20, 4)
                                int32_t temp16_1 = rax_55.d
                                int32_t temp17_1 = rax_55.d
                                rax_55 = nullptr
                                z_2 = temp16_1 == temp17_1
                                int64_t k7_15 = __kmovq_maskmskw_masku64_avx512(k6_20)
                                zmm0[0].o = zx.o(0)
                                int64_t k7_16
                                float temp0_1875[0x4]
                                temp0_1875, k7_16 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_15, 
                                    *arg19[0].q)
                                zmm0[0].o = temp0_1875
                                arg6[0].o = zx.o(0)
                                int64_t k7_18
                                float temp0_1876[0x4]
                                temp0_1876, k7_18 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k2_41), *arg27[0])
                                arg6[0].o = temp0_1876
                                var_600_4 = _mm256_mask_storeu_ps(k5_22, 
                                    _mm256_insertf128_ps(zmm0, arg6[0].o, 1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                                arg19 = _mm256_mask_add_epi64(k6_20, arg19, zmm0)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k6_21
                                float temp0_1882[0x4]
                                temp0_1882, k6_21 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_20, 
                                    *zmm2[0].q)
                                arg6[0].o = temp0_1882
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k2_42
                                float temp0_1884[0x4]
                                temp0_1884, k2_42 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_41, 
                                    *zmm1[0].q)
                                zmm2[0].o = temp0_1884
                                arg27 = _mm256_mask_add_epi64(k1_215, arg27, zmm0)
                                var_6a0_4 = _mm256_mask_storeu_ps(k5_22, 
                                    _mm256_insertf128_ps(arg6, zmm2[0].o, 1))
                            
                            int64_t k5_23 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 3)
                            int64_t k6_22 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                k5_23, arg18, 0x2000000)
                            uint64_t k1_216 = _kand_mask8(k3_33, k6_22)
                            _kortest_mask8_u8(k1_216, k1_216)
                            
                            if (not(z_2))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k2_43 = _kshiftri_mask8(k1_216, 4)
                                var_620[0].w = _store_mask16(k2_43)
                                _mm256_mask_mov_epi64(arg5, arg27)
                                zmm1 = _mm256_mask_add_epi64(k2_43, arg27, zmm0)
                                _mm256_mask_mov_epi64(arg5, arg19)
                                zmm2 = _mm256_mask_add_epi64(k1_216, arg19, zmm0)
                                uint64_t k2_44 = _kshiftri_mask8(k1_216, 4)
                                int32_t temp18_1 = rax_55.d
                                int32_t temp19_1 = rax_55.d
                                rax_55 = nullptr
                                z_2 = temp18_1 == temp19_1
                                zmm0[0].o = zx.o(0)
                                int64_t k7_20
                                float temp0_1894[0x4]
                                temp0_1894, k7_20 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k1_216), *arg19[0].q)
                                zmm0[0].o = temp0_1894
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k7_22
                                float temp0_1896[0x4]
                                temp0_1896, k7_22 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k2_44), *arg27[0])
                                arg6[0].o = temp0_1896
                                var_5e0_4 = _mm256_mask_storeu_ps(k6_22, 
                                    _mm256_insertf128_ps(zmm0, arg6[0].o, 1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                                arg19 = _mm256_mask_add_epi64(k1_216, arg19, zmm0)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k1_217
                                float temp0_1902[0x4]
                                temp0_1902, k1_217 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_216, 
                                    *zmm2[0].q)
                                arg6[0].o = temp0_1902
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k2_45
                                float temp0_1904[0x4]
                                temp0_1904, k2_45 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_44, 
                                    *zmm1[0].q)
                                zmm2[0].o = temp0_1904
                                arg27 =
                                    _mm256_mask_add_epi64(_load_mask16(var_620[0].w), arg27, zmm0)
                                var_680_4 = _mm256_mask_storeu_ps(k6_22, 
                                    _mm256_insertf128_ps(arg6, zmm2[0].o, 1))
                            
                            k7_11 = _load_mask16(var_6c0[0].w)
                            int64_t k5_24 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                k5_23, arg18, 0x4000000)
                            uint64_t k1_219 = _kand_mask8(k3_33, k5_24)
                            _kortest_mask8_u8(k1_219, k1_219)
                            
                            if (not(z_2))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                uint64_t k2_46 = _kshiftri_mask8(k1_219, 4)
                                z_2 = rax_55.d == rax_55.d
                                int64_t k6_23 = __kmovq_maskmskw_masku64_avx512(k1_219)
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                int64_t k6_24
                                float temp0_1910[0x4]
                                temp0_1910, k6_24 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_23, 
                                    *arg19[0].q)
                                zmm1[0].o = temp0_1910
                                int64_t k6_25 = __kmovq_maskmskw_masku64_avx512(k2_46)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k6_26
                                float temp0_1912[0x4]
                                temp0_1912, k6_26 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_25, 
                                    *arg27[0])
                                zmm2[0].o = temp0_1912
                                int64_t k6_27 = _kshiftri_mask8(k1_219, 4)
                                _mm256_mask_mov_epi64(arg5, arg27)
                                arg6 = _mm256_mask_add_epi64(k6_27, arg27, zmm0)
                                arg19 = _mm256_mask_add_epi64(k1_219, arg19, zmm0)
                                zmm0 = _mm256_insertf128_ps(zmm1, zmm2[0].o, 1)
                                var_5c0_4 = _mm256_mask_storeu_ps(k5_24, zmm0)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                int64_t k1_220
                                float temp0_1919[0x4]
                                temp0_1919, k1_220 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_219, 
                                    *arg19[0].q)
                                zmm0[0].o = temp0_1919
                                zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                                int64_t k2_47
                                float temp0_1921[0x4]
                                temp0_1921, k2_47 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_46, 
                                    *arg6[0])
                                zmm1[0].o = temp0_1921
                                var_660_4 = _mm256_mask_storeu_ps(k5_24, 
                                    _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                            
                            zmm0 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_mask_add_epi64(arg5, 
                                _mm256_mask_add_epi64(arg5, arg10, zmm24), arg22)
                            zmm0 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg21), zmm1)
                            zmm1 = _mm256_add_epi64(zmm2, zmm1)
                            int64_t k1_221 = _kshiftri_mask8(k4_34, 4)
                            zmm2[0].o = zx.o(0)
                            int64_t k2_49
                            uint32_t temp0_1931[0x4]
                            temp0_1931, k2_49 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k4_34), *(arg4 + zmm1[0].q))
                            zmm2[0].o = temp0_1931
                            zmm1[0].o = zx.o(0)
                            int64_t k1_222
                            uint32_t temp0_1932[0x4]
                            temp0_1932, k1_222 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k1_221, *(arg4 + zmm0[0].q))
                            zmm1[0].o = temp0_1932
                            zmm0 = _mm256_inserti128_si256(zmm2, zmm1[0].o, 1)
                            zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                            zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg6))
                            zmm4 = _mm256_broadcast_ss(1023f)
                            zmm2 = _mm256_div_ps(zmm2, zmm4)
                            arg18 = _mm256_mask_load_ps(arg5, var_680_4)
                            arg19 = _mm256_mask_load_ps(arg5, var_660_4)
                            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_6a0_4, zmm2, var_600_4)
                            zmm1 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6)), 
                                    zmm4), 
                                arg5, arg18, var_5e0_4)
                            zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, arg19, var_5c0_4)
                            var_580 = _mm256_mask_storeu_ps(k4_34, zmm5)
                            zmm5 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm5, arg5, 
                                        zmm5, 0x3f800000), 
                                    zmm1, zmm1), 
                                zmm0, zmm0)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            zmm2 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm2, zmm5, 1), zmm5)
                            var_560 = _mm256_mask_storeu_ps(k4_34, zmm1)
                            var_540 = _mm256_mask_storeu_ps(k4_34, zmm0)
                            var_520 = _mm256_mask_storeu_ps(k4_34, zmm2)
                            k6_16 = _load_mask32(var_780[0])
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 3))
                        _ktest_mask8_u8(k3_33, arg5)
                        
                        if (not(z_2))
                            uint64_t k4_35 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_33, zmm20, 5)
                            _kortest_mask8_u8(k4_35, k4_35)
                            
                            if (not(z_2))
                                zmm0 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                                zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = _mm256_mask_add_epi64(arg5, 
                                    _mm256_mask_add_epi64(arg5, arg10, zmm24), arg22)
                                zmm0 =
                                    _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg21), zmm1)
                                zmm1 = _mm256_add_epi64(zmm2, zmm1)
                                int64_t k1_225 = _kshiftri_mask8(k4_35, 4)
                                int64_t k2_50 = __kmovq_maskmskw_masku64_avx512(k4_35)
                                zmm2[0].o = zx.o(0)
                                int64_t k2_51
                                uint32_t temp0_1970[0x4]
                                temp0_1970, k2_51 =
                                    __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_50, 
                                    *(arg4 + zmm1[0].q))
                                zmm2[0].o = temp0_1970
                                zmm1[0].o = zx.o(0)
                                int64_t k1_226
                                uint32_t temp0_1971[0x4]
                                temp0_1971, k1_226 =
                                    __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_225, 
                                    *(arg4 + zmm0[0].q))
                                zmm1[0].o = temp0_1971
                                zmm0 = _mm256_inserti128_si256(zmm2, zmm1[0].o, 1)
                                zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                                zmm2 = _mm256_srli_epi32(zmm0, 0xa)
                                arg6 = _mm256_srli_epi32(zmm0, 5)
                                zmm4 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0x400)
                                arg6 = _mm256_mask_or_epi32(arg5, arg6 & zmm4, 
                                    _mm256_mask_and_epi32(arg5, zmm1, zmm5))
                                arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                                arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                                zmm1 = arg6 | _mm256_mask_add_epi32(arg5, 
                                    _mm256_mask_and_epi32(arg5, zmm1, arg18), arg19)
                                arg6 = (_mm256_slli_epi32(zmm0, 6) & zmm4) | (zmm2 & zmm5)
                                zmm2 = _mm256_mask_add_epi32(arg5, 
                                    _mm256_mask_and_epi32(arg5, zmm2, arg18), arg19)
                                zmm4 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c0)
                                zmm5 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_slli_epi32(zmm0, 0x11), 0x7e0000)
                                zmm2 |= arg6
                                zmm0 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x200)
                                    | __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm4, 
                                    0x1ec0)
                                var_580 = _mm256_mask_storeu_ps(k4_35, zmm1)
                                zmm0 |= zmm5
                                zmm1 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, 
                                            arg5, zmm1, 0x3f800000), 
                                        zmm2, zmm2), 
                                    zmm0, zmm0)
                                arg6[0].o = zx.o(0)
                                zmm1 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm1, 1), 
                                    zmm1)
                                var_560 = _mm256_mask_storeu_ps(k4_35, zmm2)
                                var_540 = _mm256_mask_storeu_ps(k4_35, zmm0)
                                var_520 = _mm256_mask_storeu_ps(k4_35, zmm1)
                            
                            arg5 = _kxor_mask8(arg5, 
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm20, 5))
                            int64_t k4_36 = _kand_mask8(k3_33, arg5)
                            _kortest_mask8_u8(k4_36, k4_36)
                            
                            if (not(z_2))
                                uint64_t k5_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                    k4_36, zmm20, 4)
                                _kortest_mask8_u8(k5_25, k5_25)
                                
                                if (not(z_2))
                                    zmm0 = _mm256_mask_add_epi64(arg5, arg17, zmm25)
                                    zmm1 = _mm256_mask_add_epi64(arg5, arg10, zmm24)
                                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                    zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg22)
                                    zmm0 = _mm256_add_epi64(
                                        _mm256_mask_add_epi64(arg5, zmm0, arg21), zmm2)
                                    zmm1 = _mm256_add_epi64(zmm1, zmm2)
                                    int64_t k1_229 = _kshiftri_mask8(k5_25, 4)
                                    zmm2[0].o = zx.o(0)
                                    int64_t k2_52 = __kmovq_maskmskw_masku64_avx512(k5_25)
                                    arg6[0].o = zx.o(0)
                                    int64_t k2_53
                                    uint32_t temp0_2007[0x4]
                                    temp0_2007, k2_53 =
                                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_52, 
                                        *(arg4 + zmm1[0].q))
                                    arg6[0].o = temp0_2007
                                    int64_t k1_230
                                    uint32_t temp0_2008[0x4]
                                    temp0_2008, k1_230 =
                                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_229, 
                                        *(arg4 + zmm0[0].q))
                                    zmm2[0].o = temp0_2008
                                    zmm0 = _mm256_inserti128_si256(arg6, zmm2[0].o, 1)
                                    zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                                    zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                                    zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        zmm0, 0x3ff)
                                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                                    zmm4 = _mm256_broadcast_ss(1023f)
                                    zmm1 = _mm256_div_ps(zmm1, zmm4)
                                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg6))
                                    zmm0 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                        _mm256_cvtepi32_ps(
                                            __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                            zmm0, 0xfffffe01)), 
                                        0x43ff8000)
                                    var_580 = _mm256_mask_storeu_ps(k5_25, zmm1)
                                    zmm1 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                        zmm1, arg5, zmm1, 0x3f800000)
                                    zmm2 = _mm256_div_ps(zmm2, zmm4)
                                    zmm1 = _mm256_fnmadd_ps(_mm256_fnmadd_ps(zmm1, zmm2, zmm2), 
                                        zmm0, zmm0)
                                    arg6[0].o = zx.o(0)
                                    zmm1 = _mm256_mask_sqrt_ps(
                                        _mm256_cmp_ps_mask(arg5, arg6, zmm1, 1), zmm1)
                                    var_560 = _mm256_mask_storeu_ps(k5_25, zmm2)
                                    var_540 = _mm256_mask_storeu_ps(k5_25, zmm0)
                                    var_520 = _mm256_mask_storeu_ps(k5_25, zmm1)
                                
                                int64_t k1_232 =
                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k4_36, 
                                    zmm20, 4, 4)
                                _kortest_mask8_u8(k1_232, k1_232)
                                
                                if (not(z_2))
                                    int64_t k2_54 =
                                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_36, 
                                        zmm20, 6)
                                    _kortest_mask8_u8(k2_54, k2_54)
                                    
                                    if (not(z_2))
                                        zmm0[0].o = zx.o(0)
                                        var_580 = _mm256_mask_storeu_ps(k2_54, zmm0)
                                        var_560 = _mm256_mask_storeu_ps(k2_54, zmm0)
                                        var_540 = _mm256_mask_storeu_ps(k2_54, zmm0)
                                        zmm0 = _mm256_broadcast_ss(1f)
                                        var_520 = _mm256_mask_storeu_ps(k2_54, zmm0)
                                    
                                    int64_t k1_233 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                        k1_232, zmm20, 6, 4)
                                    _kortest_mask8_u8(k1_233, k1_233)
                                    
                                    if (not(z_2))
                                        zmm0[0].o = zx.o(0)
                                        var_580 = _mm256_mask_storeu_ps(k1_233, zmm0)
                                        var_560 = _mm256_mask_storeu_ps(k1_233, zmm0)
                                        var_540 = _mm256_mask_storeu_ps(k1_233, zmm0)
                                        var_520 =
                                            _mm256_mask_storeu_ps(k1_233, _mm256_broadcast_ss(1f))
                
                zmm0 = var_760.32
                zmm1 = var_740.32
                zmm2 = var_720.32
                arg6 = var_700.32
                zmm5 = var_560
                arg17 = _mm256_mask_load_ps(arg5, var_540)
                arg18 = _mm256_mask_load_ps(arg5, var_520)
                arg19 = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, zmm1, zmm5), arg5, zmm0, 
                            var_580), 
                        arg5, zmm2, arg17), 
                    arg5, arg6, arg18)
                zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
                int64_t k1_234 = _mm256_cmp_ps_mask(arg5, zmm20, arg19, 6)
                arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f)
                _mm256_mask_mov_ps(arg5, arg19)
                zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k1_234, -1f)
                arg19 = _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, arg19, arg16), zmm20)
                zmm0 = _mm256_mask_mul_ps(arg5, arg19, zmm0)
                zmm1 = _mm256_mask_mul_ps(arg5, arg19, zmm1)
                zmm2 = _mm256_mask_mul_ps(arg5, arg19, zmm2)
                arg6 = _mm256_mask_mul_ps(arg5, arg19, arg6)
                zmm0 = _mm256_fmadd_ps(zmm0, arg16, var_580)
                zmm1 = _mm256_fmadd_ps(zmm1, arg16, zmm5)
                zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, arg16, arg17)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg16, arg18)
                var_760.32 = _mm256_mask_storeu_ps(k3_33, zmm0)
                var_740.32 = _mm256_mask_storeu_ps(k3_33, zmm1)
                var_720.32 = _mm256_mask_storeu_ps(k3_33, zmm2)
                var_700.32 = _mm256_mask_storeu_ps(k3_33, arg6)
            
            zmm0 = var_760.32
            zmm1 = var_740.32
            zmm2 = var_720.32
            arg6 = var_700.32
            zmm2 = _mm256_mul_ps(zmm2, zmm2)
            arg6 = _mm256_mul_ps(arg6, arg6)
            zmm2 = _mm256_fmadd_ps(zmm2, zmm0, zmm0)
            zmm0 = _mm256_add_ps(zmm2, _mm256_fmadd_ps(arg6, zmm1, zmm1))
            int64_t k1_235 = _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), zmm0, 2)
            zmm1 = _mm256_broadcast_ss(0.5f)
            zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
            arg6 = _mm256_mul_ps(zmm0, zmm1)
            uint64_t var_600_5[0x4] = arg6
            uint64_t var_5e0_5[0x4] = arg6
            uint64_t var_5c0_5[0x4] = arg6
            uint64_t var_5a0_1[0x4] = arg6
            zmm0 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
            zmm4 =
                _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(zmm0, zmm0), arg6, zmm1), zmm0, zmm0)
            zmm0 = _mm256_fnmadd_ps(_mm256_mul_ps(zmm4, zmm4), arg6, zmm1)
            zmm1 = _mm256_fmadd_ps(zmm4, zmm0, zmm4)
            zmm0 = _mm256_fmadd_ps(zmm0, zmm4, zmm4)
            arg6 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_760.32)
            zmm4 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_740.32)
            zmm1 = __vmulps_ymmqq_ymmqq_memqq(zmm1, var_720.32)
            zmm2 = _mm256_mask_mov_ps(k1_235, zmm2)
            zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_700.32)
            arg6 = _mm256_and_ps(arg6, zmm2)
            zmm4 = _mm256_and_ps(zmm4, zmm2)
            zmm1 = _mm256_and_ps(zmm1, zmm2)
            zmm0 = _mm256_and_ps(zmm0, zmm2)
            zmm2 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3f800000)
            zmm0 = _mm256_or_ps(zmm0, zmm2)
            var_760.32 = _mm256_mask_storeu_ps(k6_16, arg6)
            var_740.32 = _mm256_mask_storeu_ps(k6_16, zmm4)
            var_720.32 = _mm256_mask_storeu_ps(k6_16, zmm1)
            var_700.32 = _mm256_mask_storeu_ps(k6_16, zmm0)
        
        int64_t k1_236 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k7_11, arg9, arg11)
        _kortest_mask8_u8(k1_236, k1_236)
        
        if (not(z_2))
            zmm0[0].o = zx.o(0)
            var_760.32 = _mm256_mask_storeu_ps(k1_236, zmm0)
            var_740.32 = _mm256_mask_storeu_ps(k1_236, zmm0)
            var_720.32 = _mm256_mask_storeu_ps(k1_236, zmm0)
            zmm0 = _mm256_broadcast_ss(1f)
            var_700.32 = _mm256_mask_storeu_ps(k1_236, zmm0)
        
        zmm1[0].o = var_760
        uint64_t var_750[0x2]
        arg17[0].o = _mm_mask_load_epi64(arg5, var_750)
        arg6[0].o = var_740
        int128_t var_730
        zmm4[0].o = var_730
        zmm5[0].o = var_720
        int128_t var_710
        arg8[0].o = var_710
        arg7[0].o = var_700
        int128_t var_6f0
        zmm0[0].o = var_6f0
        zmm2[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        zmm5[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
        arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        int128_t var_200 = arg6[0].o
        zmm2[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        int128_t var_1f0_1 = zmm2[0].o
        zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_1e0_1 = zmm2[0].o
        zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
        int128_t var_1d0_1 = zmm1[0].o
        zmm1[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        zmm2[0].o = _mm_mask_unpacklo_epi32(arg5, arg17[0].o, zmm4[0].o)
        arg6[0].o = _mm_mask_unpackhi_epi32(arg5, arg17[0].o, zmm4[0].o)
        zmm4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        int128_t var_1c0_1 = zmm4[0].o
        zmm1[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        int128_t var_1b0_1 = zmm1[0].o
        zmm1[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        int128_t var_1a0_1 = zmm1[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        int128_t var_190_1 = zmm0[0].o
        uint64_t i = zx.q(temp0_1120.b)
        
        do
            uint64_t rcx_108 = _tzcnt_u64(i)
            int256_t var_120 = _mm256_mask_store_epi64(arg5, arg20)
            result = sx.q(*(&var_120 + ((zx.q(rcx_108.d) & 7) << 2))) * 0x30
            zmm0[0].o = (&var_200)[rcx_108]
            *(r10 + result) = zmm0[0].o
            i &= rol.q(-2, rcx_108.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    int32_t var_140_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    zmm0 = _mm256_broadcastss_ps(zmm2[0].o)
    float var_2c0_1[0x8] = zmm0
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    int64_t rbx
    rbx.b = zmm0[0].o f>= zmm2[0]
    rbx.b = neg.b(rbx.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rbx.d)
    int128_t var_2f0_1 = zmm0[0].o
    uint32_t rbx_1 = arg28 - 2
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(arg28 - 1)
    zmm0[0].o = zmm0[0].o f* zmm2[0]
    int32_t rcx_3 = int.d(zmm0[0]) s>> 0x1f
    uint64_t rcx_4 = zx.q(rcx_3) & zx.q(not.d(rcx_3))
    bool z_1 = rbx_1 == rcx_4.d
    
    if (not(z_1) && rbx_1 - rcx_4.d s< 0 == add_overflow(rbx_1, neg.d(rcx_4.d)))
        rbx_1 = rcx_4.d
    
    zmm1 = _mm256_mask_set1_epi32(arg5, rbx_1)
    var_6c0 = zmm1
    float var_160_1[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
    arg20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 4)
    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
    zmm24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    r11 = 0
    int128_t* var_628_1 = r10
    
    do
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r11), 3), 
            data_143442140)
        int64_t k1_2 = _kxnor_mask16(arg5, arg5)
        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_3
        int128_t temp0_57
        temp0_57, k1_3 = _mm256_mmask_i32gather_epi32(k1_2, *(arg2 + zmm0[0].q))
        arg21 = temp0_57
        zmm0 = _mm256_mask_or_epi32(arg5, zmm0, arg20)
        int64_t k1_4 = _kxnor_mask16(arg5, arg5)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k1_5
        int128_t temp0_60
        temp0_60, k1_5 = _mm256_mmask_i32gather_epi32(k1_4, *(arg2 + zmm0[0].q))
        zmm2 = temp0_60
        zmm0 = _mm256_mask_or_epi32(arg5, _mm256_slli_epi32(zmm2, 3), arg20)
        zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
        zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
        zmm4[0].o = zx.o(0)
        int64_t k1_7
        uint32_t temp0_66[0x4]
        temp0_66, k1_7 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
            _kxnor_mask16(arg5, arg5), *(arg3 + zmm0[0].q))
        zmm4[0].o = temp0_66
        rcx_4.b = 0xf
        int64_t k1_8 = _cvtu32_mask32(rcx_4.d)
        zmm0[0].o = zx.o(0)
        int64_t k1_9
        uint32_t temp0_67[0x4]
        temp0_67, k1_9 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_8, *(arg3 + zmm2[0].q))
        zmm0[0].o = temp0_67
        arg22 = _mm256_inserti32x4(arg5, zmm4, zmm0[0].o, 1)
        uint64_t k7_1 = _mm256_cmp_epi32_mask(arg5, arg22, arg16, 4)
        _kortest_mask8_u8(k7_1, k7_1)
        int128_t var_4a0
        int128_t var_480
        int128_t var_460
        int128_t var_440
        
        if (not(z_1))
            int64_t k1_11
            int128_t temp0_69
            temp0_69, k1_11 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_1), 
                *(arg4 + arg22[0].q))
            zmm4 = temp0_69
            zmm27 = _mm256_mask_srli_epi32(k7_1, zmm4, 0x1c)
            zmm0 = _mm256_mask_slli_epi32(arg5, zmm27, 2)
            int64_t k1_13
            int128_t temp0_72
            temp0_72, k1_13 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k7_1), 
                *(&data_143442890 + zmm0[0].q))
            zmm2 = temp0_72
            zmm25 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k7_1, 
                _mm256_srli_epi32(zmm4, 0x18), 0xf)
            zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm25, 7)
            arg25[0].o = _mm_mask_xor_ps(arg5, arg25[0].o, arg25[0].o)
            zmm1 = _mm256_mask_slli_epi32(arg5, zmm27, 3)
            zmm5 = __vpbroadcastd_ymmqq_memd(3)
            zmm0 = _mm256_mask_or_epi32(k7_1, zmm0, zmm1)
            int64_t r14_1 = sx.q(zmm0[0])
            int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rbx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
            int64_t rax_20 = sx.q(zmm0[0])
            int64_t rcx_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t r15_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = zx.o(*(r14_1 + &data_1434428b0))
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r8 + &data_1434428b0), 1)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_2 + &data_1434428b0), 2)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_3 + &data_1434428b0), 3)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rax_20 + &data_1434428b0), 4)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rcx_19 + &data_1434428b0), 5)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r13_2 + &data_1434428b0), 6)
            arg7[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r15_2 + &data_1434428b0), 7)
            int64_t k1_15 =
                _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, zmm27, zmm5, 4), arg22, arg16, 4)
            _kortest_mask8_u8(k1_15, k1_15)
            arg17[0].o = _mm_mask_xor_epi32(arg5, arg17[0].o, arg17[0].o)
            
            if (not(z_1))
                arg17 = _mm256_mask_cvtepu8_epi32(k1_15, arg7[0].o)
            
            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
            int64_t k1_16 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k7_1, zmm27, zmm5)
            _kortest_mask8_u8(k1_16, k1_16)
            
            if (not(z_1))
                arg17 = _mm256_mask_set1_epi32(k1_16, 1)
            
            r10 = var_628_1
            arg6 = _mm256_mask_cvtepi32_epi64(arg5, arg22[0].o)
            zmm30 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
            arg12 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k7_1, zmm4, data_143442840)
            zmm0 = _mm256_mask_set1_epi32(arg5, 1)
            zmm4[0].o = zx.o(0)
            
            if (not(z_1))
                zmm4 = _mm256_mask_slli_epi32(k1_16, _mm256_cvtepu8_epi32(arg7[0]), 2)
            
            zmm1 = _mm256_mask_add_epi64(arg5, var_140_1, zmm30)
            zmm20 = _mm256_mask_add_epi64(arg5, var_140_1, arg6)
            zmm5 = _mm256_mask_mullo_epi32(k7_1, arg17, zmm2)
            var_780 = zmm5
            arg13 = _mm256_mask_mov_epi32(k7_1, zmm4)
            int64_t k2_1 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k7_1, arg12, zmm0)
            _kortest_mask8_u8(k2_1, k2_1)
            var_620 = arg12
            int128_t var_790
            
            if (z_1)
                arg10[0].o = zx.o(0)
                arg9[0].o = zx.o(0)
            else
                zmm0 = __vpbroadcastd_ymmqq_memd(8)
                zmm2 = _mm256_mask_and_epi32(arg5, zmm25, zmm0)
                int64_t k3_1 = _mm256_mask_testn_epi32_mask(k2_1, zmm25, zmm0)
                _kortest_mask8_u8(k3_1, k3_1)
                int64_t k2_2
                
                if (z_1)
                    arg10[0].o = zx.o(0)
                    arg9[0].o = zx.o(0)
                    arg25[0].o = _mm_mask_xor_ps(arg5, arg25[0].o, arg25[0].o)
                    k2_2 = _mm256_mask_test_epi32_mask(k2_1, zmm2, zmm2)
                    _kortest_mask8_u8(k2_2, k2_2)
                    
                    if (not(z_1))
                    label_140159970:
                        int64_t k1_17 =
                            __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg12, 2, 1)
                        zmm2[0].o = _mm_movm_epi16(k2_2)
                        zmm0[0].o = var_2f0_1
                        zmm4[0].o = __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k1_17, 
                            zmm0[0].o, data_142fc92e0)
                        zmm0[0].o = zmm4[0].o & zmm2[0].o
                        int64_t k0 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm24[0].o)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (not(z_1))
                            int64_t k1_18 = _mm_mask_testn_epi16_mask(k0, zmm0[0].o, zmm24[0].o)
                            arg10 = _mm256_mask_mov_epi32(k1_18, arg10)
                            arg9 = _mm256_mask_mov_epi32(k1_18, arg9)
                        
                        zmm0[0].o = _mm_mask_xor_epi64(k0, zmm4[0].o, zmm24[0].o)
                        arg11[0].o = zmm2[0].o & zmm0[0].o
                        arg5 = _mm_mask_test_epi16_mask(k0, arg11[0].o, zmm24[0].o)
                        zmm2[0].o = zx.o(0)
                        _kortest_mask8_u8(arg5, arg5)
                        
                        if (z_1)
                            arg16 = arg9
                        else
                            arg15 = _mm256_add_epi32(arg12, arg16)
                            zmm0[0].o = arg29
                            zmm0[0].o f- 1f
                            z_1 = zmm0[0] == 1f
                            
                            if (not(zmm0[0] < 1f))
                                int64_t k1_22 =
                                    _mm_mask_testn_epi16_mask(arg5, arg11[0].o, zmm24[0].o)
                                arg10 = _mm256_mask_blend_epi32(k1_22, arg15, arg10)
                                arg15 = _mm256_mask_mov_epi32(k1_22, arg9)
                                arg16 = arg15
                            else
                                var_790 = zmm4[0].o
                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                zmm2 = _mm256_cvtepi32_epi64(arg13[0].o)
                                zmm4 = __vpmulld_ymmqq_ymmqq_memqq(arg12, var_780)
                                zmm5[0].o = _mm256_extracti128_si256(zmm4, 1)
                                zmm2 = _mm256_mask_add_epi64(arg5, zmm20, zmm2)
                                zmm0 = _mm256_add_epi64(zmm1, zmm0)
                                arg17 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 3)
                                zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                zmm2 =
                                    _mm256_add_epi64(zmm4, _mm256_mask_add_epi64(arg5, zmm2, arg17))
                                zmm0 =
                                    _mm256_add_epi64(zmm5, _mm256_mask_add_epi64(arg5, zmm0, arg17))
                                zmm4 = __vpbroadcastq_ymmqq_memq(-4)
                                arg14 = zmm0 & zmm4
                                arg18 = _mm256_mask_and_epi64(arg5, zmm2, zmm4)
                                char temp0_146 = _cvtmask32_u32(arg5)
                                zmm5 = _mm256_min_epi32(
                                    _mm256_mask_max_epi32(arg5, 
                                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                            _mm256_cvtepi32_ps(arg15), var_2c0_1)), 
                                        arg19), 
                                    arg15)
                                uint32_t var_340_1[0x8] = zmm1
                                
                                if (arg28 s< 0x100)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg18, zmm0)
                                    int128_t var_310
                                    zmm1[0].o = var_310
                                    
                                    if ((temp0_146 & 1) == 0)
                                        if ((temp0_146 & 2) != 0)
                                            goto label_14015a17c
                                        
                                        goto label_140159dd9
                                    
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm2[0].q), 0)
                                    
                                    if ((temp0_146 & 2) != 0)
                                    label_14015a17c:
                                        uint16_t rcx_38[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_38, 1)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm5, 1)
                                        
                                        if ((temp0_146 & 4) == 0)
                                            goto label_140159de9
                                        
                                        goto label_14015a194
                                    
                                label_140159dd9:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm5, 1)
                                    
                                    if ((temp0_146 & 4) == 0)
                                    label_140159de9:
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_14015a1b6
                                        
                                        goto label_140159df8
                                    
                                label_14015a194:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_146 & 8) != 0)
                                    label_14015a1b6:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t rcx_42[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_42, 3)
                                        zmm2 = _mm256_add_epi64(arg14, zmm0)
                                        
                                        if ((temp0_146 & 0x10) == 0)
                                            goto label_140159e06
                                        
                                        goto label_14015a1e0
                                    
                                label_140159df8:
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) != 0)
                                    label_14015a1e0:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*zmm2[0].q), 4)
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                        label_14015a1f5:
                                            uint16_t rcx_46[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_46, 5)
                                            
                                            if ((temp0_146 & 0x40) == 0)
                                                goto label_140159e1a
                                            
                                            goto label_14015a207
                                    else
                                    label_140159e06:
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_14015a1f5
                                    
                                    bool cond:12_1
                                    bool cond:16_1
                                    bool cond:21_1
                                    bool cond:23_1
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_14015a207:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*zmm0[0].q), 6)
                                        cond:12_1 = temp0_146 == 0
                                        cond:16_1 = temp0_146 == 0
                                        cond:21_1 = temp0_146 == 0
                                        cond:23_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                        label_14015a222:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t rcx_50[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_50, 7)
                                    else
                                    label_140159e1a:
                                        cond:12_1 = temp0_146 == 0
                                        cond:16_1 = temp0_146 == 0
                                        cond:21_1 = temp0_146 == 0
                                        cond:23_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                            goto label_14015a222
                                    
                                    arg17[0].o =
                                        __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(arg5, 0xff)
                                    zmm0[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg17[0].o)
                                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    int64_t k3_3 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm0, var_6c0, 2)
                                    arg8[0].o = _mm_movm_epi16(k3_3)
                                    zmm0[0].o = arg11[0].o & arg8[0].o
                                    int64_t k0_5 =
                                        _mm_mask_test_epi16_mask(arg5, zmm0[0].o, arg17[0].o)
                                    _kortest_mask8_u8(k0_5, k0_5)
                                    var_310 = zmm1[0].o
                                    
                                    if (cond:12_1)
                                        arg7 = arg13
                                        zmm1 = zmm5
                                        arg16 = zmm5
                                    else
                                        arg12 = _mm256_mask_blend_epi32(k3_3, zmm5, arg15)
                                        zmm2 = _mm256_sub_epi32(zmm5, arg16)
                                        int64_t k0_6 = _mm256_cmp_epi32_mask(k3_3, zmm2, arg15, 2)
                                        zmm0 = zmm5
                                        zmm5[0].o = _mm_movm_epi16(k0_6)
                                        zmm4[0].o = arg11[0].o & zmm5[0].o
                                        k0_5 = _mm_mask_test_epi16_mask(k0_6, zmm4[0].o, zmm24[0].o)
                                        _kortest_mask8_u8(k0_5, k0_5)
                                        
                                        if (cond:16_1)
                                            zmm1 = zmm0
                                            arg7 = arg13
                                            arg16 = arg12
                                        else
                                            arg7 = arg13
                                            char rsi_4 = _cvtmask32_u32(k0_5)
                                            zmm1 = zmm0
                                            zmm24 = _mm256_mask_mov_epi64(k0_5, zmm0)
                                            bool cond:33_1
                                            
                                            do
                                                arg13 = zmm2
                                                zmm0 = _mm256_cvtepi32_epi64(arg13[0].o)
                                                arg16 = _mm256_mask_add_epi64(k0_5, arg18, zmm0)
                                                int64_t k0_7 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                                    k0_5, zmm4[0].o, data_142fc92e0)
                                                char temp0_231 = _cvtmask32_u32(k0_7)
                                                
                                                if ((temp0_231 & 1) == 0)
                                                    if ((temp0_231 & 2) != 0)
                                                        goto label_140159ece
                                                    
                                                    goto label_140159fd2
                                                
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*arg16[0].q), 0)
                                                
                                                if ((temp0_231 & 2) != 0)
                                                label_140159ece:
                                                    uint16_t rdx_18[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rdx_18, 1)
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    
                                                    if ((temp0_231 & 4) == 0)
                                                        goto label_140159fe1
                                                    
                                                    goto label_140159ee7
                                                
                                            label_140159fd2:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                
                                                if ((temp0_231 & 4) == 0)
                                                label_140159fe1:
                                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                    
                                                    if ((temp0_231 & 8) != 0)
                                                        goto label_140159f0a
                                                    
                                                    goto label_140159fef
                                                
                                            label_140159ee7:
                                                zmm2[0].o = _mm256_extracti128_si256(arg16, 1)
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*zmm2[0].q), 2)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_231 & 8) != 0)
                                                label_140159f0a:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    uint16_t rdx_22[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rdx_22, 3)
                                                    arg16 = _mm256_add_epi64(arg14, zmm0)
                                                    
                                                    if ((temp0_231 & 0x10) == 0)
                                                        goto label_140159ffc
                                                    
                                                    goto label_140159f35
                                                
                                            label_140159fef:
                                                arg16 = _mm256_add_epi64(arg14, zmm0)
                                                
                                                if ((temp0_231 & 0x10) == 0)
                                                label_140159ffc:
                                                    
                                                    if ((temp0_231 & 0x20) != 0)
                                                        goto label_140159f4b
                                                    
                                                    goto label_14015a005
                                                
                                            label_140159f35:
                                                arg27[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg27[0].o, zx.d(*arg16[0].q), 4)
                                                
                                                if ((temp0_231 & 0x20) != 0)
                                                label_140159f4b:
                                                    uint16_t rdx_26[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1))
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, rdx_26, 5)
                                                    
                                                    if ((temp0_231 & 0x40) == 0)
                                                        goto label_14015a00e
                                                    
                                                    goto label_140159f5e
                                                
                                            label_14015a005:
                                                
                                                if ((temp0_231 & 0x40) != 0)
                                                label_140159f5e:
                                                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                                                    arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg27[0].o, zx.d(*zmm0[0].q), 6)
                                                    
                                                    if (temp0_231 s< 0)
                                                    label_140159f7b:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(arg16, 1)
                                                        uint16_t rcx_23[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1))
                                                        arg27[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg27[0].o, rcx_23, 7)
                                                else
                                                label_14015a00e:
                                                    
                                                    if (temp0_231 s< 0)
                                                        goto label_140159f7b
                                                
                                                zmm0[0].o =
                                                    _mm_mask_and_epi64(k0_7, arg27[0].o, arg17[0].o)
                                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_7, zmm0, var_6c0), 
                                                    zmm5[0].o)
                                                zmm0[0].o = zx.o(0)
                                                int64_t k1_24 = _mm_mask_testn_epi16_mask(k0_7, 
                                                    zmm2[0].o, arg17[0].o)
                                                zmm4[0].o = zmm2[0].o & arg11[0].o
                                                int64_t k0_8 = _mm_mask_test_epi16_mask(k0_7, 
                                                    zmm4[0].o, arg17[0].o)
                                                char temp0_238 = _cvtmask32_u32(k0_8)
                                                cond:21_1 = rsi_4 == temp0_238
                                                cond:23_1 = rsi_4 == temp0_238
                                                cond:33_1 = rsi_4 != temp0_238
                                                
                                                if (rsi_4 != temp0_238)
                                                    zmm0[0].o = zmm2[0].o ^ zmm5[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_8, zmm24)
                                                arg16 = _mm256_mask_mov_epi32(k1_24, arg12)
                                                zmm2 = _mm256_sub_epi32(arg13, 
                                                    _mm256_cmpeq_epi32(zmm2, zmm2))
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_8, zmm2, arg15, 2), 
                                                    zmm0[0].o)
                                                zmm4[0].o = zmm5[0].o & arg11[0].o
                                                k0_5 = _mm_mask_test_epi16_mask(k0_8, zmm4[0].o, 
                                                    arg17[0].o)
                                                _kortest_mask8_u8(k0_5, k0_5)
                                                rsi_4 = _cvtmask32_u32(k0_5)
                                                zmm24 = _mm256_mask_mov_epi64(k0_5, arg13)
                                                arg12 = arg16
                                            while (cond:33_1)
                                    
                                    zmm24[0].o = _mm_mask_load_epi64(k0_5, data_142fc92e0)
                                    zmm0[0].o = _mm_mask_xor_epi64(k0_5, arg8[0].o, zmm24[0].o)
                                    zmm2[0].o = arg11[0].o & zmm0[0].o
                                    int64_t k0_12 =
                                        _mm_mask_test_epi16_mask(k0_5, zmm2[0].o, zmm24[0].o)
                                    _kortest_mask8_u8(k0_12, k0_12)
                                    
                                    if (not(cond:21_1))
                                        arg12 = _mm256_mask_mov_epi32(k3_3, arg16)
                                        arg13 =
                                            _mm256_add_epi32(zmm1, _mm256_cmpeq_epi32(zmm2, zmm2))
                                        zmm5[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_12, arg13, arg19), 
                                            zmm0[0].o)
                                        zmm4[0].o = zmm5[0].o & arg11[0].o
                                        k0_12 =
                                            _mm_mask_test_epi16_mask(k0_12, zmm4[0].o, zmm24[0].o)
                                        _kortest_mask8_u8(k0_12, k0_12)
                                        
                                        if (cond:23_1)
                                            arg16 = arg12
                                        else
                                            char rsi_5 = _cvtmask32_u32(k0_12)
                                            bool cond:37_1
                                            
                                            do
                                                zmm0 = _mm256_cvtepi32_epi64(arg13[0].o)
                                                zmm2 = _mm256_mask_add_epi64(k0_12, arg18, zmm0)
                                                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, 
                                                    zmm4[0].o, zmm24[0].o)
                                                char temp0_340 = _cvtmask32_u32(k0_13)
                                                
                                                if ((temp0_340 & 1) == 0)
                                                    if ((temp0_340 & 2) != 0)
                                                        goto label_14015a52e
                                                    
                                                    goto label_14015a62a
                                                
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*zmm2[0].q), 0)
                                                
                                                if ((temp0_340 & 2) != 0)
                                                label_14015a52e:
                                                    uint16_t rdx_42[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rdx_42, 1)
                                                    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    
                                                    if ((temp0_340 & 4) == 0)
                                                        goto label_14015a639
                                                    
                                                    goto label_14015a547
                                                
                                            label_14015a62a:
                                                zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
                                                
                                                if ((temp0_340 & 4) == 0)
                                                label_14015a639:
                                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                    
                                                    if ((temp0_340 & 8) != 0)
                                                        goto label_14015a56a
                                                    
                                                    goto label_14015a647
                                                
                                            label_14015a547:
                                                zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*zmm4[0].q), 2)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_340 & 8) != 0)
                                                label_14015a56a:
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    uint16_t rdx_46[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rdx_46, 3)
                                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                                    
                                                    if ((temp0_340 & 0x10) == 0)
                                                        goto label_14015a654
                                                    
                                                    goto label_14015a595
                                                
                                            label_14015a647:
                                                zmm2 = _mm256_add_epi64(arg14, zmm0)
                                                
                                                if ((temp0_340 & 0x10) == 0)
                                                label_14015a654:
                                                    
                                                    if ((temp0_340 & 0x20) != 0)
                                                        goto label_14015a5ab
                                                    
                                                    goto label_14015a65d
                                                
                                            label_14015a595:
                                                arg26[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg26[0].o, zx.d(*zmm2[0].q), 4)
                                                
                                                if ((temp0_340 & 0x20) != 0)
                                                label_14015a5ab:
                                                    uint16_t rdx_50[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, rdx_50, 5)
                                                    
                                                    if ((temp0_340 & 0x40) == 0)
                                                        goto label_14015a666
                                                    
                                                    goto label_14015a5be
                                                
                                            label_14015a65d:
                                                
                                                if ((temp0_340 & 0x40) != 0)
                                                label_14015a5be:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg26[0].o, zx.d(*zmm0[0].q), 6)
                                                    
                                                    if (temp0_340 s< 0)
                                                    label_14015a5db:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(zmm2, 1)
                                                        uint16_t rcx_53[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1))
                                                        arg26[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg26[0].o, rcx_53, 7)
                                                else
                                                label_14015a666:
                                                    
                                                    if (temp0_340 s< 0)
                                                        goto label_14015a5db
                                                
                                                zmm0[0].o = _mm_mask_and_epi64(k0_13, arg26[0].o, 
                                                    arg17[0].o)
                                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_13, zmm0, var_6c0, 2), 
                                                    zmm5[0].o)
                                                zmm0[0].o = zx.o(0)
                                                int64_t k1_32 = _mm_mask_testn_epi16_mask(k0_13, 
                                                    zmm2[0].o, arg17[0].o)
                                                zmm4[0].o = zmm2[0].o & arg11[0].o
                                                int64_t k0_14 = _mm_mask_test_epi16_mask(k0_13, 
                                                    zmm4[0].o, arg17[0].o)
                                                char temp0_347 = _cvtmask32_u32(k0_14)
                                                cond:37_1 = rsi_5 != temp0_347
                                                
                                                if (rsi_5 != temp0_347)
                                                    zmm0[0].o = zmm2[0].o ^ zmm5[0].o
                                                
                                                arg13 = _mm256_add_epi32(arg13, 
                                                    _mm256_cmpeq_epi32(zmm2, zmm2))
                                                arg16 = _mm256_mask_mov_epi32(k1_32, arg12)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_14, arg13, arg19), 
                                                    zmm0[0].o)
                                                zmm4[0].o = zmm5[0].o & arg11[0].o
                                                k0_12 = _mm_mask_test_epi16_mask(k0_14, zmm4[0].o, 
                                                    arg17[0].o)
                                                _kortest_mask8_u8(k0_12, k0_12)
                                                rsi_5 = _cvtmask32_u32(k0_12)
                                                arg12 = arg16
                                            while (cond:37_1)
                                    
                                    arg10 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_12, arg11[0].o, zmm24[0].o), 
                                        arg16, arg10)
                                    zmm0 = _mm256_cvtepi32_epi64(arg10[0].o)
                                    zmm2 = _mm256_mask_add_epi64(k0_12, arg18, zmm0)
                                    int128_t var_500
                                    uint16_t rcx_75[0x2]
                                    
                                    if ((temp0_146 & 1) != 0)
                                        zmm1[0].o = var_500
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*zmm2[0].q), 0)
                                        arg13 = arg7
                                        zmm5[0].o = var_790
                                        
                                        if ((temp0_146 & 2) != 0)
                                            rcx_75 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_75, 1)
                                    else
                                        arg13 = arg7
                                        zmm1[0].o = var_500
                                        zmm5[0].o = var_790
                                        
                                        if ((temp0_146 & 2) != 0)
                                            rcx_75 =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_75, 1)
                                    zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int128_t var_3f0
                                    
                                    if ((temp0_146 & 4) == 0)
                                        zmm4[0].o = var_3f0
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_140159563
                                        
                                        goto label_14015aab2
                                    
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    zmm4[0].o = var_3f0
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_146 & 8) != 0)
                                    label_140159563:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t rcx_8[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rcx_8, 3)
                                        zmm2 = _mm256_add_epi64(arg14, zmm0)
                                        
                                        if ((temp0_146 & 0x10) == 0)
                                            goto label_14015aac0
                                        
                                        goto label_14015958d
                                    
                                label_14015aab2:
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) != 0)
                                    label_14015958d:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*zmm2[0].q), 4)
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                        label_1401595a2:
                                            uint16_t rcx_12[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_12, 5)
                                            
                                            if ((temp0_146 & 0x40) == 0)
                                                goto label_14015aad4
                                            
                                            goto label_1401595b4
                                    else
                                    label_14015aac0:
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_1401595a2
                                    
                                    bool cond:29_1
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_1401595b4:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            zx.d(*zmm0[0].q), 6)
                                        cond:29_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                        label_1401595cf:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t rcx_16[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rcx_16, 7)
                                    else
                                    label_14015aad4:
                                        cond:29_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                            goto label_1401595cf
                                    
                                    int64_t k1_39 =
                                        _mm_mask_testn_epi16_mask(k0_12, arg11[0].o, arg17[0].o)
                                    zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                                    _mm256_sub_epi32(arg16, zmm0)
                                    arg16 = _mm256_mask_mov_epi32(k1_39, arg9)
                                    zmm0[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_12, 
                                            arg16, arg15), 
                                        arg11[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_12, zmm0[0].o, arg17[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:29_1))
                                        arg15 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, zmm0[0].o, arg17[0].o), 
                                            arg16)
                                        arg16 = arg15
                                        zmm0 = _mm256_cvtepi32_epi64(arg16[0].o)
                                        zmm2 = _mm256_mask_add_epi64(arg5, arg18, zmm0)
                                        
                                        if ((temp0_146 & 1) == 0)
                                            goto label_14015ac40
                                        
                                        goto label_14015ab3a
                                    
                                    zmm0 = _mm256_cvtepi32_epi64(arg16[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg18, zmm0)
                                    
                                    if ((temp0_146 & 1) == 0)
                                    label_14015ac40:
                                        
                                        if ((temp0_146 & 2) != 0)
                                            goto label_14015ab4f
                                        
                                        goto label_14015ac4a
                                    
                                label_14015ab3a:
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm2[0].q), 0)
                                    
                                    if ((temp0_146 & 2) != 0)
                                    label_14015ab4f:
                                        uint32_t rcx_79 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_79, 1)
                                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                                        var_500 = zmm1[0].o
                                        
                                        if ((temp0_146 & 4) == 0)
                                            goto label_14015ac63
                                        
                                        goto label_14015ab70
                                    
                                label_14015ac4a:
                                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                                    var_500 = zmm1[0].o
                                    
                                    if ((temp0_146 & 4) == 0)
                                    label_14015ac63:
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_14015aba3
                                        
                                        goto label_14015ac72
                                    
                                label_14015ab70:
                                    zmm1[0].o = zmm4[0].o
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm4[0].o = zmm1[0].o
                                    zmm1[0].o = var_500
                                    zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                        zx.d(*zmm4[0].q), 2)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_146 & 8) != 0)
                                    label_14015aba3:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint32_t rcx_83 =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                        zmm4[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, rcx_83, 3)
                                        zmm2 = _mm256_add_epi64(arg14, zmm0)
                                        
                                        if ((temp0_146 & 0x10) == 0)
                                            goto label_14015ac80
                                        
                                        goto label_14015abcd
                                    
                                label_14015ac72:
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) != 0)
                                    label_14015abcd:
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                            zx.d(*zmm2[0].q), 4)
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                        label_14015abe2:
                                            uint16_t rcx_87[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm4[0].o, rcx_87, 5)
                                            
                                            if ((temp0_146 & 0x40) == 0)
                                                goto label_14015ac94
                                            
                                            goto label_14015abf4
                                    else
                                    label_14015ac80:
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_14015abe2
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_14015abf4:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm4[0].o, 
                                            zx.d(*zmm0[0].q), 6)
                                        zmm0[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg17[0].o)
                                        
                                        if (temp0_146 s< 0)
                                        label_14015ac15:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t rax_24[0x2] =
                                                zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm4[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm4[0].o, rax_24, 7)
                                    else
                                    label_14015ac94:
                                        zmm0[0].o = _mm_mask_and_epi64(arg5, zmm1[0].o, arg17[0].o)
                                        
                                        if (temp0_146 s< 0)
                                            goto label_14015ac15
                                    
                                    zmm1 = var_340_1
                                    zmm2 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    var_3f0 = zmm4[0].o
                                    zmm0[0].o = _mm_mask_and_epi64(arg5, zmm4[0].o, zmm24[0].o)
                                    zmm4 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    zmm0[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                    label_14015acd5:
                                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(zmm4, zmm2), 1)
                                        zmm4 = var_160_1
                                        zmm2 = _mm256_sub_ps(zmm4, _mm256_cvtepi32_ps(zmm2))
                                        zmm0 = _mm256_div_ps(zmm2, _mm256_cvtepi32_ps(zmm0))
                                else
                                    zmm4 = _mm256_add_epi32(zmm5, zmm5)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg18, zmm0)
                                    int128_t var_300
                                    arg8[0].o = var_300
                                    
                                    if ((temp0_146 & 1) == 0)
                                        if ((temp0_146 & 2) != 0)
                                            goto label_14015a0af
                                        
                                        goto label_140159ac2
                                    
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm2[0].q, 0)
                                    
                                    if ((temp0_146 & 2) != 0)
                                    label_14015a0af:
                                        uint16_t* rcx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_28, 1)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                        
                                        if ((temp0_146 & 4) == 0)
                                            goto label_140159ad2
                                        
                                        goto label_14015a0ca
                                    
                                label_140159ac2:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_146 & 4) == 0)
                                    label_140159ad2:
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_14015a0e9
                                        
                                        goto label_140159ae1
                                    
                                label_14015a0ca:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm4[0].q, 2)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_146 & 8) != 0)
                                    label_14015a0e9:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t* rcx_30 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_30, 3)
                                        zmm2 = _mm256_add_epi64(arg14, zmm0)
                                        
                                        if ((temp0_146 & 0x10) == 0)
                                            goto label_140159aef
                                        
                                        goto label_14015a10d
                                    
                                label_140159ae1:
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) != 0)
                                    label_14015a10d:
                                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                            *zmm2[0].q, 4)
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                        label_14015a11c:
                                            uint16_t* rcx_32 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *rcx_32, 5)
                                            
                                            if ((temp0_146 & 0x40) == 0)
                                                goto label_140159b03
                                            
                                            goto label_14015a131
                                    else
                                    label_140159aef:
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_14015a11c
                                    
                                    bool cond:13_1
                                    bool cond:17_1
                                    bool cond:22_1
                                    bool cond:24_1
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_14015a131:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                            *zmm0[0].q, 6)
                                        cond:13_1 = temp0_146 == 0
                                        cond:17_1 = temp0_146 == 0
                                        cond:22_1 = temp0_146 == 0
                                        cond:24_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                        label_14015a149:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t* rcx_34 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                                *rcx_34, 7)
                                    else
                                    label_140159b03:
                                        cond:13_1 = temp0_146 == 0
                                        cond:17_1 = temp0_146 == 0
                                        cond:22_1 = temp0_146 == 0
                                        cond:24_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                            goto label_14015a149
                                    
                                    zmm0 = _mm256_cvtepu16_epi32(arg8[0].o)
                                    int64_t k3_2 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                                        zmm0, var_6c0, 2)
                                    zmm2[0].o = _mm_movm_epi16(k3_2)
                                    zmm0[0].o = arg11[0].o & zmm2[0].o
                                    int64_t k0_1 =
                                        _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm24[0].o)
                                    _kortest_mask8_u8(k0_1, k0_1)
                                    int32_t var_2e0_1[0x8] = arg13
                                    var_300 = arg8[0].o
                                    uint64_t var_320_1[0x2] = zmm2[0].o
                                    
                                    if (cond:13_1)
                                        arg17 = _mm256_mask_mov_epi64(k0_1, zmm5)
                                    else
                                        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                                        arg16 = _mm256_mask_blend_epi32(k3_2, zmm5, arg15)
                                        zmm4 = _mm256_sub_epi32(zmm5, zmm0)
                                        int64_t k0_2 = _mm256_cmp_epi32_mask(k3_2, zmm4, arg15, 2)
                                        zmm0 = zmm5
                                        zmm5[0].o = _mm_movm_epi16(k0_2)
                                        arg12[0].o = arg11[0].o & zmm5[0].o
                                        k0_1 =
                                            _mm_mask_test_epi16_mask(k0_2, arg12[0].o, zmm24[0].o)
                                        _kortest_mask8_u8(k0_1, k0_1)
                                        
                                        if (cond:17_1)
                                            arg17 = _mm256_mask_mov_epi64(k0_1, arg16)
                                        else
                                            char rcx_21 = _cvtmask32_u32(k0_1)
                                            arg13 = zmm0
                                            bool cond:34_1
                                            
                                            do
                                                zmm2 = zmm4
                                                zmm4 = _mm256_add_epi32(zmm4, zmm4)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                                arg17 = _mm256_mask_add_epi64(k0_1, arg18, zmm0)
                                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_1, 
                                                    arg12[0].o, zmm24[0].o)
                                                char temp0_183 = _cvtmask32_u32(k0_3)
                                                
                                                if ((temp0_183 & 1) == 0)
                                                    if ((temp0_183 & 2) != 0)
                                                        goto label_140159bb7
                                                    
                                                    goto label_140159cb4
                                                
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg17[0].o, 0)
                                                
                                                if ((temp0_183 & 2) != 0)
                                                label_140159bb7:
                                                    uint16_t* rdx_6 =
                                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(
                                                        arg17[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rdx_6, 1)
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                                    
                                                    if ((temp0_183 & 4) == 0)
                                                        goto label_140159cc4
                                                    
                                                    goto label_140159bd5
                                                
                                            label_140159cb4:
                                                zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                                
                                                if ((temp0_183 & 4) == 0)
                                                label_140159cc4:
                                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                    
                                                    if ((temp0_183 & 8) != 0)
                                                        goto label_140159bf7
                                                    
                                                    goto label_140159cd3
                                                
                                            label_140159bd5:
                                                zmm4[0].o =
                                                    _mm256_extracti32x4_epi32(k0_3, arg17, 1)
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *zmm4[0].q, 2)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_183 & 8) != 0)
                                                label_140159bf7:
                                                    zmm4[0].o =
                                                        _mm256_extracti32x4_epi32(k0_3, arg17, 1)
                                                    uint16_t* rdx_8 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rdx_8, 3)
                                                    arg17 = _mm256_mask_add_epi64(k0_3, arg14, zmm0)
                                                    
                                                    if ((temp0_183 & 0x10) == 0)
                                                        goto label_140159ce3
                                                    
                                                    goto label_140159c21
                                                
                                            label_140159cd3:
                                                arg17 = _mm256_mask_add_epi64(k0_3, arg14, zmm0)
                                                
                                                if ((temp0_183 & 0x10) == 0)
                                                label_140159ce3:
                                                    
                                                    if ((temp0_183 & 0x20) != 0)
                                                        goto label_140159c32
                                                    
                                                    goto label_140159ced
                                                
                                            label_140159c21:
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg17[0].o, 4)
                                                
                                                if ((temp0_183 & 0x20) != 0)
                                                label_140159c32:
                                                    uint16_t* rdx_10 =
                                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(
                                                        arg17[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rdx_10, 5)
                                                    
                                                    if ((temp0_183 & 0x40) == 0)
                                                        goto label_140159cf7
                                                    
                                                    goto label_140159c4a
                                                
                                            label_140159ced:
                                                
                                                if ((temp0_183 & 0x40) != 0)
                                                label_140159c4a:
                                                    zmm0[0].o =
                                                        _mm256_extracti32x4_epi32(k0_3, arg17, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *zmm0[0].q, 6)
                                                    
                                                    if (temp0_183 s< 0)
                                                    label_140159c66:
                                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_3, 
                                                            arg17, 1)
                                                        uint16_t* rdx_12 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1)
                                                        arg24[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg24[0].o, *rdx_12, 7)
                                                else
                                                label_140159cf7:
                                                    
                                                    if (temp0_183 s< 0)
                                                        goto label_140159c66
                                                
                                                zmm0 = _mm256_mask_cvtepu16_epi32(k0_3, arg24[0].o)
                                                zmm4[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_3, zmm0, var_6c0), 
                                                    zmm5[0].o)
                                                zmm0[0].o = zx.o(0)
                                                arg7[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k1_20 = _mm_mask_testn_epi16_mask(k0_3, 
                                                    zmm4[0].o, arg7[0].o)
                                                arg8[0].o = zmm4[0].o & arg11[0].o
                                                int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, 
                                                    arg8[0].o, arg7[0].o)
                                                char temp0_190 = _cvtmask32_u32(k0_4)
                                                cond:22_1 = rcx_21 == temp0_190
                                                cond:24_1 = rcx_21 == temp0_190
                                                cond:34_1 = rcx_21 != temp0_190
                                                
                                                if (rcx_21 != temp0_190)
                                                    zmm0[0].o = zmm4[0].o ^ zmm5[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_4, arg13)
                                                arg17 = _mm256_mask_mov_epi32(k1_20, arg16)
                                                zmm4 = _mm256_sub_epi32(zmm2, 
                                                    _mm256_cmpeq_epi32(zmm4, zmm4))
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_4, zmm4, arg15, 2), 
                                                    zmm0[0].o)
                                                arg12[0].o = zmm5[0].o & arg11[0].o
                                                k0_1 = _mm_mask_test_epi16_mask(k0_4, arg12[0].o, 
                                                    arg7[0].o)
                                                _kortest_mask8_u8(k0_1, k0_1)
                                                rcx_21 = _cvtmask32_u32(k0_1)
                                                arg13 = zmm2
                                                arg16 = _mm256_mask_mov_epi64(k0_1, arg17)
                                            while (cond:34_1)
                                    
                                    zmm0[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_1, 
                                        zmm24[0].o, var_320_1)
                                    zmm2[0].o = arg11[0].o & zmm0[0].o
                                    int64_t k0_9 =
                                        _mm_mask_test_epi16_mask(k0_1, zmm2[0].o, zmm24[0].o)
                                    _kortest_mask8_u8(k0_9, k0_9)
                                    uint16_t var_640[0x8]
                                    
                                    if (cond:22_1)
                                        zmm1[0].o = var_640
                                    else
                                        arg12 = _mm256_mask_mov_epi32(k3_2, arg17)
                                        arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                                        arg13 = __vpaddd_ymmqq_ymmqq_memqq(arg7, zmm5)
                                        zmm5[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                                arg13, arg19), 
                                            zmm0[0].o)
                                        zmm4[0].o = zmm5[0].o & arg11[0].o
                                        k0_9 = _mm_mask_test_epi16_mask(k0_9, zmm4[0].o, zmm24[0].o)
                                        _kortest_mask8_u8(k0_9, k0_9)
                                        
                                        if (cond:24_1)
                                            arg17 = _mm256_mask_mov_epi64(k0_9, arg12)
                                            zmm1[0].o = var_640
                                        else
                                            char rcx_51 = _cvtmask32_u32(k0_9)
                                            zmm1[0].o = var_640
                                            bool cond:38_1
                                            
                                            do
                                                arg17 = _mm256_mask_add_epi32(k0_9, arg13, arg13)
                                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_9, arg17[0].o)
                                                zmm2 = _mm256_mask_add_epi64(k0_9, arg18, zmm0)
                                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, 
                                                    zmm4[0].o, zmm24[0].o)
                                                char temp0_302 = _cvtmask32_u32(k0_10)
                                                
                                                if ((temp0_302 & 1) == 0)
                                                    if ((temp0_302 & 2) != 0)
                                                        goto label_14015a2d6
                                                    
                                                    goto label_14015a3d3
                                                
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *zmm2[0].q, 0)
                                                
                                                if ((temp0_302 & 2) != 0)
                                                label_14015a2d6:
                                                    uint16_t* rdx_30 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rdx_30, 1)
                                                    zmm0[0].o =
                                                        _mm256_extracti32x4_epi32(k0_10, arg17, 1)
                                                    
                                                    if ((temp0_302 & 4) == 0)
                                                        goto label_14015a3e4
                                                    
                                                    goto label_14015a2f4
                                                
                                            label_14015a3d3:
                                                zmm0[0].o =
                                                    _mm256_extracti32x4_epi32(k0_10, arg17, 1)
                                                
                                                if ((temp0_302 & 4) == 0)
                                                label_14015a3e4:
                                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                    
                                                    if ((temp0_302 & 8) != 0)
                                                        goto label_14015a315
                                                    
                                                    goto label_14015a3f3
                                                
                                            label_14015a2f4:
                                                zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *zmm4[0].q, 2)
                                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                                
                                                if ((temp0_302 & 8) != 0)
                                                label_14015a315:
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    uint16_t* rdx_32 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rdx_32, 3)
                                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                                    
                                                    if ((temp0_302 & 0x10) == 0)
                                                        goto label_14015a401
                                                    
                                                    goto label_14015a33b
                                                
                                            label_14015a3f3:
                                                zmm2 = _mm256_add_epi64(arg14, zmm0)
                                                
                                                if ((temp0_302 & 0x10) == 0)
                                                label_14015a401:
                                                    
                                                    if ((temp0_302 & 0x20) != 0)
                                                        goto label_14015a34c
                                                    
                                                    goto label_14015a40b
                                                
                                            label_14015a33b:
                                                arg23[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg23[0].o, *zmm2[0].q, 4)
                                                
                                                if ((temp0_302 & 0x20) != 0)
                                                label_14015a34c:
                                                    uint16_t* rdx_34 =
                                                        __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *rdx_34, 5)
                                                    
                                                    if ((temp0_302 & 0x40) == 0)
                                                        goto label_14015a415
                                                    
                                                    goto label_14015a363
                                                
                                            label_14015a40b:
                                                
                                                if ((temp0_302 & 0x40) != 0)
                                                label_14015a363:
                                                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    arg23[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg23[0].o, *zmm0[0].q, 6)
                                                    
                                                    if (temp0_302 s< 0)
                                                    label_14015a37e:
                                                        zmm0[0].o =
                                                            _mm256_extracti128_si256(zmm2, 1)
                                                        uint16_t* rdx_36 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 
                                                            1)
                                                        arg23[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg23[0].o, *rdx_36, 7)
                                                else
                                                label_14015a415:
                                                    
                                                    if (temp0_302 s< 0)
                                                        goto label_14015a37e
                                                
                                                zmm0 = _mm256_mask_cvtepu16_epi32(k0_10, arg23[0].o)
                                                zmm4[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                                        k0_10, zmm0, var_6c0, 2), 
                                                    zmm5[0].o)
                                                zmm0[0].o = zx.o(0)
                                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k1_28 = _mm_mask_testn_epi16_mask(k0_10, 
                                                    zmm4[0].o, zmm2[0].o)
                                                arg8[0].o = zmm4[0].o & arg11[0].o
                                                int64_t k0_11 = _mm_mask_test_epi16_mask(k0_10, 
                                                    arg8[0].o, zmm2[0].o)
                                                char temp0_309 = _cvtmask32_u32(k0_11)
                                                cond:38_1 = rcx_51 != temp0_309
                                                
                                                if (rcx_51 != temp0_309)
                                                    zmm0[0].o = zmm4[0].o ^ zmm5[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_11, arg13)
                                                arg13 = _mm256_add_epi32(arg13, arg7)
                                                arg17 = _mm256_mask_mov_epi32(k1_28, arg12)
                                                zmm5[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                        k0_11, arg13, arg19), 
                                                    zmm0[0].o)
                                                zmm4[0].o = zmm5[0].o & arg11[0].o
                                                k0_9 = _mm_mask_test_epi16_mask(k0_11, zmm4[0].o, 
                                                    zmm2[0].o)
                                                _kortest_mask8_u8(k0_9, k0_9)
                                                rcx_51 = _cvtmask32_u32(k0_9)
                                                arg12 = _mm256_mask_mov_epi64(k0_9, arg17)
                                            while (cond:38_1)
                                    
                                    arg10 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_9, arg11[0].o, zmm24[0].o), 
                                        arg17, arg10)
                                    zmm4 = _mm256_add_epi32(arg10, arg10)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    zmm2 = _mm256_mask_add_epi64(k0_9, arg18, zmm0)
                                    
                                    if ((temp0_146 & 1) == 0)
                                        arg13 = var_2e0_1
                                        zmm5[0].o = var_790
                                        
                                        if ((temp0_146 & 2) != 0)
                                            goto label_14015a848
                                        
                                        goto label_14015a73a
                                    
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 0)
                                    arg13 = var_2e0_1
                                    zmm5[0].o = var_790
                                    
                                    if ((temp0_146 & 2) != 0)
                                    label_14015a848:
                                        uint16_t* rcx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_58, 1)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                        
                                        if ((temp0_146 & 4) == 0)
                                            goto label_14015a74a
                                        
                                        goto label_14015a863
                                    
                                label_14015a73a:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_146 & 4) == 0)
                                    label_14015a74a:
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_14015a882
                                        
                                        goto label_14015a759
                                    
                                label_14015a863:
                                    zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm4[0].q, 2)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_146 & 8) != 0)
                                    label_14015a882:
                                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        uint16_t* rcx_60 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_60, 3)
                                        zmm2 = _mm256_add_epi64(arg14, zmm0)
                                        
                                        if ((temp0_146 & 0x10) == 0)
                                            goto label_14015a767
                                        
                                        goto label_14015a8a6
                                    
                                label_14015a759:
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) != 0)
                                    label_14015a8a6:
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm2[0].q, 4)
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                        label_14015a8b5:
                                            uint16_t* rcx_62 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rcx_62, 5)
                                            
                                            if ((temp0_146 & 0x40) == 0)
                                                goto label_14015a77b
                                            
                                            goto label_14015a8ca
                                    else
                                    label_14015a767:
                                        
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_14015a8b5
                                    
                                    bool cond:30_1
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_14015a8ca:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 6)
                                        cond:30_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                        label_14015a8e2:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t* rcx_64 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rcx_64, 7)
                                    else
                                    label_14015a77b:
                                        cond:30_1 = temp0_146 == 0
                                        
                                        if (temp0_146 s< 0)
                                            goto label_14015a8e2
                                    
                                    var_640 = zmm1[0].o
                                    zmm0[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_35 =
                                        _mm_mask_testn_epi16_mask(k0_9, arg11[0].o, zmm0[0].o)
                                    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                                    _mm256_mask_sub_epi32(k0_9, arg17, zmm2)
                                    arg16 = _mm256_mask_mov_epi32(k1_35, arg9)
                                    zmm2[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                            arg16, arg15), 
                                        arg11[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_9, zmm2[0].o, zmm0[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:30_1))
                                        arg15 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, zmm2[0].o, zmm0[0].o), 
                                            arg16)
                                        arg16 = arg15
                                    
                                    zmm4 = _mm256_add_epi32(arg16, arg16)
                                    zmm0 = _mm256_cvtepi32_epi64(zmm4[0].o)
                                    zmm2 = _mm256_mask_add_epi64(arg5, arg18, zmm0)
                                    
                                    if ((temp0_146 & 1) == 0)
                                        if ((temp0_146 & 2) != 0)
                                            goto label_14015a91e
                                        
                                        goto label_14015a7f8
                                    
                                    int128_t var_6d0
                                    zmm0[0].o = var_6d0
                                    zmm0[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm2[0].q, 0)
                                    var_6d0 = zmm0[0].o
                                    
                                    if ((temp0_146 & 2) != 0)
                                    label_14015a91e:
                                        int64_t rcx_66 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm0[0].o = var_6d0
                                        zmm0[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_66, 1)
                                        var_6d0 = zmm0[0].o
                                        zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                        
                                        if ((temp0_146 & 4) == 0)
                                            goto label_14015a808
                                        
                                        goto label_14015a94b
                                    
                                label_14015a7f8:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm4, 1)
                                    
                                    if ((temp0_146 & 4) != 0)
                                    label_14015a94b:
                                        zmm4[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm1[0].o = var_6d0
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm4[0].q, 2)
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                        label_14015a96f:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            uint16_t* rcx_68 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rcx_68, 3)
                                    else
                                    label_14015a808:
                                        zmm1[0].o = var_6d0
                                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                        
                                        if ((temp0_146 & 8) != 0)
                                            goto label_14015a96f
                                    
                                    zmm2 = _mm256_add_epi64(arg14, zmm0)
                                    
                                    if ((temp0_146 & 0x10) == 0)
                                        if ((temp0_146 & 0x20) != 0)
                                            goto label_14015a9e1
                                        
                                        goto label_14015a990
                                    
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm2[0].q, 4)
                                    
                                    if ((temp0_146 & 0x20) != 0)
                                    label_14015a9e1:
                                        uint16_t* rcx_70 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rcx_70, 5)
                                        
                                        if ((temp0_146 & 0x40) == 0)
                                            goto label_14015a996
                                        
                                        goto label_14015a9f2
                                    
                                label_14015a990:
                                    
                                    if ((temp0_146 & 0x40) != 0)
                                    label_14015a9f2:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                            *zmm0[0].q, 6)
                                        
                                        if (temp0_146 s< 0)
                                        label_14015aa06:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            int64_t rax_22 =
                                                __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_22, 7)
                                    else
                                    label_14015a996:
                                        
                                        if (temp0_146 s< 0)
                                            goto label_14015aa06
                                    
                                    zmm2 = __vpmovzxwd_ymmqq_memdq(var_640)
                                    var_6d0 = zmm1[0].o
                                    zmm4 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    zmm1 = var_340_1
                                    zmm0[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                        goto label_14015acd5
                                
                                zmm2[0].o = _mm_mask_and_epi64(arg5, zmm5[0].o, zmm24[0].o)
                                zmm2 = _mm256_mask_mov_ps(
                                    _mm_cmp_epi16_mask(arg5, zmm2[0].o, zmm24[0].o, 4), zmm0)
                        
                        arg25 = _mm256_mask_mov_ps(k2_2, zmm2)
                        arg9 = arg16
                else
                    zmm4[0].o = zx.o(0)
                    zmm0[0].o = zx.o(0)
                    zmm5[0].o = zx.o(arg29)
                    zx.o(0) f- zmm5[0]
                    z_1 = 0f f== zmm5[0]
                    
                    if (not(0f f< zmm5[0]))
                        arg10[0].o = zx.o(0)
                        arg9[0].o = zx.o(0)
                        arg25 = _mm256_mask_mov_ps(k3_1, zmm4)
                        k2_2 = _mm256_mask_test_epi32_mask(k2_1, zmm2, zmm2)
                        _kortest_mask8_u8(k2_2, k2_2)
                        
                        if (not(z_1))
                            goto label_140159970
                    else
                        zmm5[0].o f- 1f
                        bool c_2 = zmm5[0] f< 1f
                        z_1 = zmm5[0] f== 1f
                        zmm5 = _mm256_add_epi32(arg12, arg16)
                        
                        if (not(c_2))
                            arg10 = _mm256_mask_mov_epi32(k3_1, zmm5)
                            arg9 = arg10
                            arg25 = _mm256_mask_mov_ps(k3_1, zmm4)
                            k2_2 = _mm256_mask_test_epi32_mask(k2_1, zmm2, zmm2)
                            _kortest_mask8_u8(k2_2, k2_2)
                            
                            if (not(z_1))
                                goto label_140159970
                        else
                            zmm0 = __vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm5), var_2c0_1)
                            arg17 = _mm256_mask_roundscale_ps(arg5, zmm0, 9)
                            zmm4 = _mm256_mask_cvttps_epi32(arg5, arg17)
                            arg10 = _mm256_mask_min_epi32(k3_1, zmm5, zmm4)
                            zmm4[0].o = zx.o(0)
                            z_1 = arg30 == 1
                            
                            if (not(z_1))
                                zmm4 = _mm256_mask_sub_ps(arg5, zmm0, arg17)
                            
                            zmm0 = _mm256_sub_epi32(arg10, arg16)
                            arg9 = _mm256_mask_min_epi32(k3_1, zmm0, zmm5)
                            arg25 = _mm256_mask_mov_ps(k3_1, zmm4)
                            k2_2 = _mm256_mask_test_epi32_mask(k2_1, zmm2, zmm2)
                            _kortest_mask8_u8(k2_2, k2_2)
                            
                            if (not(z_1))
                                goto label_140159970
            
            zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
            arg14 = _mm256_cvtepi32_epi64(zmm0[0].o)
            arg12 = arg13
            arg13 = _mm256_cvtepi32_epi64(arg13[0].o)
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg10, var_780)
            zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
            arg18 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
            arg11 = _mm256_cvtepi32_epi64(zmm0[0].o)
            int64_t k2_3 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_1, zmm27, 2)
            _kortest_mask8_u8(k2_3, k2_3)
            
            if (z_1)
                arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            else
                zmm0 = _mm256_add_epi64(arg11, arg13)
                zmm2 = _mm256_mask_add_epi64(arg5, arg18, arg14)
                arg17 = _mm256_mask_add_epi64(arg5, zmm2, zmm1)
                arg16 = _mm256_mask_add_epi64(arg5, zmm0, zmm20)
                zmm5 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                int64_t k1_43 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_3, arg19, zmm5)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z_1))
                    zmm0 = __vpbroadcastq_ymmqq_memq(2)
                    arg16 = _mm256_mask_add_epi64(k1_43, arg16, zmm0)
                    int64_t k3_4 = _kshiftri_mask8(k1_43, 4)
                    arg17 = _mm256_mask_add_epi64(k3_4, arg17, zmm0)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                    zmm2 = _mm256_add_epi64(arg6, arg13)
                    zmm4 = __vpbroadcastq_ymmqq_memq(4)
                    zmm2 = _mm256_add_epi64(zmm2, arg11)
                    zmm0 =
                        _mm256_mask_add_epi64(k3_4, _mm256_mask_add_epi64(arg5, zmm0, arg18), zmm4)
                    zmm2 = _mm256_mask_add_epi64(k1_43, zmm2, zmm4)
                    int64_t r8_1 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rcx_90 = zmm2[0].q
                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                    int64_t rbx_4 = zmm2[0].q
                    int64_t r14_3 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                    int64_t rsi_6 = zmm0[0].q
                    int64_t rdx_53 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    int64_t rax_25 = zmm0[0].q
                    int64_t rdi_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = zx.o(*(arg4 + rcx_90))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_1), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_4), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_3), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_6), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_53), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_25), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_6), 7)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg15 = _mm256_cvtepi32_ps(zmm0)
                
                int128_t var_3d0
                zmm2[0].o = var_3d0
                int128_t var_4e0
                zmm0[0].o = var_4e0
                zmm4 = __vpbroadcastd_ymmqq_memd(2)
                int64_t k3_5 = _mm256_mask_test_epi32_mask(k2_3, zmm25, zmm4)
                _kortest_mask8_u8(k3_5, k3_5)
                
                if (not(z_1))
                    char temp0_488 = _cvtmask32_u32(k3_5)
                    
                    if ((temp0_488 & 1) == 0)
                        if ((temp0_488 & 2) != 0)
                            goto label_14015b9da
                        
                        goto label_14015aea0
                    
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg16[0].q, 0)
                    
                    if ((temp0_488 & 2) != 0)
                    label_14015b9da:
                        int64_t rax_28 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_28, 1)
                        
                        if ((temp0_488 & 4) == 0)
                            goto label_14015aeaa
                        
                        goto label_14015b9ef
                    
                label_14015aea0:
                    
                    if ((temp0_488 & 4) == 0)
                    label_14015aeaa:
                        
                        if ((temp0_488 & 8) != 0)
                            goto label_14015ba09
                        
                        goto label_14015aeb4
                    
                label_14015b9ef:
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_488 & 8) != 0)
                    label_14015ba09:
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        int64_t rax_30 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_30, 3)
                        
                        if ((temp0_488 & 0x10) == 0)
                            goto label_14015aebe
                        
                        goto label_14015ba2a
                    
                label_14015aeb4:
                    
                    if ((temp0_488 & 0x10) != 0)
                    label_14015ba2a:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg17[0].o, 4)
                        
                        if ((temp0_488 & 0x20) != 0)
                        label_14015ba39:
                            uint64_t rax_32 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg17[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_32, 5)
                            
                            if ((temp0_488 & 0x40) == 0)
                                goto label_14015aed2
                            
                            goto label_14015ba4f
                    else
                    label_14015aebe:
                        
                        if ((temp0_488 & 0x20) != 0)
                            goto label_14015ba39
                    
                    int64_t k1_44
                    
                    if ((temp0_488 & 0x40) != 0)
                    label_14015ba4f:
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                        zmm0 = __vpbroadcastq_ymmqq_memq(2)
                        k1_44 = _kshiftri_mask8(k3_5, 4)
                        z_1 = temp0_488 == 0
                        
                        if (temp0_488 s< 0)
                        label_14015ba77:
                            arg7[0].o = zmm2[0].o
                            zmm2[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                            uint16_t* rax_34 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            zmm2[0].o = arg7[0].o
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_34, 7)
                    else
                    label_14015aed2:
                        zmm0 = __vpbroadcastq_ymmqq_memq(2)
                        k1_44 = _kshiftri_mask8(k3_5, 4)
                        z_1 = temp0_488 == 0
                        
                        if (temp0_488 s< 0)
                            goto label_14015ba77
                    
                    arg16 = _mm256_mask_add_epi64(k3_5, arg16, zmm0)
                    arg17 = _mm256_mask_add_epi64(k1_44, arg17, zmm0)
                    var_3d0 = zmm2[0].o
                    zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                    zmm2 = _mm256_cvtepi32_ps(zmm0)
                    zmm0[0].o = var_4e0
                
                int64_t k3_6 = _mm256_movepi32_mask(zmm5)
                zmm4 = _mm256_mask_and_epi32(arg5, zmm25, zmm4)
                zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg20)
                arg5 = _mm256_mask_test_epi32_mask(k2_3, zmm25, arg20)
                _kortest_mask8_u8(arg5, arg5)
                
                if (z_1)
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                else
                    char temp0_496 = _cvtmask32_u32(arg5)
                    
                    if ((temp0_496 & 1) == 0)
                        if ((temp0_496 & 2) != 0)
                            goto label_14015baaa
                        
                        goto label_14015af4b
                    
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg16[0].q, 0)
                    
                    if ((temp0_496 & 2) != 0)
                    label_14015baaa:
                        int64_t rax_36 = __vpextrq_gpr64q_xmmdq_immb(arg16[0].o, 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_36, 1)
                        
                        if ((temp0_496 & 4) == 0)
                            goto label_14015af55
                        
                        goto label_14015babf
                    
                label_14015af4b:
                    
                    if ((temp0_496 & 4) == 0)
                    label_14015af55:
                        
                        if ((temp0_496 & 8) != 0)
                            goto label_14015bae1
                        
                        goto label_14015af5f
                    
                label_14015babf:
                    arg7[0].o = zmm0[0].o
                    zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                    zmm0[0].o = arg7[0].o
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 2)
                    
                    if ((temp0_496 & 8) != 0)
                    label_14015bae1:
                        arg7[0].o = zmm0[0].o
                        zmm0[0].o = _mm256_extracti128_si256(arg16, 1)
                        uint16_t* rax_38 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = arg7[0].o
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_38, 3)
                        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                        
                        if ((temp0_496 & 0x10) == 0)
                            goto label_14015af6e
                        
                        goto label_14015bb0f
                    
                label_14015af5f:
                    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
                    
                    if ((temp0_496 & 0x10) != 0)
                    label_14015bb0f:
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg17[0].o, 4)
                        
                        if ((temp0_496 & 0x20) != 0)
                        label_14015bb1e:
                            uint64_t rax_40 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg17[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_40, 5)
                            
                            if ((temp0_496 & 0x40) == 0)
                                goto label_14015af82
                            
                            goto label_14015bb34
                    else
                    label_14015af6e:
                        
                        if ((temp0_496 & 0x20) != 0)
                            goto label_14015bb1e
                    
                    if ((temp0_496 & 0x40) != 0)
                    label_14015bb34:
                        arg7[0].o = zmm0[0].o
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                        zmm0[0].o = arg7[0].o
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                        z_1 = temp0_496 == 0
                        
                        if (temp0_496 s< 0)
                        label_14015bb55:
                            arg7[0].o = zmm0[0].o
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                            uint16_t* rax_42 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = arg7[0].o
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_42, 7)
                    else
                    label_14015af82:
                        z_1 = temp0_496 == 0
                        
                        if (temp0_496 s< 0)
                            goto label_14015bb55
                    
                    var_4e0 = zmm0[0].o
                    zmm0 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o))
                
                int64_t k1_45 = _mm256_mask_test_epi32_mask(arg5, zmm5, zmm5)
                int64_t k4_1 = _mm256_mask_test_epi32_mask(arg5, zmm4, zmm4)
                zmm4 = _mm256_broadcast_ss(-32767f)
                zmm5 = _mm256_add_ps(arg15, zmm4)
                arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 3.05185094e-05f)
                zmm5 = _mm256_mask_mul_ps(k3_6, zmm5, arg17)
                zmm2 = _mm256_mask_mul_ps(k4_1, _mm256_add_ps(zmm2, zmm4), arg17)
                zmm0 = _mm256_mask_mul_ps(k1_45, _mm256_add_ps(zmm0, zmm4), arg17)
                var_4a0.32 = _mm256_mask_storeu_ps(k2_3, zmm5)
                zmm5 = _mm256_fnmadd_ps(
                    _mm256_fnmadd_ps(
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm5, arg5, zmm5, 
                            0x3f800000), 
                        zmm2, zmm2), 
                    zmm0, zmm0)
                zmm4 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm5, 2), zmm5)
                var_480.32 = _mm256_mask_storeu_ps(k2_3, zmm2)
                var_460.32 = _mm256_mask_storeu_ps(k2_3, zmm0)
                var_440.32 = _mm256_mask_storeu_ps(k2_3, zmm4)
            
            arg15 = __vpbroadcastd_ymmqq_memd(2)
            arg5 = _mm256_cmp_epi32_mask(arg5, zmm27, arg15, 4)
            int64_t k1_47 = _mm256_cmp_epi32_mask(k7_1, zmm27, arg15, 4)
            _kortest_mask8_u8(k1_47, k1_47)
            
            if (not(z_1))
                uint64_t k2_4 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_1, zmm27, 1)
                _kortest_mask8_u8(k2_4, k2_4)
                
                if (not(z_1))
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                    zmm2 = __vpbroadcastq_ymmqq_memq(4)
                    zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg11)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg18)
                    zmm5 = _mm256_add_epi64(zmm0, zmm2)
                    zmm2 = _mm256_add_epi64(zmm4, zmm2)
                    uint64_t k3_7 = _kshiftri_mask8(k2_4, 4)
                    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                    int64_t k1_49
                    float temp0_526[0x4]
                    temp0_526, k1_49 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k2_4), *(arg4 + zmm2[0].q))
                    arg17[0].o = temp0_526
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    int64_t k1_51
                    float temp0_528[0x4]
                    temp0_528, k1_51 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_7), *(arg4 + zmm5[0].q))
                    zmm2[0].o = temp0_528
                    zmm5 = __vpbroadcastq_ymmqq_memq(8)
                    zmm24 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                    zmm5 = _mm256_add_epi64(zmm4, zmm5)
                    arg7[0].o = zx.o(0)
                    int64_t k1_53
                    float temp0_532[0x4]
                    temp0_532, k1_53 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k2_4), *(arg4 + zmm5[0].q))
                    arg7[0].o = temp0_532
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int64_t k1_55
                    float temp0_534[0x4]
                    temp0_534, k1_55 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k3_7), *(arg4 + zmm24[0]))
                    zmm5[0].o = temp0_534
                    zmm24 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm24)
                    zmm4 = _mm256_mask_add_epi64(arg5, zmm4, zmm24)
                    zmm24[0].o = _mm_mask_xor_epi32(arg5, zmm24[0].o, zmm24[0].o)
                    int64_t k1_57
                    float temp0_539[0x4]
                    temp0_539, k1_57 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                        __kmovq_maskmskw_masku64_avx512(k2_4), *(arg4 + zmm4[0].q))
                    zmm24[0].o = temp0_539
                    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                    int64_t k3_8
                    float temp0_541[0x4]
                    temp0_541, k3_8 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_7, *(arg4 + zmm0[0].q))
                    zmm4[0].o = temp0_541
                    zmm0 = _mm256_insertf32x4(arg5, arg17, zmm2[0].o, 1)
                    zmm2 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                    zmm4 = _mm256_insertf32x4(arg5, zmm24, zmm4[0].o, 1)
                    zmm24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    var_4a0.32 = _mm256_mask_storeu_ps(k2_4, zmm0)
                    zmm0 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm0, 
                                0x3f800000), 
                            zmm2, zmm2), 
                        zmm4, zmm4)
                    zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm0, 1), zmm0)
                    var_480.32 = _mm256_mask_storeu_ps(k2_4, zmm2)
                    var_460.32 = _mm256_mask_storeu_ps(k2_4, zmm4)
                    var_440.32 = _mm256_mask_storeu_ps(k2_4, zmm0)
                
                int64_t k2_5 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 1), arg5)
                int64_t k1_60 = _mm256_cmp_epi32_mask(k2_5, arg22, arg16, 4)
                _kortest_mask8_u8(k1_60, k1_60)
                
                if (not(z_1))
                    uint64_t k3_9 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_1, zmm27, 3)
                    _kortest_mask8_u8(k3_9, k3_9)
                    
                    if (not(z_1))
                        var_790.w = _store_mask16(k2_5)
                        float var_5c0_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                        float var_5e0_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                        float var_600_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                        float var_660_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                        double var_680_1[0x4] = _mm256_mask_store_epi64(arg5, arg19)
                        float var_6a0_1[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                        int64_t k4_2 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                            _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm25, 0x1f)), zmm27, 
                            3)
                        uint64_t k5_1 = _mm256_cmp_epi32_mask(k4_2, arg22, arg16, 4)
                        _kortest_mask8_u8(k5_1, k5_1)
                        zmm2 = _mm256_mask_mov_epi64(arg5, zmm20)
                        zmm4 = zmm1
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k6_1 = _kshiftri_mask8(k5_1, 4)
                            zmm4 = _mm256_mask_add_epi64(k6_1, zmm1, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm5 = _mm256_mask_add_epi64(k5_1, zmm20, zmm0)
                            uint64_t k2_6 = __kmovq_maskmskw_masku64_avx512(k7_1)
                            uint64_t k7_2 = _kshiftri_mask8(k5_1, 4)
                            zmm0[0].o = zx.o(0)
                            int64_t k1_63
                            float temp0_567[0x4]
                            temp0_567, k1_63 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k5_1), *zmm20[0])
                            zmm0[0].o = temp0_567
                            zmm2[0].o = zx.o(0)
                            int64_t k1_65
                            float temp0_568[0x4]
                            temp0_568, k1_65 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k7_2), *zmm1[0].q)
                            zmm2[0].o = temp0_568
                            var_600_1 = _mm256_mask_storeu_ps(k4_2, 
                                _mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm2 = _mm256_mask_add_epi64(k5_1, zmm20, zmm0)
                            arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                            int64_t k5_2
                            float temp0_575[0x4]
                            temp0_575, k5_2 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_1, *zmm5[0].q)
                            arg17[0].o = temp0_575
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k7_3
                            float temp0_577[0x4]
                            temp0_577, k7_3 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_2, *zmm4[0].q)
                            zmm5[0].o = temp0_577
                            k7_1 = __kmovq_maskmskw_masku64_avx512(k2_6)
                            zmm4 = _mm256_mask_add_epi64(k6_1, zmm1, zmm0)
                            var_6a0_1 = _mm256_mask_storeu_ps(k4_2, 
                                _mm256_insertf32x4(arg5, arg17, zmm5[0].o, 1))
                        
                        int64_t k4_3 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 3)
                        int64_t k5_3 =
                            __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_3, zmm25, 2)
                        uint64_t k2_7 = _mm256_cmp_epi32_mask(k5_3, arg22, arg16, 4)
                        _kortest_mask8_u8(k2_7, k2_7)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            uint32_t temp0_582 = _store_mask32(k7_1)
                            int64_t k7_4 = _kshiftri_mask8(k2_7, 4)
                            zmm5 = _mm256_mask_add_epi64(k7_4, zmm4, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm2)
                            arg17 = _mm256_mask_add_epi64(k2_7, zmm2, zmm0)
                            uint64_t k1_66 = _kshiftri_mask8(k2_7, 4)
                            zmm0[0].o = zx.o(0)
                            int64_t k6_3
                            float temp0_586[0x4]
                            temp0_586, k6_3 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k2_7), *zmm2[0].q)
                            zmm0[0].o = temp0_586
                            arg8[0].o = zx.o(0)
                            int64_t k6_5
                            float temp0_587[0x4]
                            temp0_587, k6_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_66), *zmm4[0].q)
                            arg8[0].o = temp0_587
                            var_5e0_1 = _mm256_mask_storeu_ps(k5_3, 
                                _mm256_insertf128_ps(zmm0, arg8[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            zmm2 = _mm256_mask_add_epi64(k2_7, zmm2, zmm0)
                            zmm24[0].o = _mm_mask_xor_epi32(arg5, zmm24[0].o, zmm24[0].o)
                            int64_t k2_8
                            float temp0_593[0x4]
                            temp0_593, k2_8 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_7, *arg17[0].q)
                            zmm24[0].o = temp0_593
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k1_67
                            float temp0_595[0x4]
                            temp0_595, k1_67 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_66, *zmm5[0].q)
                            arg8[0].o = temp0_595
                            zmm4 = _mm256_mask_add_epi64(k7_4, zmm4, zmm0)
                            k7_1 = _load_mask32(temp0_582)
                            var_680_1 = _mm256_mask_storeu_ps(k5_3, 
                                _mm256_insertf32x4(arg5, zmm24, arg8[0].o, 1))
                        
                        int64_t k4_4 =
                            __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_3, zmm25, 4)
                        uint64_t k5_4 = _mm256_cmp_epi32_mask(k4_4, arg22, arg16, 4)
                        _kortest_mask8_u8(k5_4, k5_4)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            uint64_t k1_68 = _kshiftri_mask8(k5_4, 4)
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k2_10
                            float temp0_601[0x4]
                            temp0_601, k2_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k5_4), *zmm2[0].q)
                            zmm5[0].o = temp0_601
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_12
                            float temp0_603[0x4]
                            temp0_603, k2_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_68), *zmm4[0].q)
                            arg8[0].o = temp0_603
                            zmm4 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_4, 4), zmm4, zmm0)
                            zmm2 = _mm256_mask_add_epi64(k5_4, zmm2, zmm0)
                            zmm0 = _mm256_insertf128_ps(zmm5, arg8[0].o, 1)
                            var_5c0_1 = _mm256_mask_storeu_ps(k4_4, zmm0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k5_5
                            float temp0_609[0x4]
                            temp0_609, k5_5 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_4, *zmm2[0].q)
                            zmm0[0].o = temp0_609
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            int64_t k1_69
                            float temp0_611[0x4]
                            temp0_611, k1_69 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_68, *zmm4[0].q)
                            zmm2[0].o = temp0_611
                            var_660_1 = _mm256_mask_storeu_ps(k4_4, 
                                _mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                        
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg11)
                        zmm0 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg18), zmm2)
                        zmm2 = _mm256_add_epi64(zmm4, zmm2)
                        int64_t k1_70 = _kshiftri_mask8(k3_9, 4)
                        zmm4[0].o = zx.o(0)
                        int64_t k2_15
                        uint32_t temp0_621[0x4]
                        temp0_621, k2_15 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k3_9), *(arg4 + zmm2[0].q))
                        zmm4[0].o = temp0_621
                        zmm2[0].o = zx.o(0)
                        int64_t k1_71
                        uint32_t temp0_622[0x4]
                        temp0_622, k1_71 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_70, 
                            *(arg4 + zmm0[0].q))
                        zmm2[0].o = temp0_622
                        zmm0 = _mm256_inserti128_si256(zmm4, zmm2[0].o, 1)
                        zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                        zmm4 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff)
                        zmm0 = _mm256_srli_epi32(zmm0, 0x15)
                        zmm5 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm0 = _mm256_add_epi32(zmm0, zmm5)
                        arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm0 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(zmm0), arg17)
                        arg7 = var_680_1
                        arg8 = var_660_1
                        zmm24 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_load_ps(arg5, var_6a0_1), arg5, zmm0, var_600_1)
                        zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm5)), arg17), 
                            arg7, var_5e0_1)
                        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                    arg5, zmm4, 0xfffffe01)), 
                                0x43ff8000), 
                            arg8, var_5c0_1)
                        var_4a0.32 = _mm256_mask_storeu_ps(k3_9, zmm24)
                        zmm24 = _mm256_mask3_fnmadd_ps(
                            _mm256_mask3_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm24, arg5, 
                                    zmm24, 0x3f800000), 
                                arg5, zmm0, zmm0), 
                            arg5, zmm2, zmm2)
                        zmm4 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm24, 1), zmm24)
                        var_480.32 = _mm256_mask_storeu_ps(k3_9, zmm0)
                        var_460.32 = _mm256_mask_storeu_ps(k3_9, zmm2)
                        var_440.32 = _mm256_mask_storeu_ps(k3_9, zmm4)
                        zmm24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        k2_5 = _load_mask16(var_790.w)
                    
                    int64_t k2_16 = _kxor_mask8(k2_5, 
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 3))
                    int64_t k1_74 = _mm256_cmp_epi32_mask(k2_16, arg22, arg16, 4)
                    _kortest_mask8_u8(k1_74, k1_74)
                    
                    if (not(z_1))
                        uint64_t k3_10 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_1, zmm27, 5)
                        _kortest_mask8_u8(k3_10, k3_10)
                        
                        if (not(z_1))
                            zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                            zmm2 = __vpbroadcastq_ymmqq_memq(4)
                            zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg11)
                            zmm0 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg18), zmm2)
                            zmm2 = _mm256_add_epi64(zmm4, zmm2)
                            int64_t k1_75 = _kshiftri_mask8(k3_10, 4)
                            zmm4[0].o = zx.o(0)
                            int64_t k4_6
                            uint32_t temp0_659[0x4]
                            temp0_659, k4_6 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k3_10), *(arg4 + zmm2[0].q))
                            zmm4[0].o = temp0_659
                            zmm2[0].o = zx.o(0)
                            int64_t k1_76
                            uint32_t temp0_660[0x4]
                            temp0_660, k1_76 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k1_75, *(arg4 + zmm0[0].q))
                            zmm2[0].o = temp0_660
                            zmm0 = _mm256_inserti128_si256(zmm4, zmm2[0].o, 1)
                            zmm2 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm4 = _mm256_srli_epi32(zmm0, 0xa)
                            zmm5 = _mm256_srli_epi32(zmm0, 5)
                            arg17 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x7f0000)
                            zmm24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                            zmm5 = _mm256_mask_and_epi32(arg5, zmm5, arg17)
                                | _mm256_mask_and_epi32(arg5, zmm2, zmm24)
                            arg7 = __vpbroadcastd_ymmqq_memd(0x380)
                            arg8 = __vpbroadcastd_ymmqq_memd(0x3d80)
                            zmm2 = zmm5 | _mm256_add_epi32(zmm2 & arg7, arg8)
                            zmm5 = _mm256_mask_and_epi32(arg5, _mm256_slli_epi32(zmm0, 6), arg17)
                            arg17 = _mm256_mask_and_epi32(arg5, zmm4, zmm24)
                            zmm24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            zmm5 = _mm256_mask_or_epi32(arg5, zmm5, arg17)
                            zmm4 = _mm256_add_epi32(zmm4 & arg7, arg8)
                            arg17 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c0)
                            zmm4 |= zmm5
                            zmm5 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_slli_epi32(zmm0, 0x11), 0x7e0000)
                            zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x200)
                            arg17 =
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg17, 0x1ec0)
                            zmm0 = zmm5 | _mm256_mask_or_epi32(arg5, zmm0, arg17)
                            var_4a0.32 = _mm256_mask_storeu_ps(k3_10, zmm2)
                            zmm2 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, 
                                        zmm2, 0x3f800000), 
                                    zmm4, zmm4), 
                                zmm0, zmm0)
                            zmm2 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm2, 1), zmm2)
                            var_480.32 = _mm256_mask_storeu_ps(k3_10, zmm4)
                            var_460.32 = _mm256_mask_storeu_ps(k3_10, zmm0)
                            var_440.32 = _mm256_mask_storeu_ps(k3_10, zmm2)
                        
                        int64_t k2_17 = _mm256_cmp_epi32_mask(
                            _kxor_mask8(k2_16, 
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 5)), 
                            arg22, arg16, 4)
                        _kortest_mask8_u8(k2_17, k2_17)
                        
                        if (not(z_1))
                            uint64_t k3_11 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_17, zmm27, 4)
                            _kortest_mask8_u8(k3_11, k3_11)
                            
                            if (not(z_1))
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                                zmm2 = __vpbroadcastq_ymmqq_memq(4)
                                zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg11)
                                zmm0 =
                                    _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg18), zmm2)
                                zmm2 = _mm256_add_epi64(zmm4, zmm2)
                                int64_t k1_80 = _kshiftri_mask8(k3_11, 4)
                                zmm4[0].o = zx.o(0)
                                int64_t k4_8
                                uint32_t temp0_699[0x4]
                                temp0_699, k4_8 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k3_11), *(arg4 + zmm2[0].q))
                                zmm4[0].o = temp0_699
                                zmm2[0].o = zx.o(0)
                                int64_t k1_81
                                uint32_t temp0_700[0x4]
                                temp0_700, k1_81 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                    k1_80, *(arg4 + zmm0[0].q))
                                zmm2[0].o = temp0_700
                                zmm0 = _mm256_inserti128_si256(zmm4, zmm2[0].o, 1)
                                zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                                zmm4 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff)
                                zmm0 = _mm256_srli_epi32(zmm0, 0x15)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                zmm0 = _mm256_add_epi32(zmm0, zmm5)
                                arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                                zmm0 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(zmm0), arg17)
                                zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, zmm5))
                                zmm4 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm4, 
                                    0xfffffe01)
                                zmm2 = _mm256_mask_div_ps(arg5, zmm2, arg17)
                                zmm4 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(zmm4), 0x43ff8000)
                                var_4a0.32 = _mm256_mask_storeu_ps(k3_11, zmm0)
                                zmm0 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, 
                                            arg5, zmm0, 0x3f800000), 
                                        zmm2, zmm2), 
                                    zmm4, zmm4)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg19, zmm0, 1), zmm0)
                                var_480.32 = _mm256_mask_storeu_ps(k3_11, zmm2)
                                var_460.32 = _mm256_mask_storeu_ps(k3_11, zmm4)
                                var_440.32 = _mm256_mask_storeu_ps(k3_11, zmm0)
                            
                            int64_t k1_83 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k2_17, zmm27, 4, 4)
                            _kortest_mask8_u8(k1_83, k1_83)
                            
                            if (not(z_1))
                                int64_t k2_18 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                    k2_17, zmm27, 6)
                                _kortest_mask8_u8(k2_18, k2_18)
                                
                                if (not(z_1))
                                    var_4a0.32 = _mm256_mask_storeu_ps(k2_18, arg19)
                                    var_480.32 = _mm256_mask_storeu_ps(k2_18, arg19)
                                    var_460.32 = _mm256_mask_storeu_ps(k2_18, arg19)
                                    var_440.32 =
                                        _mm256_mask_storeu_ps(k2_18, _mm256_broadcast_ss(1f))
                                
                                int64_t k1_84 =
                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_83, 
                                    zmm27, 6, 4)
                                _kortest_mask8_u8(k1_84, k1_84)
                                
                                if (not(z_1))
                                    var_4a0.32 = _mm256_mask_storeu_ps(k1_84, arg19)
                                    var_480.32 = _mm256_mask_storeu_ps(k1_84, arg19)
                                    var_460.32 = _mm256_mask_storeu_ps(k1_84, arg19)
                                    var_440.32 =
                                        _mm256_mask_storeu_ps(k1_84, _mm256_broadcast_ss(1f))
            
            int64_t k2_19 =
                _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg10, arg9, 4), arg22, arg16, 4)
            _kortest_mask8_u8(k2_19, k2_19)
            
            if (not(z_1))
                zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg9, var_780)
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                arg18 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
                arg9 = _mm256_cvtepi32_epi64(zmm0[0].o)
                int64_t k3_12 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_19, zmm27, 2)
                _kortest_mask8_u8(k3_12, k3_12)
                float var_3c0[0x8]
                int32_t var_3a0[0x8]
                float var_380[0x8]
                float var_360[0x8]
                
                if (not(z_1))
                    zmm0 = _mm256_add_epi64(arg9, arg13)
                    zmm2 = _mm256_mask_add_epi64(arg5, arg18, arg14)
                    arg17 = _mm256_mask_add_epi64(arg5, zmm2, zmm1)
                    arg11 = _mm256_mask_add_epi64(arg5, zmm0, zmm20)
                    zmm5 = _mm256_mask_slli_epi32(arg5, zmm25, 0x1f)
                    int64_t k1_86 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_12, arg19, zmm5)
                    zmm24 = _mm256_mask_mov_epi64(arg5, zmm1)
                    _kortest_mask8_u8(k1_86, k1_86)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(2)
                        arg11 = _mm256_mask_add_epi64(k1_86, arg11, zmm0)
                        int64_t k4_9 = _kshiftri_mask8(k1_86, 4)
                        arg17 = _mm256_mask_add_epi64(k4_9, arg17, zmm0)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                        zmm2 = _mm256_add_epi64(arg6, arg13)
                        zmm4 = __vpbroadcastq_ymmqq_memq(4)
                        zmm2 = _mm256_add_epi64(zmm2, arg9)
                        zmm0 = _mm256_mask_add_epi64(k4_9, 
                            _mm256_mask_add_epi64(arg5, zmm0, arg18), zmm4)
                        zmm2 = _mm256_mask_add_epi64(k1_86, zmm2, zmm4)
                        int64_t r8_2 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rcx_94 = zmm2[0].q
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        int64_t r14_4 = zmm2[0].q
                        int64_t rbx_5 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        int64_t rdi_9 = zmm0[0].q
                        int64_t rsi_7 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        int64_t rax_26 = zmm0[0].q
                        int64_t rdx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm0[0].o = zx.o(*(arg4 + rcx_94))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_2), 1)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_4), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_5), 3)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_9), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_7), 5)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rax_26), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_54), 7)
                        zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                        arg10 = _mm256_cvtepi32_ps(zmm0)
                    
                    int128_t var_3e0
                    zmm1[0].o = var_3e0
                    int128_t var_4f0
                    zmm0[0].o = var_4f0
                    int64_t k4_10 = _mm256_mask_test_epi32_mask(k3_12, zmm25, arg15)
                    _kortest_mask8_u8(k4_10, k4_10)
                    
                    if (not(z_1))
                        char temp0_792 = _cvtmask32_u32(k4_10)
                        
                        if ((temp0_792 & 1) == 0)
                            if ((temp0_792 & 2) != 0)
                                goto label_140159393
                            
                            goto label_14015bbb1
                        
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg11[0].q, 0)
                        
                        if ((temp0_792 & 2) != 0)
                        label_140159393:
                            int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_2, 1)
                            
                            if ((temp0_792 & 4) == 0)
                                goto label_14015bbbb
                            
                            goto label_1401593a8
                        
                    label_14015bbb1:
                        
                        if ((temp0_792 & 4) == 0)
                        label_14015bbbb:
                            
                            if ((temp0_792 & 8) != 0)
                                goto label_1401593c2
                            
                            goto label_14015bbc5
                        
                    label_1401593a8:
                        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_792 & 8) != 0)
                        label_1401593c2:
                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                            int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_4, 3)
                            
                            if ((temp0_792 & 0x10) == 0)
                                goto label_14015bbcf
                            
                            goto label_1401593e3
                        
                    label_14015bbc5:
                        
                        if ((temp0_792 & 0x10) != 0)
                        label_1401593e3:
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg17[0].o, 4)
                            
                            if ((temp0_792 & 0x20) != 0)
                            label_1401593f2:
                                uint64_t rax_6 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg17[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_6, 5)
                                
                                if ((temp0_792 & 0x40) == 0)
                                    goto label_14015bbe3
                                
                                goto label_140159408
                        else
                        label_14015bbcf:
                            
                            if ((temp0_792 & 0x20) != 0)
                                goto label_1401593f2
                        
                        int64_t k1_1
                        
                        if ((temp0_792 & 0x40) != 0)
                        label_140159408:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            k1_1 = _kshiftri_mask8(k4_10, 4)
                            z_1 = temp0_792 == 0
                            
                            if (temp0_792 s< 0)
                            label_140159430:
                                zmm2[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                                int64_t rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_8, 7)
                        else
                        label_14015bbe3:
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            k1_1 = _kshiftri_mask8(k4_10, 4)
                            z_1 = temp0_792 == 0
                            
                            if (temp0_792 s< 0)
                                goto label_140159430
                        
                        arg11 = _mm256_mask_add_epi64(k4_10, arg11, zmm0)
                        arg17 = _mm256_mask_add_epi64(k1_1, arg17, zmm0)
                        var_3e0 = zmm1[0].o
                        zmm0 = _mm256_cvtepu16_epi32(zmm1[0].o)
                        zmm2 = _mm256_cvtepi32_ps(zmm0)
                        zmm0[0].o = var_4f0
                    
                    zmm1 = _mm256_mask_mov_epi64(arg5, zmm24)
                    int64_t k4_11 = _mm256_movepi32_mask(zmm5)
                    zmm4 = _mm256_mask_and_epi32(arg5, zmm25, arg15)
                    zmm5 = _mm256_mask_and_epi32(arg5, zmm25, arg20)
                    int64_t k1_87 = _mm256_mask_test_epi32_mask(k3_12, zmm25, arg20)
                    _kortest_mask8_u8(k1_87, k1_87)
                    
                    if (not(z_1))
                        char temp0_801 = _cvtmask32_u32(k1_87)
                        
                        if ((temp0_801 & 1) == 0)
                            if ((temp0_801 & 2) != 0)
                                goto label_14015945b
                            
                            goto label_14015bc62
                        
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg11[0].q, 0)
                        
                        if ((temp0_801 & 2) != 0)
                        label_14015945b:
                            int64_t rax_10 = __vpextrq_gpr64q_xmmdq_immb(arg11[0].o, 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_10, 1)
                            zmm24 = _mm256_mask_mov_epi64(arg5, zmm1)
                            
                            if ((temp0_801 & 4) == 0)
                                goto label_14015bc72
                            
                            goto label_140159476
                        
                    label_14015bc62:
                        zmm24 = _mm256_mask_mov_epi64(arg5, zmm1)
                        
                        if ((temp0_801 & 4) == 0)
                        label_14015bc72:
                            
                            if ((temp0_801 & 8) != 0)
                                goto label_140159498
                            
                            goto label_14015bc7c
                        
                    label_140159476:
                        zmm1[0].o = zmm0[0].o
                        zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                        zmm0[0].o = zmm1[0].o
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                        
                        if ((temp0_801 & 8) != 0)
                        label_140159498:
                            zmm1[0].o = zmm0[0].o
                            zmm0[0].o = _mm256_extracti128_si256(arg11, 1)
                            int64_t rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = zmm1[0].o
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_12, 3)
                            
                            if ((temp0_801 & 0x10) == 0)
                                goto label_14015bc86
                            
                            goto label_1401594c1
                        
                    label_14015bc7c:
                        
                        if ((temp0_801 & 0x10) != 0)
                        label_1401594c1:
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *arg17[0].o, 4)
                            
                            if ((temp0_801 & 0x20) != 0)
                            label_1401594d0:
                                uint64_t rax_14 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg17[0].o, 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_14, 5)
                                
                                if ((temp0_801 & 0x40) == 0)
                                    goto label_14015bc9a
                                
                                goto label_1401594e6
                        else
                        label_14015bc86:
                            
                            if ((temp0_801 & 0x20) != 0)
                                goto label_1401594d0
                        
                        if ((temp0_801 & 0x40) != 0)
                        label_1401594e6:
                            zmm1[0].o = zmm0[0].o
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                            zmm0[0].o = zmm1[0].o
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                            zmm1 = _mm256_mask_mov_epi64(arg5, zmm24)
                            z_1 = temp0_801 == 0
                            
                            if (temp0_801 s< 0)
                            label_14015950d:
                                zmm24 = _mm256_mask_mov_epi64(arg5, zmm1)
                                zmm1[0].o = zmm0[0].o
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                                int64_t rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zmm1[0].o
                                zmm1 = _mm256_mask_mov_epi64(arg5, zmm24)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rax_16, 7)
                        else
                        label_14015bc9a:
                            zmm1 = _mm256_mask_mov_epi64(arg5, zmm24)
                            z_1 = temp0_801 == 0
                            
                            if (temp0_801 s< 0)
                                goto label_14015950d
                        
                        var_4f0 = zmm0[0].o
                        zmm0 = _mm256_cvtepi32_ps(_mm256_cvtepu16_epi32(zmm0[0].o))
                    
                    int64_t k1_88 = _mm256_mask_test_epi32_mask(arg5, zmm5, zmm5)
                    int64_t k5_6 = _mm256_mask_test_epi32_mask(arg5, zmm4, zmm4)
                    zmm4 = _mm256_broadcast_ss(-32767f)
                    zmm5 = _mm256_add_ps(arg10, zmm4)
                    arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 3.05185094e-05f)
                    zmm5 = _mm256_mask_mul_ps(k4_11, zmm5, arg17)
                    zmm2 = _mm256_mask_mul_ps(k5_6, _mm256_add_ps(zmm2, zmm4), arg17)
                    zmm0 = _mm256_mask_mul_ps(k1_88, _mm256_add_ps(zmm0, zmm4), arg17)
                    var_3c0 = _mm256_mask_storeu_ps(k3_12, zmm5)
                    zmm5 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm5, arg5, zmm5, 
                                0x3f800000), 
                            zmm2, zmm2), 
                        zmm0, zmm0)
                    zmm4 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm5, 2), zmm5)
                    var_3a0 = _mm256_mask_storeu_ps(k3_12, zmm2)
                    var_380 = _mm256_mask_storeu_ps(k3_12, zmm0)
                    var_360 = _mm256_mask_storeu_ps(k3_12, zmm4)
                
                _ktest_mask8_u8(k2_19, arg5)
                
                if (not(z_1))
                    uint64_t k3_13 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_19, zmm27, 1)
                    _kortest_mask8_u8(k3_13, k3_13)
                    
                    if (not(z_1))
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                        zmm2 = __vpbroadcastq_ymmqq_memq(4)
                        zmm4 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg9)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg18)
                        zmm5 = _mm256_add_epi64(zmm0, zmm2)
                        zmm2 = _mm256_add_epi64(zmm4, zmm2)
                        uint64_t k4_12 = _kshiftri_mask8(k3_13, 4)
                        arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                        int64_t k1_91
                        float temp0_830[0x4]
                        temp0_830, k1_91 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k3_13), *(arg4 + zmm2[0].q))
                        arg17[0].o = temp0_830
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        int64_t k1_93
                        float temp0_832[0x4]
                        temp0_832, k1_93 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k4_12), *(arg4 + zmm5[0].q))
                        zmm2[0].o = temp0_832
                        zmm5 = __vpbroadcastq_ymmqq_memq(8)
                        zmm24 = _mm256_mask_add_epi64(arg5, zmm0, zmm5)
                        zmm5 = _mm256_add_epi64(zmm4, zmm5)
                        arg7[0].o = zx.o(0)
                        int64_t k1_95
                        float temp0_836[0x4]
                        temp0_836, k1_95 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k3_13), *(arg4 + zmm5[0].q))
                        arg7[0].o = temp0_836
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_97
                        float temp0_838[0x4]
                        temp0_838, k1_97 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k4_12), *(arg4 + zmm24[0]))
                        zmm5[0].o = temp0_838
                        zmm24 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm24)
                        zmm4 = _mm256_mask_add_epi64(arg5, zmm4, zmm24)
                        zmm24[0].o = _mm_mask_xor_epi32(arg5, zmm24[0].o, zmm24[0].o)
                        int64_t k1_99
                        float temp0_843[0x4]
                        temp0_843, k1_99 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k3_13), *(arg4 + zmm4[0].q))
                        zmm24[0].o = temp0_843
                        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                        int64_t k4_13
                        float temp0_845[0x4]
                        temp0_845, k4_13 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_12, 
                            *(arg4 + zmm0[0].q))
                        zmm4[0].o = temp0_845
                        zmm0 = _mm256_insertf32x4(arg5, arg17, zmm2[0].o, 1)
                        zmm2 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        zmm4 = _mm256_insertf32x4(arg5, zmm24, zmm4[0].o, 1)
                        var_3c0 = _mm256_mask_storeu_ps(k3_13, zmm0)
                        zmm0 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                    zmm0, 0x3f800000), 
                                zmm2, zmm2), 
                            zmm4, zmm4)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, zmm0, 1), zmm0)
                        var_3a0 = _mm256_mask_storeu_ps(k3_13, zmm2)
                        var_380 = _mm256_mask_storeu_ps(k3_13, zmm4)
                        var_360 = _mm256_mask_storeu_ps(k3_13, zmm0)
                    
                    arg5 = _kxor_mask8(
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 1), arg5)
                    _ktest_mask8_u8(k2_19, arg5)
                    
                    if (not(z_1))
                        uint64_t k3_14 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_19, zmm27, 3)
                        _kortest_mask8_u8(k3_14, k3_14)
                        
                        if (not(z_1))
                            float var_5c0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_5e0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_600_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_660_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_680_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            float var_6a0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
                            int64_t k4_14 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm25, 0x1f)), 
                                zmm27, 3)
                            uint64_t k5_7 = _kand_mask8(k2_19, k4_14)
                            _kortest_mask8_u8(k5_7, k5_7)
                            uint32_t temp0_864 = _store_mask32(k7_1)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k6_6 = _kshiftri_mask8(k5_7, 4)
                                zmm2 = _mm256_mask_add_epi64(k6_6, zmm1, zmm0)
                                _mm256_mask_mov_epi64(arg5, zmm20)
                                zmm4 = _mm256_mask_add_epi64(k5_7, zmm20, zmm0)
                                uint64_t k1_103 = _kshiftri_mask8(k5_7, 4)
                                zmm0[0].o = zx.o(0)
                                int64_t k7_6
                                float temp0_869[0x4]
                                temp0_869, k7_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k5_7), *zmm20[0])
                                zmm0[0].o = temp0_869
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k7_8
                                float temp0_871[0x4]
                                temp0_871, k7_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k1_103), *zmm1[0].q)
                                zmm5[0].o = temp0_871
                                var_600_2 = _mm256_mask_storeu_ps(k4_14, 
                                    _mm256_insertf128_ps(zmm0, zmm5[0].o, 1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                                zmm20 = _mm256_mask_add_epi64(k5_7, zmm20, zmm0)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k5_8
                                float temp0_877[0x4]
                                temp0_877, k5_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_7, *zmm4[0].q)
                                zmm5[0].o = temp0_877
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                int64_t k1_104
                                float temp0_879[0x4]
                                temp0_879, k1_104 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_103, 
                                    *zmm2[0].q)
                                zmm4[0].o = temp0_879
                                zmm1 = _mm256_mask_add_epi64(k6_6, zmm1, zmm0)
                                var_6a0_2 = _mm256_mask_storeu_ps(k4_14, 
                                    _mm256_insertf128_ps(zmm5, zmm4[0].o, 1))
                            
                            int64_t k4_15 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 3)
                            int64_t k5_9 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_15, zmm25, 2)
                            uint64_t k7_9 = _kand_mask8(k2_19, k5_9)
                            _kortest_mask8_u8(k7_9, k7_9)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k1_105 = _kshiftri_mask8(k7_9, 4)
                                var_790.w = _store_mask16(k1_105)
                                zmm2 = _mm256_mask_add_epi64(k1_105, zmm1, zmm0)
                                _mm256_mask_mov_epi64(arg5, zmm20)
                                zmm4 = _mm256_mask_add_epi64(k7_9, zmm20, zmm0)
                                uint64_t k1_106 = _kshiftri_mask8(k7_9, 4)
                                zmm0[0].o = zx.o(0)
                                int64_t k6_8
                                float temp0_888[0x4]
                                temp0_888, k6_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k7_9), *zmm20[0])
                                zmm0[0].o = temp0_888
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k6_10
                                float temp0_890[0x4]
                                temp0_890, k6_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k1_106), *zmm1[0].q)
                                zmm5[0].o = temp0_890
                                var_5e0_2 = _mm256_mask_storeu_ps(k5_9, 
                                    _mm256_insertf128_ps(zmm0, zmm5[0].o, 1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                                zmm20 = _mm256_mask_add_epi64(k7_9, zmm20, zmm0)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k7_10
                                float temp0_896[0x4]
                                temp0_896, k7_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_9, *zmm4[0].q)
                                zmm5[0].o = temp0_896
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                int64_t k1_107
                                float temp0_898[0x4]
                                temp0_898, k1_107 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_106, 
                                    *zmm2[0].q)
                                zmm4[0].o = temp0_898
                                zmm1 = _mm256_mask_add_epi64(_load_mask16(var_790.w), zmm1, zmm0)
                                var_680_2 = _mm256_mask_storeu_ps(k5_9, 
                                    _mm256_insertf128_ps(zmm5, zmm4[0].o, 1))
                            
                            k7_1 = _load_mask32(temp0_864)
                            int64_t k4_16 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_15, zmm25, 4)
                            uint64_t k5_10 = _kand_mask8(k2_19, k4_16)
                            _kortest_mask8_u8(k5_10, k5_10)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                                uint64_t k1_109 = _kshiftri_mask8(k5_10, 4)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k6_12
                                float temp0_904[0x4]
                                temp0_904, k6_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k5_10), *zmm20[0])
                                zmm2[0].o = temp0_904
                                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                                int64_t k6_14
                                float temp0_906[0x4]
                                temp0_906, k6_14 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k1_109), *zmm1[0].q)
                                zmm4[0].o = temp0_906
                                zmm1 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_10, 4), zmm1, zmm0)
                                zmm20 = _mm256_mask_add_epi64(k5_10, zmm20, zmm0)
                                zmm0 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
                                var_5c0_2 = _mm256_mask_storeu_ps(k4_16, zmm0)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                int64_t k5_11
                                float temp0_912[0x4]
                                temp0_912, k5_11 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_10, *zmm20[0])
                                zmm0[0].o = temp0_912
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k1_110
                                float temp0_914[0x4]
                                temp0_914, k1_110 =
                                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_109, 
                                    *zmm1[0].q)
                                zmm2[0].o = temp0_914
                                var_660_2 = _mm256_mask_storeu_ps(k4_16, 
                                    _mm256_insertf128_ps(zmm0, zmm2[0].o, 1))
                            
                            zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                            zmm1 = __vpbroadcastq_ymmqq_memq(4)
                            zmm2 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg9)
                            zmm0 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg18), zmm1)
                            zmm1 = _mm256_add_epi64(zmm2, zmm1)
                            int64_t k1_111 = _kshiftri_mask8(k3_14, 4)
                            zmm2[0].o = zx.o(0)
                            int64_t k4_18
                            uint32_t temp0_924[0x4]
                            temp0_924, k4_18 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k3_14), *(arg4 + zmm1[0].q))
                            zmm2[0].o = temp0_924
                            zmm1[0].o = zx.o(0)
                            int64_t k1_112
                            uint32_t temp0_925[0x4]
                            temp0_925, k1_112 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                k1_111, *(arg4 + zmm0[0].q))
                            zmm1[0].o = temp0_925
                            zmm0 = _mm256_inserti128_si256(zmm2, zmm1[0].o, 1)
                            zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                            zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff)
                            zmm0 = _mm256_srli_epi32(zmm0, 0x15)
                            zmm4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            zmm0 = _mm256_add_epi32(zmm0, zmm4)
                            zmm5 = _mm256_broadcast_ss(1023f)
                            zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm5)
                            arg17 = _mm256_mask_load_ps(arg5, var_6a0_2)
                            zmm20 = _mm256_mask_load_ps(arg5, var_680_2)
                            zmm24 = _mm256_mask_load_ps(arg5, var_660_2)
                            arg17 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg17, arg5, 
                                zmm0, var_600_2)
                            zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_div_ps(_mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, zmm4)), 
                                    zmm5), 
                                arg5, zmm20, var_5e0_2)
                            zmm1 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, zmm24, var_5c0_2)
                            var_3c0 = _mm256_mask_storeu_ps(k3_14, arg17)
                            arg17 = _mm256_mask3_fnmadd_ps(
                                _mm256_mask3_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg17, 
                                        arg5, arg17, 0x3f800000), 
                                    arg5, zmm0, zmm0), 
                                arg5, zmm1, zmm1)
                            zmm2 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg19, arg17, 1), 
                                arg17)
                            var_3a0 = _mm256_mask_storeu_ps(k3_14, zmm0)
                            var_380 = _mm256_mask_storeu_ps(k3_14, zmm1)
                            var_360 = _mm256_mask_storeu_ps(k3_14, zmm2)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 3))
                        _ktest_mask8_u8(k2_19, arg5)
                        
                        if (not(z_1))
                            uint64_t k3_15 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_19, zmm27, 5)
                            _kortest_mask8_u8(k3_15, k3_15)
                            
                            if (not(z_1))
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                                zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                zmm2 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg9)
                                zmm0 =
                                    _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, arg18), zmm1)
                                zmm1 = _mm256_add_epi64(zmm2, zmm1)
                                int64_t k1_115 = _kshiftri_mask8(k3_15, 4)
                                zmm2[0].o = zx.o(0)
                                int64_t k4_20
                                uint32_t temp0_963[0x4]
                                temp0_963, k4_20 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                    __kmovq_maskmskw_masku64_avx512(k3_15), *(arg4 + zmm1[0].q))
                                zmm2[0].o = temp0_963
                                zmm1[0].o = zx.o(0)
                                int64_t k1_116
                                uint32_t temp0_964[0x4]
                                temp0_964, k1_116 =
                                    __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_115, 
                                    *(arg4 + zmm0[0].q))
                                zmm1[0].o = temp0_964
                                zmm0 = _mm256_inserti128_si256(zmm2, zmm1[0].o, 1)
                                zmm1 = _mm256_srli_epi32(zmm0, 0x15)
                                zmm2 = _mm256_srli_epi32(zmm0, 0xa)
                                zmm4 = _mm256_srli_epi32(zmm0, 5)
                                zmm5 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                arg17 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                                zmm4 = _mm256_mask_or_epi32(arg5, zmm4 & zmm5, 
                                    _mm256_mask_and_epi32(arg5, zmm1, arg17))
                                zmm20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                                zmm1 = _mm256_mask_and_epi32(arg5, zmm1, zmm20)
                                zmm24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                                zmm1 = zmm4 | _mm256_mask_add_epi32(arg5, zmm1, zmm24)
                                zmm4 = (_mm256_slli_epi32(zmm0, 6) & zmm5)
                                    | _mm256_mask_and_epi32(arg5, zmm2, arg17)
                                zmm2 = _mm256_mask_add_epi32(arg5, 
                                    _mm256_mask_and_epi32(arg5, zmm2, zmm20), zmm24)
                                zmm5 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x1c0)
                                zmm2 |= zmm4
                                zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_slli_epi32(zmm0, 0x11), 0x7e0000) |
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x200) |
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 
                                    0x1ec0)
                                var_3c0 = _mm256_mask_storeu_ps(k3_15, zmm1)
                                zmm1 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, 
                                            arg5, zmm1, 0x3f800000), 
                                        zmm2, zmm2), 
                                    zmm0, zmm0)
                                zmm1 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg19, zmm1, 1), zmm1)
                                var_3a0 = _mm256_mask_storeu_ps(k3_15, zmm2)
                                var_380 = _mm256_mask_storeu_ps(k3_15, zmm0)
                                var_360 = _mm256_mask_storeu_ps(k3_15, zmm1)
                            
                            arg5 = _kxor_mask8(arg5, 
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm27, 5))
                            int64_t k3_16 = _kand_mask8(k2_19, arg5)
                            _kortest_mask8_u8(k3_16, k3_16)
                            
                            if (not(z_1))
                                uint64_t k4_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                    k3_16, zmm27, 4)
                                _kortest_mask8_u8(k4_21, k4_21)
                                
                                if (not(z_1))
                                    zmm0 = _mm256_mask_add_epi64(arg5, zmm30, arg14)
                                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                                    zmm2 = _mm256_add_epi64(_mm256_add_epi64(arg6, arg13), arg9)
                                    zmm0 = _mm256_add_epi64(
                                        _mm256_mask_add_epi64(arg5, zmm0, arg18), zmm1)
                                    zmm1 = _mm256_add_epi64(zmm2, zmm1)
                                    int64_t k1_119 = _kshiftri_mask8(k4_21, 4)
                                    zmm2[0].o = zx.o(0)
                                    int64_t k5_13
                                    uint32_t temp0_1001[0x4]
                                    temp0_1001, k5_13 =
                                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                                        __kmovq_maskmskw_masku64_avx512(k4_21), *(arg4 + zmm1[0].q))
                                    zmm2[0].o = temp0_1001
                                    zmm1[0].o = zx.o(0)
                                    int64_t k1_120
                                    uint32_t temp0_1002[0x4]
                                    temp0_1002, k1_120 =
                                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_119, 
                                        *(arg4 + zmm0[0].q))
                                    zmm1[0].o = temp0_1002
                                    zmm0 = _mm256_inserti128_si256(zmm2, zmm1[0].o, 1)
                                    zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                                    zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        zmm0, 0x3ff)
                                    zmm0 = _mm256_srli_epi32(zmm0, 0x15)
                                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    zmm0 = _mm256_add_epi32(zmm0, arg6)
                                    zmm4 = _mm256_broadcast_ss(1023f)
                                    zmm0 = _mm256_div_ps(_mm256_cvtepi32_ps(zmm0), zmm4)
                                    zmm1 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                                    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                        zmm2, 0xfffffe01)
                                    zmm1 = _mm256_div_ps(zmm1, zmm4)
                                    zmm2 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                        _mm256_cvtepi32_ps(zmm2), 0x43ff8000)
                                    var_3c0 = _mm256_mask_storeu_ps(k4_21, zmm0)
                                    zmm0 = _mm256_fnmadd_ps(
                                        _mm256_fnmadd_ps(
                                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                                zmm0, arg5, zmm0, 0x3f800000), 
                                            zmm1, zmm1), 
                                        zmm2, zmm2)
                                    zmm0 = _mm256_mask_sqrt_ps(
                                        _mm256_cmp_ps_mask(arg5, arg19, zmm0, 1), zmm0)
                                    var_3a0 = _mm256_mask_storeu_ps(k4_21, zmm1)
                                    var_380 = _mm256_mask_storeu_ps(k4_21, zmm2)
                                    var_360 = _mm256_mask_storeu_ps(k4_21, zmm0)
                                
                                int64_t k1_122 =
                                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k3_16, 
                                    zmm27, 4, 4)
                                _kortest_mask8_u8(k1_122, k1_122)
                                
                                if (not(z_1))
                                    int64_t k3_17 =
                                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, 
                                        zmm27, 6)
                                    _kortest_mask8_u8(k3_17, k3_17)
                                    
                                    if (not(z_1))
                                        var_3c0 = _mm256_mask_storeu_ps(k3_17, arg19)
                                        var_3a0 = _mm256_mask_storeu_ps(k3_17, arg19)
                                        var_380 = _mm256_mask_storeu_ps(k3_17, arg19)
                                        var_360 =
                                            _mm256_mask_storeu_ps(k3_17, _mm256_broadcast_ss(1f))
                                    
                                    int64_t k1_123 =
                                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                        k1_122, zmm27, 6, 4)
                                    _kortest_mask8_u8(k1_123, k1_123)
                                    
                                    if (not(z_1))
                                        var_3c0 = _mm256_mask_storeu_ps(k1_123, arg19)
                                        var_3a0 = _mm256_mask_storeu_ps(k1_123, arg19)
                                        var_380 = _mm256_mask_storeu_ps(k1_123, arg19)
                                        var_360 =
                                            _mm256_mask_storeu_ps(k1_123, _mm256_broadcast_ss(1f))
                
                zmm0 = var_4a0.32
                zmm1 = var_480.32
                zmm2 = var_460.32
                arg6 = var_440.32
                arg17 = _mm256_mask_load_ps(arg5, var_380)
                arg18 = _mm256_mask_load_ps(arg5, var_360)
                int64_t k1_124 = _mm256_cmp_ps_mask(arg5, arg19, 
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(
                            _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, zmm1, var_3a0), arg5, 
                                zmm0, var_3c0), 
                            arg5, zmm2, arg17), 
                        arg5, arg6, arg18), 
                    6)
                zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f)
                _mm256_mask_mov_ps(arg5, zmm20)
                zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k1_124, -1f)
                zmm20 = _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, zmm20, arg25), zmm24)
                zmm0 = _mm256_mask_mul_ps(arg5, zmm20, zmm0)
                zmm1 = _mm256_mask_mul_ps(arg5, zmm20, zmm1)
                zmm2 = _mm256_mask_mul_ps(arg5, zmm20, zmm2)
                arg6 = _mm256_mask_mul_ps(arg5, zmm20, arg6)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg25, var_3c0)
                zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg25, var_3a0)
                zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, arg25, arg17)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg25, arg18)
                var_4a0.32 = _mm256_mask_storeu_ps(k2_19, zmm0)
                var_480.32 = _mm256_mask_storeu_ps(k2_19, zmm1)
                var_460.32 = _mm256_mask_storeu_ps(k2_19, zmm2)
                var_440.32 = _mm256_mask_storeu_ps(k2_19, arg6)
                zmm24[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
            
            zmm0 = var_4a0.32
            zmm1 = var_480.32
            zmm2 = var_460.32
            arg6 = var_440.32
            zmm4 = _mm256_mul_ps(zmm2, zmm2)
            zmm5 = _mm256_mul_ps(arg6, arg6)
            zmm4 =
                _mm256_add_ps(_mm256_fmadd_ps(zmm4, zmm0, zmm0), _mm256_fmadd_ps(zmm5, zmm1, zmm1))
            zmm5 = _mm256_mask_mov_ps(
                _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), zmm4, 2), arg16)
            arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
            arg18 = _mm256_mask_mul_ps(arg5, zmm4, arg17)
            zmm4 = _mm256_mask_rsqrt14_ps(arg5, zmm4)
            zmm20 = _mm256_mask3_fmadd_ps(
                _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, zmm4, zmm4), arg5, arg18, arg17), 
                arg5, zmm4, zmm4)
            zmm4 = _mm256_mask3_fmadd_ps(
                _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, zmm20, zmm20), arg5, arg18, arg17), 
                arg5, zmm20, zmm20)
            zmm0 = _mm256_mul_ps(zmm4, zmm0)
            zmm1 = _mm256_mul_ps(zmm4, zmm1)
            zmm2 = _mm256_mul_ps(zmm4, zmm2)
            arg6 = _mm256_mul_ps(zmm4, arg6)
            zmm0 = _mm256_and_ps(zmm0, zmm5)
            zmm1 = _mm256_and_ps(zmm1, zmm5)
            zmm2 = _mm256_and_ps(zmm2, zmm5)
            arg6 = _mm256_and_ps(arg6, zmm5)
            zmm4 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0x3f800000)
            arg6 = _mm256_or_ps(arg6, zmm4)
            var_4a0.32 = _mm256_mask_storeu_ps(k7_1, zmm0)
            var_480.32 = _mm256_mask_storeu_ps(k7_1, zmm1)
            var_460.32 = _mm256_mask_storeu_ps(k7_1, zmm2)
            var_440.32 = _mm256_mask_storeu_ps(k7_1, arg6)
            arg13 = arg12
            arg12 = var_620
        
        int64_t k1_126 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg22, arg16)
        _kortest_mask8_u8(k1_126, k1_126)
        
        if (not(z_1))
            var_4a0.32 = _mm256_mask_storeu_ps(k1_126, arg19)
            var_480.32 = _mm256_mask_storeu_ps(k1_126, arg19)
            var_460.32 = _mm256_mask_storeu_ps(k1_126, arg19)
            zmm0 = _mm256_broadcast_ss(1f)
            var_440.32 = _mm256_mask_storeu_ps(k1_126, zmm0)
        
        zmm0[0].o = var_4a0
        uint64_t var_490[0x2]
        arg17[0].o = _mm_mask_load_epi64(arg5, var_490)
        zmm4[0].o = var_480
        int128_t var_470
        zmm5[0].o = var_470
        arg7[0].o = var_460
        int128_t var_450
        arg8[0].o = var_450
        zmm1[0].o = var_440
        int128_t var_430
        arg6[0].o = var_430
        zmm2[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm1[0].o)
        arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        int128_t var_280 = zmm4[0].o
        zmm2[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm2[0].o)
        int128_t var_270_1 = zmm2[0].o
        zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_260_1 = zmm2[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
        zmm1[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
        zmm2[0].o = _mm_mask_unpacklo_epi32(arg5, arg17[0].o, zmm5[0].o)
        arg6[0].o = _mm_mask_unpackhi_epi32(arg5, arg17[0].o, zmm5[0].o)
        zmm4[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_240_1 = zmm4[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_230_1 = zmm0[0].o
        zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_220_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
        int128_t var_210_1 = zmm0[0].o
        uint64_t rcx_101
        int64_t rdi_12
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = rdi_12 & rol.q(-2, rcx_101.b))
            uint64_t rax_43 = _tzcnt_u64(i_1)
            int256_t var_2a0 = _mm256_mask_store_epi64(arg5, arg21)
            rdi_12 = i_1 & not.q(1 << (rax_43 u% 0x40))
            zmm0[0].o = (&var_280)[rax_43]
            r10[sx.q(*(&var_2a0 + ((zx.q(rax_43.d) & 7) << 2))) * 3] = zmm0[0].o
            rcx_101 = _tzcnt_u64(rdi_12)
            zmm0[0].o = (&var_280)[rcx_101]
            r10[sx.q(*(&var_2a0 + ((zx.q(rcx_101.d) & 7) << 2))) * 3] = zmm0[0].o
        
        r11 += 8
        z_1 = r11 == rdx_4
    while (r11 i- rdx_4 s< 0 != add_overflow(r11, neg.d(rdx_4)))
    
    result = zx.q(arg31)
    
    if (r11 s< result.d)
        goto label_14015c8c9
arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return result
