// 函数: sub_140006390
// 地址: 0x140006390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm20[0x4] = _mm_mask_load_ss(arg5, arg10)
int64_t k1 = _load_mask8(arg8)
float128 zmm19 = _mm_mask_load_ss(arg5, arg7)
float zmm17[0x4] = _mm_mask_load_ss(arg5, arg6)
int64_t r8 = sx.q(arg3)
int64_t r11 = r8 * 3
float zmm18[0x4] = _mm_mask_load_ps(arg5, arg1[r8 + 0xe])
float zmm2[0x4] = _mm_mask_add_ps(arg5, zmm18, zmm18)
float zmm4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_mask_broadcastss_ps(arg5, zmm18))
float zmm5[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm2, arg1[r8][0x39])
float zmm1[0x4] = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm2, arg1[r8][0x3b])
float zmm16[0x4] =
    __vmulss_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, _mm_permute_pd(zmm2, 1), arg1[r8][0x3a])
float zmm0[0x4] = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x88), 0xd8)
zmm2 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm0)
zmm0 = __vsubps_xmmdq_xmmdq_xmmdq(zmm0, zmm1)
zmm16 = _mm_mask_add_ps(arg5, 
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm5, 0x4e), 
            zmm4, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm16, zmm16, 0x1c), zmm5, 0x60))
zmm4 = _mm_broadcast_ss(1f)
float zmm21[0x4] = _mm_mask_load_ss(arg5, (*arg1)[r11 + 0x18])
float zmm23[0x4] = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0, (*arg1)[r11 + 0x19], 0x1d)
zmm4 = _mm_mask_sub_ps(arg5, zmm4, zmm16)
zmm16 = __vinsertps_xmmf32_xmmf32_memf32_imm8_avx512(zmm0, (*arg1)[r11 + 0x1a], 0x2b)
float zmm22[0x4] = _mm_mask_mul_ps(arg5, zmm21, _mm_broadcastss_ps(zmm4))
zmm5 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm0, 0xea), arg5, zmm23, zmm22)
zmm1 = _mm_mask3_fmadd_ps(_mm_permute_ps(zmm2, 0xd5), arg5, zmm16, zmm5)
zmm22 = _mm_mask_permute_ps(arg5, zmm2, 0xea)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm23, _mm_permute_ps(zmm4, 0xd5)), arg5, zmm21, zmm22)
zmm22 = _mm_mask3_fmadd_ps(_mm_mask_broadcastss_ps(arg5, zmm0), arg5, zmm16, zmm5)
float zmm24[0x4] = _mm_mask_permute_ps(arg5, zmm0, 0xd5)
zmm5 =
    _mm_mask3_fmadd_ps(_mm_mask_mul_ps(arg5, zmm23, _mm_broadcastss_ps(zmm2)), arg5, zmm21, zmm24)
zmm21 = _mm_mask3_fmadd_ps(_mm_mask_permute_ps(arg5, zmm4, 0xea), arg5, zmm16, zmm5)
zmm16 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm2, 0x9c), zmm0, 0x60)
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm0, 0x8c), 
    zmm2, 0x20)
zmm0 = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm2, 0x4e), zmm0, 
        0x14), 
    zmm4, 4)
zmm2 = _mm_broadcastss_ps(zmm1)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm1, 0xd5)), arg5, 
    zmm16, zmm2)
zmm1 = _mm_fmadd_ps(_mm_permute_ps(zmm1, 0xea), zmm0, zmm4)
zmm2 = _mm_mask_broadcastss_ps(arg5, zmm22)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_mask_permute_ps(arg5, zmm22, 0xd5)), 
    arg5, zmm16, zmm2)
zmm2 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm22, 0xea), zmm0, zmm4)
zmm22 = _mm_mask_broadcastss_ps(arg5, zmm21)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_mask_permute_ps(arg5, zmm21, 0xd5)), 
    arg5, zmm16, zmm22)
zmm5 = _mm_fmadd_ps(_mm_mask_permute_ps(arg5, zmm21, 0xea), zmm0, zmm4)
zmm0 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, zmm2, *(arg9 + 4)), arg5, zmm1, *arg9)
zmm1 = arg9[1].d
zmm2 = _mm_fmadd_ps(_mm_broadcastss_ps(zmm1), zmm5, zmm0)
zmm21 = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(__vmovsd_xmmdq_memq(*arg9), zmm1, 0x20)
zmm0 = _mm_mask_mul_ps(arg5, zmm21, zmm2)
zmm1 = __vmovshdup_xmmdq_xmmdq(zmm0)
zmm2 = _mm_permute_pd(zmm0, 1) f+ (zmm0 f+ zmm1[0])[0]
zmm16 = _mm_mask_xor_ps(arg5, zmm16, zmm16)
zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)

if (not(zmm19 <= 9.99999975e-05f))
    zmm0 = arg1[r8 + 0x15]
    zmm1 = _mm_mask_mul_ps(arg5, zmm18, zmm0)
    zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
    zmm4 = __vmovshdup_xmmdq_xmmdq(zmm1)
    zmm1 = _mm_mask3_fmsub_ps(
        _mm_broadcastss_ps(_mm_mask_move_ss(
            _mm_cmp_round_ss_mask(arg5, __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm4), zmm1 f+ zmm4[0], 
                2), 
            zmm0, 0x3f800000)), 
        arg5, zmm18, zmm0)
    zmm0 = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
    zmm18 = _mm_mask_permute_ps(arg5, zmm1, 0xff)
    zmm4 = _mm_broadcastss_ps(zmm1)
    zmm4 = _mm_mask3_fmadd_ps(
        __vmulps_xmmdq_xmmdq_memdq(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0, 0xdb), zmm4), 
            data_142fc92a0), 
        arg5, zmm0, zmm18)
    zmm18 = _mm_mask_permute_ps(arg5, zmm1, 0xd5)
    zmm5 = __vfmadd132ps_xmmdq_xmmdq_memdq(_mm_mask_mul_ps(arg5, _mm_permute_pd(zmm0, 1), zmm18), 
        zmm4, data_142fc92b0)
    zmm1 = _mm_permute_ps(zmm1, 0xea)
    zmm0 = __vfmadd132ps_xmmdq_xmmdq_memdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0, 0xf1), zmm1), zmm5, data_142fc92c0)
    zmm0 = _mm_mask_mul_ps(arg5, zmm21, __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0))
    zmm1 = __vmovshdup_xmmdq_xmmdq(zmm0)
    zmm4 = __vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(arg5, 
        _mm_permute_pd(zmm0, 1) f+ (zmm0 f+ zmm1[0])[0], 0x80000000)

zmm18 = _mm_mask_load_ss(arg5, 1f)
zmm0 = _mm_div_round_ss(arg5, zmm18, zmm2)
_mm_mask_mov_ps(arg5, zmm18)
zmm1 = _mm_mask_move_ss(k1, zmm0, zmm0)
zmm0 = _mm_mask_mul_round_ss(arg5, zmm1, zmm17) f* arg4[0] f* arg4[0]
zmm1 = _mm_mask_mul_round_ss(arg5, zmm1, zmm19) f* arg4[0]
zmm5 = _mm_div_round_ss(arg5, zmm18, _mm_mask3_fmadd_round_ss(zmm1 f+ zmm0[0], arg5, zmm2, zmm18))
zmm20 = _mm_fmsub_round_ss(zmm20, arg5, zmm0, zmm1 f* zmm4[0])
zmm19 = _mm_mask_load_ss(arg5, *arg11)
zmm20 = _mm_mask_mul_round_ss(arg5, zmm5, _mm_mask_sub_round_ss(arg5, zmm20, zmm19))
zmm1 = _mm_mask_mul_ps(arg5, zmm21, 
    _mm_broadcastss_ps(__vxorps_xmmu32_maskmskw_xmmu32_memu32_avx512(arg5, 
        _mm_mask_mul_round_ss(arg5, zmm2, zmm20), 0x80000000)))
zmm2 = arg1[r8 + 0xe]
zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)
zmm0 = _mm_broadcastss_ps(zmm1)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm2, 0x1b), zmm0)
zmm22 = __vpbroadcastq_xmmu64_maskmskw_memu64_avx512(arg5, -0x407fffffc0800000)
arg4 = _mm_fmadd_ps(_mm_mask_mul_ps(arg5, arg4, zmm22), zmm2, zmm5)
zmm5 = _mm_permute_ps(zmm1, 0x55)
zmm4 = _mm_permute_pd(zmm2, 1)
zmm17 = _mm_mask_load_ps(arg5, data_142d3f7d0)
zmm4 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm5), arg5, zmm17, arg4)
zmm1 = _mm_permute_ps(zmm1, 0xaa)
arg4 = _mm_permute_ps(zmm2, 0xb1)
zmm21 = _mm_mask_load_ps(arg5, data_142d3f7b0)
zmm1 = _mm_mask3_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg4, zmm1), arg5, zmm21, zmm4)
zmm4 = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), zmm1, zmm2)
zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
zmm1 = zmm1 f+ __vmovshdup_xmmdq_xmmdq(zmm1)[0]
zmm2 = _mm_mask_move_ss(_mm_cmp_round_ss_mask(arg5, 0x322bcc77, zmm1, 6), zmm0, zmm16)
zmm5 = zmm1 f* 0.5f
zmm1 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1, zmm1[0])
zmm0 = _mm_fmadd_ss(_mm_fnmadd_ss(zmm1 f* zmm1[0], zmm5[0], 0.5f), zmm1[0], zmm1[0])
zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm0 f* zmm0[0], zmm5[0], 0.5f), zmm0[0], 
        zmm0[0])))
zmm1 = _mm_broadcastss_ps(zmm2)
zmm2 = __vandnps_xmmdq_xmmdq_memdq(zmm1, data_142d3f660)
arg1[r8 + 0xe] = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(zmm0, zmm1), zmm2)
zmm0 = arg1[0xf]
zmm1 = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xe])
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
int64_t k1_2 = _mm_cmp_round_ss_mask(arg5, zmm16, zmm1 f+ __vmovshdup_xmmdq_xmmdq(zmm1)[0], 2)
_mm_mask_mov_ps(arg5, _mm_mask_load_ss(arg5, -1f))
arg1[0xf] =
    __vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_broadcastss_ps(_mm_mask_move_ss(k1_2, zmm0, zmm18)))
zmm0 = arg1[r8 + 0xe][0]
zmm2 = arg1[r8][0x39]
arg4 = arg1[r8][0x3a]
zmm4 = arg1[r11][6]
zmm5 = arg1[r11 + 1][0]
zmm1 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2, arg4, 0x10), 
    zmm0, 0x20)
zmm0 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0, 0x10)
arg4 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), 
    arg1[r11][5], 0x20)
zmm0 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm2, 0x20)
zmm2 = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm0, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 0x14)), zmm5, 0x20)), 
    zmm1, arg4)
arg4 = __vmovsd_xmmdq_memq(arg1[r11 + 1][0].q)
zmm2 = __vaddps_xmmdq_xmmdq_xmmdq(zmm2, zmm2)
arg4 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x20), arg5, zmm2, arg1[r8][0x3b])
zmm4 = _mm_permute_ps(zmm2, 0xd2)
zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, 
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_permute_ps(zmm2, 0xc9)), zmm1, zmm4))
zmm0 = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + (r11 << 2) + 0xc0)), 
        (*arg1)[r11 + 0x32], 0x20), 
    zmm0)
(*arg1)[r11 + 0x20] = zmm0[0]
(*arg1)[r11 + 0x21] = __vextractps_memd_xmmdq_immb(zmm0, 1)
(*arg1)[r11 + 0x22] = __vextractps_memd_xmmdq_immb(zmm0, 2)
*arg11 = _mm_add_round_ss(arg5, zmm19, zmm20)[0]
zmm0 = arg1[r11]
zmm1 = arg1[r11][3]
zmm2 = arg1[r11][2]
arg4 = arg1[r11][1]
zmm4 = __vfmadd231ps_xmmf32_maskmskw_xmmf32_memf32_avx512(
    _mm_mask_mul_ps(arg5, 
        __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm2, 0x10), arg4, 0x20), 
                zmm0, 0x30), 
            arg1[r8 + 0xe][0]), 
        zmm22), 
    arg5, zmm0, arg1[r8][0x3b])
zmm5 = __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 8)), zmm0, 0x20), 
        arg4, 0x30), 
    arg1[r8][0x39])
arg1[r8 + 0xa] = _mm_mask3_fmadd_ps(
    __vmulps_xmmf32_maskmskw_xmmf32_memf32_avx512(arg5, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0, 0x10), zmm1, 0x20), 
            zmm2, 0x30), 
        arg1[r8][0x3a]), 
    arg5, zmm21, _mm_mask3_fmadd_ps(zmm5, arg5, zmm17, zmm4))
zmm0 = arg1[0xb]
zmm1 = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xa])
zmm1 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, _mm_permute_pd(zmm1, 1))
arg1[0xb] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, 
    _mm_mask_broadcastss_ps(arg5, 
        _mm_mask_move_ss(
            _mm_cmp_round_ss_mask(arg5, zmm16, zmm1 f+ __vmovshdup_xmmdq_xmmdq(zmm1)[0], 2), zmm0, 
            zmm18)))
return &arg1[r8 + 0xe]
