// 函数: sub_140007ec0
// 地址: 0x140007ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm9
uint128_t var_18 = zmm9
float zmm0[0x8]
zmm0[0].o = arg1[0xe]
int32_t zmm1[0x8]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
double zmm3[0x4]
zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg4, zmm1[0].o, *(arg1 + 0xe4))
uint32_t zmm4[0x8]
zmm4[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg4, zmm1[0].o, *(arg1 + 0xec))
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(arg1 + 0xe8)
float temp0_7[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x88), 0xd8)
float zmm6[0x8]
zmm6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_7)
float temp0_9[0x4] = _mm_mask_sub_ps(arg4, temp0_7, zmm4[0].o)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x60)
float temp0_15[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg4, 1f)
float temp0_16[0x4] = _mm_mask_load_ss(arg4, arg1[6].d)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
float temp0_18[0x4] = _mm_mask_load_ss(arg4, *(arg1 + 0x6c))
uint32_t temp0_19[0x4] = _mm_mask_xor_ps(arg4, arg5, arg5)
float temp0_20[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(temp0_19, *(arg1 + 0x64), 0x10)
zmm3[0].o = _mm_mask_sub_ps(arg4, temp0_15, zmm3[0].o)
float temp0_22[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(temp0_19, *(arg1 + 0x68), 0x20)
float temp0_24[0x4] = _mm_mask_mul_ps(arg4, temp0_16, _mm_broadcastss_ps(zmm3[0].o))
float temp0_26[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, temp0_9, 0xea), arg4, temp0_20, temp0_24)
zmm0[0].o = _mm_permute_ps(zmm6[0].o, 0xd5)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg4, temp0_22, temp0_26)
float temp0_29[0x4] = _mm_mask_permute_ps(arg4, zmm6[0].o, 0xea)
float temp0_32[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg4, temp0_20, _mm_permute_ps(zmm3[0].o, 0xd5)), arg4, temp0_16, temp0_29)
zmm1[0].o = _mm_mask_broadcastss_ps(arg4, temp0_9)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg4, temp0_22, temp0_32)
float temp0_35[0x4] = _mm_mask_permute_ps(arg4, temp0_9, 0xd5)
float temp0_38[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg4, temp0_20, _mm_broadcastss_ps(zmm6[0].o)), arg4, temp0_16, temp0_35)
zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
zmm4[0].o = _mm_mask3_fmadd_ps(zmm4[0].o, arg4, temp0_22, temp0_38)
float temp0_42[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6[0].o, 0x9c), temp0_9, 0x60)
float temp0_44[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, temp0_9, 0x8c), zmm6[0].o, 0x20)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x4e)
zmm6[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm6[0].o, temp0_9, 0x14)
zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm3[0].o, 4)
float temp0_48[0x4] = _mm_mask_broadcastss_ps(arg4, zmm0[0].o)
zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, zmm6[0].o)
zmm6[0].o = _mm_mask3_fmadd_ps(zmm6[0].o, arg4, temp0_42, temp0_48)
float temp0_53[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm0[0].o, 0xea), arg4, zmm3[0].o, zmm6[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm6[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, zmm6[0].o)
zmm6[0].o = _mm_mask3_fmadd_ps(zmm6[0].o, arg4, temp0_42, zmm0[0].o)
float temp0_59[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm1[0].o, 0xea), arg4, zmm3[0].o, zmm6[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm4[0].o)
zmm1[0].o = _mm_permute_ps(zmm4[0].o, 0xd5)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg4, temp0_42, zmm0[0].o)
float temp0_65[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm4[0].o, 0xea), arg4, zmm3[0].o, zmm1[0].o)
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg4, zmm1[0].o, *(arg1 + 0xf4))
zmm4[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg4, zmm1[0].o, *(arg1 + 0xfc))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(arg1 + 0xf8)
float temp0_73[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x88), 0xd8)
zmm6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_73)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_73, zmm4[0].o)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float temp0_82[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(temp0_19, arg1[7].d, 0x10)
float temp0_83[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(temp0_19, *(arg1 + 0x74), 0x20)
zmm0[0].o = _mm_mask_sub_ps(arg4, temp0_15, zmm0[0].o)
float temp0_86[0x4] = _mm_mask_mul_ps(arg4, temp0_18, _mm_broadcastss_ps(zmm0[0].o))
float temp0_88[0x4] = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm4[0].o, 0xea), arg4, temp0_82, temp0_86)
zmm3[0].o = _mm_permute_ps(zmm6[0].o, 0xd5)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg4, temp0_83, temp0_88)
float temp0_91[0x4] = _mm_mask_permute_ps(arg4, zmm6[0].o, 0xea)
float temp0_94[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg4, temp0_82, _mm_permute_ps(zmm0[0].o, 0xd5)), arg4, temp0_18, temp0_91)
zmm1[0].o = _mm_broadcastss_ps(zmm4[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg4, temp0_83, temp0_94)
float temp0_97[0x4] = _mm_mask_permute_ps(arg4, zmm4[0].o, 0xd5)
float temp0_100[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(arg4, temp0_82, _mm_broadcastss_ps(zmm6[0].o)), arg4, temp0_18, temp0_97)
float temp0_102[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm0[0].o, 0xea), arg4, temp0_83, temp0_100)
float temp0_104[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x9c), zmm4[0].o, 0x60)
float temp0_106[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x8c), zmm6[0].o, 0x20)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x4e)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm4[0].o, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 4)
zmm4[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm6[0].o = _mm_permute_ps(zmm3[0].o, 0xd5)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_106, zmm6[0].o)
zmm6[0].o = _mm_mask3_fmadd_ps(zmm6[0].o, arg4, temp0_104, zmm4[0].o)
float temp0_115[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm3[0].o, 0xea), arg4, zmm0[0].o, zmm6[0].o)
zmm3[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_106, zmm4[0].o)
zmm4[0].o = _mm_mask3_fmadd_ps(zmm4[0].o, arg4, temp0_104, zmm3[0].o)
float temp0_121[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, zmm1[0].o, 0xea), arg4, zmm0[0].o, zmm4[0].o)
zmm1[0].o = _mm_mask_broadcastss_ps(arg4, temp0_102)
zmm3[0].o = _mm_mask_permute_ps(arg4, temp0_102, 0xd5)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_106, zmm3[0].o)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg4, temp0_104, zmm1[0].o)
float temp0_127[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg4, temp0_102, 0xea), arg4, zmm0[0].o, zmm3[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x88), 0x20)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xc8), 0x20)
float temp0_132[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg4, -0f)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
float zmm20[0x4] = _mm_mask_permute_pd(arg4, zmm1[0].o, 1)
zmm4[0].o = _mm_mask_xor_pd(arg4, zmm20, temp0_132)
float temp0_136[0x4] = _mm_mask_movehdup_ps(arg4, zmm1[0].o)
zmm6[0].o = _mm_mask_xor_ps(arg4, temp0_136, temp0_132)
uint32_t temp0_138[0x4] = _mm_mask_xor_ps(arg4, zmm1[0].o, temp0_132)
zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x80)
float temp0_141[0x4] = _mm_mask_mul_ps(arg4, _mm_mask_permute_ps(arg4, temp0_59, 0xc1), zmm3[0].o)
float temp0_142[0x4] = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm0[0].o = _mm_mask_permute_ps(arg4, temp0_65, 0xc1)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg4, temp0_142, temp0_141)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 0x9c)
float temp0_146[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm4[0].o, zmm6[0].o, 0x20)
zmm4[0].o = _mm_mask_movehdup_ps(arg4, temp0_65)
zmm4[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm4[0].o, temp0_59, 0x68)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
zmm4[0].o = _mm_mask_permute_ps(arg4, temp0_65, 0xda)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_142, zmm3[0].o)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_136, temp0_138, 0x10)
zmm3[0].o = zmm3[0] | zmm1[0].q << 0x40
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
float temp0_154[0x4] = _mm_mask_load_ss(arg4, *(arg1 + 0x78))
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg4, zmm0[0].o, temp0_146)
float temp0_156[0x4] = _mm_mask_add_ps(arg4, temp0_154, zmm3[0].o)
zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x4a)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x20)
zmm3[0].o = _mm_mask_broadcastss_ps(arg4, temp0_53)
zmm4[0].o = _mm_mask_permute_ps(arg4, temp0_138, 0xa0)
zmm4[0].o = zmm4[0].q | zmm1[0].q << 0x40
float temp0_163[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    _mm_mask_shuffle_ps(arg4, temp0_65, _mm_mask_shuffle_ps(arg4, temp0_59, temp0_65, 0x30), 0x80), 
    zmm4[0].o)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm0[0].o, temp0_163)
float temp0_166[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm20, zmm6[0].o, 0x10), zmm6[0].o, 0x20)
zmm6[0].o = _mm_mask_shuffle_ps(arg4, temp0_65, temp0_59, 0xc)
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0x78)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_permute_ps(arg4, temp0_65, 0x46), 
        temp0_59, 0x68), 
    zmm4[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm0[0].o, zmm6[0].o)
zmm0[0].o = _mm_mask_shuffle_ps(arg4, temp0_138, zmm1[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(temp0_154, *(arg1 + 0x78), 0x20)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg4, zmm3[0].o, temp0_166)
float temp0_178[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x94), 0x20)
zmm3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + 0xd4), 0x20)
float temp0_183[0x4] = _mm_mask_load_ss(arg4, *(arg1 + 0x7c))
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
uint32_t zmm24[0x4] = _mm_mask_permute_pd(arg4, zmm0[0].o, 1)
zmm4[0].o = _mm_mask_xor_pd(arg4, zmm24, temp0_132)
float temp0_187[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm6[0].o = _mm_mask_xor_ps(arg4, temp0_187, temp0_132)
float zmm26[0x4] = _mm_mask_xor_ps(arg4, zmm0[0].o, temp0_132)
float temp0_190[0x4] = _mm_permute_ps(zmm4[0].o, 0x80)
zmm3[0].o = _mm_mask_permute_ps(arg4, temp0_121, 0xc1)
float temp0_192[0x4] = _mm_mask_mul_ps(arg4, zmm3[0].o, temp0_190)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm3[0].o = _mm_mask_permute_ps(arg4, temp0_127, 0xc1)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, arg4, zmm1[0].o, temp0_192)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x9c)
float temp0_197[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm4[0].o, zmm6[0].o, 0x20)
zmm4[0].o = _mm_mask_movehdup_ps(arg4, temp0_127)
zmm4[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm4[0].o, temp0_121, 0x68)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_190)
float temp0_202[0x4] =
    _mm_fmadd_ps(_mm_mask_permute_ps(arg4, temp0_127, 0xda), zmm1[0].o, zmm4[0].o)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_187, zmm26, 0x10)
zmm1[0].o = zmm1[0].q | zmm0[0].q << 0x40
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_202)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg4, zmm3[0].o, temp0_197)
zmm3[0].o = _mm_mask_add_ps(arg4, temp0_183, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x4a)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6[0].o, 0x20)
zmm4[0].o = _mm_mask_broadcastss_ps(arg4, temp0_115)
float zmm5[0x4] = _mm_mask_permute_ps(arg4, zmm26, 0xa0)[0].q | zmm0[0].q << 0x40
float temp0_213[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    _mm_mask_shuffle_ps(arg4, temp0_127, _mm_mask_shuffle_ps(arg4, temp0_121, temp0_127, 0x30), 
        0x80), 
    zmm5)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm1[0].o, temp0_213)
zmm24 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm24, zmm6[0].o, 0x10), zmm6[0].o, 0x20)
zmm6[0].o = _mm_mask_shuffle_ps(arg4, temp0_127, temp0_121, 0xc)
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0x78)
float temp0_222[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_permute_ps(arg4, temp0_127, 0x46), 
            temp0_121, 0x68), 
        zmm5), 
    zmm1[0].o, zmm6[0].o)
zmm1[0].o = _mm_mask_shuffle_ps(arg4, zmm26, zmm0[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_222)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg4, zmm4[0].o, zmm24)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_183, temp0_183, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = _mm_mask_shuffle_ps(arg4, temp0_156, temp0_178, 5)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_178, 0xd8)
zmm4[0].o = _mm_mask_permute_pd(arg4, temp0_156, 1)
zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_178, zmm4[0].o, 1)
float temp0_234[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 5), zmm0[0].o, 0xd8)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_234)
zmm5 = _mm_permute_pd(zmm3[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 1)
zmm6[0].o = _mm_mask_add_ps(arg4, temp0_156, zmm3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
int32_t temp0_240 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t temp0_241 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t temp0_242 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg4, 
    _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm6, 7), 0x7fffffff)
int64_t k0 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg4, zmm0, 0x322bcc77, 2)
_kortest_mask8_u8(k0, k0)
float zmm7[0x4]
float zmm25[0x4]
float zmm27[0x4]
float zmm28[0x4]
float zmm31[0x4]

if (&__return_addr u>= 0x48)
label_140008580:
    float temp0_256[0x4] = _mm_mask_movehdup_ps(k0, zmm6[0].o)
    zmm5 = _mm_permute_pd(zmm6[0].o, 1)
    zmm24 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm6[0].o, 0x8a)
    float zmm8[0x4] = zx.o(temp0_240)
    zmm7 = zx.o(temp0_241)
    float temp0_259[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm8, zmm7, 0x1c)
    float temp0_260[0x4] = _mm_mask_load_ps(k0, data_142d3f660)
    zmm9 = zx.o(temp0_242)
    float temp0_263[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm5, 0x10), zmm8, 0x20), 
        zmm9, 0x30)
    zmm4[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_260, zmm1[0].o, 0x46)
    zmm0[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(temp0_256, zmm7, 0x2a)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x9c)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_263, zmm4[0].o)
    float temp0_269[0x4] = _mm_mask_broadcastss_ps(k0, zmm0[0].o)
    float temp0_270[0x4] = _mm_mask_permute_ps(k0, zmm0[0].o, 0x55)
    float temp0_271[0x4] = _mm_mask_permute_ps(k0, zmm0[0].o, 0xaa)
    float temp0_272[0x4] = _mm_mask_permute_ps(k0, zmm0[0].o, 0xff)
    zmm31 = _mm_mask_load_ss(k0, 1f)
    float temp0_274[0x4] = _mm_mask_shuffle_ps(k0, zmm31, zmm9, 0)
    zmm0[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm8, zmm7)
    zmm0[0].o = temp0_19[0].q | zmm0[0].q << 0x40
    zmm0[0].o = _mm_mask_mul_ps(k0, zmm0[0].o, temp0_19)
    float temp0_277[0x4] = _mm_mask3_fmsub_ps(temp0_274, k0, temp0_259, zmm0[0].o)
    zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6[0].o, 5)
    zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm1[0].o, 5)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm1[0].o, 0x8a)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
    zmm4[0].o = _mm_mask3_fmsub_ps(zmm4[0].o, k0, zmm24, zmm0[0].o)
    zmm0[0].o = _mm_mask_mul_ps(k0, temp0_270, temp0_271)
    zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, temp0_269, temp0_272)
    zmm3[0].o = _mm_permute_ps(temp0_277, 0xd8)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
    zmm7 = _mm_permute_pd(zmm3[0].o, 1)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7)
    float temp0_289[0x4] = _mm_permute_ps(zmm3[0].o, 0x39)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_289)
    arg5 = _mm_mask_sub_ps(k0, zmm0[0].o, zmm3[0].o)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg5 f- zmm0[0].o
    
    if (arg5 f!= zmm0[0].o || not(is_ordered.d(arg5, zmm0[0].o)))
        zmm31 = zmm6[0].q | zmm1[0].q << 0x40
        float temp0_293[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm9, temp0_260, 0xf6)
        float temp0_294[0x4] = _mm_broadcastss_ps(temp0_277)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm1[0].o, 0x20)
        zmm3[0].o = __vmovddup_xmmdq_xmmq(temp0_277[0].q)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, k0, zmm31, temp0_294)
        float temp0_299[0x4] = _mm_mask3_fmsub_ps(temp0_271, k0, zmm24, zmm0[0].o)
        zmm0[0].o = _mm_permute_ps(zmm4[0].o, 0x33)
        zmm3[0].o = data_142d4cc30
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm9, 0x10)
        float temp0_302[0x4] = _mm_permute_ps(zmm4[0].o, 0x66)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_302)
        zmm3[0].o = _mm_mask3_fmsub_ps(zmm3[0].o, k0, temp0_293, zmm0[0].o)
        float temp0_305[0x4] = _mm_mask3_fmsub_ps(temp0_270, k0, temp0_259, zmm3[0].o)
        zmm0[0].o = _mm_permute_pd(zmm4[0].o, 3)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8, 0x1d)
        zmm4[0].o = __vmovddup_xmmdq_xmmq(zmm4[0].q)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, temp0_259, zmm0[0].o)
        float temp0_311[0x4] = _mm_mask3_fmsub_ps(temp0_269, k0, temp0_293, zmm3[0].o)
        zmm0[0].o = _mm_permute_ps(temp0_277, 0xcc)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x9d)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0xb0)
        zmm3[0].o = _mm_permute_ps(temp0_277, 0x66)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm24, zmm0[0].o)
        float temp0_318[0x4] = _mm_mask3_fmsub_ps(temp0_272, k0, zmm31, zmm1[0].o)
        zmm0[0].o = data_142fc92f0
        zmm0[0].o = _mm_mask_div_ps(k0, zmm0[0].o, arg5)
        zmm3[0].o = _mm_mask_mul_ps(k0, temp0_318, zmm0[0].o)
        zmm4[0].o = _mm_mask_mul_ps(k0, temp0_305, zmm0[0].o)
        zmm1[0].o = _mm_mask_mul_ps(k0, temp0_299, zmm0[0].o)
        zmm0[0].o = _mm_mask_mul_ps(k0, temp0_311, zmm0[0].o)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x77)
        zmm31 = _mm_mask_shuffle_ps(k0, zmm3[0].o, zmm4[0].o, 0x77)
        zmm6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x22)
    else
        zmm6[0].o = data_142d4cc20
        zmm1[0].o = data_142d4cc30
    
    arg5 = _mm_mask_movehdup_ps(k0, zmm31)
    zmm24 = _mm_mask_permute_pd(k0, zmm31, 1)
    zmm25 = _mm_mask_permute_ps(k0, zmm31, 0xe7)
    zmm26 = _mm_mask_movehdup_ps(k0, zmm6[0].o)
    zmm27 = _mm_mask_permute_pd(k0, zmm6[0].o, 1)
    zmm28 = _mm_mask_permute_ps(k0, zmm6[0].o, 0xe7)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm0[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm5 = _mm_permute_ps(zmm1[0].o, 0xe7)
else
    zmm0[0].o = 0x800000
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 0x800000, 0x30)
    zmm0[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm3, zmm0[0].o, 1), 0x7fffffff)
    k0 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2)
    _kortest_mask8_u8(k0, k0)
    
    if (&__return_addr u>= 0x48)
        goto label_140008580
    
    zmm0[0].o = zx.o(temp0_240)
    zmm3[0].o = zx.o(temp0_241)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
    zmm3[0].o = zx.o(temp0_242)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = 0x800000
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm3[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm0, zmm3[0].o, 1), 0x7fffffff)
    k0 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2)
    _kortest_mask8_u8(k0, k0)
    
    if (&__return_addr u>= 0x48)
        goto label_140008580
    
    zmm0[0].o = 0x3f800000
    zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm28 = _mm_mask_xor_ps(k0, temp0_154, temp0_154)
    zmm27 = _mm_mask_xor_ps(k0, temp0_197, temp0_197)
    zmm26 = _mm_mask_mov_pd(k0, 0x3f800000)
    zmm6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
    zmm25 = _mm_mask_xor_ps(k0, temp0_156, temp0_156)
    zmm24 = _mm_mask_xor_ps(k0, zmm24, zmm24)
    arg5 = _mm_mask_xor_ps(k0, temp0_19, temp0_19)
    zmm31 = _mm_mask_mov_pd(k0, 0x3f800000)

zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x30)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm6[0].o, zmm26, 0x10)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm27, 0x20)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm28, 0x30)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm31, arg5, 0x10)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, zmm24, 0x20)
zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3[0].o, zmm25, 0x30)
float temp0_347[0x4] = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1[0].o, (*arg2)[1]), k0, zmm3[0].o, 
        *arg2), 
    k0, zmm0[0].o, (*arg2)[2])
zmm24 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, temp0_347, *(arg1 + 0x78))
zmm0[0].o = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, temp0_183, 0x80000000)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm3[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm7 = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + 0x88), 0x20)
float temp0_354[0x4] = _mm_mask_mul_ps(k0, temp0_347, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xc8), 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm6[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm4[0].o = _mm_permute_ps(temp0_347, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm1[0].o = _mm_permute_ps(temp0_347, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm6[0].o, zmm4[0].o)
zmm3[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm4[0].o = _mm_mask_mul_ps(k0, temp0_59, zmm4[0].o)
zmm4[0].o = _mm_mask3_fmadd_ps(zmm4[0].o, k0, temp0_53, zmm3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, temp0_65, zmm4[0].o)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7, *(arg1 + 0x94), 0x20)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg1 + 0xd4), 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
float temp0_374[0x4] = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm5 = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, temp0_347, 0x80000000)
zmm6[0].o = _mm_permute_ps(zmm5, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xc9), zmm3[0].o)
zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, temp0_374, zmm6[0].o)
float temp0_381[0x4] = _mm_broadcastss_ps(zmm3[0].o)
float temp0_384[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(k0, temp0_121, _mm_permute_ps(zmm3[0].o, 0xd5)), k0, temp0_115, temp0_381)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
float temp0_386[0x4] = _mm_broadcastss_ps(arg3)
zmm24 = _mm_mask3_fmadd_ps(zmm24, k0, temp0_386, zmm0[0].o)
arg1[0xc].d = _mm_mask_store_ss(k0, zmm24)
*(arg1 + 0xc4) = __vextractps_memf32_xmmf32_imm8_avx512(zmm24, 1)
*(arg1 + 0xc8) = __vextractps_memf32_xmmf32_imm8_avx512(zmm24, 2)
float temp0_391[0x4] = _mm_mask3_fmadd_ps(temp0_354, k0, temp0_386, zmm4[0].o)
*(arg1 + 0xcc) = _mm_mask_store_ss(k0, temp0_391)
arg1[0xd].d = __vextractps_memf32_xmmf32_imm8_avx512(temp0_391, 1)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, temp0_127, temp0_384)
*(arg1 + 0xd4) = __vextractps_memf32_xmmf32_imm8_avx512(temp0_391, 2)
zmm4[0].o = arg1[0xe]
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_386, zmm1[0].o)
float temp0_397[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_386, zmm3[0].o)
uint32_t temp0_398[0x4] = _mm_mask_xor_ps(k0, arg5, arg5)
float temp0_399[0x4] = _mm_broadcastss_ps(zmm1[0].o)
zmm3[0].o = _mm_permute_ps(zmm4[0].o, 0x1b)
float temp0_401[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_399, zmm3[0].o)
float zmm18[0x4] = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(k0, -0x407fffffc0800000)
float temp0_404[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, temp0_401, zmm18), k0, zmm4[0].o, temp0_398)
zmm6[0].o = _mm_permute_ps(zmm1[0].o, 0x55)
zmm3[0].o = _mm_permute_pd(zmm4[0].o, 1)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm3[0].o)
float temp0_408[0x4] = _mm_mask_load_ps(k0, data_142d3f7d0)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, temp0_408, temp0_404)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
float temp0_411[0x4] = _mm_permute_ps(zmm4[0].o, 0xb1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_411)
float temp0_413[0x4] = _mm_mask_load_ps(k0, data_142d3f7b0)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, temp0_413, zmm3[0].o)
float temp0_415[0x4] = _mm_mask_load_ss(k0, 0.5f)
float temp0_416[0x4] = _mm_mask_broadcastss_ps(k0, temp0_415)
float temp0_421[0x4] = _mm_mask3_fmadd_ps(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(temp0_397), _mm_permute_ps(zmm0[0].o, 0x1b)), 
        zmm18), 
    k0, zmm0[0].o, temp0_398)
float temp0_422[0x4] = _mm_permute_ps(temp0_397, 0x55)
zmm3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_422, zmm3[0].o)
zmm3[0].o = _mm_mask3_fmadd_ps(zmm3[0].o, k0, temp0_408, temp0_421)
float temp0_429[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_397, 0xaa), _mm_permute_ps(zmm0[0].o, 0xb1)), 
    k0, temp0_413, zmm3[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, temp0_416, zmm4[0].o)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm4[0].o = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm3[0].o = zmm3[0].o f+ zmm4[0]
arg5 = _mm_mask_load_ss(k0, 9.99999994e-09f)
int64_t k1 = _mm_cmp_round_ss_mask(k0, arg5, zmm3[0].o, 6)
float zmm22[0x4] = _mm_mask_xor_ps(k0, temp0_65, temp0_65)
float temp0_437[0x4] = _mm_mask_move_ss(k1, zmm0[0].o, zmm22)
zmm4[0].o = _mm_mask_mul_round_ss(k0, zmm3[0].o, temp0_415)
zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0].d)
zmm6[0].o = zmm3[0].o f* zmm3[0].d
zmm6[0].o = _mm_fnmadd_round_ss(zmm6[0].o, k0, zmm4[0].o, temp0_415)
zmm6[0].o = _mm_fmadd_ss(zmm6[0].o, zmm3[0].d, zmm3[0].d)
zmm3[0].o = zmm6[0].o f* zmm6[0]
zmm3[0].o = _mm_fnmadd_round_ss(zmm3[0].o, k0, zmm4[0].o, temp0_415)
zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm6[0], zmm6[0])
zmm3[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm3 = _mm256_broadcastss_ps(temp0_437)
zmm4 = __vandnps_ymmqq_ymmqq_memqq(zmm3, data_142fc9280)
zmm1 = _mm256_or_ps(_mm256_and_ps(zmm1, zmm3), zmm4)
int64_t rdx = __vpextrq_gpr64q_xmmdq_immb(zmm1[0].o, 1)
int64_t rax_1 = zmm1[0].q
float temp0_450[0x4] = _mm_mask3_fmadd_ps(temp0_429, k0, temp0_416, zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_450, temp0_450)
zmm3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm0[0].o = zmm0[0].o f+ zmm3[0].d
float temp0_455[0x4] =
    _mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, arg5, zmm0[0].o, 6), zmm0[0].o, zmm22)
zmm3[0].o = _mm_mask_mul_round_ss(k0, zmm0[0].o, temp0_415)
zmm0[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
zmm4[0].o = zmm0[0].o f* zmm0[0]
zmm4[0].o = _mm_fnmadd_round_ss(zmm4[0].o, k0, zmm3[0].o, temp0_415)
zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm0[0], zmm0[0])
zmm0[0].o = zmm4[0].o f* zmm4[0]
zmm0[0].o = _mm_fnmadd_round_ss(zmm0[0].o, k0, zmm3[0].o, temp0_415)
zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm4[0], zmm4[0])
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_450, zmm0[0].o)
float temp0_464[0x4] = _mm_broadcastss_ps(temp0_455)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_464)
arg3 = __vandnps_xmmdq_xmmdq_memdq(temp0_464, data_142d3f660)
arg3 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3)
zmm3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm0[0].o = zmm0[0].o f+ zmm3[0].d
int64_t k1_2 = _mm_cmp_round_ss_mask(k0, zmm22, zmm0[0].o, 2)
arg5 = _mm_mask_load_ss(k0, 1f)
zmm3[0].o = _mm_mask_mov_ps(k0, _mm_mask_load_ss(k0, -1f))
zmm3[0].o = _mm_mask_move_ss(k1_2, zmm0[0].o, arg5)
zmm3[0].o = _mm_broadcastss_ps(zmm3[0].o)
arg1[0xe] = zmm1[0].o
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3, zmm3[0].o)
arg1[0xf] = zmm1[0].o
arg3 = zx.o(rax_1.d)
zmm3[0].o = zx.o(rdx.d)
uint32_t result = (rax_1 u>> 0x20).d
zmm4[0].o = zx.o(result)
zmm5 = *(arg1 + 0x18)
zmm7 = arg1[1].d
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x10)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg3, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm7, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x14), 0x20)
float temp0_483[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg3, 0x10), zmm4[0].o, 0x20)
zmm3[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm7, 0x20)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_483, zmm4[0].o)
zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm6[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
zmm4[0].o = zx.o((rdx u>> 0x20).d)
zmm4[0].o = _mm_broadcastd_epi32(zmm4[0])
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5, 0x20)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm0[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_483, zmm0[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm6[0].o, zmm3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm0[0].o = _mm_mask_add_ps(k0, zmm24, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *(arg1 + 0x48)
arg3 = arg1[4].d
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x10)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + 0x44), 0x20)
zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
float temp0_504[0x4] = _mm_permute_ps(zmm1[0].o, 0xd2)
zmm7 = __vmovsd_xmmdq_memq(arg1[4].q)
zmm6[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
float temp0_509[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_504, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg3, 0x20)), 
    zmm4[0].o, zmm3[0].o)
float temp0_510[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_509, temp0_509)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xff)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x20)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, temp0_510, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(temp0_510, 0xd2)
float temp0_517[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_504, _mm_permute_ps(temp0_510, 0xc9)), zmm4[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_517)
zmm0[0].o = _mm_mask_add_ps(k0, temp0_391, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *arg1
zmm1[0].o = *(arg1 + 0xc)
arg3 = *(arg1 + 8)
zmm3[0].o = *(arg1 + 4)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3, 0x10)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x20)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x30)
zmm4[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm4[0].o, arg1[0xe].d)
zmm4[0].o = _mm_mask_mul_ps(k0, zmm4[0].o, zmm18)
zmm4[0].o =
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm0[0].o, *(arg1 + 0xec))
float temp0_531[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0[0].o, 0x20), 
        zmm3[0].o, 0x30), 
    *(arg1 + 0xe4))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x30)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm0[0].o, *(arg1 + 0xe8))
zmm1[0].o = arg1[3]
arg3 = *(arg1 + 0x3c)
zmm3[0].o = *(arg1 + 0x38)
zmm7 = *(arg1 + 0x34)
float temp0_536[0x4] = _mm_mask3_fmadd_ps(temp0_531, k0, temp0_408, zmm4[0].o)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, zmm3[0].o, 0x10)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm7, 0x20)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 0x30)
zmm4[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm4[0].o, arg1[0xf].d)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, temp0_413, temp0_536)
zmm4[0].o = _mm_mask_mul_ps(k0, zmm4[0].o, zmm18)
zmm4[0].o =
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm1[0].o, *(arg1 + 0xfc))
float temp0_548[0x4] = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm1[0].o, 
                0x20), 
            zmm7, 0x30), 
        *(arg1 + 0xf4)), 
    k0, temp0_408, zmm4[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
zmm1[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1[0].o, *(arg1 + 0xf8))
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, temp0_413, temp0_548)
float temp0_554[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm3[0].o = _mm_permute_pd(temp0_554, 1)
float temp0_556[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_554, zmm3[0].o)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_556)
float temp0_559[0x4] = _mm_mask_broadcastss_ps(k0, 
    _mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, zmm22, temp0_556 f+ zmm3[0].d, 2), zmm0[0].o, arg5))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_559)
arg1[0xa] = zmm0[0].o
arg1[0xb] = zmm1[0].o
_mm256_zeroupper()
return result
