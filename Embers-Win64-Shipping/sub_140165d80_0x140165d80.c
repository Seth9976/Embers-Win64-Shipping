// 函数: sub_140165d80
// 地址: 0x140165d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_640[0x4]
void* rbp = &var_640[1]
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
uint64_t zmm2[0x4]
zmm2[0].o = arg29
uint16_t* r10 = arg27
int32_t rcx_4 = ((arg31 s>> 0x1f u>> 0x1d) + arg31) & 0xfffffff8
uint64_t result
float var_6c0[0x8]
float var_6a0[0x8]
uint32_t r14
float zmm0[0x8]
float zmm1[0x8]
uint64_t zmm5[0x4]
uint64_t zmm17[0x4]
uint64_t zmm18[0x4]
uint64_t zmm19[0x4]
uint64_t zmm20[0x4]
int32_t zmm25[0x8]
uint64_t zmm26[0x4]
uint64_t zmm28[0x4]
bool z_1

if (rcx_4 s<= 0)
    r14 = 0
    result = zx.q(arg31)
    z_1 = 0 == result.d
    
    if (0 - result.d s< 0 != add_overflow(0, neg.d(result.d)))
    label_14016901b:
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
            uint64_t r9 = zx.q(zmm5[0].d)
            uint64_t r10_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
            uint64_t r11_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2))
            uint64_t r14_1 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
            zmm5[0].o = _mm256_extracti128_si256(zmm5, 1)
            uint64_t rcx_25 = zx.q(zmm5[0].d)
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
            zmm25 = __vpandq_ymmu64_maskmskw_ymmu64_memu64_avx512(arg5, arg18, data_143442840)
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
            arg22 = _mm256_mask_madd_epi16(arg5, zmm5, zmm19)
            arg13 = _mm256_mullo_epi32(arg7, zmm2)
            zmm20 = _mm256_mask_add_epi64(arg5, zmm1, zmm18)
            zmm19 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
            int64_t k3_42 = _mm256_cmp_epu32_mask(k7_13, zmm25, arg6, 6)
            _kortest_mask8_u8(k3_42, k3_42)
            
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
                    label_14016937d:
                        int64_t k1_65 =
                            __vpcmpud_maskmskw_maskmskw_ymmu32_memu32_imm8_avx512(arg5, zmm25, 2, 1)
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
                            arg25 =
                                _mm256_mask_add_epi32(arg5, zmm25, _mm256_cmpeq_epi32(zmm2, zmm2))
                            arg6[0].o f- 1f
                            z_1 = arg6[0] == 1f
                            
                            if (not(arg6[0] < 1f))
                                int64_t k1_70 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                    arg5, arg19[0].o, data_142fc92e0)
                                arg20 = _mm256_mask_blend_epi32(k1_70, arg25, arg20)
                                arg25 = _mm256_mask_mov_epi32(k1_70, arg21)
                            else
                                zmm1[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                                zmm1 = _mm256_cvtepu32_epi64(zmm1[0].o)
                                zmm2 = _mm256_mask_cvtepu32_epi64(arg5, arg22[0].o)
                                zmm0[0].o = arg6[0].o
                                arg6 = _mm256_mask_mullo_epi32(arg5, arg13, zmm25)
                                arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                uint64_t temp0_1047[0x4] = _mm256_mask_add_epi64(arg5, zmm19, zmm2)
                                zmm5 = __vpbroadcastq_ymmqq_memq(3)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm20, zmm1)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                zmm2 = _mm256_add_epi64(arg6, _mm256_add_epi64(temp0_1047, zmm5))
                                zmm1 = _mm256_add_epi64(arg7, _mm256_add_epi64(zmm1, zmm5))
                                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                                uint64_t temp0_1057[0x4] = _mm256_mask_and_epi64(arg5, zmm1, arg6)
                                uint64_t temp0_1058[0x4] = _mm256_mask_and_epi64(arg5, zmm2, arg6)
                                char temp0_1059 = _cvtmask32_u32(arg5)
                                uint32_t rdi_15 = arg28 - 2
                                float temp0_1060[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
                                zmm2 = _mm256_mask_cvtepi32_ps(arg5, arg25)
                                float temp0_1062[0x8] = _mm256_mul_ps(temp0_1060, zmm2)
                                zmm2[0].o = arg23[0].o
                                zmm2[0].d = float.s(arg28 - 1)
                                zmm0[0].o = zmm2[0].o f* zmm0[0]
                                int64_t var_4d0
                                var_4d0.o = zmm0[0].o
                                int32_t rax_127 = int.d(zmm0[0])
                                int32_t rcx_27 = rax_127 s>> 0x1f
                                rax_125 = zx.q(rax_127) & zx.q(not.d(rcx_27))
                                
                                if (rdi_15 s> rax_125.d)
                                    rdi_15 = rax_125.d
                                
                                zmm1 = _mm256_cvttps_epi32(temp0_1062)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                zmm1 = _mm256_max_epi32(zmm1, zmm2)
                                var_6a0 = _mm256_mask_store_epi64(arg5, arg25)
                                int32_t temp0_1067[0x8] = _mm256_mask_min_epi32(arg5, zmm1, arg25)
                                uint32_t var_5a0_2[0x8] = arg13
                                var_6c0[0].o = arg9[0].o
                                
                                if (arg28 s< 0x100)
                                    zmm1 = _mm256_mask_cvtepi32_epi64(arg5, temp0_1067[0].o)
                                    uint64_t temp0_1124[0x4] =
                                        _mm256_mask_add_epi64(arg5, temp0_1058, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_140169ba8
                                        
                                        goto label_140169802
                                    
                                    rax_125 = temp0_1124[0]
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_140169ba8:
                                        rax_125 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_1124[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, temp0_1067, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_140169812
                                        
                                        goto label_140169bc0
                                    
                                label_140169802:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, temp0_1067, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_140169812:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_140169be1
                                        
                                        goto label_140169820
                                    
                                label_140169bc0:
                                    arg7[0].o = _mm256_extracti128_si256(temp0_1124, 1)
                                    rax_125 = zx.q(*arg7[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_125.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_140169be1:
                                        temp0_1124[0].o = _mm256_extracti128_si256(temp0_1124, 1)
                                        rax_125 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_1124[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_1057, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14016982f
                                        
                                        goto label_140169c09
                                    
                                label_140169820:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_1057, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140169c09:
                                        rax_125 = zx.q(*zmm2[0])
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_140169c20:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_140169841
                                            
                                            goto label_140169c31
                                    else
                                    label_14016982f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_140169c20
                                    
                                    int32_t var_320
                                    bool cond:9_1
                                    bool cond:11_1
                                    bool cond:12_1
                                    bool cond:17_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_140169c31:
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
                                        label_140169c55:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 7)
                                    else
                                    label_140169841:
                                        cond:9_1 = temp0_1059 == 0
                                        cond:11_1 = temp0_1059 == 0
                                        cond:12_1 = temp0_1059 == 0
                                        cond:17_1 = temp0_1059 == 0
                                        var_320.32 = arg12
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_140169c55
                                    
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
                                    arg13 = _mm256_mask_mov_epi64(k0_20, temp0_1067)
                                    
                                    if (not(cond:9_1))
                                        arg16 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_34, temp0_1067, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg23 = _mm256_mask_sub_epi32(k0_20, temp0_1067, arg12)
                                        int64_t k0_21 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_34, zmm25, arg23)
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
                                            _mm256_mask_mov_epi64(k0_20, temp0_1067)
                                            bool cond:30_1
                                            
                                            do
                                                zmm1 = _mm256_mask_mov_epi64(k0_20, arg23)
                                                arg13 = _mm256_mask_add_epi64(k0_20, temp0_1058, 
                                                    _mm256_mask_cvtepi32_epi64(k0_20, zmm1[0].o))
                                                int64_t k0_22 = _mm_mask_test_epi16_mask(k0_20, 
                                                    zmm5[0].o, arg17[0].o)
                                                char temp0_1159 = _cvtmask32_u32(k0_22)
                                                
                                                if ((temp0_1159 & 1) == 0)
                                                    if ((temp0_1159 & 2) != 0)
                                                        goto label_140169900
                                                    
                                                    goto label_140169a03
                                                
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_1159 & 2) != 0)
                                                label_140169900:
                                                    uint16_t rax_140[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_140, 1)
                                                    zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                    
                                                    if ((temp0_1159 & 4) == 0)
                                                        goto label_140169a13
                                                    
                                                    goto label_140169918
                                                
                                            label_140169a03:
                                                zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                                
                                                if ((temp0_1159 & 4) == 0)
                                                label_140169a13:
                                                    zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                    
                                                    if ((temp0_1159 & 8) != 0)
                                                        goto label_14016993a
                                                    
                                                    goto label_140169a22
                                                
                                            label_140169918:
                                                arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg8[0].q), 2)
                                                zmm5 = _mm256_cvtepi32_epi64(zmm5[0].o)
                                                
                                                if ((temp0_1159 & 8) != 0)
                                                label_14016993a:
                                                    arg8[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_144[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg8[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_144, 3)
                                                    arg13 = _mm256_mask_add_epi64(k0_22, 
                                                        temp0_1057, zmm5)
                                                    
                                                    if ((temp0_1159 & 0x10) == 0)
                                                        goto label_140169a32
                                                    
                                                    goto label_140169966
                                                
                                            label_140169a22:
                                                arg13 =
                                                    _mm256_mask_add_epi64(k0_22, temp0_1057, zmm5)
                                                
                                                if ((temp0_1159 & 0x10) == 0)
                                                label_140169a32:
                                                    
                                                    if ((temp0_1159 & 0x20) != 0)
                                                        goto label_14016997b
                                                    
                                                    goto label_140169a3c
                                                
                                            label_140169966:
                                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                    arg9[0].o, zx.d(*arg13[0].q), 4)
                                                
                                                if ((temp0_1159 & 0x20) != 0)
                                                label_14016997b:
                                                    uint16_t rax_148[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, rax_148, 5)
                                                    
                                                    if ((temp0_1159 & 0x40) == 0)
                                                        goto label_140169a46
                                                    
                                                    goto label_14016998d
                                                
                                            label_140169a3c:
                                                
                                                if ((temp0_1159 & 0x40) != 0)
                                                label_14016998d:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                        arg9[0].o, zx.d(*zmm5[0]), 6)
                                                    
                                                    if (temp0_1159 s< 0)
                                                    label_1401699a9:
                                                        zmm5[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint16_t rax_152[0x2] = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 
                                                            1))
                                                        arg9[0].o =
                                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                            arg9[0].o, rax_152, 7)
                                                else
                                                label_140169a46:
                                                    
                                                    if (temp0_1159 s< 0)
                                                        goto label_1401699a9
                                                
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
                                                        k0_23, zmm25, arg23), 
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
                                    int64_t k0_26 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, 
                                        arg6[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_26, k0_26)
                                    
                                    if (not(cond:11_1))
                                        arg7 = _mm256_mask_mov_epi32(k4_34, arg13)
                                        arg14[0].o = zx.o(0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        arg16 = _mm256_mask_add_epi32(k0_26, temp0_1067, arg12)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_26, arg16, arg14), 
                                            zmm1[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_26, arg9[0].o, arg19[0].o)
                                        k0_26 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_26, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_26, k0_26)
                                        
                                        if (not(cond:17_1))
                                            uint64_t rdi_19 = zx.q(_cvtmask32_u32(k0_26))
                                            temp0_1067[0].o =
                                                _mm_mask_load_epi64(k0_26, data_142fc92e0)
                                            return sub_14016a010(rcx_27, temp0_1059, i_2, 
                                                temp0_1059, rbp, rdi_19, r10_6, arg1, k0_26, k3_43, 
                                                k6_9, k7_13, zmm1, zmm2, arg7, zmm5, arg8, arg9, 
                                                arg10, arg12, arg14, arg16, arg18, zmm17, zmm18, 
                                                zmm19, zmm20, arg19, arg20, arg21, arg22, zmm25, 
                                                temp0_1057, temp0_1058, temp0_966, temp0_1067, 
                                                arg26) __tailcall
                                        
                                        arg13 = arg7
                                    
                                    arg20 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_26, 
                                            arg19[0].o, data_142fc92e0), 
                                        arg13, arg20)
                                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_26, arg20[0].o)
                                    zmm1 = _mm256_mask_add_epi64(k0_26, temp0_1058, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                        arg12 = var_320.32
                                        
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14016bda5
                                        
                                        goto label_14016bc52
                                    
                                    rax_125 = zmm1[0].q
                                    arg9[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
                                    arg12 = var_320.32
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14016bda5:
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(k0_26, arg20, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14016bc62
                                        
                                        goto label_14016bdbd
                                    
                                label_14016bc52:
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_26, arg20, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14016bc62:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14016bdde
                                        
                                        goto label_14016bc70
                                    
                                label_14016bdbd:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_125 = zx.q(*zmm0[0].q)
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, rax_125.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14016bdde:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 3)
                                        zmm1 = _mm256_mask_add_epi64(k0_26, temp0_1057, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14016bc7f
                                        
                                        goto label_14016be06
                                    
                                label_14016bc70:
                                    zmm1 = _mm256_mask_add_epi64(k0_26, temp0_1057, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14016be06:
                                        rax_125 = zx.q(*zmm1[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14016be1d:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14016bc91
                                            
                                            goto label_14016be2e
                                    else
                                    label_14016bc7f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14016be1d
                                    
                                    bool cond:28_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14016be2e:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zx.q(*zmm0[0].q)
                                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg9[0].o, 
                                            rax_125.d, 6)
                                        cond:28_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_14016be49:
                                            zmm0[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg9[0].o, rax_125.d, 7)
                                    else
                                    label_14016bc91:
                                        cond:28_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14016be49
                                    
                                    int64_t k1_162 =
                                        _mm_mask_testn_epi16_mask(k0_26, arg19[0].o, zmm2[0].o)
                                    _mm256_mask_sub_epi32(k0_26, arg13, 
                                        _mm256_cmpeq_epi32(zmm0, zmm0))
                                    arg25 = _mm256_mask_mov_epi32(k1_162, arg21)
                                    zmm1[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_26, arg25, zmm25, 5), arg19[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_26, zmm1[0].o, zmm2[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:28_1))
                                        arg25 = _mm256_mask_mov_epi64(arg5, 
                                            _mm256_mask_mov_epi32(
                                                _mm_mask_testn_epi16_mask(arg5, zmm1[0].o, 
                                                    zmm2[0].o), 
                                                arg25))
                                    
                                    arg13 = var_5a0_2
                                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg25[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, temp0_1058, zmm0)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14016be7b
                                        
                                        goto label_14016bd07
                                    
                                    rax_125 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastb_xmmdq_memb(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14016be7b:
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 1)
                                        arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14016bd17
                                        
                                        goto label_14016be93
                                    
                                label_14016bd07:
                                    arg7[0].o = _mm256_extracti32x4_epi32(arg5, arg25, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14016bd17:
                                        arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14016beb4
                                        
                                        goto label_14016bd25
                                    
                                label_14016be93:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_125 = zx.q(*zmm0[0].q)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, rax_125.d, 2)
                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14016beb4:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, temp0_1057, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14016bd34
                                        
                                        goto label_14016bedc
                                    
                                label_14016bd25:
                                    arg6 = _mm256_mask_add_epi64(arg5, temp0_1057, arg7)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14016bedc:
                                        rax_125 = zx.q(*arg6[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_14016bef3:
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_14016bd46
                                            
                                            goto label_14016bf04
                                    else
                                    label_14016bd34:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14016bef3
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14016bf04:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zx.q(*zmm0[0].q)
                                        zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm1[0].o, 
                                            rax_125.d, 6)
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                        label_14016bf23:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_125 =
                                                zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm1[0].o, rax_125.d, 7)
                                    else
                                    label_14016bd46:
                                        zmm2[0].o &= arg9[0].o
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14016bf23
                                    
                                    arg9[0].o = var_6c0[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm0[0].o = zmm1[0].o & data_142fc92e0
                                    zmm1 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                    label_14016a26d:
                                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                            _mm256_sub_epi32(zmm1, zmm2), 1)
                                        float temp0_1248[0x8] = _mm256_sub_ps(
                                            _mm256_broadcast_ss(var_4d0.d), 
                                            _mm256_cvtepi32_ps(zmm2))
                                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                                        arg6 = _mm256_div_ps(temp0_1248, zmm0)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, temp0_1067, temp0_1067)
                                    zmm1 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    uint64_t temp0_1070[0x4] =
                                        _mm256_mask_add_epi64(arg5, temp0_1058, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_140169ade
                                        
                                        goto label_140169513
                                    
                                    rax_125 = temp0_1070[0]
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_140169ade:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1070[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_140169522
                                        
                                        goto label_140169af8
                                    
                                label_140169513:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_140169522:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_140169b16
                                        
                                        goto label_140169530
                                    
                                label_140169af8:
                                    arg7[0].o = _mm256_extracti128_si256(temp0_1070, 1)
                                    rax_125 = arg7[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_140169b16:
                                        temp0_1070[0].o = _mm256_extracti128_si256(temp0_1070, 1)
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(temp0_1070[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_1057, arg6)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14016953f
                                        
                                        goto label_140169b36
                                    
                                label_140169530:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_1057, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_140169b36:
                                        rax_125 = zmm2[0]
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 4)
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                        label_140169b49:
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 5)
                                            
                                            if ((temp0_1059 & 0x40) == 0)
                                                goto label_140169551
                                            
                                            goto label_140169b5d
                                    else
                                    label_14016953f:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_140169b49
                                    
                                    bool cond:10_1
                                    bool cond:13_1
                                    bool cond:14_1
                                    bool cond:18_1
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_140169b5d:
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
                                        label_140169b79:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_140169551:
                                        zmm0 = arg12
                                        cond:10_1 = temp0_1059 == 0
                                        cond:13_1 = temp0_1059 == 0
                                        cond:14_1 = temp0_1059 == 0
                                        cond:18_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_140169b79
                                    
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg16 = _mm256_mask_set1_epi32(arg5, rdi_15)
                                    int64_t k4_33 = _mm256_cmp_epi32_mask(arg5, arg16, zmm1, 5)
                                    arg8[0].o = _mm_movm_epi16(k4_33)
                                    zmm1[0].o = _mm_mask_and_epi64(arg5, arg19[0].o, arg8[0].o)
                                    int64_t k0_16 =
                                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                                        zmm1[0].o, data_142fc92e0)
                                    _kortest_mask8_u8(k0_16, k0_16)
                                    arg7 = _mm256_mask_mov_epi64(k0_16, temp0_1067)
                                    
                                    if (not(cond:10_1))
                                        arg14 = __vpblendmd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                            k4_33, temp0_1067, var_6a0)
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        zmm2 = _mm256_mask_sub_epi32(k0_16, temp0_1067, arg12)
                                        int64_t k0_17 =
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                            k4_33, zmm25, zmm2)
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
                                            _mm256_mask_mov_epi64(k0_16, temp0_1067)
                                            bool cond:31_1
                                            
                                            do
                                                arg23 = _mm256_mask_mov_epi64(k0_16, zmm2)
                                                zmm2 = _mm256_add_epi32(zmm2, zmm2)
                                                arg7 = _mm256_mask_add_epi64(k0_16, temp0_1058, 
                                                    _mm256_cvtepi32_epi64(zmm2[0].o))
                                                int64_t k0_18 = _mm_mask_test_epi16_mask(k0_16, 
                                                    arg26[0].o, arg13[0].o)
                                                char temp0_1106 = _cvtmask32_u32(k0_18)
                                                
                                                if ((temp0_1106 & 1) == 0)
                                                    if ((temp0_1106 & 2) != 0)
                                                        goto label_140169602
                                                    
                                                    goto label_1401696f6
                                                
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0].q, 0)
                                                
                                                if ((temp0_1106 & 2) != 0)
                                                label_140169602:
                                                    int64_t rax_129 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_129, 1)
                                                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                    
                                                    if ((temp0_1106 & 4) == 0)
                                                        goto label_140169706
                                                    
                                                    goto label_14016961d
                                                
                                            label_1401696f6:
                                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                                
                                                if ((temp0_1106 & 4) == 0)
                                                label_140169706:
                                                    zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                    
                                                    if ((temp0_1106 & 8) != 0)
                                                        goto label_14016963c
                                                    
                                                    goto label_140169715
                                                
                                            label_14016961d:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *zmm5[0], 2)
                                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                                
                                                if ((temp0_1106 & 8) != 0)
                                                label_14016963c:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_131 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_131, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_18, temp0_1057, 
                                                        zmm2)
                                                    
                                                    if ((temp0_1106 & 0x10) == 0)
                                                        goto label_140169725
                                                    
                                                    goto label_140169662
                                                
                                            label_140169715:
                                                arg7 =
                                                    _mm256_mask_add_epi64(k0_18, temp0_1057, zmm2)
                                                
                                                if ((temp0_1106 & 0x10) == 0)
                                                label_140169725:
                                                    
                                                    if ((temp0_1106 & 0x20) != 0)
                                                        goto label_140169671
                                                    
                                                    goto label_14016972f
                                                
                                            label_140169662:
                                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                    arg6[0].o, *arg7[0].q, 4)
                                                
                                                if ((temp0_1106 & 0x20) != 0)
                                                label_140169671:
                                                    int64_t rax_133 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *rax_133, 5)
                                                    
                                                    if ((temp0_1106 & 0x40) == 0)
                                                        goto label_140169739
                                                    
                                                    goto label_140169686
                                                
                                            label_14016972f:
                                                
                                                if ((temp0_1106 & 0x40) != 0)
                                                label_140169686:
                                                    zmm2[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                        arg6[0].o, *zmm2[0], 6)
                                                    
                                                    if (temp0_1106 s< 0)
                                                    label_14016969f:
                                                        zmm2[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_135 =
                                                            __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 
                                                            1)
                                                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                            arg6[0].o, *rax_135, 7)
                                                else
                                                label_140169739:
                                                    
                                                    if (temp0_1106 s< 0)
                                                        goto label_14016969f
                                                
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
                                                        k0_19, zmm25, zmm2), 
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
                                        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                                        uint32_t temp0_1206[0x8] =
                                            _mm256_mask_add_epi32(k0_24, temp0_1067, arg12)
                                        arg9[0].o = _mm_mask_mov_epi16(
                                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                                                k0_24, temp0_1206, arg26), 
                                            zmm2[0].o)
                                        zmm5[0].o = _mm_mask_and_epi64(k0_24, arg9[0].o, arg19[0].o)
                                        k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                            k0_24, zmm5[0].o, data_142fc92e0)
                                        _kortest_mask8_u8(k0_24, k0_24)
                                        
                                        if (not(cond:18_1))
                                            uint64_t rdi_18 = zx.q(_cvtmask32_u32(k0_24))
                                            temp0_1067[0].o =
                                                _mm_mask_load_epi64(k0_24, data_142fc92e0)
                                            arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                            return sub_140169dc0(zmm0, temp0_1059, i_2, arg6, 
                                                temp0_1059, rbp, rdi_18, r10_6, arg1, k0_24, k3_43, 
                                                k6_9, k7_13, zmm1, zmm2, zmm5, arg9, arg10, arg12, 
                                                temp0_1206, arg16, arg18, zmm17, zmm18, zmm19, 
                                                zmm20, arg19, arg20, arg21, arg22, zmm25, 
                                                temp0_1057, temp0_1058, temp0_966, temp0_1067, 
                                                arg26, var_5a0_2) __tailcall
                                        
                                        arg7 = zmm1
                                    
                                    arg20 = _mm256_mask_blend_epi32(
                                        __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_24, 
                                            arg19[0].o, data_142fc92e0), 
                                        arg7, arg20)
                                    arg6 = _mm256_mask_add_epi32(k0_24, arg20, arg20)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, temp0_1058, 
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
                                            goto label_14016bac0
                                        
                                        goto label_14016a162
                                    
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1059 & 4) != 0)
                                    label_14016bac0:
                                        zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = zmm5[0]
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_1059 & 8) == 0)
                                            goto label_14016a170
                                        
                                        goto label_14016bade
                                    
                                label_14016a162:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1059 & 8) == 0)
                                    label_14016a170:
                                        zmm1 = _mm256_mask_add_epi64(k0_24, temp0_1057, arg6)
                                        
                                        if ((temp0_1059 & 0x10) != 0)
                                            goto label_14016bafe
                                        
                                        goto label_14016a17f
                                    
                                label_14016bade:
                                    zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                    zmm1 = _mm256_mask_add_epi64(k0_24, temp0_1057, arg6)
                                    
                                    if ((temp0_1059 & 0x10) != 0)
                                    label_14016bafe:
                                        rax_125 = zmm1[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                        
                                        if ((temp0_1059 & 0x20) == 0)
                                            goto label_14016a188
                                        
                                        goto label_14016bb11
                                    
                                label_14016a17f:
                                    
                                    if ((temp0_1059 & 0x20) == 0)
                                    label_14016a188:
                                        
                                        if ((temp0_1059 & 0x40) != 0)
                                            goto label_14016bb25
                                        
                                        goto label_14016a191
                                    
                                label_14016bb11:
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    bool cond:29_1
                                    
                                    if ((temp0_1059 & 0x40) == 0)
                                    label_14016a191:
                                        cond:29_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                        label_14016bb3d:
                                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_14016bb25:
                                        arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
                                        rax_125 = arg6[0].q
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                        cond:29_1 = temp0_1059 == 0
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14016bb3d
                                    
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_79 =
                                        _mm_mask_testn_epi16_mask(k0_24, arg19[0].o, zmm1[0].o)
                                    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                                    _mm256_mask_sub_epi32(k0_24, arg7, arg6)
                                    arg25 = _mm256_mask_mov_epi32(k1_79, arg21)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        _mm256_cmp_epi32_mask(k0_24, arg25, zmm25, 5), arg19[0].o)
                                    arg5 = _mm_mask_test_epi16_mask(k0_24, arg6[0].o, zmm1[0].o)
                                    _kortest_mask8_u8(arg5, arg5)
                                    
                                    if (not(cond:29_1))
                                        zmm0 = _mm256_mask_mov_epi32(
                                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, zmm1[0].o), 
                                            arg25)
                                        arg25 = _mm256_mask_mov_epi64(arg5, zmm0)
                                    
                                    uint32_t temp0_1236[0x8] =
                                        _mm256_mask_add_epi32(arg5, arg25, arg25)
                                    zmm1 = _mm256_cvtepi32_epi64(temp0_1236[0].o)
                                    arg6 = _mm256_mask_add_epi64(arg5, temp0_1058, zmm1)
                                    
                                    if ((temp0_1059 & 1) == 0)
                                        if ((temp0_1059 & 2) != 0)
                                            goto label_14016bb66
                                        
                                        goto label_14016a20c
                                    
                                    rax_125 = arg6[0].q
                                    zmm1[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                                    
                                    if ((temp0_1059 & 2) != 0)
                                    label_14016bb66:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 1)
                                        temp0_1236[0].o = _mm256_extracti128_si256(temp0_1236, 1)
                                        
                                        if ((temp0_1059 & 4) == 0)
                                            goto label_14016a21b
                                        
                                        goto label_14016bb80
                                    
                                label_14016a20c:
                                    temp0_1236[0].o = _mm256_extracti128_si256(temp0_1236, 1)
                                    
                                    if ((temp0_1059 & 4) == 0)
                                    label_14016a21b:
                                        arg7 = _mm256_cvtepi32_epi64(temp0_1236[0].o)
                                        
                                        if ((temp0_1059 & 8) != 0)
                                            goto label_14016bb9e
                                        
                                        goto label_14016a229
                                    
                                label_14016bb80:
                                    zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                    rax_125 = zmm0[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 2)
                                    arg7 = _mm256_cvtepi32_epi64(temp0_1236[0].o)
                                    
                                    if ((temp0_1059 & 8) != 0)
                                    label_14016bb9e:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 3)
                                        arg6 = _mm256_mask_add_epi64(arg5, temp0_1057, arg7)
                                        
                                        if ((temp0_1059 & 0x10) == 0)
                                            goto label_14016a238
                                        
                                        goto label_14016bbbe
                                    
                                label_14016a229:
                                    arg6 = _mm256_mask_add_epi64(arg5, temp0_1057, arg7)
                                    
                                    if ((temp0_1059 & 0x10) == 0)
                                    label_14016a238:
                                        
                                        if ((temp0_1059 & 0x20) != 0)
                                            goto label_14016bbd1
                                        
                                        goto label_14016a241
                                    
                                label_14016bbbe:
                                    rax_125 = arg6[0].q
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 4)
                                    
                                    if ((temp0_1059 & 0x20) != 0)
                                    label_14016bbd1:
                                        rax_125 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 5)
                                        
                                        if ((temp0_1059 & 0x40) == 0)
                                            goto label_14016a24a
                                        
                                        goto label_14016bbe5
                                    
                                label_14016a241:
                                    
                                    if ((temp0_1059 & 0x40) != 0)
                                    label_14016bbe5:
                                        zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                        rax_125 = zmm0[0].q
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_125, 6)
                                        
                                        if (temp0_1059 s< 0)
                                        label_14016bbfd:
                                            zmm0[0].o = _mm256_extracti128_si256(arg6, 1)
                                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                            zmm1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, 
                                                *rax_125, 7)
                                    else
                                    label_14016a24a:
                                        
                                        if (temp0_1059 s< 0)
                                            goto label_14016bbfd
                                    
                                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                                    zmm1 = _mm256_cvtepu16_epi32(zmm1[0].o)
                                    arg6[0].o = zx.o(0)
                                    z_1 = arg30 == 1
                                    
                                    if (not(z_1))
                                        goto label_14016a26d
                                
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
                    z_1 = 0f == arg6[0]
                    
                    if (not(0f < arg6[0]))
                        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        arg15 = _mm256_mask_mov_ps(k4_32, zmm2)
                        k3_43 = _mm256_mask_test_epi32_mask(k3_42, zmm1, zmm1)
                        _kortest_mask8_u8(k3_43, k3_43)
                        
                        if (not(z_1))
                            goto label_14016937d
                    else
                        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                        arg7[0].o = arg6[0].o
                        arg6 = _mm256_mask_add_epi32(arg5, zmm25, zmm0)
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
                                goto label_14016937d
                        else
                            float temp0_1012[0x8] = _mm256_broadcastss_ps(arg7[0].o)
                            zmm2 = _mm256_cvtepi32_ps(arg6)
                            arg7 = _mm256_mul_ps(temp0_1012, zmm2)
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
                                goto label_14016937d
            
            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
            zmm25 = _mm256_mask_cvtepu32_epi64(arg5, zmm0[0].o)
            arg22 = _mm256_mask_cvtepu32_epi64(arg5, arg22[0].o)
            zmm0 = _mm256_mask_mullo_epi32(arg5, arg20, arg13)
            zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
            zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
            zmm28 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
            zmm0 = _mm256_mask_add_epi64(arg5, zmm28, arg22)
            zmm1 = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
            zmm26 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
            arg23 = _mm256_mask_add_epi64(arg5, zmm0, zmm19)
            int64_t k3_46 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 1)
            _kortest_mask8_u8(k3_46, k3_46)
            
            if (not(z_1))
                zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
                zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                uint64_t k4_37 = _mm256_mask_testn_epi32_mask(k3_46, arg18, zmm0)
                _kortest_mask8_u8(k4_37, k4_37)
                
                if (not(z_1))
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg22), 
                        zmm28)
                    zmm0 = _mm256_add_epi64(zmm0, zmm2)
                    zmm5 = _mm256_add_epi64(zmm0, arg6)
                    arg6 = _mm256_add_epi64(arg7, arg6)
                    uint64_t k5_46 = _kshiftri_mask8(k4_37, 4)
                    int64_t k1_83 = __kmovq_maskmskw_masku64_avx512(k4_37)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_84
                    float temp0_1275[0x4]
                    temp0_1275, k1_84 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_83, 
                        *(r10_6 + arg6[0].q))
                    arg19[0].o = temp0_1275
                    int64_t k1_85 = __kmovq_maskmskw_masku64_avx512(k5_46)
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    int64_t k1_86
                    float temp0_1277[0x4]
                    temp0_1277, k1_86 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_85, *(r10_6 + zmm5[0]))
                    arg6[0].o = temp0_1277
                    uint64_t temp0_1278[0x4] = __vpbroadcastq_ymmqq_memq(8)
                    arg25 = _mm256_mask_add_epi64(arg5, zmm0, temp0_1278)
                    zmm5 = _mm256_add_epi64(arg7, temp0_1278)
                    int64_t k1_87 = __kmovq_maskmskw_masku64_avx512(k4_37)
                    arg26[0].o = _mm_mask_xor_ps(arg5, arg26[0].o, arg26[0].o)
                    int64_t k1_88
                    float temp0_1282[0x4]
                    temp0_1282, k1_88 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_87, *(r10_6 + zmm5[0]))
                    arg26[0].o = temp0_1282
                    int64_t k1_89 = __kmovq_maskmskw_masku64_avx512(k5_46)
                    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                    int64_t k1_90
                    float temp0_1284[0x4]
                    temp0_1284, k1_90 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_89, 
                        *(r10_6 + arg25[0].q))
                    zmm5[0].o = temp0_1284
                    arg9[0].o = zx.o(0)
                    arg6 = _mm256_insertf32x4(arg5, arg19, arg6[0].o, 1)
                    zmm5 = _mm256_insertf32x4(arg5, arg26, zmm5[0].o, 1)
                    arg19 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm0, arg19)
                    arg7 = _mm256_mask_add_epi64(arg5, arg7, arg19)
                    int64_t k1_91 = __kmovq_maskmskw_masku64_avx512(k4_37)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k1_92
                    float temp0_1291[0x4]
                    temp0_1291, k1_92 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_91, 
                        *(r10_6 + arg7[0].q))
                    arg19[0].o = temp0_1291
                    int64_t k5_47
                    float temp0_1292[0x4]
                    temp0_1292, k5_47 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_46, 
                        *(r10_6 + zmm0[0].q))
                    arg9[0].o = temp0_1292
                    float temp0_1293[0x8] = _mm256_insertf32x4(arg5, arg19, arg9[0].o, 1)
                    var_580.32 = _mm256_mask_storeu_ps(k4_37, arg6)
                    var_560.32 = _mm256_mask_storeu_ps(k4_37, zmm5)
                    var_540.32 = _mm256_mask_storeu_ps(k4_37, temp0_1293)
                
                int64_t k3_47 = _mm256_mask_test_epi32_mask(k3_46, zmm1, zmm1)
                _kortest_mask8_u8(k3_47, k3_47)
                
                if (not(z_1))
                    zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                    int64_t k4_38 = _mm256_movepi32_mask(zmm0)
                    zmm1[0].o = zx.o(0)
                    int64_t k1_93 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_47, zmm1, zmm0)
                    _kortest_mask8_u8(k1_93, k1_93)
                    
                    if (z_1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg23)
                        zmm1 = _mm256_mask_mov_epi64(arg5, zmm26)
                    else
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg23)
                        arg6 = _mm256_mask_add_epi64(k1_93, arg23, zmm0)
                        int64_t k5_48 = _kshiftri_mask8(k1_93, 4)
                        _mm256_mask_mov_epi64(arg5, zmm26)
                        zmm1 = _mm256_mask_add_epi64(k5_48, zmm26, zmm0)
                        arg7 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                        zmm5 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), zmm28)
                        arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                        zmm0 = _mm256_add_epi64(zmm5, zmm0)
                        int64_t k5_49 = _kshiftri_mask8(k1_93, 4)
                        zmm5[0].o = zx.o(0)
                        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                        int64_t k1_94
                        float temp0_1310[0x4]
                        temp0_1310, k1_94 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_93, 
                            *(r10_6 + zmm0[0].q))
                        arg19[0].o = temp0_1310
                        int64_t k5_50
                        float temp0_1311[0x4]
                        temp0_1311, k5_50 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_49, 
                            *(r10_6 + arg7[0].q))
                        zmm5[0].o = temp0_1311
                        arg7 = _mm256_insertf32x4(arg5, arg19, zmm5[0].o, 1)
                    
                    var_580.32 = _mm256_mask_storeu_ps(k3_47, _mm256_mask_mov_ps(k4_38, arg7))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                    uint32_t temp0_1318[0x8] = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    int64_t k1_95 = _mm256_mask_test_epi32_mask(k3_47, arg18, zmm0)
                    _kortest_mask8_u8(k1_95, k1_95)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg19 = _mm256_mask_add_epi64(k1_95, arg6, zmm0)
                        int64_t k4_39 = _kshiftri_mask8(k1_95, 4)
                        int64_t k5_51 = _kshiftri_mask8(k1_95, 4)
                        int32_t temp15_1 = rax_125.d
                        int32_t temp16_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp15_1 == temp16_1
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_96
                        float temp0_1323[0x4]
                        temp0_1323, k1_96 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_95, *arg6[0].q)
                        zmm5[0].o = temp0_1323
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k5_52
                        float temp0_1325[0x4]
                        temp0_1325, k5_52 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_51, *zmm1[0].q)
                        arg6[0].o = temp0_1325
                        zmm1 = _mm256_mask_add_epi64(k4_39, zmm1, zmm0)
                        zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                        arg6 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    var_560.32 = _mm256_mask_storeu_ps(k3_47, 
                        _mm256_mask_mov_ps(
                            _mm256_mask_test_epi32_mask(arg5, temp0_1318, temp0_1318), zmm5))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                    arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    int64_t k1_98 = _mm256_mask_test_epi32_mask(k3_47, arg18, zmm0)
                    _kortest_mask8_u8(k1_98, k1_98)
                    
                    if (not(z_1))
                        int64_t k4_40 = _kshiftri_mask8(k1_98, 4)
                        zmm0[0].o = zx.o(0)
                        int32_t temp19_1 = rax_125.d
                        int32_t temp20_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp19_1 == temp20_1
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_99
                        float temp0_1334[0x4]
                        temp0_1334, k1_99 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_98, *arg6[0].q)
                        zmm5[0].o = temp0_1334
                        int64_t k4_41
                        float temp0_1335[0x4]
                        temp0_1335, k4_41 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_40, *zmm1[0].q)
                        zmm0[0].o = temp0_1335
                        zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                    
                    var_540.32 = _mm256_mask_storeu_ps(k3_47, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1))
            
            zmm0 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, arg10, zmm0, 4)
            int64_t k1_101 = _mm256_cmp_epi32_mask(k7_13, arg10, zmm0, 4)
            _kortest_mask8_u8(k1_101, k1_101)
            
            if (not(z_1))
                uint64_t k3_48 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 3)
                _kortest_mask8_u8(k3_48, k3_48)
                
                if (not(z_1))
                    var_6a0[0].w = _store_mask16(k6_9)
                    zmm0[0].o = zx.o(0)
                    float var_5c0_3[0x8] = zmm0
                    float var_5e0_3[0x8] = zmm0
                    float var_600_3[0x8] = zmm0
                    float var_620_3[0x8] = zmm0
                    var_640 = zmm0
                    float var_660_3[0x8] = zmm0
                    int64_t k4_42 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), arg10, 3)
                    uint64_t k5_53 = _kand_mask8(k4_42, k7_13)
                    _kortest_mask8_u8(k5_53, k5_53)
                    zmm1 = _mm256_mask_mov_epi64(arg5, zmm19)
                    arg6 = _mm256_mask_mov_epi64(arg5, zmm20)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        int64_t k6_12 = _kshiftri_mask8(k5_53, 4)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_12, zmm20, zmm0)
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        arg7 = _mm256_mask_add_epi64(k5_53, zmm19, zmm0)
                        uint64_t k2_38 = __kmovq_maskmskw_masku64_avx512(k7_13)
                        uint64_t k7_16 = _kshiftri_mask8(k5_53, 4)
                        int32_t temp8_1 = rax_125.d
                        int32_t temp9_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp8_1 == temp9_1
                        int64_t k1_103 = __kmovq_maskmskw_masku64_avx512(k5_53)
                        zmm0[0].o = zx.o(0)
                        int64_t k1_104
                        float temp0_1349[0x4]
                        temp0_1349, k1_104 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_103, *zmm19[0])
                        zmm0[0].o = temp0_1349
                        int64_t k1_105 = __kmovq_maskmskw_masku64_avx512(k7_16)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_106
                        float temp0_1350[0x4]
                        temp0_1350, k1_106 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_105, *zmm20[0])
                        zmm1[0].o = temp0_1350
                        var_600_3 =
                            _mm256_mask_storeu_ps(k4_42, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        zmm1 = _mm256_mask_add_epi64(k5_53, zmm19, zmm0)
                        zmm5[0].o = zx.o(0)
                        int64_t k5_54
                        float temp0_1356[0x4]
                        temp0_1356, k5_54 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_53, *arg7[0].q)
                        zmm5[0].o = temp0_1356
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k7_17
                        float temp0_1358[0x4]
                        temp0_1358, k7_17 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_16, *arg6[0].q)
                        arg7[0].o = temp0_1358
                        k7_13 = __kmovq_maskmskw_masku64_avx512(k2_38)
                        _mm256_mask_mov_epi64(arg5, zmm20)
                        arg6 = _mm256_mask_add_epi64(k6_12, zmm20, zmm0)
                        var_660_3 =
                            _mm256_mask_storeu_ps(k4_42, _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                    
                    int64_t k4_43 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                    int64_t k5_55 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_43, arg18, 0x2000000)
                    uint64_t k6_13 = _kand_mask8(k5_55, k7_13)
                    _kortest_mask8_u8(k6_13, k6_13)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        var_6c0[0] = _store_mask32(k7_13)
                        int64_t k7_18 = _kshiftri_mask8(k6_13, 4)
                        arg7 = _mm256_mask_add_epi64(k7_18, arg6, zmm0)
                        zmm5 = _mm256_mask_add_epi64(k6_13, zmm1, zmm0)
                        uint64_t k1_107 = _kshiftri_mask8(k6_13, 4)
                        int32_t temp11_1 = rax_125.d
                        int32_t temp12_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp11_1 == temp12_1
                        int64_t k2_39 = __kmovq_maskmskw_masku64_avx512(k6_13)
                        zmm0[0].o = zx.o(0)
                        int64_t k2_40
                        float temp0_1367[0x4]
                        temp0_1367, k2_40 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_39, *zmm1[0].q)
                        zmm0[0].o = temp0_1367
                        arg9[0].o = zx.o(0)
                        int64_t k2_42
                        float temp0_1368[0x4]
                        temp0_1368, k2_42 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k1_107), *arg6[0].q)
                        arg9[0].o = temp0_1368
                        var_5e0_3 =
                            _mm256_mask_storeu_ps(k5_55, _mm256_insertf128_ps(zmm0, arg9[0].o, 1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(8)
                        zmm1 = _mm256_mask_add_epi64(k6_13, zmm1, zmm0)
                        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                        int64_t k6_14
                        float temp0_1374[0x4]
                        temp0_1374, k6_14 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_13, *zmm5[0])
                        arg19[0].o = temp0_1374
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_108
                        float temp0_1376[0x4]
                        temp0_1376, k1_108 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_107, *arg7[0].q)
                        zmm5[0].o = temp0_1376
                        arg6 = _mm256_mask_add_epi64(k7_18, arg6, zmm0)
                        k7_13 = _load_mask32(var_6c0[0])
                        var_640 = _mm256_mask_storeu_ps(k5_55, 
                            _mm256_insertf32x4(arg5, arg19, zmm5[0].o, 1))
                    
                    k6_9 = _load_mask16(var_6a0[0].w)
                    int64_t k4_44 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_43, arg18, 0x4000000)
                    uint64_t k5_56 = _kand_mask8(k4_44, k7_13)
                    _kortest_mask8_u8(k5_56, k5_56)
                    
                    if (not(z_1))
                        zmm0 = __vpbroadcastq_ymmqq_memq(4)
                        uint64_t k1_109 = _kshiftri_mask8(k5_56, 4)
                        int32_t temp13_1 = rax_125.d
                        int32_t temp14_1 = rax_125.d
                        rax_125 = 0
                        z_1 = temp13_1 == temp14_1
                        int64_t k2_43 = __kmovq_maskmskw_masku64_avx512(k5_56)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k2_44
                        float temp0_1382[0x4]
                        temp0_1382, k2_44 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_43, *zmm1[0].q)
                        arg7[0].o = temp0_1382
                        zmm5[0].o = zx.o(0)
                        int64_t k2_46
                        float temp0_1383[0x4]
                        temp0_1383, k2_46 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            __kmovq_maskmskw_masku64_avx512(k1_109), *arg6[0].q)
                        zmm5[0].o = temp0_1383
                        arg6 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_56, 4), arg6, zmm0)
                        zmm1 = _mm256_mask_add_epi64(k5_56, zmm1, zmm0)
                        zmm0 = _mm256_insertf128_ps(arg7, zmm5[0].o, 1)
                        var_5c0_3 = _mm256_mask_storeu_ps(k4_44, zmm0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        int64_t k5_57
                        float temp0_1389[0x4]
                        temp0_1389, k5_57 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_56, *zmm1[0].q)
                        zmm0[0].o = temp0_1389
                        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                        int64_t k1_110
                        float temp0_1391[0x4]
                        temp0_1391, k1_110 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_109, *arg6[0].q)
                        zmm1[0].o = temp0_1391
                        var_620_3 =
                            _mm256_mask_storeu_ps(k4_44, _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                    
                    zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                    zmm1 = __vpbroadcastq_ymmqq_memq(4)
                    arg6 = _mm256_mask_add_epi64(arg5, _mm256_mask_add_epi64(arg5, zmm17, arg22), 
                        zmm28)
                    zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                    zmm1 = _mm256_add_epi64(arg6, zmm1)
                    int64_t k1_111 = _kshiftri_mask8(k3_48, 4)
                    int64_t k2_48 = __kmovq_maskmskw_masku64_avx512(k3_48)
                    arg6[0].o = zx.o(0)
                    int64_t k2_49
                    uint32_t temp0_1401[0x4]
                    temp0_1401, k2_49 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_48, 
                        *(r10_6 + zmm1[0].q))
                    arg6[0].o = temp0_1401
                    zmm1[0].o = zx.o(0)
                    int64_t k1_112
                    uint32_t temp0_1402[0x4]
                    temp0_1402, k1_112 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_111, 
                        *(r10_6 + zmm0[0].q))
                    zmm1[0].o = temp0_1402
                    zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                    zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                    float temp0_1409[0x8] = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff), 
                            0xfffffe01)), 
                        0x43ff8000)
                    zmm5 = var_640
                    float temp0_1410[0x8] = _mm256_mask_load_ps(arg5, var_620_3)
                    arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_3, temp0_1409, var_600_3)
                    arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    float temp0_1414[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                    arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                        _mm256_mask_div_ps(arg5, temp0_1414, arg25), zmm5, var_5e0_3)
                    zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                arg6)), 
                            arg25), 
                        arg5, temp0_1410, var_5c0_3)
                    var_580.32 = _mm256_mask_storeu_ps(k3_48, arg7)
                    var_560.32 = _mm256_mask_storeu_ps(k3_48, zmm1)
                    var_540.32 = _mm256_mask_storeu_ps(k3_48, zmm0)
                
                int64_t k3_49 = _kxor_mask8(
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                _ktest_mask8_u8(k3_49, k7_13)
                
                if (not(z_1))
                    int64_t k4_45 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 2)
                    _kortest_mask8_u8(k4_45, k4_45)
                    
                    if (not(z_1))
                        zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k5_58 = _mm256_movepi32_mask(zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_114 =
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_45, zmm1, zmm0)
                        _kortest_mask8_u8(k1_114, k1_114)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(2)
                            arg23 = _mm256_mask_add_epi64(k1_114, arg23, zmm0)
                            int64_t k2_50 = _kshiftri_mask8(k1_114, 4)
                            zmm26 = _mm256_mask_add_epi64(k2_50, zmm26, zmm0)
                            zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg22)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            zmm1 = _mm256_mask_add_epi64(arg5, zmm1, zmm28)
                            zmm0 = _mm256_mask_add_epi64(k2_50, _mm256_add_epi64(zmm0, zmm2), arg6)
                            zmm1 = _mm256_mask_add_epi64(k1_114, zmm1, arg6)
                            int64_t r10_9 = zmm1[0].q
                            int64_t r9_3 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                            int64_t r11_7 = zmm1[0].q
                            int64_t rbx_17 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                            int64_t rdi_20 = zmm0[0].q
                            int64_t rsi_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            int64_t rcx_30 = zmm0[0].q
                            rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            r10_6 = arg27
                            zmm0[0].o = zx.o(*(arg27 + r10_9))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r9_3), 1)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r11_7), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rbx_17), 3)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rdi_20), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rsi_8), 5)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rcx_30), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rax_125), 7)
                            zmm1 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                        
                        var_580.32 = _mm256_mask_storeu_ps(k4_45, _mm256_mask_mov_ps(k5_58, zmm1))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k5_59 = _mm256_mask_test_epi32_mask(k4_45, arg18, zmm0)
                        _kortest_mask8_u8(k5_59, k5_59)
                        
                        if (not(z_1))
                            char temp0_1453 = _cvtmask32_u32(k5_59)
                            
                            if ((temp0_1453 & 1) == 0)
                                if ((temp0_1453 & 2) != 0)
                                    goto label_14016b3bb
                                
                                goto label_14016aab3
                            
                            rax_125 = arg23[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                            
                            if ((temp0_1453 & 2) != 0)
                            label_14016b3bb:
                                rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                
                                if ((temp0_1453 & 4) == 0)
                                    goto label_14016aabd
                                
                                goto label_14016b3d1
                            
                        label_14016aab3:
                            
                            if ((temp0_1453 & 4) == 0)
                            label_14016aabd:
                                
                                if ((temp0_1453 & 8) != 0)
                                    goto label_14016b3ec
                                
                                goto label_14016aac7
                            
                        label_14016b3d1:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                            rax_125 = zmm0[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                            
                            if ((temp0_1453 & 8) != 0)
                            label_14016b3ec:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                
                                if ((temp0_1453 & 0x10) == 0)
                                    goto label_14016aad1
                                
                                goto label_14016b408
                            
                        label_14016aac7:
                            
                            if ((temp0_1453 & 0x10) != 0)
                            label_14016b408:
                                rax_125 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                
                                if ((temp0_1453 & 0x20) != 0)
                                label_14016b41d:
                                    rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    
                                    if ((temp0_1453 & 0x40) == 0)
                                        goto label_14016aae5
                                    
                                    goto label_14016b433
                            else
                            label_14016aad1:
                                
                                if ((temp0_1453 & 0x20) != 0)
                                    goto label_14016b41d
                            
                            int64_t k1_115
                            
                            if ((temp0_1453 & 0x40) != 0)
                            label_14016b433:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_125 = zmm0[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_115 = _kshiftri_mask8(k5_59, 4)
                                z_1 = temp0_1453 == 0
                                
                                if (temp0_1453 s< 0)
                                label_14016b45b:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 7)
                            else
                            label_14016aae5:
                                arg6 = __vpbroadcastq_ymmqq_memq(2)
                                k1_115 = _kshiftri_mask8(k5_59, 4)
                                z_1 = temp0_1453 == 0
                                
                                if (temp0_1453 s< 0)
                                    goto label_14016b45b
                            
                            arg23 = _mm256_mask_add_epi64(k5_59, arg23, arg6)
                            zmm26 = _mm256_mask_add_epi64(k1_115, zmm26, arg6)
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        var_560.32 = _mm256_mask_storeu_ps(k4_45, 
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_117 = _mm256_mask_test_epi32_mask(k4_45, arg18, zmm0)
                        _kortest_mask8_u8(k1_117, k1_117)
                        
                        if (not(z_1))
                            char temp0_1464 = _cvtmask32_u32(k1_117)
                            
                            if ((temp0_1464 & 1) == 0)
                                if ((temp0_1464 & 2) != 0)
                                    goto label_14016b487
                                
                                goto label_14016ab6d
                            
                            rax_125 = arg23[0].o
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(*rax_125)
                            
                            if ((temp0_1464 & 2) != 0)
                            label_14016b487:
                                rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 1)
                                
                                if ((temp0_1464 & 4) == 0)
                                    goto label_14016ab77
                                
                                goto label_14016b49d
                            
                        label_14016ab6d:
                            
                            if ((temp0_1464 & 4) == 0)
                            label_14016ab77:
                                
                                if ((temp0_1464 & 8) != 0)
                                    goto label_14016b4b8
                                
                                goto label_14016ab81
                            
                        label_14016b49d:
                            zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                            rax_125 = zmm0[0].q
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 2)
                            
                            if ((temp0_1464 & 8) != 0)
                            label_14016b4b8:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                                rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 3)
                                
                                if ((temp0_1464 & 0x10) == 0)
                                    goto label_14016ab8b
                                
                                goto label_14016b4d4
                            
                        label_14016ab81:
                            
                            if ((temp0_1464 & 0x10) != 0)
                            label_14016b4d4:
                                rax_125 = zmm26[0].o
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 4)
                                
                                if ((temp0_1464 & 0x20) != 0)
                                label_14016b4e9:
                                    rax_125 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm26[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 5)
                                    
                                    if ((temp0_1464 & 0x40) == 0)
                                        goto label_14016ab9f
                                    
                                    goto label_14016b4ff
                            else
                            label_14016ab8b:
                                
                                if ((temp0_1464 & 0x20) != 0)
                                    goto label_14016b4e9
                            
                            if ((temp0_1464 & 0x40) != 0)
                            label_14016b4ff:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                rax_125 = zmm0[0].q
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 6)
                                z_1 = temp0_1464 == 0
                                
                                if (temp0_1464 s< 0)
                                label_14016b518:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm26, 1)
                                    rax_125 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_125, 7)
                            else
                            label_14016ab9f:
                                z_1 = temp0_1464 == 0
                                
                                if (temp0_1464 s< 0)
                                    goto label_14016b518
                            
                            zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                arg5, _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                        var_540.32 = _mm256_mask_storeu_ps(k4_45, zmm0)
                    
                    int64_t k1_121 = _kand_mask8(
                        _kxor_mask8(k3_49, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2)), 
                        k7_13)
                    _kortest_mask8_u8(k1_121, k1_121)
                    
                    if (not(z_1))
                        int64_t k3_50 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k7_13, arg10, 6)
                        _kortest_mask8_u8(k3_50, k3_50)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k3_50, zmm0)
                        
                        int64_t k1_122 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                            k1_121, arg10, 6, 4)
                        _kortest_mask8_u8(k1_122, k1_122)
                        
                        if (not(z_1))
                            zmm0[0].o = zx.o(0)
                            var_580.32 = _mm256_mask_storeu_ps(k1_122, zmm0)
                            var_560.32 = _mm256_mask_storeu_ps(k1_122, zmm0)
                            var_540.32 = _mm256_mask_storeu_ps(k1_122, zmm0)
            
            int64_t k2_51 = _mm256_cmp_epi32_mask(k7_13, arg20, arg21, 4)
            _kortest_mask8_u8(k2_51, k2_51)
            
            if (not(z_1))
                zmm0 = _mm256_mask_mullo_epi32(arg5, arg21, arg13)
                zmm1[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm2 = _mm256_cvtepi32_epi64(zmm1[0].o)
                arg21 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
                zmm0 = _mm256_mask_add_epi64(arg5, arg21, arg22)
                zmm1 = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
                arg19 = _mm256_mask_add_epi64(arg5, zmm1, zmm20)
                arg20 = _mm256_mask_add_epi64(arg5, zmm0, zmm19)
                int64_t k3_51 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_51, arg10, 1)
                _kortest_mask8_u8(k3_51, k3_51)
                float var_480[0x8]
                float var_460[0x8]
                float var_440[0x8]
                
                if (not(z_1))
                    zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
                    zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                    uint64_t k4_46 = _mm256_mask_testn_epi32_mask(k3_51, arg18, zmm0)
                    _kortest_mask8_u8(k4_46, k4_46)
                    
                    if (not(z_1))
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                        arg6 = __vpbroadcastq_ymmqq_memq(4)
                        arg7 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                        zmm0 = _mm256_add_epi64(zmm0, zmm2)
                        zmm5 = _mm256_add_epi64(zmm0, arg6)
                        arg6 = _mm256_add_epi64(arg7, arg6)
                        uint64_t k5_60 = _kshiftri_mask8(k4_46, 4)
                        int64_t k1_123 = __kmovq_maskmskw_masku64_avx512(k4_46)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_124
                        float temp0_1494[0x4]
                        temp0_1494, k1_124 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_123, *(r10_6 + arg6[0].q))
                        zmm26[0].o = temp0_1494
                        int64_t k1_125 = __kmovq_maskmskw_masku64_avx512(k5_60)
                        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                        int64_t k1_126
                        float temp0_1496[0x4]
                        temp0_1496, k1_126 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_125, *(r10_6 + zmm5[0]))
                        arg6[0].o = temp0_1496
                        uint64_t temp0_1497[0x4] = __vpbroadcastq_ymmqq_memq(8)
                        arg23 = _mm256_mask_add_epi64(arg5, zmm0, temp0_1497)
                        zmm5 = _mm256_add_epi64(arg7, temp0_1497)
                        int64_t k1_127 = __kmovq_maskmskw_masku64_avx512(k4_46)
                        zmm28[0].o = _mm_mask_xor_epi32(arg5, zmm28[0].o, zmm28[0].o)
                        int64_t k1_128
                        float temp0_1501[0x4]
                        temp0_1501, k1_128 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_127, *(r10_6 + zmm5[0]))
                        zmm28[0].o = temp0_1501
                        int64_t k1_129 = __kmovq_maskmskw_masku64_avx512(k5_60)
                        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                        int64_t k1_130
                        float temp0_1503[0x4]
                        temp0_1503, k1_130 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_129, *(r10_6 + arg23[0].q))
                        zmm5[0].o = temp0_1503
                        arg9[0].o = zx.o(0)
                        arg6 = _mm256_insertf32x4(arg5, zmm26, arg6[0].o, 1)
                        zmm5 = _mm256_insertf32x4(arg5, zmm28, zmm5[0].o, 1)
                        zmm26 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm26)
                        arg7 = _mm256_mask_add_epi64(arg5, arg7, zmm26)
                        int64_t k1_131 = __kmovq_maskmskw_masku64_avx512(k4_46)
                        zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                        int64_t k1_132
                        float temp0_1510[0x4]
                        temp0_1510, k1_132 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                            k1_131, *(r10_6 + arg7[0].q))
                        zmm26[0].o = temp0_1510
                        int64_t k5_61
                        float temp0_1511[0x4]
                        temp0_1511, k5_61 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_60, 
                            *(r10_6 + zmm0[0].q))
                        arg9[0].o = temp0_1511
                        zmm0 = _mm256_insertf32x4(arg5, zmm26, arg9[0].o, 1)
                        var_480 = _mm256_mask_storeu_ps(k4_46, arg6)
                        var_460 = _mm256_mask_storeu_ps(k4_46, zmm5)
                        var_440 = _mm256_mask_storeu_ps(k4_46, zmm0)
                    
                    int64_t k3_52 = _mm256_mask_test_epi32_mask(k3_51, zmm1, zmm1)
                    _kortest_mask8_u8(k3_52, k3_52)
                    
                    if (not(z_1))
                        zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                        int64_t k4_47 = _mm256_movepi32_mask(zmm0)
                        zmm1[0].o = zx.o(0)
                        int64_t k1_133 =
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_52, zmm1, zmm0)
                        _kortest_mask8_u8(k1_133, k1_133)
                        
                        if (z_1)
                            arg6 = _mm256_mask_mov_epi64(arg5, arg20)
                            zmm1 = _mm256_mask_mov_epi64(arg5, arg19)
                        else
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg20)
                            arg6 = _mm256_mask_add_epi64(k1_133, arg20, zmm0)
                            int64_t k5_62 = _kshiftri_mask8(k1_133, 4)
                            _mm256_mask_mov_epi64(arg5, arg19)
                            zmm1 = _mm256_mask_add_epi64(k5_62, arg19, zmm0)
                            arg7 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                            zmm5 = _mm256_mask_add_epi64(arg5, 
                                _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                            arg7 = _mm256_add_epi64(_mm256_add_epi64(arg7, zmm2), zmm0)
                            zmm0 = _mm256_add_epi64(zmm5, zmm0)
                            int64_t k5_63 = _kshiftri_mask8(k1_133, 4)
                            zmm5[0].o = zx.o(0)
                            zmm26[0].o = _mm_mask_xor_epi32(arg5, zmm26[0].o, zmm26[0].o)
                            int64_t k1_134
                            float temp0_1529[0x4]
                            temp0_1529, k1_134 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k1_133, *(r10_6 + zmm0[0].q))
                            zmm26[0].o = temp0_1529
                            int64_t k5_64
                            float temp0_1530[0x4]
                            temp0_1530, k5_64 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_63, *(r10_6 + arg7[0].q))
                            zmm5[0].o = temp0_1530
                            arg7 = _mm256_insertf32x4(arg5, zmm26, zmm5[0].o, 1)
                        
                        var_480 = _mm256_mask_storeu_ps(k3_52, _mm256_mask_mov_ps(k4_47, arg7))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                        uint32_t temp0_1537[0x8] = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_135 = _mm256_mask_test_epi32_mask(k3_52, arg18, zmm0)
                        _kortest_mask8_u8(k1_135, k1_135)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            _mm256_mask_mov_epi64(arg5, arg6)
                            uint64_t temp0_1540[0x4] = _mm256_mask_add_epi64(k1_135, arg6, zmm0)
                            int64_t k4_48 = _kshiftri_mask8(k1_135, 4)
                            int64_t k5_65 = _kshiftri_mask8(k1_135, 4)
                            int32_t temp27_1 = rax_125.d
                            int32_t temp28_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp27_1 == temp28_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_136
                            float temp0_1542[0x4]
                            temp0_1542, k1_136 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_135, *arg6[0].q)
                            zmm5[0].o = temp0_1542
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k5_66
                            float temp0_1544[0x4]
                            temp0_1544, k5_66 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_65, *zmm1[0].q)
                            arg6[0].o = temp0_1544
                            zmm1 = _mm256_mask_add_epi64(k4_48, zmm1, zmm0)
                            zmm5 = _mm256_insertf128_ps(zmm5, arg6[0].o, 1)
                            arg6 = _mm256_mask_mov_epi64(arg5, temp0_1540)
                        
                        var_460 = _mm256_mask_storeu_ps(k3_52, 
                            _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, temp0_1537, temp0_1537), zmm5))
                        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                        arg7 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                        int64_t k1_138 = _mm256_mask_test_epi32_mask(k3_52, arg18, zmm0)
                        _kortest_mask8_u8(k1_138, k1_138)
                        
                        if (not(z_1))
                            int64_t k4_49 = _kshiftri_mask8(k1_138, 4)
                            zmm0[0].o = zx.o(0)
                            int32_t temp29_1 = rax_125.d
                            int32_t temp30_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp29_1 == temp30_1
                            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                            int64_t k1_139
                            float temp0_1553[0x4]
                            temp0_1553, k1_139 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_138, *arg6[0].q)
                            zmm5[0].o = temp0_1553
                            int64_t k4_50
                            float temp0_1554[0x4]
                            temp0_1554, k4_50 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_49, *zmm1[0].q)
                            zmm0[0].o = temp0_1554
                            zmm1 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
                        
                        zmm0 =
                            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), zmm1)
                        var_440 = _mm256_mask_storeu_ps(k3_52, zmm0)
                
                _ktest_mask8_u8(k2_51, arg5)
                
                if (not(z_1))
                    int64_t k1_141 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_51, arg10, 3)
                    _kortest_mask8_u8(k1_141, k1_141)
                    
                    if (not(z_1))
                        var_6c0[0] = _store_mask32(k1_141)
                        var_6a0[0].w = _store_mask16(k6_9)
                        zmm0[0].o = zx.o(0)
                        float var_5c0_4[0x8] = zmm0
                        float var_5e0_4[0x8] = zmm0
                        float var_600_4[0x8] = zmm0
                        float var_620_4[0x8] = zmm0
                        var_640 = zmm0
                        float var_660_4[0x8] = zmm0
                        int64_t k4_51 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                            _mm256_movepi32_mask(_mm256_slli_epi32(arg12, 0x1f)), arg10, 3)
                        uint64_t k5_67 = _kand_mask8(k2_51, k4_51)
                        _kortest_mask8_u8(k5_67, k5_67)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k6_15 = _kshiftri_mask8(k5_67, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k6_15, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg6 = _mm256_mask_add_epi64(k5_67, zmm19, zmm0)
                            uint64_t k1_143 = _kshiftri_mask8(k5_67, 4)
                            int32_t temp17_1 = rax_125.d
                            int32_t temp18_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp17_1 == temp18_1
                            zmm0[0].o = zx.o(0)
                            int64_t k7_20
                            float temp0_1566[0x4]
                            temp0_1566, k7_20 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k5_67), *zmm19[0])
                            zmm0[0].o = temp0_1566
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k7_22
                            float temp0_1568[0x4]
                            temp0_1568, k7_22 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_143), *zmm20[0])
                            arg7[0].o = temp0_1568
                            var_600_4 = _mm256_mask_storeu_ps(k4_51, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            zmm19 = _mm256_mask_add_epi64(k5_67, zmm19, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k5_68
                            float temp0_1574[0x4]
                            temp0_1574, k5_68 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_67, *arg6[0].q)
                            arg7[0].o = temp0_1574
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_144
                            float temp0_1576[0x4]
                            temp0_1576, k1_144 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_143, *zmm1[0].q)
                            arg6[0].o = temp0_1576
                            zmm20 = _mm256_mask_add_epi64(k6_15, zmm20, zmm0)
                            var_660_4 = _mm256_mask_storeu_ps(k4_51, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        int64_t k4_52 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3)
                        int64_t k5_69 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_52, 
                            arg18, 0x2000000)
                        uint64_t k6_16 = _kand_mask8(k2_51, k5_69)
                        _kortest_mask8_u8(k6_16, k6_16)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            int64_t k7_23 = _kshiftri_mask8(k6_16, 4)
                            _mm256_mask_mov_epi64(arg5, zmm20)
                            zmm1 = _mm256_mask_add_epi64(k7_23, zmm20, zmm0)
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg6 = _mm256_mask_add_epi64(k6_16, zmm19, zmm0)
                            uint64_t k1_145 = _kshiftri_mask8(k6_16, 4)
                            int32_t temp23_1 = rax_125.d
                            int32_t temp24_1 = rax_125.d
                            rax_125 = 0
                            z_1 = temp23_1 == temp24_1
                            int64_t k3_53 = __kmovq_maskmskw_masku64_avx512(k6_16)
                            zmm0[0].o = zx.o(0)
                            int64_t k3_54
                            float temp0_1585[0x4]
                            temp0_1585, k3_54 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_53, *zmm19[0])
                            zmm0[0].o = temp0_1585
                            int64_t k3_55 = __kmovq_maskmskw_masku64_avx512(k1_145)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k3_56
                            float temp0_1587[0x4]
                            temp0_1587, k3_56 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_55, *zmm20[0])
                            arg7[0].o = temp0_1587
                            var_5e0_4 = _mm256_mask_storeu_ps(k5_69, 
                                _mm256_insertf128_ps(zmm0, arg7[0].o, 1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(8)
                            zmm19 = _mm256_mask_add_epi64(k6_16, zmm19, zmm0)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k6_17
                            float temp0_1593[0x4]
                            temp0_1593, k6_17 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_16, *arg6[0].q)
                            arg7[0].o = temp0_1593
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k1_146
                            float temp0_1595[0x4]
                            temp0_1595, k1_146 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_145, *zmm1[0].q)
                            arg6[0].o = temp0_1595
                            zmm20 = _mm256_mask_add_epi64(k7_23, zmm20, zmm0)
                            var_640 = _mm256_mask_storeu_ps(k5_69, 
                                _mm256_insertf128_ps(arg7, arg6[0].o, 1))
                        
                        k6_9 = _load_mask16(var_6a0[0].w)
                        int64_t k4_53 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_52, 
                            arg18, 0x4000000)
                        uint64_t k5_70 = _kand_mask8(k2_51, k4_53)
                        _kortest_mask8_u8(k5_70, k5_70)
                        
                        if (not(z_1))
                            zmm0 = __vpbroadcastq_ymmqq_memq(4)
                            uint64_t k1_147 = _kshiftri_mask8(k5_70, 4)
                            z_1 = rax_125.d == rax_125.d
                            int64_t k3_57 = __kmovq_maskmskw_masku64_avx512(k5_70)
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k3_58
                            float temp0_1601[0x4]
                            temp0_1601, k3_58 =
                                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_57, *zmm19[0])
                            zmm1[0].o = temp0_1601
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k3_60
                            float temp0_1603[0x4]
                            temp0_1603, k3_60 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                __kmovq_maskmskw_masku64_avx512(k1_147), *zmm20[0])
                            arg6[0].o = temp0_1603
                            uint64_t temp0_1604[0x4] =
                                _mm256_mask_add_epi64(_kshiftri_mask8(k5_70, 4), zmm20, zmm0)
                            uint64_t temp0_1605[0x4] = _mm256_mask_add_epi64(k5_70, zmm19, zmm0)
                            zmm0 = _mm256_insertf128_ps(zmm1, arg6[0].o, 1)
                            var_5c0_4 = _mm256_mask_storeu_ps(k4_53, zmm0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k5_71
                            float temp0_1609[0x4]
                            temp0_1609, k5_71 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_70, *temp0_1605[0])
                            zmm0[0].o = temp0_1609
                            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                            int64_t k1_148
                            float temp0_1611[0x4]
                            temp0_1611, k1_148 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k1_147, *temp0_1604[0])
                            zmm1[0].o = temp0_1611
                            var_620_4 = _mm256_mask_storeu_ps(k4_53, 
                                _mm256_insertf128_ps(zmm0, zmm1[0].o, 1))
                        
                        zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                        zmm1 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_mask_add_epi64(arg5, 
                            _mm256_mask_add_epi64(arg5, zmm17, arg22), arg21)
                        zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, zmm2), zmm1)
                        zmm1 = _mm256_add_epi64(arg6, zmm1)
                        uint64_t k4_54 = _load_mask32(var_6c0[0])
                        int64_t k1_149 = _kshiftri_mask8(k4_54, 4)
                        int64_t k3_62 = __kmovq_maskmskw_masku64_avx512(k4_54)
                        arg6[0].o = zx.o(0)
                        int64_t k3_63
                        uint32_t temp0_1621[0x4]
                        temp0_1621, k3_63 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_62, 
                            *(r10_6 + zmm1[0].q))
                        arg6[0].o = temp0_1621
                        zmm1[0].o = zx.o(0)
                        int64_t k1_150
                        uint32_t temp0_1622[0x4]
                        temp0_1622, k1_150 = __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(
                            k1_149, *(r10_6 + zmm0[0].q))
                        zmm1[0].o = temp0_1622
                        zmm0 = _mm256_inserti128_si256(arg6, zmm1[0].o, 1)
                        zmm1 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
                        float temp0_1629[0x8] = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x3ff), 
                                0xfffffe01)), 
                            0x43ff8000)
                        zmm5 = var_640
                        zmm19 = _mm256_mask_load_ps(arg5, var_620_4)
                        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_4, temp0_1629, var_600_4)
                        arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        float temp0_1634[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm1, arg6))
                        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(
                            _mm256_mask_div_ps(arg5, temp0_1634, zmm20), zmm5, var_5e0_4)
                        zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), 
                                    arg6)), 
                                zmm20), 
                            arg5, zmm19, var_5c0_4)
                        var_480 = _mm256_mask_storeu_ps(k4_54, arg7)
                        var_460 = _mm256_mask_storeu_ps(k4_54, zmm1)
                        var_440 = _mm256_mask_storeu_ps(k4_54, zmm0)
                    
                    arg5 = _kxor_mask8(
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 3), arg5)
                    _ktest_mask8_u8(k2_51, arg5)
                    
                    if (not(z_1))
                        int64_t k3_64 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_51, arg10, 2)
                        _kortest_mask8_u8(k3_64, k3_64)
                        
                        if (not(z_1))
                            zmm0 = _mm256_slli_epi32(arg12, 0x1f)
                            int64_t k4_55 = _mm256_movepi32_mask(zmm0)
                            zmm1[0].o = zx.o(0)
                            int64_t k1_152 =
                                __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_64, zmm1, zmm0)
                            _kortest_mask8_u8(k1_152, k1_152)
                            
                            if (not(z_1))
                                zmm0 = __vpbroadcastq_ymmqq_memq(2)
                                arg20 = _mm256_mask_add_epi64(k1_152, arg20, zmm0)
                                int64_t k5_72 = _kshiftri_mask8(k1_152, 4)
                                arg19 = _mm256_mask_add_epi64(k5_72, arg19, zmm0)
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm18, zmm25)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm17, arg22)
                                arg6 = __vpbroadcastq_ymmqq_memq(4)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, arg21)
                                zmm0 =
                                    _mm256_mask_add_epi64(k5_72, _mm256_add_epi64(zmm0, zmm2), arg6)
                                zmm1 = _mm256_mask_add_epi64(k1_152, zmm1, arg6)
                                int64_t r10_10 = zmm1[0].q
                                int64_t r9_4 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                zmm1[0].o = _mm256_extracti128_si256(zmm1, 1)
                                int64_t r11_8 = zmm1[0].q
                                int64_t r14_2 = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
                                int64_t rdi_23 = zmm0[0].q
                                int64_t rsi_9 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                int64_t rcx_31 = zmm0[0].q
                                int64_t rax_163 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                zmm0[0].o = zx.o(*(r10_6 + r10_10))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r9_4), 1)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r11_8), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + r14_2), 3)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rdi_23), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rsi_9), 5)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(r10_6 + rcx_31), 6)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(r10_6 + rax_163), 7)
                                zmm1 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                            
                            var_480 = _mm256_mask_storeu_ps(k3_64, _mm256_mask_mov_ps(k4_55, zmm1))
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                            int64_t k4_56 = _mm256_mask_test_epi32_mask(k3_64, arg18, zmm0)
                            _kortest_mask8_u8(k4_56, k4_56)
                            
                            if (not(z_1))
                                char temp0_1698 = _cvtmask32_u32(k4_56)
                                
                                if ((temp0_1698 & 1) == 0)
                                    if ((temp0_1698 & 2) != 0)
                                        goto label_14016b932
                                    
                                    goto label_14016b57f
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg20[0].o)
                                
                                if ((temp0_1698 & 2) != 0)
                                label_14016b932:
                                    uint64_t rax_169 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg20[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_169, 1)
                                    
                                    if ((temp0_1698 & 4) == 0)
                                        goto label_14016b589
                                    
                                    goto label_14016b948
                                
                            label_14016b57f:
                                
                                if ((temp0_1698 & 4) == 0)
                                label_14016b589:
                                    
                                    if ((temp0_1698 & 8) != 0)
                                        goto label_14016b963
                                    
                                    goto label_14016b593
                                
                            label_14016b948:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_1698 & 8) != 0)
                                label_14016b963:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                    int64_t rax_171 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_171, 3)
                                    
                                    if ((temp0_1698 & 0x10) == 0)
                                        goto label_14016b59d
                                    
                                    goto label_14016b985
                                
                            label_14016b593:
                                
                                if ((temp0_1698 & 0x10) != 0)
                                label_14016b985:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg19[0].o, 4)
                                    
                                    if ((temp0_1698 & 0x20) != 0)
                                    label_14016b994:
                                        uint64_t rax_173 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_173, 5)
                                        
                                        if ((temp0_1698 & 0x40) == 0)
                                            goto label_14016b5b1
                                        
                                        goto label_14016b9aa
                                else
                                label_14016b59d:
                                    
                                    if ((temp0_1698 & 0x20) != 0)
                                        goto label_14016b994
                                
                                int64_t k1_153
                                
                                if ((temp0_1698 & 0x40) != 0)
                                label_14016b9aa:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_153 = _kshiftri_mask8(k4_56, 4)
                                    z_1 = temp0_1698 == 0
                                    
                                    if (temp0_1698 s< 0)
                                    label_14016b9d2:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        int64_t rax_175 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_175, 7)
                                else
                                label_14016b5b1:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k1_153 = _kshiftri_mask8(k4_56, 4)
                                    z_1 = temp0_1698 == 0
                                    
                                    if (temp0_1698 s< 0)
                                        goto label_14016b9d2
                                
                                arg20 = _mm256_mask_add_epi64(k4_56, arg20, arg6)
                                arg19 = _mm256_mask_add_epi64(k1_153, arg19, arg6)
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            var_460 = _mm256_mask_storeu_ps(k3_64, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), 
                                    zmm2))
                            zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                            zmm1 = _mm256_mask_and_epi32(arg5, arg18, zmm0)
                            int64_t k1_155 = _mm256_mask_test_epi32_mask(k3_64, arg18, zmm0)
                            _kortest_mask8_u8(k1_155, k1_155)
                            
                            if (not(z_1))
                                char temp0_1709 = _cvtmask32_u32(k1_155)
                                
                                if ((temp0_1709 & 1) == 0)
                                    if ((temp0_1709 & 2) != 0)
                                        goto label_14016b9fe
                                    
                                    goto label_14016b639
                                
                                zmm2[0].o = __vpbroadcastw_xmmdq_memw(*arg20[0].o)
                                
                                if ((temp0_1709 & 2) != 0)
                                label_14016b9fe:
                                    uint64_t rax_177 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg20[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_177, 1)
                                    
                                    if ((temp0_1709 & 4) == 0)
                                        goto label_14016b643
                                    
                                    goto label_14016ba14
                                
                            label_14016b639:
                                
                                if ((temp0_1709 & 4) == 0)
                                label_14016b643:
                                    
                                    if ((temp0_1709 & 8) != 0)
                                        goto label_14016ba2f
                                    
                                    goto label_14016b64d
                                
                            label_14016ba14:
                                zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_1709 & 8) != 0)
                                label_14016ba2f:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                                    int64_t rax_179 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_179, 3)
                                    
                                    if ((temp0_1709 & 0x10) == 0)
                                        goto label_14016b657
                                    
                                    goto label_14016ba51
                                
                            label_14016b64d:
                                
                                if ((temp0_1709 & 0x10) != 0)
                                label_14016ba51:
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *arg19[0].o, 4)
                                    
                                    if ((temp0_1709 & 0x20) != 0)
                                    label_14016ba60:
                                        uint64_t rax_181 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg19[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_181, 5)
                                        
                                        if ((temp0_1709 & 0x40) == 0)
                                            goto label_14016b66b
                                        
                                        goto label_14016ba76
                                else
                                label_14016b657:
                                    
                                    if ((temp0_1709 & 0x20) != 0)
                                        goto label_14016ba60
                                
                                if ((temp0_1709 & 0x40) != 0)
                                label_14016ba76:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                    zmm2[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                                    z_1 = temp0_1709 == 0
                                    
                                    if (temp0_1709 s< 0)
                                    label_14016ba8f:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg19, 1)
                                        int64_t rax_183 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm2[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rax_183, 7)
                                else
                                label_14016b66b:
                                    z_1 = temp0_1709 == 0
                                    
                                    if (temp0_1709 s< 0)
                                        goto label_14016ba8f
                                
                                zmm2 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm2[0].o), 0xffffff01))
                            
                            zmm0 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, zmm1, zmm1), zmm2)
                            var_440 = _mm256_mask_storeu_ps(k3_64, zmm0)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 2))
                        int64_t k1_158 = _kand_mask8(k2_51, arg5)
                        _kortest_mask8_u8(k1_158, k1_158)
                        
                        if (not(z_1))
                            int64_t k3_65 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_51, arg10, 6)
                            _kortest_mask8_u8(k3_65, k3_65)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_480 = _mm256_mask_storeu_ps(k3_65, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k3_65, zmm0)
                                var_440 = _mm256_mask_storeu_ps(k3_65, zmm0)
                            
                            int64_t k1_159 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k1_158, arg10, 6, 4)
                            _kortest_mask8_u8(k1_159, k1_159)
                            
                            if (not(z_1))
                                zmm0[0].o = zx.o(0)
                                var_480 = _mm256_mask_storeu_ps(k1_159, zmm0)
                                var_460 = _mm256_mask_storeu_ps(k1_159, zmm0)
                                var_440 = _mm256_mask_storeu_ps(k1_159, zmm0)
                
                arg6 = var_580.32
                arg7 = var_560.32
                zmm5 = var_540.32
                float temp0_1721[0x8] = _mm256_sub_ps(var_480, arg6)
                float temp0_1722[0x8] = _mm256_sub_ps(var_460, arg7)
                zmm2 = _mm256_sub_ps(var_440, zmm5)
                zmm0 = _mm256_fmadd_ps(temp0_1721, arg15, arg6)
                zmm1 = _mm256_fmadd_ps(temp0_1722, arg15, arg7)
                zmm2 = _mm256_fmadd_ps(zmm2, arg15, zmm5)
                var_580.32 = _mm256_mask_storeu_ps(k2_51, zmm0)
                var_560.32 = _mm256_mask_storeu_ps(k2_51, zmm1)
                var_540.32 = _mm256_mask_storeu_ps(k2_51, zmm2)
        
        int64_t k1_160 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_9, temp0_966, arg8)
        _kortest_mask8_u8(k1_160, k1_160)
        
        if (not(z_1))
            zmm0[0].o = zx.o(0)
            var_580.32 = _mm256_mask_storeu_ps(k1_160, zmm0)
            var_560.32 = _mm256_mask_storeu_ps(k1_160, zmm0)
            var_540.32 = _mm256_mask_storeu_ps(k1_160, zmm0)
        
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
        zmm0[0].o = zmm1[0].q | zmm5[0] << 0x40
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
        zmm0[0].o = zmm2[0] | zmm1[0].q << 0x40
        int128_t var_1a0_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        int128_t var_190_1 = zmm0[0].o
        uint64_t i = zx.q(i_2)
        
        do
            uint64_t rcx_32 = _tzcnt_u64(i)
            int64_t var_120[0x4] = arg11
            result = sx.q(*(&var_120 + ((zx.q(rcx_32.d) & 7) << 2))) * 0x30
            zmm0[0].o = (&var_200)[rcx_32]
            *(arg1 + result + 0x20) = zmm0[0].o
            i &= rol.q(-2, rcx_32.b)
        while (i != 0)
else
    zmm0[0].o = zx.o(arg4)
    zmm0 = _mm256_broadcastd_epi32(_mm256_slli_epi32(zmm0, 2)[0])
    float var_140_1[0x8] = zmm0
    zmm0[0].o = zx.o(r10)
    zmm1[0].o = 4
    zmm0[0].o = __vpaddq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    float var_160_1[0x8] = _mm256_broadcastq_epi64(zmm0[0].q)
    float temp0_5[0x8] = _mm256_broadcastss_ps(zmm2[0].o)
    temp0_5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_5[0].o, temp0_5[0].o)
    arg31[0] = temp0_5[0].o f>= zmm2[0].d
    arg31[0] = neg.b(arg31[0])
    temp0_5[0].o = _mm_mask_set1_epi8(arg5, arg31)
    int128_t var_2d0_1 = temp0_5[0].o
    temp0_5[0].o = arg6[0].o
    temp0_5[0] = float.s(arg28 - 1)
    int32_t rcx_6 = arg28 - 2
    temp0_5[0].o = temp0_5[0].o f* zmm2[0].d
    int32_t rbx_2 = int.d(temp0_5[0]) s>> 0x1f
    int32_t rbx_3 = rbx_2 & not.d(rbx_2)
    bool z = rcx_6 == rbx_3
    
    if (not(z) && rcx_6 - rbx_3 s< 0 == add_overflow(rcx_6, neg.d(rbx_3)))
        rcx_6 = rbx_3
    
    zmm1 = _mm256_mask_set1_epi32(arg5, rcx_6)
    var_6a0 = zmm1
    zmm0 = _mm256_broadcastss_ps(temp0_5[0].o)
    float var_180_1[0x8] = zmm0
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
    r14 = 0
    
    do
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r14), 3), 
            data_143442140)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_2
        uint32_t temp0_54[0x8]
        temp0_54, k1_2 = _mm256_mmask_i32gather_epi32(k1_1, *(arg2 + zmm2[0]))
        arg21 = temp0_54
        zmm2 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 4)
        int64_t k1_4
        uint32_t temp0_56[0x8]
        temp0_56, k1_4 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + zmm2[0]))
        arg6 = temp0_56
        zmm2 = __vpmulld_ymmqq_ymmqq_memqq(arg6, var_140_1)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_6
        uint32_t temp0_59[0x8]
        temp0_59, k1_6 = _mm256_mmask_i32gather_epi32(k1_5, *(arg3 + zmm2[0]))
        arg20 = temp0_59
        uint64_t k6_1 = _mm256_cmp_epi32_mask(arg5, arg20, arg12, 4)
        _kortest_mask8_u8(k6_1, k6_1)
        int128_t var_420
        int128_t var_400
        int128_t var_3e0
        int64_t k1_44
        
        if (z)
        label_140168e78:
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg20, arg12)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
            label_140168e84:
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
            zmm28 = _mm256_mask_srli_epi32(k6_1, arg6, 0x1c)
            zmm0 = _mm256_mask_slli_epi32(arg5, zmm28, 2)
            int64_t k2_4
            uint32_t temp0_63[0x8]
            temp0_63, k2_4 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k6_1), 
                *(&data_143442890 + zmm0[0].q))
            zmm2 = temp0_63
            zmm26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, 
                _mm256_srli_epi32(arg6, 0x18), 0xf)
            arg23 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm26, 7)
            zmm0 = _mm256_mask_slli_epi32(arg5, zmm28, 3)
            arg7 = __vpbroadcastd_ymmqq_memd(3)
            zmm0 = _mm256_mask_or_epi32(k6_1, arg23, zmm0)
            int64_t r13_1 = sx.q(zmm0[0])
            int64_t r11_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t rbx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t rsi_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
            int64_t rax_24 = sx.q(zmm0[0])
            int64_t rcx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
            int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2))
            int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
            zmm0[0].o = zx.o(*(r13_1 + &data_1434428b0))
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r11_1 + &data_1434428b0), 1)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rbx_5 + &data_1434428b0), 2)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rsi_2 + &data_1434428b0), 3)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rax_24 + &data_1434428b0), 4)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(rcx_9 + &data_1434428b0), 5)
            zmm0[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r8_1 + &data_1434428b0), 6)
            arg8[0].o = __vpinsrb_xmmdq_xmmdq_memb_immb(zmm0[0].o, *(r10_2 + &data_1434428b0), 7)
            int64_t k2_6 =
                _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, zmm28, arg7, 4), arg20, arg12, 4)
            _kortest_mask8_u8(k2_6, k2_6)
            arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
            
            if (not(z))
                arg18 = _mm256_mask_cvtepu8_epi32(k2_6, arg8[0].o)
            
            arg9[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
            int64_t k2_7 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k6_1, zmm28, arg7)
            _kortest_mask8_u8(k2_7, k2_7)
            uint64_t rax_8 = 1
            
            if (not(z))
                arg18 = _mm256_mask_set1_epi32(k2_7, 1)
            
            r10 = arg27
            zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg20[0].o)
            zmm1 = _mm256_cvtepi32_epi64(arg9[0].o)
            uint32_t temp0_90[0x8] =
                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k6_1, arg6, data_143442840)
            arg6 = _mm256_mask_set1_epi32(arg5, 1)
            arg7[0].o = zx.o(0)
            
            if (not(z))
                arg7 = _mm256_mask_slli_epi32(k2_7, _mm256_cvtepu8_epi32(arg8[0].q), 2)
            
            zmm5 = var_160_1
            arg11 = _mm256_add_epi64(zmm5, zmm1)
            arg26 = _mm256_mask_add_epi64(arg5, zmm5, zmm0)
            zmm20 = _mm256_mask_mullo_epi32(k6_1, arg18, zmm2)
            arg14 = _mm256_mask_mov_epi32(k6_1, arg7)
            int64_t k2_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k6_1, temp0_90, arg6)
            _kortest_mask8_u8(k2_8, k2_8)
            uint64_t var_520[0x4]
            
            if (z)
                zmm2[0].o = zx.o(0)
                var_6c0 = zmm2
                arg16[0].o = zx.o(0)
                arg15[0].o = zx.o(0)
            else
                arg6 = __vpbroadcastd_ymmqq_memd(8)
                zmm2 = _mm256_mask_and_epi32(arg5, zmm26, arg6)
                int64_t k3_1 = _mm256_mask_testn_epi32_mask(k2_8, zmm26, arg6)
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
                    label_14016643e:
                        int64_t k1_7 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, 
                            temp0_90, 2, 1)
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
                            zmm17 = _mm256_mask_add_epi32(arg5, temp0_90, arg12)
                            arg6[0].o = zx.o(arg29)
                            arg6[0].o f- 1f
                            z = arg6[0] == 1f
                            
                            if (not(arg6[0] < 1f))
                                int64_t k1_11 =
                                    _mm_mask_testn_epi16_mask(arg5, arg10[0].o, zmm25[0].o)
                                arg16 = _mm256_mask_blend_epi32(k1_11, zmm17, arg16)
                                arg13 =
                                    _mm256_mask_mov_epi64(arg5, _mm256_mask_mov_epi32(k1_11, arg15))
                                _mm256_mask_load_ps(arg5, var_6c0)
                            else
                                zmm2[0].o = _mm256_extracti128_si256(arg14, 1)
                                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                                arg6 = _mm256_cvtepi32_epi64(arg14[0].o)
                                var_520 = _mm256_mask_store_epi64(arg5, zmm20)
                                uint32_t temp0_122[0x8] =
                                    _mm256_mask_mullo_epi32(arg5, zmm20, temp0_90)
                                arg9[0].o = _mm256_extracti128_si256(temp0_122, 1)
                                arg6 = _mm256_mask_add_epi64(arg5, arg26, arg6)
                                zmm2 = _mm256_add_epi64(arg11, zmm2)
                                arg18 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 3)
                                arg7 = _mm256_cvtepi32_epi64(temp0_122[0].o)
                                zmm18 = _mm256_mask_cvtepi32_epi64(arg5, arg9[0].o)
                                arg6 =
                                    _mm256_add_epi64(arg7, _mm256_mask_add_epi64(arg5, arg6, arg18))
                                uint64_t temp0_132[0x4] = _mm256_mask_add_epi64(arg5, zmm18, 
                                    _mm256_mask_add_epi64(arg5, zmm2, arg18))
                                arg7 = __vpbroadcastq_ymmqq_memq(-4)
                                uint64_t temp0_134[0x4] =
                                    _mm256_mask_and_epi64(arg5, temp0_132, arg7)
                                uint64_t temp0_135[0x4] = _mm256_mask_and_epi64(arg5, arg6, arg7)
                                char temp0_136 = _cvtmask32_u32(arg5)
                                arg18 = _mm256_mask_min_epi32(arg5, 
                                    __vpmaxsd_ymmqq_ymmqq_memqq(
                                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(
                                            _mm256_mask_cvtepi32_ps(arg5, zmm17), temp0_5)), 
                                        data_142fc9440), 
                                    zmm17)
                                rax_8 = zx.q(arg28)
                                int32_t var_340_1[0x8] = arg14
                                uint64_t temp0_142[0x2] = _mm_mask_store_epi64(arg5, zmm19[0].o)
                                int128_t var_4f0
                                int128_t var_4e0
                                
                                if (rax_8.d s< 0x100)
                                    uint64_t temp0_195[0x4] = _mm256_mask_add_epi64(arg5, 
                                        temp0_135, _mm256_mask_cvtepi32_epi64(arg5, arg18[0].o))
                                    int128_t var_2f0
                                    zmm5[0].o = var_2f0
                                    
                                    if ((temp0_136 & 1) == 0)
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140166c51
                                        
                                        goto label_1401668aa
                                    
                                    rax_8 = zx.q(*temp0_195[0])
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 0)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140166c51:
                                        rax_8 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_195[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 1)
                                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_1401668bb
                                        
                                        goto label_140166c6a
                                    
                                label_1401668aa:
                                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_1401668bb:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140166c8c
                                        
                                        goto label_1401668ca
                                    
                                label_140166c6a:
                                    arg7[0].o = _mm256_extracti128_si256(temp0_195, 1)
                                    rax_8 = zx.q(*arg7[0].q)
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140166c8c:
                                        temp0_195[0].o = _mm256_extracti128_si256(temp0_195, 1)
                                        rax_8 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_195[0].o, 1))
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_1401668da
                                        
                                        goto label_140166cb5
                                    
                                label_1401668ca:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_140166cb5:
                                        rax_8 = zx.q(*zmm2[0])
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140166ccd:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_1401668ee
                                            
                                            goto label_140166cdf
                                    else
                                    label_1401668da:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140166ccd
                                    
                                    bool cond:15_1
                                    bool cond:19_1
                                    bool cond:24_1
                                    bool cond:26_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140166cdf:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 6)
                                        cond:15_1 = temp0_136 == 0
                                        cond:19_1 = temp0_136 == 0
                                        cond:24_1 = temp0_136 == 0
                                        cond:26_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140166cfb:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                zmm5[0].o, rax_8.d, 7)
                                    else
                                    label_1401668ee:
                                        cond:15_1 = temp0_136 == 0
                                        cond:19_1 = temp0_136 == 0
                                        cond:24_1 = temp0_136 == 0
                                        cond:26_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140166cfb
                                    
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
                                        zmm2 = _mm256_mask_blend_epi32(k3_3, arg18, zmm17)
                                        arg6 = _mm256_mask_mov_epi64(k0_5, arg18)
                                        arg18 = _mm256_mask_sub_epi32(k0_5, arg18, arg12)
                                        int64_t k0_6 = _mm256_cmp_epi32_mask(k3_3, arg18, zmm17, 2)
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
                                            bool cond:34_1
                                            
                                            do
                                                arg6 = _mm256_mask_mov_epi64(k0_5, arg18)
                                                zmm5 = _mm256_cvtepi32_epi64(arg6[0].o)
                                                arg13 = _mm256_mask_add_epi64(k0_5, temp0_135, zmm5)
                                                int64_t k0_7 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(
                                                    k0_5, arg7[0].o, data_142fc92e0)
                                                char temp0_227 = _cvtmask32_u32(k0_7)
                                                
                                                if ((temp0_227 & 1) == 0)
                                                    if ((temp0_227 & 2) != 0)
                                                        goto label_14016699e
                                                    
                                                    goto label_140166aa4
                                                
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*arg13[0].q), 0)
                                                
                                                if ((temp0_227 & 2) != 0)
                                                label_14016699e:
                                                    uint16_t rax_37[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_37, 1)
                                                    arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    
                                                    if ((temp0_227 & 4) == 0)
                                                        goto label_140166ab3
                                                    
                                                    goto label_1401669b7
                                                
                                            label_140166aa4:
                                                arg7[0].o = _mm256_extracti128_si256(arg6, 1)
                                                
                                                if ((temp0_227 & 4) == 0)
                                                label_140166ab3:
                                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                    
                                                    if ((temp0_227 & 8) != 0)
                                                        goto label_1401669da
                                                    
                                                    goto label_140166ac1
                                                
                                            label_1401669b7:
                                                zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*zmm5[0]), 2)
                                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                
                                                if ((temp0_227 & 8) != 0)
                                                label_1401669da:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    uint16_t rax_41[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(zmm5[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_41, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_7, temp0_134, arg7)
                                                    
                                                    if ((temp0_227 & 0x10) == 0)
                                                        goto label_140166ad0
                                                    
                                                    goto label_140166a07
                                                
                                            label_140166ac1:
                                                arg13 = _mm256_mask_add_epi64(k0_7, temp0_134, arg7)
                                                
                                                if ((temp0_227 & 0x10) == 0)
                                                label_140166ad0:
                                                    
                                                    if ((temp0_227 & 0x20) != 0)
                                                        goto label_140166a1d
                                                    
                                                    goto label_140166ad9
                                                
                                            label_140166a07:
                                                arg25[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg25[0].o, zx.d(*arg13[0].q), 4)
                                                
                                                if ((temp0_227 & 0x20) != 0)
                                                label_140166a1d:
                                                    uint16_t rax_45[0x2] = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1))
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, rax_45, 5)
                                                    
                                                    if ((temp0_227 & 0x40) == 0)
                                                        goto label_140166ae2
                                                    
                                                    goto label_140166a30
                                                
                                            label_140166ad9:
                                                
                                                if ((temp0_227 & 0x40) != 0)
                                                label_140166a30:
                                                    arg7[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg25[0].o, zx.d(*arg7[0].q), 6)
                                                    
                                                    if (temp0_227 s< 0)
                                                    label_140166a4d:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        uint32_t rax_49 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1))
                                                        arg25[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg25[0].o, rax_49, 7)
                                                else
                                                label_140166ae2:
                                                    
                                                    if (temp0_227 s< 0)
                                                        goto label_140166a4d
                                                
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
                                                cond:34_1 = rdi_5 != rax_8.b
                                                
                                                if (rdi_5 != rax_8.b)
                                                    arg7[0].o = arg9[0].o ^ arg17[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_8, zmm25)
                                                arg13 = _mm256_mask_mov_epi32(k4_2, zmm2)
                                                arg18 = _mm256_mask_sub_epi32(k0_8, arg6, arg12)
                                                arg17[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_8, arg18, zmm17, 2), 
                                                    arg7[0].o)
                                                arg7[0].o = arg17[0].o & arg10[0].o
                                                k0_5 = _mm_mask_test_epi16_mask(k0_8, arg7[0].o, 
                                                    arg14[0].o)
                                                _kortest_mask8_u8(k0_5, k0_5)
                                                rdi_5 = _cvtmask32_u32(k0_5)
                                                zmm25 = _mm256_mask_mov_epi64(k0_5, arg6)
                                                zmm2 = arg13
                                            while (cond:34_1)
                                    
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
                                            bool cond:38_1
                                            
                                            do
                                                arg7 = _mm256_mask_add_epi64(k0_12, temp0_135, 
                                                    _mm256_cvtepi32_epi64(arg6[0].o))
                                                int64_t k0_13 = _mm_mask_test_epi16_mask(k0_12, 
                                                    arg8[0].o, zmm25[0].o)
                                                char temp0_335 = _cvtmask32_u32(k0_13)
                                                
                                                if ((temp0_335 & 1) == 0)
                                                    if ((temp0_335 & 2) != 0)
                                                        goto label_140166ffe
                                                    
                                                    goto label_1401670fa
                                                
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*arg7[0].q), 0)
                                                
                                                if ((temp0_335 & 2) != 0)
                                                label_140166ffe:
                                                    uint32_t rax_71 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_71, 1)
                                                    arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                                    
                                                    if ((temp0_335 & 4) == 0)
                                                        goto label_140167109
                                                    
                                                    goto label_140167017
                                                
                                            label_1401670fa:
                                                arg9[0].o = _mm256_extracti128_si256(arg6, 1)
                                                
                                                if ((temp0_335 & 4) == 0)
                                                label_140167109:
                                                    arg18 =
                                                        _mm256_mask_cvtepi32_epi64(k0_13, arg9[0].o)
                                                    
                                                    if ((temp0_335 & 8) != 0)
                                                        goto label_14016703b
                                                    
                                                    goto label_140167118
                                                
                                            label_140167017:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*zmm5[0]), 2)
                                                arg18 = _mm256_mask_cvtepi32_epi64(k0_13, arg9[0].o)
                                                
                                                if ((temp0_335 & 8) != 0)
                                                label_14016703b:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    uint32_t rax_75 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_75, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_13, temp0_134, 
                                                        arg18)
                                                    
                                                    if ((temp0_335 & 0x10) == 0)
                                                        goto label_140167127
                                                    
                                                    goto label_140167068
                                                
                                            label_140167118:
                                                arg7 =
                                                    _mm256_mask_add_epi64(k0_13, temp0_134, arg18)
                                                
                                                if ((temp0_335 & 0x10) == 0)
                                                label_140167127:
                                                    
                                                    if ((temp0_335 & 0x20) != 0)
                                                        goto label_14016707e
                                                    
                                                    goto label_140167130
                                                
                                            label_140167068:
                                                arg19[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                    arg19[0].o, zx.d(*arg7[0].q), 4)
                                                
                                                if ((temp0_335 & 0x20) != 0)
                                                label_14016707e:
                                                    uint32_t rax_79 = zx.d(
                                                        *__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, rax_79, 5)
                                                    
                                                    if ((temp0_335 & 0x40) == 0)
                                                        goto label_140167139
                                                    
                                                    goto label_140167091
                                                
                                            label_140167130:
                                                
                                                if ((temp0_335 & 0x40) != 0)
                                                label_140167091:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                        arg19[0].o, zx.d(*zmm5[0]), 6)
                                                    
                                                    if (temp0_335 s< 0)
                                                    label_1401670ae:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        uint32_t rax_83 = zx.d(*
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1))
                                                        arg19[0].o = __vpinsrw_xmmu16_xmmu16_gpr32u16_imm8_avx512(
                                                            arg19[0].o, rax_83, 7)
                                                else
                                                label_140167139:
                                                    
                                                    if (temp0_335 s< 0)
                                                        goto label_1401670ae
                                                
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
                                                cond:38_1 = rdi_6 != rax_8.b
                                                
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
                                            while (cond:38_1)
                                    
                                    arg16 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_12, arg10[0].o, zmm25[0].o), 
                                        arg13, arg16)
                                    uint64_t temp0_402[0x4] = _mm256_mask_add_epi64(k0_12, 
                                        temp0_135, _mm256_cvtepi32_epi64(arg16[0].o))
                                    int128_t var_4c0
                                    
                                    if ((temp0_136 & 1) != 0)
                                        rax_8 = zx.q(*temp0_402[0])
                                        arg7[0].o = var_4c0
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 0)
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = zx.q(
                                                *__vpextrq_gpr64q_xmmdq_immb(temp0_402[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 1)
                                    else
                                        arg7[0].o = var_4c0
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = zx.q(
                                                *__vpextrq_gpr64q_xmmdq_immb(temp0_402[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 1)
                                    
                                    arg6[0].o = _mm256_extracti128_si256(arg16, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140165fb7
                                        
                                        goto label_14016757d
                                    
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(temp0_402, 1)
                                    arg7[0].o = zmm5[0].o
                                    rax_8 = zx.q(*arg7[0].q)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm5[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140165fb7:
                                        temp0_402[0].o = _mm256_extracti128_si256(temp0_402, 1)
                                        rax_8 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_402[0].o, 1))
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(k0_12, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14016758d
                                        
                                        goto label_140165fe0
                                    
                                label_14016757d:
                                    zmm2 = _mm256_mask_add_epi64(k0_12, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_140165fe0:
                                        rax_8 = zx.q(*zmm2[0])
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140165ff8:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_1401675a1
                                            
                                            goto label_14016600a
                                    else
                                    label_14016758d:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140165ff8
                                    
                                    bool cond:32_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_14016600a:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rax_8.d, 6)
                                        cond:32_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140166026:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg7[0].o, rax_8.d, 7)
                                    else
                                    label_1401675a1:
                                        cond:32_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140166026
                                    
                                    int64_t k1_25 =
                                        _mm_mask_testn_epi16_mask(k0_12, arg10[0].o, arg14[0].o)
                                    _mm256_sub_epi32(arg13, arg12)
                                    arg13 = _mm256_mask_mov_epi32(k1_25, arg15)
                                    zmm2[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_12, 
                                            arg13, zmm17), 
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
                                    uint64_t temp0_415[0x4] = _mm256_mask_add_epi64(arg5, 
                                        temp0_135, _mm256_cvtepi32_epi64(arg13[0].o))
                                    
                                    if ((temp0_136 & 1) == 0)
                                        zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                        
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140166064
                                        
                                        goto label_140167625
                                    
                                    rax_8 = zx.q(*temp0_415[0])
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 0)
                                    zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140166064:
                                        rax_8 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_415[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg13, 1)
                                        var_4c0 = arg7[0].o
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_14016763e
                                        
                                        goto label_140166085
                                    
                                label_140167625:
                                    arg6[0].o = _mm256_extracti128_si256(arg13, 1)
                                    var_4c0 = arg7[0].o
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_14016763e:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_1401660b0
                                        
                                        goto label_14016764d
                                    
                                label_140166085:
                                    arg7[0].o = _mm256_extracti128_si256(temp0_415, 1)
                                    arg7[0].o = var_4c0
                                    rax_8 = zx.q(*arg7[0].q)
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_1401660b0:
                                        temp0_415[0].o = _mm256_extracti128_si256(temp0_415, 1)
                                        rax_8 =
                                            zx.q(*__vpextrq_gpr64q_xmmdq_immb(temp0_415[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14016765d
                                        
                                        goto label_1401660d9
                                    
                                label_14016764d:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_1401660d9:
                                        rax_8 = zx.q(*zmm2[0])
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_1401660f1:
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_140167671
                                            
                                            goto label_140166103
                                    else
                                    label_14016765d:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_1401660f1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140166103:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = zx.q(*arg6[0].q)
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rax_8.d, 6)
                                        arg6[0].o = arg7[0].o & arg14[0].o
                                        
                                        if (temp0_136 s< 0)
                                        label_140166124:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = zx.q(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(
                                                arg8[0].o, rax_8.d, 7)
                                    else
                                    label_140167671:
                                        arg6[0].o = arg7[0].o & arg14[0].o
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140166124
                                    
                                    arg14 = var_340_1
                                    zmm2 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    arg6[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, zmm25[0].o)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                else
                                    arg6 = _mm256_mask_add_epi32(arg5, arg18, arg18)
                                    uint64_t temp0_145[0x4] = _mm256_mask_add_epi64(arg5, 
                                        temp0_135, _mm256_cvtepi32_epi64(arg6[0].o))
                                    int128_t var_2e0
                                    zmm5[0].o = var_2e0
                                    
                                    if ((temp0_136 & 1) == 0)
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140166b81
                                        
                                        goto label_1401665a8
                                    
                                    rax_8 = temp0_145[0]
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 0)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140166b81:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_145[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_1401665b8
                                        
                                        goto label_140166b9c
                                    
                                label_1401665a8:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_1401665b8:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140166bbb
                                        
                                        goto label_1401665c7
                                    
                                label_140166b9c:
                                    arg7[0].o = _mm256_extracti128_si256(temp0_145, 1)
                                    rax_8 = arg7[0].q
                                    zmm5[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140166bbb:
                                        temp0_145[0].o = _mm256_extracti128_si256(temp0_145, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_145[0].o, 1)
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_1401665d7
                                        
                                        goto label_140166bdc
                                    
                                label_1401665c7:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_140166bdc:
                                        rax_8 = zmm2[0]
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_140166bf0:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_1401665eb
                                            
                                            goto label_140166c05
                                    else
                                    label_1401665d7:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_140166bf0
                                    
                                    bool cond:16_1
                                    bool cond:20_1
                                    bool cond:25_1
                                    bool cond:27_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_140166c05:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        zmm5[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 6)
                                        cond:16_1 = temp0_136 == 0
                                        cond:20_1 = temp0_136 == 0
                                        cond:25_1 = temp0_136 == 0
                                        cond:27_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140166c1e:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_1401665eb:
                                        cond:16_1 = temp0_136 == 0
                                        cond:20_1 = temp0_136 == 0
                                        cond:25_1 = temp0_136 == 0
                                        cond:27_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140166c1e
                                    
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
                                        arg17 = _mm256_mask_blend_epi32(k3_2, arg18, zmm17)
                                        arg7 = _mm256_mask_sub_epi32(k0_1, arg18, arg12)
                                        int64_t k0_2 = _mm256_cmp_epi32_mask(k3_2, arg7, zmm17, 2)
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
                                            bool cond:35_1
                                            
                                            do
                                                arg6 = arg7
                                                arg7 = _mm256_add_epi32(arg7, arg7)
                                                zmm25 = _mm256_mask_cvtepi32_epi64(k0_1, arg7[0].o)
                                                arg13 =
                                                    _mm256_mask_add_epi64(k0_1, temp0_135, zmm25)
                                                zmm25[0].o =
                                                    _mm_mask_load_epi64(k0_1, data_142fc92e0)
                                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_1, 
                                                    arg14[0].o, zmm25[0].o)
                                                char temp0_175 = _cvtmask32_u32(k0_3)
                                                
                                                if ((temp0_175 & 1) == 0)
                                                    if ((temp0_175 & 2) != 0)
                                                        goto label_140166685
                                                    
                                                    goto label_14016677d
                                                
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg13[0].q, 0)
                                                
                                                if ((temp0_175 & 2) != 0)
                                                label_140166685:
                                                    int64_t rax_26 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_26, 1)
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    
                                                    if ((temp0_175 & 4) == 0)
                                                        goto label_14016678c
                                                    
                                                    goto label_1401666a1
                                                
                                            label_14016677d:
                                                arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                
                                                if ((temp0_175 & 4) == 0)
                                                label_14016678c:
                                                    arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                    
                                                    if ((temp0_175 & 8) != 0)
                                                        goto label_1401666c1
                                                    
                                                    goto label_14016679a
                                                
                                            label_1401666a1:
                                                arg9[0].o = _mm256_extracti128_si256(arg13, 1)
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg9[0].q, 2)
                                                arg7 = _mm256_cvtepi32_epi64(arg7[0].o)
                                                
                                                if ((temp0_175 & 8) != 0)
                                                label_1401666c1:
                                                    arg9[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    int64_t rax_28 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg9[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_28, 3)
                                                    arg13 =
                                                        _mm256_mask_add_epi64(k0_3, temp0_134, arg7)
                                                    
                                                    if ((temp0_175 & 0x10) == 0)
                                                        goto label_1401667a9
                                                    
                                                    goto label_1401666e8
                                                
                                            label_14016679a:
                                                arg13 = _mm256_mask_add_epi64(k0_3, temp0_134, arg7)
                                                
                                                if ((temp0_175 & 0x10) == 0)
                                                label_1401667a9:
                                                    
                                                    if ((temp0_175 & 0x20) != 0)
                                                        goto label_1401666f8
                                                    
                                                    goto label_1401667b2
                                                
                                            label_1401666e8:
                                                arg22[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg22[0].o, *arg13[0].q, 4)
                                                
                                                if ((temp0_175 & 0x20) != 0)
                                                label_1401666f8:
                                                    int64_t rax_30 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *rax_30, 5)
                                                    
                                                    if ((temp0_175 & 0x40) == 0)
                                                        goto label_1401667bb
                                                    
                                                    goto label_14016670e
                                                
                                            label_1401667b2:
                                                
                                                if ((temp0_175 & 0x40) != 0)
                                                label_14016670e:
                                                    arg7[0].o = _mm256_extracti128_si256(arg13, 1)
                                                    arg22[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg22[0].o, *arg7[0].q, 6)
                                                    
                                                    if (temp0_175 s< 0)
                                                    label_140166728:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg13, 1)
                                                        int64_t rax_32 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        arg22[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg22[0].o, *rax_32, 7)
                                                else
                                                label_1401667bb:
                                                    
                                                    if (temp0_175 s< 0)
                                                        goto label_140166728
                                                
                                                arg7 = _mm256_mask_cvtepu16_epi32(k0_3, arg22[0].o)
                                                arg7[0].o = _mm_mask_mov_epi16(
                                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_memi32_avx512(
                                                        k0_3, arg7, var_6a0), 
                                                    zmm2[0].o)
                                                arg9[0].o = zx.o(0)
                                                arg8[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                                int64_t k4_1 = _mm_mask_testn_epi16_mask(k0_3, 
                                                    arg7[0].o, arg8[0].o)
                                                zmm5[0].o = arg7[0].o & arg10[0].o
                                                int64_t k0_4 = _mm_mask_test_epi16_mask(k0_3, 
                                                    zmm5[0].o, arg8[0].o)
                                                rax_8 = zx.q(_cvtmask32_u32(k0_4))
                                                cond:25_1 = rcx_10 == rax_8.b
                                                cond:27_1 = rcx_10 == rax_8.b
                                                cond:35_1 = rcx_10 != rax_8.b
                                                
                                                if (rcx_10 != rax_8.b)
                                                    arg9[0].o = arg7[0].o ^ zmm2[0].o
                                                
                                                _mm256_mask_mov_epi64(k0_4, arg18)
                                                arg13 = _mm256_mask_mov_epi32(k4_1, arg17)
                                                arg7 = _mm256_sub_epi32(arg6, arg12)
                                                zmm2[0].o = _mm_mask_mov_epi16(
                                                    _mm256_cmp_epi32_mask(k0_4, arg7, zmm17, 2), 
                                                    arg9[0].o)
                                                arg14[0].o = zmm2[0].o & arg10[0].o
                                                k0_1 = _mm_mask_test_epi16_mask(k0_4, arg14[0].o, 
                                                    arg8[0].o)
                                                _kortest_mask8_u8(k0_1, k0_1)
                                                rcx_10 = _cvtmask32_u32(k0_1)
                                                arg18 = _mm256_mask_mov_epi64(k0_1, arg6)
                                                arg17 = arg13
                                            while (cond:35_1)
                                    
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
                                            bool cond:39_1
                                            
                                            do
                                                uint32_t temp0_296[0x8] =
                                                    _mm256_mask_add_epi32(k0_9, arg6, arg6)
                                                arg7 = _mm256_mask_add_epi64(k0_9, temp0_135, 
                                                    _mm256_mask_cvtepi32_epi64(k0_9, 
                                                        temp0_296[0].o))
                                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, 
                                                    arg8[0].o, zmm25[0].o)
                                                char temp0_299 = _cvtmask32_u32(k0_10)
                                                
                                                if ((temp0_299 & 1) == 0)
                                                    if ((temp0_299 & 2) != 0)
                                                        goto label_140166db5
                                                    
                                                    goto label_140166ea1
                                                
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg7[0].q, 0)
                                                
                                                if ((temp0_299 & 2) != 0)
                                                label_140166db5:
                                                    int64_t rax_60 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_60, 1)
                                                    arg9[0].o = _mm256_extracti32x4_epi32(k0_10, 
                                                        temp0_296, 1)
                                                    
                                                    if ((temp0_299 & 4) == 0)
                                                        goto label_140166eb1
                                                    
                                                    goto label_140166dd2
                                                
                                            label_140166ea1:
                                                arg9[0].o =
                                                    _mm256_extracti32x4_epi32(k0_10, temp0_296, 1)
                                                
                                                if ((temp0_299 & 4) == 0)
                                                label_140166eb1:
                                                    arg18 =
                                                        _mm256_mask_cvtepi32_epi64(k0_10, arg9[0].o)
                                                    
                                                    if ((temp0_299 & 8) != 0)
                                                        goto label_140166df3
                                                    
                                                    goto label_140166ec0
                                                
                                            label_140166dd2:
                                                zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *zmm5[0], 2)
                                                arg18 = _mm256_mask_cvtepi32_epi64(k0_10, arg9[0].o)
                                                
                                                if ((temp0_299 & 8) != 0)
                                                label_140166df3:
                                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    int64_t rax_62 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_62, 3)
                                                    arg7 = _mm256_mask_add_epi64(k0_10, temp0_134, 
                                                        arg18)
                                                    
                                                    if ((temp0_299 & 0x10) == 0)
                                                        goto label_140166ecf
                                                    
                                                    goto label_140166e1a
                                                
                                            label_140166ec0:
                                                arg7 =
                                                    _mm256_mask_add_epi64(k0_10, temp0_134, arg18)
                                                
                                                if ((temp0_299 & 0x10) == 0)
                                                label_140166ecf:
                                                    
                                                    if ((temp0_299 & 0x20) != 0)
                                                        goto label_140166e2a
                                                    
                                                    goto label_140166ed8
                                                
                                            label_140166e1a:
                                                arg24[0].o =
                                                    __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                    arg24[0].o, *arg7[0].q, 4)
                                                
                                                if ((temp0_299 & 0x20) != 0)
                                                label_140166e2a:
                                                    int64_t rax_64 =
                                                        __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *rax_64, 5)
                                                    
                                                    if ((temp0_299 & 0x40) == 0)
                                                        goto label_140166ee1
                                                    
                                                    goto label_140166e40
                                                
                                            label_140166ed8:
                                                
                                                if ((temp0_299 & 0x40) != 0)
                                                label_140166e40:
                                                    zmm5[0].o = _mm256_extracti128_si256(arg7, 1)
                                                    arg24[0].o =
                                                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                        arg24[0].o, *zmm5[0], 6)
                                                    
                                                    if (temp0_299 s< 0)
                                                    label_140166e5a:
                                                        arg7[0].o =
                                                            _mm256_extracti128_si256(arg7, 1)
                                                        int64_t rax_66 =
                                                            __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 
                                                            1)
                                                        arg24[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                                            arg24[0].o, *rax_66, 7)
                                                else
                                                label_140166ee1:
                                                    
                                                    if (temp0_299 s< 0)
                                                        goto label_140166e5a
                                                
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
                                                cond:39_1 = rcx_12 != rax_8.b
                                                
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
                                            while (cond:39_1)
                                    
                                    arg16 = _mm256_mask_blend_epi32(
                                        _mm_mask_testn_epi16_mask(k0_9, arg10[0].o, zmm25[0].o), 
                                        arg13, arg16)
                                    arg6 = _mm256_add_epi32(arg16, arg16)
                                    uint64_t temp0_350[0x4] = _mm256_mask_add_epi64(k0_9, 
                                        temp0_135, _mm256_cvtepi32_epi64(arg6[0].o))
                                    int128_t var_3c0
                                    
                                    if ((temp0_136 & 1) != 0)
                                        rax_8 = temp0_350[0]
                                        arg7[0].o = var_3c0
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 0)
                                        arg14 = var_340_1
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_350[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 1)
                                    else
                                        arg14 = var_340_1
                                        arg7[0].o = var_3c0
                                        arg17[0].o = temp0_142
                                        
                                        if ((temp0_136 & 2) != 0)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_350[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 1)
                                    
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_14016739f
                                        
                                        goto label_14016725e
                                    
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(temp0_350, 1)
                                    rax_8 = arg7[0].q
                                    arg7[0].o = zmm5[0].o
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_14016739f:
                                        temp0_350[0].o = _mm256_extracti128_si256(temp0_350, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_350[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(k0_9, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_14016726e
                                        
                                        goto label_1401673c0
                                    
                                label_14016725e:
                                    zmm2 = _mm256_mask_add_epi64(k0_9, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) != 0)
                                    label_1401673c0:
                                        rax_8 = zmm2[0]
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 4)
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                        label_1401673d4:
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 5)
                                            
                                            if ((temp0_136 & 0x40) == 0)
                                                goto label_140167282
                                            
                                            goto label_1401673e9
                                    else
                                    label_14016726e:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_1401673d4
                                    
                                    bool cond:33_1
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_1401673e9:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rax_8, 6)
                                        cond:33_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                        label_140167402:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140167282:
                                        cond:33_1 = temp0_136 == 0
                                        
                                        if (temp0_136 s< 0)
                                            goto label_140167402
                                    
                                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                    int64_t k1_21 =
                                        _mm_mask_testn_epi16_mask(k0_9, arg10[0].o, zmm2[0].o)
                                    _mm256_sub_epi32(arg13, arg12)
                                    arg13 = _mm256_mask_mov_epi32(k1_21, arg15)
                                    arg6[0].o = _mm_mask_mov_epi16(
                                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_9, 
                                            arg13, zmm17), 
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
                                    arg6 = _mm256_add_epi32(arg13, arg13)
                                    uint64_t temp0_365[0x4] = _mm256_mask_add_epi64(arg5, 
                                        temp0_135, _mm256_cvtepi32_epi64(arg6[0].o))
                                    
                                    if ((temp0_136 & 1) == 0)
                                        zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                        
                                        if ((temp0_136 & 2) != 0)
                                            goto label_140167434
                                        
                                        goto label_140167314
                                    
                                    rax_8 = temp0_365[0]
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 0)
                                    zmm20 = _mm256_mask_load_epi64(arg5, var_520)
                                    
                                    if ((temp0_136 & 2) != 0)
                                    label_140167434:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_365[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 1)
                                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                        
                                        if ((temp0_136 & 4) == 0)
                                            goto label_140167324
                                        
                                        goto label_14016744f
                                    
                                label_140167314:
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_136 & 4) == 0)
                                    label_140167324:
                                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                        
                                        if ((temp0_136 & 8) != 0)
                                            goto label_140167476
                                        
                                        goto label_140167333
                                    
                                label_14016744f:
                                    zmm5[0].o = arg7[0].o
                                    arg7[0].o = _mm256_extracti128_si256(temp0_365, 1)
                                    rax_8 = arg7[0].q
                                    arg7[0].o = zmm5[0].o
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 2)
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_136 & 8) != 0)
                                    label_140167476:
                                        temp0_365[0].o = _mm256_extracti128_si256(temp0_365, 1)
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(temp0_365[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 3)
                                        zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                        
                                        if ((temp0_136 & 0x10) == 0)
                                            goto label_140167343
                                        
                                        goto label_140167497
                                    
                                label_140167333:
                                    zmm2 = _mm256_mask_add_epi64(arg5, temp0_134, arg6)
                                    
                                    if ((temp0_136 & 0x10) == 0)
                                    label_140167343:
                                        
                                        if ((temp0_136 & 0x20) != 0)
                                            goto label_1401674ab
                                        
                                        goto label_14016734d
                                    
                                label_140167497:
                                    rax_8 = zmm2[0]
                                    arg9[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 4)
                                    
                                    if ((temp0_136 & 0x20) != 0)
                                    label_1401674ab:
                                        rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 5)
                                        
                                        if ((temp0_136 & 0x40) == 0)
                                            goto label_140167357
                                        
                                        goto label_1401674c0
                                    
                                label_14016734d:
                                    
                                    if ((temp0_136 & 0x40) != 0)
                                    label_1401674c0:
                                        arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                                        rax_8 = arg6[0].q
                                        arg9[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_8, 6)
                                        
                                        if (temp0_136 s< 0)
                                        label_1401674d9:
                                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                            rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                                *rax_8, 7)
                                    else
                                    label_140167357:
                                        
                                        if (temp0_136 s< 0)
                                            goto label_1401674d9
                                    
                                    var_3c0 = arg7[0].o
                                    zmm2 = _mm256_cvtepu16_epi32(arg7[0].o)
                                    arg6 = _mm256_cvtepu16_epi32(arg9[0].o)
                                
                                var_4f0 = arg8[0].o
                                var_4e0 = arg9[0].o
                                arg7[0].o = zx.o(0)
                                z = arg30 == 1
                                
                                if (not(z))
                                    arg6 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                                        _mm256_sub_epi32(arg6, zmm2), 1)
                                    zmm2 = _mm256_sub_ps(var_180_1, _mm256_cvtepi32_ps(zmm2))
                                    arg6 = _mm256_cvtepi32_ps(arg6)
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
                    arg7[0].o f- zmm5[0].d
                    z = arg7[0] f== zmm5[0].d
                    
                    if (not(arg7[0] f< zmm5[0].d))
                        arg16[0].o = zx.o(0)
                        arg15[0].o = zx.o(0)
                    else
                        zmm5[0].o f- 1f
                        bool c_2 = zmm5[0].d f< 1f
                        z = zmm5[0].d f== 1f
                        arg7 = _mm256_add_epi32(temp0_90, arg12)
                        
                        if (not(c_2))
                            arg16 = _mm256_mask_mov_epi32(k3_1, arg7)
                            arg15 = arg16
                        else
                            arg18 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(arg7), temp0_5)
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
                        goto label_14016643e
            
            zmm2[0].o = _mm256_extracti128_si256(arg14, 1)
            zmm17 = _mm256_mask_cvtepi32_epi64(arg5, zmm2[0].o)
            arg17 = arg14
            zmm18 = _mm256_mask_cvtepi32_epi64(arg5, arg14[0].o)
            zmm19 = _mm256_mask_mov_epi64(arg5, zmm20)
            zmm2 = _mm256_mask_mullo_epi32(arg5, arg16, zmm20)
            arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
            arg13 = _mm256_cvtepi32_epi64(arg6[0].o)
            arg14 = _mm256_cvtepi32_epi64(zmm2[0].o)
            uint64_t temp0_441[0x4] = _mm256_mask_add_epi64(arg5, arg14, zmm18)
            arg6 = _mm256_mask_add_epi64(arg5, arg13, zmm17)
            zmm20 = _mm256_mask_add_epi64(arg5, arg6, arg11)
            arg10 = _mm256_mask_add_epi64(arg5, temp0_441, arg26)
            int64_t k2_10 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, zmm28, 1)
            _kortest_mask8_u8(k2_10, k2_10)
            
            if (not(z))
                uint64_t k3_6 = _mm256_mask_testn_epi32_mask(k2_10, arg23, arg23)
                _kortest_mask8_u8(k3_6, k3_6)
                
                if (not(z))
                    uint64_t temp0_445[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                    zmm2 = _mm256_add_epi64(temp0_445, arg13)
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
                    zmm25 = _mm256_mask_add_epi64(arg5, zmm2, arg18)
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
                    temp0_461, k5_8 =
                        __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_7, *(r10 + zmm25[0].q))
                    arg9[0].o = temp0_461
                    arg18 = _mm256_insertf32x4(arg5, arg8, arg9[0].o, 1)
                    zmm25 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 0xc)
                    uint64_t temp0_464[0x4] = _mm256_mask_add_epi64(arg5, zmm2, zmm25)
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
                    temp0_469, k4_4 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_3, 
                        *(r10 + temp0_464[0]))
                    arg7[0].o = temp0_469
                    zmm2 = _mm256_insertf32x4(arg5, zmm25, arg7[0].o, 1)
                    zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    var_420.32 = _mm256_mask_storeu_ps(k3_6, arg6)
                    var_400.32 = _mm256_mask_storeu_ps(k3_6, arg18)
                    var_3e0.32 = _mm256_mask_storeu_ps(k3_6, zmm2)
                
                int64_t k2_11 = _mm256_mask_test_epi32_mask(k2_10, arg23, arg23)
                _kortest_mask8_u8(k2_11, k2_11)
                
                if (not(z))
                    zmm2 = _mm256_mask_slli_epi32(arg5, zmm26, 0x1f)
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
                    uint32_t temp0_496[0x8] = _mm256_mask_and_epi32(arg5, zmm26, arg18)
                    int64_t k3_8 = _mm256_mask_test_epi32_mask(k2_11, zmm26, arg18)
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
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_14, *zmm2[0])
                        arg6[0].o = temp0_502
                        zmm2 = _mm256_mask_add_epi64(k4_7, zmm2, arg18)
                        arg18 = _mm256_insertf32x4(arg5, arg8, arg6[0].o, 1)
                        arg6 = _mm256_mask_mov_epi64(arg5, zmm25)
                        zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                    
                    var_400.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, temp0_496, temp0_496), 
                            arg18))
                    arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 4)
                    arg7 = _mm256_mask_and_epi32(arg5, zmm26, arg18)
                    int64_t k3_11 = _mm256_mask_test_epi32_mask(k2_11, zmm26, arg18)
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
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_8, *zmm2[0])
                        arg6[0].o = temp0_514
                        arg18 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                    
                    var_3e0.32 = _mm256_mask_storeu_ps(k2_11, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, arg7, arg7), arg18))
            
            zmm2 = __vpbroadcastd_ymmqq_memd(1)
            arg5 = _mm256_cmp_epi32_mask(arg5, zmm28, zmm2, 4)
            int64_t k2_12 = _mm256_cmp_epi32_mask(k6_1, zmm28, zmm2, 4)
            _kortest_mask8_u8(k2_12, k2_12)
            int64_t k2_15
            
            if (not(z))
                uint64_t k2_13 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, zmm28, 3)
                _kortest_mask8_u8(k2_13, k2_13)
                
                if (not(z))
                    zmm2[0].o = zx.o(0)
                    uint64_t var_5c0_1[0x4] = zmm2
                    uint64_t var_5e0_1[0x4] = zmm2
                    uint64_t var_600_1[0x4] = zmm2
                    uint64_t var_620_1[0x4] = zmm2
                    var_640 = zmm2
                    uint64_t var_660_1[0x4] = zmm2
                    int64_t k3_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                        _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm26, 0x1f)), zmm28, 3)
                    uint64_t k4_10 = _mm256_cmp_epi32_mask(k3_15, arg20, arg12, 4)
                    _kortest_mask8_u8(k4_10, k4_10)
                    zmm2 = _mm256_mask_mov_epi64(arg5, arg26)
                    arg6 = arg11
                    
                    if (not(z))
                        uint64_t temp0_521[0x4] = __vpbroadcastq_ymmqq_memq(4)
                        int64_t k5_16 = _kshiftri_mask8(k4_10, 4)
                        arg6 = _mm256_mask_add_epi64(k5_16, arg11, temp0_521)
                        _mm256_mask_mov_epi64(arg5, arg26)
                        arg7 = _mm256_mask_add_epi64(k4_10, arg26, temp0_521)
                        uint64_t k1_29 = __kmovq_maskmskw_masku64_avx512(k6_1)
                        uint64_t k6_2 = _kshiftri_mask8(k4_10, 4)
                        int64_t k7_1 = __kmovq_maskmskw_masku64_avx512(k4_10)
                        temp0_521[0].o = zx.o(0)
                        int64_t k7_2
                        float temp0_525[0x4]
                        temp0_525, k7_2 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_1, *arg26[0].q)
                        temp0_521[0].o = temp0_525
                        int64_t k7_3 = __kmovq_maskmskw_masku64_avx512(k6_2)
                        arg9[0].o = zx.o(0)
                        int64_t k7_4
                        float temp0_526[0x4]
                        temp0_526, k7_4 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_3, *arg11[0])
                        arg9[0].o = temp0_526
                        var_600_1 = _mm256_mask_storeu_ps(k3_15, 
                            _mm256_insertf128_ps(temp0_521, arg9[0].o, 1))
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
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 3)
                    int64_t k4_12 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, zmm26, 2)
                    uint64_t k5_17 = _mm256_cmp_epi32_mask(k4_12, arg20, arg12, 4)
                    _kortest_mask8_u8(k5_17, k5_17)
                    
                    if (not(z))
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        var_520[0].d = _store_mask32(k6_1)
                        int64_t k6_4 = _kshiftri_mask8(k5_17, 4)
                        _mm256_mask_mov_epi64(arg5, arg6)
                        arg18 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        _mm256_mask_mov_epi64(arg5, zmm2)
                        zmm25 = _mm256_mask_add_epi64(k5_17, zmm2, arg7)
                        uint64_t k7_5 = _kshiftri_mask8(k5_17, 4)
                        int64_t k1_30 = __kmovq_maskmskw_masku64_avx512(k5_17)
                        arg7[0].o = zx.o(0)
                        int64_t k1_31
                        float temp0_545[0x4]
                        temp0_545, k1_31 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_30, *zmm2[0])
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
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_17, *zmm25[0].q)
                        arg8[0].o = temp0_552
                        arg9[0].o = zx.o(0)
                        int64_t k7_6
                        float temp0_553[0x4]
                        temp0_553, k7_6 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7_5, *arg18[0].q)
                        arg9[0].o = temp0_553
                        arg6 = _mm256_mask_add_epi64(k6_4, arg6, arg7)
                        k6_1 = _load_mask32(var_520[0].d)
                        var_640 =
                            _mm256_mask_storeu_ps(k4_12, _mm256_insertf128_ps(arg8, arg9[0].o, 1))
                    
                    int64_t k3_17 =
                        __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_16, zmm26, 4)
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
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_34, *zmm2[0])
                        arg18[0].o = temp0_559
                        int64_t k1_36 = __kmovq_maskmskw_masku64_avx512(k5_19)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t k1_37
                        float temp0_561[0x4]
                        temp0_561, k1_37 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_36, *arg6[0].q)
                        arg9[0].o = temp0_561
                        arg6 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_13, 4), arg6, arg7)
                        uint64_t temp0_563[0x4] = _mm256_mask_add_epi64(k4_13, zmm2, arg7)
                        arg7 = _mm256_insertf32x4(arg5, arg18, arg9[0].o, 1)
                        var_5c0_1 = _mm256_mask_storeu_ps(k3_17, arg7)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k4_14
                        float temp0_567[0x4]
                        temp0_567, k4_14 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_13, *temp0_563[0])
                        arg7[0].o = temp0_567
                        temp0_563[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_563[0].o, temp0_563[0].o)
                        int64_t k5_20
                        float temp0_569[0x4]
                        temp0_569, k5_20 =
                            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_19, *arg6[0].q)
                        temp0_563[0].o = temp0_569
                        var_620_1 = _mm256_mask_storeu_ps(k3_17, 
                            _mm256_insertf128_ps(arg7, temp0_563[0].o, 1))
                    
                    uint64_t temp0_572[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                    arg6 = __vpbroadcastq_ymmqq_memq(4)
                    arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                    zmm2 = _mm256_add_epi64(_mm256_add_epi64(temp0_572, arg13), arg6)
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
                        __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_39, *(r10 + zmm2[0]))
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
                    zmm25 = _mm256_mask_load_ps(arg5, var_640)
                    arg8 = var_620_1
                    arg18 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg18, arg5, arg7, 
                        var_600_1)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    float temp0_593[0x8] = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7))
                    arg9 = _mm256_broadcast_ss(1023f)
                    arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_div_ps(temp0_593, arg9), arg5, zmm25, var_5e0_1)
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
                    __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 3), arg5)
                int64_t k3_20 = _mm256_cmp_epi32_mask(k2_15, arg20, arg12, 4)
                _kortest_mask8_u8(k3_20, k3_20)
            
            int64_t k1_43
            
            if (z)
                zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                k1_43 = _mm256_cmp_epi32_mask(_mm256_cmp_epi32_mask(arg5, arg16, arg15, 4), arg20, 
                    arg12, 4)
                _kortest_mask8_u8(k1_43, k1_43)
                
                if (not(z))
                label_140168188:
                    zmm2 = _mm256_mask_mullo_epi32(arg5, arg15, zmm20)
                    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
                    arg13 = _mm256_cvtepi32_epi64(arg6[0].o)
                    arg14 = _mm256_cvtepi32_epi64(zmm2[0].o)
                    zmm2 = _mm256_mask_add_epi64(arg5, arg14, zmm18)
                    arg6 = _mm256_mask_add_epi64(arg5, arg13, zmm17)
                    zmm20 = _mm256_mask_add_epi64(arg5, arg6, arg11)
                    arg10 = _mm256_mask_add_epi64(arg5, zmm2, arg26)
                    int64_t k2_17 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, zmm28, 1)
                    _kortest_mask8_u8(k2_17, k2_17)
                    arg8 = var_6c0
                    float var_3a0[0x8]
                    float var_380[0x8]
                    float var_360[0x8]
                    
                    if (not(z))
                        uint64_t k3_22 = _mm256_mask_testn_epi32_mask(k2_17, arg23, arg23)
                        _kortest_mask8_u8(k3_22, k3_22)
                        
                        if (not(z))
                            uint64_t temp0_670[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                            zmm2 = _mm256_add_epi64(temp0_670, arg13)
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
                                k5_25, *(r10 + zmm5[0]))
                            arg6[0].o = temp0_680
                            arg6 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                            uint64_t temp0_682[0x4] = __vpbroadcastq_ymmqq_memq(8)
                            arg18 = _mm256_mask_add_epi64(arg5, zmm2, temp0_682)
                            zmm5 = _mm256_add_epi64(arg7, temp0_682)
                            int64_t k5_27 = __kmovq_maskmskw_masku64_avx512(k3_22)
                            zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                            int64_t k5_28
                            float temp0_686[0x4]
                            temp0_686, k5_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                k5_27, *(r10 + zmm5[0]))
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
                            uint64_t temp0_692[0x4] = _mm256_mask_add_epi64(arg5, zmm2, arg18)
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
                                k4_18, *(r10 + temp0_692[0]))
                            arg7[0].o = temp0_697
                            zmm2 = _mm256_insertf32x4(arg5, arg18, arg7[0].o, 1)
                            var_3a0 = _mm256_mask_storeu_ps(k3_22, arg6)
                            var_380 = _mm256_mask_storeu_ps(k3_22, zmm5)
                            var_360 = _mm256_mask_storeu_ps(k3_22, zmm2)
                        
                        int64_t k2_18 = _mm256_mask_test_epi32_mask(k2_17, arg23, arg23)
                        _kortest_mask8_u8(k2_18, k2_18)
                        
                        if (not(z))
                            zmm2 = _mm256_mask_slli_epi32(arg5, zmm26, 0x1f)
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
                                uint64_t temp0_708[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                                arg18 = _mm256_mask_add_epi64(arg5, 
                                    _mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                                zmm5 = _mm256_add_epi64(_mm256_add_epi64(temp0_708, arg13), arg7)
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
                                    k5_34, *(r10 + zmm5[0]))
                                arg7[0].o = temp0_717
                                arg7 = _mm256_insertf32x4(arg5, arg18, arg7[0].o, 1)
                            
                            var_3a0 = _mm256_mask_storeu_ps(k2_18, _mm256_mask_mov_ps(k3_23, arg7))
                            zmm5 = __vpbroadcastd_ymmqq_memd(2)
                            uint32_t temp0_722[0x8] = _mm256_mask_and_epi32(arg5, zmm26, zmm5)
                            int64_t k3_24 = _mm256_mask_test_epi32_mask(k2_18, zmm26, zmm5)
                            _kortest_mask8_u8(k3_24, k3_24)
                            
                            if (not(z))
                                uint64_t temp0_723[0x4] = __vpbroadcastq_ymmqq_memq(4)
                                _mm256_mask_mov_epi64(arg5, arg6)
                                zmm25 = _mm256_mask_add_epi64(k3_24, arg6, temp0_723)
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
                                    k5_36, *zmm2[0])
                                arg6[0].o = temp0_729
                                zmm2 = _mm256_mask_add_epi64(k4_22, zmm2, temp0_723)
                                arg18 = _mm256_insertf32x4(arg5, arg18, arg6[0].o, 1)
                                arg6 = _mm256_mask_mov_epi64(arg5, zmm25)
                                zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                            
                            var_380 = _mm256_mask_storeu_ps(k2_18, 
                                _mm256_mask_mov_ps(
                                    _mm256_mask_test_epi32_mask(arg5, temp0_722, temp0_722), arg18))
                            zmm5 = __vpbroadcastd_ymmqq_memd(4)
                            arg7 = _mm256_mask_and_epi32(arg5, zmm26, zmm5)
                            int64_t k3_27 = _mm256_mask_test_epi32_mask(k2_18, zmm26, zmm5)
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
                                    k4_23, *zmm2[0])
                                arg6[0].o = temp0_740
                                arg18 = _mm256_insertf32x4(arg5, zmm5, arg6[0].o, 1)
                            
                            zmm2 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, arg7, arg7), arg18)
                            var_360 = _mm256_mask_storeu_ps(k2_18, zmm2)
                    
                    _ktest_mask8_u8(k1_43, arg5)
                    
                    if (not(z))
                        int64_t k2_19 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, zmm28, 3)
                        _kortest_mask8_u8(k2_19, k2_19)
                        
                        if (not(z))
                            zmm2[0].o = zx.o(0)
                            uint64_t var_5c0_2[0x4] = zmm2
                            uint64_t var_5e0_2[0x4] = zmm2
                            uint64_t var_600_2[0x4] = zmm2
                            uint64_t var_620_2[0x4] = zmm2
                            var_640 = zmm2
                            uint64_t var_660_2[0x4] = zmm2
                            int64_t k3_31 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                                _mm256_movepi32_mask(_mm256_mask_slli_epi32(arg5, zmm26, 0x1f)), 
                                zmm28, 3)
                            uint64_t k4_25 = _kand_mask8(k1_43, k3_31)
                            _kortest_mask8_u8(k4_25, k4_25)
                            var_520[0].d = _store_mask32(k2_19)
                            
                            if (not(z))
                                uint64_t temp0_746[0x4] = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k5_38 = _kshiftri_mask8(k4_25, 4)
                                arg6 = _mm256_mask_add_epi64(k5_38, arg11, temp0_746)
                                _mm256_mask_mov_epi64(arg5, arg26)
                                arg7 = _mm256_mask_add_epi64(k4_25, arg26, temp0_746)
                                uint64_t k6_5 = _kshiftri_mask8(k4_25, 4)
                                int64_t k7_7 = __kmovq_maskmskw_masku64_avx512(k4_25)
                                temp0_746[0].o = zx.o(0)
                                int64_t k7_8
                                float temp0_750[0x4]
                                temp0_750, k7_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_7, *arg26[0].q)
                                temp0_746[0].o = temp0_750
                                int64_t k7_9 = __kmovq_maskmskw_masku64_avx512(k6_5)
                                zmm5[0].o = zx.o(0)
                                int64_t k7_10
                                float temp0_751[0x4]
                                temp0_751, k7_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k7_9, *arg11[0])
                                zmm5[0].o = temp0_751
                                var_600_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(temp0_746, zmm5[0].o, 1))
                                uint64_t temp0_754[0x4] = __vpbroadcastq_ymmqq_memq(8)
                                arg26 = _mm256_mask_add_epi64(k4_25, arg26, temp0_754)
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
                                arg11 = _mm256_mask_add_epi64(k5_38, arg11, temp0_754)
                                var_660_2 = _mm256_mask_storeu_ps(k3_31, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            int64_t k3_32 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 3)
                            int64_t k4_27 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_32, zmm26, 2)
                            uint64_t k5_39 = _kand_mask8(k1_43, k4_27)
                            _kortest_mask8_u8(k5_39, k5_39)
                            
                            if (not(z))
                                uint64_t temp0_763[0x4] = __vpbroadcastq_ymmqq_memq(4)
                                int64_t k6_7 = _kshiftri_mask8(k5_39, 4)
                                arg6 = _mm256_mask_add_epi64(k6_7, arg11, temp0_763)
                                _mm256_mask_mov_epi64(arg5, arg26)
                                arg7 = _mm256_mask_add_epi64(k5_39, arg26, temp0_763)
                                uint64_t k7_11 = _kshiftri_mask8(k5_39, 4)
                                int64_t k2_20 = __kmovq_maskmskw_masku64_avx512(k5_39)
                                temp0_763[0].o = zx.o(0)
                                int64_t k2_21
                                float temp0_767[0x4]
                                temp0_767, k2_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_20, *arg26[0].q)
                                temp0_763[0].o = temp0_767
                                int64_t k2_22 = __kmovq_maskmskw_masku64_avx512(k7_11)
                                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                                int64_t k2_23
                                float temp0_769[0x4]
                                temp0_769, k2_23 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_22, *arg11[0])
                                zmm5[0].o = temp0_769
                                var_5e0_2 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(temp0_763, zmm5[0].o, 1))
                                uint64_t temp0_772[0x4] = __vpbroadcastq_ymmqq_memq(8)
                                arg26 = _mm256_mask_add_epi64(k5_39, arg26, temp0_772)
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
                                arg11 = _mm256_mask_add_epi64(k6_7, arg11, temp0_772)
                                var_640 = _mm256_mask_storeu_ps(k4_27, 
                                    _mm256_insertf128_ps(zmm5, arg7[0].o, 1))
                            
                            uint64_t k6_8 = _load_mask32(var_520[0].d)
                            int64_t k3_33 =
                                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k3_32, zmm26, 4)
                            uint64_t k4_28 = _kand_mask8(k1_43, k3_33)
                            _kortest_mask8_u8(k4_28, k4_28)
                            
                            if (not(z))
                                uint64_t temp0_781[0x4] = __vpbroadcastq_ymmqq_memq(4)
                                uint64_t k5_41 = _kshiftri_mask8(k4_28, 4)
                                int64_t k2_24 = __kmovq_maskmskw_masku64_avx512(k4_28)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k2_25
                                float temp0_783[0x4]
                                temp0_783, k2_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_24, *arg26[0].q)
                                arg6[0].o = temp0_783
                                int64_t k2_26 = __kmovq_maskmskw_masku64_avx512(k5_41)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k2_27
                                float temp0_785[0x4]
                                temp0_785, k2_27 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k2_26, *arg11[0])
                                arg7[0].o = temp0_785
                                arg11 = _mm256_mask_add_epi64(_kshiftri_mask8(k4_28, 4), arg11, 
                                    temp0_781)
                                arg26 = _mm256_mask_add_epi64(k4_28, arg26, temp0_781)
                                zmm2 = _mm256_insertf128_ps(arg6, arg7[0].o, 1)
                                var_5c0_2 = _mm256_mask_storeu_ps(k3_33, zmm2)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k4_29
                                float temp0_791[0x4]
                                temp0_791, k4_29 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k4_28, *arg26[0].q)
                                zmm2[0].o = temp0_791
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k5_42
                                float temp0_793[0x4]
                                temp0_793, k5_42 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                                    k5_41, *arg11[0])
                                arg6[0].o = temp0_793
                                var_620_2 = _mm256_mask_storeu_ps(k3_33, 
                                    _mm256_insertf128_ps(zmm2, arg6[0].o, 1))
                            
                            uint64_t temp0_796[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                            arg6 = __vpbroadcastq_ymmqq_memq(4)
                            arg7 = _mm256_add_epi64(_mm256_mask_add_epi64(arg5, zmm0, zmm18), arg14)
                            zmm2 = _mm256_add_epi64(_mm256_add_epi64(temp0_796, arg13), arg6)
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
                                k2_29, *(r10 + zmm2[0]))
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
                            arg18 = _mm256_mask_load_ps(arg5, var_640)
                            zmm25 = _mm256_mask_load_ps(arg5, var_620_2)
                            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_2, arg7, var_600_2)
                            uint32_t temp0_815[0x8] = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            float temp0_817[0x8] =
                                _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, temp0_815))
                            arg23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg6 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, temp0_817, arg23), arg5, arg18, var_5e0_2)
                            zmm2 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_srli_epi32(zmm2, 0x15), temp0_815)), 
                                    arg23), 
                                arg5, zmm25, var_5c0_2)
                            var_3a0 = _mm256_mask_storeu_ps(k6_8, zmm5)
                            var_380 = _mm256_mask_storeu_ps(k6_8, arg6)
                            var_360 = _mm256_mask_storeu_ps(k6_8, zmm2)
                            zmm25[0].o = _mm_mask_load_epi64(arg5, data_142fc92e0)
                        
                        arg5 = _kxor_mask8(
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 3), arg5)
                        _ktest_mask8_u8(k1_43, arg5)
                    
                    if (z)
                        arg14 = arg17
                        _mm256_mask_mov_epi64(arg5, zmm19)
                        arg13 = temp0_90
                    else
                        int64_t k2_32 =
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, zmm28, 2)
                        _kortest_mask8_u8(k2_32, k2_32)
                        int128_t var_4b0
                        
                        if (z)
                            arg14 = arg17
                            _mm256_mask_mov_epi64(arg5, zmm19)
                            arg13 = temp0_90
                            zmm1[0].o = var_4b0
                        else
                            zmm2 = _mm256_mask_slli_epi32(arg5, zmm26, 0x1f)
                            int64_t k3_36 = _mm256_movepi32_mask(zmm2)
                            arg6[0].o = zx.o(0)
                            int64_t k4_30 =
                                __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_32, arg6, zmm2)
                            _kortest_mask8_u8(k4_30, k4_30)
                            
                            if (not(z))
                                uint64_t temp0_831[0x4] = __vpbroadcastq_ymmqq_memq(2)
                                arg10 = _mm256_mask_add_epi64(k4_30, arg10, temp0_831)
                                int64_t k5_43 = _kshiftri_mask8(k4_30, 4)
                                zmm20 = _mm256_mask_add_epi64(k5_43, zmm20, temp0_831)
                                zmm1 = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                                zmm0 = _mm256_mask_add_epi64(arg5, zmm0, zmm18)
                                uint64_t temp0_836[0x4] = __vpbroadcastq_ymmqq_memq(4)
                                zmm0 = _mm256_add_epi64(zmm0, arg14)
                                zmm1 = _mm256_mask_add_epi64(k5_43, _mm256_add_epi64(zmm1, arg13), 
                                    temp0_836)
                                zmm0 = _mm256_mask_add_epi64(k4_30, zmm0, temp0_836)
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
                            arg13 = temp0_90
                            zmm1[0].o = var_4b0
                            var_3a0 = _mm256_mask_storeu_ps(k2_32, _mm256_mask_mov_ps(k3_36, zmm2))
                            zmm0 = __vpbroadcastd_ymmqq_memd(2)
                            zmm2 = _mm256_mask_and_epi32(arg5, zmm26, zmm0)
                            int64_t k3_37 = _mm256_mask_test_epi32_mask(k2_32, zmm26, zmm0)
                            _kortest_mask8_u8(k3_37, k3_37)
                            
                            if (not(z))
                                char temp0_884 = _cvtmask32_u32(k3_37)
                                
                                if ((temp0_884 & 1) == 0)
                                    if ((temp0_884 & 2) != 0)
                                        goto label_140168c32
                                    
                                    goto label_140168b4b
                                
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *arg10[0].q, 0)
                                
                                if ((temp0_884 & 2) != 0)
                                label_140168c32:
                                    int64_t rax_106 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_106, 1)
                                    
                                    if ((temp0_884 & 4) == 0)
                                        goto label_140168b55
                                    
                                    goto label_140168c47
                                
                            label_140168b4b:
                                
                                if ((temp0_884 & 4) == 0)
                                label_140168b55:
                                    
                                    if ((temp0_884 & 8) != 0)
                                        goto label_140168c61
                                    
                                    goto label_140168b5f
                                
                            label_140168c47:
                                zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                zmm1[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_884 & 8) != 0)
                                label_140168c61:
                                    zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int64_t rax_108 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_108, 3)
                                    
                                    if ((temp0_884 & 0x10) == 0)
                                        goto label_140168b69
                                    
                                    goto label_140168c82
                                
                            label_140168b5f:
                                
                                if ((temp0_884 & 0x10) != 0)
                                label_140168c82:
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm20[0].o, 4)
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                    label_140168c91:
                                        uint64_t rax_110 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_110, 5)
                                        
                                        if ((temp0_884 & 0x40) == 0)
                                            goto label_140168b7d
                                        
                                        goto label_140168ca7
                                else
                                label_140168b69:
                                    
                                    if ((temp0_884 & 0x20) != 0)
                                        goto label_140168c91
                                
                                int64_t k4_31
                                
                                if ((temp0_884 & 0x40) != 0)
                                label_140168ca7:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                    zmm1[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *zmm0[0].q, 6)
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_884 == 0
                                    
                                    if (temp0_884 s< 0)
                                    label_140168ccf:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                        int64_t rax_112 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        zmm1[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm1[0].o, *rax_112, 7)
                                else
                                label_140168b7d:
                                    arg6 = __vpbroadcastq_ymmqq_memq(2)
                                    k4_31 = _kshiftri_mask8(k3_37, 4)
                                    z = temp0_884 == 0
                                    
                                    if (temp0_884 s< 0)
                                        goto label_140168ccf
                                
                                arg10 = _mm256_mask_add_epi64(k3_37, arg10, arg6)
                                zmm20 = _mm256_mask_add_epi64(k4_31, zmm20, arg6)
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(zmm1[0].o), 0xffffff01))
                            
                            var_380 = _mm256_mask_storeu_ps(k2_32, 
                                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), 
                                    arg6))
                            zmm0 = __vpbroadcastd_ymmqq_memd(4)
                            zmm2 = _mm256_mask_and_epi32(arg5, zmm26, zmm0)
                            int64_t k3_39 = _mm256_mask_test_epi32_mask(k2_32, zmm26, zmm0)
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
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *arg10[0].q, 0)
                                    
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
                                        goto label_140165f17
                                    
                                    goto label_140168d1e
                                
                                zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 2)
                                
                                if ((temp0_895 & 8) != 0)
                                label_140165f17:
                                    zmm0[0].o = _mm256_extracti128_si256(arg10, 1)
                                    int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_2, 3)
                                    
                                    if ((temp0_895 & 0x10) == 0)
                                        goto label_140168d28
                                    
                                    goto label_140165f38
                                
                            label_140168d1e:
                                
                                if ((temp0_895 & 0x10) != 0)
                                label_140165f38:
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm20[0].o, 4)
                                    
                                    if ((temp0_895 & 0x20) != 0)
                                    label_140165f47:
                                        uint64_t rax_4 =
                                            __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_4, 5)
                                        
                                        if ((temp0_895 & 0x40) == 0)
                                            goto label_140168d3c
                                        
                                        goto label_140165f5d
                                else
                                label_140168d28:
                                    
                                    if ((temp0_895 & 0x20) != 0)
                                        goto label_140165f47
                                
                                if ((temp0_895 & 0x40) != 0)
                                label_140165f5d:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                    arg6[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *zmm0[0].q, 6)
                                    z = temp0_895 == 0
                                    
                                    if (temp0_895 s< 0)
                                    label_140165f76:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                        int64_t rax_6 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg6[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *rax_6, 7)
                                else
                                label_140168d3c:
                                    z = temp0_895 == 0
                                    
                                    if (temp0_895 s< 0)
                                        goto label_140165f76
                                
                                _mm256_mask_mov_epi64(arg5, zmm19)
                                var_3b0 = arg6[0].o
                                arg6 = _mm256_cvtepi32_ps(
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_cvtepu16_epi32(arg6[0].o), 0xffffff01))
                            
                            zmm0 = _mm256_mask_mov_ps(
                                _mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6)
                            var_360 = _mm256_mask_storeu_ps(k2_32, zmm0)
                        
                        arg5 = _kxor_mask8(arg5, 
                            __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 2))
                        int64_t k2_34 = _kand_mask8(k1_43, arg5)
                        _kortest_mask8_u8(k2_34, k2_34)
                        var_4b0 = zmm1[0].o
                        
                        if (not(z))
                            int64_t k3_41 =
                                __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_43, zmm28, 6)
                            _kortest_mask8_u8(k3_41, k3_41)
                            
                            if (not(z))
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                var_3a0 = _mm256_mask_storeu_ps(k3_41, zmm0)
                                var_380 = _mm256_mask_storeu_ps(k3_41, zmm0)
                                var_360 = _mm256_mask_storeu_ps(k3_41, zmm0)
                            
                            int64_t k2_35 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(
                                k2_34, zmm28, 6, 4)
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
                    float temp0_926[0x8] = _mm256_sub_ps(var_3a0, arg6)
                    float temp0_927[0x8] = _mm256_sub_ps(zmm1, arg7)
                    zmm2 = _mm256_sub_ps(var_360, zmm5)
                    zmm0 = _mm256_fmadd_ps(temp0_926, arg8, arg6)
                    zmm1 = _mm256_fmadd_ps(temp0_927, arg8, arg7)
                    zmm2 = _mm256_fmadd_ps(zmm2, arg8, zmm5)
                    var_420.32 = _mm256_mask_storeu_ps(k1_43, zmm0)
                    var_400.32 = _mm256_mask_storeu_ps(k1_43, zmm1)
                    var_3e0.32 = _mm256_mask_storeu_ps(k1_43, zmm2)
                    goto label_140168e78
            else
                int64_t k3_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, zmm28, 2)
                _kortest_mask8_u8(k3_21, k3_21)
                int128_t var_4a0
                int128_t var_490
                
                if (z)
                    zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                    zmm5[0].o = var_490
                    arg9[0].o = var_4a0
                else
                    zmm2 = _mm256_mask_slli_epi32(arg5, zmm26, 0x1f)
                    int64_t k4_15 = _mm256_movepi32_mask(zmm2)
                    arg6[0].o = zx.o(0)
                    int64_t k5_21 =
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_21, arg6, zmm2)
                    _kortest_mask8_u8(k5_21, k5_21)
                    
                    if (not(z))
                        uint64_t temp0_607[0x4] = __vpbroadcastq_ymmqq_memq(2)
                        arg10 = _mm256_mask_add_epi64(k5_21, arg10, temp0_607)
                        int64_t k1_41 = _kshiftri_mask8(k5_21, 4)
                        zmm20 = _mm256_mask_add_epi64(k1_41, zmm20, temp0_607)
                        uint64_t temp0_610[0x4] = _mm256_mask_add_epi64(arg5, zmm1, zmm17)
                        arg6 = _mm256_mask_add_epi64(arg5, zmm0, zmm18)
                        arg7 = __vpbroadcastq_ymmqq_memq(4)
                        arg6 = _mm256_add_epi64(arg6, arg14)
                        uint64_t temp0_615[0x4] =
                            _mm256_mask_add_epi64(k1_41, _mm256_add_epi64(temp0_610, arg13), arg7)
                        arg6 = _mm256_mask_add_epi64(k5_21, arg6, arg7)
                        int64_t r10_3 = arg6[0].q
                        int64_t r8_3 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        int64_t r13_3 = arg6[0].q
                        int64_t r11_2 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                        uint64_t rsi_3 = temp0_615[0]
                        int64_t rcx_14 = __vpextrq_gpr64q_xmmdq_immb(temp0_615[0].o, 1)
                        temp0_615[0].o = _mm256_extracti128_si256(temp0_615, 1)
                        uint64_t rax_87 = temp0_615[0]
                        int64_t rdi_7 = __vpextrq_gpr64q_xmmdq_immb(temp0_615[0].o, 1)
                        r10 = arg27
                        temp0_615[0].o = zx.o(*(arg27 + r10_3))
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + r8_3), 1)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + r13_3), 2)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + r11_2), 3)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + rsi_3), 4)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + rcx_14), 5)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + rax_87), 6)
                        temp0_615[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(temp0_615[0].o, *(r10 + rdi_7), 7)
                        zmm2 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(temp0_615[0].o), 0xffffff01))
                    
                    zmm5[0].o = var_490
                    arg9[0].o = var_4a0
                    var_420.32 = _mm256_mask_storeu_ps(k3_21, _mm256_mask_mov_ps(k4_15, zmm2))
                    arg6 = __vpbroadcastd_ymmqq_memd(2)
                    zmm2 = _mm256_mask_and_epi32(arg5, zmm26, arg6)
                    int64_t k4_16 = _mm256_mask_test_epi32_mask(k3_21, zmm26, arg6)
                    _kortest_mask8_u8(k4_16, k4_16)
                    
                    if (not(z))
                        char temp0_635 = _cvtmask32_u32(k4_16)
                        
                        if ((temp0_635 & 1) == 0)
                            if ((temp0_635 & 2) != 0)
                                goto label_14016897f
                            
                            goto label_140167fc8
                        
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg10[0].q, 0)
                        
                        if ((temp0_635 & 2) != 0)
                        label_14016897f:
                            int64_t rax_90 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_90, 1)
                            
                            if ((temp0_635 & 4) == 0)
                                goto label_140167fd2
                            
                            goto label_140168994
                        
                    label_140167fc8:
                        
                        if ((temp0_635 & 4) == 0)
                        label_140167fd2:
                            
                            if ((temp0_635 & 8) != 0)
                                goto label_1401689ae
                            
                            goto label_140167fdc
                        
                    label_140168994:
                        arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                        zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_635 & 8) != 0)
                        label_1401689ae:
                            arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                            int64_t rax_92 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_92, 3)
                            
                            if ((temp0_635 & 0x10) == 0)
                                goto label_140167fe6
                            
                            goto label_1401689cf
                        
                    label_140167fdc:
                        
                        if ((temp0_635 & 0x10) != 0)
                        label_1401689cf:
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *zmm20[0].o, 4)
                            
                            if ((temp0_635 & 0x20) != 0)
                            label_1401689de:
                                uint64_t rax_94 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_94, 5)
                                
                                if ((temp0_635 & 0x40) == 0)
                                    goto label_140167ffa
                                
                                goto label_1401689f4
                        else
                        label_140167fe6:
                            
                            if ((temp0_635 & 0x20) != 0)
                                goto label_1401689de
                        
                        int64_t k5_22
                        
                        if ((temp0_635 & 0x40) != 0)
                        label_1401689f4:
                            arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                            zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *arg6[0].q, 6)
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_635 == 0
                            
                            if (temp0_635 s< 0)
                            label_140168a1c:
                                arg7[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                int64_t rax_96 = __vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1)
                                zmm5[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm5[0].o, *rax_96, 7)
                        else
                        label_140167ffa:
                            arg6 = __vpbroadcastq_ymmqq_memq(2)
                            k5_22 = _kshiftri_mask8(k4_16, 4)
                            z = temp0_635 == 0
                            
                            if (temp0_635 s< 0)
                                goto label_140168a1c
                        
                        arg10 = _mm256_mask_add_epi64(k4_16, arg10, arg6)
                        zmm20 = _mm256_mask_add_epi64(k5_22, zmm20, arg6)
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(zmm5[0].o), 0xffffff01))
                    
                    var_400.32 = _mm256_mask_storeu_ps(k3_21, 
                        _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6))
                    arg6 = __vpbroadcastd_ymmqq_memd(4)
                    zmm2 = _mm256_mask_and_epi32(arg5, zmm26, arg6)
                    int64_t k4_17 = _mm256_mask_test_epi32_mask(k3_21, zmm26, arg6)
                    _kortest_mask8_u8(k4_17, k4_17)
                    
                    if (z)
                        zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                    else
                        char temp0_646 = _cvtmask32_u32(k4_17)
                        
                        if ((temp0_646 & 1) == 0)
                            if ((temp0_646 & 2) != 0)
                                goto label_140168a47
                            
                            goto label_14016807b
                        
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg10[0].q, 0)
                        
                        if ((temp0_646 & 2) != 0)
                        label_140168a47:
                            uint16_t* rax_98 = __vpextrq_gpr64q_xmmdq_immb(arg10[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_98, 1)
                            
                            if ((temp0_646 & 4) == 0)
                                goto label_140168085
                            
                            goto label_140168a5c
                        
                    label_14016807b:
                        
                        if ((temp0_646 & 4) == 0)
                        label_140168085:
                            
                            if ((temp0_646 & 8) != 0)
                                goto label_140168a76
                            
                            goto label_14016808f
                        
                    label_140168a5c:
                        arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                        arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 2)
                        
                        if ((temp0_646 & 8) != 0)
                        label_140168a76:
                            arg6[0].o = _mm256_extracti128_si256(arg10, 1)
                            uint16_t* rax_100 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_100, 3)
                            
                            if ((temp0_646 & 0x10) == 0)
                                goto label_140168099
                            
                            goto label_140168a97
                        
                    label_14016808f:
                        
                        if ((temp0_646 & 0x10) != 0)
                        label_140168a97:
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *zmm20[0].o, 4)
                            
                            if ((temp0_646 & 0x20) != 0)
                            label_140168aa6:
                                uint16_t* rax_102 =
                                    __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm20[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_102, 5)
                                
                                if ((temp0_646 & 0x40) == 0)
                                    goto label_1401680ad
                                
                                goto label_140168abc
                        else
                        label_140168099:
                            
                            if ((temp0_646 & 0x20) != 0)
                                goto label_140168aa6
                        
                        if ((temp0_646 & 0x40) != 0)
                        label_140168abc:
                            arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                            arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *arg6[0].q, 6)
                            z = temp0_646 == 0
                            
                            if (temp0_646 s< 0)
                            label_140168ad5:
                                arg6[0].o = _mm256_extracti32x4_epi32(arg5, zmm20, 1)
                                uint16_t* rax_104 = __vpextrq_gpr64q_xmmdq_immb(arg6[0].o, 1)
                                arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *rax_104, 7)
                        else
                        label_1401680ad:
                            z = temp0_646 == 0
                            
                            if (temp0_646 s< 0)
                                goto label_140168ad5
                        
                        zmm20 = _mm256_mask_mov_epi64(arg5, zmm19)
                        arg6 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                            arg5, _mm256_cvtepu16_epi32(arg9[0].o), 0xffffff01))
                    
                    zmm2 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(arg5, zmm2, zmm2), arg6)
                    var_3e0.32 = _mm256_mask_storeu_ps(k3_21, zmm2)
                
                int64_t k2_16 = _mm256_cmp_epi32_mask(
                    _kxor_mask8(k2_15, 
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm28, 2)), 
                    arg20, arg12, 4)
                _kortest_mask8_u8(k2_16, k2_16)
                var_490 = zmm5[0].o
                var_4a0 = arg9[0].o
                
                if (not(z))
                    int64_t k1_49 =
                        __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k6_1, zmm28, 6)
                    _kortest_mask8_u8(k1_49, k1_49)
                    
                    if (not(z))
                        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                        var_420.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                        var_400.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                        var_3e0.32 = _mm256_mask_storeu_ps(k1_49, zmm2)
                    
                    int64_t k1_50 =
                        __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k2_16, zmm28, 6, 4)
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
                    goto label_140168188
            arg14 = arg17
            arg13 = temp0_90
            k1_44 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg20, arg12)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(z))
                goto label_140168e84
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
        zmm0[0].o = zmm2[0] | arg8[0].q << 0x40
        int128_t var_260_1 = zmm0[0].o
        zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        int128_t var_250_1 = zmm0[0].o
        zmm0[0].o = _mm_mask_unpacklo_ps(arg5, zmm5[0].o, arg18[0].o)
        zmm1[0].o = _mm_mask_unpackhi_ps(arg5, zmm5[0].o, arg18[0].o)
        zmm2[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg7[0].o = zmm2[0] | zmm0[0].q << 0x40
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
        goto label_14016901b
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
