// 函数: sub_1400fbed0
// 地址: 0x1400fbed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
uint32_t zmm7[0x4]
uint32_t var_88[0x4] = zmm7
int128_t var_98 = arg11[0].o
int64_t rdi = sx.q(arg26)
uint32_t r10 = arg27
uint32_t zmm24[0x8]
zmm24[0].o = _mm_mask_load_ss(arg5, arg24)
uint32_t rbx_1 = *(&data_1434421a0 + (rdi << 2)) * *(&data_143442180 + (rdi << 2))
uint32_t r15 = 0
int32_t var_5a8 = rdi.d
uint32_t rcx = 0x18

if (rdi != 3)
    rcx = 0

int32_t r14_4 = ((r10 s>> 0x1f u>> 0x1d) + r10) & 0xfffffff8
float zmm0[0x8]
uint32_t zmm25[0x8]
uint32_t zmm27[0x8]
float zmm28[0x8]

if (r14_4 s> 0)
    arg16 = _mm256_mask_broadcastss_ps(arg5, zmm24[0].o)
    uint32_t zmm31[0x8] = _mm256_mask_set1_epi32(arg5, rcx)
    arg13 = _mm256_mask_set1_epi32(arg5, rbx_1)
    r15 = 0
    bool cond:2_1 = true
    bool cond:4_1 = true
    bool cond:6_1 = true
    uint32_t zmm30[0x8] = _mm256_mask_load_epi64(arg5, data_143442140)
    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    arg15[0].o = _mm_mask_load_ss(arg5, 1f)
    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    uint64_t zmm29[0x2] = _mm_mask_load_epi64(arg5, data_142fc92e0)
    int64_t var_508_1 = arg2
    int32_t var_5ac_1 = r14_4
    int64_t var_468_1 = arg3
    
    do
        zmm0 = _mm256_mask_add_epi32(arg5, _mm256_slli_epi32(_mm256_mask_set1_epi32(arg5, r15), 3), 
            zmm30)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_2
        char temp0_14
        temp0_14, k1_2 = _mm256_mmask_i32gather_epi32(k1_1, *(arg2 + zmm0[0].q))
        arg20 = temp0_14
        zmm0 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k1_3 = _kxnor_mask16(arg5, arg5)
        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
        int64_t k1_4
        char temp0_17
        temp0_17, k1_4 = _mm256_mmask_i32gather_epi32(k1_3, *(arg2 + zmm0[0].q))
        arg22 = temp0_17
        zmm0 = _mm256_mask_slli_epi32(arg5, arg22, 4)
        zmm25 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
        int64_t k1_6
        char temp0_21
        temp0_21, k1_6 = _mm256_mmask_i32gather_epi32(k1_5, *(arg3 + zmm25[0].q))
        arg22 = temp0_21
        zmm0 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        int64_t k1_7 = _kxnor_mask16(arg5, arg5)
        zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
        int64_t k1_8
        char temp0_24
        temp0_24, k1_8 = _mm256_mmask_i32gather_epi32(k1_7, *(arg3 + zmm0[0].q))
        zmm25 = temp0_24
        uint64_t k1_9 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg5, zmm25, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        float var_460[0x8]
        float var_440[0x8]
        int32_t var_420[0x8]
        float var_400[0x8]
        
        if (not(cond:6_1))
            int64_t k2_2
            char temp0_25
            temp0_25, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_9), 
                *(arg4 + arg22[0].q))
            zmm0 = temp0_25
            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 4)
            int64_t k2_3 = __kmovq_maskmskw_masku64_avx512(k1_9)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int64_t k2_4
            char temp0_28
            temp0_28, k2_4 = _mm256_mmask_i32gather_ps(k2_3, *(arg4 + arg6[0].q))
            arg7 = temp0_28
            arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 8)
            int64_t k2_5 = __kmovq_maskmskw_masku64_avx512(k1_9)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t k2_6
            char temp0_31
            temp0_31, k2_6 = _mm256_mmask_i32gather_ps(k2_5, *(arg4 + arg6[0].q))
            arg8 = temp0_31
            var_460 = _mm256_mask_storeu_ps(k1_9, zmm0)
            zmm0 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm0, 
                        0x3f800000), 
                    arg7, arg7), 
                arg8, arg8)
            zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, zmm0, 1), zmm0)
            var_440 = _mm256_mask_storeu_ps(k1_9, arg7)
            var_420 = _mm256_mask_storeu_ps(k1_9, arg8)
            var_400 = _mm256_mask_storeu_ps(k1_9, zmm0)
        
        int64_t k2_8 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm25, 1, 4)
        _kortest_mask8_u8(k2_8, k2_8)
        
        if (not(cond:2_1))
            uint32_t r11_1 = _cvtmask32_u32(k2_8)
            arg5 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm25, 2, 1)
            int64_t k3_1 = _kxor_mask8(k1_9, arg5)
            _kortest_mask8_u8(k3_1, k3_1)
            
            if (cond:4_1)
                zmm0[0].o = zx.o(0)
                arg11[0].o = _mm_movm_epi16(k2_8)
                
                if (not(arg17[0].o f>= zmm24[0].o))
                label_1400fc1b2:
                    bool cond:7_1 = zmm24[0].o f>= arg15[0].o
                    arg23 = _mm256_mask_add_epi32(arg5, zmm25, arg12)
                    
                    if (cond:7_1)
                        arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                        arg7[0].o = arg11[0].o & arg6[0].o
                        arg6[0].o &= zmm0[0].o
                        int64_t k3_4 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, 
                            arg6[0].o, arg7[0].o)
                        zmm25 = _mm256_mask_blend_epi32(k3_4, arg23, arg21)
                        arg23 = _mm256_mask_mov_epi32(k3_4, arg19)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        arg19 = _mm256_mask_mov_epi64(arg5, arg23)
                    else
                        zmm27 =
                            _mm256_mask_mul_ps(arg5, arg16, _mm256_mask_cvtepi32_ps(arg5, arg23))
                        zmm28 = _mm256_mask_roundscale_ps(arg5, zmm27, 9)
                        arg6 = _mm256_mask_cvttps_epi32(arg5, zmm28)
                        _mm256_mask_min_epi32(arg5, arg23, arg6)
                        arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                        arg7[0].o = arg11[0].o & arg6[0].o
                        arg6[0].o &= zmm0[0].o
                        int64_t k3_3 = __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, 
                            arg6[0].o, arg7[0].o)
                        zmm25 = _mm256_mask_mov_epi32(k3_3, arg21)
                        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                        
                        if (arg25 != 1)
                            _mm256_mask_sub_ps(arg5, zmm27, zmm28)
                        
                        _mm256_mask_min_epi32(arg5, _mm256_mask_sub_epi32(arg5, zmm25, arg12), 
                            arg23)
                        arg6 = _mm256_mask_mov_epi32(k3_3, arg19)
                        arg19 = _mm256_mask_mov_epi64(arg5, arg6)
                    
                    goto label_1400fc25a
                
            label_1400fc16e:
                arg6[0].o = __vpbroadcastw_xmmdq_memw(0xff)
                arg7[0].o = arg11[0].o & arg6[0].o
                arg6[0].o &= zmm0[0].o
                int64_t k3_2 =
                    __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, arg6[0].o, arg7[0].o)
                zmm25 = _mm256_mask_mov_epi32(k3_2, arg21)
                arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                arg19 = _mm256_mask_mov_epi32(k3_2, arg19)
            label_1400fc25a:
                zmm0[0].o = _mm_mask_and_epi64(arg5, zmm0[0].o, zmm29)
                arg18 = _mm256_mask_mov_ps(arg5, 
                    _mm256_mask_mov_ps(
                        __vpcmpeqw_maskmskw_maskmskw_xmmu16_xmmu16_avx512(arg5, zmm0[0].o, zmm29), 
                        arg18))
                arg21 = _mm256_mask_mov_epi64(arg5, zmm25)
            else
                char temp0_41 = _cvtmask32_u32(k3_1)
                int64_t k4_1 =
                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(arg5, zmm25, 2, 5)
                arg21 = _mm256_mask_mov_epi32(k3_1, arg14)
                arg19 = _mm256_mask_mov_epi32(k3_1, arg14)
                arg18 = _mm256_mask_mov_ps(k4_1, arg18)
                
                if (r11_1.b != temp0_41)
                    zmm0[0].o = _mm_movm_epi16(k3_1)
                    arg11[0].o = _mm_movm_epi16(k2_8)
                    
                    if (arg17[0].o f< zmm24[0].o)
                        goto label_1400fc1b2
                    
                    goto label_1400fc16e
            
            uint64_t rbx_2 = zx.q(var_5a8)
            uint64_t k2_9
            
            if (var_5a8 u> 5)
                var_460 = _mm256_mask_storeu_ps(k2_8, arg14)
                var_440 = _mm256_mask_storeu_ps(k2_8, arg14)
                var_420 = _mm256_mask_storeu_ps(k2_8, arg14)
                zmm0 = _mm256_broadcast_ss(1f)
                var_400 = _mm256_mask_storeu_ps(k2_8, zmm0)
                k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                _kortest_mask8_u8(k2_9, k2_9)
                
                if (var_5a8 != 5)
                label_1400fc7fe:
                    float var_3e0_1[0x8]
                    int32_t var_3c0_1[0x8]
                    float var_3a0_1[0x8]
                    float var_380_1[0x8]
                    
                    if (var_5a8 u> 5)
                        var_3e0_1 = _mm256_mask_storeu_ps(k2_9, arg14)
                        var_3c0_1 = _mm256_mask_storeu_ps(k2_9, arg14)
                        var_3a0_1 = _mm256_mask_storeu_ps(k2_9, arg14)
                        var_380_1 = _mm256_mask_storeu_ps(k2_9, _mm256_broadcast_ss(1f))
                    else
                        zmm0 = _mm256_mask_mullo_epi32(arg5, arg19, arg13)
                        
                        switch (rbx_2)
                            case 0
                                zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                    zmm0)
                                int64_t k1_11
                                char temp0_231
                                temp0_231, k1_11 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                                int64_t k1_13
                                char temp0_233
                                temp0_233, k1_13 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + arg7[0].q))
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                                int64_t k1_14 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                int64_t k1_15
                                char temp0_236
                                temp0_236, k1_15 =
                                    _mm256_mmask_i32gather_ps(k1_14, *(arg4 + arg7[0].q))
                                zmm0 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                                int64_t k1_16 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k1_17
                                char temp0_239
                                temp0_239, k1_17 =
                                    _mm256_mmask_i32gather_ps(k1_16, *(arg4 + zmm0[0].q))
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, temp0_231)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, temp0_233)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, temp0_236)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, temp0_239)
                            case 1
                                zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                    zmm0)
                                int64_t k1_19
                                char temp0_306
                                temp0_306, k1_19 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                                arg6 = temp0_306
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                                int64_t k1_21
                                char temp0_308
                                temp0_308, k1_21 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + arg7[0].q))
                                arg8 = temp0_308
                                zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                                int64_t k1_22 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                                int64_t k1_23
                                char temp0_311
                                temp0_311, k1_23 =
                                    _mm256_mmask_i32gather_ps(k1_22, *(arg4 + zmm0[0].q))
                                arg7 = temp0_311
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                                arg6 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, 
                                            arg5, arg6, 0x3f800000), 
                                        arg8, arg8), 
                                    arg7, arg7)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg14, arg6, 1), arg6)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, arg8)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                            case 2
                                int64_t k0 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(
                                    arg5, arg21, arg19)
                                arg6 = _mm256_mask_add_epi32(k0, arg22, zmm31)
                                arg5 = _kor_mask8(k1_9, k0)
                                arg7 = _mm256_mask_add_epi32(_knot_mask8(arg5), arg6, zmm0)
                                int32_t rcx_15 = arg7[0]
                                int64_t r12_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                                int32_t rdi_14 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                                int64_t r11_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                                arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                                int32_t rdx_3 = arg7[0]
                                int64_t rbx_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                                int32_t rsi_11 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                                int64_t rdi_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                                arg7[0].o = zx.o(*(arg4 + sx.q(rcx_15)))
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r12_5), 1)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                    *(arg4 + sx.q(rdi_14)), 2)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r11_5), 3)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                    *(arg4 + sx.q(rdx_3)), 4)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rbx_3), 5)
                                arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, 
                                    *(arg4 + sx.q(rsi_11)), 6)
                                arg7[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdi_16), 7)
                                zmm0 = _mm256_add_epi32(arg6, zmm0)
                                arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_9, zmm0, 2)
                                float rcx_18 = arg6[0]
                                int64_t r12_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                int32_t rdi_17 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                                int64_t r11_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                                float rdx_6 = arg6[0]
                                int64_t rbx_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                                int32_t rsi_14 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                                int64_t rdi_19 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                                arg6[0].o = zx.o(*(arg4 + sx.q(rcx_18)))
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r12_6), 1)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rdi_17)), 2)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_6), 3)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rdx_6)), 4)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rbx_4), 5)
                                arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                    *(arg4 + sx.q(rsi_14)), 6)
                                arg6[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_19), 7)
                                zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k2_9, zmm0, 4)
                                float rcx_21 = zmm0[0]
                                int64_t r12_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                int32_t rdi_20 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                                int64_t r11_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                                float rdx_9 = zmm0[0]
                                int64_t r13_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                                int32_t rsi_17 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                                int64_t rdi_22 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                                r10 = arg27
                                arg2 = var_508_1
                                zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_21)))
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_7), 1)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rdi_20)), 2)
                                r14_4 = var_5ac_1
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_7), 3)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rdx_9)), 4)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r13_5), 5)
                                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                    *(arg4 + sx.q(rsi_17)), 6)
                                zmm0[0].o =
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_22), 7)
                                arg7 = _mm256_cvtepu16_epi32(arg7[0].o)
                                arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                                arg7 = _mm256_add_epi32(arg7, arg8)
                                arg9 = _mm256_broadcast_ss(32767f)
                                arg7 = _mm256_div_ps(_mm256_cvtepi32_ps(arg7), arg9)
                                arg6 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_cvtepu16_epi32(arg6[0].o), arg8)), 
                                    arg9)
                                zmm0 = _mm256_div_ps(
                                    _mm256_cvtepi32_ps(_mm256_add_epi32(
                                        _mm256_cvtepu16_epi32(zmm0[0].o), arg8)), 
                                    arg9)
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                                arg7 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, 
                                            arg5, arg7, 0x3f800000), 
                                        arg6, arg6), 
                                    zmm0, zmm0)
                                arg7 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg14, arg7, 1), arg7)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                            case 3
                                int64_t k1_27 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                                int64_t k1_28
                                char temp0_389
                                temp0_389, k1_28 =
                                    _mm256_mmask_i32gather_ps(k1_27, *(arg4 + arg22[0].q))
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 4)
                                int64_t k1_30
                                char temp0_391
                                temp0_391, k1_30 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + arg7[0].q))
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 8)
                                int64_t k1_31 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                                int64_t k1_32
                                char temp0_394
                                temp0_394, k1_32 =
                                    _mm256_mmask_i32gather_ps(k1_31, *(arg4 + arg7[0].q))
                                arg7 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0xc)
                                int64_t k1_34
                                char temp0_396
                                temp0_396, k1_34 = _mm256_mmask_i32gather_ps(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + arg7[0].q))
                                arg7 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0x10)
                                int64_t k1_35 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                                int64_t k1_36
                                char temp0_399
                                temp0_399, k1_36 =
                                    _mm256_mmask_i32gather_ps(k1_35, *(arg4 + arg7[0].q))
                                arg7 =
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0x14)
                                int64_t k1_37 = __kmovq_maskmskw_masku64_avx512(k2_9)
                                arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                                int64_t k1_38
                                char temp0_402
                                temp0_402, k1_38 =
                                    _mm256_mmask_i32gather_ps(k1_37, *(arg4 + arg7[0].q))
                                zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                    zmm0)
                                int64_t k1_40
                                char temp0_405
                                temp0_405, k1_40 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                                arg7 = temp0_405
                                zmm0 = _mm256_srli_epi32(arg7, 0x15)
                                arg22 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_mask_srli_epi32(arg5, arg7, 0xa), 0x7ff)
                                arg7 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 0x3ff)
                                zmm27 =
                                    __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, zmm0, zmm27))
                                zmm28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                                zmm0 = _mm256_fmadd_ps(_mm256_mask_div_ps(arg5, zmm0, zmm28), 
                                    temp0_396, temp0_389)
                                arg6 = _mm256_mask3_fmadd_ps(
                                    _mm256_mask_div_ps(arg5, 
                                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg22, 
                                            zmm27)), 
                                        zmm28), 
                                    arg5, temp0_399, temp0_391)
                                arg7 = _mm256_mask3_fmadd_ps(
                                    __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                        _mm256_cvtepi32_ps(
                                            __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                            arg7, 0xfffffe01)), 
                                        0x43ff8000), 
                                    arg5, temp0_402, temp0_394)
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                                zmm0 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, 
                                            arg5, zmm0, 0x3f800000), 
                                        arg6, arg6), 
                                    arg7, arg7)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg14, zmm0, 1), zmm0)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                            case 4
                                zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                    zmm0)
                                int64_t k1_43
                                char temp0_433
                                temp0_433, k1_43 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                                arg6 = temp0_433
                                zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                                arg7 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                                arg6 = _mm256_srli_epi32(arg6, 0x15)
                                arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                                arg6 = _mm256_add_epi32(arg6, arg8)
                                arg9 = _mm256_broadcast_ss(1023f)
                                arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg9)
                                zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                                arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 
                                    0xfffffe01)
                                zmm0 = _mm256_div_ps(zmm0, arg9)
                                arg7 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(arg7), 0x43ff8000)
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                                arg6 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, 
                                            arg5, arg6, 0x3f800000), 
                                        zmm0, zmm0), 
                                    arg7, arg7)
                                arg6 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg14, arg6, 1), arg6)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                            case 5
                                zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                    zmm0)
                                int64_t k1_46
                                char temp0_459
                                temp0_459, k1_46 = _mm256_mmask_i32gather_epi32(
                                    __kmovq_maskmskw_masku64_avx512(k2_9), *(arg4 + zmm0[0].q))
                                arg6 = temp0_459
                                zmm0 = _mm256_srli_epi32(arg6, 0x15)
                                arg7 = _mm256_srli_epi32(arg6, 0xa)
                                arg8 = _mm256_srli_epi32(arg6, 5)
                                arg9 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                                arg10 = __vpbroadcastd_ymmqq_memd(0x400)
                                arg8 = _mm256_mask_or_epi32(arg5, arg8 & arg9, 
                                    _mm256_mask_and_epi32(arg5, zmm0, arg10))
                                arg22 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                                zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg22)
                                zmm25 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                                zmm0 = arg8 | _mm256_mask_add_epi32(arg5, zmm0, zmm25)
                                arg8 = (_mm256_slli_epi32(arg6, 6) & arg9) | (arg7 & arg10)
                                arg7 = _mm256_mask_add_epi32(arg5, 
                                    _mm256_mask_and_epi32(arg5, arg7, arg22), zmm25)
                                arg9 =
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x1c0)
                                arg7 |= arg8
                                arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                    _mm256_slli_epi32(arg6, 0x11), 0x7e0000) |
                                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x200) |
                                    __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 
                                    0x1ec0)
                                var_3e0_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                                zmm0 = _mm256_fnmadd_ps(
                                    _mm256_fnmadd_ps(
                                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, 
                                            arg5, zmm0, 0x3f800000), 
                                        arg7, arg7), 
                                    arg6, arg6)
                                zmm0 = _mm256_mask_sqrt_ps(
                                    _mm256_cmp_ps_mask(arg5, arg14, zmm0, 1), zmm0)
                                var_3c0_1 = _mm256_mask_storeu_ps(k2_9, arg7)
                                var_3a0_1 = _mm256_mask_storeu_ps(k2_9, arg6)
                                var_380_1 = _mm256_mask_storeu_ps(k2_9, zmm0)
                    
                    arg22 = _mm256_mask_load_ps(arg5, var_3a0_1)
                    zmm25 = _mm256_mask_load_ps(arg5, var_380_1)
                    int64_t k1_48 = _mm256_cmp_ps_mask(arg5, arg14, 
                        _mm256_mask3_fmadd_ps(
                            _mm256_mask3_fmadd_ps(
                                _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, var_440, var_3c0_1), 
                                    arg5, var_460, var_3e0_1), 
                                arg5, var_420, arg22), 
                            arg5, var_400, zmm25), 
                        6)
                    arg23 = _mm256_mask_mul_ps(arg5, 
                        _mm256_mask_sub_ps(arg5, 
                            __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f), arg18), 
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k1_48, -1f))
                    zmm0 = _mm256_mask_mul_ps(arg5, arg23, var_460)
                    arg6 = _mm256_mask_mul_ps(arg5, arg23, var_440)
                    arg7 = _mm256_mask_mul_ps(arg5, arg23, var_420)
                    arg8 = _mm256_mask_mul_ps(arg5, arg23, var_400)
                    zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, arg18, var_3e0_1)
                    arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg18, var_3c0_1)
                    arg7 = _mm256_mask3_fmadd_ps(arg7, arg5, arg18, arg22)
                    arg8 = _mm256_mask3_fmadd_ps(arg8, arg5, arg18, zmm25)
                    float var_1a0_1[0x8] = zmm0
                    float var_180_1[0x8] = arg6
                    int32_t var_160_1[0x8] = arg7
                    float var_140_1[0x8] = arg8
                    arg9 = _mm256_mul_ps(arg7, arg7)
                    arg10 = _mm256_mul_ps(arg8, arg8)
                    arg9 = _mm256_add_ps(_mm256_fmadd_ps(arg9, zmm0, zmm0), 
                        _mm256_fmadd_ps(arg10, arg6, arg6))
                    arg10 = _mm256_mask_mov_ps(
                        _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), arg9, 2), 
                        arg12)
                    arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 0.5f)
                    zmm25 = _mm256_mask_mul_ps(arg5, arg9, arg22)
                    arg9 = _mm256_mask_rsqrt14_ps(arg5, arg9)
                    arg23 = _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, arg9, arg9), arg5, zmm25, 
                            arg22), 
                        arg5, arg9, arg9)
                    arg9 = _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg5, arg23, arg23), arg5, zmm25, 
                            arg22), 
                        arg5, arg23, arg23)
                    zmm0 = _mm256_mul_ps(arg9, zmm0)
                    arg6 = _mm256_mul_ps(arg9, arg6)
                    arg7 = _mm256_mul_ps(arg9, arg7)
                    arg8 = _mm256_mul_ps(arg9, arg8)
                    zmm0 = _mm256_and_ps(zmm0, arg10)
                    arg6 = _mm256_and_ps(arg6, arg10)
                    arg7 = _mm256_and_ps(arg7, arg10)
                    arg8 = _mm256_and_ps(arg8, arg10)
                    arg9 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 0x3f800000)
                    arg8 = _mm256_or_ps(arg8, arg9)
                    var_460 = _mm256_mask_storeu_ps(k2_9, zmm0)
                    var_440 = _mm256_mask_storeu_ps(k2_9, arg6)
                    var_420 = _mm256_mask_storeu_ps(k2_9, arg7)
                    var_400 = _mm256_mask_storeu_ps(k2_9, arg8)
            else
                zmm0 = _mm256_mask_mullo_epi32(arg5, arg21, arg13)
                int64_t rdi_1 = sx.q(jump_table_1400fe7f4[rbx_2])
                
                switch (rdi_1)
                    case -0x2556
                        zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), zmm0)
                        uint64_t k3_6 = _cvtu32_mask32(r11_1)
                        int64_t k4_3
                        char temp0_78
                        temp0_78, k4_3 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k3_6), *(arg4 + zmm0[0].q))
                        arg6 = temp0_78
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        int64_t k4_4 = __kmovq_maskmskw_masku64_avx512(k3_6)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t k4_5
                        char temp0_81
                        temp0_81, k4_5 = _mm256_mmask_i32gather_ps(k4_4, *(arg4 + arg7[0].q))
                        arg8 = temp0_81
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                        int64_t k4_6 = __kmovq_maskmskw_masku64_avx512(k3_6)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t k4_7
                        char temp0_84
                        temp0_84, k4_7 = _mm256_mmask_i32gather_ps(k4_6, *(arg4 + arg7[0].q))
                        arg9 = temp0_84
                        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k3_7
                        char temp0_87
                        temp0_87, k3_7 = _mm256_mmask_i32gather_ps(k3_6, *(arg4 + zmm0[0].q))
                        arg7 = temp0_87
                        var_460 = _mm256_mask_storeu_ps(k2_8, arg6)
                        var_440 = _mm256_mask_storeu_ps(k2_8, arg8)
                        var_420 = _mm256_mask_storeu_ps(k2_8, arg9)
                        var_400 = _mm256_mask_storeu_ps(k2_8, arg7)
                        k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                        _kortest_mask8_u8(k2_9, k2_9)
                        
                        if (rdi_1 != -0x1400fe7f4)
                            goto label_1400fc7fe
                    case -0x247b
                        zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), zmm0)
                        uint64_t k3_8 = _cvtu32_mask32(r11_1)
                        int64_t k4_9
                        char temp0_99
                        temp0_99, k4_9 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k3_8), *(arg4 + zmm0[0].q))
                        arg6 = temp0_99
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        int64_t k4_10 = __kmovq_maskmskw_masku64_avx512(k3_8)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t k4_11
                        char temp0_102
                        temp0_102, k4_11 = _mm256_mmask_i32gather_ps(k4_10, *(arg4 + arg7[0].q))
                        arg8 = temp0_102
                        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
                        int64_t k3_9
                        char temp0_105
                        temp0_105, k3_9 = _mm256_mmask_i32gather_ps(k3_8, *(arg4 + zmm0[0].q))
                        arg7 = temp0_105
                        var_460 = _mm256_mask_storeu_ps(k2_8, arg6)
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                    arg6, 0x3f800000), 
                                arg8, arg8), 
                            arg7, arg7)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, arg6, 1), arg6)
                        var_440 = _mm256_mask_storeu_ps(k2_8, arg8)
                    label_1400fc7d8:
                        var_420 = _mm256_mask_storeu_ps(k2_8, arg7)
                        var_400 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                        _kortest_mask8_u8(k2_9, k2_9)
                        
                        if (rdi_1 != -0x1400fe7f4)
                            goto label_1400fc7fe
                    case -0x23f8
                        zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), zmm0)
                        arg6 = _mm256_mask_blend_epi32(k1_9, zmm0, arg14)
                        float rdi_3 = arg6[0]
                        int64_t r11_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t rcx_5 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                        float r13_1 = arg6[0]
                        int64_t r10_2 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                        int32_t r12_1 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                        int64_t r14_6 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                        arg6[0].o = zx.o(*(arg4 + sx.q(rdi_3)))
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_2), 1)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rcx_5)), 2)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rsi_3), 3)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(r13_1)), 4)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_2), 5)
                        arg6[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(r12_1)), 6)
                        arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_6), 7)
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 2)
                        arg7 = _mm256_mask_mov_epi32(k1_9, arg14)
                        int32_t rcx_7 = arg7[0]
                        int64_t r10_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        int32_t rsi_4 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                        int64_t r14_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = _mm256_extracti128_si256(arg7, 1)
                        int32_t rcx_8 = arg7[0]
                        int64_t r13_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
                        int32_t rsi_5 = __vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2)
                        int64_t rdi_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
                        arg7[0].o = zx.o(*(arg4 + sx.q(rcx_7)))
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r10_3), 1)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + sx.q(rsi_4)), 2)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r14_7), 3)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + sx.q(rcx_8)), 4)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + r13_3), 5)
                        arg7[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + sx.q(rsi_5)), 6)
                        arg7[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg7[0].o, *(arg4 + rdi_10), 7)
                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                        zmm0 = _mm256_mask_mov_epi32(k1_9, arg14)
                        float rcx_10 = zmm0[0]
                        int64_t r8_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t rsi_7 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t r11_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                        float rdi_12 = zmm0[0]
                        int64_t r12_4 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                        int32_t rdx_1 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                        int64_t rsi_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                        r10 = arg27
                        arg2 = var_508_1
                        zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_10)))
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r8_1), 1)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rsi_7)), 2)
                        r14_4 = var_5ac_1
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r11_4), 3)
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdi_12)), 4)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r12_4), 5)
                        arg3 = var_468_1
                        zmm0[0].o =
                            __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + sx.q(rdx_1)), 6)
                        zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rsi_9), 7)
                        arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                        arg6 = _mm256_add_epi32(arg6, arg8)
                        arg9 = _mm256_broadcast_ss(32767f)
                        arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg9)
                        arg7 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(arg7[0].o), 
                                arg8)), 
                            arg9)
                        zmm0 = _mm256_div_ps(
                            _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 
                                arg8)), 
                            arg9)
                        var_460 = _mm256_mask_storeu_ps(k2_8, arg6)
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                    arg6, 0x3f800000), 
                                arg7, arg7), 
                            zmm0, zmm0)
                        arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, arg6, 1), arg6)
                        var_440 = _mm256_mask_storeu_ps(k2_8, arg7)
                        var_420 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        var_400 = _mm256_mask_storeu_ps(k2_8, arg6)
                        k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                        _kortest_mask8_u8(k2_9, k2_9)
                        
                        if (rdi_1 != -0x1400fe7f4)
                            goto label_1400fc7fe
                    case -0x2174
                        uint64_t k3_12 = _cvtu32_mask32(r11_1)
                        int64_t k4_13
                        char temp0_183
                        temp0_183, k4_13 = _mm256_mmask_i32gather_ps(
                            __kmovq_maskmskw_masku64_avx512(k3_12), *(arg4 + arg22[0].q))
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 4)
                        int64_t k4_14 = __kmovq_maskmskw_masku64_avx512(k3_12)
                        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                        int64_t k4_15
                        char temp0_186
                        temp0_186, k4_15 = _mm256_mmask_i32gather_ps(k4_14, *(arg4 + arg7[0].q))
                        arg8 = temp0_186
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 8)
                        int64_t k4_16 = __kmovq_maskmskw_masku64_avx512(k3_12)
                        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                        int64_t k4_17
                        char temp0_189
                        temp0_189, k4_17 = _mm256_mmask_i32gather_ps(k4_16, *(arg4 + arg7[0].q))
                        arg9 = temp0_189
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0xc)
                        int64_t k4_18 = __kmovq_maskmskw_masku64_avx512(k3_12)
                        arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
                        int64_t k4_19
                        char temp0_192
                        temp0_192, k4_19 = _mm256_mmask_i32gather_ps(k4_18, *(arg4 + arg7[0].q))
                        arg10 = temp0_192
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0x10)
                        int64_t k4_20 = __kmovq_maskmskw_masku64_avx512(k3_12)
                        zmm25[0].o = _mm_mask_xor_epi32(arg5, zmm25[0].o, zmm25[0].o)
                        int64_t k4_21
                        char temp0_195
                        temp0_195, k4_21 = _mm256_mmask_i32gather_ps(k4_20, *(arg4 + arg7[0].q))
                        zmm25 = temp0_195
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg22, 0x14)
                        int64_t k4_22 = __kmovq_maskmskw_masku64_avx512(k3_12)
                        arg23[0].o = _mm_mask_xor_epi32(arg5, arg23[0].o, arg23[0].o)
                        int64_t k4_23
                        char temp0_198
                        temp0_198, k4_23 = _mm256_mmask_i32gather_ps(k4_22, *(arg4 + arg7[0].q))
                        arg23 = temp0_198
                        int64_t k3_13
                        char temp0_201
                        temp0_201, k3_13 = _mm256_mmask_i32gather_epi32(k3_12, 
                            *(arg4 + _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), 
                                zmm0)[0].q))
                        arg7 = temp0_201
                        zmm0 = _mm256_srli_epi32(arg7, 0x15)
                        zmm27 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_mask_srli_epi32(arg5, arg7, 0xa), 0x7ff)
                        arg7 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 0x3ff)
                        zmm28 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, zmm0, zmm28))
                        arg11 = _mm256_broadcast_ss(1023f)
                        zmm0 = _mm256_fmadd_ps(_mm256_div_ps(zmm0, arg11), arg10, temp0_183)
                        arg6 = _mm256_mask3_fmadd_ps(
                            _mm256_div_ps(
                                _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, zmm27, zmm28)), 
                                arg11), 
                            arg5, zmm25, arg8)
                        arg7 = _mm256_mask3_fmadd_ps(
                            __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(
                                    arg5, arg7, 0xfffffe01)), 
                                0x43ff8000), 
                            arg5, arg23, arg9)
                        var_460 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        zmm0 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                    zmm0, 0x3f800000), 
                                arg6, arg6), 
                            arg7, arg7)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, zmm0, 1), zmm0)
                        var_440 = _mm256_mask_storeu_ps(k2_8, arg6)
                        goto label_1400fc7d8
                    case -0x1f4d
                        zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), zmm0)
                        int64_t k3_16
                        char temp0_246
                        temp0_246, k3_16 =
                            _mm256_mmask_i32gather_epi32(_cvtu32_mask32(r11_1), *(arg4 + zmm0[0].q))
                        arg6 = temp0_246
                        zmm0 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                        arg7 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                        arg6 = _mm256_srli_epi32(arg6, 0x15)
                        arg8 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                        arg6 = _mm256_add_epi32(arg6, arg8)
                        arg9 = _mm256_broadcast_ss(1023f)
                        arg6 = _mm256_div_ps(_mm256_cvtepi32_ps(arg6), arg9)
                        zmm0 = _mm256_cvtepi32_ps(_mm256_add_epi32(zmm0, arg8))
                        arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 0xfffffe01)
                        zmm0 = _mm256_div_ps(zmm0, arg9)
                        arg7 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_cvtepi32_ps(arg7), 0x43ff8000)
                        var_460 = _mm256_mask_storeu_ps(k2_8, arg6)
                        arg6 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                    arg6, 0x3f800000), 
                                zmm0, zmm0), 
                            arg7, arg7)
                        arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, arg6, 1), arg6)
                        var_440 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        var_420 = _mm256_mask_storeu_ps(k2_8, arg7)
                        var_400 = _mm256_mask_storeu_ps(k2_8, arg6)
                        k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                        _kortest_mask8_u8(k2_9, k2_9)
                        
                        if (rdi_1 != -0x1400fe7f4)
                            goto label_1400fc7fe
                    case -0x1e7d
                        zmm0 = _mm256_add_epi32(_mm256_mask_add_epi32(arg5, arg22, zmm31), zmm0)
                        int64_t k3_19
                        char temp0_272
                        temp0_272, k3_19 =
                            _mm256_mmask_i32gather_epi32(_cvtu32_mask32(r11_1), *(arg4 + zmm0[0].q))
                        arg6 = temp0_272
                        zmm0 = _mm256_srli_epi32(arg6, 0x15)
                        arg7 = _mm256_srli_epi32(arg6, 0xa)
                        arg8 = _mm256_srli_epi32(arg6, 5)
                        arg9 = __vpbroadcastd_ymmqq_memd(0x7f0000)
                        arg10 = __vpbroadcastd_ymmqq_memd(0x400)
                        arg8 = _mm256_mask_or_epi32(arg5, arg8 & arg9, 
                            _mm256_mask_and_epi32(arg5, zmm0, arg10))
                        zmm25 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                        zmm0 = _mm256_mask_and_epi32(arg5, zmm0, zmm25)
                        arg23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                        zmm0 = arg8 | _mm256_mask_add_epi32(arg5, zmm0, arg23)
                        arg8 = (_mm256_slli_epi32(arg6, 6) & arg9) | (arg7 & arg10)
                        arg7 = _mm256_mask_add_epi32(arg5, 
                            _mm256_mask_and_epi32(arg5, arg7, zmm25), arg23)
                        arg9 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x1c0)
                        arg7 |= arg8
                        arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                            _mm256_slli_epi32(arg6, 0x11), 0x7e0000)
                        arg6 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x200)
                        arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 0x1ec0)
                        arg6 = arg8 | arg6 | arg9
                        var_460 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        zmm0 = _mm256_fnmadd_ps(
                            _mm256_fnmadd_ps(
                                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                    zmm0, 0x3f800000), 
                                arg7, arg7), 
                            arg6, arg6)
                        zmm0 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg14, zmm0, 1), zmm0)
                        var_440 = _mm256_mask_storeu_ps(k2_8, arg7)
                        var_420 = _mm256_mask_storeu_ps(k2_8, arg6)
                        var_400 = _mm256_mask_storeu_ps(k2_8, zmm0)
                        k2_9 = _mm256_cmp_epi32_mask(k2_8, arg21, arg19, 4)
                        _kortest_mask8_u8(k2_9, k2_9)
                        
                        if (rdi_1 != -0x1400fe7f4)
                            goto label_1400fc7fe
        
        zmm0[0].o = var_460[0].o
        arg22[0].o = _mm_mask_load_epi64(arg5, var_460[4].o)
        zmm7 = var_440[0].o
        arg6[0].o = var_440[4].o
        arg9[0].o = var_420[0].o
        arg7[0].o = var_420[4].o
        arg8[0].o = var_400[0].o
        arg10[0].o = var_400[4].o
        arg11[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
        arg8[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg8[0].o)
        arg9[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7)
        zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7)
        uint32_t var_340[0x4] = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
        arg9[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg9[0].o, arg11[0].o)
        int128_t var_330_1 = arg9[0].o
        arg9[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_320_1 = arg9[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
        int128_t var_310_1 = zmm0[0].o
        zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        arg7[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg7[0].o, arg10[0].o)
        arg8[0].o = _mm_mask_unpacklo_epi32(arg5, arg22[0].o, arg6[0].o)
        arg6[0].o = _mm_mask_unpackhi_epi32(arg5, arg22[0].o, arg6[0].o)
        arg9[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_300_1 = arg9[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
        int128_t var_2f0_1 = zmm0[0].o
        zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_2e0_1 = zmm0[0].o
        zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        int128_t var_2d0_1 = zmm0[0].o
        uint64_t rcx_28
        int64_t rdi_23
        
        for (uint64_t i = 0xff; i != 0; i = rdi_23 & rol.q(-2, rcx_28.b))
            uint64_t rcx_24 = _tzcnt_u64(i)
            int256_t var_360 = _mm256_mask_store_epi64(arg5, arg20)
            rdi_23 = i & not.q(1 << (rcx_24 u% 0x40))
            zmm0[0].o = (&var_340)[rcx_24]
            arg1[sx.q(*(&var_360 + ((zx.q(rcx_24.d) & 7) << 2))) * 3] = zmm0[0].o
            rcx_28 = _tzcnt_u64(rdi_23)
            zmm0[0].o = (&var_340)[rcx_28]
            arg1[sx.q(*(&var_360 + ((zx.q(rcx_28.d) & 7) << 2))) * 3] = zmm0[0].o
        
        r15 += 8
        cond:2_1 = r15 == r14_4
        cond:4_1 = r15 == r14_4
        cond:6_1 = r15 == r14_4
    while (r15 s< r14_4)

if (r15 s< r10)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, r15), data_142fc93a0)
    arg6 = _mm256_mask_set1_epi32(arg5, r10)
    uint64_t k1_50 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg6, zmm0)
    zmm0 = _mm256_slli_epi32(zmm0, 3)
    arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
    int64_t k2_11
    char temp0_558
    temp0_558, k2_11 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_50), *(arg2 + zmm0[0].q))
    zmm0 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
    int64_t k2_13
    char temp0_560
    temp0_560, k2_13 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_50), *(arg2 + zmm0[0].q))
    zmm0 = _mm256_slli_epi32(temp0_560, 4)
    arg7 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
    int64_t k2_15
    char temp0_563
    temp0_563, k2_15 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_50), *(arg3 + arg7[0].q))
    arg8 = temp0_563
    arg7 = __vpord_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
    int64_t k2_17
    char temp0_565
    temp0_565, k2_17 =
        _mm256_mmask_i32gather_epi32(__kmovq_maskmskw_masku64_avx512(k1_50), *(arg3 + arg7[0].q))
    zmm0 = temp0_565
    char i_2 = _cvtmask32_u32(k1_50)
    arg7[0].o = zx.o(0)
    uint64_t k2_18 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k1_50, zmm0, 1)
    _kortest_mask8_u8(k2_18, k2_18)
    float var_5a0[0x8]
    float var_580[0x8]
    float var_560[0x8]
    float var_540[0x8]
    
    if (r15 != r10)
        int64_t k3_22
        char temp0_566
        temp0_566, k3_22 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + arg8[0].q))
        arg6 = temp0_566
        arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 4)
        int64_t k3_24
        char temp0_568
        temp0_568, k3_24 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + arg9[0].q))
        arg10 = temp0_568
        arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 8)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        int64_t k3_26
        char temp0_571
        temp0_571, k3_26 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k2_18), *(arg4 + arg9[0].q))
        arg15 = temp0_571
        var_5a0 = _mm256_mask_storeu_ps(k2_18, arg6)
        arg6 = _mm256_mask3_fnmadd_ps(
            _mm256_fnmadd_ps(
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg6, 0x3f800000), 
                arg10, arg10), 
            arg5, arg15, arg15)
        arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg7, arg6, 1), arg6)
        var_580 = _mm256_mask_storeu_ps(k2_18, arg10)
        var_560 = _mm256_mask_storeu_ps(k2_18, arg15)
        var_540 = _mm256_mask_storeu_ps(k2_18, arg6)
    
    int64_t k1_51 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_50, zmm0, 1, 4)
    _kortest_mask8_u8(k1_51, k1_51)
    
    if (r15 != r10)
        uint32_t rbx_12 = _cvtmask32_u32(k1_51)
        arg5 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_51, zmm0, 2, 1)
        _kortest_mask8_u8(arg5, arg5)
        
        if (r15 == r10)
            arg7[0].o = zx.o(0)
            arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
            arg6[0].o = zx.o(0)
            
            if (arg6[0].o f>= zmm24[0].o)
            label_1400fd54b:
                arg9[0].o = zx.o(0)
                arg10[0].o = zx.o(0)
                zmm0[0].o = arg7[0].o & data_142fc92e0
                arg7 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    arg15)
            else
            label_1400fd56e:
                arg9[0].o = _mm_movm_epi16(k1_51)
                zmm7 = arg7[0].o ^ data_142fc92e0
                arg6 = _mm256_cmpeq_epi32(arg6, arg6)
                zmm0 = _mm256_add_epi32(zmm0, arg6)
                
                if (zmm24[0].o f>= 1f)
                    arg6[0].o = zmm7 & arg9[0].o
                    arg9 = _mm256_mask_mov_epi32(
                        __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, arg6[0].o, 
                            data_142fc92e0), 
                        zmm0)
                    arg10 = arg9
                else
                    arg6 = _mm256_mask_broadcastss_ps(arg5, zmm24[0].o)
                    arg10 = _mm256_mul_ps(arg6, _mm256_cvtepi32_ps(zmm0))
                    arg6[0].o = zmm7 & arg9[0].o
                    arg17 = _mm256_mask_roundscale_ps(arg5, arg10, 9)
                    _mm256_min_epi32(zmm0, _mm256_mask_cvttps_epi32(arg5, arg17))
                    int64_t k2_19 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, 
                        arg6[0].o, data_142fc92e0)
                    arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
                    arg9 = _mm256_mask_mov_epi32(k2_19, arg16)
                    arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
                    
                    if (arg25 != 1)
                        arg15 = _mm256_mask_sub_ps(arg5, arg10, arg17)
                    
                    arg6 = _mm256_sub_epi32(arg9, _mm256_cmpeq_epi32(arg6, arg6))
                    _mm256_min_epi32(arg6, zmm0)
                    arg10 = _mm256_mask_mov_epi32(k2_19, arg16)
                
                zmm0[0].o = arg7[0].o & data_142fc92e0
                arg7 = _mm256_mask_mov_ps(
                    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(arg5, zmm0[0].o, 
                        data_142fc92e0, 4), 
                    arg15)
        else
            char temp0_581 = _cvtmask32_u32(arg5)
            arg9[0].o = zx.o(0)
            arg10[0].o = zx.o(0)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zx.o(0), zx.o(0))
            
            if (rbx_12.b != temp0_581)
                arg7[0].o = _mm_movm_epi16(arg5)
                arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
                arg6[0].o = zx.o(0)
                
                if (arg6[0].o f< zmm24[0].o)
                    goto label_1400fd56e
                
                goto label_1400fd54b
        
        zmm0 = _mm256_mask_set1_epi32(arg5, rcx)
        arg15 = _mm256_mask_set1_epi32(arg5, rbx_1)
        uint64_t r10_8 = zx.q(var_5a8)
        uint64_t k1_52
        
        if (var_5a8 u> 5)
            arg6[0].o = zx.o(0)
            var_5a0 = _mm256_mask_storeu_ps(k1_51, arg6)
            var_580 = _mm256_mask_storeu_ps(k1_51, arg6)
            var_560 = _mm256_mask_storeu_ps(k1_51, arg6)
            arg6 = _mm256_broadcast_ss(1f)
            var_540 = _mm256_mask_storeu_ps(k1_51, arg6)
            k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
            _kortest_mask8_u8(k1_52, k1_52)
            
            if (var_5a8 != 5)
            label_1400fde0c:
                int32_t var_500_1[0x8]
                float var_4e0_1[0x8]
                float var_4c0_1[0x8]
                float var_4a0_1[0x8]
                
                if (var_5a8 u> 5)
                    zmm0[0].o = zx.o(0)
                    var_500_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                    var_4e0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                    var_4c0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                    var_4a0_1 = _mm256_mask_storeu_ps(k1_52, _mm256_broadcast_ss(1f))
                else
                    arg9 = _mm256_mask_mullo_epi32(arg5, arg10, arg15)
                    
                    switch (r10_8)
                        case 0
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg9)
                            int64_t k2_37 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_38
                            char temp0_834
                            temp0_834, k2_38 = _mm256_mmask_i32gather_ps(k2_37, *(arg4 + zmm0[0].q))
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_40
                            char temp0_836
                            temp0_836, k2_40 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + arg8[0].q))
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_42
                            char temp0_838
                            temp0_838, k2_42 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + arg8[0].q))
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_44
                            char temp0_841
                            temp0_841, k2_44 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + zmm0[0].q))
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, temp0_834)
                            var_4e0_1 = _mm256_mask_storeu_ps(k1_52, temp0_836)
                            var_4c0_1 = _mm256_mask_storeu_ps(k1_52, temp0_838)
                            var_4a0_1 = _mm256_mask_storeu_ps(k1_52, temp0_841)
                        case 1
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg9)
                            int64_t k2_45 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_46
                            char temp0_853
                            temp0_853, k2_46 = _mm256_mmask_i32gather_ps(k2_45, *(arg4 + zmm0[0].q))
                            arg6 = temp0_853
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
                            int64_t k2_48
                            char temp0_855
                            temp0_855, k2_48 = _mm256_mmask_i32gather_ps(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + arg8[0].q))
                            arg9 = temp0_855
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
                            int64_t k2_49 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
                            int64_t k2_50
                            char temp0_858
                            temp0_858, k2_50 = _mm256_mmask_i32gather_ps(k2_49, *(arg4 + zmm0[0].q))
                            arg8 = temp0_858
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    arg9, arg9), 
                                arg8, arg8)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                        label_1400fe4c4:
                            var_4e0_1 = _mm256_mask_storeu_ps(k1_52, arg9)
                            var_4c0_1 = _mm256_mask_storeu_ps(k1_52, arg8)
                            var_4a0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                        case 2
                            zmm0 = _mm256_add_epi32(arg8, zmm0)
                            arg6 = _mm256_mask_add_epi32(k1_52, zmm0, arg9)
                            float rcx_42 = arg6[0]
                            int64_t r10_9 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int32_t rbx_20 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                            int64_t r14_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                            float rsi_30 = arg6[0]
                            int64_t rdx_23 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                            int32_t rcx_43 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                            int64_t rdi_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                            arg6[0].o = zx.o(*(arg4 + sx.q(rcx_42)))
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r10_9), 1)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rbx_20)), 2)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r14_15), 3)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rsi_30)), 4)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_23), 5)
                            arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, 
                                *(arg4 + sx.q(rcx_43)), 6)
                            arg6[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_35), 7)
                            zmm0 = _mm256_add_epi32(zmm0, arg9)
                            arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_52, zmm0, 2)
                            float rcx_45 = arg8[0]
                            int64_t r10_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                            int32_t rbx_22 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
                            int64_t r14_16 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                            arg8[0].o = _mm256_extracti128_si256(arg8, 1)
                            float rsi_32 = arg8[0]
                            int64_t rdx_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 1))
                            int32_t rcx_46 = __vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 2)
                            int64_t rdi_38 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg8[0].o, 3))
                            arg8[0].o = zx.o(*(arg4 + sx.q(rcx_45)))
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r10_10), 1)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                *(arg4 + sx.q(rbx_22)), 2)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + r14_16), 3)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                *(arg4 + sx.q(rsi_32)), 4)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdx_26), 5)
                            arg8[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, 
                                *(arg4 + sx.q(rcx_46)), 6)
                            arg8[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(arg8[0].o, *(arg4 + rdi_38), 7)
                            arg9[0].o = zx.o(0)
                            zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_52, zmm0, 4)
                            float rcx_48 = zmm0[0]
                            int64_t r10_11 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t rbx_24 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int64_t r14_17 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                            float rsi_34 = zmm0[0]
                            int64_t rdx_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 1))
                            int32_t rcx_49 = __vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 2)
                            int64_t rdi_41 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm0[0].o, 3))
                            zmm0[0].o = zx.o(*(arg4 + sx.q(rcx_48)))
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r10_11), 1)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rbx_24)), 2)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + r14_17), 3)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rsi_34)), 4)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdx_29), 5)
                            zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, 
                                *(arg4 + sx.q(rcx_49)), 6)
                            zmm0[0].o =
                                __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg4 + rdi_41), 7)
                            arg6 = _mm256_cvtepu16_epi32(arg6[0].o)
                            arg10 = __vpbroadcastd_ymmqq_memd(0xffff8001)
                            arg6 = _mm256_add_epi32(arg6, arg10)
                            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                            arg6 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(arg6), arg15)
                            arg8 = _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(arg8[0].o), arg10)), 
                                arg15)
                            zmm0 = _mm256_mask_div_ps(arg5, 
                                _mm256_cvtepi32_ps(_mm256_add_epi32(
                                    _mm256_cvtepu16_epi32(zmm0[0].o), arg10)), 
                                arg15)
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    arg8, arg8), 
                                zmm0, zmm0)
                            arg6 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg9, arg6, 1), arg6)
                            var_4e0_1 = _mm256_mask_storeu_ps(k1_52, arg8)
                            var_4c0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                            var_4a0_1 = _mm256_mask_storeu_ps(k1_52, arg6)
                        case 3
                            int64_t k2_53 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_54
                            char temp0_935
                            temp0_935, k2_54 = _mm256_mmask_i32gather_ps(k2_53, *(arg4 + arg8[0].q))
                            arg10 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 4)
                            int64_t k2_55 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg15[0].o = _mm_mask_xor_epi32(arg5, arg15[0].o, arg15[0].o)
                            int64_t k2_56
                            char temp0_938
                            temp0_938, k2_56 =
                                _mm256_mmask_i32gather_ps(k2_55, *(arg4 + arg10[0].q))
                            arg10 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 8)
                            int64_t k2_57 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
                            int64_t k2_58
                            char temp0_941
                            temp0_941, k2_58 =
                                _mm256_mmask_i32gather_ps(k2_57, *(arg4 + arg10[0].q))
                            arg10 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0xc)
                            int64_t k2_59 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                            int64_t k2_60
                            char temp0_944
                            temp0_944, k2_60 =
                                _mm256_mmask_i32gather_ps(k2_59, *(arg4 + arg10[0].q))
                            arg10 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x10)
                            int64_t k2_61 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
                            int64_t k2_62
                            char temp0_947
                            temp0_947, k2_62 =
                                _mm256_mmask_i32gather_ps(k2_61, *(arg4 + arg10[0].q))
                            arg10 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x14)
                            int64_t k2_63 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
                            int64_t k2_64
                            char temp0_950
                            temp0_950, k2_64 =
                                _mm256_mmask_i32gather_ps(k2_63, *(arg4 + arg10[0].q))
                            arg20 = temp0_950
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg9)
                            int64_t k2_66
                            char temp0_953
                            temp0_953, k2_66 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + zmm0[0].q))
                            arg8 = temp0_953
                            zmm0[0].o = zx.o(0)
                            arg9 = _mm256_srli_epi32(arg8, 0x15)
                            arg10 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg8, 0xa), 0x7ff)
                            arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x3ff)
                            arg21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                            arg9 = _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg9, arg21))
                            arg22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg9 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, arg9, arg22), 
                                arg5, temp0_944, temp0_935)
                            arg6 = _mm256_mask3_fmadd_ps(
                                _mm256_mask_div_ps(arg5, 
                                    _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg10, arg21)), 
                                    arg22), 
                                arg5, temp0_947, temp0_938)
                            arg8 = _mm256_mask3_fmadd_ps(
                                __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                    _mm256_cvtepi32_ps(
                                        __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 
                                        0xfffffe01)), 
                                    0x43ff8000), 
                                arg5, arg20, temp0_941)
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, arg9)
                            arg9 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg9, arg5, 
                                        arg9, 0x3f800000), 
                                    arg6, arg6), 
                                arg8, arg8)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg9, 1), arg9)
                            var_4e0_1 = _mm256_mask_storeu_ps(k1_52, arg6)
                            var_4c0_1 = _mm256_mask_storeu_ps(k1_52, arg8)
                            var_4a0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                        case 4
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg9)
                            int64_t k2_68 = __kmovq_maskmskw_masku64_avx512(k1_52)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_69
                            char temp0_981
                            temp0_981, k2_69 =
                                _mm256_mmask_i32gather_epi32(k2_68, *(arg4 + zmm0[0].q))
                            arg6 = temp0_981
                            zmm0[0].o = zx.o(0)
                            arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_srli_epi32(arg6, 0xa), 0x7ff)
                            arg9 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0x3ff)
                            arg6 = _mm256_srli_epi32(arg6, 0x15)
                            arg10 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
                            arg6 = _mm256_add_epi32(arg6, arg10)
                            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                            arg6 = _mm256_mask_div_ps(arg5, _mm256_cvtepi32_ps(arg6), arg15)
                            arg8 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg8, arg10))
                            arg9 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg9, 
                                0xfffffe01)
                            arg8 = _mm256_mask_div_ps(arg5, arg8, arg15)
                            arg9 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                                _mm256_cvtepi32_ps(arg9), 0x43ff8000)
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, arg6)
                            arg6 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, 
                                        arg6, 0x3f800000), 
                                    arg8, arg8), 
                                arg9, arg9)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, zmm0, arg6, 1), arg6)
                            var_4e0_1 = _mm256_mask_storeu_ps(k1_52, arg8)
                            var_4c0_1 = _mm256_mask_storeu_ps(k1_52, arg9)
                            var_4a0_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                        case 5
                            zmm0 = _mm256_add_epi32(_mm256_add_epi32(arg8, zmm0), arg9)
                            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                            int64_t k2_72
                            char temp0_1007
                            temp0_1007, k2_72 = _mm256_mmask_i32gather_epi32(
                                __kmovq_maskmskw_masku64_avx512(k1_52), *(arg4 + zmm0[0].q))
                            arg8 = temp0_1007
                            zmm0 = _mm256_srli_epi32(arg8, 0x15)
                            arg9 = _mm256_srli_epi32(arg8, 0xa)
                            arg10 = _mm256_srli_epi32(arg8, 5)
                            arg15 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x7f0000)
                            arg16 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                            arg10 = _mm256_mask_or_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, arg10, arg15), 
                                _mm256_mask_and_epi32(arg5, zmm0, arg16))
                            arg17 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                            zmm0 = _mm256_mask_and_epi32(arg5, zmm0, arg17)
                            arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                            zmm0 = arg10 | _mm256_mask_add_epi32(arg5, zmm0, arg19)
                            arg10 = _mm256_mask_or_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, _mm256_slli_epi32(arg8, 6), arg15), 
                                _mm256_mask_and_epi32(arg5, arg9, arg16))
                            arg9 = _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_and_epi32(arg5, arg9, arg17), arg19)
                            arg15 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x1c0)
                            arg9 |= arg10
                            arg8 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                                _mm256_slli_epi32(arg8, 0x11), 0x7e0000) | _mm256_mask_or_epi32(arg5, 
                                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x200), 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg15, 0x1ec0))
                            var_500_1 = _mm256_mask_storeu_ps(k1_52, zmm0)
                            zmm0 = _mm256_fnmadd_ps(
                                _mm256_fnmadd_ps(
                                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, 
                                        zmm0, 0x3f800000), 
                                    arg9, arg9), 
                                arg8, arg8)
                            zmm0 =
                                _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, zmm0, 1), zmm0)
                            goto label_1400fe4c4
                
                arg10 = var_500_1
                arg15 = _mm256_mask_load_ps(arg5, var_4e0_1)
                arg16 = _mm256_mask_load_ps(arg5, var_4c0_1)
                arg17 = _mm256_mask_load_ps(arg5, var_4a0_1)
                arg19 = _mm256_mask3_fmadd_ps(
                    _mm256_mask3_fmadd_ps(
                        _mm256_mask3_fmadd_ps(_mm256_mask_mul_ps(arg5, var_580, arg15), arg5, 
                            var_5a0, arg10), 
                        arg5, var_560, arg16), 
                    arg5, var_540, arg17)
                arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
                int64_t k2_74 = _mm256_cmp_ps_mask(arg5, arg20, arg19, 6)
                arg19 = _mm256_mask_mul_ps(arg5, 
                    _mm256_mask_sub_ps(arg5, 
                        __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f), arg7), 
                    __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k2_74, -1f))
                zmm0 = _mm256_mask_mul_ps(arg5, arg19, var_5a0)
                arg6 = _mm256_mask_mul_ps(arg5, arg19, var_580)
                arg8 = _mm256_mask_mul_ps(arg5, arg19, var_560)
                arg9 = _mm256_mask_mul_ps(arg5, arg19, var_540)
                zmm0 = _mm256_fmadd_ps(zmm0, arg7, arg10)
                arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg7, arg15)
                arg8 = _mm256_mask3_fmadd_ps(arg8, arg5, arg7, arg16)
                arg9 = _mm256_mask3_fmadd_ps(arg9, arg5, arg7, arg17)
                float var_220_1[0x8] = zmm0
                float var_200_1[0x8] = arg6
                float var_1e0_1[0x8] = arg8
                float var_1c0_1[0x8] = arg9
                arg7 = _mm256_mul_ps(arg8, arg8)
                arg8 = _mm256_mul_ps(arg9, arg9)
                arg7 = _mm256_fmadd_ps(arg7, zmm0, zmm0)
                zmm0 = _mm256_add_ps(arg7, _mm256_fmadd_ps(arg8, arg6, arg6))
                int64_t k2_75 =
                    _mm256_cmp_ps_mask(arg5, _mm256_broadcast_ss(9.99999994e-09f), zmm0, 2)
                arg6 = _mm256_broadcast_ss(0.5f)
                arg7 = _mm256_cmpeq_epi32(arg7, arg7)
                arg8 = _mm256_mul_ps(zmm0, arg6)
                float var_120_1[0x8] = arg8
                float var_100_1[0x8] = arg8
                float var_e0_1[0x8] = arg8
                float var_c0_1[0x8] = arg8
                zmm0 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
                arg9 = _mm256_fmadd_ps(_mm256_fnmadd_ps(_mm256_mul_ps(zmm0, zmm0), arg8, arg6), 
                    zmm0, zmm0)
                zmm0 = _mm256_fnmadd_ps(_mm256_mul_ps(arg9, arg9), arg8, arg6)
                arg6 = _mm256_fmadd_ps(arg9, zmm0, arg9)
                zmm0 = _mm256_fmadd_ps(zmm0, arg9, arg9)
                arg8 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_220_1)
                arg9 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_200_1)
                arg6 = __vmulps_ymmqq_ymmqq_memqq(arg6, var_1e0_1)
                arg7 = _mm256_mask_mov_ps(k2_75, arg7)
                zmm0 = __vmulps_ymmqq_ymmqq_memqq(zmm0, var_1c0_1)
                arg8 = _mm256_and_ps(arg8, arg7)
                arg9 = _mm256_and_ps(arg9, arg7)
                arg6 = _mm256_and_ps(arg6, arg7)
                zmm0 = _mm256_and_ps(zmm0, arg7)
                arg7 = __vandnps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 0x3f800000)
                zmm0 = _mm256_or_ps(zmm0, arg7)
                var_5a0 = _mm256_mask_storeu_ps(k1_52, arg8)
                var_580 = _mm256_mask_storeu_ps(k1_52, arg9)
                var_560 = _mm256_mask_storeu_ps(k1_52, arg6)
                var_540 = _mm256_mask_storeu_ps(k1_52, zmm0)
        else
            arg16 = _mm256_mask_mullo_epi32(arg5, arg9, arg15)
            int64_t rsi_22 = sx.q(jump_table_1400fe824[r10_8])
            
            switch (rsi_22)
                case -0x11c4
                    arg6 = _mm256_mask_add_epi32(arg5, _mm256_add_epi32(arg8, zmm0), arg16)
                    uint64_t k2_22 = _cvtu32_mask32(rbx_12)
                    int64_t k3_28 = __kmovq_maskmskw_masku64_avx512(k2_22)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    int64_t k3_29
                    char temp0_611
                    temp0_611, k3_29 = _mm256_mmask_i32gather_ps(k3_28, *(arg4 + arg6[0].q))
                    arg16 = temp0_611
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
                    int64_t k3_30 = __kmovq_maskmskw_masku64_avx512(k2_22)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k3_31
                    char temp0_614
                    temp0_614, k3_31 = _mm256_mmask_i32gather_ps(k3_30, *(arg4 + arg17[0].q))
                    arg19 = temp0_614
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
                    int64_t k3_32 = __kmovq_maskmskw_masku64_avx512(k2_22)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    int64_t k3_33
                    char temp0_617
                    temp0_617, k3_33 = _mm256_mmask_i32gather_ps(k3_32, *(arg4 + arg17[0].q))
                    arg20 = temp0_617
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0xc)
                    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                    int64_t k2_23
                    char temp0_620
                    temp0_620, k2_23 = _mm256_mmask_i32gather_ps(k2_22, *(arg4 + arg6[0].q))
                    arg17 = temp0_620
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, arg16)
                    var_580 = _mm256_mask_storeu_ps(k1_51, arg19)
                    var_560 = _mm256_mask_storeu_ps(k1_51, arg20)
                    var_540 = _mm256_mask_storeu_ps(k1_51, arg17)
                    k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
                    _kortest_mask8_u8(k1_52, k1_52)
                    
                    if (rsi_22 != -0x1400fe824)
                        goto label_1400fde0c
                case -0x10dc
                    arg6 = _mm256_mask_add_epi32(arg5, _mm256_add_epi32(arg8, zmm0), arg16)
                    uint64_t k2_24 = _cvtu32_mask32(rbx_12)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    int64_t k3_35
                    char temp0_633
                    temp0_633, k3_35 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_24), *(arg4 + arg6[0].q))
                    arg16 = temp0_633
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k3_37
                    char temp0_636
                    temp0_636, k3_37 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_24), *(arg4 + arg17[0].q))
                    arg19 = temp0_636
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
                    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                    int64_t k2_25
                    char temp0_639
                    temp0_639, k2_25 = _mm256_mmask_i32gather_ps(k2_24, *(arg4 + arg6[0].q))
                    arg17 = temp0_639
                    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, arg16)
                    arg16 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg16, arg5, arg16, 
                                0x3f800000), 
                            arg5, arg19, arg19), 
                        arg5, arg17, arg17)
                    arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, arg16, 1), arg16)
                label_1400fddde:
                    var_580 = _mm256_mask_storeu_ps(k1_51, arg19)
                    var_560 = _mm256_mask_storeu_ps(k1_51, arg17)
                    var_540 = _mm256_mask_storeu_ps(k1_51, arg6)
                    k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
                    _kortest_mask8_u8(k1_52, k1_52)
                    
                    if (rsi_22 != -0x1400fe824)
                        goto label_1400fde0c
                case -0x1055
                    arg6 = _mm256_add_epi32(arg8, zmm0)
                    arg17 = _mm256_mask_add_epi32(k1_51, arg6, arg16)
                    uint32_t rbx_13 = arg17[0]
                    int64_t r11_8 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg17[0].o, 1))
                    int32_t rsi_24 = __vpextrd_gpr32u32_xmmu32_imm8_avx512(arg17[0].o, 2)
                    int64_t r15_1 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg17[0].o, 3))
                    zmm7 = _mm256_extracti32x4_epi32(arg5, arg17, 1)
                    uint32_t rdx_11 = zmm7[0]
                    int64_t rdi_26 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7, 1))
                    int32_t rbx_14 = __vpextrd_gpr32d_xmmdq_immb(zmm7, 2)
                    int64_t rcx_35 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm7, 3))
                    zmm7 = __vpinsrw_xmmdq_xmmdq_memw_immb(
                        __vpinsrw_xmmdq_xmmdq_memw_immb(
                            __vpinsrw_xmmdq_xmmdq_memw_immb(
                                __vpinsrw_xmmdq_xmmdq_memw_immb(
                                    __vpinsrw_xmmdq_xmmdq_memw_immb(
                                        __vpinsrw_xmmdq_xmmdq_memw_immb(
                                            __vpinsrw_xmmdq_xmmdq_memw_immb(
                                                zx.o(*(arg4 + sx.q(rbx_13))), *(arg4 + r11_8), 1), 
                                            *(arg4 + sx.q(rsi_24)), 2), 
                                        *(arg4 + r15_1), 3), 
                                    *(arg4 + sx.q(rdx_11)), 4), 
                                *(arg4 + rdi_26), 5), 
                            *(arg4 + sx.q(rbx_14)), 6), 
                        *(arg4 + rcx_35), 7)
                    arg6 = _mm256_mask_add_epi32(arg5, arg6, arg16)
                    arg16 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_51, arg6, 2)
                    float rcx_36 = arg16[0]
                    int64_t r11_9 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg16[0].o, 1))
                    int32_t rbx_16 = __vpextrd_gpr32u32_xmmu32_imm8_avx512(arg16[0].o, 2)
                    int64_t r15_2 = sx.q(__vpextrd_gpr32u32_xmmu32_imm8_avx512(arg16[0].o, 3))
                    arg11[0].o = _mm256_extracti32x4_epi32(arg5, arg16, 1)
                    float rsi_26 = arg11[0]
                    int64_t rdx_15 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 1))
                    int32_t rcx_37 = __vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 2)
                    int64_t rdi_29 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg11[0].o, 3))
                    arg11[0].o = zx.o(*(arg4 + sx.q(rcx_36)))
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + r11_9), 1)
                    arg11[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + sx.q(rbx_16)), 2)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + r15_2), 3)
                    arg11[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + sx.q(rsi_26)), 4)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + rdx_15), 5)
                    arg11[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + sx.q(rcx_37)), 6)
                    arg11[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg11[0].o, *(arg4 + rdi_29), 7)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k1_51, arg6, 4)
                    float rcx_39 = arg6[0]
                    int64_t r11_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int32_t rbx_18 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                    int64_t r15_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = _mm256_extracti128_si256(arg6, 1)
                    float rsi_28 = arg6[0]
                    int64_t rdx_18 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
                    int32_t rcx_40 = __vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2)
                    int64_t rdi_32 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
                    arg6[0].o = zx.o(*(arg4 + sx.q(rcx_39)))
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r11_10), 1)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rbx_18)), 2)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + r15_3), 3)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rsi_28)), 4)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdx_18), 5)
                    arg6[0].o =
                        __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + sx.q(rcx_40)), 6)
                    arg6[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg6[0].o, *(arg4 + rdi_32), 7)
                    arg17 = _mm256_mask_cvtepu16_epi32(arg5, zmm7)
                    arg19 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xffff8001)
                    arg17 = _mm256_mask_add_epi32(arg5, arg17, arg19)
                    arg20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 32767f)
                    arg17 = _mm256_mask_div_ps(arg5, _mm256_mask_cvtepi32_ps(arg5, arg17), arg20)
                    arg21 = _mm256_mask_div_ps(arg5, 
                        _mm256_mask_cvtepi32_ps(arg5, 
                            _mm256_mask_add_epi32(arg5, 
                                _mm256_mask_cvtepu16_epi32(arg5, arg11[0].o), arg19)), 
                        arg20)
                    arg6 = _mm256_mask_div_ps(arg5, 
                        _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, 
                            _mm256_cvtepu16_epi32(arg6[0].o), arg19)), 
                        arg20)
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, arg17)
                    arg17 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg17, arg5, arg17, 
                                0x3f800000), 
                            arg5, arg21, arg21), 
                        arg5, arg6, arg6)
                    arg16 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg16, arg17, 1), arg17)
                    var_580 = _mm256_mask_storeu_ps(k1_51, arg21)
                    var_560 = _mm256_mask_storeu_ps(k1_51, arg6)
                    var_540 = _mm256_mask_storeu_ps(k1_51, arg16)
                    k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
                    _kortest_mask8_u8(k1_52, k1_52)
                    
                    if (rsi_22 != -0x1400fe824)
                        goto label_1400fde0c
                case -0xde1
                    uint64_t k2_28 = _cvtu32_mask32(rbx_12)
                    int64_t k3_39
                    char temp0_716
                    temp0_716, k3_39 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg8[0].q))
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 4)
                    arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
                    int64_t k3_41
                    char temp0_719
                    temp0_719, k3_41 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg17[0].q))
                    arg19 = temp0_719
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 8)
                    arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
                    int64_t k3_43
                    char temp0_722
                    temp0_722, k3_43 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg17[0].q))
                    arg20 = temp0_722
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0xc)
                    arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
                    int64_t k3_45
                    char temp0_725
                    temp0_725, k3_45 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg17[0].q))
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x10)
                    arg22[0].o = _mm_mask_xor_epi32(arg5, arg22[0].o, arg22[0].o)
                    int64_t k3_47
                    char temp0_728
                    temp0_728, k3_47 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg17[0].q))
                    arg17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg8, 0x14)
                    zmm24[0].o = _mm_mask_xor_ps(arg5, zmm24[0].o, zmm24[0].o)
                    int64_t k3_49
                    char temp0_731
                    temp0_731, k3_49 = _mm256_mmask_i32gather_ps(
                        __kmovq_maskmskw_masku64_avx512(k2_28), *(arg4 + arg17[0].q))
                    arg17 = _mm256_mask_add_epi32(arg5, arg8, zmm0)
                    arg16 = _mm256_mask_add_epi32(arg5, arg17, arg16)
                    arg17[0].o = _mm_mask_xor_epi32(arg5, arg17[0].o, arg17[0].o)
                    int64_t k2_29
                    char temp0_735
                    temp0_735, k2_29 = _mm256_mmask_i32gather_epi32(k2_28, *(arg4 + arg16[0].q))
                    arg17 = temp0_735
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    zmm25 = _mm256_mask_srli_epi32(arg5, arg17, 0x15)
                    arg23 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, arg17, 0xa), 0x7ff)
                    arg17 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg17, 0x3ff)
                    zmm27 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                    zmm25 = _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, zmm25, zmm27))
                    zmm28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    zmm25 = _mm256_mask3_fmadd_ps(_mm256_mask_div_ps(arg5, zmm25, zmm28), arg5, 
                        temp0_725, temp0_716)
                    arg6 = _mm256_mask3_fmadd_ps(
                        _mm256_mask_div_ps(arg5, 
                            _mm256_cvtepi32_ps(_mm256_mask_add_epi32(arg5, arg23, zmm27)), zmm28), 
                        arg5, temp0_728, arg19)
                    arg17 = _mm256_mask3_fmadd_ps(
                        __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                            _mm256_mask_cvtepi32_ps(arg5, 
                                __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg17, 
                                    0xfffffe01)), 
                            0x43ff8000), 
                        arg5, temp0_731, arg20)
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, zmm25)
                    zmm25 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm25, arg5, zmm25, 
                                0x3f800000), 
                            arg5, arg6, arg6), 
                        arg5, arg17, arg17)
                    arg16 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg16, zmm25, 1), zmm25)
                    var_580 = _mm256_mask_storeu_ps(k1_51, arg6)
                    var_560 = _mm256_mask_storeu_ps(k1_51, arg17)
                    var_540 = _mm256_mask_storeu_ps(k1_51, arg16)
                    k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
                    _kortest_mask8_u8(k1_52, k1_52)
                    
                    if (rsi_22 != -0x1400fe824)
                        goto label_1400fde0c
                case -0xc45
                    arg6 = _mm256_mask_add_epi32(arg5, _mm256_add_epi32(arg8, zmm0), arg16)
                    int64_t k2_31 = _cvtu32_mask32(rbx_12)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    int64_t k2_32
                    char temp0_766
                    temp0_766, k2_32 = _mm256_mmask_i32gather_epi32(k2_31, *(arg4 + arg6[0].q))
                    arg16 = temp0_766
                    arg6[0].o = zx.o(0)
                    arg17 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_srli_epi32(arg5, arg16, 0xa), 0x7ff)
                    arg19 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg16, 0x3ff)
                    arg16 = _mm256_mask_srli_epi32(arg5, arg16, 0x15)
                    arg20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xfffffc01)
                    arg16 = _mm256_mask_add_epi32(arg5, arg16, arg20)
                    arg21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1023f)
                    arg16 = _mm256_mask_div_ps(arg5, _mm256_mask_cvtepi32_ps(arg5, arg16), arg21)
                    arg17 = _mm256_mask_cvtepi32_ps(arg5, _mm256_mask_add_epi32(arg5, arg17, arg20))
                    arg19 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg19, 0xfffffe01)
                    arg17 = _mm256_mask_div_ps(arg5, arg17, arg21)
                    arg19 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                        _mm256_mask_cvtepi32_ps(arg5, arg19), 0x43ff8000)
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, arg16)
                    arg16 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg16, arg5, arg16, 
                                0x3f800000), 
                            arg5, arg17, arg17), 
                        arg5, arg19, arg19)
                    arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg6, arg16, 1), arg16)
                    var_580 = _mm256_mask_storeu_ps(k1_51, arg17)
                    var_560 = _mm256_mask_storeu_ps(k1_51, arg19)
                    var_540 = _mm256_mask_storeu_ps(k1_51, arg6)
                    k1_52 = _mm256_cmp_epi32_mask(k1_51, arg9, arg10, 4)
                    _kortest_mask8_u8(k1_52, k1_52)
                    
                    if (rsi_22 != -0x1400fe824)
                        goto label_1400fde0c
                case -0xb59
                    arg6 = _mm256_mask_add_epi32(arg5, _mm256_add_epi32(arg8, zmm0), arg16)
                    int64_t k2_34 = _cvtu32_mask32(rbx_12)
                    arg16[0].o = _mm_mask_xor_epi32(arg5, arg16[0].o, arg16[0].o)
                    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
                    int64_t k2_35
                    char temp0_794
                    temp0_794, k2_35 = _mm256_mmask_i32gather_epi32(k2_34, *(arg4 + arg6[0].q))
                    arg17 = temp0_794
                    arg6 = _mm256_mask_srli_epi32(arg5, arg17, 0x15)
                    arg19 = _mm256_mask_srli_epi32(arg5, arg17, 0xa)
                    arg20 = _mm256_mask_srli_epi32(arg5, arg17, 5)
                    arg21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x7f0000)
                    arg22 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x400)
                    arg20 = _mm256_mask_or_epi32(arg5, _mm256_mask_and_epi32(arg5, arg20, arg21), 
                        _mm256_mask_and_epi32(arg5, arg6, arg22))
                    zmm24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x380)
                    arg6 = _mm256_mask_and_epi32(arg5, arg6, zmm24)
                    zmm25 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0x3d80)
                    arg6 =
                        _mm256_mask_or_epi32(arg5, arg20, _mm256_mask_add_epi32(arg5, arg6, zmm25))
                    arg20 = _mm256_mask_or_epi32(arg5, 
                        _mm256_mask_and_epi32(arg5, _mm256_mask_slli_epi32(arg5, arg17, 6), arg21), 
                        _mm256_mask_and_epi32(arg5, arg19, arg22))
                    arg19 = _mm256_mask_add_epi32(arg5, _mm256_mask_and_epi32(arg5, arg19, zmm24), 
                        zmm25)
                    arg21 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg17, 0x1c0)
                    arg19 = _mm256_mask_or_epi32(arg5, arg20, arg19)
                    arg20 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
                        _mm256_mask_slli_epi32(arg5, arg17, 0x11), 0x7e0000)
                    arg17 = _mm256_mask_or_epi32(arg5, arg20, 
                        _mm256_mask_or_epi32(arg5, 
                            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg17, 0x200), 
                            __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg21, 0x1ec0)))
                    var_5a0 = _mm256_mask_storeu_ps(k1_51, arg6)
                    arg6 = _mm256_mask3_fnmadd_ps(
                        _mm256_mask3_fnmadd_ps(
                            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg6, 
                                0x3f800000), 
                            arg5, arg19, arg19), 
                        arg5, arg17, arg17)
                    arg6 = _mm256_mask_sqrt_ps(_mm256_cmp_ps_mask(arg5, arg16, arg6, 1), arg6)
                    goto label_1400fddde
    
    zmm0[0].o = var_5a0[0].o
    arg15[0].o = _mm_mask_load_epi64(arg5, var_5a0[4].o)
    arg8[0].o = var_580[0].o
    arg9[0].o = var_580[4].o
    arg10[0].o = var_560[0].o
    zmm7 = var_560[4].o
    arg11[0].o = var_540[0].o
    int128_t var_530
    arg6[0].o = var_530
    arg7[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
    arg10[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(arg10[0].o, arg11[0].o)
    arg11[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
    zmm0[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
    arg8[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
    int128_t var_2c0 = arg8[0].o
    arg7[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg11[0].o, arg7[0].o)
    int128_t var_2b0_1 = arg7[0].o
    arg7[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
    int128_t var_2a0_1 = arg7[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
    int128_t var_290_1 = zmm0[0].o
    zmm0[0].o = __vpunpckldq_xmmdq_xmmdq_xmmdq(zmm7, arg6[0].o)
    arg6[0].o = __vpunpckhdq_xmmdq_xmmdq_xmmdq(zmm7, arg6[0].o)
    arg7[0].o = _mm_mask_unpacklo_epi32(arg5, arg15[0].o, arg9[0].o)
    arg8[0].o = _mm_mask_unpackhi_epi32(arg5, arg15[0].o, arg9[0].o)
    arg9[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
    int128_t var_280_1 = arg9[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
    int128_t var_270_1 = zmm0[0].o
    zmm0[0].o = __vpunpcklqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int128_t var_260_1 = zmm0[0].o
    zmm0[0].o = __vpunpckhqdq_xmmdq_xmmdq_xmmdq(arg8[0].o, arg6[0].o)
    int128_t var_250_1 = zmm0[0].o
    uint64_t i_1 = zx.q(i_2)
    
    do
        uint64_t rcx_51 = _tzcnt_u64(i_1)
        int256_t var_240 = _mm256_mask_store_epi64(arg5, temp0_558)
        zmm0[0].o = (&var_2c0)[rcx_51]
        arg1[sx.q(*(&var_240 + ((zx.q(rcx_51.d) & 7) << 2))) * 3] = zmm0[0].o
        i_1 &= rol.q(-2, rcx_51.b)
    while (i_1 != 0)

arg11[0].o = var_98
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
_mm256_zeroupper()
return arg1
