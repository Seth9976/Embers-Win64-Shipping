// 函数: sub_1400e9fb0
// 地址: 0x1400e9fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
uint32_t var_78[0x4] = arg9
float var_88[0x4] = arg8
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t var_b8[0x4] = arg7
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint64_t result = zx.q(arg19)

if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm14 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
    zmm11 = data_142d3f7b0
    arg7 = __vxorps_xmmdq_xmmdq_xmmdq(arg7, arg7)
    int64_t r13_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg17 + (r13_1 << 1)))
        int64_t r14_1 = sx.q(*(arg18 + r13_1))
        float zmm0[0x8]
        zmm0[0].o = *(arg2 + (rbp_1 << 2))
        zmm8 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm10 = *(arg2 + (rbp_1 << 2) + 0x20)
        _mm256_zeroupper()
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        float zmm4[0x4] = *rax_5
        float zmm16[0x4] = _mm_mask_load_ps(arg5, rax_5[1])
        zmm15 = rax_5[2]
        int32_t rax_10
        int32_t rsi_1
        int32_t r8_1
        int32_t r9
        int32_t r10_1
        int32_t r11_1
        float zmm1[0x8]
        uint32_t zmm3[0x8]
        float zmm5[0x4]
        float zmm19[0x4]
        uint32_t zmm26[0x8]
        
        if (r14_1 == -1)
            arg6 = __vxorps_xmmdq_xmmdq_xmmdq(arg6, arg6)
            zmm26 = _mm256_mask_loadu_ps(arg5, zmm0)
            zmm0[0].o = _mm_mask_mul_ps(arg5, zmm26[0].o, arg6)
            zmm1[0].o = __vpbroadcastq_xmmdq_memq(0x3f800000bf800000)
            zmm5 = _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o), 0x1b)
            zmm5 = _mm_mask_add_ps(arg5, zmm26[0].o, zmm5)
            zmm3[0].o = data_143442130
            zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o), 1), zmm5)
            zmm7 = data_142fc92f0
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm19 = _mm_mask_add_ps(arg5, zmm0[0].o, zmm5)
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg6)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm3[0].o), 1), zmm1[0].o)
            zmm5 = _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm7), 0xb1)
            zmm6 = _mm_broadcast_ss(1f)
            int128_t var_168
            zmm0[0].o = var_168
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0[0].o, 8)
            float var_178[0x4]
            arg6 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_178, 8)
            var_168 = zmm0[0].o
            var_178 = arg6
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            r11_1 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm1[0].o)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            int128_t var_188
            zmm0[0].o = var_188
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0[0].o, 8)
            float var_198[0x4]
            arg6 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, var_198, 8)
            var_188 = zmm0[0].o
            var_198 = arg6
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            r8_1 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0)
            r9 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            r10_1 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
        else
            zmm26 = _mm256_mask_loadu_ps(arg5, zmm0)
            zmm0[0].o = _mm_mask_permute_ps(arg5, zmm26[0].o, 0x1b)
            zmm0[0].o =
                __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, arg4[r14_1][0])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm14)
            zmm1[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm1[0].o, arg5, 
                zmm26[0].o, arg4[r14_1][3])
            zmm0[0].o = _mm_mask_permute_pd(arg5, zmm26[0].o, 1)
            zmm5 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, arg4[r14_1][1])
            zmm0[0].o = _mm_mask_permute_ps(arg5, zmm26[0].o, 0xb1)
            zmm19 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, arg4[r14_1][2])
            zmm0[0].o = data_142d3f7d0
            zmm19 = _mm_mask3_fmadd_ps(zmm19, arg5, zmm11, _mm_fmadd_ps(zmm5, zmm0[0].o, zmm1[0].o))
            zmm1[0].o = _mm_permute_ps(zmm4, 0x1b)
            zmm1[0].o =
                __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, arg12[r14_1][0])
            zmm5 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm14), arg5, zmm4, arg12[r14_1][3])
            zmm1[0].o = _mm_permute_pd(zmm4, 1)
            zmm6 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, arg12[r14_1][1])
            zmm1[0].o = _mm_permute_ps(zmm4, 0xb1)
            zmm1[0].o =
                __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, arg12[r14_1][2])
            float (* rax_9)[0x4] = arg11
            arg6 = zmm11
            zmm11 = (*rax_9)[r14_1 * 3]
            zmm6 = _mm_fmadd_ps(zmm6, zmm0[0].o, zmm5)
            float var_138[0x4]
            zmm5 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm11, var_138, 0xe)
            zmm11 = arg6
            arg6 = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5, (*rax_9)[r14_1 * 3 + 1], 0x10), 
                (*rax_9)[r14_1 * 3 + 2], 0x20)
            int128_t var_128
            zmm0[0].o = var_128
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm0[0].o, 8)
            var_128 = zmm0[0].o
            var_138 = arg6
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            r11_1 = __vextractps_gpr32_xmmdq_immb(zmm5, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(zmm5, 1)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm11, zmm6)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(zmm5, 2)
            float var_158[0x4]
            arg6 = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*arg13)[r14_1 * 3], var_158, 0xe), 
                    (*arg13)[r14_1 * 3 + 1], 0x10), 
                (*arg13)[r14_1 * 3 + 2], 0x20)
            int128_t var_148
            zmm0[0].o = var_148
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm0[0].o, 8)
            var_148 = zmm0[0].o
            var_158 = arg6
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            r8_1 = __vextractps_gpr32_xmmdq_immb(zmm5, 0)
            r9 = __vextractps_gpr32_xmmdq_immb(zmm5, 1)
            r10_1 = __vextractps_gpr32_xmmdq_immb(zmm5, 2)
        
        zmm3[0].o = __vmaxss_xmmdq_xmmdq_memd(arg7, *(arg17 + (r13_1 << 1) + 4))
        zmm0[0].o = 0x3f800000
        zmm5 = __vminss_xmmdq_xmmdq_xmmd(zmm3[0].o, 1f)
        zmm3[0].o = __vmaxss_xmmdq_xmmdq_memd(zmm5, *(arg16 + (rdi_1 << 2)))
        *(arg16 + (rdi_1 << 2)) = zmm3[0]
        int32_t rcx_5
        int32_t rdx_2
        int32_t rdi_2
        
        if (zmm5 f<= 9.99999975e-06f)
            arg6 = _mm_mask_mov_ps(arg5, zmm19)
            rdx_2 = rsi_1
            rcx_5 = rax_10
            rdi_2 = r11_1
        else if (zmm5 f>= 0.999989986f)
            zmm10 = zmm15
            zmm8 = _mm_mask_mov_ps(arg5, zmm16)
            zmm26[0].o = _mm_mask_mov_ps(arg5, zmm4)
            arg6 = zmm1[0].o
            rdx_2 = r10_1
            rcx_5 = r9
            rdi_2 = r8_1
        else
            float zmm20[0x4] = _mm_mask_load_ss(arg5, 1f)
            float zmm17[0x4] = _mm_mask_sub_round_ss(arg5, zmm20, zmm5)
            zmm3[0].o = _mm_mask_mul_ps(arg5, zmm26[0].o, zmm4)
            zmm6 = _mm_permute_pd(zmm3[0].o, 1)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6)
            zmm6 = _mm_permute_ps(zmm3[0].o, 0x39)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(0x3f800000, 0x3f800000)
            int64_t k1_1 = _mm_cmp_ps_mask(arg5, zmm0[0].o, zmm3[0].o, 2)
            zmm3[0].o = _mm_mask_sub_ps(arg5, zmm0[0].o, zmm26[0].o)
            zmm3[0].o = _mm_mask_xor_ps(arg5, _mm256_mask_xor_ps(k1_1, zmm3, zmm26).o, zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_mask_broadcastss_ps(arg5, zmm17), zmm3[0].o)
            zmm6 = _mm_broadcastss_ps(zmm5)
            zmm4 = _mm_fmadd_ps(zmm4, zmm6, zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
            arg6 = _mm_permute_pd(zmm3[0].o, 1)
            arg6 = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg6)
            arg6 = arg6 f+ zmm3[0]
            zmm0[0].o = 0x322bcc77
            float zmm22[0x4] = _mm_mask_mov_ps(arg5, 0x322bcc77)
            int64_t k1_2 = _mm_cmp_round_ss_mask(arg5, 0x322bcc77, arg6, 6)
            float zmm23[0x4] = _mm_mask_load_ss(arg5, -nanf)
            zmm3[0].o = _mm_mask_mov_ps(arg5, zmm23)
            arg10 = _mm_mask_xor_ps(arg5, arg10, arg10)
            zmm3[0].o = _mm_mask_move_ss(k1_2, 0x322bcc77, arg10)
            zmm0[0].o = 0x3f000000
            float zmm24[0x4] = _mm_mask_mov_ps(arg5, 0x3f000000)
            zmm7 = arg6 f* 0.5f
            arg6 = __vrsqrtss_xmmdq_xmmdq_xmmd(arg6, arg6[0])
            zmm0[0].o = arg6 f* arg6[0]
            zmm0[0].o = _mm_fnmadd_round_ss(zmm0[0].o, arg5, zmm7, zmm24)
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg6[0], arg6[0])
            zmm0[0].o = _mm_broadcastss_ps(_mm_fmadd_ss(
                _mm_fnmadd_round_ss(zmm0[0].o f* zmm0[0], arg5, zmm7, zmm24), zmm0[0], zmm0[0]))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
            arg6 = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            zmm3[0].o = data_142d3f660
            uint32_t zmm25[0x4] = _mm_mask_mov_ps(arg5, zmm3[0].o)
            arg6 = __vandnps_xmmdq_xmmdq_xmmdq(arg6, zmm3[0].o)
            zmm26[0].o = _mm_mask_or_ps(arg5, zmm0[0].o, arg6)
            zmm0[0].o = _mm_mask_sub_ps(arg5, zmm16, zmm8)
            zmm8 = _mm_fmadd_ps(zmm8, zmm6, zmm0[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm15, zmm10)
            zmm10 = _mm_fmadd_ps(zmm10, zmm6, zmm0[0].o)
            zmm0[0].o = _mm_mask_movehdup_ps(arg5, zmm19)
            arg6 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm0[0].o = zmm0[0].o f* arg6[0]
            zmm0[0].o = _mm_mask3_fmadd_round_ss(zmm0[0].o, arg5, zmm19, zmm1[0].o)
            arg6 = _mm_mask_permute_pd(arg5, zmm19, 1)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg6[0], zmm0[0])
            zmm0[0].o = _mm_mask_permute_ps(arg5, zmm19, 0xe7)
            int64_t k1_3 = _mm_cmp_round_ss_mask(arg5, arg10, 
                _mm_fmadd_ss(_mm_permute_ps(zmm1[0].o, 0xe7), zmm0[0], zmm3[0]), 2)
            zmm0[0].o = 0xbf800000
            zmm0[0].o = _mm_mask_move_ss(k1_3, 0xbf800000, zmm20)
            zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm17)
            zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
            zmm0[0].o = _mm_mask_mul_ps(arg5, zmm19, zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm6)
            arg6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_pd(arg6, 1)
            arg6 = __vaddps_xmmdq_xmmdq_xmmdq(arg6, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg6)
            arg6 = arg6 f+ zmm3[0]
            int64_t k1_4 = _mm_cmp_round_ss_mask(arg5, zmm22, arg6, 6)
            zmm3[0].o = _mm_mask_mov_ps(arg5, zmm23)
            arg7 = __vxorps_xmmdq_xmmdq_xmmdq(arg7, arg7)
            zmm3[0].o = _mm_mask_move_ss(k1_4, zmm0[0].o, arg10)
            zmm4 = _mm_mask_mul_round_ss(arg5, arg6, zmm24)
            arg6 = __vrsqrtss_xmmdq_xmmdq_xmmd(arg6, arg6[0])
            zmm7 = _mm_fmadd_ss(_mm_fnmadd_round_ss(arg6 f* arg6[0], arg5, zmm4, zmm24), arg6[0], 
                arg6[0])
            arg6 = _mm_broadcastss_ps(_mm_fmadd_ss(
                _mm_fnmadd_round_ss(zmm7 f* zmm7[0], arg5, zmm4, zmm24), zmm7[0], zmm7[0]))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            arg6 = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            arg6 = _mm_mask_andnot_ps(arg5, arg6, zmm25)
            arg6 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6)
            zmm0[0].o = zx.o(r8_1)
            float var_1e8[0x4]
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1e8, 0xe)
            zmm3[0].o = zx.o(r9)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
            zmm3[0].o = zx.o(r10_1)
            zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
            zmm0[0].o = zx.o(r11_1)
            uint32_t var_1f8[0x4]
            zmm3[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1f8, 0xe)
            zmm4 = zx.o(rax_10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4, 0x10)
            zmm7 = zx.o(rsi_1)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm7, 0x20)
            var_1e8 = zmm6
            var_1f8 = zmm3[0].o
            zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, zmm3[0].o)
            float var_1a8[0x4]
            zmm6 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, var_1a8, 8)
            float var_1b8[0x4]
            zmm3[0].o = __vshufps_xmmdq_xmmdq_memdq_immb(zmm5, var_1b8, 0xe0)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5, 0x20)
            var_1a8 = zmm6
            var_1b8 = zmm3[0].o
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm3[0].o)
            float var_1d8[0x4]
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1d8, 0xe)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x10)
            zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7, 0x20)
            int128_t var_1c8
            zmm0[0].o = var_1c8
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 8)
            var_1c8 = zmm0[0].o
            var_1d8 = zmm4
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
            rdi_2 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
            rcx_5 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            rdx_2 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
        
        *(arg4 + (r13_1 << 2)) = _mm_mask_store_ps(arg5, zmm19)
        *(arg12 + (r13_1 << 2)) = zmm1[0].o
        *(arg11 + rbp_1) = r11_1
        *(arg11 + rbp_1 + 4) = rax_10
        *(arg11 + rbp_1 + 8) = rsi_1
        *(arg13 + rbp_1) = r8_1
        *(arg13 + rbp_1 + 4) = r9
        *(arg13 + rbp_1 + 8) = r10_1
        float (* rbx_3)[0x4]
        int32_t* rsi_2
        
        if (r14_1.d == 0xffffffff)
            rsi_2 = arg15
            rbx_3 = arg14
        else
            rbx_3 = arg14
            zmm0[0].o = data_142d3f690
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, rbx_3[r14_1])
            zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm3[0].o = _mm_broadcastss_ps(zmm0[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg6, 0x1b), zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
            zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, arg6, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg6, 1), zmm1[0].o)
            zmm1[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm1[0].o, zmm3[0].o, data_142d3f7d0)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
            zmm3[0].o = _mm_permute_ps(arg6, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm11)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm3[0].o = 0x322bcc77
            int64_t k1_5 = _mm_cmp_round_ss_mask(arg5, 0x322bcc77, zmm1[0].o, 6)
            zmm3[0].o = 0xffffffff
            zmm3[0].o = _mm_mask_move_ss(k1_5, zmm0[0].o, arg7)
            zmm4 = zmm1[0].o f* 0.5f
            zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm5 =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm1[0].o f* zmm1[0], zmm4[0], 0.5f), zmm1[0], zmm1[0])
            zmm1[0].o = zmm5 f* zmm5[0]
            zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm4[0], 0.5f)
            zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm5[0], zmm5[0])
            zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
            zmm26[0].o = _mm_mask_or_ps(arg5, zmm0[0].o, zmm1[0].o)
            int64_t rax_14 = r14_1 * 3
            rsi_2 = arg15
            zmm0[0].o = rsi_2[rax_14 + 2]
            zmm1[0].o = __vmovsd_xmmdq_memq(*(rsi_2 + (rax_14 << 2)))
            zmm0[0].o = zmm1[0].q | zmm0[0].q << 0x40
            zmm1 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0x7fffffff)
            zmm3 = _mm256_broadcastss_ps(0x322bcc77)
            int64_t k1_6 = _mm256_cmp_ps_mask(arg5, zmm1, zmm3, 6)
            zmm1 = _mm256_mask_rcp14_ps(arg5, zmm0)
            zmm0 = _mm256_mask_mul_ps(k1_6, zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm1, 0x40000000))
            arg8 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg8, 8)
            zmm0[0].o = zx.o(rdi_2)
            zmm0[0].o = _mm_blend_epi32(arg9, zmm0[0].o, 1)
            zmm1[0].o = zx.o(rcx_5)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
            zmm1[0].o = zx.o(rdx_2)
            arg9 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg9, arg8)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm10 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 8)
        
        *(rbx_3 + (r13_1 << 2)) = arg6
        *(rsi_2 + rbp_1) = rdi_2
        *(rsi_2 + rbp_1 + 4) = rcx_5
        *(rsi_2 + rbp_1 + 8) = rdx_2
        result = arg1
        *(result + (rbp_1 << 2)) = _mm_mask_store_ps(arg5, zmm26[0].o)
        *(result + (rbp_1 << 2) + 0x10) = zmm8
        *(result + (rbp_1 << 2) + 0x20) = zmm10
        r12_1 += 1
        r13_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)

_mm256_zeroupper()
return result
