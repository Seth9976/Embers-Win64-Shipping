// 函数: sub_1403398e0
// 地址: 0x1403398e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm13
int128_t var_58 = zmm13
int128_t var_68 = arg11[0].o
int128_t var_78 = arg10[0].o
int128_t var_88 = arg9[0].o
int128_t var_98 = arg8[0].o
int32_t var_a8[0x4] = arg7
int128_t var_b8 = arg6[0].o
uint128_t zmm6
uint128_t var_c8 = zmm6
uint64_t result = zx.q(arg17)

if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    float zmm16[0x4] = _mm_mask_load_ps(arg5, data_142d3f7c0)
    float zmm17[0x4] = _mm_mask_load_ps(arg5, data_142d3f7d0)
    arg13[0].o = _mm_mask_xor_ps(arg5, arg13[0].o, arg13[0].o)
    float zmm18[0x4] = _mm_mask_load_ps(arg5, data_142d3f7b0)
    float zmm19[0x4] = _mm_mask_load_ss(arg5, 9.99999994e-09f)
    arg14 = _mm_mask_xor_ps(arg5, arg14, arg14)
    float zmm20[0x4] = _mm_mask_load_ss(arg5, -nanf)
    float zmm31[0x4] = _mm_mask_load_ss(arg5, 0.5f)
    uint32_t zmm27[0x4] = _mm_mask_load_ps(arg5, data_142d3f660)
    float zmm28[0x4] = _mm_mask_load_ss(arg5, 1f)
    float zmm29[0x4] = _mm_mask_broadcastss_ps(arg5, zmm28)
    arg7 = __vxorps_xmmdq_xmmdq_xmmdq(arg7, arg7)
    arg8 = data_143443080
    arg12 = _mm_mask_xor_ps(arg5, arg12, arg12)
    float zmm25[0x4] = _mm_mask_load_ss(arg5, -9.99999994e-09f)
    
    do
        result = zx.q(*(arg3 + (rsi_1 << 1)))
        *(arg4 + sx.q(result.d * arg15 + arg16))
        arg6[0].o = arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3]
        arg11[0].o = arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3 + 1]
        float zmm22[0x8]
        zmm22[0].o =
            _mm_mask_load_ps(arg5, arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3 + 2])
        uint64_t rbx_1 = result * 3
        uint64_t rbx_2 = rbx_1 << 4
        bool c_1 = (rbx_1 & 0x1000000000000000) != 0
        float zmm0[0x8]
        zmm0[0].o = *(arg2 + rbx_2)
        float zmm4[0x4] = *(arg2 + rbx_2 + 0x10)
        float zmm23[0x8]
        zmm23[0].o = _mm_mask_load_ps(arg5, *(arg2 + rbx_2 + 0x20))
        arg5 = _mm256_cmp_ps_mask(arg5, zmm23, arg13, 1)
        _kortest_mask8_u8(arg5, _mm256_cmp_ps_mask(arg5, zmm22, arg13, 1))
        float zmm1[0x8]
        int256_t zmm2
        float zmm3[0x8]
        float zmm5[0x8]
        
        if ((rbx_1 & 0xfffffffffffffff) == 0)
            zmm1[0].o = _mm_permute_ps(arg6[0].o, 0xff)
            zmm2.o = _mm_broadcastss_ps(arg6[0].o)
            zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x1b)
            zmm2.o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2.o, zmm3[0].o)
            zmm2.o = _mm_mask_mul_ps(arg5, zmm2.o, zmm16)
            zmm2.o = _mm_fmadd_ps(zmm2.o, zmm1[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0x55)
            zmm5[0].o = _mm_permute_pd(zmm0[0].o, 1)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg5, zmm2.o, zmm17)
            zmm2.o = _mm_permute_ps(arg6[0].o, 0xaa)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm2.o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2.o, zmm0[0].o)
            zmm2.o = _mm_mask3_fmadd_ps(zmm2.o, arg5, zmm3[0].o, zmm18)
            zmm0[0].o = _mm_mask_mul_ps(arg5, zmm22[0].o, zmm4)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0xc9)
            zmm4 = _mm_permute_ps(zmm0[0].o, 0xd2)
            zmm5[0].o = _mm_permute_ps(arg6[0].o, 0xd2)
            arg6[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
            arg6[0].o = _mm_fmsub_ps(arg6[0].o, zmm3[0].o, zmm4)
            zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm4, zmm0[0].o)
            zmm0[0].o = _mm_permute_ps(zmm4, 0xd2)
            zmm4 = _mm_permute_ps(zmm4, 0xc9)
            zmm4 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4), zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm22[0].o = _mm_mask_mul_ps(arg5, zmm22[0].o, zmm23[0].o)
        else
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2.o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm3[0].o = _mm_permute_ps(zmm2.o, 1)
            zmm2.o = _mm_permute_ps(zmm2.o, 0x1a)
            zmm2.o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2.o)
            zmm2.o = _mm_mask_sub_ps(arg5, zmm29, zmm2.o)
            arg9[0].o = _mm_mask_mul_ps(arg5, zmm23[0].o, zmm2.o)
            zmm2.o = _mm_permute_ps(zmm0[0].o, 4)
            zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2.o, zmm3[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm2.o = _mm_mask_mul_ps(arg5, zmm23[0].o, zmm1[0].o)
            zmm1[0].o = _mm_mask_permute_ps(arg5, zmm23[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = _mm_permute_pd(zmm2.o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7, arg9[0].o, 1)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2.o, 0x10)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm3[0].o, 4)
            zmm5 = _mm256_blend_ps(zmm1, zmm5, 0xf)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg9[0].o, 2)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2.o, 0x60)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            zmm0 = _mm256_blend_ps(arg8, zmm0, 1)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 2)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg9[0].o, 4)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm0[0].o, 8)
            zmm0 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1)
            float var_140_1[0x8] = zmm1
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            zmm4 = _mm_permute_ps(zmm1[0].o, 0xc1)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xda)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm1[0].o = _mm_mask_sub_ps(arg5, zmm29, zmm1[0].o)
            zmm1[0].o = _mm_mask_mul_ps(arg5, zmm22[0].o, zmm1[0].o)
            zmm4 = _mm_permute_ps(arg6[0].o, 4)
            zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0x29)
            zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm5[0].o)
            zmm5[0].o = _mm_permute_ps(arg6[0].o, 0xff)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x12)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
            zmm5[0].o = _mm_mask_mul_ps(arg5, zmm22[0].o, zmm5[0].o)
            arg6[0].o = _mm_mask_permute_ps(arg5, zmm22[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
            zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            arg6[0].o = _mm_permute_pd(zmm5[0].o, 1)
            arg10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7, zmm1[0].o, 1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg10[0].o, zmm5[0].o, 0x10)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 4)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vblendps_xmmdq_xmmdq_xmmdq_immb(
                    __vblendps_xmmdq_xmmdq_xmmdq_immb(_mm256_extractf128_ps(arg10[0].o, 1), zmm4, 
                        1), 
                    zmm1[0].o, 2), 
                zmm5[0].o, 0x60)
            zmm6 = _mm256_blend_ps(arg8, arg6, 1).o
            zmm4 = __vblendps_xmmdq_xmmdq_xmmdq_immb(
                __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4, 2), zmm1[0].o, 4)
            zmm1[0].o = _mm256_extractf128_ps(zmm6, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg11[0].o, zmm1[0].o, 8)
            arg6[0].o = _mm_broadcastss_ps(arg9[0].o)
            zmm6 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_ps(zmm3[0].o, 0xaa)), 
                zmm0[0].o, arg6[0].o)
            float zmm24[0x8]
            zmm24[0].o = _mm_mask_broadcastss_ps(arg5, zmm2.o)
            zmm24[0].o = _mm_mask3_fmadd_ps(zmm24[0].o, arg5, zmm5[0].o, zmm6)
            zmm3[0].o = _mm_broadcastss_ps(zmm3[0].o)
            zmm2.o = _mm_permute_ps(zmm2.o, 0x55)
            zmm2.o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm2.o)
            zmm2.o = _mm_fmadd_ps(zmm2.o, zmm0[0].o, zmm3[0].o)
            int32_t var_12c
            zmm2.o =
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm2.o, arg5, zmm5[0].o, var_12c)
            int32_t var_124
            zmm2.o =
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm2.o, arg5, zmm1[0].o, var_124)
            zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm4, zmm0[2])
            zmm3[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm3[0].o, arg5, 
                zmm0[0].o, zmm0[0])
            zmm3[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm3[0].o, arg5, 
                zmm5[0].o, zmm0[1])
            zmm3[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm3[0].o, arg5, 
                zmm1[0].o, zmm0[3])
            char temp0_107 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm4, zmm0[6]), arg5, 
                        zmm0[0].o, zmm0[4]), 
                    arg5, zmm5[0].o, zmm0[5]), 
                arg5, zmm1[0].o, zmm0[7])
            zmm24[0].o = _mm_mask3_fmadd_ps(zmm24[0].o, arg5, zmm1[0].o, arg12)
            zmm22[0].o = _mm_mask_mul_ps(arg5, zmm22[0].o, zmm23[0].o)
            zmm0[0].o = _mm_mask_movehdup_ps(arg5, zmm24[0].o)
            arg9[0].o = _mm_mask_permute_pd(arg5, zmm24[0].o, 1)
            zmm5[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm2.o, 0))
            arg6[0].o = __vmovshdup_xmmdq_xmmdq(zmm2.o)
            zmm23[0].o = _mm_mask_permute_pd(arg5, zmm2.o, 1)
            result = zx.q(__vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0))
            zmm6 = zx.o(result.d)
            zmm2.o = _mm_blend_epi32(zmm2.o, zmm5[0].o, 1)
            zmm2 = _mm256_insertf32x4(arg5, zmm24, zmm2.o, 1)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            arg10[0].o = _mm_permute_pd(zmm3[0].o, 1)
            zmm3[0].o = _mm_blend_epi32(zmm3[0].o, zmm6, 1)
            zmm3 = _mm256_inserti128_si256(zmm3, temp0_107, 1)
            int256_t var_1c0 = zmm2
            int224_t var_1a0_1 = zmm3[0].28
            zmm2.o = zmm0[0].o f* zmm0[0]
            zmm2.o = _mm_mask3_fmadd_round_ss(zmm2.o, arg5, zmm24[0].o, zmm24[0].o)
            zmm2.o = _mm_fmadd_ss(zmm2.o, arg9[0], arg9[0])
            zmm3[0].o = arg6[0].o f* arg6[0]
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm5[0], zmm5[0])
            zmm3[0].o = _mm_mask3_fmadd_round_ss(zmm3[0].o, arg5, zmm23[0].o, zmm23[0].o)
            zmm0[0].o = zmm1[0].o f* zmm1[0]
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm6.d, zmm6.d)
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg10[0], arg10[0])
            zmm1[0].o = _mm_add_round_ss(arg5, zmm2.o, zmm25)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm2.o, zmm2.d)
            zmm2.o = _mm_mask_mul_round_ss(arg5, zmm2.o, zmm31)
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, arg5, zmm2.o, zmm31)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 = _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm5[0].o f* zmm5[0], arg5, zmm2.o, zmm31), 
                zmm5[0], zmm5[0])
            int64_t k1_2 = _mm_cmp_round_ss_mask(arg5, arg14, zmm1[0].o, 2)
            zmm1[0].o = _mm_mask_mov_ps(arg5, zmm28)
            zmm1[0].o = _mm_mask_move_ss(k1_2, zmm0[0].o, zmm4)
            zmm2.o = _mm_add_round_ss(arg5, zmm3[0].o, zmm25)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
            zmm3[0].o = _mm_mask_mul_round_ss(arg5, zmm3[0].o, zmm31)
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, arg5, zmm3[0].o, zmm31)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 = _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm5[0].o f* zmm5[0], arg5, zmm3[0].o, zmm31), 
                zmm5[0], zmm5[0])
            int64_t k1_3 = _mm_cmp_round_ss_mask(arg5, arg14, zmm2.o, 2)
            zmm2.o = _mm_mask_mov_ps(arg5, zmm28)
            zmm2.o = _mm_mask_move_ss(k1_3, zmm0[0].o, zmm4)
            zmm3[0].o = _mm_add_round_ss(arg5, zmm0[0].o, zmm25)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
            zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm31)
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, arg5, zmm0[0].o, zmm31)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 = _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm5[0].o f* zmm5[0], arg5, zmm0[0].o, zmm31), 
                zmm5[0], zmm5[0])
            int64_t k1_4 = _mm_cmp_round_ss_mask(arg5, arg14, zmm3[0].o, 2)
            zmm0[0].o = _mm_mask_mov_ps(arg5, zmm28)
            zmm0[0].o = _mm_mask_move_ss(k1_4, zmm0[0].o, zmm4)
            zmm3[0].o = zmm1[0].o f* var_1c0:4.d
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                _mm_mask_mul_round_ss(arg5, zmm1[0].o, zmm24[0].o), zmm3[0].o, 0x10)
            float var_1b8
            zmm1[0].o = zmm1[0].o f* var_1b8
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x20)
            float var_1ac
            zmm3[0].o = zmm2.o f* var_1ac
            float var_1b0
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2.o f* var_1b0, zmm3[0].o, 0x10)
            float var_1a8
            zmm2.o = zmm2.o f* var_1a8
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2.o, 0x20)
            zmm2.o = zmm0[0].o f* var_1a0_1.d
            zmm3[0].o = zmm0[0].o f* var_1a0_1:4.d
            zmm2.o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2.o, zmm3[0].o, 0x10)
            zmm0[0].o = zmm0[0].o f* var_1a0_1:8.d
            zmm23[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm2.o, zmm0[0].o, 0x20)
            int64_t k1_5 = _mm_cmp_ps_mask(arg5, arg12, zmm22[0].o, 2)
            __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, -1f)
            zmm24 = _mm256_mask_load_ps(k1_5, data_1434430a0)
            zmm0 = _mm256_mask_broadcastss_ps(arg5, zmm24[0].o)
            zmm3 = _mm256_mul_ps(zmm0, zmm1)
            zmm13 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm4 = _mm_permute_pd(zmm3[0].o, 1)
            var_1c0.d = zmm3[0]
            var_1c0:4.d = zmm13.d
            var_1b8 = zmm4[0]
            zmm0[0].o = _mm_mask_movehdup_ps(arg5, zmm24[0].o)
            zmm0 = _mm256_broadcastsd_pd(zmm0[0].o)
            arg6 = _mm256_mul_ps(zmm0, zmm5)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
            var_1b0 = arg6[0]
            zmm5[0].o = _mm_permute_pd(arg6[0].o, 1)
            var_1ac = zmm0[0]
            var_1a8 = zmm5[0]
            zmm1[0].o = _mm_mask_permute_ps(arg5, zmm24[0].o, 0xea)
            zmm1 = _mm256_broadcastsd_pd(zmm1[0].o)
            arg9 = _mm256_mask_mul_ps(arg5, zmm1, zmm23)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm6 = _mm_permute_pd(arg9[0].o, 1)
            var_1a0_1.d = arg9[0]
            var_1a0_1:4.d = zmm1[0]
            var_1a0_1:8.d = zmm6.d
            arg10 = _mm256_broadcast_ss(1.17549435e-38f)
            arg11 = _mm256_blend_ps(arg10, zmm3, 7)
            zmm23 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg11, 0x7fffffff)
            arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm23, 0x38d1b717, 2)
            _kortest_mask8_u8(arg5, arg5)
            
            if (c_1)
                zmm0[0].o = _mm_mask_mov_ps(arg5, zmm27)
            else
                arg11 = _mm256_blend_ps(arg10, arg6, 7)
                zmm23 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg11, 0x7fffffff)
                arg5 =
                    __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm23, 0x38d1b717, 2)
                _kortest_mask8_u8(arg5, arg5)
                
                if (c_1)
                    zmm0[0].o = _mm_mask_mov_ps(arg5, zmm27)
                else
                    arg10 = _mm256_blend_ps(arg10, arg9, 7)
                    zmm23 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg10, 0x7fffffff)
                    arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm23, 
                        0x38d1b717, 2)
                    _kortest_mask8_u8(arg5, arg5)
                    
                    if (c_1)
                        zmm0[0].o = _mm_mask_mov_ps(arg5, zmm27)
                    else
                        zmm2.o = zmm3[0].o f+ zmm0[0]
                        zmm23[0].o = _mm_add_round_ss(arg5, zmm6, zmm2.o)
                        
                        if (zmm23[0].o f<= arg14)
                            zmm0[0].o f- zmm3[0]
                            int64_t r12_1
                            r12_1.b = zmm0[0].o f> zmm3[0]
                            int64_t rax = 0
                            
                            if (zmm0[0].o f> zmm3[0])
                                rax = 0x14
                            
                            if (zmm6 f> *(&var_1c0 + rax))
                                r12_1 = 2
                            
                            int64_t r15_1 = sx.q(*(&data_143443204 + (r12_1 << 2)))
                            zmm0[0].o = *(&var_1c0 + (zx.q((r12_1 * 5).d) << 2))
                            int64_t r14_1 = sx.q(*(&data_143443204 + (r15_1 << 2)))
                            zmm0[0].o = zmm0[0].o f- *(&var_1c0 + (sx.q((r15_1 * 5).d) << 2))
                            zmm0[0].o = zmm0[0].o f- *(&var_1c0 + (sx.q((r14_1 * 5).d) << 2))
                            zmm0[0].o = _mm_add_round_ss(arg5, zmm0[0].o, zmm28)
                            zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                            zmm0[0].o = _mm_div_round_ss(arg5, zmm28, zmm0[0].o)
                            zmm1[0].o = _mm_div_round_ss(arg5, zmm28, zmm0[0].o)
                            zmm1[0].o = _mm_mask_mul_round_ss(arg5, zmm1[0].o, zmm31)
                            int128_t var_150
                            *(&var_150 + (r12_1 << 2)) = zmm1[0]
                            zmm1[0].o = *(&var_1c0 + (sx.q((r15_1 + (r12_1 << 2)).d) << 2))
                            zmm1[0].o =
                                zmm1[0].o f+ *(&var_1c0 + (sx.q((r12_1 + (r15_1 << 2)).d) << 2))
                            zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm31)
                            zmm1[0].o = zmm1[0].o f* zmm0[0]
                            *(&var_150 + (r15_1 << 2)) = zmm1[0]
                            zmm1[0].o = *(&var_1c0 + (sx.q((r14_1 + (r12_1 << 2)).d) << 2))
                            zmm1[0].o =
                                zmm1[0].o f+ *(&var_1c0 + (sx.q((r12_1 + (r14_1 << 2)).d) << 2))
                            zmm1[0].o = zmm0[0].o f* zmm1[0]
                            *(&var_150 + (r14_1 << 2)) = zmm1[0]
                            zmm1[0].o = *(&var_1c0 + (sx.q((r14_1 + (r15_1 << 2)).d) << 2))
                            result = sx.q((r15_1 + (r14_1 << 2)).d)
                            zmm1[0].o = zmm1[0].o f- *(&var_1c0 + (result << 2))
                            zmm0[0].o = zmm0[0].o f* zmm1[0]
                            float var_144_1 = zmm0[0]
                            zmm0[0].o = var_150
                        else
                            zmm0[0].o = _mm_add_round_ss(arg5, zmm23[0].o, zmm28)
                            zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                            zmm0[0].o = _mm_div_round_ss(arg5, zmm28, zmm0[0].o)
                            zmm2.o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm31)
                            zmm1[0].o = zmm5[0].o f- zmm1[0]
                            zmm1[0].o = zmm1[0].o f* zmm2.d
                            zmm3[0].o = arg9[0].o f- zmm4[0]
                            zmm3[0].o = zmm3[0].o f* zmm2.d
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
                            zmm3[0].o = zmm13 f- arg6[0]
                            zmm2.o = zmm3[0].o f* zmm2.d
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2.o, 0x20)
                            zmm0[0].o = _mm_div_round_ss(arg5, zmm28, zmm0[0].o)
                            zmm0[0].o = _mm_mask_mul_round_ss(arg5, zmm0[0].o, zmm31)
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
            
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2.o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2.o)
            zmm2.o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm2.d
            int64_t k1_6 = _mm_cmp_round_ss_mask(arg5, zmm19, zmm1[0].o, 6)
            zmm2.o = _mm_mask_mov_ps(arg5, zmm20)
            zmm2.o = _mm_mask_move_ss(k1_6, zmm0[0].o, arg14)
            zmm3[0].o = _mm_mask_mul_round_ss(arg5, zmm1[0].o, zmm31)
            zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm4 = _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm1[0].o f* zmm1[0], arg5, zmm3[0].o, zmm31), 
                zmm1[0], zmm1[0])
            zmm1[0].o = zmm4 f* zmm4[0]
            zmm1[0].o = _mm_fnmadd_round_ss(zmm1[0].o, arg5, zmm3[0].o, zmm31)
            zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm4[0], zmm4[0])
            zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcastss_ps(zmm2.o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_mask_andnot_ps(arg5, zmm1[0].o, zmm27)
            zmm2.o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = var_1a0_1:0x18.d
            zmm1[0].o = __vmovsd_xmmdq_memq(var_1a0_1:0x10.q)
            zmm0[0].o = zmm1[0].q | zmm0[0].q << 0x40
        
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2.o, zmm2.o)
        zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
        zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
        zmm1[0].o = zmm1[0].o f+ zmm3[0]
        int64_t k1_7 = _mm_cmp_round_ss_mask(arg5, zmm19, zmm1[0].o, 6)
        zmm3[0].o = _mm_mask_mov_ps(arg5, zmm20)
        zmm3[0].o = _mm_mask_move_ss(k1_7, zmm0[0].o, arg14)
        zmm4 = _mm_mask_mul_round_ss(arg5, zmm1[0].o, zmm31)
        zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
        zmm5[0].o = zmm1[0].o f* zmm1[0]
        zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, arg5, zmm4, zmm31)
        zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm1[0], zmm1[0])
        zmm1[0].o = zmm5[0].o f* zmm5[0]
        zmm1[0].o = _mm_fnmadd_round_ss(zmm1[0].o, arg5, zmm4, zmm31)
        zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm5[0], zmm5[0])
        zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2.o, zmm1[0].o)
        zmm2.o = _mm_broadcastss_ps(zmm3[0].o)
        zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2.o)
        zmm2.o = _mm_mask_andnot_ps(arg5, zmm2.o, zmm27)
        zmm1[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2.o)
        arg1[rbx_1] = zmm1[0].o
        arg1[rbx_1 + 1] = zmm0[0].o
        arg1[rbx_1 + 2] = _mm_mask_store_ps(arg5, zmm22[0].o)
        rsi_1 += 1
    while (r13_1 != rsi_1)

arg6[0].o = var_b8
arg8[0].o = var_98
arg9[0].o = var_88
arg10[0].o = var_78
arg11[0].o = var_68
_mm256_zeroupper()
return result
