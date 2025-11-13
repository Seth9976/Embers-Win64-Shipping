// 函数: sub_1400fe860
// 地址: 0x1400fe860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg19[0].o
uint16_t zmm14[0x8]
uint16_t var_68[0x8] = zmm14
int128_t var_78 = arg18[0].o
int128_t var_88 = arg17[0].o
int128_t var_a8 = arg16[0].o
int128_t var_b8 = arg15[0].o
int128_t var_c8 = arg14[0].o
int128_t var_d8 = arg13[0].o
int128_t var_e8 = arg12[0].o
int64_t rdi = sx.q(arg37)
float zmm11[0x4] = arg35
uint32_t r10 = arg38
uint8_t rcx[0x4] = 0x434421c0
int32_t var_418 = rdi.d
uint32_t rbx_1 = *(&data_1434421e0 + (rdi << 2)) * *(&data_1434421c0 + (rdi << 2))
int32_t r11_4 = ((r10 s>> 0x1f u>> 0x1d) + r10) & 0xfffffff8
uint32_t rbx_2
bool cond:1

if (r11_4 s<= 0)
    rbx_2 = 0
    cond:1 = 0 == r10
    
    if (0 s< r10)
    label_1400ff61c:
        arg10 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx_2), data_142fc93a0)
        arg11 = _mm256_mask_set1_epi32(arg5, r10)
        uint64_t k1_33 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg11, arg10)
        arg6 = _mm256_slli_epi32(arg10, 3)
        arg32[0].o = _mm_mask_xor_epi32(arg5, arg32[0].o, arg32[0].o)
        int64_t k2_26
        char temp0_336
        temp0_336, k2_26 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg2 + arg6[0].q))
        arg8 = __vpbroadcastd_ymmqq_memd(4)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        int64_t k2_28
        char temp0_339
        temp0_339, k2_28 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg2 + (arg6 | arg8)[0].q))
        arg6 = _mm256_slli_epi32(temp0_339, 4)
        int64_t k2_30
        char temp0_341
        temp0_341, k2_30 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + arg6[0].q))
        arg9 = temp0_341
        arg6 |= arg8
        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
        int64_t k2_32
        char temp0_343
        temp0_343, k2_32 = _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_33), 
            *(arg3 + arg6[0].q))
        arg22 = temp0_343
        uint32_t r8_2 = _cvtmask32_u32(k1_33)
        arg8[0].o = zx.o(0)
        int64_t k0 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_33, arg22, 2, 1)
        _kortest_mask8_u8(k0, k0)
        uint32_t rcx_30
        
        if (cond:1)
            arg8[0].o = zx.o(0)
            rcx_30 = rbx_1
            arg23[0].o = _mm_mask_xor_ps(k0, arg23[0].o, arg23[0].o)
            arg6[0].o = zx.o(0)
            
            if (zx.o(0) f>= zmm11[0])
            label_1400ff6dc:
                arg20[0].o = _mm_mask_xor_ps(k0, arg20[0].o, arg20[0].o)
                arg21[0].o = _mm_mask_xor_epi32(k0, arg21[0].o, arg21[0].o)
                arg6[0].o = arg8[0].o & data_142fc92e0
                arg8 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0, arg6[0].o, 
                        data_142fc92e0, 4), 
                    arg23)
            else
            label_1400ff706:
                arg13[0].o = _mm_movm_epi16(k1_33)
                arg12[0].o = arg8[0].o ^ data_142fc92e0
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                arg21 = _mm256_mask_add_epi32(k0, arg22, arg6)
                
                if (zmm11 f>= 1f)
                    arg6[0].o = arg12[0].o & arg13[0].o
                    arg20 = _mm256_mask_mov_epi32(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, arg6[0].o, 
                            data_142fc92e0), 
                        arg21)
                    arg21 = _mm256_mask_mov_epi64(k0, arg20)
                else
                    arg6 = _mm256_broadcastss_ps(zmm11)
                    arg24 = _mm256_mask_mul_ps(k0, arg6, _mm256_mask_cvtepi32_ps(k0, arg21))
                    arg6[0].o = arg12[0].o & arg13[0].o
                    arg25 = _mm256_mask_roundscale_ps(k0, arg24, 9)
                    _mm256_mask_min_epi32(k0, arg21, _mm256_mask_cvttps_epi32(k0, arg25))
                    int64_t k2_33 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0, 
                        arg6[0].o, data_142fc92e0)
                    arg6[0].o = zx.o(0)
                    arg20 = _mm256_mask_mov_epi32(k2_33, arg6)
                    arg23[0].o = _mm_mask_xor_ps(k0, arg23[0].o, arg23[0].o)
                    
                    if (arg36 != 1)
                        arg23 = _mm256_mask_sub_ps(k0, arg24, arg25)
                    
                    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
                    arg24 = _mm256_mask_sub_epi32(k0, arg20, arg12)
                    _mm256_mask_min_epi32(k0, arg24, arg21)
                    arg21 = _mm256_mask_mov_epi32(k2_33, arg6)
                
                arg6[0].o = arg8[0].o & data_142fc92e0
                arg8 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0, arg6[0].o, 
                        data_142fc92e0, 4), 
                    arg23)
        else
            arg2 = zx.q(_cvtmask32_u32(k0))
            arg20[0].o = _mm_mask_xor_ps(k0, arg20[0].o, arg20[0].o)
            arg21[0].o = _mm_mask_xor_epi32(k0, arg21[0].o, arg21[0].o)
            rcx_30 = rbx_1
            
            if (r8_2.b != arg2.b)
                arg8[0].o = _mm_movm_epi16(k0)
                arg23[0].o = _mm_mask_xor_ps(k0, arg23[0].o, arg23[0].o)
                arg6[0].o = zx.o(0)
                
                if (zx.o(0) f< zmm11[0])
                    goto label_1400ff706
                
                goto label_1400ff6dc
        
        int64_t k0_1 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k0, arg22, 2, 1)
        arg2.b = var_418 == 3
        arg2.b = neg.b(arg2.b)
        arg6[0].o = _mm_mask_set1_epi8(k0_1, arg2.d)
        int64_t k0_2 = _kor_mask8(k0_1, 
            __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_1, arg6[0].o, data_142fc92e0))
        arg6 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(k0_2), 0x18)
        arg22 = _mm256_mask_set1_epi32(k0_2, rcx_30)
        uint64_t rdx_15 = zx.q(var_418)
        bool cond:5_1 = var_418 == 6
        float var_400_1[0x8]
        float var_3e0_1[0x8]
        float var_3c0_1[0x8]
        uint64_t k1_35
        
        if (var_418 u> 6)
        label_1400ff8af:
            arg23[0].o = _mm_mask_xor_epi32(k0_2, arg23[0].o, arg23[0].o)
            var_400_1 = _mm256_mask_storeu_ps(k1_33, arg23)
            var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg23)
        label_1400ffc8d:
            var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg23)
            k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                _mm256_cmp_epi32_mask(k0_2, arg20, arg21, 4), arg11, arg10)
            _kortest_mask8_u8(k1_35, k1_35)
            
            if (not(cond:5_1))
                goto label_1400ffcb1
        else
            arg23 = _mm256_mask_mullo_epi32(k0_2, arg20, arg22)
            int64_t rdi_22 = sx.q(jump_table_1401002c4[rdx_15])
            cond:5_1 = rdi_22 == -0x1401002c4
            
            switch (rdi_22)
                case -0xa9f
                    arg24 = _mm256_mask_add_epi32(k0_2, arg6, arg9)
                    arg23 = _mm256_mask_add_epi32(k0_2, arg24, arg23)
                    uint64_t k2_38 = _cvtu32_mask32(r8_2)
                    arg24[0].o = _mm_mask_xor_epi32(k0_2, arg24[0].o, arg24[0].o)
                    int64_t k3_2
                    char temp0_379
                    temp0_379, k3_2 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_38), *(arg4 + arg23[0].q))
                    arg25 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg23, 4)
                    arg26[0].o = _mm_mask_xor_epi32(k0_2, arg26[0].o, arg26[0].o)
                    int64_t k3_4
                    char temp0_382
                    temp0_382, k3_4 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_38), *(arg4 + arg25[0].q))
                    arg23 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg23, 8)
                    arg25[0].o = _mm_mask_xor_ps(k0_2, arg25[0].o, arg25[0].o)
                    int64_t k2_39
                    char temp0_385
                    temp0_385, k2_39 = _mm256_mmask_i32gather_ps(k2_38, *(arg4 + arg23[0].q))
                    arg25 = temp0_385
                    var_400_1 = _mm256_mask_storeu_ps(k1_33, temp0_379)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, temp0_382)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg25)
                    k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                        _mm256_cmp_epi32_mask(k0_2, arg20, arg21, 4), arg11, arg10)
                    _kortest_mask8_u8(k1_35, k1_35)
                    
                    if (rdi_22 != -0x1401002c4)
                    label_1400ffcb1:
                        float var_320_1[0x8]
                        float var_300_1[0x8]
                        float var_2e0_1[0x8]
                        
                        if (var_418 u> 6)
                        label_1400ffd32:
                            arg6[0].o = zx.o(0)
                            var_320_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                            var_300_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                            var_2e0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                        else
                            arg10 = _mm256_mask_mullo_epi32(k0_2, arg21, arg22)
                            
                            switch (rdx_15)
                                case 0, 1
                                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg9), arg10)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                    int64_t k2_43
                                    char temp0_506
                                    temp0_506, k2_43 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(arg4 + arg6[0].q))
                                    arg9 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg6, 4)
                                    int64_t k2_45
                                    char temp0_508
                                    temp0_508, k2_45 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(arg4 + arg9[0].q))
                                    arg6 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg6, 8)
                                    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                    int64_t k2_47
                                    char temp0_511
                                    temp0_511, k2_47 = _mm256_mmask_i32gather_ps(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(arg4 + arg6[0].q))
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, temp0_506)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, temp0_508)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, temp0_511)
                                case 2
                                    arg6 = _mm256_add_epi32(arg6, arg9)
                                    arg7 = _mm256_add_epi32(arg6, arg10)
                                    arg6 = _mm256_mask_add_epi32(k1_35, arg6, arg10)
                                    int64_t r10_10 = sx.q(arg6[0])
                                    int64_t r11_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                    int64_t r14_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                                    int64_t r15_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    int64_t rsi_33 = sx.q(arg6[0])
                                    int64_t rcx_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                    int64_t rdx_20 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                                    int64_t rbx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                    arg6[0].o = zx.o(*(arg4 + r10_10))
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + r11_15), 1)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + r14_11), 2)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + r15_9), 3)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + rsi_33), 4)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + rcx_43), 5)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + rdx_20), 6)
                                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                        *(arg4 + rbx_15), 7)
                                    arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, 
                                        arg7, 2)
                                    int64_t r10_11 = sx.q(arg9[0])
                                    int64_t r11_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                                    int64_t r14_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                                    int64_t r15_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                                    arg9[0].o = _mm256_extracti128_si256(arg9, 1)
                                    int64_t rsi_35 = sx.q(arg9[0])
                                    int64_t rcx_46 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                                    int64_t rdx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                                    int64_t rbx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                                    arg9[0].o = zx.o(*(arg4 + r10_11))
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + r11_16), 1)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + r14_12), 2)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + r15_10), 3)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + rsi_35), 4)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + rcx_46), 5)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + rdx_23), 6)
                                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, 
                                        *(arg4 + rbx_18), 7)
                                    arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_35, 
                                        arg7, 4)
                                    int64_t r10_12 = sx.q(arg7[0])
                                    int32_t rdx_24 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
                                    int64_t r11_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                                    int64_t r15_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                                    arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                    int64_t rsi_37 = sx.q(arg7[0])
                                    int32_t rcx_48 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
                                    int64_t rbx_21 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                                    int32_t rdx_25 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
                                    arg7[0].o = zx.o(*(arg4 + r10_12))
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + sx.q(rdx_24)), 1)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + r11_17), 2)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + r15_11), 3)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + rsi_37), 4)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + sx.q(rcx_48)), 5)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + rbx_21), 6)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                        *(arg4 + sx.q(rdx_25)), 7)
                                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                    arg10 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                                    arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg10))
                                    arg11 = _mm256_broadcast_ss(32767f)
                                    arg6 = _mm256_div_ps(arg6, arg11)
                                    arg9 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            _mm256_cvtepu16_epi32(arg9[0].o), arg10)), 
                                        arg11)
                                    arg7 = _mm256_div_ps(
                                        _mm256_cvtepi32_ps(_mm256_add_epi32(
                                            _mm256_cvtepu16_epi32(arg7[0].o), arg10)), 
                                        arg11)
                                    arg10 = _mm256_broadcast_ss(128f)
                                    arg6 = _mm256_mul_ps(arg6, arg10)
                                    arg9 = _mm256_mul_ps(arg9, arg10)
                                    arg7 = _mm256_mul_ps(arg7, arg10)
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, arg9)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, arg7)
                                case 3
                                    int64_t k2_48 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                    int64_t k2_49
                                    char temp0_586
                                    temp0_586, k2_49 =
                                        _mm256_mmask_i32gather_ps(k2_48, *(arg4 + arg9[0].q))
                                    arg11 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 4)
                                    int64_t k2_50 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg20[0].o = _mm_mask_xor_ps(k0_2, arg20[0].o, arg20[0].o)
                                    int64_t k2_51
                                    char temp0_589
                                    temp0_589, k2_51 =
                                        _mm256_mmask_i32gather_ps(k2_50, *(arg4 + arg11[0].q))
                                    arg11 =
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 8)
                                    int64_t k2_52 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg21[0].o = _mm_mask_xor_epi32(k0_2, arg21[0].o, arg21[0].o)
                                    int64_t k2_53
                                    char temp0_592
                                    temp0_592, k2_53 =
                                        _mm256_mmask_i32gather_ps(k2_52, *(arg4 + arg11[0].q))
                                    arg11 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        arg9, 0xc)
                                    int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg22[0].o = _mm_mask_xor_epi32(k0_2, arg22[0].o, arg22[0].o)
                                    int64_t k2_55
                                    char temp0_595
                                    temp0_595, k2_55 =
                                        _mm256_mmask_i32gather_ps(k2_54, *(arg4 + arg11[0].q))
                                    arg11 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        arg9, 0x10)
                                    int64_t k2_56 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg23[0].o = _mm_mask_xor_ps(k0_2, arg23[0].o, arg23[0].o)
                                    int64_t k2_57
                                    char temp0_598
                                    temp0_598, k2_57 =
                                        _mm256_mmask_i32gather_ps(k2_56, *(arg4 + arg11[0].q))
                                    arg24 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        arg9, 0x14)
                                    int64_t k2_58 = __kmovq_maskmskw_masku64_avx512(k1_35)
                                    arg25[0].o = _mm_mask_xor_ps(k0_2, arg25[0].o, arg25[0].o)
                                    int64_t k2_59
                                    char temp0_601
                                    temp0_601, k2_59 =
                                        _mm256_mmask_i32gather_ps(k2_58, *(arg4 + arg24[0].q))
                                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg6, arg9), arg10)
                                    int64_t k2_61
                                    char temp0_604
                                    temp0_604, k2_61 = _mm256_mmask_i32gather_epi32(
                                        __kmovq_maskmskw_masku64_avx512(k1_35), *(arg4 + arg6[0].q))
                                    arg11 = temp0_604
                                    arg6 = _mm256_srli_epi32(arg11, 0x15)
                                    arg9 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                        _mm256_srli_epi32(arg11, 0xa), 0x7ff)
                                    arg10 = _mm256_mask3_fmadd_ps(
                                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
                                            _mm256_cvtepi32_ps(
                                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                                    arg11, 0x3ff), 
                                                0xfffffe01)), 
                                            0x43ff8000), 
                                        k0_2, temp0_595, temp0_586)
                                    arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                    arg9 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg9, arg7))
                                    arg11 = _mm256_broadcast_ss(1023f)
                                    arg9 = _mm256_mask3_fmadd_ps(_mm256_div_ps(arg9, arg11), k0_2, 
                                        temp0_598, temp0_589)
                                    arg6 = _mm256_mask3_fmadd_ps(
                                        _mm256_div_ps(
                                            _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg7)), 
                                            arg11), 
                                        k0_2, temp0_601, temp0_592)
                                    var_320_1 = _mm256_mask_storeu_ps(k1_35, arg10)
                                    var_300_1 = _mm256_mask_storeu_ps(k1_35, arg9)
                                    var_2e0_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                                case 4, 5, 6
                                    goto label_1400ffd32
                        
                        arg10 = var_400_1
                        arg11 = var_3e0_1
                        arg20 = _mm256_mask_load_ps(k0_2, var_3c0_1)
                        arg6 = _mm256_sub_ps(var_320_1, arg10)
                        arg7 = _mm256_sub_ps(var_300_1, arg11)
                        arg9 = _mm256_mask_sub_ps(k0_2, var_2e0_1, arg20)
                        arg6 = _mm256_fmadd_ps(arg6, arg8, arg10)
                        arg7 = _mm256_fmadd_ps(arg7, arg8, arg11)
                        arg9 = _mm256_mask3_fmadd_ps(arg9, k0_2, arg8, arg20)
                        var_400_1 = _mm256_mask_storeu_ps(k1_35, arg6)
                        var_3e0_1 = _mm256_mask_storeu_ps(k1_35, arg7)
                        var_3c0_1 = _mm256_mask_storeu_ps(k1_35, arg9)
                case -0xa15
                    goto label_1400ff8af
                case -0x9fa
                    arg24 = _mm256_mask_add_epi32(k0_2, arg6, arg9)
                    arg25 = _mm256_mask_add_epi32(k0_2, arg24, arg23)
                    arg23 = _mm256_mask_add_epi32(k1_33, arg24, arg23)
                    int64_t r11_12 = sx.q(arg23[0])
                    int64_t r10_7 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 1))
                    int64_t r14_8 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 2))
                    int64_t r15_6 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 3))
                    arg13[0].o = _mm256_extracti32x4_epi32(k0_2, arg23, 1)
                    int64_t r12_8 = sx.q(arg13[0])
                    int64_t rbx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                    int64_t rsi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    int64_t rcx_33 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                    arg13[0].o = zx.o(*(arg4 + r11_12))
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r10_7), 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r14_8), 2)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r15_6), 3)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r12_8), 4)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rbx_6), 5)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rsi_26), 6)
                    arg24[0].o =
                        __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg13[0].o, *(arg4 + rcx_33), 7)
                    arg23 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg25, 2)
                    int64_t r10_8 = sx.q(arg23[0])
                    int64_t r11_13 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 1))
                    int64_t r14_9 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 2))
                    int64_t r15_7 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 3))
                    arg12[0].o = _mm256_extracti32x4_epi32(k0_2, arg23, 1)
                    int64_t r12_9 = sx.q(arg12[0])
                    int64_t rbx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 1))
                    int64_t rdi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 2))
                    int64_t rsi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg12[0].o, 3))
                    arg12[0].o = zx.o(*(arg4 + r10_8))
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + r11_13), 1)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + r14_9), 2)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + r15_7), 3)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + r12_9), 4)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + rbx_9), 5)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + rdi_29), 6)
                    arg12[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg12[0].o, *(arg4 + rsi_29), 7)
                    arg23 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_33, arg25, 4)
                    int64_t r10_9 = sx.q(arg23[0])
                    int32_t rbx_10 = __vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 1)
                    int64_t r11_14 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 2))
                    int64_t r15_8 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg23[0].o, 3))
                    arg13[0].o = _mm256_extracti32x4_epi32(k0_2, arg23, 1)
                    int64_t r12_10 = sx.q(arg13[0])
                    int32_t rdi_31 = __vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1)
                    int64_t rbx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    int32_t rsi_31 = __vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3)
                    arg13[0].o = zx.o(*(arg4 + r10_9))
                    arg13[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + sx.q(rbx_10)), 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r11_14), 2)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r15_8), 3)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r12_10), 4)
                    arg13[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + sx.q(rdi_31)), 5)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rbx_12), 6)
                    arg13[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + sx.q(rsi_31)), 7)
                    arg23 = _mm256_mask_cvtepu16_epi32(k0_2, arg24[0].o)
                    arg24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_2, 0xffff8001)
                    arg23 = _mm256_mask_cvtepi32_ps(k0_2, _mm256_mask_add_epi32(k0_2, arg23, arg24))
                    arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 32767f)
                    arg23 = _mm256_mask_div_ps(k0_2, arg23, arg25)
                    arg26 = _mm256_mask_div_ps(k0_2, 
                        _mm256_mask_cvtepi32_ps(k0_2, 
                            _mm256_mask_add_epi32(k0_2, 
                                _mm256_mask_cvtepu16_epi32(k0_2, arg12[0].o), arg24)), 
                        arg25)
                    arg24 = _mm256_mask_div_ps(k0_2, 
                        _mm256_mask_cvtepi32_ps(k0_2, 
                            _mm256_mask_add_epi32(k0_2, 
                                _mm256_mask_cvtepu16_epi32(k0_2, arg13[0].o), arg24)), 
                        arg25)
                    arg25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 128f)
                    arg23 = _mm256_mask_mul_ps(k0_2, arg23, arg25)
                    arg26 = _mm256_mask_mul_ps(k0_2, arg26, arg25)
                    arg24 = _mm256_mask_mul_ps(k0_2, arg24, arg25)
                    var_400_1 = _mm256_mask_storeu_ps(k1_33, arg23)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg26)
                    var_3c0_1 = _mm256_mask_storeu_ps(k1_33, arg24)
                    k1_35 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
                        _mm256_cmp_epi32_mask(k0_2, arg20, arg21, 4), arg11, arg10)
                    _kortest_mask8_u8(k1_35, k1_35)
                    
                    if (rdi_22 != -0x1401002c4)
                        goto label_1400ffcb1
                case -0x789
                    uint64_t k2_40 = _cvtu32_mask32(r8_2)
                    int64_t k3_5 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg24[0].o = _mm_mask_xor_epi32(k0_2, arg24[0].o, arg24[0].o)
                    int64_t k3_6
                    char temp0_461
                    temp0_461, k3_6 = _mm256_mmask_i32gather_ps(k3_5, *(arg4 + arg9[0].q))
                    arg25 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 4)
                    int64_t k3_7 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg26[0].o = _mm_mask_xor_epi32(k0_2, arg26[0].o, arg26[0].o)
                    int64_t k3_8
                    char temp0_464
                    temp0_464, k3_8 = _mm256_mmask_i32gather_ps(k3_7, *(arg4 + arg25[0].q))
                    arg25 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 8)
                    int64_t k3_9 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg27[0].o = _mm_mask_xor_ps(k0_2, arg27[0].o, arg27[0].o)
                    int64_t k3_10
                    char temp0_467
                    temp0_467, k3_10 = _mm256_mmask_i32gather_ps(k3_9, *(arg4 + arg25[0].q))
                    arg25 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 0xc)
                    int64_t k3_11 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg28[0].o = _mm_mask_xor_epi32(k0_2, arg28[0].o, arg28[0].o)
                    int64_t k3_12
                    char temp0_470
                    temp0_470, k3_12 = _mm256_mmask_i32gather_ps(k3_11, *(arg4 + arg25[0].q))
                    arg25 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 0x10)
                    int64_t k3_13 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg29[0].o = _mm_mask_xor_ps(k0_2, arg29[0].o, arg29[0].o)
                    int64_t k3_14
                    char temp0_473
                    temp0_473, k3_14 = _mm256_mmask_i32gather_ps(k3_13, *(arg4 + arg25[0].q))
                    arg25[0].o = _mm_mask_xor_epi32(k0_2, arg25[0].o, arg25[0].o)
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg9, 0x14)
                    int64_t k3_15 = __kmovq_maskmskw_masku64_avx512(k2_40)
                    arg31[0].o = _mm_mask_xor_ps(k0_2, arg31[0].o, arg31[0].o)
                    int64_t k3_16
                    char temp0_477
                    temp0_477, k3_16 = _mm256_mmask_i32gather_ps(k3_15, *(arg4 + arg30[0].q))
                    int64_t k2_41
                    char temp0_480
                    temp0_480, k2_41 = _mm256_mmask_i32gather_epi32(k2_40, 
                        *(arg4 + _mm256_mask_add_epi32(k0_2, 
                            _mm256_mask_add_epi32(k0_2, arg6, arg9), arg23)[0].q))
                    arg25 = temp0_480
                    arg23 = _mm256_mask_srli_epi32(k0_2, arg25, 0x15)
                    arg30 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                        _mm256_mask_srli_epi32(k0_2, arg25, 0xa), 0x7ff)
                    arg25 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
                            _mm256_mask_cvtepi32_ps(k0_2, 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, arg25, 
                                        0x3ff), 
                                    0xfffffe01)), 
                            0x43ff8000), 
                        k0_2, temp0_470, temp0_461)
                    arg24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_2, 0xfffffc01)
                    arg28 = _mm256_mask_cvtepi32_ps(k0_2, _mm256_mask_add_epi32(k0_2, arg30, arg24))
                    arg30 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 1023f)
                    arg28 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(k0_2, arg28, arg30), k0_2, 
                        temp0_473, temp0_464)
                    arg23 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(k0_2, 
                            _mm256_mask_cvtepi32_ps(k0_2, 
                                _mm256_mask_add_epi32(k0_2, arg23, arg24)), 
                            arg30), 
                        k0_2, temp0_477, temp0_467)
                    var_400_1 = _mm256_mask_storeu_ps(k1_33, arg25)
                    var_3e0_1 = _mm256_mask_storeu_ps(k1_33, arg28)
                    goto label_1400ffc8d
        arg6[0].o = var_400_1[0].o
        arg8[0].o = var_400_1[4].o
        arg9[0].o = var_3e0_1[0].o
        arg10[0].o = var_3e0_1[4].o
        arg11[0].o = var_3c0_1[0].o
        int128_t var_3b0
        arg13[0].o = var_3b0
        arg20[0].o = _mm_mask_xor_ps(k0_2, arg20[0].o, arg20[0].o)
        arg7[0].o = _mm_mask_unpacklo_ps(k0_2, arg11[0].o, arg20[0].o)
        arg11[0].o = _mm_mask_unpackhi_ps(k0_2, arg11[0].o, arg20[0].o)
        arg12[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg9[0].o = arg12[0].q | arg7[0].q << 0x40
        int128_t var_1c0 = arg9[0].o
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg12[0].o, arg7[0].o)
        int128_t var_1b0_1 = arg7[0].o
        arg7[0].o = arg6[0].q | arg11[0].q << 0x40
        int128_t var_1a0_1 = arg7[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg11[0].o)
        int128_t var_190_1 = arg6[0].o
        arg6[0].o = _mm_mask_unpacklo_ps(k0_2, arg13[0].o, arg20[0].o)
        arg7[0].o = _mm_mask_unpackhi_ps(k0_2, arg13[0].o, arg20[0].o)
        arg9[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
        arg8[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg10[0].o)
        arg10[0].o = arg9[0].q | arg6[0].q << 0x40
        int128_t var_180_1 = arg10[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
        int128_t var_170_1 = arg6[0].o
        arg6[0].o = arg8[0].q | arg7[0].q << 0x40
        int128_t var_160_1 = arg6[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        int128_t var_150_1 = arg6[0].o
        uint64_t i = zx.q(r8_2.b)
        
        do
            uint64_t rcx_51 = _tzcnt_u64(i)
            int256_t var_120 = _mm256_mask_store_epi64(k0_2, temp0_336)
            arg6[0].o = (&var_1c0)[rcx_51]
            *(arg1 + sx.q(*(&var_120 + ((zx.q(rcx_51.d) & 7) << 2))) * 0x30 + 0x10) = arg6[0].o
            i &= rol.q(-2, rcx_51.b)
        while (i != 0)
else
    arg20 = _mm256_mask_broadcastss_ps(arg5, zmm11)
    rcx[0] = var_418 == 3
    rcx[0] = neg.b(rcx[0])
    arg13[0].o = _mm_mask_set1_epi8(arg5, rcx)
    arg18 = _mm256_mask_set1_epi32(arg5, rbx_1)
    rbx_2 = 0
    bool cond:9_1 = true
    uint32_t zmm29[0x8] = _mm256_mask_load_epi64(arg5, data_143442140)
    arg19 = __vpbroadcastd_ymmqq_memd(4)
    arg17[0].o = zx.o(0)
    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
    arg21[0].o = 0x3f800000
    zmm14 = data_142fc92e0
    arg14 = _mm256_cmpeq_epi32(arg14, arg14)
    arg5 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg13[0].o, data_142fc92e0)
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    uint64_t var_408_1 = arg2
    int32_t var_40c_1 = r11_4
    int64_t var_330_1 = arg3
    
    do
        arg25 = _mm256_mask_slli_epi32(arg5, _mm256_mask_set1_epi32(arg5, rbx_2), 3)
        arg27 = _mm256_mask_add_epi32(arg5, arg25, zmm29)
        arg25[0].o = _mm_mask_xor_epi32(arg5, arg25[0].o, arg25[0].o)
        int64_t k1_2
        char temp0_13
        temp0_13, k1_2 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + arg27[0].q))
        arg25 = temp0_13
        arg27 = _mm256_mask_or_epi32(arg5, arg27, arg19)
        arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
        int64_t k1_4
        char temp0_16
        temp0_16, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg2 + arg27[0].q))
        arg28 = _mm256_mask_slli_epi32(arg5, temp0_16, 4)
        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
        int64_t k1_6
        char temp0_19
        temp0_19, k1_6 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + arg28[0].q))
        arg27 = temp0_19
        arg29 = _mm256_mask_or_epi32(arg5, arg28, arg19)
        arg28[0].o = _mm_mask_xor_epi32(arg5, arg28[0].o, arg28[0].o)
        int64_t k1_8
        char temp0_22
        temp0_22, k1_8 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + arg29[0].q))
        arg28 = temp0_22
        int64_t k1_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, arg28, 2, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        
        if (cond:9_1)
            arg13[0].o = zx.o(0)
            
            if (arg22[0].o f< zmm11)
            label_1400fea60:
                bool cond:3_1 = zmm11 f>= arg21[0].o
                arg30 = _mm256_mask_add_epi32(arg5, arg28, arg14)
                
                if (cond:3_1)
                    arg9[0].o = arg13[0].o & zmm14
                    int64_t k2_3 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm14)
                    arg28 = _mm256_mask_blend_epi32(k2_3, arg30, arg26)
                    arg30 = _mm256_mask_mov_epi32(k2_3, arg24)
                    arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                    arg24 = _mm256_mask_mov_epi64(arg5, arg30)
                else
                    arg31 = _mm256_mask_mul_ps(arg5, arg20, _mm256_mask_cvtepi32_ps(arg5, arg30))
                    arg32 = _mm256_mask_roundscale_ps(arg5, arg31, 9)
                    arg9 = _mm256_mask_cvttps_epi32(arg5, arg32)
                    _mm256_mask_min_epi32(arg5, arg30, arg9)
                    arg9[0].o = arg13[0].o & zmm14
                    int64_t k2_1 =
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm14)
                    arg28 = _mm256_mask_mov_epi32(k2_1, arg26)
                    arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                    
                    if (arg36 != 1)
                        _mm256_mask_sub_ps(arg5, arg31, arg32)
                    
                    _mm256_mask_min_epi32(arg5, _mm256_mask_sub_epi32(arg5, arg28, arg14), arg30)
                    arg9 = _mm256_mask_mov_epi32(k2_1, arg24)
                    arg24 = _mm256_mask_mov_epi64(arg5, arg9)
                
                goto label_1400feb32
            
        label_1400feaf0:
            arg9[0].o = arg13[0].o & zmm14
            int64_t k2_2 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm14)
            arg28 = _mm256_mask_mov_epi32(k2_2, arg26)
            arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
            arg24 = _mm256_mask_mov_epi32(k2_2, arg24)
        label_1400feb32:
            arg9[0].o = arg13[0].o & zmm14
            arg29 = _mm256_mask_mov_ps(
                __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg9[0].o, zmm14), arg23)
            arg26 = _mm256_mask_mov_epi64(arg5, arg28)
            arg23 = _mm256_mask_mov_ps(arg5, arg29)
        else
            char temp0_23 = _cvtmask32_u32(k1_9)
            arg26 = _mm256_mask_mov_epi32(k1_9, arg17)
            arg24 = _mm256_mask_mov_epi32(k1_9, arg17)
            arg23 = _mm256_mask_mov_ps(k1_9, arg17)
            
            if (temp0_23 != 0xff)
                arg13[0].o = _mm_movm_epi16(k1_9)
                
                if (arg22[0].o f>= zmm11)
                    goto label_1400feaf0
                
                goto label_1400fea60
        
        arg28 =
            __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(_knot_mask8(_kor_mask8(k1_9, arg5)), 0x18)
        uint64_t r15_1 = zx.q(var_418)
        bool cond:4_1 = var_418 == 6
        float var_3a0_1[0x8]
        float var_380_1[0x8]
        float var_360_1[0x8]
        uint64_t k1_18
        
        if (var_418 u> 6)
        label_1400febe0:
            arg30[0].o = _mm_mask_xor_epi32(arg5, arg30[0].o, arg30[0].o)
            var_360_1 = _mm256_mask_store_epi64(arg5, arg30)
            var_380_1 = _mm256_mask_store_epi64(arg5, arg30)
            var_3a0_1 = _mm256_mask_store_epi64(arg5, arg30)
            arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
            arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg26, arg24, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (not(cond:4_1))
            label_1400fec20:
                float var_2c0_1[0x8]
                float var_2a0_1[0x8]
                float var_280_1[0x8]
                
                if (var_418 u> 6)
                label_1400fecb0:
                    var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg17)
                    var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg17)
                    var_280_1 = _mm256_mask_storeu_ps(k1_18, arg17)
                else
                    arg32 = _mm256_mask_mullo_epi32(arg5, arg24, arg18)
                    
                    switch (r15_1)
                        case 0, 1
                            arg6 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_add_epi32(arg5, arg28, arg27), arg32)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_6
                            char temp0_73
                            temp0_73, k2_6 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg6[0].q))
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int64_t k2_8
                            char temp0_76
                            temp0_76, k2_8 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg8[0].q))
                            arg9 = temp0_76
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_10
                            char temp0_79
                            temp0_79, k2_10 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg6[0].q))
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, temp0_73)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg9)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, temp0_79)
                        case 2
                            arg6 = _mm256_mask_add_epi32(arg5, arg28, arg27)
                            arg7 = _mm256_mask_add_epi32(arg5, arg6, arg32)
                            arg6 = _mm256_mask_add_epi32(k1_18, arg6, arg32)
                            int64_t r12_5 = sx.q(arg6[0])
                            int64_t r10_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int64_t r15_2 = sx.q(arg6[0])
                            int64_t rdx_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int64_t rdi_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                            int64_t rsi_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(arg4 + r12_5))
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_4), 1)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_9), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_5), 3)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_2), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_9), 5)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_11), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rsi_13), 7)
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, arg7, 2)
                            int64_t r12_6 = sx.q(arg8[0])
                            int64_t r10_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                            int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                            arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                            int64_t r15_3 = sx.q(arg8[0])
                            int64_t rdx_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                            int64_t rdi_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2))
                            int64_t rsi_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                            arg8[0].o = zx.o(*(arg4 + r12_6))
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r10_5), 1)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r11_10), 2)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r14_6), 3)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r15_3), 4)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdx_12), 5)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdi_14), 6)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rsi_16), 7)
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_18, arg7, 4)
                            int64_t r12_7 = sx.q(arg7[0])
                            int32_t rdx_13 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
                            int64_t r10_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                            arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                            int64_t r15_4 = sx.q(arg7[0])
                            int32_t rdi_16 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1)
                            int64_t r13_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
                            int32_t rsi_18 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3)
                            arg7[0].o = zx.o(*(arg4 + r12_7))
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(rdx_13)), 1)
                            r11_4 = var_40c_1
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_6), 2)
                            r10 = arg38
                            arg2 = var_408_1
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r14_7), 3)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r15_4), 4)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(rdi_16)), 5)
                            arg7[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r13_4), 6)
                            arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                *(arg4 + sx.q(rsi_18)), 7)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            arg9 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            arg6 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg6, arg9))
                            arg10 = _mm256_broadcast_ss(32767f)
                            arg6 = _mm256_div_ps(arg6, arg10)
                            arg8 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg8[0].o), arg9)), 
                                arg10)
                            arg7 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg7[0].o), arg9)), 
                                arg10)
                            arg9 = _mm256_broadcast_ss(128f)
                            arg6 = _mm256_mul_ps(arg6, arg9)
                            arg8 = _mm256_mul_ps(arg8, arg9)
                            arg7 = _mm256_mul_ps(arg7, arg9)
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg6)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg8)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, arg7)
                            arg29 = _mm256_mask_load_ps(arg5, var_3a0_1)
                            arg31 = _mm256_mask_load_ps(arg5, var_380_1)
                            arg30 = _mm256_mask_load_ps(arg5, var_360_1)
                        case 3
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_12
                            char temp0_262
                            temp0_262, k2_12 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg27[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 4)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_14
                            char temp0_265
                            temp0_265, k2_14 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 8)
                            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                            int64_t k2_16
                            char temp0_268
                            temp0_268, k2_16 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg9 = temp0_268
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0xc)
                            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                            int64_t k2_18
                            char temp0_271
                            temp0_271, k2_18 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x10)
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                            int64_t k2_20
                            char temp0_274
                            temp0_274, k2_20 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg11 = temp0_274
                            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x14)
                            arg33[0].o = _mm_mask_xor_ps(arg5, arg33[0].o, arg33[0].o)
                            int64_t k2_22
                            char temp0_277
                            temp0_277, k2_22 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg33 = temp0_277
                            arg7 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_add_epi32(arg5, arg28, arg27), arg32)
                            arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                            int64_t k2_24
                            char temp0_281
                            temp0_281, k2_24 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_18), *(arg4 + arg7[0].q))
                            arg27 = temp0_281
                            arg7 = _mm256_mask_srli_epi32(arg5, arg27, 0x15)
                            arg28 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_mask_srli_epi32(arg5, arg27, 0xa), 0x7ff)
                            arg27 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_mask_cvtepi32_ps(arg5, 
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                                arg27, 0x3ff), 
                                            0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_271, temp0_262)
                            arg6 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg10 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg28, arg6))
                            arg28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg10 = _mm256_fmadd_ps(_mm256_mask_div_ps(arg5, arg10, arg28), arg11, 
                                temp0_265)
                            arg6 = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(arg7, arg6)), arg28), 
                                arg5, arg33, arg9)
                            var_2c0_1 = _mm256_mask_storeu_ps(k1_18, arg27)
                            var_2a0_1 = _mm256_mask_storeu_ps(k1_18, arg10)
                            var_280_1 = _mm256_mask_storeu_ps(k1_18, arg6)
                        case 4, 5, 6
                            goto label_1400fecb0
                
                arg6 = _mm256_mask_sub_ps(arg5, var_2c0_1, arg29)
                arg7 = _mm256_mask_sub_ps(arg5, var_2a0_1, arg31)
                arg8 = _mm256_mask_sub_ps(arg5, var_280_1, arg30)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg23, arg29)
                arg7 = _mm256_mask3_fmadd_ps(arg7, arg5, arg23, arg31)
                arg8 = _mm256_mask3_fmadd_ps(arg8, arg5, arg23, arg30)
                float var_3a0_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg6)
                float var_380_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg7)
                float var_360_2[0x8] = _mm256_mask_storeu_ps(k1_18, arg8)
                arg29 = _mm256_mask_load_ps(arg5, var_3a0_2)
                arg31 = _mm256_mask_load_ps(arg5, var_380_2)
                arg30 = _mm256_mask_load_ps(arg5, var_360_2)
        else
            arg29 = _mm256_mask_mullo_epi32(arg5, arg26, arg18)
            int64_t rsi_1 = sx.q(jump_table_14010028c[r15_1])
            cond:4_1 = rsi_1 == -0x14010028c
            
            switch (rsi_1)
                case -0x170e
                    arg9 = _mm256_mask_add_epi32(arg5, _mm256_mask_add_epi32(arg5, arg28, arg27), 
                        arg29)
                    arg29[0].o = _mm_mask_xor_epi32(arg5, arg29[0].o, arg29[0].o)
                    int64_t k1_13
                    char temp0_56
                    temp0_56, k1_13 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg9[0].q))
                    arg29 = temp0_56
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 4)
                    arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
                    int64_t k1_15
                    char temp0_59
                    temp0_59, k1_15 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg31 = temp0_59
                    arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 8)
                    arg30[0].o = _mm_mask_xor_ps(arg5, arg30[0].o, arg30[0].o)
                    int64_t k1_17
                    char temp0_62
                    temp0_62, k1_17 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg9[0].q))
                    arg30 = temp0_62
                case -0x16ac
                    goto label_1400febe0
                case -0x15ba
                    arg9 = _mm256_mask_add_epi32(arg5, _mm256_mask_add_epi32(arg5, arg28, arg27), 
                        arg29)
                    int64_t rdx = sx.q(arg9[0])
                    int64_t rcx_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1))
                    int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int64_t r12_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg13[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t r11_6 = sx.q(arg13[0])
                    int64_t r14_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 1))
                    int64_t r13_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 2))
                    int64_t rcx_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg13[0].o, 3))
                    arg13[0].o = zx.o(*(arg4 + rdx))
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rcx_5), 1)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rsi_5), 2)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r12_2), 3)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r11_6), 4)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r14_2), 5)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + r13_2), 6)
                    arg13[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg13[0].o, *(arg4 + rcx_6), 7)
                    arg29 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 2)
                    int64_t r8 = sx.q(arg29[0])
                    int64_t r10_2 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg29[0].o, 1))
                    int64_t r11_7 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg29[0].o, 2))
                    int64_t r14_3 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg29[0].o, 3))
                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg29, 1)
                    int64_t r12_3 = sx.q(arg6[0])
                    int64_t rdx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int64_t rdi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
                    int64_t rsi_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg4 + r8))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_2), 1)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_7), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_3), 3)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r12_3), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_4), 5)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_5), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rsi_8), 7)
                    arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 4)
                    int64_t r8_1 = sx.q(arg9[0])
                    int32_t rdx_5 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
                    int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3))
                    arg9[0].o = _mm256_extracti128_si256(arg9, 1)
                    int64_t r12_4 = sx.q(arg9[0])
                    int32_t rdi_7 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 1)
                    int64_t r13_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 2))
                    int32_t rsi_10 = __vpextrd_gpr32d_xmmdq_immb(arg9[0].o, 3)
                    arg9[0].o = zx.o(*(arg4 + r8_1))
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(rdx_5)), 1)
                    r11_4 = var_40c_1
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r10_3), 2)
                    r10 = arg38
                    arg2 = var_408_1
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r14_4), 3)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r12_4), 4)
                    arg3 = var_330_1
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(rdi_7)), 5)
                    arg9[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + r13_3), 6)
                    arg9[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg9[0].o, *(arg4 + sx.q(rsi_10)), 7)
                    arg29 = _mm256_mask_cvtepu16_epi32(arg5, arg13[0].o)
                    arg30 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xffff8001)
                    arg29 = _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, arg29, arg30))
                    arg31 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg29 = _mm256_mask_div_ps(arg5, arg29, arg31)
                    arg6 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(arg6[0].o), arg30)), 
                        arg31)
                    arg9 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(arg9[0].o), arg30)), 
                        arg31)
                    arg30 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 128f)
                    arg29 = _mm256_mask_mul_ps(arg5, arg29, arg30)
                    arg31 = _mm256_mask_mul_ps(arg5, arg6, arg30)
                    arg30 = _mm256_mask_mul_ps(arg5, arg9, arg30)
                case -0x1351
                    int64_t k1_20
                    char temp0_150
                    temp0_150, k1_20 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg27[0].q))
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 4)
                    arg32[0].o = _mm_mask_xor_ps(arg5, arg32[0].o, arg32[0].o)
                    int64_t k1_22
                    char temp0_153
                    temp0_153, k1_22 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg32 = temp0_153
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 8)
                    arg33[0].o = _mm_mask_xor_ps(arg5, arg33[0].o, arg33[0].o)
                    int64_t k1_24
                    char temp0_156
                    temp0_156, k1_24 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg33 = temp0_156
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0xc)
                    arg31[0].o = _mm_mask_xor_ps(arg5, arg31[0].o, arg31[0].o)
                    int64_t k1_26
                    char temp0_159
                    temp0_159, k1_26 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x10)
                    arg34[0].o = _mm_mask_xor_ps(arg5, arg34[0].o, arg34[0].o)
                    int64_t k1_28
                    char temp0_162
                    temp0_162, k1_28 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg34 = temp0_162
                    arg30 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg27, 0x14)
                    int64_t k1_30
                    char temp0_164
                    temp0_164, k1_30 =
                        _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + arg30[0].q))
                    arg13 = temp0_164
                    arg30 = _mm256_mask_add_epi32(arg5, arg28, arg27)
                    arg29 = _mm256_mask_add_epi32(arg5, arg30, arg29)
                    arg30[0].o = _mm_mask_xor_epi32(arg5, arg30[0].o, arg30[0].o)
                    int64_t k1_32
                    char temp0_168
                    temp0_168, k1_32 = _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), 
                        *(arg4 + arg29[0].q))
                    arg30 = temp0_168
                    arg15 = _mm256_mask_srli_epi32(arg5, arg30, 0x15)
                    arg16 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, arg30, 0xa), 0x7ff)
                    arg29 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_mask_cvtepi32_ps(arg5, 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg30, 
                                        0x3ff), 
                                    0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_159, temp0_150)
                    arg9 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg30 = _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, arg16, arg9))
                    arg16 = _mm256_broadcast_ss(1023f)
                    arg31 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg30, arg16), arg5, 
                        arg34, arg32)
                    arg9 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg15, arg9))
                    arg30 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg9, arg16), arg5, 
                        arg13, arg33)
            
            var_3a0_1 = _mm256_mask_store_ps(arg5, arg29)
            var_380_1 = _mm256_mask_store_ps(arg5, arg31)
            var_360_1 = _mm256_mask_store_ps(arg5, arg30)
            k1_18 = _mm256_cmp_epi32_mask(arg5, arg26, arg24, 4)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (rsi_1 != -0x14010028c)
                goto label_1400fec20
        arg6[0].o = _mm256_extractf32x4_ps(arg5, arg29, 1)
        arg9[0].o = _mm256_extractf32x4_ps(arg5, arg31, 1)
        arg13[0].o = _mm_mask_unpacklo_ps(arg5, arg30[0].o, arg12[0].o)
        arg11[0].o = _mm_mask_unpackhi_ps(arg5, arg30[0].o, arg12[0].o)
        arg8[0].o = _mm_mask_unpacklo_ps(arg5, arg29[0].o, arg31[0].o)
        arg7[0].o = _mm_mask_unpackhi_ps(arg5, arg29[0].o, arg31[0].o)
        arg10[0].o = arg8[0].q | arg13[0].q << 0x40
        int128_t var_240 = arg10[0].o
        arg8[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg8[0].o, arg13[0].o)
        int128_t var_230_1 = arg8[0].o
        arg8[0].o = arg7[0].q | arg11[0].q << 0x40
        int128_t var_220_1 = arg8[0].o
        arg7[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg7[0].o, arg11[0].o)
        int128_t var_210_1 = arg7[0].o
        arg7[0].o = _mm256_extractf32x4_ps(arg5, arg30, 1)
        arg8[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
        arg7[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg12[0].o)
        arg10[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg6[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg9[0].o)
        arg9[0].o = arg10[0].q | arg8[0].q << 0x40
        int128_t var_200_1 = arg9[0].o
        arg8[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
        int128_t var_1f0_1 = arg8[0].o
        arg8[0].o = arg6[0].q | arg7[0].q << 0x40
        int128_t var_1e0_1 = arg8[0].o
        arg6[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_1d0_1 = arg6[0].o
        uint64_t rcx_28
        int64_t r15_5
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 = r15_5 & rol.q(-2, rcx_28.b))
            uint64_t rcx_24 = _tzcnt_u64(i_1)
            int256_t var_260 = _mm256_mask_store_epi64(arg5, arg25)
            r15_5 = i_1 & not.q(1 << (rcx_24 u% 0x40))
            arg6[0].o = (&var_240)[rcx_24]
            *(arg1 + sx.q(*(&var_260 + ((zx.q(rcx_24.d) & 7) << 2))) * 0x30 + 0x10) = arg6[0].o
            rcx_28 = _tzcnt_u64(r15_5)
            arg6[0].o = (&var_240)[rcx_28]
            *(arg1 + sx.q(*(&var_260 + ((zx.q(rcx_28.d) & 7) << 2))) * 0x30 + 0x10) = arg6[0].o
        
        rbx_2 += 8
        cond:9_1 = rbx_2 == r11_4
    while (rbx_2 s< r11_4)
    
    cond:1 = rbx_2 == r10
    
    if (rbx_2 s< r10)
        goto label_1400ff61c
arg12[0].o = var_e8
arg13[0].o = var_d8
arg14[0].o = var_c8
arg15[0].o = var_b8
arg16[0].o = var_a8
arg17[0].o = var_88
arg18[0].o = var_78
arg19[0].o = var_58
_mm256_zeroupper()
return arg1
