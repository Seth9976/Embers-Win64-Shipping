// 函数: sub_140002100
// 地址: 0x140002100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm17[0x4] = _mm_mask_load_ss(arg5, arg8)
int64_t k1 = _load_mask8(arg6)
float zmm19[0x4] = _mm_mask_load_ps(arg5, arg1[0xe])
float zmm0[0x4] = _mm_mask_add_ps(arg5, zmm19, zmm19)
float zmm18[0x4] = _mm_mask_mul_ps(arg5, zmm0, _mm_mask_broadcastss_ps(arg5, zmm19))
float zmm5[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0, (*arg1)[0x39])
float zmm6[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0, (*arg1)[0x3b])
float zmm16[0x4] =
    __vmulss_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, _mm_permute_pd(zmm0, 1), (*arg1)[0x3a])
zmm0 = _mm_permute_ps(__vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm18, zmm5, 0x88), 0xd8)
float zmm25[0x4] = _mm_mask_add_ps(arg5, zmm6, zmm0)
float zmm26[0x4] = _mm_mask_sub_ps(arg5, zmm0, zmm6)
zmm18 = _mm_mask_permute_ps(arg5, 
    _mm_mask_shuffle_ps(arg5, __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm5, 0x4e), zmm18, 0xc), 
    0x78)
zmm0 = _mm_mask_add_ps(arg5, zmm18, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm16, zmm16, 0x1c), zmm5, 0x60))
float zmm20[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, 1f)
float zmm21[0x4] = _mm_mask_load_ss(arg5, arg1[6][0])
zmm16 = _mm_mask_load_ss(arg5, (*arg1)[0x1b])
zmm0 = _mm_mask_sub_ps(arg5, zmm20, zmm0)
zmm18 = _mm_mask_xor_ps(arg5, zmm18, zmm18)
float zmm23[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm18, (*arg1)[0x19], 0x10)
float zmm22[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm18, (*arg1)[0x1a], 0x20)
float zmm24[0x4] = _mm_mask_mul_ps(arg5, zmm21, _mm_broadcastss_ps(zmm0))
zmm5 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm26, 0xea), arg5, zmm23, zmm24)
float zmm4[0x4] = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm25, 0xd5), arg5, zmm22, zmm5)
zmm24 = _mm_mask_permute_ps(arg5, zmm25, 0xea)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm23, _mm_permute_ps(zmm0, 0xd5)), arg5, zmm21, zmm24)
zmm6 = _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, zmm26), arg5, zmm22, zmm5)
zmm24 = _mm_mask_permute_ps(arg5, zmm26, 0xd5)
zmm5 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm23, _mm_mask_broadcastss_ps(arg5, zmm25)), arg5, 
    zmm21, zmm24)
zmm21 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0, 0xea), arg5, zmm22, zmm5)
zmm22 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0, zmm25, 0x9c), zmm26, 0x60)
zmm24 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0, zmm26, 0x8c), zmm25, 0x20)
zmm5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0, zmm25, 0x4e), zmm26, 0x14), 
    zmm0, 4)
zmm23 = _mm_mask_broadcastss_ps(arg5, zmm4)
zmm0 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_permute_ps(zmm4, 0xd5)), arg5, zmm22, zmm23)
zmm25 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm4, 0xea), arg5, zmm5, zmm0)
zmm0 = _mm_broadcastss_ps(zmm6)
zmm4 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_permute_ps(zmm6, 0xd5)), arg5, zmm22, zmm0)
zmm23 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm6, 0xea), arg5, zmm5, zmm4)
zmm0 = _mm_mask_broadcastss_ps(arg5, zmm21)
zmm6 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_mask_permute_ps(arg5, zmm21, 0xd5)), 
    arg5, zmm22, zmm0)
zmm21 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm21, 0xea), arg5, zmm5, zmm6)
zmm22 = _mm_mask_load_ps(arg5, arg1[0xf])
zmm0 = _mm_mask_add_ps(arg5, zmm22, zmm22)
zmm5 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0, (*arg1)[0x3d])
zmm24 = _mm_mask_broadcastss_ps(arg5, zmm22)
float zmm27[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0, (*arg1)[0x3f])
zmm26 = __vmulss_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, _mm_permute_pd(zmm0, 1), (*arg1)[0x3e])
zmm24 = _mm_mask_mul_ps(arg5, zmm0, zmm24)
zmm6 = _mm_permute_ps(__vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm24, zmm5, 0x88), 0xd8)
zmm4 = _mm_mask_add_ps(arg5, zmm27, zmm6)
zmm0 = _mm_mask_sub_ps(arg5, zmm6, zmm27)
zmm6 = _mm_mask_sub_ps(arg5, zmm20, 
    _mm_mask_add_ps(arg5, 
        _mm_mask_permute_ps(arg5, 
            _mm_mask_shuffle_ps(arg5, __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm5, 0x4e), zmm24, 
                0xc), 
            0x78), 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm26, zmm26, 0x1c), zmm5, 0x60)))
zmm24 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm18, arg1[7][0], 0x10)
zmm20 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm18, (*arg1)[0x1d], 0x20)
zmm26 = _mm_mask_mul_ps(arg5, zmm16, _mm_broadcastss_ps(zmm6))
zmm5 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm0, 0xea), arg5, zmm24, zmm26)
zmm26 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm4, 0xd5), arg5, zmm20, zmm5)
zmm27 = _mm_mask_permute_ps(arg5, zmm4, 0xea)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_permute_ps(zmm6, 0xd5)), arg5, zmm16, zmm27)
zmm27 = _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, zmm0), arg5, zmm20, zmm5)
float zmm28[0x4] = _mm_mask_permute_ps(arg5, zmm0, 0xd5)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_broadcastss_ps(zmm4)), arg5, zmm16, zmm28)
zmm16 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm6, 0xea), arg5, zmm20, zmm5)
zmm20 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4, 0x9c), zmm0, 0x60)
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0, 0x8c), 
    zmm4, 0x20)
float zmm7[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm4, 0x4e), zmm0, 
        0x14), 
    zmm6, 4)
zmm4 = _mm_mask_broadcastss_ps(arg5, zmm26)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_mask_permute_ps(arg5, zmm26, 0xd5)), 
    arg5, zmm20, zmm4)
zmm26 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm26, 0xea), arg5, zmm7, zmm6)
zmm24 = _mm_mask_broadcastss_ps(arg5, zmm27)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_mask_permute_ps(arg5, zmm27, 0xd5)), 
    arg5, zmm20, zmm24)
zmm4 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm27, 0xea), zmm7, zmm6)
zmm24 = _mm_mask_broadcastss_ps(arg5, zmm16)
zmm5 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_mask_permute_ps(arg5, zmm16, 0xd5)), 
    arg5, zmm20, zmm24)
zmm6 = _mm_mask_permute_ps(arg5, zmm16, 0xea)
zmm20 = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, *arg7)
zmm6 = _mm_fmadd_ps(zmm6, zmm7, zmm5)
zmm5 = _mm_broadcast_ss(arg7[1])
zmm16 = _mm_mask_mul_ps(arg5, zmm23, zmm5)
zmm7 = arg7[2]
zmm25 = _mm_mask3_fmadd_ps(zmm25, arg5, zmm20, zmm16)
zmm0 = _mm_broadcastss_ps(zmm7)
zmm21 = _mm_mask3_fmadd_ps(zmm21, arg5, zmm0, zmm25)
zmm4 = _mm_fmadd_ps(_mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm4), arg5, zmm20, zmm26), 
    zmm0, zmm6)
float zmm29[0x4] =
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(__vmovsd_xmmdq_memq(*arg7), zmm7, 0x20)
zmm0 = _mm_mask_mul_ps(arg5, zmm29, zmm21)
zmm7 = __vmovshdup_xmmdq_xmmdq(zmm0)
zmm20 = _mm_add_round_ss(arg5, _mm_permute_pd(zmm0, 1), zmm0 f+ zmm7[0])
zmm0 = _mm_mask_mul_ps(arg5, zmm29, zmm4)
zmm4 = __vmovshdup_xmmdq_xmmdq(zmm0)
zmm21 = _mm_add_round_ss(arg5, _mm_permute_pd(zmm0, 1), zmm0 f+ zmm4[0])
zmm23 = _mm_add_round_ss(arg5, zmm20, zmm21)
zmm16 = _mm_mask_xor_ps(arg5, zmm16, zmm16)
zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)

if (not(arg4 f<= 9.99999975e-05f))
    zmm4 = arg1[0x15]
    zmm26 = _mm_mask_load_ps(arg5, arg1[0x16])
    zmm6 = _mm_mask_mul_ps(arg5, zmm19, zmm4)
    zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_pd(zmm6, 1))
    zmm0 = zmm0 f+ __vmovshdup_xmmdq_xmmdq(zmm0)[0]
    zmm25 = _mm_mask_xor_ps(arg5, zmm25, zmm25)
    zmm24 = _mm_mask_load_ss(arg5, 1f)
    zmm0 = _mm_mask3_fmsub_ps(
        _mm_broadcastss_ps(_mm_mask_move_ss(_mm_cmp_round_ss_mask(arg5, zmm25, zmm0, 2), 
            0xbf800000, zmm24)), 
        arg5, zmm19, zmm4)
    zmm19 = _mm_mask_load_ps(arg5, data_142d3f690)
    zmm4 = _mm_mask_mul_ps(arg5, zmm4, zmm19)
    zmm27 = _mm_mask_permute_ps(arg5, zmm0, 0xff)
    zmm28 = _mm_mask_broadcastss_ps(arg5, zmm0)
    zmm7 = _mm_mask_mul_ps(arg5, _mm_permute_ps(zmm4, 0xdb), zmm28)
    zmm28 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(arg5, -0x407fffffc0800000)
    zmm7 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm7, zmm28), arg5, zmm4, zmm27)
    zmm27 = _mm_mask_permute_ps(arg5, zmm0, 0xd5)
    zmm5 = _mm_mask_mul_ps(arg5, _mm_permute_pd(zmm4, 1), zmm27)
    zmm27 = _mm_mask_load_ps(arg5, data_142fc92b0)
    zmm5 = _mm_mask3_fmadd_ps(zmm5, arg5, zmm27, zmm7)
    zmm0 = _mm_permute_ps(zmm0, 0xea)
    zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xf1), zmm0)
    float zmm30[0x4] = _mm_mask_load_ps(arg5, data_142fc92c0)
    zmm0 = _mm_mask3_fmadd_ps(zmm0, arg5, zmm30, zmm5)
    float zmm31[0x4] = _mm_mask_add_ps(arg5, zmm0, zmm0)
    zmm5 = _mm_mask_mul_ps(arg5, zmm22, zmm26)
    zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_pd(zmm5, 1))
    zmm5 = _mm_mask3_fmsub_ps(
        _mm_broadcastss_ps(_mm_mask_move_ss(
            _mm_cmp_round_ss_mask(arg5, zmm25, zmm5 f+ __vmovshdup_xmmdq_xmmdq(zmm5)[0], 2), zmm0, 
            zmm24)), 
        arg5, zmm22, zmm26)
    zmm7 = _mm_mask_mul_ps(arg5, zmm26, zmm19)
    zmm6 = _mm_permute_ps(zmm5, 0xff)
    zmm4 = _mm_broadcastss_ps(zmm5)
    zmm0 = _mm_fmadd_ps(
        _mm_mask_mul_ps(arg5, __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm7, 0xdb), zmm4), zmm28), 
        zmm7, zmm6)
    zmm4 = _mm_permute_ps(zmm5, 0xd5)
    zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm7, 1), zmm4), arg5, 
        zmm27, zmm0)
    zmm0 = _mm_permute_ps(zmm5, 0xea)
    zmm0 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm7, 0xf1), zmm0), arg5, 
        zmm30, zmm4)
    zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
    zmm4 = _mm_mask_mul_ps(arg5, zmm29, zmm31)
    zmm5 = __vmovshdup_xmmdq_xmmdq(zmm4)
    zmm4 = _mm_permute_pd(zmm4, 1) f+ (zmm4 f+ zmm5[0])[0]
    zmm0 = _mm_mask_mul_ps(arg5, zmm29, zmm0)
    zmm5 = __vmovshdup_xmmdq_xmmdq(zmm0)
    zmm4 = zmm4 f- (_mm_permute_pd(zmm0, 1) f+ (zmm0 f+ zmm5[0])[0])[0]

zmm19 = _mm_mask_load_ss(arg5, 1f)
zmm0 = _mm_div_round_ss(arg5, zmm19, zmm23)
_mm_mask_mov_ps(arg5, zmm19)
zmm5 = _mm_mask_move_ss(k1, zmm0, zmm0)
zmm0 = zmm5 f* arg3[0] f* arg2[0] f* arg2[0]
arg3[0].o = zmm5 f* arg4[0]
arg2[0].o = arg3[0].o f* arg2[0]
arg3[0].o = arg2[0].o f+ zmm0[0]
arg3[0].o = _mm_mask3_fmadd_round_ss(arg3[0].o, arg5, zmm23, zmm19)
arg3[0].o = _mm_div_round_ss(arg5, zmm19, arg3[0].o)
arg2[0].o = arg2[0].o f* zmm4[0]
zmm17 = _mm_fmsub_round_ss(zmm17, arg5, zmm0, arg2[0].o)
zmm22 = _mm_mask_load_ss(arg5, *arg9)
zmm0 = _mm_mask_sub_round_ss(arg5, zmm17, zmm22)
zmm23 = _mm_mask_mul_round_ss(arg5, arg3[0].o, zmm0)
zmm0 = _mm_broadcastss_ps(_mm_mask_mul_round_ss(arg5, zmm20, zmm23))
arg4 = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(arg5, 
    _mm_mask_mul_round_ss(arg5, zmm21, zmm23), 0x80000000)
zmm4 = _mm_mask_mul_ps(arg5, zmm29, zmm0)
arg4 = _mm_broadcastss_ps(arg4)
zmm7 = arg1[0xe]
zmm0 = arg1[0xf]
zmm6 = _mm_mask_mul_ps(arg5, zmm29, arg4)
arg4 = _mm_broadcastss_ps(zmm4)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm7, 0x1b), arg4)
zmm21 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(arg5, -0x407fffffc0800000)
zmm5 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm5, zmm21), arg5, zmm7, zmm18)
arg2[0].o = _mm_permute_ps(zmm4, 0x55)
arg3[0].o = _mm_permute_pd(zmm7, 1)
zmm20 = _mm_mask_load_ps(arg5, data_142d3f7d0)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2[0].o)
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, zmm20, zmm5)
arg3[0].o = _mm_permute_ps(zmm4, 0xaa)
zmm4 = _mm_permute_ps(zmm7, 0xb1)
zmm17 = _mm_mask_load_ps(arg5, data_142d3f7b0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg3[0].o = _mm_mask3_fmadd_ps(arg3[0].o, arg5, zmm17, arg2[0].o)
zmm24 = _mm_mask_broadcastss_ps(arg5, 0x3f000000)
zmm5 = _mm_broadcastss_ps(zmm6)
arg4 = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg5, __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0, 0x1b), zmm5), zmm21), 
    arg5, zmm0, zmm18)
zmm5 = _mm_permute_ps(zmm6, 0x55)
arg2[0].o = _mm_permute_pd(zmm0, 1)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm5)
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, zmm20, arg4)
arg4 = _mm_permute_ps(zmm6, 0xaa)
arg4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0, 0xb1), arg4), arg5, 
    zmm17, arg2[0].o)
arg3[0].o = _mm_mask3_fmadd_ps(arg3[0].o, arg5, zmm24, zmm7)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm5 = _mm_permute_pd(arg2[0].o, 1)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm5)
zmm5 = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg2[0].o = arg2[0].o f+ zmm5[0]
zmm18 = _mm_mask_load_ss(arg5, 9.99999994e-09f)
int64_t k1_1 = _mm_cmp_round_ss_mask(arg5, zmm18, arg2[0].o, 6)
zmm7 = arg2[0].o f* 0.5f
arg2[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg2[0].o, arg2[0])
zmm6 = _mm_fmadd_ss(_mm_fnmadd_ss(arg2[0].o f* arg2[0], zmm7[0], 0.5f), arg2[0], arg2[0])
arg2[0].o = zmm6 f* zmm6[0]
arg2[0].o = _mm_fnmadd_ss(arg2[0].o, zmm7[0], 0.5f)
arg2[0].o = _mm_fmadd_ss(arg2[0].o, zmm6[0], zmm6[0])
zmm7 = _mm_mask_move_ss(k1_1, zmm0, zmm16)
arg2[0].o = _mm_broadcastss_ps(arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2[0].o)
arg3 = _mm256_broadcastss_ps(zmm7)
arg2 = _mm256_and_ps(arg2, arg3)
arg3 = __vandnps_ymmqq_ymmqq_memqq(arg3, data_142fc9280)
arg2 = _mm256_or_ps(arg2, arg3)
int64_t rax = __vpextrq_gpr64q_xmmdq_immb(arg2[0].o, 1)
int64_t rdx_1 = arg2[0].q
arg4 = _mm_mask3_fmadd_ps(arg4, arg5, zmm24, zmm0)
zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(arg4, arg4)
arg3[0].o = _mm_permute_pd(zmm0, 1)
zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0)
zmm0 = zmm0 f+ arg3[0]
zmm5 = _mm_mask_move_ss(_mm_cmp_round_ss_mask(arg5, zmm18, zmm0, 6), zmm0, zmm16)
arg3[0].o = zmm0 f* 0.5f
zmm0 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0, zmm0[0])
zmm7 = _mm_fmadd_ss(_mm_fnmadd_ss(zmm0 f* zmm0[0], arg3[0], 0.5f), zmm0[0], zmm0[0])
zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(arg4, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm7 f* zmm7[0], arg3[0], 0.5f), zmm7[0], 
        zmm7[0])))
arg3[0].o = _mm_broadcastss_ps(zmm5)
zmm0 = __vandps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg3[0].o = __vandnps_xmmdq_xmmdq_memdq(arg3[0].o, data_142d3f660)
zmm0 = __vorps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
zmm18 = _mm_mask_load_ss(arg5, -1f)
int64_t k1_3 = _mm_cmp_round_ss_mask(arg5, zmm16, arg3[0].o, 2)
arg3[0].o = _mm_mask_mov_ps(arg5, zmm18)
arg3[0].o = _mm_mask_move_ss(k1_3, zmm0, zmm19)
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg1[0xe] = arg2[0].o
arg1[0xf] = zmm0
arg2[0].o = zx.o(rdx_1.d)
arg3[0].o = zx.o(rax.d)
uint32_t result = (rax u>> 0x20).d
arg4 = zx.o((rdx_1 u>> 0x20).d)
zmm5 = (*arg1)[6]
zmm7 = arg1[1][0]
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, arg3[0].o, 0x10), arg2[0].o, 0x20)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm7, 0x10), 
    (*arg1)[5], 0x20)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg2[0].o, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg4, 0x20)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[1][0].q)
arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm7, 0x20)
arg4 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg4), zmm6, zmm4)
arg4 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, arg4)
zmm4 = _mm_broadcastd_epi32(zx.o(result)[0])
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x20)
zmm4 = _mm_fmadd_ps(zmm4, arg4, arg3[0].o)
arg3[0].o = _mm_permute_ps(arg4, 0xd2)
arg4 = _mm_permute_ps(arg4, 0xc9)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg4)
arg2[0].o = _mm_fmsub_ps(arg2[0].o, zmm6, arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[0xc][0].q)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, arg2[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[0x32], 0x20)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2[0].o)
arg1[8][0] = arg2[0]
(*arg1)[0x21] = __vextractps_memd_xmmdq_immb(arg2[0].o, 1)
(*arg1)[0x22] = __vextractps_memd_xmmdq_immb(arg2[0].o, 2)
arg2[0].o = (*arg1)[0x12]
arg3[0].o = arg1[4][0]
arg4 = _mm_add_round_ss(arg5, zmm22, zmm23)
zmm4 = _mm_permute_ps(zmm0, 0xc9)
zmm5 = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg3[0].o, 0x10), (*arg1)[0x11], 0x20)
zmm0 = _mm_permute_ps(zmm0, 0xd2)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), arg3[0].o, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, zmm4, zmm5)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm5 = _mm_broadcast_ss((*arg1)[0x3f])
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4][0].q), arg2[0].o, 0x20)
arg2[0].o = _mm_fmadd_ps(arg2[0].o, zmm5, arg3[0].o)
zmm7 = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm0 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o), zmm4, zmm7)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0)
arg2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[0x35], 0x20)
zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0)
(*arg1)[0x23] = zmm0[0]
arg1[9][0] = __vextractps_memd_xmmdq_immb(zmm0, 1)
(*arg1)[0x25] = __vextractps_memd_xmmdq_immb(zmm0, 2)
*arg9 = arg4[0]
zmm0 = *arg1
arg2[0].o = (*arg1)[3]
arg3[0].o = (*arg1)[2]
arg4 = (*arg1)[1]
zmm4 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(arg5, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg3[0].o, 0x10), arg4, 0x20), 
                zmm0, 0x30), 
            arg1[0xe][0]), 
        zmm21), 
    arg5, zmm0, (*arg1)[0x3b])
zmm7 = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0, 0x20), arg4, 
            0x30), 
        (*arg1)[0x39]), 
    arg5, zmm20, zmm4)
zmm0 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0, 0x10), 
            arg2[0].o, 0x20), 
        arg3[0].o, 0x30), 
    (*arg1)[0x3a])
arg2[0].o = arg1[3]
arg3[0].o = (*arg1)[0xf]
arg4 = (*arg1)[0xe]
zmm0 = _mm_mask3_fmadd_ps(zmm0, arg5, zmm17, zmm7)
zmm4 = (*arg1)[0xd]
zmm7 = _mm_fmadd_ps(
    _mm_mask_mul_ps(arg5, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x10), zmm4, 0x20), 
                arg2[0].o, 0x30), 
            arg1[0xf][0]), 
        zmm21), 
    arg2[0].o, zmm5)
zmm5 = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg2[0].o, 
                0x20), 
            zmm4, 0x30), 
        (*arg1)[0x3d]), 
    arg5, zmm20, zmm7)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg2[0].o, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg3[0].o, 0x20)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg4, 0x30)
arg2[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, arg2[0].o, (*arg1)[0x3e])
arg2[0].o = _mm_mask3_fmadd_ps(arg2[0].o, arg5, zmm17, zmm5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, arg2[0].o)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
arg3[0].o = _mm_mask_broadcastss_ps(arg5, 
    _mm_mask_move_ss(_mm_cmp_round_ss_mask(arg5, zmm16, arg3[0].o, 2), zmm0, zmm19))
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3[0].o)
arg1[0xa] = zmm0
arg1[0xb] = arg2[0].o
_mm256_zeroupper()
return result
