// 函数: sub_140338f10
// 地址: 0x140338f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm15
int128_t var_58 = zmm15
int128_t var_68 = arg12[0].o
int128_t var_78 = arg11[0].o
int128_t zmm12
int128_t var_88 = zmm12
int32_t var_98[0x4] = arg10
int128_t var_a8 = arg9[0].o
int32_t var_b8[0x4] = arg8
int128_t var_c8 = arg7[0].o
float zmm7[0x4]
float var_d8[0x4] = zmm7
int128_t var_e8 = arg6[0].o
uint64_t result = zx.q(arg17)

if (result.d s>= 2)
    uint16_t zmm28[0x8] = _mm_mask_load_epi64(arg5, *arg18)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    uint16_t zmm19[0x8] = _mm_mask_load_epi64(arg5, data_142fc92e0)
    float zmm16[0x4] = _mm_mask_load_ps(arg5, data_142d3f7c0)
    float zmm17[0x4] = _mm_mask_load_ps(arg5, data_142d3f7d0)
    float zmm18[0x4] = _mm_mask_load_ps(arg5, data_142d3f7b0)
    arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
    float zmm20[0x4] = _mm_mask_load_ss(arg5, 9.99999994e-09f)
    arg10 = __vxorps_xmmdq_xmmdq_xmmdq(arg10, arg10)
    float zmm22[0x4] = _mm_mask_load_ss(arg5, -nanf)
    uint32_t zmm29[0x4] = _mm_mask_load_ps(arg5, data_142d3f660)
    int64_t k0 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm28, data_142fc92e0)
    arg13 = _mm_mask_xor_ps(k0, arg13, arg13)
    float zmm30[0x4] = _mm_mask_load_ss(k0, 1f)
    float zmm31[0x4] = _mm_mask_broadcastss_ps(k0, zmm30)
    arg7 = data_143443080
    arg8 = __vxorps_xmmdq_xmmdq_xmmdq(arg8, arg8)
    float zmm27[0x4] = _mm_mask_load_ss(k0, -9.99999994e-09f)
    
    do
        result = zx.q(*(arg3 + (rsi_1 << 1)))
        *(arg4 + sx.q(result.d * arg15 + arg16))
        arg6[0].o = arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3]
        uint64_t rbx_2 = result * 3
        arg12[0].o = arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3 + 1]
        float zmm24[0x8]
        zmm24[0].o =
            _mm_mask_load_ps(k0, arg1[sx.q(*(arg4 + sx.q(result.d * arg15 + arg16))) * 3 + 2])
        uint64_t rbx_3 = rbx_2 << 4
        bool c_1 = (rbx_2 & 0x1000000000000000) != 0
        float zmm0[0x8]
        zmm0[0].o = *(arg2 + rbx_3)
        float zmm4[0x4] = *(arg2 + rbx_3 + 0x10)
        float zmm25[0x8]
        zmm25[0].o = _mm_mask_load_ps(k0, *(arg2 + rbx_3 + 0x20))
        int64_t k1_3 = _mm_mask_test_epi16_mask(
            _kor_mask8(_mm256_cmp_ps_mask(k0, zmm25, arg14, 1), 
                _mm256_cmp_ps_mask(k0, zmm24, arg14, 1)), 
            zmm28, zmm19)
        _kortest_mask8_u8(k1_3, k1_3)
        float zmm1[0x8]
        uint128_t zmm2[0x2]
        float zmm3[0x8]
        float zmm5[0x8]
        
        if ((rbx_2 & 0xfffffffffffffff) == 0)
            zmm1[0].o = _mm_permute_ps(arg6[0].o, 0xff)
            zmm2[0] = _mm_broadcastss_ps(arg6[0].o)
            zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x1b)
            zmm2[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0], zmm3[0].o)
            zmm2[0] = _mm_mask_mul_ps(k0, zmm2[0], zmm16)
            zmm2[0] = _mm_fmadd_ps(zmm2[0], zmm1[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0x55)
            zmm5[0].o = _mm_permute_pd(zmm0[0].o, 1)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, zmm2[0], zmm17)
            zmm2[0] = _mm_permute_ps(arg6[0].o, 0xaa)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0], zmm0[0].o)
            zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm3[0].o, zmm18)
            zmm2[0] = _mm_mask_mul_ps(k0, zmm24[0].o, zmm4)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 0xc9)
            zmm4 = _mm_permute_ps(zmm2[0], 0xd2)
            zmm5[0].o = _mm_permute_ps(arg6[0].o, 0xd2)
            zmm7 = _mm_permute_ps(zmm2[0], 0xc9)
            zmm7 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7), zmm3[0].o, zmm4)
            zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm7, zmm7)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm4, zmm2[0])
            zmm2[0] = _mm_permute_ps(zmm4, 0xd2)
            zmm4 = _mm_permute_ps(zmm4, 0xc9)
            zmm4 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4), zmm3[0].o, zmm2[0])
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
            zmm2[0] = __vaddps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm1[0].o)
            zmm24[0].o = _mm_mask_mul_ps(k0, zmm24[0].o, zmm25[0].o)
        else
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm3[0].o = _mm_permute_ps(zmm2[0], 1)
            zmm2[0] = _mm_permute_ps(zmm2[0], 0x1a)
            zmm2[0] = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0])
            zmm2[0] = _mm_mask_sub_ps(k0, zmm31, zmm2[0])
            arg9[0].o = _mm_mask_mul_ps(k0, zmm25[0].o, zmm2[0])
            zmm2[0] = _mm_permute_ps(zmm0[0].o, 4)
            zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
            zmm2[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0], zmm3[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0], zmm1[0].o)
            zmm0[0].o = _mm_mask_mul_ps(k0, zmm25[0].o, zmm0[0].o)
            zmm3[0].o = _mm_mask_permute_ps(k0, zmm25[0].o, 0xc9)
            zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0], zmm1[0].o)
            zmm2[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = _mm_permute_pd(zmm0[0].o, 1)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8, arg9[0].o, 1)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x10)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0], 4)
            zmm5 = _mm256_blend_ps(zmm3, zmm5, 0xf)
            zmm3[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0], 1)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg9[0].o, 2)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x60)
            zmm3 = _mm256_insertf128_ps(zmm5, zmm3[0].o, 1)
            zmm1 = _mm256_blend_ps(arg7, zmm1, 1)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0], 2)
            zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg9[0].o, 4)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm1[0].o, 8)
            zmm1 = _mm256_insertf128_ps(zmm5, zmm1[0].o, 1)
            float var_140_1[0x8] = zmm3
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            zmm4 = _mm_permute_ps(zmm3[0].o, 0xc1)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xda)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm3[0].o)
            zmm3[0].o = _mm_mask_sub_ps(k0, zmm31, zmm3[0].o)
            zmm4 = _mm_mask_mul_ps(k0, zmm24[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(arg6[0].o, 4)
            zmm5[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
            zmm5[0].o = _mm_permute_ps(arg6[0].o, 0xff)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
            zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm5[0].o = _mm_mask_mul_ps(k0, zmm24[0].o, zmm5[0].o)
            arg6[0].o = _mm_mask_permute_ps(k0, zmm24[0].o, 0xc9)
            zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = _mm_permute_pd(zmm5[0].o, 1)
            arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg8, zmm4, 1)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg11[0].o, zmm5[0].o, 0x10)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 4)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vblendps_xmmdq_xmmdq_xmmdq_immb(
                    __vblendps_xmmdq_xmmdq_xmmdq_immb(_mm256_extractf128_ps(arg11[0].o, 1), 
                        zmm1[0].o, 1), 
                    zmm4, 2), 
                zmm5[0].o, 0x60)
            arg6 = _mm256_blend_ps(arg7, arg6, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm1[0].o, 2)
            zmm4 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 4)
            zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, zmm1[0].o, 8)
            zmm7 = _mm_broadcastss_ps(arg9[0].o)
            arg6[0].o = _mm_permute_ps(zmm2[0], 0xaa)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg6[0].o)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm3[0].o, zmm7)
            float zmm26[0x8]
            zmm26[0].o = _mm_mask_broadcastss_ps(k0, zmm0[0].o)
            zmm26[0].o = _mm_mask3_fmadd_ps(zmm26[0].o, k0, zmm5[0].o, arg6[0].o)
            zmm2[0] = _mm_broadcastss_ps(zmm2[0])
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm3[0].o, zmm2[0])
            int32_t var_12c
            zmm0[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm0[0].o, k0, 
                zmm5[0].o, var_12c)
            int32_t var_124
            zmm0[0].o = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm0[0].o, k0, 
                zmm1[0].o, var_124)
            zmm2[0] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm4, zmm1[2])
            zmm2[0] =
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm2[0], k0, zmm3[0].o, zmm1[0])
            zmm2[0] =
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm2[0], k0, zmm5[0].o, zmm1[1])
            zmm2[0] =
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm2[0], k0, zmm1[0].o, zmm1[3])
            char temp0_106 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
                        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm4, zmm1[6]), k0, 
                        zmm3[0].o, zmm1[4]), 
                    k0, zmm5[0].o, zmm1[5]), 
                k0, zmm1[0].o, zmm1[7])
            zmm26[0].o = _mm_mask3_fmadd_ps(zmm26[0].o, k0, zmm1[0].o, arg13)
            zmm24[0].o = _mm_mask_mul_ps(k0, zmm24[0].o, zmm25[0].o)
            zmm1[0].o = _mm_mask_movehdup_ps(k0, zmm26[0].o)
            arg9[0].o = _mm_mask_permute_pd(k0, zmm26[0].o, 1)
            zmm5[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0))
            zmm7 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
            zmm25[0].o = _mm_mask_permute_pd(k0, zmm0[0].o, 1)
            result = zx.q(__vextractps_gpr32_xmmdq_immb(zmm2[0], 0))
            arg6[0].o = zx.o(result.d)
            zmm0[0].o = _mm_blend_epi32(zmm0[0].o, zmm5[0].o, 1)
            zmm0 = _mm256_insertf32x4(k0, zmm26, zmm0[0].o, 1)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm2[0])
            arg11[0].o = _mm_permute_pd(zmm2[0], 1)
            zmm2[0] = _mm_blend_epi32(zmm2[0], arg6[0].o, 1)
            zmm2 = _mm256_inserti128_si256(zmm2, temp0_106, 1)
            float var_1c0[0x8] = zmm0
            int224_t var_1a0_1 = zmm2[0].28
            zmm1[0].o = zmm1[0].o f* zmm1[0]
            zmm1[0].o = _mm_mask3_fmadd_round_ss(zmm1[0].o, k0, zmm26[0].o, zmm26[0].o)
            zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, arg9[0], arg9[0])
            zmm2[0] = zmm7 f* zmm7[0]
            zmm2[0] = _mm_fmadd_ss(zmm2[0], zmm5[0], zmm5[0])
            zmm2[0] = _mm_mask3_fmadd_round_ss(zmm2[0], k0, zmm25[0].o, zmm25[0].o)
            zmm0[0].o = zmm3[0].o f* zmm3[0]
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg6[0], arg6[0])
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg11[0], arg11[0])
            zmm3[0].o = _mm_add_round_ss(k0, zmm1[0].o, zmm27)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm1[0].o = zmm1[0].o f* 0.5f
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm1[0], 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm5[0].o f* zmm5[0], zmm1[0], 0.5f), zmm5[0], zmm5[0])
            int64_t k1_4 = _mm_cmp_round_ss_mask(k0, arg10, zmm3[0].o, 2)
            zmm1[0].o = _mm_mask_mov_ps(k0, zmm30)
            zmm1[0].o = _mm_mask_move_ss(k1_4, zmm0[0].o, zmm4)
            zmm3[0].o = _mm_add_round_ss(k0, zmm2[0], zmm27)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm2[0], zmm2[0].d)
            zmm2[0] = zmm2[0] f* 0.5f
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm2[0].d, 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm5[0].o f* zmm5[0], zmm2[0].d, 0.5f), zmm5[0], zmm5[0])
            int64_t k1_5 = _mm_cmp_round_ss_mask(k0, arg10, zmm3[0].o, 2)
            zmm2[0] = _mm_mask_mov_ps(k0, zmm30)
            zmm2[0] = _mm_mask_move_ss(k1_5, zmm0[0].o, zmm4)
            zmm3[0].o = _mm_add_round_ss(k0, zmm0[0].o, zmm27)
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
            zmm0[0].o = zmm0[0].o f* 0.5f
            zmm5[0].o = zmm4 f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm0[0], 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4 =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm5[0].o f* zmm5[0], zmm0[0], 0.5f), zmm5[0], zmm5[0])
            int64_t k1_6 = _mm_cmp_round_ss_mask(k0, arg10, zmm3[0].o, 2)
            zmm0[0].o = _mm_mask_mov_ps(k0, zmm30)
            zmm0[0].o = _mm_mask_move_ss(k1_6, zmm0[0].o, zmm4)
            zmm3[0].o = zmm1[0].o f* var_1c0[1]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                _mm_mask_mul_round_ss(k0, zmm1[0].o, zmm26[0].o), zmm3[0].o, 0x10)
            float var_1b8
            zmm1[0].o = zmm1[0].o f* var_1b8
            float var_1b0
            zmm4 = zmm2[0] f* var_1b0
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x20)
            float var_1ac
            zmm3[0].o = zmm2[0] f* var_1ac
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm3[0].o, 0x10)
            float var_1a8
            zmm2[0] = zmm2[0] f* var_1a8
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0], 0x20)
            zmm2[0] = zmm0[0].o f* var_1a0_1.d
            zmm2[0] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0], zmm0[0].o f* var_1a0_1:4.d, 0x10)
            zmm0[0].o = zmm0[0].o f* var_1a0_1:8.d
            zmm25[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm2[0], zmm0[0].o, 0x20)
            int64_t k1_7 = _mm_cmp_ps_mask(k0, arg13, zmm24[0].o, 2)
            __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0, -1f)
            zmm26 = _mm256_mask_load_ps(k1_7, data_1434430a0)
            zmm0 = _mm256_mask_broadcastss_ps(k0, zmm26[0].o)
            zmm2 = _mm256_mul_ps(zmm0, zmm1)
            zmm15 = __vmovshdup_xmmdq_xmmdq(zmm2[0])
            zmm4 = _mm_permute_pd(zmm2[0], 1)
            var_1c0[0] = zmm2[0].d
            var_1c0[1] = zmm15.d
            var_1b8 = zmm4[0]
            zmm1[0].o = _mm_mask_movehdup_ps(k0, zmm26[0].o)
            zmm1 = _mm256_broadcastsd_pd(zmm1[0].o)
            arg6 = _mm256_mul_ps(zmm1, zmm3)
            zmm5[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
            var_1b0 = arg6[0]
            zmm3[0].o = _mm_permute_pd(arg6[0].o, 1)
            var_1ac = zmm5[0]
            var_1a8 = zmm3[0]
            zmm1[0].o = _mm_mask_permute_ps(k0, zmm26[0].o, 0xea)
            zmm1 = _mm256_broadcastsd_pd(zmm1[0].o)
            arg9 = _mm256_mask_mul_ps(k0, zmm1, zmm25)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm7 = _mm_permute_pd(arg9[0].o, 1)
            var_1a0_1.d = arg9[0]
            var_1a0_1:4.d = zmm1[0]
            var_1a0_1:8.d = zmm7[0]
            arg11 = _mm256_broadcast_ss(1.17549435e-38f)
            arg12 = _mm256_blend_ps(arg11, zmm2, 7)
            zmm25 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, arg12, 0x7fffffff)
            _kortest_mask8_u8(
                __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm25, 0x38d1b717, 2), k0)
            
            if (c_1)
                zmm0[0].o = _mm_mask_mov_ps(k0, zmm29)
            else
                arg12 = _mm256_blend_ps(arg11, arg6, 7)
                zmm25 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, arg12, 0x7fffffff)
                _kortest_mask8_u8(
                    __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm25, 0x38d1b717, 2), 
                    k0)
                
                if (c_1)
                    zmm0[0].o = _mm_mask_mov_ps(k0, zmm29)
                else
                    arg11 = _mm256_blend_ps(arg11, arg9, 7)
                    zmm25 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, arg11, 0x7fffffff)
                    _kortest_mask8_u8(
                        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm25, 0x38d1b717, 
                            2), 
                        k0)
                    
                    if (c_1)
                        zmm0[0].o = _mm_mask_mov_ps(k0, zmm29)
                    else
                        zmm0[0].o = zmm2[0] f+ zmm5[0]
                        zmm25[0].o = _mm_add_round_ss(k0, zmm7, zmm0[0].o)
                        
                        if (zmm25[0].o f<= arg10)
                            zmm5[0].o f- zmm2[0].d
                            int64_t r12_1
                            r12_1.b = zmm5[0].o f> zmm2[0].d
                            int64_t rax = 0
                            
                            if (zmm5[0].o f> zmm2[0].d)
                                rax = 0x14
                            
                            if (zmm7 f> *(&var_1c0 + rax))
                                r12_1 = 2
                            
                            int64_t r15_1 = sx.q(*(&data_143443204 + (r12_1 << 2)))
                            zmm0[0].o = var_1c0[zx.q((r12_1 * 5).d)]
                            int64_t r14_1 = sx.q(*(&data_143443204 + (r15_1 << 2)))
                            zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r15_1 * 5).d)]
                            zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r14_1 * 5).d)]
                            zmm0[0].o = _mm_add_round_ss(k0, zmm0[0].o, zmm30)
                            zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                            zmm0[0].o = _mm_div_round_ss(k0, zmm30, zmm0[0].o)
                            zmm1[0].o = _mm_div_round_ss(k0, zmm30, zmm0[0].o)
                            zmm1[0].o = zmm1[0].o f* 0.5f
                            int128_t var_150
                            *(&var_150 + (r12_1 << 2)) = zmm1[0]
                            zmm1[0].o = var_1c0[sx.q((r15_1 + (r12_1 << 2)).d)]
                            zmm1[0].o = zmm1[0].o f+ var_1c0[sx.q((r12_1 + (r15_1 << 2)).d)]
                            zmm0[0].o = zmm0[0].o f* 0.5f
                            zmm1[0].o = zmm1[0].o f* zmm0[0]
                            *(&var_150 + (r15_1 << 2)) = zmm1[0]
                            zmm1[0].o = var_1c0[sx.q((r14_1 + (r12_1 << 2)).d)]
                            zmm1[0].o = zmm1[0].o f+ var_1c0[sx.q((r12_1 + (r14_1 << 2)).d)]
                            zmm1[0].o = zmm0[0].o f* zmm1[0]
                            *(&var_150 + (r14_1 << 2)) = zmm1[0]
                            zmm1[0].o = var_1c0[sx.q((r14_1 + (r15_1 << 2)).d)]
                            result = sx.q((r15_1 + (r14_1 << 2)).d)
                            zmm1[0].o = zmm1[0].o f- var_1c0[result]
                            zmm0[0].o = zmm0[0].o f* zmm1[0]
                            float var_144_1 = zmm0[0]
                            zmm0[0].o = var_150
                        else
                            zmm0[0].o = _mm_add_round_ss(k0, zmm25[0].o, zmm30)
                            zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                            zmm0[0].o = _mm_div_round_ss(k0, zmm30, zmm0[0].o)
                            zmm2[0] = zmm0[0].o f* 0.5f
                            zmm1[0].o = zmm3[0].o f- zmm1[0]
                            zmm1[0].o = zmm1[0].o f* zmm2[0].d
                            zmm3[0].o = arg9[0].o f- zmm4[0]
                            zmm3[0].o = zmm3[0].o f* zmm2[0].d
                            zmm1[0].o =
                                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
                            zmm3[0].o = zmm15 f- arg6[0]
                            zmm2[0] = zmm3[0].o f* zmm2[0].d
                            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0], 0x20)
                            zmm0[0].o = _mm_div_round_ss(k0, zmm30, zmm0[0].o)
                            zmm0[0].o = zmm0[0].o f* 0.5f
                            zmm0[0].o =
                                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
            
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2[0] = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0])
            zmm2[0] = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm2[0].d
            int64_t k1_11 = _mm_cmp_round_ss_mask(k0, zmm20, zmm1[0].o, 6)
            zmm2[0] = _mm_mask_mov_ps(k0, zmm22)
            zmm2[0] = _mm_mask_move_ss(k1_11, zmm0[0].o, arg10)
            zmm3[0].o = zmm1[0].o f* 0.5f
            zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm4 =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm1[0].o f* zmm1[0], zmm3[0], 0.5f), zmm1[0], zmm1[0])
            zmm1[0].o = zmm4 f* zmm4[0]
            zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm3[0], 0.5f)
            zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm4[0], zmm4[0])
            zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcastss_ps(zmm2[0])
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_mask_andnot_ps(k0, zmm1[0].o, zmm29)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = var_1a0_1:0x18.d
            zmm2[0] = __vmovsd_xmmdq_memq(var_1a0_1:0x10.q)
            zmm2[0] = zmm2[0].q | zmm1[0].q << 0x40
        
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
        zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
        zmm1[0].o = zmm1[0].o f+ zmm3[0]
        int64_t k1_12 = _mm_cmp_round_ss_mask(k0, zmm20, zmm1[0].o, 6)
        zmm3[0].o = _mm_mask_mov_ps(k0, zmm22)
        zmm3[0].o = _mm_mask_move_ss(k1_12, zmm0[0].o, arg10)
        zmm4 = zmm1[0].o f* 0.5f
        zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
        zmm5[0].o = zmm1[0].o f* zmm1[0]
        zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm4[0], 0.5f)
        zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm1[0], zmm1[0])
        zmm1[0].o = zmm5[0].o f* zmm5[0]
        zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm4[0], 0.5f)
        zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm5[0], zmm5[0])
        zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = _mm_broadcastss_ps(zmm3[0].o)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = _mm_mask_andnot_ps(k0, zmm1[0].o, zmm29)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        arg1[rbx_2] = zmm0[0].o
        arg1[rbx_2 + 1] = zmm2[0]
        arg1[rbx_2 + 2] = _mm_mask_store_ps(k0, zmm24[0].o)
        rsi_1 += 1
    while (r13_1 != rsi_1)

arg6[0].o = var_e8
arg7[0].o = var_c8
arg9[0].o = var_a8
arg11[0].o = var_78
arg12[0].o = var_68
_mm256_zeroupper()
return result
