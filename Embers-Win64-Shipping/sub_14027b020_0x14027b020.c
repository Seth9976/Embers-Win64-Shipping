// 函数: sub_14027b020
// 地址: 0x14027b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
uint16_t zmm14[0x8]
uint16_t var_68[0x8] = zmm14
uint64_t var_78[0x2] = arg16
uint64_t var_88[0x2] = arg15
int128_t var_98 = arg14[0].o
int128_t var_a8 = arg13.o
int128_t var_b8 = arg12[0].o
int128_t var_c8 = arg11[0].o
uint64_t var_d8[0x2] = arg10
int128_t var_e8 = arg9[0].o
int64_t r13 = arg2
int64_t rdi = sx.q(arg33)
uint32_t r10 = arg34
uint32_t zmm29[0x8]
zmm29[0].o = _mm_mask_load_ss(arg5, arg31)
uint32_t var_740 = *(&data_143442d80 + (rdi << 2)) * *(&data_143442d60 + (rdi << 2))
uint32_t r14 = 0
int32_t var_738 = rdi.d
uint32_t rcx = 0x18

if (rdi != 3)
    rcx = 0

int32_t r11_4 = ((r10 s>> 0x1f u>> 0x1d) + r10) & 0xfffffff8
uint32_t zmm0[0x8]
float zmm2[0x8]
uint32_t zmm3[0x8]
uint32_t zmm26[0x8]
uint64_t zmm27[0x4]
int32_t zmm31[0x8]

if (r11_4 s> 0)
    zmm0 = _mm256_mask_set1_epi64(arg5, arg4)
    int64_t var_2c0_1[0x4] = zmm0
    arg17 = _mm256_mask_set1_epi32(arg5, rcx)
    zmm0[0].o = _mm_mask_set1_epi32(arg5, rcx)
    zmm27 = _mm256_mask_cvtepu32_epi64(arg5, zmm0[0].o)
    arg28 = _mm256_mask_set1_epi32(arg5, var_740)
    zmm0[0].o = zx.o(0)
    int64_t rsi
    rsi.b = zx.o(0) f>= zmm29[0].o
    rsi.b = neg.b(rsi.b)
    zmm0[0].o = _mm_mask_set1_epi8(arg5, rsi.d)
    int128_t var_430_1 = zmm0[0].o
    uint32_t rsi_1 = arg30 - 2
    zmm0 = _mm256_mask_broadcastss_ps(arg5, zmm29[0].o)
    float var_2e0_1[0x8] = zmm0
    zmm0[0].o = arg6[0].o
    zmm0[0] = float.s(arg30 - 1)
    zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm29[0].o)
    int32_t rcx_5 = int.d(zmm0[0])
    int32_t rcx_6 = rcx_5 & not.d(rcx_5 s>> 0x1f)
    
    if (rsi_1 s> rcx_6)
        rsi_1 = rcx_6
    
    arg19 = _mm256_mask_set1_epi32(arg5, rsi_1)
    uint32_t var_300_1[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
    r14 = 0
    bool cond:2_1 = true
    bool cond:4_1 = true
    bool cond:6_1 = true
    bool cond:7_1 = true
    zmm26 = _mm256_mask_load_epi64(arg5, data_143442140)
    arg22[0].o = _mm_mask_xor_ps(arg5, arg22[0].o, arg22[0].o)
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    zmm14 = data_142fc92e0
    int64_t var_688_1 = arg3
    int32_t var_73c_1 = r11_4
    uint64_t var_5c0_1[0x4] = _mm256_mask_store_epi64(arg5, zmm27)
    uint64_t var_680_1[0x4] = _mm256_mask_store_epi64(arg5, arg28)
    int64_t var_5c8_1 = r13
    int32_t var_4e0_1[0x8] = arg17
    
    do
        zmm0 = _mm256_mask_add_epi32(arg5, _mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r14), 3), 
            zmm26)
        int64_t k1_2
        char temp0_359
        temp0_359, k1_2 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r13 + zmm0[0].q))
        zmm0 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k1_4
        char temp0_361
        temp0_361, k1_4 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(r13 + zmm0[0].q))
        zmm0 = _mm256_slli_epi32(temp0_361, 4)
        zmm2 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k1_6
        char temp0_364
        temp0_364, k1_6 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + zmm2[0].q))
        arg14 = temp0_364
        zmm0 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        int64_t k1_8
        char temp0_366
        temp0_366, k1_8 =
            _mm256_mmask_i32gather_epi32(_kxnor_mask16(arg5, arg5), *(arg3 + zmm0[0].q))
        zmm3 = temp0_366
        uint64_t k1_9 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        uint32_t var_5a0[0x8]
        int64_t var_580[0x4]
        float var_560[0x8]
        uint32_t var_540[0x8]
        
        if (not(cond:2_1))
            int64_t k2_3
            char temp0_367
            temp0_367, k2_3 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_9), 
                *(arg4 + arg14[0].q))
            zmm0 = temp0_367
            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 4)
            int64_t k2_5
            char temp0_369
            temp0_369, k2_5 =
                _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_9), *(arg4 + arg6[0]))
            zmm2 = temp0_369
            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 8)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k2_7
            char temp0_372
            temp0_372, k2_7 =
                _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_9), *(arg4 + arg6[0]))
            arg7 = temp0_372
            var_5a0 = _mm256_mask_storeu_ps(k1_9, zmm0)
            zmm0 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm0, 
                        0x3f800000), 
                    zmm2, zmm2), 
                arg7, arg7)
            zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg22, zmm0, 1), zmm0)
            var_580 = _mm256_mask_storeu_ps(k1_9, zmm2)
            var_560 = _mm256_mask_storeu_ps(k1_9, arg7)
            var_540 = _mm256_mask_storeu_ps(k1_9, zmm0)
        
        uint64_t k2_9 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm3, 1, 4)
        _kortest_mask8_u8(k2_9, k2_9)
        
        if (not(cond:4_1))
            zmm0[0].o = _mm256_extracti128_si256(arg14, 1)
            arg23 = _mm256_mask_cvtepi32_epi64(arg5, zmm0[0].o)
            arg18 = _mm256_mask_cvtepi32_epi64(arg5, arg14[0].o)
            int64_t k3_20 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm3, 2, 1)
            arg10 = _mm_movm_epi16(k2_9)
            zmm0[0].o = var_430_1
            zmm31[0].o =
                __vpblendmw_xmmu16_maskmskw_xmmu16_memu16_avx512(k3_20, zmm0[0].o, data_142fc92e0)
            zmm0[0].o = _mm_mask_and_epi64(arg5, zmm31[0].o, arg10)
            int64_t k0_14 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm14)
            _kortest_mask8_u8(k0_14, k0_14)
            
            if (not(cond:6_1))
                int64_t k3_21 = _mm_mask_testn_epi16_mask(k0_14, zmm0[0].o, zmm14)
                arg25 = _mm256_mask_mov_epi32(k3_21, arg25)
                arg20 = _mm256_mask_mov_epi32(k3_21, arg20)
            
            arg6 = _mm256_mask_add_epi64(k0_14, arg23, zmm27)
            arg7 = _mm256_mask_add_epi64(k0_14, arg18, zmm27)
            zmm0[0].o = _mm_mask_xor_epi64(k0_14, zmm31[0].o, zmm14)
            arg18[0].o = _mm_mask_and_epi64(k0_14, zmm0[0].o, arg10)
            arg5 = _mm_mask_test_epi16_mask(k0_14, arg18[0].o, zmm14)
            arg24[0].o = _mm_mask_xor_ps(arg5, arg24[0].o, arg24[0].o)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:7_1)
                goto label_14027c849
            
            arg12 = _mm256_add_epi32(zmm3, arg11)
            uint64_t r15_1
            bool cond:9_1
            
            if (not(zmm29[0].o f>= 1f))
                zmm0 = _mm256_mask_mullo_epi32(arg5, zmm3, arg28)
                zmm2[0].o = _mm256_extracti128_si256(zmm0, 1)
                zmm3 = _mm256_add_epi64(arg7, var_2c0_1)
                arg8 = _mm256_add_epi64(arg6, var_2c0_1)
                arg23 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(arg5, 3)
                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                zmm2 = _mm256_cvtepi32_epi64(zmm2[0].o)
                zmm0 = _mm256_add_epi64(zmm0, _mm256_mask_add_epi64(arg5, zmm3, arg23))
                zmm2 = _mm256_add_epi64(zmm2, _mm256_mask_add_epi64(arg5, arg8, arg23))
                zmm3 = __vpbroadcastq_ymmqq_memq(-4)
                arg17 = zmm2 & zmm3
                arg24 = _mm256_mask_and_epi64(arg5, zmm0, zmm3)
                char temp0_408 = _cvtmask32_u32(arg5)
                arg28 = _mm256_mask_min_epi32(arg5, 
                    _mm256_mask_max_epi32(arg5, 
                        _mm256_cvttps_epi32(__vmulps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg12), 
                            var_2e0_1)), 
                        arg22), 
                    arg12)
                
                if (arg30 s< 0x100)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg28[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg24, zmm0)
                    int128_t var_4f0
                    uint16_t rcx_15[0x2]
                    
                    if ((temp0_408 & 1) != 0)
                        arg8[0].o = var_4f0
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 0)
                        
                        if ((temp0_408 & 2) != 0)
                            rcx_15 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_15, 1)
                    else
                        arg8[0].o = var_4f0
                        
                        if ((temp0_408 & 2) != 0)
                            rcx_15 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_15, 1)
                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg28, 1)
                    
                    if ((temp0_408 & 4) == 0)
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                            goto label_14027b855
                        
                        goto label_14027b549
                    
                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm2[0].q), 2)
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((temp0_408 & 8) != 0)
                    label_14027b855:
                        zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint16_t rcx_28[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_28, 3)
                        zmm3 = _mm256_add_epi64(arg17, zmm0)
                        
                        if ((temp0_408 & 0x10) == 0)
                            goto label_14027b557
                        
                        goto label_14027b87f
                    
                label_14027b549:
                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) != 0)
                    label_14027b87f:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 4)
                        
                        if ((temp0_408 & 0x20) != 0)
                        label_14027b894:
                            uint16_t rcx_32[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_32, 5)
                            
                            if ((temp0_408 & 0x40) == 0)
                                goto label_14027b56b
                            
                            goto label_14027b8a6
                    else
                    label_14027b557:
                        
                        if ((temp0_408 & 0x20) != 0)
                            goto label_14027b894
                    
                    bool cond:26_1
                    bool cond:30_1
                    bool cond:32_1
                    bool cond:34_1
                    
                    if ((temp0_408 & 0x40) != 0)
                    label_14027b8a6:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 6)
                        cond:26_1 = temp0_408 == 0
                        cond:30_1 = temp0_408 == 0
                        cond:32_1 = temp0_408 == 0
                        cond:34_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                        label_14027b8c2:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint16_t rcx_36[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_36, 7)
                    else
                    label_14027b56b:
                        cond:26_1 = temp0_408 == 0
                        cond:30_1 = temp0_408 == 0
                        cond:32_1 = temp0_408 == 0
                        cond:34_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                            goto label_14027b8c2
                    
                    arg26[0].o = __vpbroadcastw_xmmu16_maskmskw_memu16_avx512(arg5, 0xff)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg8[0].o, arg26[0].o)
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    int64_t k3_2 = _mm256_cmp_epi32_mask(arg5, arg19, zmm0, 5)
                    arg27[0].o = _mm_movm_epi16(k3_2)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg18[0].o, arg27[0].o)
                    int64_t k0_4 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, arg26[0].o)
                    _kortest_mask8_u8(k0_4, k0_4)
                    var_4f0 = arg8[0].o
                    
                    if (cond:26_1)
                        zmm3 = _mm256_mask_mov_epi64(k0_4, arg28)
                    else
                        zmm27 = _mm256_mask_blend_epi32(k3_2, arg28, arg12)
                        arg9 = _mm256_mask_sub_epi32(k0_4, arg28, arg11)
                        int64_t k0_5 = _mm256_cmp_epi32_mask(k3_2, arg9, arg12, 2)
                        zmm26[0].o = _mm_movm_epi16(k0_5)
                        arg10 = _mm_mask_and_epi64(k0_5, arg18[0].o, zmm26[0].o)
                        k0_4 = _mm_mask_test_epi16_mask(k0_5, arg10, zmm14)
                        _kortest_mask8_u8(k0_4, k0_4)
                        
                        if (cond:30_1)
                            zmm3 = _mm256_mask_mov_epi64(k0_4, zmm27)
                        else
                            char rbx_8 = _cvtmask32_u32(k0_4)
                            zmm29 = _mm256_mask_mov_epi64(k0_4, arg28)
                            bool cond:44_1
                            
                            do
                                arg23 = _mm256_mask_mov_epi64(k0_4, arg9)
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_4, arg23[0].o)
                                zmm3 = _mm256_mask_add_epi64(k0_4, arg24, zmm0)
                                int64_t k0_6 = _mm_mask_test_epi16_mask(k0_4, arg10, zmm14)
                                char temp0_104 = _cvtmask32_u32(k0_6)
                                
                                if ((temp0_104 & 1) == 0)
                                    if ((temp0_104 & 2) != 0)
                                        goto label_14027b61f
                                    
                                    goto label_14027b711
                                
                                arg15 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, zx.d(*zmm3[0].q), 0)
                                
                                if ((temp0_104 & 2) != 0)
                                label_14027b61f:
                                    arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)), 1)
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_6, arg23, 1)
                                    
                                    if ((temp0_104 & 4) == 0)
                                        goto label_14027b721
                                    
                                    goto label_14027b634
                                
                            label_14027b711:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_6, arg23, 1)
                                
                                if ((temp0_104 & 4) == 0)
                                label_14027b721:
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_104 & 8) != 0)
                                        goto label_14027b655
                                    
                                    goto label_14027b72f
                                
                            label_14027b634:
                                zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg15 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, zx.d(*zmm2[0].q), 2)
                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                
                                if ((temp0_104 & 8) != 0)
                                label_14027b655:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)), 3)
                                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                                    
                                    if ((temp0_104 & 0x10) == 0)
                                        goto label_14027b73c
                                    
                                    goto label_14027b67e
                                
                            label_14027b72f:
                                zmm3 = _mm256_add_epi64(arg17, zmm0)
                                
                                if ((temp0_104 & 0x10) == 0)
                                label_14027b73c:
                                    
                                    if ((temp0_104 & 0x20) != 0)
                                        goto label_14027b695
                                    
                                    goto label_14027b745
                                
                            label_14027b67e:
                                arg15 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, zx.d(*zmm3[0].q), 4)
                                
                                if ((temp0_104 & 0x20) != 0)
                                label_14027b695:
                                    arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)), 5)
                                    
                                    if ((temp0_104 & 0x40) == 0)
                                        goto label_14027b74e
                                    
                                    goto label_14027b6a3
                                
                            label_14027b745:
                                
                                if ((temp0_104 & 0x40) != 0)
                                label_14027b6a3:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_104 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)
                                else
                                label_14027b74e:
                                    
                                    if (temp0_104 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg15 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg15, 
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)
                                
                                zmm0[0].o = _mm_mask_and_epi64(k0_6, arg15, arg26[0].o)
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm2[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_6, zmm0, 
                                        arg19), 
                                    zmm26[0].o)
                                zmm0[0].o = zx.o(0)
                                int64_t k4_5 =
                                    _mm_mask_testn_epi16_mask(k0_6, zmm2[0].o, arg26[0].o)
                                zmm3[0].o = _mm_mask_and_epi64(k0_6, zmm2[0].o, arg18[0].o)
                                int64_t k0_7 = _mm_mask_test_epi16_mask(k0_6, zmm3[0].o, arg26[0].o)
                                char temp0_112 = _cvtmask32_u32(k0_7)
                                cond:32_1 = rbx_8 == temp0_112
                                cond:34_1 = rbx_8 == temp0_112
                                cond:44_1 = rbx_8 != temp0_112
                                
                                if (rbx_8 != temp0_112)
                                    zmm0[0].o = _mm_mask_xor_epi64(k0_7, zmm2[0].o, zmm26[0].o)
                                
                                _mm256_mask_mov_epi64(k0_7, zmm29)
                                zmm3 = _mm256_mask_mov_epi32(k4_5, zmm27)
                                arg9 = _mm256_mask_sub_epi32(k0_7, arg23, arg11)
                                zmm26[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_7, arg9, arg12, 2), zmm0[0].o)
                                arg10 = _mm_mask_and_epi64(k0_7, zmm26[0].o, arg18[0].o)
                                k0_4 = _mm_mask_test_epi16_mask(k0_7, arg10, arg26[0].o)
                                _kortest_mask8_u8(k0_4, k0_4)
                                rbx_8 = _cvtmask32_u32(k0_4)
                                zmm29 = _mm256_mask_mov_epi64(k0_4, arg23)
                                zmm27 = _mm256_mask_mov_epi64(k0_4, zmm3)
                            while (cond:44_1)
                    
                    zmm0[0].o = _mm_mask_xor_epi64(k0_4, arg27[0].o, zmm14)
                    zmm2[0].o = _mm_mask_and_epi64(k0_4, arg18[0].o, zmm0[0].o)
                    int64_t k0_11 = _mm_mask_test_epi16_mask(k0_4, zmm2[0].o, zmm14)
                    _kortest_mask8_u8(k0_11, k0_11)
                    
                    if (cond:32_1)
                        arg28 = _mm256_mask_load_epi64(k0_11, var_680_1)
                    else
                        arg27 = _mm256_mask_mov_epi32(k3_2, zmm3)
                        arg23 = _mm256_mask_add_epi32(k0_11, arg28, arg11)
                        arg9[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, arg23, arg22), 
                            zmm0[0].o)
                        arg10 = _mm_mask_and_epi64(k0_11, arg9[0].o, arg18[0].o)
                        k0_11 = _mm_mask_test_epi16_mask(k0_11, arg10, zmm14)
                        _kortest_mask8_u8(k0_11, k0_11)
                        
                        if (cond:34_1)
                            zmm3 = _mm256_mask_mov_epi64(k0_11, arg27)
                            arg28 = _mm256_mask_load_epi64(k0_11, var_680_1)
                        else
                            char rbx_16 = _cvtmask32_u32(k0_11)
                            arg28 = _mm256_mask_load_epi64(k0_11, var_680_1)
                            bool cond:46_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg23[0].o)
                                zmm3 = _mm256_mask_add_epi64(k0_11, arg24, zmm0)
                                int64_t k0_12 = _mm_mask_test_epi16_mask(k0_11, arg10, zmm14)
                                char temp0_212 = _cvtmask32_u32(k0_12)
                                
                                if ((temp0_212 & 1) == 0)
                                    if ((temp0_212 & 2) != 0)
                                        goto label_14027bbcf
                                    
                                    goto label_14027bcbb
                                
                                arg16 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, zx.d(*zmm3[0].q), 0)
                                
                                if ((temp0_212 & 2) != 0)
                                label_14027bbcf:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)), 1)
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg23, 1)
                                    
                                    if ((temp0_212 & 4) == 0)
                                        goto label_14027bccb
                                    
                                    goto label_14027bbe4
                                
                            label_14027bcbb:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_12, arg23, 1)
                                
                                if ((temp0_212 & 4) == 0)
                                label_14027bccb:
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_212 & 8) != 0)
                                        goto label_14027bc05
                                    
                                    goto label_14027bcd9
                                
                            label_14027bbe4:
                                zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg16 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, zx.d(*zmm2[0].q), 2)
                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                
                                if ((temp0_212 & 8) != 0)
                                label_14027bc05:
                                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)), 3)
                                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                                    
                                    if ((temp0_212 & 0x10) == 0)
                                        goto label_14027bce6
                                    
                                    goto label_14027bc2e
                                
                            label_14027bcd9:
                                zmm3 = _mm256_add_epi64(arg17, zmm0)
                                
                                if ((temp0_212 & 0x10) == 0)
                                label_14027bce6:
                                    
                                    if ((temp0_212 & 0x20) != 0)
                                        goto label_14027bc45
                                    
                                    goto label_14027bcef
                                
                            label_14027bc2e:
                                arg16 =
                                    __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, zx.d(*zmm3[0].q), 4)
                                
                                if ((temp0_212 & 0x20) != 0)
                                label_14027bc45:
                                    arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)), 5)
                                    
                                    if ((temp0_212 & 0x40) == 0)
                                        goto label_14027bcf8
                                    
                                    goto label_14027bc53
                                
                            label_14027bcef:
                                
                                if ((temp0_212 & 0x40) != 0)
                                label_14027bc53:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_212 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)
                                else
                                label_14027bcf8:
                                    
                                    if (temp0_212 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg16 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg16, 
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)
                                
                                zmm0[0].o = _mm_mask_and_epi64(k0_12, arg16, arg26[0].o)
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm2[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_12, arg19, zmm0, 5), arg9[0].o)
                                zmm0[0].o = zx.o(0)
                                int64_t k3_9 =
                                    _mm_mask_testn_epi16_mask(k0_12, zmm2[0].o, arg26[0].o)
                                zmm3[0].o = _mm_mask_and_epi64(k0_12, zmm2[0].o, arg18[0].o)
                                int64_t k0_13 =
                                    _mm_mask_test_epi16_mask(k0_12, zmm3[0].o, arg26[0].o)
                                char temp0_220 = _cvtmask32_u32(k0_13)
                                cond:46_1 = rbx_16 != temp0_220
                                
                                if (rbx_16 != temp0_220)
                                    zmm0[0].o = zmm2[0].o ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(k0_13, arg23)
                                arg23 = _mm256_mask_add_epi32(k0_13, arg23, arg11)
                                zmm3 = _mm256_mask_mov_epi32(k3_9, arg27)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_13, arg23, 
                                        arg22), 
                                    zmm0[0].o)
                                arg10 = _mm_mask_and_epi64(k0_13, arg9[0].o, arg18[0].o)
                                k0_11 = _mm_mask_test_epi16_mask(k0_13, arg10, arg26[0].o)
                                _kortest_mask8_u8(k0_11, k0_11)
                                rbx_16 = _cvtmask32_u32(k0_11)
                                arg27 = _mm256_mask_mov_epi64(k0_11, zmm3)
                            while (cond:46_1)
                    
                    arg25 = _mm256_mask_blend_epi32(
                        _mm_mask_testn_epi16_mask(k0_11, arg18[0].o, zmm14), zmm3, arg25)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_11, arg25[0].o)
                    arg23 = _mm256_mask_add_epi64(k0_11, arg24, zmm0)
                    uint64_t var_770[0x2]
                    
                    if ((temp0_408 & 1) != 0)
                        zmm0[0].o = var_770
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg23[0].o), 0)
                        var_770 = zmm0[0].o
                    
                    zmm29[0].o = _mm_mask_load_ss(k0_11, arg31)
                    zmm27 = _mm256_mask_load_epi64(k0_11, var_5c0_1)
                    zmm26 = _mm256_mask_load_epi64(k0_11, data_143442140)
                    
                    if ((temp0_408 & 2) == 0)
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_11, arg25, 1)
                        
                        if ((temp0_408 & 4) != 0)
                            goto label_14027c267
                        
                        goto label_14027c1bb
                    
                    uint32_t rcx_62 = zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1))
                    zmm0[0].o = var_770
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_62, 1)
                    var_770 = zmm0[0].o
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_11, arg25, 1)
                    
                    if ((temp0_408 & 4) != 0)
                    label_14027c267:
                        zmm2[0].o = _mm256_extracti32x4_epi32(k0_11, arg23, 1)
                        zmm2[0].o = var_770
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm2[0].q), 2)
                        var_770 = zmm2[0].o
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) == 0)
                            goto label_14027c1ca
                        
                        goto label_14027c296
                    
                label_14027c1bb:
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((temp0_408 & 8) == 0)
                    label_14027c1ca:
                        arg23 = _mm256_mask_add_epi64(k0_11, arg17, zmm0)
                        
                        if ((temp0_408 & 0x10) != 0)
                            goto label_14027c2d0
                        
                        goto label_14027c1da
                    
                label_14027c296:
                    zmm2[0].o = _mm256_extracti32x4_epi32(k0_11, arg23, 1)
                    uint16_t rcx_66[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                    zmm2[0].o = var_770
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rcx_66, 3)
                    var_770 = zmm2[0].o
                    arg23 = _mm256_mask_add_epi64(k0_11, arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) != 0)
                    label_14027c2d0:
                        zmm0[0].o = var_770
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*arg23[0].o), 4)
                        var_770 = zmm0[0].o
                        
                        if ((temp0_408 & 0x20) == 0)
                            goto label_14027c1e4
                        
                        goto label_14027c2f2
                    
                label_14027c1da:
                    
                    if ((temp0_408 & 0x20) == 0)
                    label_14027c1e4:
                        
                        if ((temp0_408 & 0x40) != 0)
                            goto label_14027c310
                        
                        goto label_14027c1ee
                    
                label_14027c2f2:
                    uint32_t rcx_70 = zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg23[0].o, 1))
                    zmm0[0].o = var_770
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_70, 5)
                    var_770 = zmm0[0].o
                    bool cond:40_1
                    
                    if ((temp0_408 & 0x40) == 0)
                    label_14027c1ee:
                        cond:40_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                        label_14027c339:
                            zmm0[0].o = _mm256_extracti32x4_epi32(k0_11, arg23, 1)
                            uint32_t rcx_74 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm0[0].o = var_770
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, rcx_74, 7)
                            var_770 = zmm0[0].o
                    else
                    label_14027c310:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_11, arg23, 1)
                        zmm0[0].o = var_770
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm0[0].o, zx.d(*zmm0[0].q), 6)
                        var_770 = zmm0[0].o
                        cond:40_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                            goto label_14027c339
                    
                    int64_t k3_16 = _mm_mask_testn_epi16_mask(k0_11, arg18[0].o, arg26[0].o)
                    _mm256_sub_epi32(zmm3, arg11)
                    zmm0 = _mm256_mask_mov_epi32(k3_16, arg20)
                    zmm2[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_11, zmm0, arg12), 
                        arg18[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_11, zmm2[0].o, arg26[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (cond:40_1)
                        arg20 = _mm256_mask_mov_epi64(arg5, zmm0)
                    else
                        arg12 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm2[0].o, arg26[0].o), zmm0)
                        arg20 = _mm256_mask_mov_epi64(arg5, arg12)
                    
                    int128_t var_510
                    arg8[0].o = var_510
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg20[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg24, zmm0)
                    
                    if ((temp0_408 & 1) == 0)
                        if ((temp0_408 & 2) != 0)
                            goto label_14027c4b5
                        
                        goto label_14027c38e
                    
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 0)
                    
                    if ((temp0_408 & 2) != 0)
                    label_14027c4b5:
                        uint16_t rcx_79[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_79, 1)
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                        
                        if ((temp0_408 & 4) == 0)
                            goto label_14027c39f
                        
                        goto label_14027c4ce
                    
                label_14027c38e:
                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg20, 1)
                    
                    if ((temp0_408 & 4) == 0)
                    label_14027c39f:
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                            goto label_14027c4f0
                        
                        goto label_14027c3ae
                    
                label_14027c4ce:
                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm2[0].q), 2)
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((temp0_408 & 8) != 0)
                    label_14027c4f0:
                        zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint16_t rcx_83[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_83, 3)
                        zmm3 = _mm256_add_epi64(arg17, zmm0)
                        
                        if ((temp0_408 & 0x10) == 0)
                            goto label_14027c3bc
                        
                        goto label_14027c51a
                    
                label_14027c3ae:
                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) != 0)
                    label_14027c51a:
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm3[0].q), 4)
                        arg17 = var_4e0_1
                        
                        if ((temp0_408 & 0x20) != 0)
                        label_14027c538:
                            uint16_t rcx_87[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_87, 5)
                            
                            if ((temp0_408 & 0x40) == 0)
                                goto label_14027c3d9
                            
                            goto label_14027c54a
                    else
                    label_14027c3bc:
                        arg17 = var_4e0_1
                        
                        if ((temp0_408 & 0x20) != 0)
                            goto label_14027c538
                    
                    if ((temp0_408 & 0x40) != 0)
                    label_14027c54a:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg8[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, zx.d(*zmm0[0].q), 6)
                        zmm0[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg26[0].o, var_770)
                        
                        if (temp0_408 s< 0)
                        label_14027c56e:
                            zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint16_t rcx_91[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1))
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rcx_91, 7)
                    else
                    label_14027c3d9:
                        zmm0[0].o =
                            __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, arg26[0].o, var_770)
                        
                        if (temp0_408 s< 0)
                            goto label_14027c56e
                    
                    zmm3 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    var_510 = arg8[0].o
                    zmm0[0].o = arg8[0].o & zmm14
                    arg18 = _mm256_mask_cvtepu16_epi32(arg5, zmm0[0].o)
                    zmm0[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                    label_14027c416:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_mask_sub_epi32(arg5, arg18, zmm3), 1)
                        zmm2 = _mm256_cvtepi32_ps(zmm3)
                        zmm3 = var_300_1
                        zmm2 = _mm256_sub_ps(zmm3, zmm2)
                        zmm0 = _mm256_div_ps(zmm2, _mm256_cvtepi32_ps(zmm0))
                else
                    arg23 = _mm256_mask_add_epi32(arg5, arg28, arg28)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg23[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg24, zmm0)
                    
                    if ((temp0_408 & 1) == 0)
                        if ((temp0_408 & 2) != 0)
                            goto label_14027b216
                        
                        goto label_14027c801
                    
                    int128_t var_730
                    zmm0[0].o = var_730
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 0)
                    var_730 = zmm0[0].o
                    
                    if ((temp0_408 & 2) != 0)
                    label_14027b216:
                        int64_t rcx_8 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o = var_730
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_8, 1)
                        var_730 = zmm0[0].o
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                        
                        if ((temp0_408 & 4) == 0)
                            goto label_14027c812
                        
                        goto label_14027b23e
                    
                label_14027c801:
                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg23, 1)
                    
                    if ((temp0_408 & 4) != 0)
                    label_14027b23e:
                        zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg8[0].o = var_730
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm2[0].q, 2)
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                        label_14027b25f:
                            zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint16_t* rcx_10 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_10, 3)
                    else
                    label_14027c812:
                        arg8[0].o = var_730
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                            goto label_14027b25f
                    
                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) != 0)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm3[0].q, 4)
                        
                        if ((temp0_408 & 0x20) != 0)
                        label_14027b7ef:
                            uint16_t* rcx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_22, 5)
                            
                            if ((temp0_408 & 0x40) == 0)
                                goto label_14027b292
                            
                            goto label_14027b804
                    else if ((temp0_408 & 0x20) != 0)
                        goto label_14027b7ef
                    
                    bool cond:27_1
                    bool cond:31_1
                    bool cond:33_1
                    bool cond:35_1
                    
                    if ((temp0_408 & 0x40) != 0)
                    label_14027b804:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm0[0].q, 6)
                        cond:27_1 = temp0_408 == 0
                        cond:31_1 = temp0_408 == 0
                        cond:33_1 = temp0_408 == 0
                        cond:35_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                        label_14027b81d:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint16_t* rcx_24 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_24, 7)
                    else
                    label_14027b292:
                        cond:27_1 = temp0_408 == 0
                        cond:31_1 = temp0_408 == 0
                        cond:33_1 = temp0_408 == 0
                        cond:35_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                            goto label_14027b81d
                    
                    zmm0 = _mm256_cvtepu16_epi32(arg8[0].o)
                    int64_t k3_1 = _mm256_cmp_epi32_mask(arg5, arg19, zmm0, 5)
                    zmm29[0].o = _mm_movm_epi16(k3_1)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg18[0].o, zmm29[0].o)
                    int64_t k0 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, zmm14)
                    _kortest_mask8_u8(k0, k0)
                    var_730 = arg8[0].o
                    
                    if (cond:27_1)
                        arg26 = _mm256_mask_mov_epi64(k0, arg28)
                    else
                        arg27 = _mm256_mask_blend_epi32(k3_1, arg28, arg12)
                        zmm27 = _mm256_mask_sub_epi32(k0, arg28, arg11)
                        int64_t k0_1 = _mm256_cmp_epi32_mask(k3_1, zmm27, arg12, 2)
                        arg9[0].o = _mm_movm_epi16(k0_1)
                        arg10 = _mm_mask_and_epi64(k0_1, arg18[0].o, arg9[0].o)
                        k0 = _mm_mask_test_epi16_mask(k0_1, arg10, zmm14)
                        _kortest_mask8_u8(k0, k0)
                        
                        if (cond:31_1)
                            arg26 = _mm256_mask_mov_epi64(k0, arg27)
                        else
                            char rcx_11 = _cvtmask32_u32(k0)
                            zmm26 = _mm256_mask_mov_epi64(k0, arg28)
                            bool cond:45_1
                            
                            do
                                arg23 = _mm256_mask_mov_epi64(k0, zmm27)
                                zmm27 = _mm256_mask_add_epi32(k0, zmm27, zmm27)
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0, zmm27[0].o)
                                arg26 = _mm256_mask_add_epi64(k0, arg24, zmm0)
                                int64_t k0_2 = _mm_mask_test_epi16_mask(k0, arg10, zmm14)
                                char temp0_53 = _cvtmask32_u32(k0_2)
                                
                                if ((temp0_53 & 1) == 0)
                                    if ((temp0_53 & 2) != 0)
                                        goto label_14027b327
                                    
                                    goto label_14027b42a
                                
                                arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg29[0].o, 
                                    *arg26[0].o, 0)
                                
                                if ((temp0_53 & 2) != 0)
                                label_14027b327:
                                    uint64_t rbx_2 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                                    arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg29[0].o, *rbx_2, 1)
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                                    
                                    if ((temp0_53 & 4) == 0)
                                        goto label_14027b43b
                                    
                                    goto label_14027b346
                                
                            label_14027b42a:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                                
                                if ((temp0_53 & 4) == 0)
                                label_14027b43b:
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_53 & 8) != 0)
                                        goto label_14027b368
                                    
                                    goto label_14027b44a
                                
                            label_14027b346:
                                zmm2[0].o = _mm256_extracti32x4_epi32(k0_2, arg26, 1)
                                arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg29[0].o, 
                                    *zmm2[0].q, 2)
                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                
                                if ((temp0_53 & 8) != 0)
                                label_14027b368:
                                    zmm2[0].o = _mm256_extracti32x4_epi32(k0_2, arg26, 1)
                                    uint16_t* rbx_4 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg29[0].o, *rbx_4, 3)
                                    arg26 = _mm256_mask_add_epi64(k0_2, arg17, zmm0)
                                    
                                    if ((temp0_53 & 0x10) == 0)
                                        goto label_14027b45a
                                    
                                    goto label_14027b392
                                
                            label_14027b44a:
                                arg26 = _mm256_mask_add_epi64(k0_2, arg17, zmm0)
                                
                                if ((temp0_53 & 0x10) == 0)
                                label_14027b45a:
                                    
                                    if ((temp0_53 & 0x20) != 0)
                                        goto label_14027b3a3
                                    
                                    goto label_14027b464
                                
                            label_14027b392:
                                arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg29[0].o, 
                                    *arg26[0].o, 4)
                                
                                if ((temp0_53 & 0x20) != 0)
                                label_14027b3a3:
                                    uint64_t rbx_6 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                                    arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg29[0].o, *rbx_6, 5)
                                    
                                    if ((temp0_53 & 0x40) == 0)
                                        goto label_14027b46e
                                    
                                    goto label_14027b3bb
                                
                            label_14027b464:
                                
                                if ((temp0_53 & 0x40) != 0)
                                label_14027b3bb:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg26, 1)
                                    arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg29[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_53 s< 0)
                                    label_14027b3d7:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg26, 1)
                                        uint16_t* rsi_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg29[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                            arg29[0].o, *rsi_2, 7)
                                else
                                label_14027b46e:
                                    
                                    if (temp0_53 s< 0)
                                        goto label_14027b3d7
                                
                                zmm0 = _mm256_mask_cvtepu16_epi32(k0_2, arg29[0].o)
                                arg10 = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_2, zmm0, 
                                        arg19), 
                                    arg9[0].o)
                                zmm0[0].o = zx.o(0)
                                zmm3[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k4_2 = _mm_mask_testn_epi16_mask(k0_2, arg10, zmm3[0].o)
                                zmm2[0].o = _mm_mask_and_epi64(k0_2, arg10, arg18[0].o)
                                int64_t k0_3 = _mm_mask_test_epi16_mask(k0_2, zmm2[0].o, zmm3[0].o)
                                char temp0_61 = _cvtmask32_u32(k0_3)
                                cond:33_1 = rcx_11 == temp0_61
                                cond:35_1 = rcx_11 == temp0_61
                                cond:45_1 = rcx_11 != temp0_61
                                
                                if (rcx_11 != temp0_61)
                                    zmm0[0].o = arg10 ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(k0_3, zmm26)
                                arg26 = _mm256_mask_mov_epi32(k4_2, arg27)
                                zmm27 = _mm256_mask_sub_epi32(k0_3, arg23, arg11)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_3, zmm27, arg12, 2), zmm0[0].o)
                                arg10 = _mm_mask_and_epi64(k0_3, arg9[0].o, arg18[0].o)
                                k0 = _mm_mask_test_epi16_mask(k0_3, arg10, zmm3[0].o)
                                _kortest_mask8_u8(k0, k0)
                                rcx_11 = _cvtmask32_u32(k0)
                                zmm26 = _mm256_mask_mov_epi64(k0, arg23)
                                arg27 = _mm256_mask_mov_epi64(k0, arg26)
                            while (cond:45_1)
                    
                    zmm0[0].o = _mm_mask_xor_epi64(k0, zmm29[0].o, zmm14)
                    zmm2[0].o = _mm_mask_and_epi64(k0, arg18[0].o, zmm0[0].o)
                    int64_t k0_8 = _mm_mask_test_epi16_mask(k0, zmm2[0].o, zmm14)
                    _kortest_mask8_u8(k0_8, k0_8)
                    
                    if (cond:33_1)
                        zmm29[0].o = _mm_mask_load_ss(k0_8, arg31)
                        arg28 = _mm256_mask_load_epi64(k0_8, var_680_1)
                    else
                        zmm3 = _mm256_mask_mov_epi32(k3_1, arg26)
                        arg23 = _mm256_mask_add_epi32(k0_8, arg28, arg11)
                        arg9[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, arg23, arg22), 
                            zmm0[0].o)
                        arg10 = _mm_mask_and_epi64(k0_8, arg9[0].o, arg18[0].o)
                        k0_8 = _mm_mask_test_epi16_mask(k0_8, arg10, zmm14)
                        _kortest_mask8_u8(k0_8, k0_8)
                        
                        if (cond:35_1)
                            arg26 = _mm256_mask_mov_epi64(k0_8, zmm3)
                            zmm29[0].o = _mm_mask_load_ss(k0_8, arg31)
                            arg28 = _mm256_mask_load_epi64(k0_8, var_680_1)
                        else
                            char rcx_37 = _cvtmask32_u32(k0_8)
                            zmm29[0].o = _mm_mask_load_ss(k0_8, arg31)
                            arg28 = _mm256_mask_load_epi64(k0_8, var_680_1)
                            bool cond:47_1
                            
                            do
                                arg27 = _mm256_mask_add_epi32(k0_8, arg23, arg23)
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_8, arg27[0].o)
                                arg26 = _mm256_mask_add_epi64(k0_8, arg24, zmm0)
                                int64_t k0_9 = _mm_mask_test_epi16_mask(k0_8, arg10, zmm14)
                                char temp0_170 = _cvtmask32_u32(k0_9)
                                
                                if ((temp0_170 & 1) == 0)
                                    if ((temp0_170 & 2) != 0)
                                        goto label_14027b977
                                    
                                    goto label_14027ba74
                                
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg21[0].o, 
                                    *arg26[0].o, 0)
                                
                                if ((temp0_170 & 2) != 0)
                                label_14027b977:
                                    uint16_t* rbx_10 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg21[0].o, *rbx_10, 1)
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_9, arg27, 1)
                                    
                                    if ((temp0_170 & 4) == 0)
                                        goto label_14027ba85
                                    
                                    goto label_14027b996
                                
                            label_14027ba74:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_9, arg27, 1)
                                
                                if ((temp0_170 & 4) == 0)
                                label_14027ba85:
                                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                    
                                    if ((temp0_170 & 8) != 0)
                                        goto label_14027b9b8
                                    
                                    goto label_14027ba94
                                
                            label_14027b996:
                                zmm2[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg21[0].o, 
                                    *zmm2[0].q, 2)
                                zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                                
                                if ((temp0_170 & 8) != 0)
                                label_14027b9b8:
                                    zmm2[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                    uint16_t* rbx_12 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg21[0].o, *rbx_12, 3)
                                    arg26 = _mm256_mask_add_epi64(k0_9, arg17, zmm0)
                                    
                                    if ((temp0_170 & 0x10) == 0)
                                        goto label_14027baa4
                                    
                                    goto label_14027b9e2
                                
                            label_14027ba94:
                                arg26 = _mm256_mask_add_epi64(k0_9, arg17, zmm0)
                                
                                if ((temp0_170 & 0x10) == 0)
                                label_14027baa4:
                                    
                                    if ((temp0_170 & 0x20) != 0)
                                        goto label_14027b9f3
                                    
                                    goto label_14027baae
                                
                            label_14027b9e2:
                                arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(arg21[0].o, 
                                    *arg26[0].o, 4)
                                
                                if ((temp0_170 & 0x20) != 0)
                                label_14027b9f3:
                                    uint16_t* rbx_14 =
                                        __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg26[0].o, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg21[0].o, *rbx_14, 5)
                                    
                                    if ((temp0_170 & 0x40) == 0)
                                        goto label_14027bab8
                                    
                                    goto label_14027ba0b
                                
                            label_14027baae:
                                
                                if ((temp0_170 & 0x40) != 0)
                                label_14027ba0b:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                    arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                        arg21[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_170 s< 0)
                                    label_14027ba27:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_9, arg26, 1)
                                        uint16_t* rsi_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg21[0].o = __vpinsrw_xmmu16_xmmu16_memu16_imm8_avx512(
                                            arg21[0].o, *rsi_20, 7)
                                else
                                label_14027bab8:
                                    
                                    if (temp0_170 s< 0)
                                        goto label_14027ba27
                                
                                zmm0 = _mm256_mask_cvtepu16_epi32(k0_9, arg21[0].o)
                                zmm2[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_9, arg19, zmm0, 5), arg9[0].o)
                                arg10 = zx.o(0)
                                zmm0[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                                int64_t k3_5 = _mm_mask_testn_epi16_mask(k0_9, zmm2[0].o, zmm0[0].o)
                                arg8[0].o = _mm_mask_and_epi64(k0_9, zmm2[0].o, arg18[0].o)
                                int64_t k0_10 = _mm_mask_test_epi16_mask(k0_9, arg8[0].o, zmm0[0].o)
                                char temp0_178 = _cvtmask32_u32(k0_10)
                                cond:47_1 = rcx_37 != temp0_178
                                
                                if (rcx_37 != temp0_178)
                                    arg10 = zmm2[0].o ^ arg9[0].o
                                
                                _mm256_mask_mov_epi64(k0_10, arg23)
                                arg23 = _mm256_mask_add_epi32(k0_10, arg23, arg11)
                                arg26 = _mm256_mask_mov_epi32(k3_5, zmm3)
                                arg9[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_10, arg23, 
                                        arg22), 
                                    arg10)
                                arg10 = _mm_mask_and_epi64(k0_10, arg9[0].o, arg18[0].o)
                                k0_8 = _mm_mask_test_epi16_mask(k0_10, arg10, zmm0[0].o)
                                _kortest_mask8_u8(k0_8, k0_8)
                                rcx_37 = _cvtmask32_u32(k0_8)
                                zmm3 = _mm256_mask_mov_epi64(k0_8, arg26)
                            while (cond:47_1)
                    
                    arg25 = _mm256_mask_blend_epi32(
                        _mm_mask_testn_epi16_mask(k0_8, arg18[0].o, zmm14), arg26, arg25)
                    arg23 = _mm256_mask_add_epi32(k0_8, arg25, arg25)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_8, arg23[0].o)
                    zmm3 = _mm256_mask_add_epi64(k0_8, arg24, zmm0)
                    
                    if ((temp0_408 & 1) == 0)
                        zmm27 = _mm256_mask_load_epi64(k0_8, var_5c0_1)
                        zmm26 = _mm256_mask_load_epi64(k0_8, data_143442140)
                        
                        if ((temp0_408 & 2) != 0)
                            goto label_14027bea4
                        
                        goto label_14027bdd9
                    
                    uint16_t var_760[0x8]
                    zmm0[0].o = var_760
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 0)
                    var_760 = zmm0[0].o
                    zmm27 = _mm256_mask_load_epi64(k0_8, var_5c0_1)
                    zmm26 = _mm256_mask_load_epi64(k0_8, data_143442140)
                    
                    if ((temp0_408 & 2) != 0)
                    label_14027bea4:
                        int64_t rcx_44 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm0[0].o = var_760
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_44, 1)
                        var_760 = zmm0[0].o
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_8, arg23, 1)
                        
                        if ((temp0_408 & 4) == 0)
                            goto label_14027bdea
                        
                        goto label_14027becc
                    
                label_14027bdd9:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_8, arg23, 1)
                    
                    if ((temp0_408 & 4) == 0)
                    label_14027bdea:
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                            goto label_14027bef7
                        
                        goto label_14027bdf9
                    
                label_14027becc:
                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = var_760
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm2[0].q, 2)
                    var_760 = zmm2[0].o
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((temp0_408 & 8) != 0)
                    label_14027bef7:
                        zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rcx_46 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = var_760
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rcx_46, 3)
                        var_760 = zmm2[0].o
                        zmm3 = _mm256_add_epi64(arg17, zmm0)
                        
                        if ((temp0_408 & 0x10) == 0)
                            goto label_14027be07
                        
                        goto label_14027bf27
                    
                label_14027bdf9:
                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) != 0)
                    label_14027bf27:
                        zmm0[0].o = var_760
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm3[0].q, 4)
                        var_760 = zmm0[0].o
                        
                        if ((temp0_408 & 0x20) != 0)
                        label_14027bf42:
                            int64_t rcx_48 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm0[0].o = var_760
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_48, 5)
                            var_760 = zmm0[0].o
                            
                            if ((temp0_408 & 0x40) == 0)
                                goto label_14027be1b
                            
                            goto label_14027bf63
                    else
                    label_14027be07:
                        
                        if ((temp0_408 & 0x20) != 0)
                            goto label_14027bf42
                    
                    bool cond:41_1
                    
                    if ((temp0_408 & 0x40) != 0)
                    label_14027bf63:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm0[0].o = var_760
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *zmm0[0].q, 6)
                        var_760 = zmm0[0].o
                        cond:41_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                        label_14027bf88:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rcx_50 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm0[0].o = var_760
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *rcx_50, 7)
                            var_760 = zmm0[0].o
                    else
                    label_14027be1b:
                        cond:41_1 = temp0_408 == 0
                        
                        if (temp0_408 s< 0)
                            goto label_14027bf88
                    
                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    int64_t k3_12 = _mm_mask_testn_epi16_mask(k0_8, arg18[0].o, zmm2[0].o)
                    _mm256_mask_sub_epi32(k0_8, arg26, arg11)
                    zmm0 = _mm256_mask_mov_epi32(k3_12, arg20)
                    zmm3[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_8, zmm0, arg12), 
                        arg18[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_8, zmm3[0].o, zmm2[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (cond:41_1)
                        arg20 = _mm256_mask_mov_epi64(arg5, zmm0)
                    else
                        arg12 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm3[0].o, zmm2[0].o), zmm0)
                        arg20 = _mm256_mask_mov_epi64(arg5, arg12)
                    
                    int128_t var_500
                    zmm2[0].o = var_500
                    arg18 = _mm256_mask_add_epi32(arg5, arg20, arg20)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg18[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg24, zmm0)
                    
                    if ((temp0_408 & 1) == 0)
                        if ((temp0_408 & 2) != 0)
                            goto label_14027c073
                        
                        goto label_14027bfdf
                    
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm3[0].q, 0)
                    
                    if ((temp0_408 & 2) != 0)
                    label_14027c073:
                        int64_t rcx_52 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rcx_52, 1)
                        zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                        
                        if ((temp0_408 & 4) == 0)
                            goto label_14027bff0
                        
                        goto label_14027c08f
                    
                label_14027bfdf:
                    zmm0[0].o = _mm256_extracti32x4_epi32(arg5, arg18, 1)
                    
                    if ((temp0_408 & 4) == 0)
                    label_14027bff0:
                        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                        
                        if ((temp0_408 & 8) != 0)
                            goto label_14027c0b6
                        
                        goto label_14027bfff
                    
                label_14027c08f:
                    arg8[0].o = zmm2[0].o
                    zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = arg8[0].o
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *zmm2[0].q, 2)
                    zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
                    
                    if ((temp0_408 & 8) != 0)
                    label_14027c0b6:
                        arg8[0].o = zmm2[0].o
                        zmm2[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint16_t* rcx_54 = __vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1)
                        zmm2[0].o = arg8[0].o
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *rcx_54, 3)
                        zmm3 = _mm256_add_epi64(arg17, zmm0)
                        
                        if ((temp0_408 & 0x10) == 0)
                            goto label_14027c00d
                        
                        goto label_14027c0e2
                    
                label_14027bfff:
                    zmm3 = _mm256_add_epi64(arg17, zmm0)
                    
                    if ((temp0_408 & 0x10) == 0)
                    label_14027c00d:
                        arg17 = var_4e0_1
                        
                        if ((temp0_408 & 0x20) != 0)
                            goto label_14027c0fa
                        
                        goto label_14027c020
                    
                label_14027c0e2:
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm3[0].q, 4)
                    arg17 = var_4e0_1
                    
                    if ((temp0_408 & 0x20) != 0)
                    label_14027c0fa:
                        int64_t rcx_56 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rcx_56, 5)
                        
                        if ((temp0_408 & 0x40) == 0)
                            goto label_14027c02a
                        
                        goto label_14027c10f
                    
                label_14027c020:
                    
                    if ((temp0_408 & 0x40) != 0)
                    label_14027c10f:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_408 s< 0)
                        label_14027c128:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rcx_58 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rcx_58, 7)
                    else
                    label_14027c02a:
                        
                        if (temp0_408 s< 0)
                            goto label_14027c128
                    
                    zmm3 = __vpmovzxwd_ymmqq_memdq(var_760)
                    var_500 = zmm2[0].o
                    arg18 = _mm256_mask_cvtepu16_epi32(arg5, zmm2[0].o)
                    zmm0[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                        goto label_14027c416
                
                zmm2[0].o = _mm_mask_and_epi64(arg5, zmm31[0].o, zmm14)
                arg24 = _mm256_mask_mov_ps(_mm_cmp_epi16_mask(arg5, zmm2[0].o, zmm14, 4), zmm0)
                r15_1 = zx.q(var_738)
                cond:9_1 = var_738 != 5
                
                if (var_738 u<= 5)
                    goto label_14027c855
                
                goto label_14027c45d
            
            int64_t k3_22 = _mm_mask_testn_epi16_mask(arg5, arg18[0].o, zmm14)
            arg25 = _mm256_mask_blend_epi32(k3_22, arg12, arg25)
            arg12 = _mm256_mask_mov_epi32(k3_22, arg20)
            arg20 = _mm256_mask_mov_epi64(arg5, arg12)
        label_14027c849:
            r15_1 = zx.q(var_738)
            cond:9_1 = var_738 != 5
            uint64_t k2_1
            
            if (var_738 u> 5)
            label_14027c45d:
                var_5a0 = _mm256_mask_storeu_ps(k2_9, arg22)
                var_580 = _mm256_mask_storeu_ps(k2_9, arg22)
                var_560 = _mm256_mask_storeu_ps(k2_9, arg22)
                zmm0 = _mm256_broadcast_ss(1f)
                var_540 = _mm256_mask_storeu_ps(k2_9, zmm0)
                k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                _kortest_mask8_u8(k2_1, k2_1)
                
                if (cond:9_1)
                label_14027ce9b:
                    float var_4c0_1[0x8]
                    int64_t var_4a0_1[0x4]
                    float var_480_1[0x8]
                    float var_460_1[0x8]
                    
                    if (var_738 u> 5)
                        var_4c0_1 = _mm256_mask_storeu_ps(k2_1, arg22)
                        var_4a0_1 = _mm256_mask_storeu_ps(k2_1, arg22)
                        var_480_1 = _mm256_mask_storeu_ps(k2_1, arg22)
                        var_460_1 = _mm256_mask_storeu_ps(k2_1, _mm256_broadcast_ss(1f))
                    else
                        zmm3 = _mm256_mask_mullo_epi32(arg5, arg20, arg28)
                        
                        switch (r15_1)
                            case 0
                                zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg7)
                                arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg6)
                                zmm0 = _mm256_add_epi32(zmm3, 
                                    _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                                int64_t k1_11
                                char temp0_603
                                temp0_603, k1_11 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm0[0].q))
                                zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                                int64_t k1_13
                                char temp0_605
                                temp0_605, k1_13 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm2[0].q))
                                zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                                int64_t k1_15
                                char temp0_607
                                temp0_607, k1_15 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm2[0].q))
                                zmm0 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k1_17
                                char temp0_610
                                temp0_610, k1_17 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm0[0].q))
                                var_4c0_1 = _mm256_mask_storeu_ps(k2_1, temp0_603)
                                var_4a0_1 = _mm256_mask_storeu_ps(k2_1, temp0_605)
                                var_480_1 = _mm256_mask_storeu_ps(k2_1, temp0_607)
                                var_460_1 = _mm256_mask_storeu_ps(k2_1, temp0_610)
                            case 1
                                zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg7)
                                arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg6)
                                zmm0 = _mm256_add_epi32(zmm3, 
                                    _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                                int64_t k1_19
                                char temp0_658
                                temp0_658, k1_19 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm0[0].q))
                                arg6 = temp0_658
                                zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                                int64_t k1_21
                                char temp0_660
                                temp0_660, k1_21 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm2[0].q))
                                zmm3 = temp0_660
                                zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                                int64_t k1_22 = __kmovq_maskmskw_masku64_avx512(k2_1)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k1_23
                                char temp0_663
                                temp0_663, k1_23 =
                                    _mm256_mmask_i32gather_ps(k1_22, *(arg4 + zmm0[0].q))
                                zmm2 = temp0_663
                                var_4c0_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                                arg6 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, 
                                            arg5, arg6, 0x3f800000), 
                                        zmm3, zmm3), 
                                    zmm2, zmm2)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg22, arg6, 1), arg6)
                                var_4a0_1 = _mm256_mask_storeu_ps(k2_1, zmm3)
                                var_480_1 = _mm256_mask_storeu_ps(k2_1, zmm2)
                                var_460_1 = _mm256_mask_storeu_ps(k2_1, zmm0)
                            case 2
                                int64_t k0_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(
                                    arg5, arg25, arg20)
                                zmm0[0].o = _mm256_cvtepi64_epi32(k0_15, arg7)
                                arg6[0].o = _mm256_cvtepi64_epi32(k0_15, arg6)
                                zmm0 = _mm256_inserti128_si256(zmm0, arg6[0].o, 1)
                                arg5 = _kor_mask8(k1_9, k0_15)
                                arg6 = _mm256_mask_add_epi32(_knot_mask8(arg5), zmm3, zmm0)
                                int32_t rcx_104 = arg6[0].d
                                int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                int32_t rbx_26 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                                int64_t r11_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                int32_t rsi_49 = arg6[0].d
                                int64_t rdx_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                int32_t rcx_105 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                                int64_t rdi_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                arg6[0].o = zx.o(*(arg4 + sx.q(rcx_104)))
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r8_1), 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rbx_26)), 2)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_9), 3)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rsi_49)), 4)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_7), 5)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rcx_105)), 6)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_12), 7)
                                zmm0 = _mm256_add_epi32(zmm3, zmm0)
                                zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_1, zmm0, 2)
                                float rcx_107 = zmm2[0]
                                int64_t r8_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                                int32_t rbx_28 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                                int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                                zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                                float rsi_51 = zmm2[0]
                                int64_t rdx_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                                int32_t rcx_108 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                                int64_t rdi_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                                zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_107)))
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r8_2), 1)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(arg4 + sx.q(rbx_28)), 2)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_10), 3)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(arg4 + sx.q(rsi_51)), 4)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_10), 5)
                                zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                    *(arg4 + sx.q(rcx_108)), 6)
                                zmm2[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_15), 7)
                                zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_1, zmm0, 4)
                                uint32_t rcx_110 = zmm0[0]
                                int64_t r12_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                int32_t rbx_30 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                                int64_t r11_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                uint32_t rsi_53 = zmm0[0]
                                int64_t rdx_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                int32_t rcx_111 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                                int64_t rdi_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                r10 = arg34
                                arg3 = var_688_1
                                zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_110)))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_6), 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rbx_30)), 2)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_11), 3)
                                r11_4 = var_73c_1
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rsi_53)), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_13), 5)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rcx_111)), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_18), 7)
                                arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                                zmm3 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                                arg6 = _mm256_add_epi32(arg6, zmm3)
                                arg7 = _mm256_broadcast_ss(32767f)
                                arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg7)
                                zmm2 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_cvtepu16_epi32(zmm2[0].o), zmm3)), 
                                    arg7)
                                zmm0 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_cvtepu16_epi32(zmm0[0].o), zmm3)), 
                                    arg7)
                                var_4c0_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                                arg6 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, 
                                            arg5, arg6, 0x3f800000), 
                                        zmm2, zmm2), 
                                    zmm0, zmm0)
                                arg6 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg22, arg6, 1), arg6)
                                var_4a0_1 = _mm256_mask_storeu_ps(k2_1, zmm2)
                                var_480_1 = _mm256_mask_storeu_ps(k2_1, zmm0)
                                var_460_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                            case 3
                                int64_t k1_27 = __kmovq_maskmskw_masku64_avx512(k2_1)
                                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                                int64_t k1_28
                                char temp0_743
                                temp0_743, k1_28 =
                                    _mm256_mmask_i32gather_ps(k1_27, *(arg4 + arg14[0].q))
                                arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 4)
                                int64_t k1_29 = __kmovq_maskmskw_masku64_avx512(k2_1)
                                zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                                int64_t k1_30
                                char temp0_746
                                temp0_746, k1_30 =
                                    _mm256_mmask_i32gather_ps(k1_29, *(arg4 + arg6[0]))
                                arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 8)
                                int64_t k1_32
                                char temp0_748
                                temp0_748, k1_32 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + arg6[0]))
                                arg6 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0xc)
                                int64_t k1_34
                                char temp0_750
                                temp0_750, k1_34 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + arg6[0]))
                                arg6 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0x10)
                                int64_t k1_35 = __kmovq_maskmskw_masku64_avx512(k2_1)
                                arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
                                int64_t k1_36
                                char temp0_753
                                temp0_753, k1_36 =
                                    _mm256_mmask_i32gather_ps(k1_35, *(arg4 + arg6[0]))
                                arg6 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0x14)
                                int64_t k1_37 = __kmovq_maskmskw_masku64_avx512(k2_1)
                                arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                                int64_t k1_38
                                char temp0_756
                                temp0_756, k1_38 =
                                    _mm256_mmask_i32gather_ps(k1_37, *(arg4 + arg6[0]))
                                arg6 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                                int64_t k1_40
                                char temp0_759
                                temp0_759, k1_40 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + arg6[0]))
                                zmm3 = temp0_759
                                arg6 = _mm256_srli_epi32(zmm3, 0x15)
                                arg26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_mask_srli_epi32(arg5, zmm3, 0xa), 0x7ff)
                                zmm3 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 0x3ff)
                                arg27 =
                                    __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                                arg6 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg6, arg27))
                                zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                                arg6 = _mm256_fmadd_ps(_mm256_mask_div_ps(arg5, arg6, zmm26), 
                                    temp0_750, temp0_743)
                                zmm0 = _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg26, arg27)), 
                                    zmm26)
                                zmm26 = _mm256_mask_load_epi64(arg5, data_143442140)
                                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, temp0_753, temp0_746)
                                zmm2 = _mm256_mask3_fmadd_ps(
                                    __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                        _mm256_cvtepi32_ps(
                                            __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                            zmm3, 0xfffffe01)), 
                                        0x43ff8000), 
                                    arg5, temp0_756, temp0_748)
                            label_14027d568:
                                var_4c0_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                                arg6 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, 
                                            arg5, arg6, 0x3f800000), 
                                        zmm0, zmm0), 
                                    zmm2, zmm2)
                                arg6 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg22, arg6, 1), arg6)
                                var_4a0_1 = _mm256_mask_storeu_ps(k2_1, zmm0)
                                var_480_1 = _mm256_mask_storeu_ps(k2_1, zmm2)
                                var_460_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                            case 4
                                zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                                int64_t k1_42
                                char temp0_781
                                temp0_781, k1_42 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm0[0].q))
                                arg6 = temp0_781
                                zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                                zmm2 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                                arg6 = _mm256_srli_epi32(arg6, 0x15)
                                zmm3 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                arg6 = _mm256_add_epi32(arg6, zmm3)
                                arg7 = _mm256_broadcast_ss(1023f)
                                arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg7)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, zmm3))
                                zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 
                                    0xfffffe01)
                                zmm0 = _mm256_div_ps(zmm0, arg7)
                                zmm2 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(zmm2), 0x43ff8000)
                                goto label_14027d568
                            case 5
                                zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                                int64_t k1_45
                                char temp0_807
                                temp0_807, k1_45 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_1), *(arg4 + zmm0[0].q))
                                arg6 = temp0_807
                                zmm0 = _mm256_srli_epi32(arg6, 0x15)
                                zmm2 = _mm256_srli_epi32(arg6, 0xa)
                                zmm3 = _mm256_srli_epi32(arg6, 5)
                                arg7 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                arg8 = __vpbroadcastd_ymmqq_memd(0x400)
                                zmm3 = _mm256_mask_or_epi32(arg5, zmm3 & arg7, 
                                    _mm256_mask_and_epi32(arg5, zmm0, arg8))
                                arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                                zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg18)
                                arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                                zmm0 = zmm3 | _mm256_mask_add_epi32(arg5, zmm0, arg23)
                                zmm3 = (_mm256_slli_epi32(arg6, 6) & arg7) | (zmm2 & arg8)
                                zmm2 = _mm256_mask_add_epi32(arg5, 
                                    _mm256_mask_and_epi32(arg5, zmm2, arg18), arg23)
                                arg7 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x1c0)
                                zmm2 |= zmm3
                                arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_slli_epi32(arg6, 0x11), 0x7e0000) |
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x200) |
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 
                                    0x1ec0)
                                var_4c0_1 = _mm256_mask_storeu_ps(k2_1, zmm0)
                                zmm0 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, 
                                            arg5, zmm0, 0x3f800000), 
                                        zmm2, zmm2), 
                                    arg6, arg6)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg22, zmm0, 1), zmm0)
                                var_4a0_1 = _mm256_mask_storeu_ps(k2_1, zmm2)
                                var_480_1 = _mm256_mask_storeu_ps(k2_1, arg6)
                                var_460_1 = _mm256_mask_storeu_ps(k2_1, zmm0)
                    
                    arg18 = _mm256_mask_load_ps(arg5, var_480_1)
                    arg23 = _mm256_mask_load_ps(arg5, var_460_1)
                    int64_t k1_47 = _mm256_cmp_ps_mask(arg5, arg22, 
                        _mm256_mask3_fmadd_ps(
                            _mm256_mask3_fmadd_ps(
                                _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, var_580, var_4a0_1), 
                                    arg5, var_5a0, var_4c0_1), 
                                arg5, var_560, arg18), 
                            arg5, var_540, arg23), 
                        6)
                    arg27 = _mm256_mask_sub_ps(arg5, 
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f), arg24)
                    arg26 = _mm256_mask_mul_ps(arg5, arg27, 
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k1_47, -1f))
                    zmm0 = _mm256_mask_mul_ps(arg5, arg26, var_5a0)
                    arg6 = _mm256_mask_mul_ps(arg5, arg26, var_580)
                    zmm2 = _mm256_mask_mul_ps(arg5, arg26, var_560)
                    zmm3 = _mm256_mask_mul_ps(arg5, arg26, var_540)
                    zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg24, var_4c0_1)
                    arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg24, var_4a0_1)
                    zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, arg24, arg18)
                    zmm3 = _mm256_mask3_fmadd_ps(zmm3, arg5, arg24, arg23)
                    uint32_t var_200_1[0x8] = zmm0
                    int64_t var_1e0_1[0x4] = arg6
                    float var_1c0_1[0x8] = zmm2
                    uint32_t var_1a0_1[0x8] = zmm3
                    arg7 = _mm256_mul_ps(zmm2, zmm2)
                    arg8 = _mm256_mul_ps(zmm3, zmm3)
                    arg7 = _mm256_add_ps(_mm256_fmadd_ps(arg7, zmm0, zmm0), 
                        _mm256_fmadd_ps(arg8, arg6, arg6))
                    arg8 = _mm256_mask_mov_ps(
                        _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), arg7, 2), 
                        arg11)
                    arg18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
                    arg23 = _mm256_mask_mul_ps(arg5, arg7, arg18)
                    arg7 = _mm256_mask_rsqrt14_ps(arg5, arg7)
                    arg24 = _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, arg7, arg7), arg5, arg23, 
                            arg18), 
                        arg5, arg7, arg7)
                    arg7 = _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, arg24, arg24), arg5, arg23, 
                            arg18), 
                        arg5, arg24, arg24)
                    zmm0 = _mm256_mul_ps(arg7, zmm0)
                    arg6 = _mm256_mul_ps(arg7, arg6)
                    zmm2 = _mm256_mul_ps(arg7, zmm2)
                    zmm3 = _mm256_mul_ps(arg7, zmm3)
                    zmm0 = _mm256_and_ps(zmm0, arg8)
                    arg6 = _mm256_and_ps(arg6, arg8)
                    zmm2 = _mm256_and_ps(zmm2, arg8)
                    zmm3 = _mm256_and_ps(zmm3, arg8)
                    arg7 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x3f800000)
                    zmm3 = _mm256_or_ps(zmm3, arg7)
                    var_5a0 = _mm256_mask_storeu_ps(k2_1, zmm0)
                    var_580 = _mm256_mask_storeu_ps(k2_1, arg6)
                    var_560 = _mm256_mask_storeu_ps(k2_1, zmm2)
                    var_540 = _mm256_mask_storeu_ps(k2_1, zmm3)
            else
            label_14027c855:
                zmm3 = _mm256_mask_mullo_epi32(arg5, arg25, arg28)
                int64_t rsi_38 = sx.q(jump_table_140280030[r15_1])
                
                switch (rsi_38)
                    case -0x37c5
                        zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg7)
                        zmm2[0].o = _mm256_cvtepi64_epi32(arg5, arg6)
                        zmm0 = _mm256_add_epi32(zmm3, _mm256_inserti128_si256(zmm0, zmm2[0].o, 1))
                        int64_t k3_24
                        char temp0_427
                        temp0_427, k3_24 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                        zmm2 = temp0_427
                        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        int64_t k3_26
                        char temp0_429
                        temp0_429, k3_26 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm3[0].q))
                        arg8 = temp0_429
                        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                        int64_t k3_27 = __kmovq_maskmskw_masku64_avx512(k2_9)
                        arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
                        int64_t k3_28
                        char temp0_432
                        temp0_432, k3_28 = _mm256_mmask_i32gather_ps(k3_27, *(arg4 + zmm3[0].q))
                        arg18 = temp0_432
                        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                        int64_t k3_29 = __kmovq_maskmskw_masku64_avx512(k2_9)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int64_t k3_30
                        char temp0_435
                        temp0_435, k3_30 = _mm256_mmask_i32gather_ps(k3_29, *(arg4 + zmm0[0].q))
                        zmm3 = temp0_435
                        var_5a0 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        var_580 = _mm256_mask_storeu_ps(k2_9, arg8)
                        var_560 = _mm256_mask_storeu_ps(k2_9, arg18)
                        var_540 = _mm256_mask_storeu_ps(k2_9, zmm3)
                        k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                        _kortest_mask8_u8(k2_1, k2_1)
                        
                        if (rsi_38 != -0x140280030)
                            goto label_14027ce9b
                    case -0x36eb
                        zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg7)
                        zmm2[0].o = _mm256_cvtepi64_epi32(arg5, arg6)
                        zmm0 = _mm256_add_epi32(zmm3, _mm256_inserti128_si256(zmm0, zmm2[0].o, 1))
                        int64_t k3_32
                        char temp0_446
                        temp0_446, k3_32 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                        zmm2 = temp0_446
                        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        int64_t k3_34
                        char temp0_448
                        temp0_448, k3_34 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm3[0].q))
                        arg8 = temp0_448
                        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        int64_t k3_36
                        char temp0_451
                        temp0_451, k3_36 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                        zmm3 = temp0_451
                        var_5a0 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, 
                                    zmm2, 0x3f800000), 
                                arg8, arg8), 
                            zmm3, zmm3)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg22, zmm2, 1), zmm2)
                        var_580 = _mm256_mask_storeu_ps(k2_9, arg8)
                        var_560 = _mm256_mask_storeu_ps(k2_9, zmm3)
                        var_540 = _mm256_mask_storeu_ps(k2_9, zmm0)
                        k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                        _kortest_mask8_u8(k2_1, k2_1)
                        
                        if (rsi_38 != -0x140280030)
                            goto label_14027ce9b
                    case -0x363e
                        zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg7)
                        zmm2[0].o = _mm256_cvtepi64_epi32(arg5, arg6)
                        zmm0 = _mm256_add_epi32(zmm3, _mm256_inserti128_si256(zmm0, zmm2[0].o, 1))
                        zmm2 = _mm256_mask_blend_epi32(k1_9, zmm0, arg22)
                        float rsi_40 = zmm2[0]
                        int64_t r12_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int32_t rdi_3 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                        int64_t rcx_95 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                        float rbx_18 = zmm2[0]
                        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                        int32_t r13_1 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                        int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                        zmm2[0].o = zx.o(*(arg4 + sx.q(rsi_40)))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r12_3), 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rdi_3)), 2)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rcx_95), 3)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rbx_18)), 4)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r10_2), 5)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(r13_1)), 6)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_6), 7)
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 2)
                        zmm3 = _mm256_mask_mov_epi32(k1_9, arg22)
                        uint32_t rcx_96 = zmm3[0]
                        int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        int32_t rdi_5 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rbx_21 = zmm3[0]
                        int64_t r8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
                        int32_t rsi_44 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2)
                        int64_t rdi_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
                        zmm3[0].o = zx.o(*(arg4 + sx.q(rcx_96)))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r10_3), 1)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(rdi_5)), 2)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r12_4), 3)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(rbx_21)), 4)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + r8), 5)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + sx.q(rsi_44)), 6)
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm3[0].o, *(arg4 + rdi_7), 7)
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        zmm0 = _mm256_mask_mov_epi32(k1_9, arg22)
                        uint32_t rcx_99 = zmm0[0]
                        int64_t r13_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t rdi_8 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        uint32_t rdx_3 = zmm0[0]
                        int64_t rbx_25 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t rcx_100 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rsi_48 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        r10 = arg34
                        arg3 = var_688_1
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_99)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r13_4), 1)
                        r13 = var_5c8_1
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdi_8)), 2)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_8), 3)
                        r11_4 = var_73c_1
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdx_3)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rbx_25), 5)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rcx_100)), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_48), 7)
                        zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        zmm2 = _mm256_add_epi32(zmm2, arg8)
                        arg18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                        zmm2 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(zmm2), arg18)
                        zmm3 = _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm3[0].o), 
                                arg8)), 
                            arg18)
                        zmm0 = _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg8)), 
                            arg18)
                        var_5a0 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, 
                                    zmm2, 0x3f800000), 
                                zmm3, zmm3), 
                            zmm0, zmm0)
                        zmm2 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg22, zmm2, 1), zmm2)
                        var_580 = _mm256_mask_storeu_ps(k2_9, zmm3)
                        var_560 = _mm256_mask_storeu_ps(k2_9, zmm0)
                        var_540 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                        _kortest_mask8_u8(k2_1, k2_1)
                        
                        if (rsi_38 != -0x140280030)
                            goto label_14027ce9b
                    case -0x33b3
                        int64_t k3_40
                        char temp0_533
                        temp0_533, k3_40 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + arg14[0].q))
                        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 4)
                        int64_t k3_42
                        char temp0_535
                        temp0_535, k3_42 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        arg8 = temp0_535
                        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 8)
                        arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
                        int64_t k3_44
                        char temp0_538
                        temp0_538, k3_44 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        arg18 = temp0_538
                        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0xc)
                        arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                        int64_t k3_46
                        char temp0_541
                        temp0_541, k3_46 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        arg23 = temp0_541
                        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0x10)
                        arg26[0].o = _mm_mask_xor_epi32(arg5, arg26[0].o, arg26[0].o)
                        int64_t k3_48
                        char temp0_544
                        temp0_544, k3_48 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        arg26 = temp0_544
                        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg14, 0x14)
                        arg27[0].o = _mm_mask_xor_epi32(arg5, arg27[0].o, arg27[0].o)
                        int64_t k3_50
                        char temp0_547
                        temp0_547, k3_50 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        arg27 = temp0_547
                        zmm2 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                        int64_t k3_52
                        char temp0_550
                        temp0_550, k3_52 = _mm256_mmask_i32gather_epi32(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm2[0].q))
                        zmm3 = temp0_550
                        zmm2 = _mm256_srli_epi32(zmm3, 0x15)
                        zmm26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_mask_srli_epi32(arg5, zmm3, 0xa), 0x7ff)
                        zmm3 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 0x3ff)
                        zmm27 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                        zmm2 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, zmm2, zmm27))
                        arg28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm2 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, zmm2, arg28), arg5, 
                            arg23, temp0_533)
                        zmm0 = _mm256_mask_add_epi32(arg5, zmm26, zmm27)
                        zmm26 = _mm256_mask_load_epi64(arg5, data_143442140)
                        zmm27 = _mm256_mask_load_epi64(arg5, var_5c0_1)
                        zmm0 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(zmm0), arg28)
                        arg28 = _mm256_mask_load_epi64(arg5, var_680_1)
                        zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg26, arg8)
                        zmm3 = _mm256_mask3_fmadd_ps(
                            __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                    arg5, zmm3, 0xfffffe01)), 
                                0x43ff8000), 
                            arg5, arg27, arg18)
                    label_14027ce48:
                        var_5a0 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        zmm2 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, 
                                    zmm2, 0x3f800000), 
                                zmm0, zmm0), 
                            zmm3, zmm3)
                        zmm2 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg22, zmm2, 1), zmm2)
                        var_580 = _mm256_mask_storeu_ps(k2_9, zmm0)
                        var_560 = _mm256_mask_storeu_ps(k2_9, zmm3)
                        var_540 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                        _kortest_mask8_u8(k2_1, k2_1)
                        
                        if (rsi_38 != -0x140280030)
                            goto label_14027ce9b
                    case -0x3266
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                        int64_t k3_54
                        char temp0_574
                        temp0_574, k3_54 = _mm256_mmask_i32gather_epi32(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                        zmm2 = temp0_574
                        zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(zmm2, 0xa), 0x7ff)
                        zmm3 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3ff)
                        zmm2 = _mm256_srli_epi32(zmm2, 0x15)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        zmm2 = _mm256_add_epi32(zmm2, arg8)
                        arg18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                        zmm2 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(zmm2), arg18)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 0xfffffe01)
                        zmm0 = _mm256_mask_div_ps(arg5, zmm0, arg18)
                        zmm3 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(zmm3), 0x43ff8000)
                        goto label_14027ce48
                    case -0x30d9
                        zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg14, arg17), zmm3)
                        int64_t k3_57
                        char temp0_617
                        temp0_617, k3_57 = _mm256_mmask_i32gather_epi32(
                            __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                        zmm2 = temp0_617
                        zmm0 = _mm256_srli_epi32(zmm2, 0x15)
                        zmm3 = _mm256_srli_epi32(zmm2, 0xa)
                        arg8 = _mm256_srli_epi32(zmm2, 5)
                        arg18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x7f0000)
                        arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                        arg8 = _mm256_mask_or_epi32(arg5, _mm256_mask_and_epi32(arg5, arg8, arg18), 
                            _mm256_mask_and_epi32(arg5, zmm0, arg23))
                        arg26 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                        zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg26)
                        arg27 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                        zmm0 = arg8 | _mm256_mask_add_epi32(arg5, zmm0, arg27)
                        arg8 = _mm256_mask_or_epi32(arg5, 
                            _mm256_mask_and_epi32(arg5, _mm256_slli_epi32(zmm2, 6), arg18), 
                            _mm256_mask_and_epi32(arg5, zmm3, arg23))
                        zmm3 = _mm256_mask_add_epi32(arg5, 
                            _mm256_mask_and_epi32(arg5, zmm3, arg26), arg27)
                        arg18 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x1c0)
                        zmm3 |= arg8
                        arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_slli_epi32(zmm2, 0x11), 0x7e0000)
                        zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x200)
                        arg18 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg18, 0x1ec0)
                        zmm2 = arg8 | _mm256_mask_or_epi32(arg5, zmm2, arg18)
                        var_5a0 = _mm256_mask_storeu_ps(k2_9, zmm0)
                        zmm0 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                    zmm0, 0x3f800000), 
                                zmm3, zmm3), 
                            zmm2, zmm2)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg22, zmm0, 1), zmm0)
                        var_580 = _mm256_mask_storeu_ps(k2_9, zmm3)
                        var_560 = _mm256_mask_storeu_ps(k2_9, zmm2)
                        var_540 = _mm256_mask_storeu_ps(k2_9, zmm0)
                        k2_1 = _mm256_cmp_epi32_mask(k2_9, arg25, arg20, 4)
                        _kortest_mask8_u8(k2_1, k2_1)
                        
                        if (rsi_38 != -0x140280030)
                            goto label_14027ce9b
        
        zmm0[0].o = var_5a0[0].o
        arg18[0].o = _mm_mask_load_epi64(arg5, var_5a0[4].o)
        zmm3[0].o = var_580[0].o
        arg10 = var_580[2].o
        arg9[0].o = var_560[0].o
        arg8[0].o = var_560[4].o
        arg6[0].o = var_540[0].o
        arg7[0].o = var_540[4].o
        zmm2[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg6[0].o)
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        zmm3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
        int128_t var_400 = zmm3[0].o
        zmm2[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
        int128_t var_3f0_1 = zmm2[0].o
        zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_3e0_1 = zmm2[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
        int128_t var_3d0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg7[0].o)
        zmm2[0].o = _mm_mask_unpacklo_epi32(arg5, arg18[0].o, arg10)
        zmm3[0].o = _mm_mask_unpackhi_epi32(arg5, arg18[0].o, arg10)
        arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_3c0_1 = arg7[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        int128_t var_3b0_1 = zmm0[0].o
        zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
        int128_t var_3a0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
        int128_t var_390_1 = zmm0[0].o
        uint64_t rcx_117
        int64_t rsi_55
        
        for (uint64_t i = 0xff; i != 0; i = rsi_55 & rol.q(-2, rcx_117.b))
            uint64_t rcx_113 = _tzcnt_u64(i)
            int256_t var_420 = temp0_359
            rsi_55 = i & not.q(1 << (rcx_113 u% 0x40))
            zmm0[0].o = (&var_400)[rcx_113]
            arg1[sx.q(*(&var_420 + ((zx.q(rcx_113.d) & 7) << 2))) * 3] = zmm0[0].o
            rcx_117 = _tzcnt_u64(rsi_55)
            zmm0[0].o = (&var_400)[rcx_117]
            arg1[sx.q(*(&var_420 + ((zx.q(rcx_117.d) & 7) << 2))) * 3] = zmm0[0].o
        
        r14 += 8
        cond:2_1 = r14 == r11_4
        cond:4_1 = r14 == r11_4
        cond:6_1 = r14 == r11_4
        cond:7_1 = r14 == r11_4
    while (r14 s< r11_4)

if (r14 s< r10)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, r14), data_142fc93a0)
    uint64_t k1_49 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
        _mm256_mask_set1_epi32(arg5, r10), zmm0)
    arg6 = _mm256_slli_epi32(zmm0, 3)
    int64_t k2_11
    char temp0_904
    temp0_904, k2_11 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_49), *(r13 + arg6[0]))
    arg6 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
    int64_t k2_13
    char temp0_906
    temp0_906, k2_13 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_49), *(r13 + arg6[0]))
    arg6 = _mm256_slli_epi32(temp0_906, 4)
    zmm2 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
    int64_t k2_15
    char temp0_909
    temp0_909, k2_15 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_49), *(arg3 + zmm2[0].q))
    arg12 = temp0_909
    arg6 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0xc)
    int64_t k2_17
    char temp0_911
    temp0_911, k2_17 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_49), *(arg3 + arg6[0]))
    zmm2 = temp0_911
    char i_2 = _cvtmask32_u32(k1_49)
    arg6[0].o = zx.o(0)
    uint64_t k2_18 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_49, zmm2, 1)
    _kortest_mask8_u8(k2_18, k2_18)
    uint32_t var_720[0x8]
    int64_t var_700[0x4]
    float var_6e0[0x8]
    uint32_t var_6c0[0x8]
    
    if (r14 != r10)
        int64_t k3_60
        char temp0_912
        temp0_912, k3_60 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + arg12[0].q))
        zmm0 = temp0_912
        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 4)
        int64_t k3_62
        char temp0_914
        temp0_914, k3_62 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + zmm3[0].q))
        arg7 = temp0_914
        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 8)
        int64_t k3_64
        char temp0_916
        temp0_916, k3_64 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + zmm3[0].q))
        arg8 = temp0_916
        var_720 = _mm256_mask_storeu_ps(k2_18, zmm0)
        zmm0 = _mm256_fnmadd_ps(
            _mm256_fnmadd_ps(
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm0, 0x3f800000), 
                arg7, arg7), 
            arg8, arg8)
        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm0, 1), zmm0)
        var_700 = _mm256_mask_storeu_ps(k2_18, arg7)
        var_6e0 = _mm256_mask_storeu_ps(k2_18, arg8)
        var_6c0 = _mm256_mask_storeu_ps(k2_18, zmm0)
    
    uint64_t k1_50 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_49, zmm2, 1, 4)
    _kortest_mask8_u8(k1_50, k1_50)
    
    if (r14 != r10)
        zmm0[0].o = _mm256_extracti128_si256(arg12, 1)
        zmm0 = _mm256_cvtepi32_epi64(zmm0[0].o)
        arg6 = _mm256_cvtepi32_epi64(arg12[0].o)
        zmm3[0].o = _mm_mask_set1_epi32(arg5, rcx)
        zmm3 = _mm256_cvtepu32_epi64(zmm3[0].o)
        arg26 = _mm256_mask_set1_epi32(arg5, var_740)
        arg24 = _mm256_mask_add_epi64(arg5, zmm0, zmm3)
        arg25 = _mm256_mask_add_epi64(arg5, arg6, zmm3)
        int64_t k2_19 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm2, 2, 1)
        zmm0[0].o = zx.o(0)
        uint64_t rdx_1
        rdx_1.b = zx.o(0) f>= zmm29[0].o
        rdx_1.b = neg.b(rdx_1.b)
        zmm27[0].o = _mm_mask_set1_epi8(arg5, rdx_1.d)
        zmm0[0].o = data_142fc92e0
        zmm27[0].o = _mm_mask_mov_epi16(k2_19, zmm0[0].o)
        zmm0[0].o = _mm_mask_xor_epi64(arg5, zmm27[0].o, zmm0[0].o)
        arg9[0].o = _mm_mask_mov_epi16(k1_50, zmm0[0].o)
        int64_t k2_20 =
            __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg9[0].o, data_142fc92e0)
        arg18[0].o = _mm_mask_xor_epi32(arg5, arg18[0].o, arg18[0].o)
        _kortest_mask8_u8(k2_20, k2_20)
        
        if (rdx_1.b == 0)
            arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
            arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
        else
            zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
            arg19 = _mm256_mask_add_epi32(arg5, zmm2, zmm0)
            
            if (zmm29[0].o f>= 1f)
                arg21 = _mm256_mask_mov_epi32(k2_20, arg19)
                arg22 = _mm256_mask_mov_epi64(arg5, arg21)
            else
                zmm0 = _mm256_mask_set1_epi64(arg5, arg4)
                arg6 = _mm256_mask_mullo_epi32(arg5, zmm2, arg26)
                zmm2 = _mm256_cvtepi32_epi64(arg6[0].o)
                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                zmm3 = _mm256_mask_add_epi64(arg5, arg25, zmm0)
                zmm0 = _mm256_mask_add_epi64(arg5, arg24, zmm0)
                arg7 = __vpbroadcastq_ymmqq_memq(3)
                zmm2 = _mm256_add_epi64(zmm2, _mm256_add_epi64(zmm3, arg7))
                zmm0 = _mm256_add_epi64(arg6, _mm256_add_epi64(zmm0, arg7))
                arg6 = __vpbroadcastq_ymmqq_memq(-4)
                arg18 = _mm256_mask_and_epi64(arg5, zmm0, arg6)
                arg20 = _mm256_mask_and_epi64(arg5, zmm2, arg6)
                char temp0_955 = _cvtmask32_u32(k2_20)
                int32_t rdi_19 = arg30 - 2
                zmm0 = _mm256_mask_broadcastss_ps(arg5, zmm29[0].o)
                arg6 = _mm256_mask_cvtepi32_ps(arg5, arg19)
                zmm0 = _mm256_mul_ps(zmm0, arg6)
                arg6[0].o = arg21[0].o
                arg6[0].d = float.s(arg30 - 1)
                arg23[0].o = _mm_mask_mul_round_ss(arg5, arg6[0].o, zmm29[0].o)
                int32_t rbx_35 = int.d(arg23[0].o) s>> 0x1f
                int32_t rbx_36 = rbx_35 & not.d(rbx_35)
                
                if (rdi_19 s> rbx_36)
                    rdi_19 = rbx_36
                
                zmm0 = _mm256_cvttps_epi32(zmm0)
                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                arg21 = _mm256_mask_min_epi32(arg5, _mm256_max_epi32(zmm0, arg6), arg19)
                
                if (arg30 s< 0x100)
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg21[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027e2f8
                        
                        goto label_14027df53
                    
                    zmm2[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027e2f8:
                        uint32_t rdx_50 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_50, 1)
                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027df63
                        
                        goto label_14027e310
                    
                label_14027df53:
                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg21, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027df63:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027e331
                        
                        goto label_14027df71
                    
                label_14027e310:
                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027e331:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rdx_54 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_54, 3)
                        zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027df80
                        
                        goto label_14027e35c
                    
                label_14027df71:
                    zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) != 0)
                    label_14027e35c:
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm3[0].q), 4)
                        
                        if ((temp0_955 & 0x20) != 0)
                        label_14027e370:
                            uint32_t rdx_58 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_58, 5)
                            
                            if ((temp0_955 & 0x40) == 0)
                                goto label_14027df92
                            
                            goto label_14027e381
                    else
                    label_14027df80:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027e370
                    
                    bool cond:20_1
                    bool cond:22_1
                    bool cond:23_1
                    bool cond:28_1
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027e381:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0].q), 6)
                        cond:20_1 = temp0_955 == 0
                        cond:22_1 = temp0_955 == 0
                        cond:23_1 = temp0_955 == 0
                        cond:28_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                        label_14027e39d:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rdx_62 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_62, 7)
                    else
                    label_14027df92:
                        cond:20_1 = temp0_955 == 0
                        cond:22_1 = temp0_955 == 0
                        cond:23_1 = temp0_955 == 0
                        cond:28_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                            goto label_14027e39d
                    
                    arg10 = __vpbroadcastw_xmmdq_memw(0xff)
                    zmm0[0].o = zmm2[0].o & arg10
                    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    arg22 = _mm256_mask_set1_epi32(arg5, rdi_19)
                    int64_t k3_67 = _mm256_cmp_epi32_mask(arg5, arg22, zmm0, 5)
                    arg29[0].o = _mm_movm_epi16(k3_67)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg29[0].o)
                    int64_t k0_20 = _mm_mask_test_epi16_mask(arg5, zmm0[0].o, arg10)
                    _kortest_mask8_u8(k0_20, k0_20)
                    arg27 = _mm256_mask_mov_epi64(k0_20, arg21)
                    
                    if (not(cond:20_1))
                        zmm26 = _mm256_mask_blend_epi32(k3_67, arg21, arg19)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        arg6 = _mm256_mask_sub_epi32(k0_20, arg21, arg11)
                        int64_t k0_21 = _mm256_cmp_epi32_mask(k3_67, arg6, arg19, 2)
                        arg7[0].o = _mm_movm_epi16(k0_21)
                        zmm2[0].o = arg9[0].o & arg7[0].o
                        k0_20 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_21, zmm2[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_20, k0_20)
                        
                        if (cond:23_1)
                            arg27 = _mm256_mask_mov_epi64(k0_20, zmm26)
                        else
                            char rdi_21 = _cvtmask32_u32(k0_20)
                            zmm3[0].o = data_142fc92e0
                            zmm29 = _mm256_mask_mov_epi64(k0_20, arg21)
                            bool cond:38_1
                            
                            do
                                arg28 = _mm256_mask_mov_epi64(k0_20, arg6)
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_20, arg28[0].o)
                                arg27 = _mm256_mask_add_epi64(k0_20, arg20, zmm0)
                                int64_t k0_22 =
                                    _mm_mask_test_epi16_mask(k0_20, zmm2[0].o, zmm3[0].o)
                                char temp0_1055 = _cvtmask32_u32(k0_22)
                                
                                if ((temp0_1055 & 1) == 0)
                                    if ((temp0_1055 & 2) != 0)
                                        goto label_14027e04f
                                    
                                    goto label_14027e153
                                
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                    zx.d(*arg27[0].o), 0)
                                
                                if ((temp0_1055 & 2) != 0)
                                label_14027e04f:
                                    uint16_t rdx_33[0x2] =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1))
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_33, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_22, arg28, 1)
                                    
                                    if ((temp0_1055 & 4) == 0)
                                        goto label_14027e164
                                    
                                    goto label_14027e068
                                
                            label_14027e153:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_22, arg28, 1)
                                
                                if ((temp0_1055 & 4) == 0)
                                label_14027e164:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1055 & 8) != 0)
                                        goto label_14027e08b
                                    
                                    goto label_14027e173
                                
                            label_14027e068:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_22, arg27, 1)
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_1055 & 8) != 0)
                                label_14027e08b:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_22, arg27, 1)
                                    uint16_t rdx_37[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_37, 3)
                                    arg27 = _mm256_mask_add_epi64(k0_22, arg18, arg6)
                                    
                                    if ((temp0_1055 & 0x10) == 0)
                                        goto label_14027e183
                                    
                                    goto label_14027e0b9
                                
                            label_14027e173:
                                arg27 = _mm256_mask_add_epi64(k0_22, arg18, arg6)
                                
                                if ((temp0_1055 & 0x10) == 0)
                                label_14027e183:
                                    
                                    if ((temp0_1055 & 0x20) != 0)
                                        goto label_14027e0cf
                                    
                                    goto label_14027e18d
                                
                            label_14027e0b9:
                                arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                    zx.d(*arg27[0].o), 4)
                                
                                if ((temp0_1055 & 0x20) != 0)
                                label_14027e0cf:
                                    uint16_t rdx_41[0x2] =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1))
                                    arg8[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_41, 5)
                                    
                                    if ((temp0_1055 & 0x40) == 0)
                                        goto label_14027e197
                                    
                                    goto label_14027e0e1
                                
                            label_14027e18d:
                                
                                if ((temp0_1055 & 0x40) != 0)
                                label_14027e0e1:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_22, arg27, 1)
                                    arg8[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1055 s< 0)
                                    label_14027e0fe:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_22, arg27, 1)
                                        uint16_t rdx_45[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg8[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg8[0].o, rdx_45, 7)
                                else
                                label_14027e197:
                                    
                                    if (temp0_1055 s< 0)
                                        goto label_14027e0fe
                                
                                zmm0[0].o = arg8[0].o & arg10
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                arg6[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_22, zmm0, 
                                        arg22), 
                                    arg7[0].o)
                                zmm2[0].o = zx.o(0)
                                int64_t k4_11 = _mm_mask_testn_epi16_mask(k0_22, arg6[0].o, arg10)
                                zmm0[0].o = arg6[0].o & arg9[0].o
                                int64_t k0_23 = _mm_mask_test_epi16_mask(k0_22, zmm0[0].o, arg10)
                                char temp0_1061 = _cvtmask32_u32(k0_23)
                                cond:22_1 = rdi_21 == temp0_1061
                                cond:28_1 = rdi_21 == temp0_1061
                                cond:38_1 = rdi_21 != temp0_1061
                                
                                if (rdi_21 != temp0_1061)
                                    zmm2[0].o = arg6[0].o ^ arg7[0].o
                                
                                _mm256_mask_mov_epi64(k0_23, zmm29)
                                arg27 = _mm256_mask_mov_epi32(k4_11, zmm26)
                                arg6 = _mm256_mask_sub_epi32(k0_23, arg28, arg11)
                                arg7[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_23, arg6, arg19, 2), zmm2[0].o)
                                zmm2[0].o = arg7[0].o & arg9[0].o
                                k0_20 = _mm_mask_test_epi16_mask(k0_23, zmm2[0].o, arg10)
                                _kortest_mask8_u8(k0_20, k0_20)
                                rdi_21 = _cvtmask32_u32(k0_20)
                                zmm29 = _mm256_mask_mov_epi64(k0_20, arg28)
                                zmm26 = _mm256_mask_mov_epi64(k0_20, arg27)
                            while (cond:38_1)
                    
                    arg6[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_20, arg29[0].o, 
                        data_142fc92e0)
                    zmm0[0].o = arg9[0].o & arg6[0].o
                    int64_t k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_20, 
                        zmm0[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_27, k0_27)
                    
                    if (not(cond:22_1))
                        zmm3 = _mm256_mask_mov_epi32(k3_67, arg27)
                        arg28[0].o = _mm_mask_xor_epi32(k0_27, arg28[0].o, arg28[0].o)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        arg21 = _mm256_mask_add_epi32(k0_27, arg21, arg11)
                        arg8[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_27, arg21, arg28), 
                            arg6[0].o)
                        arg6[0].o = arg8[0].o & arg9[0].o
                        k0_27 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_27, arg6[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_27, k0_27)
                        
                        if (cond:28_1)
                            arg27 = _mm256_mask_mov_epi64(k0_27, zmm3)
                        else
                            char rdi_23 = _cvtmask32_u32(k0_27)
                            zmm26[0].o = _mm_mask_load_epi64(k0_27, data_142fc92e0)
                            bool cond:42_1
                            
                            do
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_27, arg21[0].o)
                                arg27 = _mm256_mask_add_epi64(k0_27, arg20, zmm0)
                                int64_t k0_28 =
                                    _mm_mask_test_epi16_mask(k0_27, arg6[0].o, zmm26[0].o)
                                char temp0_1165 = _cvtmask32_u32(k0_28)
                                
                                if ((temp0_1165 & 1) == 0)
                                    if ((temp0_1165 & 2) != 0)
                                        goto label_14027e69f
                                    
                                    goto label_14027e79d
                                
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, 
                                    zx.d(*arg27[0].o), 0)
                                
                                if ((temp0_1165 & 2) != 0)
                                label_14027e69f:
                                    uint16_t rdx_76[0x2] =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1))
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_76, 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_28, arg21, 1)
                                    
                                    if ((temp0_1165 & 4) == 0)
                                        goto label_14027e7ae
                                    
                                    goto label_14027e6b8
                                
                            label_14027e79d:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_28, arg21, 1)
                                
                                if ((temp0_1165 & 4) == 0)
                                label_14027e7ae:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1165 & 8) != 0)
                                        goto label_14027e6db
                                    
                                    goto label_14027e7bd
                                
                            label_14027e6b8:
                                zmm0[0].o = _mm256_extracti32x4_epi32(k0_28, arg27, 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, 
                                    zx.d(*zmm0[0].q), 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_1165 & 8) != 0)
                                label_14027e6db:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_28, arg27, 1)
                                    uint16_t rdx_80[0x2] =
                                        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_80, 3)
                                    arg27 = _mm256_mask_add_epi64(k0_28, arg18, arg6)
                                    
                                    if ((temp0_1165 & 0x10) == 0)
                                        goto label_14027e7cd
                                    
                                    goto label_14027e709
                                
                            label_14027e7bd:
                                arg27 = _mm256_mask_add_epi64(k0_28, arg18, arg6)
                                
                                if ((temp0_1165 & 0x10) == 0)
                                label_14027e7cd:
                                    
                                    if ((temp0_1165 & 0x20) != 0)
                                        goto label_14027e71f
                                    
                                    goto label_14027e7d7
                                
                            label_14027e709:
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, 
                                    zx.d(*arg27[0].o), 4)
                                
                                if ((temp0_1165 & 0x20) != 0)
                                label_14027e71f:
                                    uint16_t rdx_84[0x2] =
                                        zx.d(*__vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1))
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_84, 5)
                                    
                                    if ((temp0_1165 & 0x40) == 0)
                                        goto label_14027e7e1
                                    
                                    goto label_14027e731
                                
                            label_14027e7d7:
                                
                                if ((temp0_1165 & 0x40) != 0)
                                label_14027e731:
                                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_28, arg27, 1)
                                    arg7[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, 
                                        zx.d(*zmm0[0].q), 6)
                                    
                                    if (temp0_1165 s< 0)
                                    label_14027e74e:
                                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_28, arg27, 1)
                                        uint16_t rdx_88[0x2] =
                                            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg7[0].o, rdx_88, 7)
                                else
                                label_14027e7e1:
                                    
                                    if (temp0_1165 s< 0)
                                        goto label_14027e74e
                                
                                zmm0[0].o = arg7[0].o & arg10
                                zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
                                zmm2[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_28, arg22, zmm0, 5), arg8[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k3_74 = _mm_mask_testn_epi16_mask(k0_28, zmm2[0].o, arg10)
                                zmm0[0].o = zmm2[0].o & arg9[0].o
                                int64_t k0_29 = _mm_mask_test_epi16_mask(k0_28, zmm0[0].o, arg10)
                                char temp0_1171 = _cvtmask32_u32(k0_29)
                                cond:42_1 = rdi_23 != temp0_1171
                                
                                if (rdi_23 != temp0_1171)
                                    arg6[0].o = zmm2[0].o ^ arg8[0].o
                                
                                _mm256_mask_mov_epi64(k0_29, arg21)
                                arg21 = _mm256_mask_add_epi32(k0_29, arg21, arg11)
                                arg27 = _mm256_mask_mov_epi32(k3_74, zmm3)
                                arg8[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_29, arg21, 
                                        arg28), 
                                    arg6[0].o)
                                arg6[0].o = arg8[0].o & arg9[0].o
                                k0_27 = _mm_mask_test_epi16_mask(k0_29, arg6[0].o, arg10)
                                _kortest_mask8_u8(k0_27, k0_27)
                                rdi_23 = _cvtmask32_u32(k0_27)
                                zmm3 = _mm256_mask_mov_epi64(k0_27, arg27)
                            while (cond:42_1)
                    
                    arg21 = _mm256_mask_mov_epi32(k2_20, arg27)
                    zmm0 = _mm256_mask_cvtepi32_epi64(k0_27, arg21[0].o)
                    zmm3 = _mm256_mask_add_epi64(k0_27, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027fe94
                        
                        goto label_14027eb4f
                    
                    zmm2[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027fe94:
                        uint32_t rdx_128 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_128, 1)
                        arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg21, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027eb5f
                        
                        goto label_14027feac
                    
                label_14027eb4f:
                    arg6[0].o = _mm256_extracti32x4_epi32(k0_27, arg21, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027eb5f:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027fecd
                        
                        goto label_14027eb6d
                    
                label_14027feac:
                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027fecd:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        uint32_t rdx_132 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_132, 3)
                        zmm3 = _mm256_mask_add_epi64(k0_27, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027eb7c
                        
                        goto label_14027fef8
                    
                label_14027eb6d:
                    zmm3 = _mm256_mask_add_epi64(k0_27, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) != 0)
                    label_14027fef8:
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm3[0].q), 4)
                        
                        if ((temp0_955 & 0x20) != 0)
                        label_14027ff0c:
                            uint32_t rdx_136 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_136, 5)
                            
                            if ((temp0_955 & 0x40) == 0)
                                goto label_14027eb8e
                            
                            goto label_14027ff1d
                    else
                    label_14027eb7c:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027ff0c
                    
                    bool cond:36_1
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027ff1d:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm2[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, zx.d(*zmm0[0].q), 6)
                        cond:36_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                        label_14027ff39:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            uint32_t rdx_140 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm2[0].o, rdx_140, 7)
                    else
                    label_14027eb8e:
                        cond:36_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                            goto label_14027ff39
                    
                    arg22 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_27, arg9[0].o, arg10), arg27, 
                        _mm256_cmpeq_epi32(zmm0, zmm0))
                    arg6[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_27, arg22, arg19), 
                        arg9[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_27, arg6[0].o, arg10)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:36_1))
                        arg19 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, arg6[0].o, arg10), arg22)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    zmm0 = _mm256_mask_cvtepi32_epi64(arg5, arg22[0].o)
                    arg7 = _mm256_mask_add_epi64(arg5, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027ff6b
                        
                        goto label_14027ebef
                    
                    zmm3[0].o = __vpbroadcastb_xmmdq_memb(*arg7[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027ff6b:
                        uint32_t rdx_143 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdx_143, 1)
                        arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027ebff
                        
                        goto label_14027ff83
                    
                label_14027ebef:
                    arg6[0].o = _mm256_extracti32x4_epi32(arg5, arg22, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027ebff:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027ffa4
                        
                        goto label_14027ec0d
                    
                label_14027ff83:
                    zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                    zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm0[0].q), 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027ffa4:
                        zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                        uint32_t rdx_147 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                        zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdx_147, 3)
                        arg7 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027ec1c
                        
                        goto label_14027ffcf
                    
                label_14027ec0d:
                    arg7 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) != 0)
                    label_14027ffcf:
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*arg7[0].q), 4)
                        
                        if ((temp0_955 & 0x20) != 0)
                        label_14027ffe3:
                            uint32_t rdx_151 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg7[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdx_151, 5)
                            
                            if ((temp0_955 & 0x40) == 0)
                                goto label_14027ec2e
                            
                            goto label_14027fff4
                    else
                    label_14027ec1c:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027ffe3
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027fff4:
                        zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                        zmm3[0].o =
                            __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, zx.d(*zmm0[0].q), 6)
                        arg6[0].o = zmm2[0].o & arg10
                        
                        if (temp0_955 s< 0)
                        label_140280014:
                            zmm0[0].o = _mm256_extracti128_si256(arg7, 1)
                            uint32_t rdx_155 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
                            zmm3[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(zmm3[0].o, rdx_155, 7)
                    else
                    label_14027ec2e:
                        arg6[0].o = zmm2[0].o & arg10
                        
                        if (temp0_955 s< 0)
                            goto label_140280014
                    
                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                    zmm0[0].o = zmm3[0].o & data_142fc92e0
                    zmm2 = _mm256_cvtepu16_epi32(zmm0[0].o)
                    zmm3[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                    label_14027ec5e:
                        zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(arg5, 
                            _mm256_sub_epi32(zmm2, arg6), 1)
                        zmm2 = _mm256_mask_broadcastss_ps(arg5, arg23[0].o)
                        arg6 = _mm256_sub_ps(zmm2, _mm256_cvtepi32_ps(arg6))
                        zmm0 = _mm256_cvtepi32_ps(zmm0)
                        zmm3 = _mm256_div_ps(arg6, zmm0)
                else
                    arg6 = _mm256_mask_add_epi32(arg5, arg21, arg21)
                    zmm0 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027e231
                        
                        goto label_14027dc66
                    
                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027e231:
                        int64_t rsi_61 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rsi_61, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027dc75
                        
                        goto label_14027e24b
                    
                label_14027dc66:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027dc75:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027e269
                        
                        goto label_14027dc83
                    
                label_14027e24b:
                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027e269:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rsi_63 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rsi_63, 3)
                        zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027dc92
                        
                        goto label_14027e28e
                    
                label_14027dc83:
                    zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) != 0)
                    label_14027e28e:
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm3[0].q, 4)
                        
                        if ((temp0_955 & 0x20) != 0)
                        label_14027e29c:
                            int64_t rsi_65 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rsi_65, 5)
                            
                            if ((temp0_955 & 0x40) == 0)
                                goto label_14027dca4
                            
                            goto label_14027e2b0
                    else
                    label_14027dc92:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027e29c
                    
                    bool cond:21_1
                    bool cond:24_1
                    bool cond:25_1
                    bool cond:29_1
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027e2b0:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                        cond:21_1 = temp0_955 == 0
                        cond:24_1 = temp0_955 == 0
                        cond:25_1 = temp0_955 == 0
                        cond:29_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                        label_14027e2c9:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rsi_67 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rsi_67, 7)
                    else
                    label_14027dca4:
                        cond:21_1 = temp0_955 == 0
                        cond:24_1 = temp0_955 == 0
                        cond:25_1 = temp0_955 == 0
                        cond:29_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                            goto label_14027e2c9
                    
                    zmm0 = _mm256_cvtepu16_epi32(zmm2[0].o)
                    arg22 = _mm256_mask_set1_epi32(arg5, rdi_19)
                    int64_t k3_66 = _mm256_cmp_epi32_mask(arg5, arg22, zmm0, 5)
                    arg27[0].o = _mm_movm_epi16(k3_66)
                    zmm0[0].o = _mm_mask_and_epi64(arg5, arg9[0].o, arg27[0].o)
                    int64_t k0_16 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                        zmm0[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_16, k0_16)
                    zmm3 = _mm256_mask_mov_epi64(k0_16, arg21)
                    
                    if (not(cond:21_1))
                        zmm26 = _mm256_mask_blend_epi32(k3_66, arg21, arg19)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        zmm31 = _mm256_mask_sub_epi32(k0_16, arg21, arg11)
                        int64_t k0_17 = _mm256_cmp_epi32_mask(k3_66, zmm31, arg19, 2)
                        arg8[0].o = _mm_movm_epi16(k0_17)
                        arg10 = arg9[0].o & arg8[0].o
                        k0_16 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_17, arg10, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_16, k0_16)
                        
                        if (cond:25_1)
                            zmm3 = _mm256_mask_mov_epi64(k0_16, zmm26)
                        else
                            char rdi_20 = _cvtmask32_u32(k0_16)
                            arg28[0].o = _mm_mask_load_epi64(k0_16, data_142fc92e0)
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            arg29 = _mm256_mask_mov_epi64(k0_16, arg21)
                            bool cond:39_1
                            
                            do
                                zmm29 = _mm256_mask_mov_epi64(k0_16, zmm31)
                                arg6 = _mm256_mask_add_epi32(k0_16, zmm31, zmm31)
                                zmm0 = _mm256_cvtepi32_epi64(arg6[0].o)
                                zmm3 = _mm256_mask_add_epi64(k0_16, arg20, zmm0)
                                int64_t k0_18 = _mm_mask_test_epi16_mask(k0_16, arg10, arg28[0].o)
                                char temp0_1002 = _cvtmask32_u32(k0_18)
                                
                                if ((temp0_1002 & 1) == 0)
                                    if ((temp0_1002 & 2) != 0)
                                        goto label_14027dd54
                                    
                                    goto label_14027de49
                                
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm3[0].q, 0)
                                
                                if ((temp0_1002 & 2) != 0)
                                label_14027dd54:
                                    int64_t rdx_22 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_22, 1)
                                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                    
                                    if ((temp0_1002 & 4) == 0)
                                        goto label_14027de59
                                    
                                    goto label_14027dd6f
                                
                            label_14027de49:
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                
                                if ((temp0_1002 & 4) == 0)
                                label_14027de59:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1002 & 8) != 0)
                                        goto label_14027dd8e
                                    
                                    goto label_14027de68
                                
                            label_14027dd6f:
                                zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_1002 & 8) != 0)
                                label_14027dd8e:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    int64_t rdx_24 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_24, 3)
                                    zmm3 = _mm256_mask_add_epi64(k0_18, arg18, arg6)
                                    
                                    if ((temp0_1002 & 0x10) == 0)
                                        goto label_14027de78
                                    
                                    goto label_14027ddb4
                                
                            label_14027de68:
                                zmm3 = _mm256_mask_add_epi64(k0_18, arg18, arg6)
                                
                                if ((temp0_1002 & 0x10) == 0)
                                label_14027de78:
                                    
                                    if ((temp0_1002 & 0x20) != 0)
                                        goto label_14027ddc3
                                    
                                    goto label_14027de82
                                
                            label_14027ddb4:
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm3[0].q, 4)
                                
                                if ((temp0_1002 & 0x20) != 0)
                                label_14027ddc3:
                                    int64_t rdx_26 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_26, 5)
                                    
                                    if ((temp0_1002 & 0x40) == 0)
                                        goto label_14027de8c
                                    
                                    goto label_14027ddd8
                                
                            label_14027de82:
                                
                                if ((temp0_1002 & 0x40) != 0)
                                label_14027ddd8:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg7[0].o =
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *zmm0[0].q, 6)
                                    
                                    if (temp0_1002 s< 0)
                                    label_14027ddf1:
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        int64_t rdx_28 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                                        arg7[0].o =
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *rdx_28, 7)
                                else
                                label_14027de8c:
                                    
                                    if (temp0_1002 s< 0)
                                        goto label_14027ddf1
                                
                                zmm0 = _mm256_cvtepu16_epi32(arg7[0].o)
                                zmm3[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_18, zmm0, 
                                        arg22), 
                                    arg8[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k4_8 =
                                    _mm_mask_testn_epi16_mask(k0_18, zmm3[0].o, zmm2[0].o)
                                zmm0[0].o = zmm3[0].o & arg9[0].o
                                int64_t k0_19 =
                                    _mm_mask_test_epi16_mask(k0_18, zmm0[0].o, zmm2[0].o)
                                char temp0_1008 = _cvtmask32_u32(k0_19)
                                cond:24_1 = rdi_20 == temp0_1008
                                cond:29_1 = rdi_20 == temp0_1008
                                cond:39_1 = rdi_20 != temp0_1008
                                
                                if (rdi_20 != temp0_1008)
                                    arg6[0].o = zmm3[0].o ^ arg8[0].o
                                
                                _mm256_mask_mov_epi64(k0_19, arg29)
                                zmm3 = _mm256_mask_mov_epi32(k4_8, zmm26)
                                zmm31 = _mm256_mask_sub_epi32(k0_19, zmm29, arg11)
                                arg8[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_19, zmm31, arg19, 2), arg6[0].o)
                                arg10 = arg8[0].o & arg9[0].o
                                k0_16 = _mm_mask_test_epi16_mask(k0_19, arg10, zmm2[0].o)
                                _kortest_mask8_u8(k0_16, k0_16)
                                rdi_20 = _cvtmask32_u32(k0_16)
                                arg29 = _mm256_mask_mov_epi64(k0_16, zmm29)
                                zmm26 = _mm256_mask_mov_epi64(k0_16, zmm3)
                            while (cond:39_1)
                    
                    arg6[0].o = __vpxorq_xmmu64_maskmskw_xmmu64_memu64_avx512(k0_16, arg27[0].o, 
                        data_142fc92e0)
                    zmm0[0].o = arg9[0].o & arg6[0].o
                    int64_t k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_16, 
                        zmm0[0].o, data_142fc92e0)
                    _kortest_mask8_u8(k0_24, k0_24)
                    
                    if (not(cond:24_1))
                        arg7 = _mm256_mask_mov_epi32(k3_66, zmm3)
                        arg27[0].o = _mm_mask_xor_epi32(k0_24, arg27[0].o, arg27[0].o)
                        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
                        zmm26 = _mm256_mask_add_epi32(k0_24, arg21, arg11)
                        arg8[0].o = _mm_mask_mov_epi16(
                            __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_24, zmm26, arg27), 
                            arg6[0].o)
                        arg6[0].o = arg8[0].o & arg9[0].o
                        k0_24 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(k0_24, arg6[0].o, 
                            data_142fc92e0)
                        _kortest_mask8_u8(k0_24, k0_24)
                        
                        if (cond:29_1)
                            zmm3 = arg7
                        else
                            char rdi_22 = _cvtmask32_u32(k0_24)
                            arg21[0].o = _mm_mask_load_epi64(k0_24, data_142fc92e0)
                            zmm2[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                            bool cond:43_1
                            
                            do
                                arg28 = _mm256_mask_add_epi32(k0_24, zmm26, zmm26)
                                zmm0 = _mm256_mask_cvtepi32_epi64(k0_24, arg28[0].o)
                                zmm3 = _mm256_mask_add_epi64(k0_24, arg20, zmm0)
                                int64_t k0_25 =
                                    _mm_mask_test_epi16_mask(k0_24, arg6[0].o, arg21[0].o)
                                char temp0_1127 = _cvtmask32_u32(k0_25)
                                
                                if ((temp0_1127 & 1) == 0)
                                    if ((temp0_1127 & 2) != 0)
                                        goto label_14027e45a
                                    
                                    goto label_14027e543
                                
                                arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm3[0].q, 0)
                                
                                if ((temp0_1127 & 2) != 0)
                                label_14027e45a:
                                    arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1), 1)
                                    arg6[0].o = _mm256_extracti32x4_epi32(k0_25, arg28, 1)
                                    
                                    if ((temp0_1127 & 4) == 0)
                                        goto label_14027e554
                                    
                                    goto label_14027e470
                                
                            label_14027e543:
                                arg6[0].o = _mm256_extracti32x4_epi32(k0_25, arg28, 1)
                                
                                if ((temp0_1127 & 4) == 0)
                                label_14027e554:
                                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                    
                                    if ((temp0_1127 & 8) != 0)
                                        goto label_14027e48f
                                    
                                    goto label_14027e563
                                
                            label_14027e470:
                                zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm0[0].q, 2)
                                arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                                
                                if ((temp0_1127 & 8) != 0)
                                label_14027e48f:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                        *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 3)
                                    zmm3 = _mm256_mask_add_epi64(k0_25, arg18, arg6)
                                    
                                    if ((temp0_1127 & 0x10) == 0)
                                        goto label_14027e573
                                    
                                    goto label_14027e4b5
                                
                            label_14027e563:
                                zmm3 = _mm256_mask_add_epi64(k0_25, arg18, arg6)
                                
                                if ((temp0_1127 & 0x10) == 0)
                                label_14027e573:
                                    
                                    if ((temp0_1127 & 0x20) != 0)
                                        goto label_14027e4ca
                                    
                                    goto label_14027e57d
                                
                            label_14027e4b5:
                                arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm3[0].q, 4)
                                
                                if ((temp0_1127 & 0x20) != 0)
                                label_14027e4ca:
                                    arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                        *__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1), 5)
                                    
                                    if ((temp0_1127 & 0x40) == 0)
                                        goto label_14027e587
                                    
                                    goto label_14027e4d9
                                
                            label_14027e57d:
                                
                                if ((temp0_1127 & 0x40) != 0)
                                label_14027e4d9:
                                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                    arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm0[0].q, 6)
                                    
                                    if (temp0_1127 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 7)
                                else
                                label_14027e587:
                                    
                                    if (temp0_1127 s< 0)
                                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                            *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 7)
                                
                                zmm0 = _mm256_cvtepu16_epi32(arg10)
                                zmm3[0].o = _mm_mask_mov_epi16(
                                    _mm256_cmp_epi32_mask(k0_25, arg22, zmm0, 5), arg8[0].o)
                                arg6[0].o = zx.o(0)
                                int64_t k3_70 =
                                    _mm_mask_testn_epi16_mask(k0_25, zmm3[0].o, zmm2[0].o)
                                zmm0[0].o = zmm3[0].o & arg9[0].o
                                int64_t k0_26 =
                                    _mm_mask_test_epi16_mask(k0_25, zmm0[0].o, zmm2[0].o)
                                char temp0_1133 = _cvtmask32_u32(k0_26)
                                cond:43_1 = rdi_22 != temp0_1133
                                
                                if (rdi_22 != temp0_1133)
                                    arg6[0].o = zmm3[0].o ^ arg8[0].o
                                
                                _mm256_mask_mov_epi64(k0_26, zmm26)
                                zmm26 = _mm256_mask_add_epi32(k0_26, zmm26, arg11)
                                zmm3 = _mm256_mask_mov_epi32(k3_70, arg7)
                                arg8[0].o = _mm_mask_mov_epi16(
                                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_26, zmm26, 
                                        arg27), 
                                    arg6[0].o)
                                arg6[0].o = arg8[0].o & arg9[0].o
                                k0_24 = _mm_mask_test_epi16_mask(k0_26, arg6[0].o, zmm2[0].o)
                                _kortest_mask8_u8(k0_24, k0_24)
                                rdi_22 = _cvtmask32_u32(k0_24)
                                arg7 = zmm3
                            while (cond:43_1)
                    
                    arg21 = _mm256_mask_mov_epi32(k2_20, zmm3)
                    arg6 = _mm256_mask_add_epi32(k0_24, arg21, arg21)
                    zmm0 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm2 = _mm256_mask_add_epi64(k0_24, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027e9bc
                        
                        goto label_14027e88f
                    
                    arg10 = __vpbroadcastw_xmmdq_memw(*zmm2[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027e9bc:
                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                            *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1), 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027e89e
                        
                        goto label_14027e9d0
                    
                label_14027e88f:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027e89e:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027e9ee
                        
                        goto label_14027e8ac
                    
                label_14027e9d0:
                    zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                    arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm0[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027e9ee:
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                            *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 3)
                        zmm2 = _mm256_mask_add_epi64(k0_24, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027e8bb
                        
                        goto label_14027ea13
                    
                label_14027e8ac:
                    zmm2 = _mm256_mask_add_epi64(k0_24, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) != 0)
                    label_14027ea13:
                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm2[0].q, 4)
                        
                        if ((temp0_955 & 0x20) != 0)
                        label_14027ea27:
                            arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                *__vpextrq_gpr64q_xmmdq_immb(zmm2[0].o, 1), 5)
                            
                            if ((temp0_955 & 0x40) == 0)
                                goto label_14027e8cd
                            
                            goto label_14027ea35
                    else
                    label_14027e8bb:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027ea27
                    
                    bool cond:37_1
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027ea35:
                        zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                        arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, *zmm0[0].q, 6)
                        cond:37_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                            arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 7)
                    else
                    label_14027e8cd:
                        cond:37_1 = temp0_955 == 0
                        
                        if (temp0_955 s< 0)
                            zmm0[0].o = _mm256_extracti128_si256(zmm2, 1)
                            arg10 = __vpinsrw_xmmdq_xmmdq_memw_immb(arg10, 
                                *__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1), 7)
                    
                    arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                    arg22 = _mm256_mask_sub_epi32(
                        _mm_mask_test_epi16_mask(k0_24, arg9[0].o, arg6[0].o), zmm3, 
                        _mm256_cmpeq_epi32(zmm0, zmm0))
                    zmm2[0].o = _mm_mask_mov_epi16(
                        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_24, arg22, arg19), 
                        arg9[0].o)
                    arg5 = _mm_mask_test_epi16_mask(k0_24, zmm2[0].o, arg6[0].o)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (not(cond:37_1))
                        arg19 = _mm256_mask_mov_epi32(
                            _mm_mask_testn_epi16_mask(arg5, zmm2[0].o, arg6[0].o), arg22)
                        arg22 = _mm256_mask_mov_epi64(arg5, arg19)
                    
                    arg6 = _mm256_mask_add_epi32(arg5, arg22, arg22)
                    zmm0 = _mm256_cvtepi32_epi64(arg6[0].o)
                    zmm3 = _mm256_mask_add_epi64(arg5, arg20, zmm0)
                    
                    if ((temp0_955 & 1) == 0)
                        if ((temp0_955 & 2) != 0)
                            goto label_14027ea77
                        
                        goto label_14027e93c
                    
                    zmm2[0].o = __vpbroadcastw_xmmdq_memw(*zmm3[0].q)
                    
                    if ((temp0_955 & 2) != 0)
                    label_14027ea77:
                        int64_t rdx_100 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rdx_100, 1)
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        
                        if ((temp0_955 & 4) == 0)
                            goto label_14027e94b
                        
                        goto label_14027ea91
                    
                label_14027e93c:
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    
                    if ((temp0_955 & 4) == 0)
                    label_14027e94b:
                        arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                        
                        if ((temp0_955 & 8) != 0)
                            goto label_14027eaaf
                        
                        goto label_14027e959
                    
                label_14027ea91:
                    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 2)
                    arg6 = _mm256_cvtepi32_epi64(arg6[0].o)
                    
                    if ((temp0_955 & 8) != 0)
                    label_14027eaaf:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        int64_t rdx_102 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rdx_102, 3)
                        zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                        
                        if ((temp0_955 & 0x10) == 0)
                            goto label_14027e968
                        
                        goto label_14027ead4
                    
                label_14027e959:
                    zmm3 = _mm256_mask_add_epi64(arg5, arg18, arg6)
                    
                    if ((temp0_955 & 0x10) == 0)
                    label_14027e968:
                        
                        if ((temp0_955 & 0x20) != 0)
                            goto label_14027eae2
                        
                        goto label_14027e971
                    
                label_14027ead4:
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm3[0].q, 4)
                    
                    if ((temp0_955 & 0x20) != 0)
                    label_14027eae2:
                        int64_t rdx_104 = __vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rdx_104, 5)
                        
                        if ((temp0_955 & 0x40) == 0)
                            goto label_14027e97a
                        
                        goto label_14027eaf6
                    
                label_14027e971:
                    
                    if ((temp0_955 & 0x40) != 0)
                    label_14027eaf6:
                        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                        zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *zmm0[0].q, 6)
                        
                        if (temp0_955 s< 0)
                        label_14027eb0f:
                            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
                            int64_t rdx_106 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *rdx_106, 7)
                    else
                    label_14027e97a:
                        
                        if (temp0_955 s< 0)
                            goto label_14027eb0f
                    
                    arg6 = _mm256_cvtepu16_epi32(arg10)
                    zmm2 = _mm256_cvtepu16_epi32(zmm2[0].o)
                    zmm3[0].o = zx.o(0)
                    
                    if (arg32 != 1)
                        goto label_14027ec5e
                
                zmm0[0].o =
                    __vpandq_xmmu64_maskmskw_xmmu64_memu64_avx512(arg5, zmm27[0].o, data_142fc92e0)
                arg18 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    zmm3)
        
        arg8 = _mm256_mask_set1_epi32(arg5, rcx)
        uint64_t r8_4 = zx.q(var_738)
        uint64_t k1_51
        
        if (var_738 u> 5)
            zmm0[0].o = zx.o(0)
            var_720 = _mm256_mask_storeu_ps(k1_50, zmm0)
            var_700 = _mm256_mask_storeu_ps(k1_50, zmm0)
            var_6e0 = _mm256_mask_storeu_ps(k1_50, zmm0)
            zmm0 = _mm256_broadcast_ss(1f)
            var_6c0 = _mm256_mask_storeu_ps(k1_50, zmm0)
            k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
            _kortest_mask8_u8(k1_51, k1_51)
            
            if (var_738 != 5)
            label_14027f437:
                float var_660_1[0x8]
                int64_t var_640_1[0x4]
                float var_620_1[0x8]
                float var_600_1[0x8]
                
                if (var_738 u> 5)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_660_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                    var_640_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                    var_620_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                    var_600_1 = _mm256_mask_storeu_ps(k1_51, _mm256_broadcast_ss(1f))
                else
                    zmm2 = _mm256_mask_mullo_epi32(arg5, arg22, arg26)
                    
                    switch (r8_4)
                        case 0
                            zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                            arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                            zmm0 =
                                _mm256_add_epi32(zmm2, _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                            int64_t k2_66
                            char temp0_1476
                            temp0_1476, k2_66 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_67 = __kmovq_maskmskw_masku64_avx512(k1_51)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            int64_t k2_68
                            char temp0_1479
                            temp0_1479, k2_68 =
                                _mm256_mmask_i32gather_ps(k2_67, *(arg4 + zmm2[0].q))
                            zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_69 = __kmovq_maskmskw_masku64_avx512(k1_51)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_70
                            char temp0_1482
                            temp0_1482, k2_70 =
                                _mm256_mmask_i32gather_ps(k2_69, *(arg4 + zmm2[0].q))
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            int64_t k2_72
                            char temp0_1485
                            temp0_1485, k2_72 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, temp0_1476)
                            var_640_1 = _mm256_mask_storeu_ps(k1_51, temp0_1479)
                            var_620_1 = _mm256_mask_storeu_ps(k1_51, temp0_1482)
                            var_600_1 = _mm256_mask_storeu_ps(k1_51, temp0_1485)
                        case 1
                            zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                            arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                            zmm0 =
                                _mm256_add_epi32(zmm2, _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                            int64_t k2_74
                            char temp0_1499
                            temp0_1499, k2_74 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            arg6 = temp0_1499
                            zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            int64_t k2_76
                            char temp0_1502
                            temp0_1502, k2_76 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm2[0].q))
                            zmm3 = temp0_1502
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                            int64_t k2_78
                            char temp0_1505
                            temp0_1505, k2_78 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            zmm2 = temp0_1505
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    zmm3, zmm3), 
                                zmm2, zmm2)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                        label_14027fb12:
                            var_640_1 = _mm256_mask_storeu_ps(k1_51, zmm3)
                            var_620_1 = _mm256_mask_storeu_ps(k1_51, zmm2)
                            var_600_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                        case 2
                            zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                            arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                            zmm0 = _mm256_inserti128_si256(zmm0, arg6[0].o, 1)
                            arg6 = _mm256_mask_add_epi32(k1_51, zmm2, zmm0)
                            int32_t rcx_133 = arg6[0].d
                            int64_t r8_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int32_t rbx_46 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                            int64_t r14_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            int32_t rsi_76 = arg6[0].d
                            int64_t rdx_119 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int32_t rcx_134 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                            int64_t rdi_37 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(arg4 + sx.q(rcx_133)))
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r8_5), 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rbx_46)), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_4), 3)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rsi_76)), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_119), 5)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rcx_134)), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_37), 7)
                            zmm0 = _mm256_add_epi32(zmm2, zmm0)
                            zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_51, zmm0, 2)
                            float rcx_136 = zmm2[0]
                            int64_t r8_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int32_t rbx_48 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                            int64_t r14_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                            float rsi_78 = zmm2[0]
                            int64_t rdx_122 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                            int32_t rcx_137 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                            int64_t rdi_40 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                            zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_136)))
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r8_6), 1)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                *(arg4 + sx.q(rbx_48)), 2)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r14_5), 3)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                *(arg4 + sx.q(rsi_78)), 4)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_122), 5)
                            zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, 
                                *(arg4 + sx.q(rcx_137)), 6)
                            zmm2[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_40), 7)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_51, zmm0, 4)
                            uint32_t rcx_139 = zmm0[0]
                            int64_t r8_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t rbx_50 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            uint32_t rsi_80 = zmm0[0]
                            int64_t rdx_125 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t rcx_140 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int64_t rdi_43 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_139)))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_7), 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rbx_50)), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_6), 3)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rsi_80)), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_125), 5)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rcx_140)), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_43), 7)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            arg6 = _mm256_add_epi32(arg6, arg7)
                            arg8 = _mm256_broadcast_ss(32767f)
                            arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg8)
                            zmm2 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm2[0].o), arg7)), 
                                arg8)
                            zmm0 = _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm0[0].o), arg7)), 
                                arg8)
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    zmm2, zmm2), 
                                zmm0, zmm0)
                            arg6 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm3, arg6, 1), arg6)
                            var_640_1 = _mm256_mask_storeu_ps(k1_51, zmm2)
                            var_620_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                            var_600_1 = _mm256_mask_storeu_ps(k1_51, arg6)
                        case 3
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            int64_t k2_82
                            char temp0_1585
                            temp0_1585, k2_82 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg12[0].q))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 4)
                            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                            int64_t k2_84
                            char temp0_1588
                            temp0_1588, k2_84 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 8)
                            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                            int64_t k2_86
                            char temp0_1591
                            temp0_1591, k2_86 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0xc)
                            arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
                            int64_t k2_88
                            char temp0_1594
                            temp0_1594, k2_88 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x10)
                            arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
                            int64_t k2_90
                            char temp0_1597
                            temp0_1597, k2_90 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x14)
                            arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                            int64_t k2_92
                            char temp0_1600
                            temp0_1600, k2_92 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            arg6 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                            int64_t k2_94
                            char temp0_1603
                            temp0_1603, k2_94 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + arg6[0]))
                            zmm2 = temp0_1603
                            arg6[0].o = zx.o(0)
                            arg8 = _mm256_srli_epi32(zmm2, 0x15)
                            arg22 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_mask_srli_epi32(arg5, zmm2, 0xa), 0x7ff)
                            zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3ff)
                            arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                            arg8 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg8, arg23))
                            arg24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg8 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg8, arg24), 
                                arg5, temp0_1594, temp0_1585)
                            zmm0 = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg22, arg23)), 
                                    arg24), 
                                arg5, temp0_1597, temp0_1588)
                            zmm2 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, temp0_1600, temp0_1591)
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, arg8)
                            arg8 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg8, arg5, 
                                        arg8, 0x3f800000), 
                                    zmm0, zmm0), 
                                zmm2, zmm2)
                            arg6 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, arg8, 1), arg8)
                            var_640_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                            var_620_1 = _mm256_mask_storeu_ps(k1_51, zmm2)
                            var_600_1 = _mm256_mask_storeu_ps(k1_51, arg6)
                        case 4
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_97
                            char temp0_1633
                            temp0_1633, k2_97 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            arg6 = temp0_1633
                            zmm0[0].o = zx.o(0)
                            zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                            zmm3 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                            arg6 = _mm256_srli_epi32(arg6, 0x15)
                            arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_add_epi32(arg6, arg7)
                            arg8 = _mm256_broadcast_ss(1023f)
                            arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg8)
                            zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg7))
                            zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 
                                0xfffffe01)
                            zmm2 = _mm256_div_ps(zmm2, arg8)
                            zmm3 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(zmm3), 0x43ff8000)
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    zmm2, zmm2), 
                                zmm3, zmm3)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                            var_640_1 = _mm256_mask_storeu_ps(k1_51, zmm2)
                            var_620_1 = _mm256_mask_storeu_ps(k1_51, zmm3)
                            var_600_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                        case 5
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_100
                            char temp0_1659
                            temp0_1659, k2_100 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_51), *(arg4 + zmm0[0].q))
                            zmm2 = temp0_1659
                            zmm0 = _mm256_srli_epi32(zmm2, 0x15)
                            zmm3 = _mm256_srli_epi32(zmm2, 0xa)
                            arg7 = _mm256_srli_epi32(zmm2, 5)
                            arg8 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                            arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                            arg7 = _mm256_mask_or_epi32(arg5, arg7 & arg8, 
                                _mm256_mask_and_epi32(arg5, zmm0, arg19))
                            arg20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                            zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg20)
                            arg21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                            zmm0 = arg7 | _mm256_mask_add_epi32(arg5, zmm0, arg21)
                            arg7 = (_mm256_slli_epi32(zmm2, 6) & arg8)
                                | _mm256_mask_and_epi32(arg5, zmm3, arg19)
                            zmm3 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, zmm3, arg20), arg21)
                            arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x1c0)
                            zmm3 |= arg7
                            zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_slli_epi32(zmm2, 0x11), 0x7e0000)
                                | __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x200)
                                | __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x1ec0)
                            var_660_1 = _mm256_mask_storeu_ps(k1_51, zmm0)
                            zmm0 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                        zmm0, 0x3f800000), 
                                    zmm3, zmm3), 
                                zmm2, zmm2)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm0, 1), zmm0)
                            goto label_14027fb12
                
                arg8 = var_640_1
                arg19 = _mm256_mask_load_ps(arg5, var_620_1)
                arg20 = _mm256_mask_load_ps(arg5, var_600_1)
                arg21 = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, var_700, arg8), arg5, 
                            var_720, var_660_1), 
                        arg5, var_6e0, arg19), 
                    arg5, var_6c0, arg20)
                arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                int64_t k2_102 = _mm256_cmp_ps_mask(arg5, arg22, arg21, 6)
                arg21 = _mm256_mask_mul_ps(arg5, 
                    _mm256_mask_sub_ps(arg5, 
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f), arg18), 
                    __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k2_102, -1f))
                zmm0 = _mm256_mask_mul_ps(arg5, arg21, var_720)
                arg6 = _mm256_mask_mul_ps(arg5, arg21, var_700)
                zmm2 = _mm256_mask_mul_ps(arg5, arg21, var_6e0)
                zmm3 = _mm256_mask_mul_ps(arg5, arg21, var_6c0)
                zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg18, var_660_1)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg18, arg8)
                zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, arg18, arg19)
                zmm3 = _mm256_mask3_fmadd_ps(zmm3, arg5, arg18, arg20)
                uint32_t var_280_1[0x8] = zmm0
                float var_260_1[0x8] = arg6
                float var_240_1[0x8] = zmm2
                uint32_t var_220_1[0x8] = zmm3
                zmm2 = _mm256_mul_ps(zmm2, zmm2)
                zmm3 = _mm256_mul_ps(zmm3, zmm3)
                zmm2 = _mm256_fmadd_ps(zmm2, zmm0, zmm0)
                zmm0 = _mm256_add_ps(zmm2, _mm256_fmadd_ps(zmm3, arg6, arg6))
                int64_t k2_103 =
                    _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), zmm0, 2)
                arg6 = _mm256_broadcast_ss(0.5f)
                zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
                zmm3 = _mm256_mul_ps(zmm0, arg6)
                uint32_t var_180_1[0x8] = zmm3
                uint32_t var_160_1[0x8] = zmm3
                uint32_t var_140_1[0x8] = zmm3
                uint32_t var_120_1[0x8] = zmm3
                zmm0 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
                arg7 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(zmm0, zmm0), zmm3, arg6), 
                    zmm0, zmm0)
                zmm0 = _mm256_fnmadd_ps(_mm256_mul_ps(arg7, arg7), zmm3, arg6)
                arg6 = _mm256_fmadd_ps(arg7, zmm0, arg7)
                zmm0 = _mm256_fmadd_ps(zmm0, arg7, arg7)
                zmm3 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_280_1)
                arg7 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_260_1)
                arg6 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_240_1)
                zmm2 = _mm256_mask_mov_ps(k2_103, zmm2)
                zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
                zmm3 = _mm256_and_ps(zmm3, zmm2)
                arg7 = _mm256_and_ps(arg7, zmm2)
                arg6 = _mm256_and_ps(arg6, zmm2)
                zmm0 = _mm256_and_ps(zmm0, zmm2)
                zmm2 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3f800000)
                zmm0 = _mm256_or_ps(zmm0, zmm2)
                var_720 = _mm256_mask_storeu_ps(k1_51, zmm3)
                var_700 = _mm256_mask_storeu_ps(k1_51, arg7)
                var_6e0 = _mm256_mask_storeu_ps(k1_51, arg6)
                var_6c0 = _mm256_mask_storeu_ps(k1_51, zmm0)
        else
            zmm2 = _mm256_mask_mullo_epi32(arg5, arg21, arg26)
            int64_t rdi_24 = sx.q(jump_table_140280060[r8_4])
            
            switch (rdi_24)
                case -0x1396
                    zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                    arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                    zmm0 = _mm256_add_epi32(zmm2, _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                    int64_t k2_29
                    char temp0_1263
                    temp0_1263, k2_29 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm0[0].q))
                    arg6 = temp0_1263
                    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                    int64_t k2_31
                    char temp0_1265
                    temp0_1265, k2_31 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm2[0].q))
                    zmm3 = temp0_1265
                    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                    int64_t k2_33
                    char temp0_1267
                    temp0_1267, k2_33 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm2[0].q))
                    arg7 = temp0_1267
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    int64_t k2_35
                    char temp0_1270
                    temp0_1270, k2_35 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm0[0].q))
                    zmm2 = temp0_1270
                    var_720 = _mm256_mask_storeu_ps(k1_50, arg6)
                    var_700 = _mm256_mask_storeu_ps(k1_50, zmm3)
                    var_6e0 = _mm256_mask_storeu_ps(k1_50, arg7)
                    var_6c0 = _mm256_mask_storeu_ps(k1_50, zmm2)
                    k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
                    _kortest_mask8_u8(k1_51, k1_51)
                    
                    if (rdi_24 != -0x140280060)
                        goto label_14027f437
                case -0x12a9
                    zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                    arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                    zmm0 = _mm256_add_epi32(zmm2, _mm256_inserti128_si256(zmm0, arg6[0].o, 1))
                    int64_t k2_37
                    char temp0_1284
                    temp0_1284, k2_37 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm0[0].q))
                    arg6 = temp0_1284
                    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                    int64_t k2_39
                    char temp0_1286
                    temp0_1286, k2_39 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm2[0].q))
                    zmm3 = temp0_1286
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                    int64_t k2_40 = __kmovq_maskmskw_masku64_avx512(k1_50)
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    int64_t k2_41
                    char temp0_1289
                    temp0_1289, k2_41 = _mm256_mmask_i32gather_ps(k2_40, *(arg4 + zmm0[0].q))
                    zmm2 = temp0_1289
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    var_720 = _mm256_mask_storeu_ps(k1_50, arg6)
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg6, 
                                0x3f800000), 
                            zmm3, zmm3), 
                        zmm2, zmm2)
                    zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                label_14027f409:
                    var_700 = _mm256_mask_storeu_ps(k1_50, zmm3)
                    var_6e0 = _mm256_mask_storeu_ps(k1_50, zmm2)
                    var_6c0 = _mm256_mask_storeu_ps(k1_50, zmm0)
                    k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
                    _kortest_mask8_u8(k1_51, k1_51)
                    
                    if (rdi_24 != -0x140280060)
                        goto label_14027f437
                case -0x121d
                    zmm0[0].o = _mm256_cvtepi64_epi32(arg5, arg25)
                    arg6[0].o = _mm256_cvtepi64_epi32(arg5, arg24)
                    zmm0 = _mm256_inserti128_si256(zmm0, arg6[0].o, 1)
                    arg6 = _mm256_mask_add_epi32(k1_50, zmm2, zmm0)
                    int32_t rbx_39 = arg6[0].d
                    int64_t r11_12 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int32_t rsi_70 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                    int64_t r15_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    int32_t rdx_107 = arg6[0].d
                    int64_t rdi_28 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int32_t rbx_40 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                    int64_t rcx_126 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg4 + sx.q(rbx_39)))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_12), 1)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rsi_70)), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_6), 3)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rdx_107)), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_28), 5)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rbx_40)), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rcx_126), 7)
                    zmm0 = _mm256_add_epi32(zmm2, zmm0)
                    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_50, zmm0, 2)
                    float rcx_127 = zmm2[0]
                    int64_t r11_13 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    int32_t rbx_42 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                    int64_t r15_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm2[0].o = _mm256_extracti128_si256(zmm2, 1)
                    float rsi_72 = zmm2[0]
                    int64_t rdx_111 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
                    int32_t rcx_128 = __vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2)
                    int64_t rdi_31 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
                    zmm2[0].o = zx.o(*(arg4 + sx.q(rcx_127)))
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r11_13), 1)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rbx_42)), 2)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + r15_7), 3)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rsi_72)), 4)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdx_111), 5)
                    zmm2[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + sx.q(rcx_128)), 6)
                    zmm2[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm2[0].o, *(arg4 + rdi_31), 7)
                    zmm3[0].o = zx.o(0)
                    zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_50, zmm0, 4)
                    uint32_t rcx_130 = zmm0[0]
                    int64_t r11_14 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t rbx_44 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t r15_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    uint32_t rsi_74 = zmm0[0]
                    int64_t rdx_114 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                    int32_t rcx_131 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                    int64_t rdi_34 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                    zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_130)))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_14), 1)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rbx_44)), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r15_8), 3)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_74)), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_114), 5)
                    zmm0[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rcx_131)), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_34), 7)
                    arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                    arg6 = _mm256_add_epi32(arg6, arg7)
                    arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg6 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(arg6), arg19)
                    zmm2 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 
                            arg7)), 
                        arg19)
                    zmm0 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                            arg7)), 
                        arg19)
                    var_720 = _mm256_mask_storeu_ps(k1_50, arg6)
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg6, 
                                0x3f800000), 
                            zmm2, zmm2), 
                        zmm0, zmm0)
                    arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm3, arg6, 1), arg6)
                    var_700 = _mm256_mask_storeu_ps(k1_50, zmm2)
                    var_6e0 = _mm256_mask_storeu_ps(k1_50, zmm0)
                    var_6c0 = _mm256_mask_storeu_ps(k1_50, arg6)
                    k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
                    _kortest_mask8_u8(k1_51, k1_51)
                    
                    if (rdi_24 != -0x140280060)
                        goto label_14027f437
                case -0xfba
                    int64_t k2_45
                    char temp0_1367
                    temp0_1367, k2_45 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + arg12[0].q))
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 4)
                    int64_t k2_47
                    char temp0_1369
                    temp0_1369, k2_47 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + arg6[0]))
                    zmm3 = temp0_1369
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 8)
                    int64_t k2_49
                    char temp0_1371
                    temp0_1371, k2_49 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + arg6[0]))
                    arg7 = temp0_1371
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0xc)
                    int64_t k2_50 = __kmovq_maskmskw_masku64_avx512(k1_50)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k2_51
                    char temp0_1374
                    temp0_1374, k2_51 = _mm256_mmask_i32gather_ps(k2_50, *(arg4 + arg6[0]))
                    arg19 = temp0_1374
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x10)
                    int64_t k2_52 = __kmovq_maskmskw_masku64_avx512(k1_50)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    int64_t k2_53
                    char temp0_1377
                    temp0_1377, k2_53 = _mm256_mmask_i32gather_ps(k2_52, *(arg4 + arg6[0]))
                    arg20 = temp0_1377
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg12, 0x14)
                    int64_t k2_54 = __kmovq_maskmskw_masku64_avx512(k1_50)
                    arg23[0].o = _mm_mask_xor_ps(arg5, arg23[0].o, arg23[0].o)
                    int64_t k2_55
                    char temp0_1380
                    temp0_1380, k2_55 = _mm256_mmask_i32gather_ps(k2_54, *(arg4 + arg6[0]))
                    arg6 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                    int64_t k2_57
                    char temp0_1383
                    temp0_1383, k2_57 = _mm256_mmask_i32gather_epi32(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + arg6[0]))
                    zmm2 = temp0_1383
                    arg6[0].o = zx.o(0)
                    arg27 = _mm256_mask_srli_epi32(arg5, zmm2, 0x15)
                    zmm26 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, zmm2, 0xa), 0x7ff)
                    zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x3ff)
                    zmm27 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                    arg27 = _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, arg27, zmm27))
                    arg28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg27 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg27, arg28), arg5, 
                        arg19, temp0_1367)
                    zmm0 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, zmm26, zmm27)), arg28), 
                        arg5, arg20, zmm3)
                    zmm2 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                zmm2, 0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_1380, arg7)
                    var_720 = _mm256_mask_storeu_ps(k1_50, arg27)
                    arg27 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg27, arg5, arg27, 
                                0x3f800000), 
                            arg5, zmm0, zmm0), 
                        arg5, zmm2, zmm2)
                    arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, arg27, 1), arg27)
                    var_700 = _mm256_mask_storeu_ps(k1_50, zmm0)
                    var_6e0 = _mm256_mask_storeu_ps(k1_50, zmm2)
                    var_6c0 = _mm256_mask_storeu_ps(k1_50, arg6)
                    k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
                    _kortest_mask8_u8(k1_51, k1_51)
                    
                    if (rdi_24 != -0x140280060)
                        goto label_14027f437
                case -0xe2b
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                    int64_t k2_60
                    char temp0_1412
                    temp0_1412, k2_60 = _mm256_mmask_i32gather_epi32(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm0[0].q))
                    arg6 = temp0_1412
                    zmm0[0].o = zx.o(0)
                    zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                    zmm3 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                    arg6 = _mm256_srli_epi32(arg6, 0x15)
                    arg7 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                    arg6 = _mm256_add_epi32(arg6, arg7)
                    arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg6 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(arg6), arg19)
                    zmm2 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm2, arg7))
                    zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 0xfffffe01)
                    zmm2 = _mm256_mask_div_ps(arg5, zmm2, arg19)
                    zmm3 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_cvtepi32_ps(zmm3), 0x43ff8000)
                    var_720 = _mm256_mask_storeu_ps(k1_50, arg6)
                    arg6 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg6, 
                                0x3f800000), 
                            zmm2, zmm2), 
                        zmm3, zmm3)
                    zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                    var_700 = _mm256_mask_storeu_ps(k1_50, zmm2)
                    var_6e0 = _mm256_mask_storeu_ps(k1_50, zmm3)
                    var_6c0 = _mm256_mask_storeu_ps(k1_50, zmm0)
                    k1_51 = _mm256_cmp_epi32_mask(k1_50, arg21, arg22, 4)
                    _kortest_mask8_u8(k1_51, k1_51)
                    
                    if (rdi_24 != -0x140280060)
                        goto label_14027f437
                case -0xd53
                    zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg12, arg8), zmm2)
                    arg6[0].o = zx.o(0)
                    int64_t k2_63
                    char temp0_1438
                    temp0_1438, k2_63 = _mm256_mmask_i32gather_epi32(
                        __kmovq_maskmskw_masku64_avx512(k1_50), *(arg4 + zmm0[0].q))
                    zmm2 = temp0_1438
                    zmm0 = _mm256_srli_epi32(zmm2, 0x15)
                    zmm3 = _mm256_srli_epi32(zmm2, 0xa)
                    arg7 = _mm256_srli_epi32(zmm2, 5)
                    arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x7f0000)
                    arg20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                    arg7 = _mm256_mask_or_epi32(arg5, _mm256_mask_and_epi32(arg5, arg7, arg19), 
                        _mm256_mask_and_epi32(arg5, zmm0, arg20))
                    arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                    zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg23)
                    arg27 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                    zmm0 = arg7 | _mm256_mask_add_epi32(arg5, zmm0, arg27)
                    arg7 = _mm256_mask_or_epi32(arg5, 
                        _mm256_mask_and_epi32(arg5, _mm256_slli_epi32(zmm2, 6), arg19), 
                        _mm256_mask_and_epi32(arg5, zmm3, arg20))
                    zmm3 =
                        _mm256_mask_add_epi32(arg5, _mm256_mask_and_epi32(arg5, zmm3, arg23), arg27)
                    arg19 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x1c0)
                    zmm3 |= arg7
                    arg7 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_slli_epi32(zmm2, 0x11), 0x7e0000)
                    zmm2 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0x200)
                    arg19 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg19, 0x1ec0)
                    zmm2 = arg7 | _mm256_mask_or_epi32(arg5, zmm2, arg19)
                    var_720 = _mm256_mask_storeu_ps(k1_50, zmm0)
                    zmm0 = _mm256_fnmadd_ps(
                        _mm256_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm0, 
                                0x3f800000), 
                            zmm3, zmm3), 
                        zmm2, zmm2)
                    zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm0, 1), zmm0)
                    goto label_14027f409
    
    arg6[0].o = var_720[0].o
    arg18[0].o = _mm_mask_load_epi64(arg5, var_720[4].o)
    zmm3[0].o = var_700[0].o
    int128_t var_6f0
    arg7[0].o = var_6f0
    arg8[0].o = var_6e0[0].o
    arg10 = var_6e0[4].o
    arg9[0].o = var_6c0[0].o
    zmm0[0].o = var_6c0[4].o
    zmm2[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
    arg8[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
    arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
    arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
    zmm3[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
    int128_t var_380 = zmm3[0].o
    zmm2[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
    int128_t var_370_1 = zmm2[0].o
    zmm2[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
    int128_t var_360_1 = zmm2[0].o
    arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
    int128_t var_350_1 = arg6[0].o
    arg6[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10, zmm0[0].o)
    zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10, zmm0[0].o)
    zmm2[0].o = _mm_mask_unpacklo_epi32(arg5, arg18[0].o, arg7[0].o)
    zmm3[0].o = _mm_mask_unpackhi_epi32(arg5, arg18[0].o, arg7[0].o)
    arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
    int128_t var_340_1 = arg7[0].o
    arg6[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
    int128_t var_330_1 = arg6[0].o
    arg6[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    int128_t var_320_1 = arg6[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    int128_t var_310_1 = zmm0[0].o
    uint64_t i_1 = zx.q(i_2)
    
    do
        uint64_t rcx_142 = _tzcnt_u64(i_1)
        int256_t var_2a0 = temp0_904
        zmm0[0].o = (&var_380)[rcx_142]
        arg1[sx.q(*(&var_2a0 + ((zx.q(rcx_142.d) & 7) << 2))) * 3] = zmm0[0].o
        i_1 &= rol.q(-2, rcx_142.b)
    while (i_1 != 0)

arg9[0].o = var_e8
arg11[0].o = var_c8
arg12[0].o = var_b8
arg13.o = var_a8
arg14[0].o = var_98
arg17[0].o = var_58
_mm256_zeroupper()
return arg1
