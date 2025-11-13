// 函数: sub_140326d60
// 地址: 0x140326d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_18[0x4] = zmm13
float zmm12[0x4]
float var_28[0x4] = zmm12
int32_t var_38[0x4] = arg8
int128_t var_48 = arg7[0].o
int128_t var_68 = arg6[0].o
int32_t zmm0[0x8]
zmm0[0].o = *arg4
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[1], 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[2], 0x20)
float zmm1[0x8]
zmm1[0].o = _mm_broadcast_ss(360f)
float zmm3[0x8]
zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
int32_t zmm4[0x8]
zmm4[0].o = _mm_broadcast_ss(nanf)
int32_t zmm5[0x8]
zmm5[0].o = _mm_broadcast_ss(8388608f)
float zmm7[0x8]
zmm7[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
int64_t k1 = _mm_cmp_ps_mask(arg5, zmm5[0].o, zmm7[0].o, 2)
zmm5 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm3))
zmm3 = _mm256_mask_xor_ps(k1, zmm5, zmm3)
zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
zmm3[0].o = _mm_fnmadd_ps(zmm3[0].o, zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm3[0].o, 0x3c0efa35)
zmm1[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm0[0].o, 0x3e22f983)
zmm1 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm1))
zmm1[0].o =
    __vfnmadd132ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm1[0].o, arg5, zmm0[0].o, 0x40c90fdb)
zmm0[0].o = _mm_broadcast_ss(-0f)
zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm3[0].o = __vorps_xmmu32_maskmskw_xmmu32_memu32_avx512(arg5, zmm3[0].o, 0x40490fdb)
zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
zmm5[0].o = _mm_broadcast_ss(1.57079637f)
int64_t k0 = _mm_cmp_ps_mask(arg5, zmm5[0].o, zmm4[0].o, 1)
zmm4 = _mm256_movm_epi32(k0)
zmm1[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o, zmm4[0].o)
float temp0_25[0x4] = _mm_mask_load_ss(k0, arg11)
float temp0_26[0x4] = _mm_mask_load_ss(k0, arg10)
zmm0[0].o &= zmm4[0].o
zmm0[0].o = __vpord_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm0[0].o, 0x3f800000)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm4[0].o = _mm_broadcast_ss(-2.3889859e-08f)
zmm4[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm3[0].o, 0x3638b88e)
zmm4[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm3[0].o, 0xb9500bf1)
zmm4[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm3[0].o, 0x3c088886)
zmm4[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm4[0].o, k0, zmm3[0].o, 0xbe2aaaab)
int32_t* result = arg9
zmm5[0].o = _mm_broadcast_ss(1f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm5[0].o)
zmm7[0].o = _mm_broadcast_ss(-2.60516146e-07f)
zmm7[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm7[0].o, k0, zmm3[0].o, 0x37cfb4c2)
zmm7[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm7[0].o, k0, zmm3[0].o, 0xbab609aa)
zmm7[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm7[0].o, k0, zmm3[0].o, 0x3d2aaaa3)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
zmm7[0].o = __vfmadd213ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm7[0].o, k0, zmm3[0].o, 0xbf000000)
zmm7[0].o = _mm_fmadd_ps(zmm7[0].o, zmm3[0].o, zmm5[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0)
zmm7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x55)
zmm7[0].o = _mm_permute_ps(zmm7[0].o, 0xd8)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x55)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm4, data_143443020)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm0 = _mm256_add_ps(zmm1, __vxorps_ymmqq_ymmqq_memqq(zmm0, data_143443040))
zmm1[0].o = *result
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, result[1], 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, result[2], 0x20)
zmm3[0].o = __vpshufb_xmmdq_xmmdq_memdq(arg3, data_143443060)
float zmm9[0x8]
zmm9[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
zmm4[0].o = arg2[2]
zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
int64_t k0_1 = _mm256_cmp_ps_mask(k0, zmm4, zmm1, 1)
_kortest_mask8_u8(k0_1, k0_1)
int32_t var_180[0x8]
uint128_t zmm6[0x2]
float zmm20[0x4]
float zmm16[0x8]

if (&var_180 == 0)
    float temp0_270[0x4] = _mm_mask_load_ss(k0_1, *(arg2 + 0xc))
    zmm3[0].o = _mm_mask_broadcastss_ps(k0_1, temp0_270)
    zmm5[0].o = *arg2
    zmm16[0].o = _mm_mask_load_ss(k0_1, *(arg2 + 4))
    zmm6[0] = _mm_broadcastss_ps(zmm5[0].o)
    zmm7[0].o = _mm_permute_ps(zmm0[0].o, 0x1b)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0])
    zmm7[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm7[0].o, data_142d3f7c0)
    zmm7[0].o = _mm_fmadd_ps(zmm7[0].o, zmm0[0].o, zmm3[0].o)
    float temp0_278[0x4] = _mm_mask_broadcastss_ps(k0_1, zmm16[0].o)
    zmm6[0] = _mm_permute_pd(zmm0[0].o, 1)
    zmm6[0] = _mm_mask_mul_ps(k0_1, zmm6[0], temp0_278)
    zmm6[0] = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm6[0], zmm7[0].o, data_142d3f7d0)
    zmm7[0].o = *(arg2 + 8)
    float temp0_282[0x4] = _mm_mask_broadcastss_ps(k0_1, zmm7[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
    zmm0[0].o = _mm_mask_mul_ps(k0_1, zmm0[0].o, temp0_282)
    zmm0[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm0[0].o, zmm6[0], data_142d3f7b0)
    zmm6[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm9[0].o)
    zmm1[0].o = __vmovsd_xmmdq_memq(*(arg2 + 4))
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x20)
    float temp0_289[0x4] = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, temp0_270, 0x30)
    zmm1[0].o = _mm_permute_ps(zmm6[0], 0xd2)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm5[0].o, 0x10)
    zmm5[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5[0].o, zmm16[0].o, 0x20)
    zmm5[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5[0].o, temp0_270, 0x30)
    zmm7[0].o = _mm_permute_ps(zmm6[0], 0xc9)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
    zmm1[0].o = _mm_mask3_fmsub_ps(zmm1[0].o, k0_1, temp0_289, zmm7[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm1[0].o, zmm6[0])
    zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
    zmm1[0].o = _mm_mask3_fmsub_ps(zmm1[0].o, k0_1, temp0_289, zmm7[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm1[0].o, arg2[1])
    zmm20 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm4[0].o, data_142e6da00)
else
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm5[0].o = _mm_permute_ps(zmm3[0].o, 1)
    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x1a)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o)
    float temp0_69[0x4] = _mm_mask_load_ss(k0_1, 1f)
    float temp0_70[0x4] = _mm_mask_broadcastss_ps(k0_1, temp0_69)
    zmm3[0].o = _mm_mask_sub_ps(k0_1, temp0_70, zmm3[0].o)
    zmm16[0].o = _mm_mask_load_ps(k0_1, data_142e6da00)
    float temp0_73[0x4] = _mm_mask_mul_ps(k0_1, zmm3[0].o, zmm16[0].o)
    zmm3[0].o = _mm_permute_ps(zmm0[0].o, 4)
    zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    float temp0_81[0x4] = _mm_mask_mul_ps(k0_1, zmm0[0].o, zmm16[0].o)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    float temp0_83[0x4] = _mm_mask_mul_ps(k0_1, zmm1[0].o, zmm16[0].o)
    zmm7[0].o = _mm_mask_permute_pd(k0_1, temp0_81, 1)
    int32_t temp0_85[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg8, arg8)
    arg7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_85, temp0_73, 1)
    arg6 = data_143443080
    zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg7[0].o, temp0_81, 0x10)
    zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_83, 4)
    zmm3 = _mm256_blend_ps(arg7, zmm3, 0xf)
    zmm5[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_83, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_73, 2)
    zmm5[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5[0].o, temp0_81, 0x60)
    zmm3 = _mm256_insertf128_ps(zmm3, zmm5[0].o, 1)
    zmm5 = _mm256_blend_ps(arg6, zmm7, 1)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_83, 2)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, temp0_73, 4)
    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, zmm5[0].o, 8)
    zmm5 = _mm256_insertf128_ps(zmm7, zmm5[0].o, 1)
    int32_t var_e0_1[0x8] = zmm5
    float var_100_1[0x8] = zmm3
    zmm3[0].o = *arg2
    zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm6[0] = _mm_permute_ps(zmm7[0].o, 0xc1)
    zmm7[0].o = _mm_permute_ps(zmm7[0].o, 0xda)
    zmm7[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6[0], zmm7[0].o)
    zmm7[0].o = _mm_mask_sub_ps(k0_1, temp0_70, zmm7[0].o)
    zmm6[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg2 + 4), 0x10)
    zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm3[0].o, 4)
    zmm7[0].o = _mm_permute_ps(zmm5[0].o, 0x29)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x12)
    zmm5[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm5[0].o, *(arg2 + 0xc))
    zmm7[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm0[0].o = *(arg2 + 0x24)
    zmm1[0].o = _mm_broadcastss_ps(zmm4[0].o)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 1)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + 0x28), 0x10)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
    zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm4[0].o = arg2[1].d
    zmm5[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_85, zmm6[0], 1)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm1[0].o, 0x10)
    zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 4)
    zmm7[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm0[0].o, 1)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm6[0], 2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm1[0].o, 0x60)
    zmm5 = _mm256_blend_ps(arg6, zmm5, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 2)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0], 4)
    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 1)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + 0x14), 0x10)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg2 + 0x18), 0x20)
    zmm20 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm16[0].o, arg2[2])
    zmm5[0].o = _mm_broadcastss_ps(temp0_73)
    zmm7[0].o = _mm_permute_ps(temp0_83, 0xaa)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
    zmm7[0].o = _mm_fmadd_ps(zmm7[0].o, zmm3[0].o, zmm5[0].o)
    zmm16[0].o = _mm_mask_broadcastss_ps(k0_1, temp0_81)
    zmm16[0].o = _mm_mask3_fmadd_ps(zmm16[0].o, k0_1, zmm1[0].o, zmm7[0].o)
    int32_t var_f4
    zmm16[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm16[0].o, k0_1, zmm4[0].o, var_f4)
    int32_t var_e8
    zmm5[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm0[0].o, var_e8)
    int32_t var_f0
    zmm5[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm5[0].o, k0_1, zmm3[0].o, var_f0)
    int32_t var_ec
    zmm5[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm5[0].o, k0_1, zmm1[0].o, var_ec)
    int32_t var_e4
    zmm5[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm5[0].o, k0_1, zmm4[0].o, var_e4)
    zmm6[0] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm0[0].o, var_e0_1[2])
    zmm6[0] =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm6[0], k0_1, zmm3[0].o, var_e0_1[0])
    zmm6[0] =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm6[0], k0_1, zmm1[0].o, var_e0_1[1])
    zmm6[0] =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm6[0], k0_1, zmm4[0].o, var_e0_1[3])
    zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm0[0].o, var_e0_1[6])
    zmm0[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm0[0].o, k0_1, zmm3[0].o, var_e0_1[4])
    zmm0[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm0[0].o, k0_1, zmm1[0].o, var_e0_1[5])
    zmm0[0].o =
        __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(zmm0[0].o, k0_1, zmm4[0].o, var_e0_1[7])
    zmm1[0].o = _mm_mask_movehdup_ps(k0_1, zmm16[0].o)
    double temp0_157[0x2] = _mm_mask_permute_pd(k0_1, zmm16[0].o, 1)
    zmm4[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm5[0].o, 0))
    float temp0_159[0x4] = _mm_mask_movehdup_ps(k0_1, zmm5[0].o)
    float zmm21[0x4] = _mm_mask_permute_pd(k0_1, zmm5[0].o, 1)
    result = zx.q(__vextractps_gpr32_xmmdq_immb(zmm6[0], 0))
    zmm3[0].o = zx.o(result.d)
    zmm5[0].o = _mm_blend_epi32(zmm5[0].o, zmm4[0].o, 1)
    zmm5 = _mm256_insertf32x4(k0_1, zmm16, zmm5[0].o, 1)
    zmm7[0].o = __vmovshdup_xmmdq_xmmdq(zmm6[0])
    double temp0_165[0x2] = _mm_mask_permute_pd(k0_1, zmm6[0], 1)
    zmm6[0] = _mm_blend_epi32(zmm6[0], zmm3[0].o, 1)
    zmm0 = _mm256_inserti128_si256(zmm6, zmm0[0].o, 1)
    var_180 = zmm5
    int224_t var_160_1 = zmm0[0].28
    zmm1[0].o = zmm1[0].o f* zmm1[0]
    zmm1[0].o = _mm_mask3_fmadd_round_ss(zmm1[0].o, k0_1, zmm16[0].o, zmm16[0].o)
    zmm1[0].o = _mm_mask3_fmadd_round_ss(zmm1[0].o, k0_1, temp0_157, temp0_157)
    zmm6[0] = _mm_mask_mul_round_ss(k0_1, temp0_159, temp0_159)
    zmm6[0] = _mm_fmadd_ss(zmm6[0], zmm4[0], zmm4[0])
    zmm6[0] = _mm_mask3_fmadd_round_ss(zmm6[0], k0_1, zmm21, zmm21)
    zmm0[0].o = zmm7[0].o f* zmm7[0]
    zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm3[0], zmm3[0])
    zmm0[0].o = _mm_mask3_fmadd_round_ss(zmm0[0].o, k0_1, temp0_165, temp0_165)
    float temp0_175[0x4] = _mm_mask_load_ss(k0_1, -9.99999994e-09f)
    zmm4[0].o = _mm_add_round_ss(k0_1, zmm1[0].o, temp0_175)
    float temp0_177[0x4] = _mm_mask_load_ss(k0_1, 0.5f)
    zmm7[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm1[0].o = _mm_mask_mul_round_ss(k0_1, zmm1[0].o, temp0_177)
    zmm5[0].o = zmm7[0].o f* zmm7[0]
    zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, k0_1, zmm1[0].o, temp0_177)
    zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm7[0], zmm7[0])
    zmm7[0].o = zmm5[0].o f* zmm5[0]
    zmm7[0].o = _mm_fnmadd_round_ss(zmm7[0].o, k0_1, zmm1[0].o, temp0_177)
    zmm7[0].o = _mm_fmadd_ss(zmm7[0].o, zmm5[0], zmm5[0])
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    int64_t k1_1 = _mm_cmp_round_ss_mask(k0_1, zmm1[0].o, zmm4[0].o, 2)
    zmm4[0].o = _mm_mask_mov_ps(k0_1, temp0_69)
    zmm4[0].o = _mm_mask_move_ss(k1_1, zmm0[0].o, zmm7[0].o)
    zmm5[0].o = _mm_add_round_ss(k0_1, zmm6[0], temp0_175)
    zmm7[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6[0], zmm6[0].d)
    zmm6[0] = _mm_mask_mul_round_ss(k0_1, zmm6[0], temp0_177)
    zmm3[0].o = zmm7[0].o f* zmm7[0]
    zmm3[0].o = _mm_fnmadd_round_ss(zmm3[0].o, k0_1, zmm6[0], temp0_177)
    zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm7[0], zmm7[0])
    zmm7[0].o = zmm3[0].o f* zmm3[0]
    zmm7[0].o = _mm_fnmadd_round_ss(zmm7[0].o, k0_1, zmm6[0], temp0_177)
    zmm7[0].o = _mm_fmadd_ss(zmm7[0].o, zmm3[0], zmm3[0])
    int64_t k1_2 = _mm_cmp_round_ss_mask(k0_1, zmm1[0].o, zmm5[0].o, 2)
    zmm3[0].o = _mm_mask_mov_ps(k0_1, temp0_69)
    zmm3[0].o = _mm_mask_move_ss(k1_2, zmm0[0].o, zmm7[0].o)
    zmm5[0].o = _mm_add_round_ss(k0_1, zmm0[0].o, temp0_175)
    zmm6[0] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
    zmm0[0].o = _mm_mask_mul_round_ss(k0_1, zmm0[0].o, temp0_177)
    zmm7[0].o = zmm6[0] f* zmm6[0].d
    zmm7[0].o = _mm_fnmadd_round_ss(zmm7[0].o, k0_1, zmm0[0].o, temp0_177)
    zmm7[0].o = _mm_fmadd_ss(zmm7[0].o, zmm6[0].d, zmm6[0].d)
    zmm6[0] = zmm7[0].o f* zmm7[0]
    zmm6[0] = _mm_fnmadd_round_ss(zmm6[0], k0_1, zmm0[0].o, temp0_177)
    zmm6[0] = _mm_fmadd_ss(zmm6[0], zmm7[0], zmm7[0])
    int64_t k1_3 = _mm_cmp_round_ss_mask(k0_1, zmm1[0].o, zmm5[0].o, 2)
    zmm0[0].o = _mm_mask_mov_ps(k0_1, temp0_69)
    zmm0[0].o = _mm_mask_move_ss(k1_3, zmm0[0].o, zmm6[0])
    zmm1[0].o = _mm_mask_mul_round_ss(k0_1, zmm4[0].o, zmm16[0].o)
    zmm5[0].o = zmm4[0].o f* var_180[1]
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x10)
    int32_t var_178
    zmm4[0].o = zmm4[0].o f* var_178
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0x20)
    int32_t var_170
    zmm4[0].o = zmm3[0].o f* var_170
    int32_t var_16c
    zmm5[0].o = zmm3[0].o f* var_16c
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
    int32_t var_168
    zmm3[0].o = zmm3[0].o f* var_168
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x20)
    zmm4[0].o = zmm0[0].o f* var_160_1.d
    zmm5[0].o = zmm0[0].o f* var_160_1:4.d
    zmm0[0].o = zmm0[0].o f* var_160_1:8.d
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x20)
    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    int64_t k1_4 = _mm_cmp_ps_mask(k0_1, zmm4[0].o, zmm20, 2)
    _mm256_broadcast_ss(-1f)
    zmm5 = _mm256_mask_load_ps(k1_4, data_1434430a0)
    zmm4 = _mm256_broadcastss_ps(zmm5[0].o)
    zmm1 = _mm256_mul_ps(zmm4, zmm1)
    zmm16[0].o = _mm_mask_movehdup_ps(k0_1, zmm1[0].o)
    zmm21 = _mm_mask_permute_pd(k0_1, zmm1[0].o, 1)
    var_180[0] = zmm1[0]
    var_180[1] = _mm_mask_store_ss(k0_1, zmm16[0].o)
    float var_178_1 = _mm_mask_store_ss(k0_1, zmm21)
    zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
    zmm4 = _mm256_broadcastsd_pd(zmm4[0].o)
    zmm6 = _mm256_mul_ps(zmm4, zmm3)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm6[0])
    int32_t var_170_1 = zmm6[0].d
    zmm4[0].o = _mm_permute_pd(zmm6[0], 1)
    float var_16c_1 = zmm3[0]
    int32_t var_168_1 = zmm4[0]
    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xea)
    arg6 = _mm256_mul_ps(_mm256_broadcastsd_pd(zmm5[0].o), zmm0)
    zmm7[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
    zmm0[0].o = _mm_permute_pd(arg6[0].o, 1)
    var_160_1.d = arg6[0]
    var_160_1:4.d = zmm7[0]
    var_160_1:8.d = zmm0[0]
    zmm9 = _mm256_broadcast_ss(1.17549435e-38f)
    zmm5 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_1, _mm256_blend_ps(zmm9, zmm1, 7), 
        0x7fffffff)
    k0_1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0_1, zmm5, 0x38d1b717, 2)
    _kortest_mask8_u8(k0_1, k0_1)
    
    if (&var_180 u< 0)
        zmm0[0].o = data_142d3f660
    else
        zmm5 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_1, _mm256_blend_ps(zmm9, zmm6, 7), 
            0x7fffffff)
        k0_1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0_1, zmm5, 0x38d1b717, 2)
        _kortest_mask8_u8(k0_1, k0_1)
        
        if (&var_180 u< 0)
            zmm0[0].o = data_142d3f660
        else
            zmm5 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_1, 
                _mm256_blend_ps(zmm9, arg6, 7), 0x7fffffff)
            k0_1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0_1, zmm5, 0x38d1b717, 2)
            _kortest_mask8_u8(k0_1, k0_1)
            
            if (&var_180 u< 0)
                zmm0[0].o = data_142d3f660
            else
                zmm5[0].o = zmm1[0].o f+ zmm3[0]
                double zmm22[0x2] = _mm_add_round_ss(k0_1, zmm0[0].o, zmm5[0].o)
                zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
                
                if (zmm22 f<= zmm5[0].o)
                    zmm3[0].o f- zmm1[0]
                    int32_t rax_1
                    rax_1.b = zmm3[0].o f> zmm1[0]
                    int64_t rdx = 0x14
                    
                    if (zmm3[0].o f<= zmm1[0])
                        rdx = 0
                    
                    uint64_t rdx_1 = 2
                    
                    if (zmm0[0].o f<= *(&var_180 + rdx))
                        rdx_1 = zx.q(rax_1)
                    
                    int64_t r9 = sx.q(*(&data_1434430e0 + (rdx_1 << 2)))
                    zmm0[0].o = var_180[zx.q((rdx_1 * 5).d)]
                    int64_t r8_1 = sx.q(*(&data_1434430e0 + (r9 << 2)))
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r9 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r8_1 * 5).d)]
                    zmm0[0].o = _mm_add_round_ss(k0_1, zmm0[0].o, temp0_69)
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = _mm_div_round_ss(k0_1, temp0_69, zmm0[0].o)
                    zmm1[0].o = _mm_div_round_ss(k0_1, temp0_69, zmm0[0].o)
                    zmm1[0].o = _mm_mask_mul_round_ss(k0_1, zmm1[0].o, temp0_177)
                    int128_t var_110
                    *(&var_110 + (rdx_1 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r9 + (rdx_1 << 2)).d)]
                    zmm1[0].o = zmm1[0].o f+ var_180[sx.q((rdx_1 + (r9 << 2)).d)]
                    zmm0[0].o = _mm_mask_mul_round_ss(k0_1, zmm0[0].o, temp0_177)
                    zmm1[0].o = zmm1[0].o f* zmm0[0]
                    *(&var_110 + (r9 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r8_1 + (rdx_1 << 2)).d)]
                    zmm1[0].o = zmm1[0].o f+ var_180[sx.q((rdx_1 + (r8_1 << 2)).d)]
                    zmm1[0].o = zmm0[0].o f* zmm1[0]
                    *(&var_110 + (r8_1 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r8_1 + (r9 << 2)).d)]
                    result = sx.q((r9 + (r8_1 << 2)).d)
                    zmm1[0].o = zmm1[0].o f- var_180[result]
                    zmm0[0].o = zmm0[0].o f* zmm1[0]
                    int32_t var_104_1 = zmm0[0]
                    zmm0[0].o = var_110
                else
                    zmm0[0].o = _mm_add_round_ss(k0_1, zmm22, temp0_69)
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = _mm_div_round_ss(k0_1, temp0_69, zmm0[0].o)
                    zmm1[0].o = _mm_mask_mul_round_ss(k0_1, zmm0[0].o, temp0_177)
                    zmm3[0].o = zmm4[0].o f- zmm7[0]
                    zmm3[0].o = zmm3[0].o f* zmm1[0]
                    zmm4[0].o = _mm_mask_sub_round_ss(k0_1, arg6[0].o, zmm21)
                    zmm4[0].o = zmm4[0].o f* zmm1[0]
                    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
                    zmm4[0].o = _mm_mask_sub_round_ss(k0_1, zmm16[0].o, zmm6[0])
                    zmm1[0].o = zmm4[0].o f* zmm1[0]
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x20)
                    zmm0[0].o = _mm_div_round_ss(k0_1, temp0_69, zmm0[0].o)
                    zmm0[0].o = _mm_mask_mul_round_ss(k0_1, zmm0[0].o, temp0_177)
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
    
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    zmm3[0].o = 0x322bcc77
    int64_t k1_5 = _mm_cmp_round_ss_mask(k0_1, 0x322bcc77, zmm1[0].o, 6)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(0x322bcc77, 0x322bcc77)
    zmm4[0].o = 0xffffffff
    zmm4[0].o = _mm_mask_move_ss(k1_5, zmm0[0].o, zmm3[0].o)
    zmm3[0].o = _mm_mask_mul_round_ss(k0_1, zmm1[0].o, temp0_177)
    zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm5[0].o = zmm1[0].o f* zmm1[0]
    zmm5[0].o = _mm_fnmadd_round_ss(zmm5[0].o, k0_1, zmm3[0].o, temp0_177)
    zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm1[0], zmm1[0])
    zmm1[0].o = zmm5[0].o f* zmm5[0]
    zmm1[0].o = _mm_fnmadd_round_ss(zmm1[0].o, k0_1, zmm3[0].o, temp0_177)
    zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm5[0], zmm5[0])
    zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = _mm_broadcastss_ps(zmm4[0].o)
    zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
    zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = var_160_1:0x18.d
    zmm3[0].o = __vmovsd_xmmdq_memq(var_160_1:0x10.q)
    zmm1[0].o = zmm3[0].q | zmm1[0].q << 0x40
zmm3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0_1, zmm20, data_142d4cc30)
zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
zmm5[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm7[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm6[0] = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm6[0] = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0], zmm0[0].o)
zmm7[0].o = _mm_fmsub_ps(zmm7[0].o, zmm5[0].o, zmm6[0])
zmm7[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm7[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm7[0].o, 0xd2)
zmm7[0].o = _mm_permute_ps(zmm7[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm5[0].o, zmm3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm0[0].o = __vandps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0_1, zmm0[0].o, 0x7fffffff)
zmm3[0].o = arg3 f* 0.5f
zmm3[0].o = _mm_mask_mul_round_ss(k0_1, zmm3[0].o, temp0_25)
zmm3[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
float temp0_325[0x4] = _mm_mask_mul_round_ss(k0_1, arg3, temp0_26)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float temp0_327[0x4] = _mm_broadcastss_ps(temp0_325)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_327)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_327, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x30)
*arg1 = zmm1[0].o
arg1[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x14) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
*(arg1 + 0x18) = 1
arg6[0].o = var_68
arg7[0].o = var_48
_mm256_zeroupper()
return result
