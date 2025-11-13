// 函数: sub_1400035f0
// 地址: 0x1400035f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4]
float var_18[0x4] = zmm9
float zmm19[0x4] = _mm_mask_load_epi64(arg5, *arg4)
float zmm0[0x8]
zmm0[0].o = arg1[0xe]
float zmm1[0x8]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
double zmm3[0x4]
zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xe4))
float result_1[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xec))
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(arg1 + 0xe8)
float zmm5[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x88), 0xd8)
float zmm6[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(result_1, zmm5)
float zmm24[0x4] = _mm_mask_sub_ps(arg5, zmm5, result_1)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm5 = _mm_permute_ps(zmm0[0].o, 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x60)
float zmm18[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, 1f)
float zmm16[0x4] = _mm_mask_load_ss(arg5, arg1[6].d)
float zmm21[0x4] = _mm_mask_load_ss(arg5, *(arg1 + 0x6c))
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm3[0].o)
arg6 = _mm_mask_xor_ps(arg5, arg6, arg6)
float zmm23[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(arg6, *(arg1 + 0x64), 0x10)
float zmm22[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(arg6, *(arg1 + 0x68), 0x20)
zmm3[0].o = _mm_mask_sub_ps(arg5, zmm18, zmm3[0].o)
zmm1[0].o = _mm_broadcastss_ps(zmm3[0].o)
float zmm20[0x4] = _mm_mask_mul_ps(arg5, zmm16, zmm1[0].o)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm24, 0xea)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm23, zmm20)
zmm0[0].o = _mm_permute_ps(zmm6, 0xd5)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm22, zmm1[0].o)
zmm20 = _mm_mask_permute_ps(arg5, zmm6, 0xea)
zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0xd5)
zmm1[0].o = _mm_mask_mul_ps(arg5, zmm23, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm16, zmm20)
zmm5 = _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, zmm24), arg5, zmm22, zmm1[0].o)
zmm20 = _mm_mask_permute_ps(arg5, zmm24, 0xd5)
zmm1[0].o = _mm_broadcastss_ps(zmm6)
zmm1[0].o = _mm_mask_mul_ps(arg5, zmm23, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm16, zmm20)
result_1 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm3[0].o, 0xea), arg5, zmm22, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x9c)
zmm22 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm24, 0x60)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, zmm24, 0x8c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x20)
zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x4e), zmm24, 0x14), 
    zmm3[0].o, 4)
zmm16 = _mm_mask_broadcastss_ps(arg5, zmm0[0].o)
zmm6 = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6), arg5, zmm22, zmm16)
zmm16 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0[0].o, 0xea), arg5, zmm3[0].o, zmm6)
zmm0[0].o = _mm_broadcastss_ps(zmm5)
zmm6 = _mm_permute_ps(zmm5, 0xd5)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6), arg5, zmm22, zmm0[0].o)
zmm20 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm5, 0xea), arg5, zmm3[0].o, zmm6)
zmm0[0].o = _mm_broadcastss_ps(result_1)
zmm5 = _mm_permute_ps(result_1, 0xd5)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm22, zmm0[0].o)
zmm23 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, result_1, 0xea), arg5, zmm3[0].o, zmm1[0].o)
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xf4))
result_1 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xfc))
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(arg1 + 0xf8)
zmm5 = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x88), 0xd8)
zmm6 = __vaddps_xmmdq_xmmdq_xmmdq(result_1, zmm5)
result_1 = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, result_1)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_mask_sub_ps(arg5, zmm18, zmm0[0].o)
zmm24 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(arg6, arg1[7].d, 0x10)
zmm22 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(arg6, *(arg1 + 0x74), 0x20)
zmm18 = _mm_mask_mul_ps(arg5, zmm21, _mm_broadcastss_ps(zmm1[0].o))
zmm5 = _mm_mask3_fmadd_ps(_mm_permute_ps(result_1, 0xea), arg5, zmm24, zmm18)
zmm3[0].o = _mm_permute_ps(zmm6, 0xd5)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg5, zmm22, zmm5)
zmm18 = _mm_mask_permute_ps(arg5, zmm6, 0xea)
zmm5 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_permute_ps(zmm1[0].o, 0xd5)), arg5, 
    zmm21, zmm18)
zmm0[0].o = _mm_broadcastss_ps(result_1)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm22, zmm5)
zmm18 = _mm_mask_permute_ps(arg5, result_1, 0xd5)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm24, _mm_broadcastss_ps(zmm6)), arg5, zmm21, zmm18)
zmm21 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm1[0].o, 0xea), arg5, zmm22, zmm5)
zmm24 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x9c), result_1, 0x60)
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, result_1, 0x8c), zmm6, 0x20)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x4e), 
        result_1, 0x14), 
    zmm1[0].o, 4)
result_1 = _mm_broadcastss_ps(zmm3[0].o)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm3[0].o, 0xd5)), arg5, 
    zmm24, result_1)
zmm18 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm3[0].o, 0xea), arg5, zmm1[0].o, zmm6)
zmm3[0].o = _mm_broadcastss_ps(zmm0[0].o)
result_1 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm0[0].o, 0xd5)), 
    arg5, zmm24, zmm3[0].o)
zmm22 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm0[0].o, 0xea), arg5, zmm1[0].o, result_1)
zmm0[0].o = _mm_mask_broadcastss_ps(arg5, zmm21)
zmm3[0].o = _mm_mask_permute_ps(arg5, zmm21, 0xd5)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm3[0].o)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg5, zmm24, zmm0[0].o)
zmm24 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm21, 0xea), arg5, zmm1[0].o, zmm3[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x88), 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xc8), 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
uint64_t zmm28[0x2] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, -0f)
zmm21 = _mm_mask_permute_pd(arg5, zmm3[0].o, 1)
zmm0[0].o = _mm_mask_xor_pd(arg5, zmm21, zmm28)
float zmm26[0x4] = _mm_mask_movehdup_ps(arg5, zmm3[0].o)
zmm6 = _mm_mask_xor_ps(arg5, zmm26, zmm28)
float zmm25[0x4] = _mm_mask_xor_ps(arg5, zmm3[0].o, zmm28)
result_1 = _mm_permute_ps(zmm0[0].o, 0x80)
float zmm27[0x4] = _mm_mask_mul_ps(arg5, _mm_mask_permute_ps(arg5, zmm20, 0xc1), result_1)
zmm5 = _mm_permute_ps(zmm3[0].o, 0xd5)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm23, 0xc1)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm5, zmm27)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x9c)
zmm27 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, zmm6, 0x20)
zmm0[0].o = _mm_mask_movehdup_ps(arg5, zmm23)
zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, zmm20, 0x68)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, result_1)
result_1 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm23, 0xda), zmm5, zmm0[0].o)
zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm26, zmm25, 0x10)
zmm0[0].o = zmm0[0].q | zmm3[0] << 0x40
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, result_1)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm1[0].o, zmm27)
zmm27 = _mm_mask_load_ss(arg5, *(arg1 + 0x78))
zmm26 = _mm_mask_add_ps(arg5, zmm27, zmm0[0].o)
result_1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(zmm3[0].o, 0x4a), zmm6, 0x20)
zmm5 = _mm_mask_broadcastss_ps(arg5, zmm16)
zmm0[0].o = _mm_mask_permute_ps(arg5, zmm25, 0xa0)
zmm0[0].o = zmm0[0].q | zmm3[0] << 0x40
zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm20, zmm23, 0x30)
zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm23, zmm1[0].o, 0x80)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm5 = _mm_fmadd_ps(zmm5, result_1, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm21, zmm6, 0x10)
zmm21 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm6, 0x20)
zmm6 = _mm_permute_ps(_mm_mask_shuffle_ps(arg5, zmm23, zmm20, 0xc), 0x78)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm23, 0x46)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm20, 0x68)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, result_1, zmm6)
zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm25, zmm3[0].o, 0)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm5, zmm21)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm27, *(arg1 + 0x78), 0x20)
float zmm8[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x94), 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm21 = _mm_mask_load_ss(arg5, *(arg1 + 0x7c))
zmm25 = _mm_mask_permute_pd(arg5, zmm0[0].o, 1)
result_1 = _mm_mask_xor_pd(arg5, zmm25, zmm28)
zmm5 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm6 = _mm_mask_xor_ps(arg5, zmm5, zmm28)
zmm27 = _mm_mask_xor_ps(arg5, zmm0[0].o, zmm28)
float zmm7[0x4] = _mm_permute_ps(result_1, 0x80)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm22, 0xc1)
zmm28 = _mm_mask_mul_ps(arg5, zmm1[0].o, zmm7)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm24, 0xc1)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm3[0].o, zmm28)
zmm28 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(result_1, zmm0[0].o, 0x9c), zmm6, 0x20)
result_1 = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_movehdup_ps(arg5, zmm24), zmm22, 0x68), 
    zmm7)
zmm7 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm24, 0xda), zmm3[0].o, result_1)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5, zmm27, 0x10)
zmm3[0].o = zmm3[0] | zmm0[0].q << 0x40
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg5, zmm1[0].o, zmm28)
zmm1[0].o = _mm_mask_add_ps(arg5, zmm21, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x4a)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x20)
result_1 = _mm_mask_broadcastss_ps(arg5, zmm18)
zmm5 = _mm_mask_permute_ps(arg5, zmm27, 0xa0)[0].q | zmm0[0].q << 0x40
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(
    _mm_mask_shuffle_ps(arg5, zmm24, _mm_mask_shuffle_ps(arg5, zmm22, zmm24, 0x30), 0x80), zmm5)
result_1 = _mm_fmadd_ps(result_1, zmm3[0].o, zmm7)
zmm25 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm25, zmm6, 0x10), zmm6, 0x20)
zmm6 = _mm_permute_ps(_mm_mask_shuffle_ps(arg5, zmm24, zmm22, 0xc), 0x78)
zmm5 = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_permute_ps(arg5, zmm24, 0x46), zmm22, 
            0x68), 
        zmm5), 
    zmm3[0].o, zmm6)
zmm3[0].o = _mm_mask_shuffle_ps(arg5, zmm27, zmm0[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, result_1, zmm25)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm21, zmm21, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm3[0].o = _mm_mask_shuffle_ps(arg5, zmm26, zmm8, 5)
zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm8, 0xd8)
result_1 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, _mm_mask_permute_pd(arg5, zmm26, 1), 1)
zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 5), 
    zmm0[0].o, 0xd8)
zmm6 = _mm_permute_pd(zmm1[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(result_1, zmm0[0].o)
int32_t rax = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t r9 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t r8 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = _mm_mask_add_ps(arg5, zmm26, zmm1[0].o)
zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
    _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm1, 7), 0x7fffffff)
result_1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5)
int64_t k1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0x322bcc77, 2)
int64_t k0 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm19, data_142fc92e0)
_kortest_mask8_u8(k1, k0)
float zmm30[0x4]

if (&__return_addr u>= 0x48)
label_140003cc0:
    zmm25 = _mm_mask_movehdup_ps(k0, zmm1[0].o)
    zmm7 = _mm_permute_pd(zmm1[0].o, 1)
    zmm19 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(result_1, zmm1[0].o, 0x8a)
    zmm8 = zx.o(rax)
    zmm6 = zx.o(r9)
    zmm26 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm8, zmm6, 0x1c)
    float zmm31[0x4] = _mm_mask_load_ps(k0, data_142d3f660)
    zmm9 = zx.o(r8)
    zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm7, 0x10), zmm8, 0x20), 
        zmm9, 0x30)
    zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm31, result_1, 0x46)
    zmm5 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm25, zmm6, 0x2a)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result_1, result_1, 0x9c)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
    zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm7, zmm3[0].o)
    zmm25 = _mm_mask_broadcastss_ps(k0, zmm0[0].o)
    zmm28 = _mm_mask_permute_ps(k0, zmm0[0].o, 0x55)
    zmm27 = _mm_mask_permute_ps(k0, zmm0[0].o, 0xaa)
    float zmm29[0x4] = _mm_mask_permute_ps(k0, zmm0[0].o, 0xff)
    zmm30 = _mm_mask_load_ss(k0, 1f)
    zmm3[0].o = _mm_mask_shuffle_ps(k0, zmm30, zmm9, 0)
    zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm8, zmm6)
    zmm0[0].o = arg6[0].q | zmm0[0].q << 0x40
    zmm0[0].o = _mm_mask_mul_ps(k0, zmm0[0].o, arg6)
    zmm3[0].o = _mm_mask3_fmsub_ps(zmm3[0].o, k0, zmm26, zmm0[0].o)
    zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(result_1, zmm1[0].o, 5)
    zmm6 = _mm_mask3_fmsub_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, result_1, 5), 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, result_1, 0x8a)), 
        k0, zmm19, zmm0[0].o)
    zmm0[0].o = _mm_mask_mul_ps(k0, zmm28, zmm27)
    zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm25, zmm29)
    zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm3[0].o, 0xd8))
    zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_pd(zmm5, 1))
    zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm5, 0x39))
    arg6 = _mm_mask_sub_ps(k0, zmm0[0].o, zmm5)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg6 f- zmm0[0].o
    
    if (arg6 f!= zmm0[0].o || not(is_ordered.d(arg6, zmm0[0].o)))
        zmm30 = zmm1[0].q | result_1[0].q << 0x40
        zmm31 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm9, zmm31, 0xf6)
        zmm7 = _mm_broadcastss_ps(zmm3[0].o)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, result_1, 0x20)
        zmm5 = __vmovddup_xmmdq_xmmq(zmm3[0])
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
        zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, k0, zmm30, zmm7)
        zmm27 = _mm_mask3_fmsub_ps(zmm27, k0, zmm19, zmm0[0].o)
        zmm0[0].o = _mm_permute_ps(zmm6, 0x33)
        zmm28 = _mm_mask3_fmsub_ps(zmm28, k0, zmm26, 
            _mm_mask3_fmsub_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm9, 0x10), 
                    _mm_permute_ps(zmm6, 0x66)), 
                k0, zmm31, zmm0[0].o))
        zmm0[0].o = _mm_permute_pd(zmm6, 3)
        zmm25 = _mm_mask3_fmsub_ps(zmm25, k0, zmm31, 
            _mm_mask3_fmadd_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8, 0x1d), 
                    __vmovddup_xmmdq_xmmq(zmm6[0].q)), 
                k0, zmm26, zmm0[0].o))
        zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0xcc)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x9d)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, result_1, 0xb0)
        zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x66)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm19, zmm0[0].o)
        zmm29 = _mm_mask3_fmsub_ps(zmm29, k0, zmm30, zmm1[0].o)
        zmm0[0].o = data_142fc92f0
        zmm0[0].o = _mm_mask_div_ps(k0, zmm0[0].o, arg6)
        zmm3[0].o = _mm_mask_mul_ps(k0, zmm29, zmm0[0].o)
        result_1 = _mm_mask_mul_ps(k0, zmm28, zmm0[0].o)
        zmm1[0].o = _mm_mask_mul_ps(k0, zmm27, zmm0[0].o)
        zmm0[0].o = _mm_mask_mul_ps(k0, zmm25, zmm0[0].o)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x77)
        zmm30 = _mm_mask_shuffle_ps(k0, zmm3[0].o, result_1, 0x77)
        result_1 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, result_1, 0x22)
    else
        result_1 = data_142d4cc20
        zmm1[0].o = data_142d4cc30
    
    arg6 = _mm_mask_movehdup_ps(k0, zmm30)
    zmm19 = _mm_mask_permute_pd(k0, zmm30, 1)
    zmm25 = _mm_mask_permute_ps(k0, zmm30, 0xe7)
    zmm26 = _mm_mask_movehdup_ps(k0, result_1)
    zmm27 = _mm_mask_permute_pd(k0, result_1, 1)
    zmm28 = _mm_mask_permute_ps(k0, result_1, 0xe7)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm5 = _mm_permute_pd(zmm1[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0xe7)
else
    zmm0[0].o = 0x800000
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result_1, 0x800000, 0x30)
    zmm0[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm3, zmm0[0].o, 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (&__return_addr u>= 0x48)
        goto label_140003cc0
    
    zmm0[0].o = zx.o(rax)
    zmm3[0].o = zx.o(r9)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
    zmm3[0].o = zx.o(r8)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = 0x800000
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm3[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm0, zmm3[0].o, 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (&__return_addr u>= 0x48)
        goto label_140003cc0
    
    zmm5 = 0x3f800000
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm28 = _mm_mask_xor_ps(k0, zmm28, zmm28)
    zmm27 = _mm_mask_xor_ps(k0, zmm27, zmm27)
    zmm26 = _mm_mask_mov_pd(k0, 0x3f800000)
    result_1 = __vxorps_xmmdq_xmmdq_xmmdq(result_1, result_1)
    zmm25 = _mm_mask_xor_ps(k0, zmm25, zmm25)
    zmm19 = _mm_mask_xor_epi32(k0, zmm19, zmm19)
    arg6 = _mm_mask_xor_ps(k0, arg6, arg6)
    zmm30 = _mm_mask_mov_pd(k0, 0x3f800000)

zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(result_1, zmm26, 0x10)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm27, 0x20)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm28, 0x30)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm30, arg6, 0x10)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, zmm19, 0x20)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, zmm25, 0x30)
zmm5 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1[0].o, (*arg2)[1]), k0, zmm3[0].o, 
        *arg2), 
    k0, zmm0[0].o, (*arg2)[2])
zmm25 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm5, *(arg1 + 0x78))
zmm0[0].o = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm21, 0x80000000)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm3[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm7 = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + 0x88), 0x20)
zmm19 = _mm_mask_mul_ps(k0, zmm5, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xc8), 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm6 = _mm_permute_ps(zmm3[0].o, 0xc9)
result_1 = _mm_permute_ps(zmm5, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm1[0].o = _mm_permute_ps(zmm5, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm6, result_1)
zmm3[0].o = _mm_broadcastss_ps(zmm1[0].o)
result_1 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, zmm20, _mm_permute_ps(zmm1[0].o, 0xd5)), k0, 
    zmm16, zmm3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm23, result_1)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7, *(arg1 + 0x94), 0x20)
result_1 =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), *(arg1 + 0xd4), 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, result_1)
zmm7 = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm5 = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm5, 0x80000000)
zmm6 = _mm_permute_ps(zmm5, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xc9), zmm3[0].o)
zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm7, zmm6)
zmm5 = _mm_broadcastss_ps(zmm3[0].o)
zmm7 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, zmm22, _mm_permute_ps(zmm3[0].o, 0xd5)), k0, zmm18, zmm5)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
zmm25 = _mm_mask3_fmadd_ps(zmm25, k0, arg3[0].o, zmm0[0].o)
arg1[0xc].d = _mm_mask_store_ss(k0, zmm25)
*(arg1 + 0xc4) = __vextractps_memf32_xmmf32_imm8_avx512(zmm25, 1)
*(arg1 + 0xc8) = __vextractps_memf32_xmmf32_imm8_avx512(zmm25, 2)
zmm19 = _mm_mask3_fmadd_ps(zmm19, k0, arg3[0].o, result_1)
*(arg1 + 0xcc) = _mm_mask_store_ss(k0, zmm19)
arg1[0xd].d = __vextractps_memf32_xmmf32_imm8_avx512(zmm19, 1)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, zmm24, zmm7)
*(arg1 + 0xd4) = __vextractps_memf32_xmmf32_imm8_avx512(zmm19, 2)
result_1 = arg1[0xe]
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm3[0].o)
arg6 = _mm_mask_xor_ps(k0, arg6, arg6)
arg3[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm3[0].o = _mm_permute_ps(result_1, 0x1b)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm3[0].o)
zmm20 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(k0, -0x407fffffc0800000)
arg3[0].o = _mm_mask_mul_ps(k0, arg3[0].o, zmm20)
arg3[0].o = _mm_mask3_fmadd_ps(arg3[0].o, k0, result_1, arg6)
zmm6 = _mm_permute_ps(zmm1[0].o, 0x55)
zmm3[0].o = _mm_permute_pd(result_1, 1)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm3[0].o)
zmm16 = _mm_mask_load_ps(k0, data_142d3f7d0)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, zmm16, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
arg3[0].o = _mm_permute_ps(result_1, 0xb1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm18 = _mm_mask_load_ps(k0, data_142d3f7b0)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm18, zmm3[0].o)
zmm23 = _mm_mask_load_ss(k0, 0.5f)
zmm21 = _mm_mask_broadcastss_ps(k0, zmm23)
zmm7 = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(zmm5), _mm_permute_ps(zmm0[0].o, 0x1b)), 
        zmm20), 
    k0, zmm0[0].o, arg6)
zmm6 = _mm_permute_ps(zmm5, 0x55)
zmm3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm3[0].o)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, zmm16, zmm7)
zmm7 = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xaa), _mm_permute_ps(zmm0[0].o, 0xb1)), k0, 
    zmm18, zmm3[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm21, result_1)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
result_1 = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, result_1)
result_1 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm3[0].o = zmm3[0].o f+ result_1[0]
arg6 = _mm_mask_load_ss(k0, 9.99999994e-09f)
int64_t k1_3 = _mm_cmp_round_ss_mask(k0, arg6, zmm3[0].o, 6)
zmm22 = _mm_mask_xor_ps(k0, zmm22, zmm22)
zmm6 = _mm_mask_move_ss(k1_3, zmm0[0].o, zmm22)
result_1 = _mm_mask_mul_round_ss(k0, zmm3[0].o, zmm23)
zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0].d)
arg3[0].o = zmm3[0].o f* zmm3[0].d
arg3[0].o = _mm_fnmadd_round_ss(arg3[0].o, k0, result_1, zmm23)
arg3[0].o = _mm_fmadd_ss(arg3[0].o, zmm3[0].d, zmm3[0].d)
zmm3[0].o = arg3[0].o f* arg3[0]
zmm3[0].o = _mm_fnmadd_round_ss(zmm3[0].o, k0, result_1, zmm23)
zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg3[0], arg3[0])
arg3[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3 = _mm256_broadcastss_ps(zmm6)
zmm3 = __vandnps_ymmqq_ymmqq_memqq(arg3, data_142fc9280)
zmm1 = _mm256_or_ps(_mm256_and_ps(zmm1, arg3), zmm3)
int64_t rdx = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
int64_t rax_1 = zmm1[0].q
zmm7 = _mm_mask3_fmadd_ps(zmm7, k0, zmm21, zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm7)
arg3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm0[0].o = zmm0[0].o f+ arg3[0]
zmm5 = _mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, arg6, zmm0[0].o, 6), zmm0[0].o, zmm22)
arg3[0].o = _mm_mask_mul_round_ss(k0, zmm0[0].o, zmm23)
zmm0[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
zmm3[0].o = zmm0[0].o f* zmm0[0]
zmm3[0].o = _mm_fnmadd_round_ss(zmm3[0].o, k0, arg3[0].o, zmm23)
zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm0[0], zmm0[0])
zmm0[0].o = zmm3[0].o f* zmm3[0].d
zmm0[0].o = _mm_fnmadd_round_ss(zmm0[0].o, k0, arg3[0].o, zmm23)
zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm3[0].d, zmm3[0].d)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm0[0].o)
arg3[0].o = _mm_broadcastss_ps(zmm5)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vandnps_xmmdq_xmmdq_memdq(arg3[0].o, data_142d3f660)
arg3[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm0[0].o = zmm0[0].o f+ zmm3[0].d
int64_t k1_5 = _mm_cmp_round_ss_mask(k0, zmm22, zmm0[0].o, 2)
arg6 = _mm_mask_load_ss(k0, 1f)
zmm3[0].o = _mm_mask_mov_ps(k0, _mm_mask_load_ss(k0, -1f))
zmm3[0].o = _mm_mask_move_ss(k1_5, zmm0[0].o, arg6)
zmm3[0].o = _mm_broadcastss_ps(zmm3[0].o)
arg1[0xe] = zmm1[0].o
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm3[0].o)
arg1[0xf] = zmm1[0].o
arg3[0].o = zx.o(rax_1.d)
zmm3[0].o = zx.o(rdx.d)
uint32_t result = (rax_1 u>> 0x20).d
result_1 = zx.o(result)
zmm5 = *(arg1 + 0x18)
zmm7 = arg1[1].d
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(result_1, zmm3[0].o, 0x10), arg3[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm7, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x14), 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, result_1, 0x20)
zmm3[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
result_1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm7, 0x20)
result_1 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, result_1), zmm6, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(result_1, result_1)
result_1 = _mm_broadcastd_epi32(zx.o((rdx u>> 0x20).d)[0])
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5, 0x20)
result_1 = _mm_fmadd_ps(result_1, zmm0[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm6, zmm3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(result_1, zmm0[0].o)
zmm0[0].o = _mm_mask_add_ps(k0, zmm25, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *(arg1 + 0x48)
arg3[0].o = arg1[4].d
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x10)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + 0x44), 0x20)
result_1 = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm5 = _mm_permute_ps(zmm1[0].o, 0xd2)
zmm7 = __vmovsd_xmmdq_memq(arg1[4].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), arg3[0].o, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3[0].o)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, result_1, zmm3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xff)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x20)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, arg3[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3[0].o)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, result_1, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm0[0].o = _mm_mask_add_ps(k0, zmm19, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *arg1
zmm1[0].o = *(arg1 + 0xc)
arg3[0].o = *(arg1 + 8)
zmm3[0].o = *(arg1 + 4)
char temp0_528 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x10), zmm3[0].o, 
                    0x20), 
                zmm0[0].o, 0x30), 
            arg1[0xe].d), 
        zmm20), 
    k0, zmm0[0].o, *(arg1 + 0xec))
zmm5 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0[0].o, 0x20), 
        zmm3[0].o, 0x30), 
    *(arg1 + 0xe4))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x30)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm0[0].o, *(arg1 + 0xe8))
zmm1[0].o = arg1[3]
arg3[0].o = *(arg1 + 0x3c)
zmm3[0].o = *(arg1 + 0x38)
zmm7 = *(arg1 + 0x34)
zmm5 = _mm_mask3_fmadd_ps(zmm5, k0, zmm16, temp0_528)
result_1 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm3[0].o, 0x10), zmm7, 0x20), 
        zmm1[0].o, 0x30), 
    arg1[0xf].d)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm18, zmm5)
result_1 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(_mm_mask_mul_ps(k0, result_1, zmm20), 
    k0, zmm1[0].o, *(arg1 + 0xfc))
zmm5 = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm1[0].o, 
                0x20), 
            zmm7, 0x30), 
        *(arg1 + 0xf4)), 
    k0, zmm16, result_1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
zmm1[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1[0].o, *(arg1 + 0xf8))
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm18, zmm5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm3[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm3[0].o)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ zmm3[0].d
arg3[0].o = _mm_mask_broadcastss_ps(k0, 
    _mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, zmm22, arg3[0].o, 2), zmm0[0].o, arg6))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg1[0xa] = zmm0[0].o
arg1[0xb] = zmm1[0].o
_mm256_zeroupper()
return result
