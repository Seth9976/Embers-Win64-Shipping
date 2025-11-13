// 函数: sub_140004570
// 地址: 0x140004570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38[0x4] = arg7
float var_68[0x4] = arg6
float zmm17[0x4] = _mm_mask_load_epi64(arg5, *arg15)
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg2[1].d, 0x20)
float zmm1[0x8]
zmm1[0].o = _mm_broadcastss_ps(arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x88), 0x20)
float zmm19[0x4] = _mm_mask_div_ps(arg5, zmm0[0].o, zmm1[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xc8), 0x20)
float zmm21[0x4] = _mm_mask_sub_ps(arg5, arg3[0].o, zmm0[0].o)
zmm0[0].o = arg1[0x12].d
zmm1[0].o = *(arg1 + 0x118)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x11c))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x20)
float zmm4[0x4] = _mm_mask_permute_ps(arg5, zmm21, 0xd2)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x11c), 0x20)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm21, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, arg3[0].o, zmm4)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0x10].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x108), 0x20)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x94), 0x20)
zmm4 = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, *(arg1 + 0xd4), 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = *(arg1 + 0x12c)
zmm4 = *(arg1 + 0x124)
float zmm5[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x128)), zmm4, 0x20)
float zmm6[0x4] = _mm_permute_ps(zmm1[0].o, 0xd2)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x128), 0x20)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm5, zmm6)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x10c))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x114), 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_mask_mul_ps(arg5, zmm19, zmm0[0].o)
zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
float zmm9[0x4] = arg4 f* *(arg1 + 0x78)
float zmm16[0x4] = _mm_add_round_ss(arg5, arg3[0].o, zmm0[0].o)
float zmm8[0x4] = *(arg1 + 0x7c)
zmm1[0].o = _mm_broadcastss_ps(arg4)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[6].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x68), 0x20)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm1[0].o = arg1[0xe]
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg4 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, arg3[0].o, *(arg1 + 0xe4))
zmm5 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, arg3[0].o, *(arg1 + 0xec))
arg3[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = arg3[0].o f* *(arg1 + 0xe8)
zmm6 = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x88), 0xd8)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm6)
zmm5 = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, zmm5)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 0x4e), zmm1[0].o, 0xc)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x78)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg3[0].o, 0x1c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x60)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
float zmm18[0x4] = __vbroadcastss_xmmf32_maskmskw_memf32_avx512(arg5, 1f)
arg4 = _mm_mask_sub_ps(arg5, zmm18, arg3[0].o)
arg6 = __vxorps_xmmdq_xmmdq_xmmdq(arg6, arg6)
zmm6 = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6, zmm4, 1)
arg7 = __vxorps_xmmdq_xmmdq_xmmdq(arg7, arg7)
float zmm7[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7, zmm4, 2)
float zmm11[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7, zmm4, 4)
arg3[0].o = _mm_broadcastss_ps(arg4)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm5, 0xea)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm7, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm11, zmm1[0].o)
float zmm20[0x4] = _mm_mask_permute_ps(arg5, zmm0[0].o, 0xea)
zmm1[0].o = _mm_permute_ps(arg4, 0xd5)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm6, zmm20)
zmm4 = _mm_fmadd_ps(_mm_broadcastss_ps(zmm5), zmm11, zmm1[0].o)
zmm20 = _mm_mask_permute_ps(arg5, zmm5, 0xd5)
zmm1[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm6, zmm20)
zmm7 = _mm_fmadd_ps(_mm_permute_ps(arg4, 0xea), zmm11, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x9c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0x60)
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm5, 0x8c), 
    zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x4e)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 4)
arg4 = _mm_broadcastss_ps(arg3[0].o)
zmm5 =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(arg3[0].o, 0xd5)), zmm1[0].o, arg4)
zmm11 = _mm_fmadd_ps(_mm_permute_ps(arg3[0].o, 0xea), zmm0[0].o, zmm5)
arg3[0].o = _mm_broadcastss_ps(zmm4)
arg4 =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm4, 0xd5)), zmm1[0].o, arg3[0].o)
float zmm12[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm4, 0xea), zmm0[0].o, arg4)
arg3[0].o = _mm_broadcastss_ps(zmm7)
arg4 =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm7, 0xd5)), zmm1[0].o, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm7, 0xea)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm0[0].o, arg4)
int32_t rsi = __vextractps_gpr32_xmmdq_immb(zmm11, 0)
int32_t rax_1 = __vextractps_gpr32_xmmdq_immb(zmm12, 0)
int32_t r11 = __vextractps_gpr32_xmmdq_immb(zmm12, 1)
int32_t r10 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 0)
int32_t r9 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
int32_t r8 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
zmm0[0].o = arg1[0xf]
zmm20 = _mm_mask_broadcastss_ps(arg5, zmm16)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg3[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xf4))
arg4 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm1[0].o, *(arg1 + 0xfc))
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(arg1 + 0xf8)
zmm4 = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x88), 0xd8)
zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, zmm4)
arg4 = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, arg4)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = _mm_mask_sub_ps(arg5, zmm18, zmm0[0].o)
zmm1[0].o = *(arg1 + 0x6c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7, arg1[7].d, 0x10)
zmm18 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(arg7, *(arg1 + 0x74), 0x20)
zmm7 = _mm_broadcastss_ps(zmm0[0].o)
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7)
zmm6 = _mm_fmadd_ps(_mm_permute_ps(arg4, 0xea), arg3[0].o, zmm7)
zmm7 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm5, 0xd5), arg5, zmm18, zmm6)
zmm16 = _mm_mask_permute_ps(arg5, zmm5, 0xea)
zmm6 = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm6 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm6), arg5, zmm1[0].o, zmm16)
zmm4 = _mm_mask3_fmadd_ps(_mm_broadcastss_ps(arg4), arg5, zmm18, zmm6)
zmm16 = _mm_mask_permute_ps(arg5, arg4, 0xd5)
zmm6 = _mm_broadcastss_ps(zmm5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm6)
arg3[0].o = _mm_mask3_fmadd_ps(arg3[0].o, arg5, zmm1[0].o, zmm16)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm18, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x9c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x60)
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 0x8c), zmm5, 0x20)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x4e), 
        arg4, 0x14), 
    zmm0[0].o, 4)
arg4 = _mm_broadcastss_ps(zmm7)
zmm5 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm7, 0xd5)), arg3[0].o, arg4)
zmm18 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm7, 0xea), arg5, zmm0[0].o, zmm5)
arg4 = _mm_broadcastss_ps(zmm4)
zmm5 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm4, 0xd5)), arg3[0].o, arg4)
float zmm24[0x4] = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm4, 0xea), arg5, zmm0[0].o, zmm5)
arg4 = _mm_broadcastss_ps(zmm1[0].o)
zmm4 =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm1[0].o, 0xd5)), arg3[0].o, arg4)
float zmm26[0x4] =
    _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm1[0].o, 0xea), arg5, zmm0[0].o, zmm4)
arg12 = _mm_mask_xor_pd(arg5, arg12, arg12)
zmm9 f- arg12
bool cond:1 = zmm9 f>= arg12
bool cond:2 = zmm9 f>= arg12
bool cond:4 = zmm9 f< arg12
arg13 = _mm_mask_xor_ps(arg5, arg13, arg13)
arg10 = _mm_mask_xor_pd(arg5, arg10, arg10)
arg9 = _mm_mask_xor_ps(arg5, arg9, arg9)
arg11 = _mm_mask_xor_ps(arg5, arg11, arg11)
arg8 = _mm_mask_xor_ps(arg5, arg8, arg8)

if (not(zmm9 f<= arg12))
    zmm0[0].o = _mm_mask_permute_pd(arg5, zmm21, 1)
    arg8 = _mm_mask_movehdup_ps(arg5, zmm21)
    arg3[0].o = _mm_broadcast_ss(-0f)
    arg4 = __vxorpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
    zmm4 = _mm_mask_xor_ps(arg5, arg8, arg3[0].o)
    zmm16 = _mm_mask_xor_ps(arg5, zmm21, arg3[0].o)
    arg11 = _mm_mask_permute_ps(arg5, arg4, 0x80)
    arg9 = zx.o(r11)
    zmm6 = zx.o(rax_1)
    arg3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg9, zmm6, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm6, 0x20)
    arg10 = _mm_mask_mul_ps(arg5, arg11, arg3[0].o)
    zmm1[0].o = _mm_mask_permute_ps(arg5, zmm21, 0xd5)
    zmm7 = zx.o(r9)
    arg3[0].o = zx.o(r10)
    zmm5 = _mm_mask3_fmadd_ps(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, arg3[0].o, 0x10), arg3[0].o, 0x20), 
        arg5, zmm1[0].o, arg10)
    arg10 = _mm_mask_mul_ps(arg5, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vunpcklps_xmmdq_xmmdq_xmmdq(arg4, zmm0[0].o), zmm4, 
            0x20), 
        zmm5)
    zmm5 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_permute_ps(zmm7, 0xe0), arg9, 0x20)
    arg12 = zx.o(r8)
    arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_mask_shuffle_epi32(arg5, arg12, 0xe0), zmm7, 0x20)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
    zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, arg11, zmm5)
    arg4 = _mm_mask3_fmadd_ps(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg8, zmm16, 0x10)[0].q | zmm21[0].q << 0x40, 
        arg5, zmm1[0].o, arg10)
    arg7 = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6, zmm9, 1)
    arg8 = _mm_mask_add_ps(arg5, arg7, arg4)
    arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x10), zmm4, 0x20)
    zmm1[0].o = zx.o(rsi)
    zmm1[0].o = _mm_broadcastd_epi32(zmm1[0])
    arg10 = _mm_mask_mul_ps(arg5, arg4, zmm1[0].o)
    zmm5 = _mm_mask_permute_ps(arg5, zmm16, 0xa0)[0].q | zmm21[0].q << 0x40
    zmm1[0].o = _mm_permute_ps(arg3[0].o, 0xe0)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x20)
    zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, arg5, zmm5, arg10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x20)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm6, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x20)
    arg3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg12, zmm7, 0x10)
    arg3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg3[0].o, arg9, 0x20)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3[0].o)
    arg3[0].o = _mm_fmadd_ps(arg3[0].o, arg4, zmm1[0].o)
    zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm16, zmm21, 0)
    zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm1[0].o, zmm21, 0xc8)
    zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, arg3[0].o, zmm0[0].o)
    zmm0[0].o = __vmovddup_xmmdq_xmmq(arg7[0].q)
    arg9 = _mm_mask_add_ps(arg5, zmm0[0].o, zmm1[0].o)
    arg11 = _mm_mask_movehdup_ps(arg5, arg8)
    arg10 = _mm_mask_permute_pd(arg5, arg8, 1)
    arg13 = _mm_mask_movehdup_ps(arg5, arg9)
    arg12 = _mm_mask_permute_pd(arg5, arg9, 1)

zmm16 = _mm_mask_load_ss(arg5, arg14)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm19 = _mm_mask_mul_ps(arg5, zmm19, zmm20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x94), 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_broadcast_ss(-0f)
zmm20 = _mm_mask_permute_pd(arg5, zmm0[0].o, 1)
arg4 = _mm_mask_xor_pd(arg5, zmm20, zmm1[0].o)
zmm6 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm6, zmm1[0].o)
zmm21 = _mm_mask_xor_ps(arg5, zmm0[0].o, zmm1[0].o)
zmm4 = _mm_permute_ps(arg4, 0x80)
arg3[0].o = _mm_mask_permute_ps(arg5, zmm24, 0xc1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
zmm7 = _mm_permute_ps(zmm0[0].o, 0xd5)
float zmm30[0x4] = _mm_mask_movehdup_ps(arg5, zmm26)
zmm1[0].o = _mm_mask_permute_ps(arg5, zmm26, 0xc1)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm7, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x9c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x20)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm30, zmm24, 0x68), 
    zmm4)
zmm4 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm26, 0xda), zmm7, arg4)
arg4 = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm6, zmm21, 0x10)[0].q | zmm0[0].q << 0x40, 
        zmm4), 
    zmm1[0].o, arg3[0].o)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6, zmm8, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(zmm0[0].o, 0x4a), zmm5, 0x20)
zmm4 = _mm_mask_permute_ps(arg5, zmm18, 0xc0)
zmm7 = _mm_mask_permute_ps(arg5, zmm21, 0xa0)[0].q | zmm0[0].q << 0x40
zmm4 = _mm_fmadd_ps(zmm4, arg4, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        _mm_mask_shuffle_ps(arg5, zmm26, _mm_mask_shuffle_ps(arg5, zmm24, zmm26, 0x30), 0x80), 
        zmm7))
zmm20 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm20, zmm5, 0x10), zmm5, 0x20)
zmm6 = _mm_permute_ps(_mm_mask_shuffle_ps(arg5, zmm26, zmm24, 0xc), 0x78)
zmm5 = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(_mm_mask_permute_ps(arg5, zmm26, 0x46), zmm24, 
            0x68), 
        zmm7), 
    arg4, zmm6)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(_mm_mask_shuffle_ps(arg5, zmm21, zmm0[0].o, 0), 
    zmm0[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, arg5, zmm4, zmm20)
zmm1[0].o = __vmovddup_xmmdq_xmmq(zmm1[0].q)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg8, arg11, 0x10)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, arg10, 0x20)
arg4 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg11, arg9, 0x10), arg13, 0x20)
zmm4 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg10, arg13, 0x10), arg12, 0x20)
zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 5), 
    zmm0[0].o, 0xd8)
zmm6 = _mm_permute_pd(arg3[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
int32_t rbx = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t rbp = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t rdi = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
    _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm1, 7), 0x7fffffff)
zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, zmm5)
int64_t k1 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm0, 0x322bcc77, 2)
int64_t k0 = __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm17, data_142fc92e0)
_kortest_mask8_u8(k1, k0)

if (cond:1)
label_140004e24:
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    arg4 = _mm_permute_pd(zmm1[0].o, 1)
    zmm17 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5, zmm1[0].o, 0x8a)
    arg12 = zx.o(rbx)
    zmm6 = zx.o(rbp)
    zmm20 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg12, zmm6, 0x1c)
    zmm4 = zx.o(rdi)
    arg9 = _mm_mask_load_ps(k0, data_142d3f660)
    arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x10), arg12, 0x20), 
        zmm4, 0x30)
    zmm7 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg9, zmm5, 0x46)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm6, 0x2a)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm5, 0x9c)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
    zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, arg4, zmm7)
    zmm21 = _mm_mask_broadcastss_ps(k0, zmm0[0].o)
    arg11 = _mm_mask_permute_ps(k0, zmm0[0].o, 0x55)
    arg8 = _mm_mask_permute_ps(k0, zmm0[0].o, 0xaa)
    arg13 = _mm_mask_permute_ps(k0, zmm0[0].o, 0xff)
    zmm30 = _mm_mask_load_ss(k0, 1f)
    arg4 = _mm_mask_shuffle_ps(k0, zmm30, zmm4, 0)
    zmm0[0].o = _mm_mask_unpacklo_ps(k0, arg12, zmm6)
    zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(zmm6, zmm6)
    zmm0[0].o = zmm6[0].q | zmm0[0].q << 0x40
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
    arg4 = _mm_mask3_fmsub_ps(arg4, k0, zmm20, zmm0[0].o)
    zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm1[0].o, 5)
    zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 5)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0x8a)
    zmm6 = _mm_mask3_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o), k0, zmm17, zmm0[0].o)
    zmm0[0].o = _mm_mask_mul_ps(k0, arg11, arg8)
    zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm21, arg13)
    arg3[0].o = _mm_permute_ps(arg4, 0xd8)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
    zmm7 = _mm_permute_pd(arg3[0].o, 1)
    arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm7)
    zmm7 = _mm_permute_ps(arg3[0].o, 0x39)
    arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm7)
    arg10 = _mm_mask_sub_ps(k0, zmm0[0].o, arg3[0].o)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg10 f- zmm0[0].o
    
    if (arg10 f!= zmm0[0].o || not(is_ordered.d(arg10, zmm0[0].o)))
        zmm30 = zmm1[0].q | zmm5[0].q << 0x40
        arg9 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm4, arg9, 0xf6)
        zmm7 = _mm_broadcastss_ps(arg4)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0x20)
        arg3[0].o = __vmovddup_xmmdq_xmmq(arg4[0].q)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        zmm0[0].o = _mm_mask3_fmsub_ps(zmm0[0].o, k0, zmm30, zmm7)
        arg8 = _mm_mask3_fmsub_ps(arg8, k0, zmm17, zmm0[0].o)
        zmm0[0].o = _mm_permute_ps(zmm6, 0x33)
        arg3[0].o = data_142d4cc30
        arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x10)
        zmm4 = _mm_permute_ps(zmm6, 0x66)
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
        arg3[0].o = _mm_mask3_fmsub_ps(arg3[0].o, k0, arg9, zmm0[0].o)
        arg11 = _mm_mask3_fmsub_ps(arg11, k0, zmm20, arg3[0].o)
        zmm0[0].o = _mm_permute_pd(zmm6, 3)
        arg3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, arg12, 0x1d)
        zmm4 = __vmovddup_xmmdq_xmmq(zmm6[0].q)
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
        arg3[0].o = _mm_mask3_fmadd_ps(arg3[0].o, k0, zmm20, zmm0[0].o)
        zmm21 = _mm_mask3_fmsub_ps(zmm21, k0, arg9, arg3[0].o)
        zmm0[0].o = _mm_permute_ps(arg4, 0xcc)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x9d)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0xb0)
        arg3[0].o = _mm_permute_ps(arg4, 0x66)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm17, zmm0[0].o)
        arg13 = _mm_mask3_fmsub_ps(arg13, k0, zmm30, zmm1[0].o)
        zmm0[0].o = data_142fc92f0
        zmm0[0].o = _mm_mask_div_ps(k0, zmm0[0].o, arg10)
        arg3[0].o = _mm_mask_mul_ps(k0, arg13, zmm0[0].o)
        arg4 = _mm_mask_mul_ps(k0, arg11, zmm0[0].o)
        zmm1[0].o = _mm_mask_mul_ps(k0, arg8, zmm0[0].o)
        zmm0[0].o = _mm_mask_mul_ps(k0, zmm21, zmm0[0].o)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x77)
        zmm30 = _mm_mask_shuffle_ps(k0, arg3[0].o, arg4, 0x77)
        arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x22)
    else
        arg3[0].o = data_142d4cc20
        zmm1[0].o = data_142d4cc30
    
    zmm17 = _mm_mask_movehdup_ps(k0, zmm30)
    zmm20 = _mm_mask_permute_pd(k0, zmm30, 1)
    zmm21 = _mm_mask_permute_ps(k0, zmm30, 0xe7)
    arg8 = _mm_mask_movehdup_ps(k0, arg3[0].o)
    zmm6 = _mm_permute_pd(arg3[0].o, 1)
    zmm0[0].o = _mm_permute_ps(arg3[0].o, 0xe7)
    zmm4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm5 = _mm_permute_pd(zmm1[0].o, 1)
    arg4 = _mm_permute_ps(zmm1[0].o, 0xe7)
else
    zmm0[0].o = 0x800000
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, 0x800000, 0x30)
    zmm0[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(arg3, zmm0[0].o, 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (cond:2)
        goto label_140004e24
    
    zmm0[0].o = zx.o(rbx)
    arg3[0].o = zx.o(rbp)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x10)
    arg3[0].o = zx.o(rdi)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
    arg3[0].o = 0x800000
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    arg3[0].o = _mm_broadcastss_ps(0x800000)
    zmm0 = __vandps_ymmu32_maskmskw_ymmu32_memu32_avx512(k0, 
        _mm256_insertf128_ps(zmm0, arg3[0].o, 1), 0x7fffffff)
    _kortest_mask8_u8(
        __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k0, zmm0, 0x322bcc77, 2), k0)
    
    if (not(cond:4))
        goto label_140004e24
    
    zmm5 = 0x3f800000
    arg4 = __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4)
    zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm6 = __vxorpd_xmmdq_xmmdq_xmmdq(zmm6, zmm6)
    arg8 = _mm_mask_mov_pd(k0, 0x3f800000)
    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
    zmm21 = _mm_mask_xor_ps(k0, zmm21, zmm21)
    zmm20 = _mm_mask_xor_ps(k0, zmm20, zmm20)
    zmm17 = _mm_mask_xor_epi32(k0, zmm17, zmm17)
    zmm30 = _mm_mask_mov_pd(k0, 0x3f800000)

zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5, 0x20)
arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x30)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(arg3[0].o, arg8, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm30, zmm17, 0x10)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm20, 0x20)
zmm1[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm1[0].o, zmm21, 0x30)
zmm7 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm0[0].o, *(arg2 + 4)), k0, zmm1[0].o, 
        *arg2), 
    k0, arg4, arg2[1].d)
arg3[0].o = _mm_mask_broadcastss_ps(k0, zmm19)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_mask_permute_ps(k0, zmm19, 0x55)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_mask_permute_ps(k0, zmm19, 0xaa)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, arg4, arg3[0].o)
zmm19 = _mm_mask_broadcastss_ps(k0, zmm9)
zmm6 = _mm_mask_mul_ps(k0, zmm19, zmm7)
zmm0[0].o = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(k0, zmm8, 0x80000000)
zmm21 = _mm_mask_broadcastss_ps(k0, zmm0[0].o)
arg6 = _mm_mask_mul_ps(k0, zmm21, zmm7)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm20 = _mm_mask_load_sd(k0, *(arg1 + 0x8c))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x88), 0x20)
zmm17 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(__vmovsd_xmmdq_memq(arg1[0xc].q), 
    *(arg1 + 0xc8), 0x20)
zmm0[0].o = _mm_mask_sub_ps(k0, zmm0[0].o, zmm17)
arg9 = _mm_mask_permute_ps(k0, zmm0[0].o, 0xc9)
arg3[0].o = _mm_permute_ps(zmm7, 0xd2)
arg10 = _mm_mask_permute_ps(k0, zmm0[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm7, 0xc9)
zmm0[0].o = _mm_mask_mul_ps(k0, zmm0[0].o, arg10)
arg3[0].o = _mm_mask3_fmsub_ps(arg3[0].o, k0, arg9, zmm0[0].o)
zmm0[0].o = zx.o(rsi)
zmm8 = _mm_blend_epi32(zmm11, zmm0[0].o, 1)
zmm0[0].o = zx.o(rax_1)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zx.o(r11), 0x10)
zmm9 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm12, zmm0[0].o, 3)
zmm0[0].o = zx.o(r10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zx.o(r9), 0x10)
arg12 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm0[0].o, zx.o(r8), 0x20)
zmm0[0].o = _mm_broadcastss_ps(arg3[0].o)
arg4 =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(arg3[0].o, 0xd5)), zmm8, zmm0[0].o)
zmm30 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(k0, arg3[0].o, 0xea), k0, arg12, arg4)
arg3[0].o = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm20, *(arg1 + 0x94), 0x20)
arg13 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), 
    *(arg1 + 0xd4), 0x20)
arg3[0].o = _mm_mask_sub_ps(k0, arg3[0].o, arg13)
float zmm31[0x4] = _mm_mask_permute_ps(k0, arg3[0].o, 0xc9)
zmm0[0].o = _mm_broadcast_ss(-0f)
zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(zmm7, zmm0[0].o)
zmm4 = _mm_permute_ps(zmm7, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
zmm4 = _mm_mask3_fmsub_ps(zmm4, k0, zmm31, 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm7, 0xc9), arg3[0].o))
zmm7 = _mm_broadcastss_ps(zmm4)
arg4 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, zmm24, _mm_permute_ps(zmm4, 0xd5)), k0, zmm18, zmm7)
zmm4 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm4, 0xea), k0, zmm26, arg4)
arg8 = _mm_mask_mul_ps(k0, zmm19, zmm1[0].o)
zmm20 = _mm_mask_mul_ps(k0, zmm21, zmm1[0].o)
arg4 = _mm_permute_ps(zmm1[0].o, 0xd2)
zmm7 =
    _mm_mask3_fmsub_ps(_mm_mask_mul_ps(k0, _mm_permute_ps(zmm1[0].o, 0xc9), arg10), k0, arg9, arg4)
arg4 = _mm_broadcastss_ps(zmm7)
zmm5 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(zmm7, 0xd5)), zmm8, arg4)
arg11 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(k0, zmm7, 0xea), k0, arg12, zmm5)
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm8 = _mm_mask3_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o), k0, zmm31, zmm1[0].o)
arg9 = _mm_mask_broadcastss_ps(k0, zmm8)
arg10 = _mm_mask_permute_ps(k0, zmm8, 0xd5)
zmm7 = _mm_mask_broadcastss_ps(k0, zmm16)
zmm6 = _mm_mask3_fmadd_ps(zmm6, k0, zmm7, zmm17)
arg1[0xc].d = zmm6[0]
*(arg1 + 0xc4) = __vextractps_memd_xmmdq_immb(zmm6, 1)
*(arg1 + 0xc8) = __vextractps_memd_xmmdq_immb(zmm6, 2)
arg6 = _mm_mask3_fmadd_ps(arg6, k0, zmm7, arg13)
*(arg1 + 0xcc) = arg6[0]
arg1[0xd].d = __vextractps_memd_xmmdq_immb(arg6, 1)
*(arg1 + 0xd4) = __vextractps_memd_xmmdq_immb(arg6, 2)
arg3[0].o = arg1[0xe]
zmm6 = arg1[0xf]
zmm1[0].o = _mm_mask_mul_ps(k0, zmm7, zmm30)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm4)
zmm16 = _mm_mask_xor_ps(k0, zmm16, zmm16)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(zmm1[0].o), _mm_permute_ps(arg3[0].o, 0x1b))
arg12 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(k0, -0x407fffffc0800000)
zmm4 = _mm_mask3_fmadd_ps(_mm_mask_mul_ps(k0, zmm4, arg12), k0, arg3[0].o, zmm16)
zmm5 = _mm_permute_ps(zmm1[0].o, 0x55)
zmm0[0].o = _mm_permute_pd(arg3[0].o, 1)
zmm17 = _mm_mask_load_ps(k0, data_142d3f7d0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm17, zmm4)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
zmm4 = _mm_permute_ps(arg3[0].o, 0xb1)
zmm19 = _mm_mask_load_ps(k0, data_142d3f7b0)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4), k0, zmm19, zmm0[0].o)
zmm30 = _mm_mask_load_ss(k0, 0.5f)
arg13 = _mm_mask_broadcastss_ps(k0, zmm30)
zmm5 = _mm_broadcastss_ps(arg4)
zmm0[0].o = _mm_permute_ps(zmm6, 0x1b)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
zmm0[0].o = _mm_mask_mul_ps(k0, zmm0[0].o, arg12)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm6, zmm16)
zmm5 = _mm_permute_ps(arg4, 0x55)
zmm1[0].o = _mm_permute_pd(zmm6, 1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm1[0].o)
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm17, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(arg4, 0xaa)
arg4 = _mm_permute_ps(zmm6, 0xb1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm19, zmm1[0].o)
zmm4 = _mm_mask3_fmadd_ps(zmm4, k0, arg13, arg3[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0].d
zmm16 = _mm_mask_load_ss(k0, 9.99999994e-09f)
int64_t k1_3 = _mm_cmp_round_ss_mask(k0, zmm16, zmm1[0].o, 6)
arg3[0].o = _mm_mask_mul_round_ss(k0, zmm1[0].o, zmm30)
zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
arg4 =
    _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm1[0].o f* zmm1[0], k0, arg3[0].o, zmm30), zmm1[0], zmm1[0])
zmm1[0].o = arg4 f* arg4[0]
zmm1[0].o = _mm_fnmadd_round_ss(zmm1[0].o, k0, arg3[0].o, zmm30)
zmm21 = _mm_mask_xor_ps(k0, zmm21, zmm21)
zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, arg4[0], arg4[0])
arg3[0].o = 0xffffffff
arg3[0].o = _mm_mask_move_ss(k1_3, zmm0[0].o, zmm21)
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
arg3 = _mm256_broadcastss_ps(arg3[0].o)
zmm1 = _mm256_and_ps(zmm1, arg3)
arg3 = _mm256_or_ps(zmm1, __vandnps_ymmqq_ymmqq_memqq(arg3, data_142fc9280))
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, arg13, zmm6)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg4 = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg4[0]
zmm5 = _mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, zmm16, zmm1[0].o, 6), zmm0[0].o, zmm21)
arg4 = _mm_mask_mul_round_ss(k0, zmm1[0].o, zmm30)
zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
zmm4 = _mm_fmadd_ss(_mm_fnmadd_round_ss(zmm1[0].o f* zmm1[0], k0, arg4, zmm30), zmm1[0], zmm1[0])
zmm1[0].o = zmm4 f* zmm4[0]
zmm1[0].o = _mm_fnmadd_round_ss(zmm1[0].o, k0, arg4, zmm30)
zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm4[0], zmm4[0])
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_broadcastss_ps(zmm5)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg4 = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg4[0]
zmm16 = _mm_mask_load_ss(k0, 1f)
int64_t k1_5 = _mm_cmp_round_ss_mask(k0, zmm21, zmm1[0].o, 2)
zmm1[0].o = 0xbf800000
zmm1[0].o = _mm_mask_move_ss(k1_5, zmm0[0].o, zmm16)
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xe] = arg3[0].o
arg1[0xf] = zmm0[0].o
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0x10].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x108), 0x20)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm7, arg8)
arg1[0x10].d = zmm0[0]
*(arg1 + 0x104) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
zmm1[0].o = _mm_mask_mul_ps(k0, zmm24, arg10)
*(arg1 + 0x108) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x10c))
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm18, arg9)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x114), 0x20)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm7, zmm20)
*(arg1 + 0x10c) = zmm0[0]
arg1[0x11].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x114) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x118))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg1[0x12].d, 0x20)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm7, arg11)
*(arg1 + 0x118) = zmm0[0]
*(arg1 + 0x11c) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
arg4 = _mm_permute_ps(zmm8, 0xea)
arg1[0x12].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x124))
arg4 = _mm_mask3_fmadd_ps(arg4, k0, zmm26, zmm1[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x12c), 0x20)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm7, arg4)
*(arg1 + 0x124) = zmm0[0]
*(arg1 + 0x128) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x12c) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
double rdx = arg3[0]
zmm0[0].o = zx.o(rdx.d)
zmm1[0].o = zx.o(rax_2.d)
uint32_t result = (rax_2 u>> 0x20).d
arg3[0].o = zx.o((rdx u>> 0x20).d)
arg4 = *(arg1 + 0x18)
zmm4 = arg1[1].d
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x10), zmm0[0].o, 0x20)
zmm7 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), 
    *(arg1 + 0x14), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, zmm5, zmm7)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm4 = _mm_broadcastd_epi32(zx.o(result)[0])
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x20)
zmm4 = _mm_fmadd_ps(zmm4, arg3[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm5, zmm1[0].o)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[0xf].d
zmm1[0].o = *(arg1 + 0xf8)
arg3[0].o = *(arg1 + 0x48)
arg4 = arg1[4].d
zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xf4)), zmm0[0].o, 0x20)
zmm5 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x10), 
    *(arg1 + 0x44), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xf4), 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[4].q)
arg4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), arg4, 0x20)
arg4 = _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4), zmm4, zmm5)
arg4 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, arg4)
zmm5 = _mm_broadcast_ss(*(arg1 + 0xfc))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x20)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm5, arg4)
arg3[0].o = _mm_permute_ps(arg4, 0xd2)
arg4 = _mm_permute_ps(arg4, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm4, arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *arg1
zmm1[0].o = *(arg1 + 0xc)
arg3[0].o = *(arg1 + 8)
arg4 = *(arg1 + 4)
char temp0_652 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x10), arg4, 0x20), 
                zmm0[0].o, 0x30), 
            arg1[0xe].d), 
        arg12), 
    k0, zmm0[0].o, *(arg1 + 0xec))
zmm7 = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0[0].o, 0x20), 
            arg4, 0x30), 
        *(arg1 + 0xe4)), 
    k0, zmm17, temp0_652)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x30)
zmm0[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm0[0].o, *(arg1 + 0xe8))
zmm1[0].o = arg1[3]
arg3[0].o = *(arg1 + 0x3c)
arg4 = *(arg1 + 0x38)
zmm0[0].o = _mm_mask3_fmadd_ps(zmm0[0].o, k0, zmm19, zmm7)
zmm4 = *(arg1 + 0x34)
zmm7 = _mm_fmadd_ps(
    _mm_mask_mul_ps(k0, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x10), zmm4, 0x20), 
                zmm1[0].o, 0x30), 
            arg1[0xf].d), 
        arg12), 
    zmm1[0].o, zmm5)
zmm5 = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm1[0].o, 
                0x20), 
            zmm4, 0x30), 
        *(arg1 + 0xf4)), 
    k0, zmm17, zmm7)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg3[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x30)
zmm1[0].o = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(k0, zmm1[0].o, *(arg1 + 0xf8))
zmm1[0].o = _mm_mask3_fmadd_ps(zmm1[0].o, k0, zmm19, zmm5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
arg3[0].o = _mm_broadcastss_ps(_mm_mask_move_ss(_mm_cmp_round_ss_mask(k0, zmm21, arg3[0].o, 2), 
    zmm0[0].o, zmm16))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg1[0xa] = zmm0[0].o
arg1[0xb] = zmm1[0].o
_mm256_zeroupper()
return result
