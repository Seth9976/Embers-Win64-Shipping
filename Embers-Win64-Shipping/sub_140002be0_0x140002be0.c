// 函数: sub_140002be0
// 地址: 0x140002be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_18[0x4] = zmm7
float zmm20[0x4] = _mm_mask_load_epi64(arg5, *arg9)
float zmm16[0x4] = _mm_mask_load_ss(arg5, arg8)
int64_t r8 = sx.q(arg3)
int64_t rax_1 = r8 * 3
float zmm18[0x4] = _mm_mask_load_ss(arg5, *(arg1 + (r8 << 2) + 0x78))
double zmm0[0x4]
zmm0[0].o = arg1[r8 + 0xe]
void* r10 = &arg1[r8]
bool c = r10 u>= -0xe0
float zmm1[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1, zmm0[0].o)
float zmm2[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1, *(&arg1[r8] + 0xe4))
float zmm3[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1, *(&arg1[r8] + 0xec))
zmm1 = _mm_permute_pd(zmm1, 1) f* *(&arg1[r8] + 0xe8)
float zmm5[0x4] = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2, 0x88), 0xd8)
float zmm6[0x8]
zmm6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3, zmm5)
zmm3 = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, zmm3)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm1, 0x1c), 
    zmm2, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(1f), zmm0[0].o)
float zmm19[0x4] = _mm_mask_load_ss(arg5, *(arg1 + (rax_1 << 2) + 0x60))
zmm2 = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rax_1 << 2) + 0x64), 0x1d)
float zmm21[0x4] =
    __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0[0].o, *(arg1 + (rax_1 << 2) + 0x68), 0x2b)
float zmm17[0x4] = _mm_mask_mul_ps(arg5, zmm19, _mm_broadcastss_ps(zmm0[0].o))
float zmm4[0x4] = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm3, 0xea), arg5, zmm2, zmm17)
zmm1 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm6[0].o, 0xd5), arg5, zmm21, zmm4)
zmm17 = _mm_mask_permute_ps(arg5, zmm6[0].o, 0xea)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(zmm0[0].o, 0xd5)), arg5, 
    zmm19, zmm17)
zmm5 = _mm_mask3_fmadd_ps(_mm_broadcastss_ps(zmm3), arg5, zmm21, zmm4)
zmm17 = _mm_mask_permute_ps(arg5, zmm3, 0xd5)
zmm2 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_broadcastss_ps(zmm6[0].o)), arg5, 
    zmm19, zmm17)
zmm4 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), arg5, zmm21, zmm2)
zmm17 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x9c), zmm3, 0x60)
zmm2 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3, 0x8c), zmm6[0].o, 0x20)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x4e)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm3, 0x14), zmm0[0].o, 4)
zmm3 = _mm_broadcastss_ps(zmm1)
zmm6[0].o = _mm_permute_ps(zmm1, 0xd5)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, zmm6[0].o)
zmm6[0].o = _mm_mask3_fmadd_ps(zmm6[0].o, arg5, zmm17, zmm3)
zmm19 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm1, 0xea), arg5, zmm0[0].o, zmm6[0].o)
zmm1 = _mm_broadcastss_ps(zmm5)
zmm3 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(zmm5, 0xd5)), arg5, 
    zmm17, zmm1)
zmm21 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm5, 0xea), arg5, zmm0[0].o, zmm3)
zmm1 = _mm_broadcastss_ps(zmm4)
zmm2 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(zmm4, 0xd5)), arg5, 
    zmm17, zmm1)
float zmm23[0x4] = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm4, 0xea), arg5, zmm0[0].o, zmm2)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rax_1 << 2) + 0x80))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rax_1 << 2) + 0x88), 0x20)
zmm17 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(
    __vmovsd_xmmdq_memq(*(arg1 + (rax_1 << 2) + 0xc0)), *(arg1 + (rax_1 << 2) + 0xc8), 0x20)
zmm1 = _mm_broadcast_ss(-0f)
double zmm30[0x2] = _mm_mask_sub_ps(arg5, zmm0[0].o, zmm17)
uint64_t zmm22[0x2] = _mm_mask_permute_pd(arg5, zmm30, 1)
zmm3 = _mm_mask_xor_pd(arg5, zmm22, zmm1)
zmm4 = _mm_mask_movehdup_ps(arg5, zmm30)
zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm1)
zmm1 = _mm_mask_xor_ps(arg5, zmm30, zmm1)
zmm6[0].o = _mm_permute_ps(zmm3, 0x80)
float zmm24[0x4] = _mm_mask_permute_ps(arg5, zmm21, 0xc1)
zmm2 = _mm_mask_permute_ps(arg5, zmm30, 0xd5)
zmm0[0].o = _mm_mask_permute_ps(arg5, zmm23, 0xc1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm6[0].o, zmm24)
zmm24 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm3, zmm30, 0x9c), zmm5, 0x20)
float zmm25[0x4] =
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_movehdup_ps(arg5, zmm23), zmm21, 0x68)
zmm2 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_mask_permute_ps(arg5, zmm23, 0xda)), 
    arg5, zmm6[0].o, zmm25)
zmm2 = _mm_mask3_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm1, 0x10)[0].q | zmm30[0] << 0x40, zmm2), 
    arg5, zmm0[0].o, zmm24)
zmm0[0].o = _mm_mask_permute_ps(arg5, zmm30, 0x4a)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x20)
zmm3 = _mm_mask_broadcastss_ps(arg5, zmm19)
zmm4 = _mm_permute_ps(zmm1, 0xa0)[0].q | zmm30[0] << 0x40
zmm6[0].o = _mm_mask_shuffle_ps(arg5, zmm21, zmm23, 0x30)
zmm6[0].o = _mm_mask_shuffle_ps(arg5, zmm23, zmm6[0].o, 0x80)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm6[0].o)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm0[0].o, zmm3)
zmm22 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm22, zmm5, 0x10), zmm5, 0x20)
zmm5 = _mm_permute_ps(_mm_mask_shuffle_ps(arg5, zmm23, zmm21, 0xc), 0x78)
zmm3 = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm4, 
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_permute_ps(arg5, zmm23, 0x46), zmm21, 
            0x68)), 
    zmm0[0].o, zmm5)
zmm0[0].o = _mm_mask_shuffle_ps(arg5, zmm1, zmm30, 0)
zmm0[0].o = _mm_mask_shuffle_ps(arg5, zmm0[0].o, zmm30, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm6[0].o, zmm22)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(_mm_mask_movedup_pd(arg5, zmm18), zmm0[0].o)
int32_t rdx = __vextractps_gpr32_xmmdq_immb(zmm1, 2)
zmm6[0].o = _mm_mask_add_ps(arg5, zmm18, zmm2)
zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
    _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm6, 7), 0x7fffffff)
zmm3 = _mm_permute_pd(zmm6[0].o, 1)
int64_t k1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0x322bcc77, 2)
int64_t k0 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm20, data_142fc92e0)
_kortest_mask8_u8(k1, k0)
float zmm31[0x4]

if (not(c))
label_140002fcf:
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x8e)
    zmm20 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, zmm1, 0x60)
    zmm22 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1, zmm6[0].o, 0x8c)
    zmm7 = zx.o(rdx)
    arg7 = _mm_mask_load_ps(k0, data_142d3f660)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm3, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7, 0x30)
    zmm3 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1, arg7, 0xf6)
    zmm4 = _mm_fmsub_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x4e), zmm1, 0x60), 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm6[0].o, 0x4c)), 
        zmm0[0].o, zmm3)
    zmm24 = _mm_mask_broadcastss_ps(k0, zmm4)
    zmm25 = _mm_mask_permute_ps(k0, zmm4, 0x55)
    arg6 = _mm_mask_permute_ps(k0, zmm4, 0xaa)
    float zmm29[0x4] = _mm_mask_permute_ps(k0, zmm4, 0xff)
    zmm31 = _mm_mask_load_ss(k0, 1f)
    zmm0[0].o = _mm_mask_shuffle_ps(k0, zmm31, zmm7, 0)
    zmm3 = __vxorps_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    zmm5 = _mm_mask3_fmsub_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm1, 0x73), 
            zmm3), 
        k0, zmm22, zmm0[0].o)
    zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm6[0].o, 0)
    zmm3 = _mm_mask3_fmsub_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6[0].o, 0x55), 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm1, 0x4a)), 
        k0, zmm20, zmm0[0].o)
    zmm0[0].o = _mm_mask_mul_ps(k0, zmm25, arg6)
    zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm24, zmm29)
    zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3, _mm_permute_ps(zmm5, 0xd8))
    zmm2 = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_pd(zmm4, 1))
    zmm2 = __vaddps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(zmm2, 0x39))
    float128 zmm28 = _mm_mask_sub_ps(k0, zmm0[0].o, zmm2)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm28 f- zmm0[0].o
    
    if (zmm28 f!= zmm0[0].o || not(is_ordered.d(zmm28, zmm0[0].o)))
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm6[0].o, 0x10)
        zmm31 = _mm_mask_shuffle_ps(k0, zmm6[0].o, zmm0[0].o, 0x24)
        arg7 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm7, arg7, 0xf6)
        zmm4 = _mm_broadcastss_ps(zmm5)
        zmm0[0].o = _mm_permute_ps(zmm6[0].o, 0x60)
        zmm2 = __vmovddup_xmmdq_xmmq(zmm5[0].q)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2)
        zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, k0, zmm31, zmm4)
        arg6 = _mm_mask3_fmsub_ps(arg6, k0, zmm20, zmm0[0].o)
        zmm0[0].o = _mm_permute_ps(zmm3, 0x33)
        zmm25 = _mm_mask3_fmsub_ps(zmm25, k0, zmm22, 
            _mm_mask3_fmsub_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm7, 0x10), 
                    _mm_permute_ps(zmm3, 0x66)), 
                k0, arg7, zmm0[0].o))
        zmm0[0].o = _mm_permute_pd(zmm3, 3)
        zmm2 = __vmovddup_xmmdq_xmmq(zmm3[0].q)
        zmm3 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 0x9d)
        zmm24 = _mm_mask3_fmsub_ps(zmm24, k0, arg7, 
            _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm3, zmm2), k0, zmm22, zmm0[0].o))
        zmm0[0].o = _mm_permute_ps(zmm5, 0xcc)
        zmm29 = _mm_mask3_fmsub_ps(zmm29, k0, zmm31, 
            _mm_mask3_fmadd_ps(
                __vmulps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm1, 0x70), 
                    _mm_permute_ps(zmm5, 0x66)), 
                k0, zmm20, zmm0[0].o))
        zmm0[0].o = data_142fc92f0
        zmm0[0].o = _mm_mask_div_ps(k0, zmm0[0].o, zmm28)
        zmm2 = _mm_mask_mul_ps(k0, zmm29, zmm0[0].o)
        zmm3 = _mm_mask_mul_ps(k0, zmm25, zmm0[0].o)
        zmm1 = _mm_mask_mul_ps(k0, arg6, zmm0[0].o)
        zmm0[0].o = _mm_mask_mul_ps(k0, zmm24, zmm0[0].o)
        zmm1 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm0[0].o, 0x77)
        zmm31 = _mm_mask_shuffle_ps(k0, zmm2, zmm3, 0x77)
        zmm6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2, zmm3, 0x22)
    else
        zmm6[0].o = data_142d4cc20
        zmm1 = data_142d4cc30
    
    zmm20 = _mm_mask_movehdup_ps(k0, zmm31)
    zmm22 = _mm_mask_permute_pd(k0, zmm31, 1)
    zmm24 = _mm_mask_permute_ps(k0, zmm31, 0xe7)
    zmm25 = _mm_mask_movehdup_ps(k0, zmm6[0].o)
    arg6 = _mm_mask_permute_pd(k0, zmm6[0].o, 1)
    arg7 = _mm_mask_permute_ps(k0, zmm6[0].o, 0xe7)
    zmm3 = __vmovshdup_xmmdq_xmmdq(zmm1)
    zmm2 = _mm_permute_pd(zmm1, 1)
    zmm5 = _mm_permute_ps(zmm1, 0xe7)
else
    zmm2 = __vmovshdup_xmmdq_xmmdq(zmm1)
    zmm0[0].o = __vmovshdup_xmmdq_xmmdq(zmm6[0].o)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1, 0x1c)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm0, _mm_broadcastss_ps(0x800000), 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (not(c))
        goto label_140002fcf
    
    zmm0[0].o = zx.o(rdx)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm2, 0x10), zmm0[0].o, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm0, _mm_broadcastss_ps(0x800000), 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (not(c))
        goto label_140002fcf
    
    zmm2 = 0x3f800000
    zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)
    zmm3 = __vxorps_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    zmm1 = __vxorps_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
    arg7 = _mm_mask_xor_ps(k0, arg7, arg7)
    arg6 = _mm_mask_xor_pd(k0, arg6, arg6)
    zmm25 = _mm_mask_mov_pd(k0, 0x3f800000)
    zmm6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
    zmm24 = _mm_mask_xor_ps(k0, zmm24, zmm24)
    zmm22 = _mm_mask_xor_ps(k0, zmm22, zmm22)
    zmm20 = _mm_mask_xor_epi32(k0, zmm20, zmm20)
    zmm31 = _mm_mask_mov_pd(k0, 0x3f800000)

zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm3, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x30)
zmm1 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm6[0].o, zmm25, 0x10), arg6, 0x20), 
    arg7, 0x30)
zmm2 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm31, zmm20, 0x10), zmm22, 0x20), 
    zmm24, 0x30)
zmm1 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1, (*arg4)[1]), k0, zmm2, *arg4), 
    k0, zmm0[0].o, (*arg4)[2])
zmm0[0].o = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm18, 0x80000000)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1, zmm0[0].o)
zmm2 = _mm_mask_permute_ps(k0, zmm30, 0xc9)
zmm1 = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm1, 0x80000000)
zmm3 = _mm_permute_ps(zmm1, 0xd2)
zmm1 = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_mask_permute_ps(k0, zmm30, 0xd2), _mm_permute_ps(zmm1, 0xc9)), 
    zmm2, zmm3)
zmm2 = _mm_broadcastss_ps(zmm1)
zmm3 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, zmm21, _mm_permute_ps(zmm1, 0xd5)), k0, zmm19, zmm2)
zmm2 = _mm_mask_broadcastss_ps(k0, zmm16)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm2, zmm17)
*(arg1 + (rax_1 << 2) + 0xc0) = zmm0[0].d
*(arg1 + (rax_1 << 2) + 0xc4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rax_1 << 2) + 0xc8) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_permute_ps(zmm1, 0xea)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm23, zmm3)
zmm3 = *(r10 + 0xe0)
zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, zmm0[0].o)
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm2 = _mm_broadcastss_ps(zmm1)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0x1b), zmm2)
zmm20 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(k0, -0x407fffffc0800000)
zmm4 = _mm_fmadd_ps(_mm_mask_mul_ps(k0, zmm4, zmm20), zmm3, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm1, 0x55)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3, 1), zmm0[0].o)
zmm16 = _mm_mask_load_ps(k0, data_142d3f7d0)
zmm5 = _mm_mask3_fmadd_ps(zmm5, k0, zmm16, zmm4)
zmm1 = _mm_permute_ps(zmm1, 0xaa)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xb1), zmm1)
zmm17 = _mm_mask_load_ps(k0, data_142d3f7b0)
zmm4 = _mm_mask3_fmadd_ps(zmm4, k0, zmm17, zmm5)
zmm7 = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), zmm4, zmm3)
zmm3 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm7)
zmm3 = __vaddps_xmmdq_xmmdq_xmmdq(zmm3, _mm_permute_pd(zmm3, 1))
zmm4 = zmm3 f+ __vmovshdup_xmmdq_xmmdq(zmm3)[0]
int64_t k1_3 = _mm_cmp_round_ss_mask(k0, 0x322bcc77, zmm4, 6)
zmm19 = _mm_mask_xor_ps(k0, zmm19, zmm19)
zmm6[0].o = 0xffffffff
zmm6[0].o = _mm_mask_move_ss(k1_3, zmm0[0].o, zmm19)
zmm0[0].o = zmm4 f* 0.5f
zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0])
zmm1 = _mm_fmadd_ss(_mm_fnmadd_ss(zmm4 f* zmm4[0], zmm0[0].d, 0.5f), zmm4[0], zmm4[0])
zmm0[0].o = _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm1 f* zmm1[0], zmm0[0].d, 0.5f), 
    zmm1[0], zmm1[0]))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm0[0].o)
zmm1 = _mm_broadcastss_ps(zmm6[0].o)
zmm4 = __vandnps_xmmdq_xmmdq_memdq(zmm1, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
*(r10 + 0xe0) = zmm0[0].o
zmm0[0].o = arg1[0xf]
zmm1 = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xe])
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
int64_t k1_4 = _mm_cmp_round_ss_mask(k0, zmm19, zmm1 f+ __vmovshdup_xmmdq_xmmdq(zmm1)[0], 2)
zmm18 = _mm_mask_load_ss(k0, 1f)
zmm1 = _mm_broadcastss_ps(_mm_mask_move_ss(k1_4, zmm0[0].o, zmm18))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
arg1[0xf] = zmm0[0].o
zmm0[0].o = *(r10 + 0xe0)
zmm1 = *(r10 + 0xe4)
zmm7 = *(r10 + 0xe8)
zmm6[0].o = *(&arg1[rax_1] + 0x18)
zmm5 = arg1[rax_1 + 1].d
zmm3 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm7, 0x10), 
    zmm0[0].o, 0x20)
zmm2 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm5, 0x10), 
    *(&arg1[rax_1] + 0x14), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x10)
zmm7 = __vmovsd_xmmdq_memq(arg1[rax_1 + 1].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1, 0x20)
zmm1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rax_1] + 0x14)), zmm5, 0x20)
zmm1 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1), zmm3, zmm2)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
zmm2 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm6[0].o, 0x20), k0, zmm1, *(r10 + 0xec))
zmm5 = _mm_permute_ps(zmm1, 0xd2)
zmm1 = _mm_permute_ps(zmm1, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm3, zmm5)
zmm1 = __vinsertps_xmmdq_xmmdq_memd_immb(*(arg1 + (rax_1 << 2) + 0xc0), 
    *(arg1 + (rax_1 << 2) + 0xc4), 0x10)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1, *(arg1 + (rax_1 << 2) + 0xc8), 0x20), zmm0[0].o)
*(arg1 + (rax_1 << 2) + 0x80) = zmm0[0].d
*(arg1 + (rax_1 << 2) + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rax_1 << 2) + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[rax_1]
zmm1 = *(&arg1[rax_1] + 0xc)
zmm2 = *(&arg1[rax_1] + 8)
zmm3 = *(&arg1[rax_1] + 4)
char temp0_324 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm2, 0x10), zmm3, 0x20), 
                zmm0[0].o, 0x30), 
            *(r10 + 0xe0)), 
        zmm20), 
    k0, zmm0[0].o, *(r10 + 0xec))
zmm7 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rax_1] + 8)), zmm0[0].o, 
            0x20), 
        zmm3, 0x30), 
    *(r10 + 0xe4))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2, 0x30)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm0[0].o, *(r10 + 0xe8))
zmm7 = _mm_mask3_fmadd_ps(zmm7, k0, zmm16, temp0_324)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm17, zmm7)
arg1[r8 + 0xa] = zmm0[0].o
zmm0[0].o = arg1[0xb]
zmm1 = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xa])
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
zmm1 = _mm_broadcastss_ps(_mm_mask_move_ss(
    _mm_cmp_round_ss_mask(k0, zmm19, zmm1 f+ __vmovshdup_xmmdq_xmmdq(zmm1)[0], 2), zmm0[0].o, 
    zmm18))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return rax_1 << 4
