// 函数: sub_14001f870
// 地址: 0x14001f870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg6
float var_48[0x4] = arg5
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg2[1].d, 0x20)
int32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x88), 0x20)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc0)
float zmm4[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc].q), *(arg1 + 0xc8), 0x20)
float zmm8[0x4] = __vdivps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
float zmm12[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm0[0].o = arg1[0x12].d
arg3[0].o = *(arg1 + 0x118)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x11c)), arg3[0].o, 0x20), 
    _mm_permute_ps(zmm12, 0xd2))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x11c), 0x20)
arg3[0].o = _mm_permute_ps(zmm12, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[0x10].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x108), 0x20)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x8c)), *(arg1 + 0x94), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0xd4), 0x20)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
zmm4 = *(arg1 + 0x12c)
float zmm5[0x4] = *(arg1 + 0x124)
float zmm6[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x128)), zmm5, 0x20)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg3[0].o, 0xd2), zmm6)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), 
    *(arg1 + 0x128), 0x20)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x10c)), *(arg1 + 0x114), 0x20), 
    arg3[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
float var_128[0x4] = zmm8
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
zmm4 = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ arg3[0]
zmm8 = arg4[0].o f* *(arg1 + 0x78)
float zmm9[0x4] = zmm4 f+ zmm0[0]
arg3[0].o = __vmovsd_xmmdq_memq(arg1[6].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x68), 0x20)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0xc0)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
arg3[0].o = arg1[0xe]
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
zmm4 = _mm_broadcast_ss(*(arg1 + 0xe4))
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
zmm4 = _mm_broadcast_ss(*(arg1 + 0xec))
float zmm7[0x4] = _mm_permute_pd(arg4[0].o, 1) f* *(arg1 + 0xe8)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x88)
zmm0[0].o = _mm_permute_ps(arg4[0].o, 0xd8)
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm4 = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm7, 0x1c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
float zmm10[0x4] = data_142d3f670
zmm5 = __vsubps_xmmdq_xmmdq_xmmdq(zmm10, zmm0[0].o)
arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm6, 1)
zmm7 = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm6, 2)
zmm6 = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm6, 4)
arg3[0].o = _mm_permute_ps(zmm5, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm4, 0xea)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm1[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(arg4[0].o, 0xd5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
float zmm13[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_permute_ps(arg4[0].o, 0xea)
float zmm11[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm5, 0xd5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, arg3[0].o)
zmm11 = __vaddps_xmmdq_xmmdq_xmmdq(zmm11, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm4, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
zmm1[0].o = _mm_permute_ps(zmm4, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(arg4[0].o, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm1[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm5, 0xea)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm1[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, arg4[0].o, 0x9c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x60)
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm4, 0x8c), 
    arg4[0].o, 0x20)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4[0].o, 0x4e)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x14)
arg4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm5, 4)
zmm4 = _mm_permute_ps(zmm13, 0xc0)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm13, 0xd5)))
zmm5 = _mm_permute_ps(zmm13, 0xea)
zmm7 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5), zmm4)
zmm4 = _mm_permute_ps(arg3[0].o, 0xc0)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(arg3[0].o, 0xd5)))
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xea)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg3[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_138[0x4] = zmm7
int32_t temp0_124 = __vextractps_gpr32_xmmdq_immb(zmm7, 0)
int32_t temp0_125 = __vextractps_gpr32_xmmdq_immb(zmm4, 0)
float var_118[0x4] = zmm4
int32_t temp0_126 = __vextractps_gpr32_xmmdq_immb(zmm4, 1)
int32_t temp0_127 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t temp0_128 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t temp0_129 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_permute_ps(zmm9, 0xc0)
int128_t var_168 = zmm0[0].o
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xf4))
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xfc))
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm0[0].o f* *(arg1 + 0xf8)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x88)
zmm5 = _mm_permute_ps(zmm0[0].o, 0xd8)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5)
arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, arg4[0].o)
arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x4e), arg3[0].o, 0xc)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x60)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm10, zmm1[0].o)
zmm1[0].o = *(arg1 + 0x6c)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(arg5, arg1[7].d, 0x10)
zmm5 = __vinsertps_xmmdq_xmmdq_memd_immb(arg5, *(arg1 + 0x74), 0x20)
zmm6 = _mm_permute_ps(arg3[0].o, 0xc0)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6)
zmm6 = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_ps(arg4[0].o, 0xea)), zmm6)
zmm10 = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm0[0].o, 0xd5)), zmm6)
zmm7 = _mm_permute_ps(zmm0[0].o, 0xea)
zmm9 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_ps(arg3[0].o, 0xd5)))
zmm7 = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(arg4[0].o, 0xc0)), zmm9)
zmm6 = _mm_permute_ps(arg4[0].o, 0xd5)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_ps(zmm0[0].o, 0xc0))
float var_e8[0x4] = *(arg1 + 0x7c)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(arg3[0].o, 0xea))
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 0x9c), arg4[0].o, 0x60)
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4[0].o, 0x8c), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x4e)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4[0].o, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 4)
arg3[0].o = _mm_permute_ps(zmm10, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg4[0].o = _mm_permute_ps(zmm10, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg4[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = _mm_permute_ps(zmm10, 0xea)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
float var_158[0x4] = arg3[0].o
arg3[0].o = _mm_permute_ps(zmm7, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg4[0].o = _mm_permute_ps(zmm7, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg4[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = _mm_permute_ps(zmm7, 0xea)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
zmm7 = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm1[0].o, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg4[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg4[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm11 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg6 = __vxorpd_xmmdq_xmmdq_xmmdq(arg6, arg6)
float var_f8[0x4] = zmm8
bool cond:0 = zmm8 f<= arg6[0]
zmm9 = __vxorps_xmmdq_xmmdq_xmmdq(zmm9, zmm9)
zmm13 = __vxorps_xmmdq_xmmdq_xmmdq(zmm13, zmm13)
zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(zmm10, zmm10)
arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
float var_108[0x4] = zmm11

if (not(cond:0))
    arg3[0].o = _mm_permute_pd(zmm12, 1)
    zmm9 = __vmovshdup_xmmdq_xmmdq(zmm12)
    zmm0[0].o = data_142d3f780
    zmm1[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
    zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm9, zmm0[0].o)
    zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(zmm12, zmm0[0].o)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0x80)
    zmm13 = zx.o(temp0_126)
    zmm5 = zx.o(temp0_125)
    zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm13, zmm5, 0x10), zmm5, 0x20)
    arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
    zmm8 = _mm_permute_ps(zmm12, 0xd5)
    zmm6 = zx.o(temp0_128)
    zmm11 = zmm7
    zmm7 = zx.o(temp0_127)
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7, 0x10), zmm7, 0x20)
    arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, arg4[0].o)
    arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg5)
    zmm1[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x20)
    arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
    arg4[0].o = _mm_permute_ps(zmm6, 0xe0)
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm13, 0x20)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
    arg6 = zx.o(temp0_129)
    zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(arg6, 0xe0)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6, 0x20)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, zmm1[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm10, 0x10)
    zmm1[0].o = zmm1[0].q | zmm12[0].q << 0x40
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm8 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg3[0].o, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x20)
    zmm0[0].o = zx.o(temp0_124)
    zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0xc0)
    zmm9 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    arg4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm12, 0x40)
    zmm0[0].o = _mm_permute_ps(zmm7, 0xe0)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x20)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm9)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x20)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm5, 0x10)
    zmm7 = zmm11
    zmm11 = var_108
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x20)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6, zmm6, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm13, 0x20)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
    arg4[0].o = __vblendps_xmmdq_xmmdq_memdq_immb(arg3[0].o, var_f8, 1)
    arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm8)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm12, 0), zmm12, 
            0xc8), 
        zmm1[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm1[0].o = __vmovddup_xmmdq_xmmq(arg4[0])
    zmm10 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    arg5 = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
    zmm13 = _mm_permute_pd(arg3[0].o, 1)
    zmm9 = __vmovshdup_xmmdq_xmmdq(zmm10)
    arg6 = _mm_permute_pd(zmm10, 1)

int128_t var_148 = arg3[0].o
zmm0[0].o = var_168
zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, var_128)
float var_168_1[0x4] = zmm0[0].o
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm4 = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x94), 0x20)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, *(arg1 + 0xd4), 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm12 = data_142d3f780
zmm4 = _mm_permute_pd(zmm1[0].o, 1)
arg3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm4, zmm12)
zmm6 = _mm_permute_ps(arg3[0].o, 0x80)
arg4[0].o = _mm_permute_ps(zmm7, 0xc1)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm6)
zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm5 = zmm7
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm11, 0xc1), zmm0[0].o), arg4[0].o)
zmm7 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x9c)
zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(zmm7, zmm12)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm8, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(zmm11)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm5, 0x68)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm6)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm11, 0xda), zmm0[0].o)
zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm12)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm6, 0x10)
arg4[0].o = arg4[0] | zmm1[0].q << 0x40
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
zmm12 = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = _mm_permute_ps(zmm1[0].o, 0x4a)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm8, 0x20)
arg4[0].o = __vpermilps_xmmdq_memdq_immb(var_158, 0xc0)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
zmm7 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm11, __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm11, 0x30), 
    0x80)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1[0].o, 0x40)
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm0[0].o)
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm7)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm8, 0x10), zmm8, 
        0x20), 
    arg4[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm11, zmm5, 0xc), 0x78), arg3[0].o)
float var_128_1[0x4] = zmm5
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(zmm11, 0x46), zmm5, 0x68), zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1[0].o, 0)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0xc8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
zmm1[0].o = var_e8
zmm1[0].o = __vblendps_xmmdq_xmmdq_memdq_immb(zmm1[0].o, data_142d8f750, 0xe)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm12)
zmm1[0].o = __vmovddup_xmmdq_xmmq(zmm1[0].q)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = var_148
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5, 0x10)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm10, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm13, 0x20)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm9, 0x20)
zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm13, zmm9, 0x10), 
    arg6, 0x20)
zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 5), 
    zmm0[0].o, 0xd8)
zmm6 = _mm_permute_pd(arg3[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 1)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
int32_t temp0_341 = __vextractps_gpr32_xmmdq_immb(zmm4, 0)
int32_t temp0_342 = __vextractps_gpr32_xmmdq_immb(zmm4, 1)
int32_t temp0_343 = __vextractps_gpr32_xmmdq_immb(zmm4, 2)
zmm1 = __vandps_ymmqq_ymmqq_memqq(__vblendps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc9300, 0xf8), 
    data_142fc9320)
arg3 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm1, data_142fc9340, 2)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5)

if (_mm256_movemask_ps(arg3) != 0xff)
label_1400201bf:
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    arg4[0].o = _mm_permute_pd(zmm0[0].o, 1)
    zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x8a)
    zmm9 = zx.o(temp0_341)
    zmm5 = zx.o(temp0_342)
    zmm11 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm5, 0x1c)
    zmm4 = zx.o(temp0_343)
    zmm7 = data_142d3f660
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4[0].o, 0x10)
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm9, 0x20)
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x30)
    arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm1[0].o, 0x46), arg4[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x2a)
    zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x9c)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm7)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
    zmm8 = _mm_permute_ps(arg3[0].o, 0)
    zmm12 = _mm_permute_ps(arg3[0].o, 0x55)
    arg6 = _mm_permute_ps(arg3[0].o, 0xaa)
    arg5 = _mm_permute_ps(arg3[0].o, 0xff)
    arg4[0].o = 0x3f800000
    arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm4, 0)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
    zmm5 = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm9, zmm5)
    zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(zmm7, zmm7)
    zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].q | zmm5[0].q << 0x40, zmm7)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm5)
    float var_148_1[0x4] = zmm6
    zmm10 = __vsubps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(zmm6, 
            __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 5)), 
        __vmulps_xmmdq_xmmdq_xmmdq(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 5), 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x8a)))
    zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm8, arg5), 
        __vmulps_xmmdq_xmmdq_xmmdq(zmm12, arg6))
    zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(arg3[0].o, 0xd8))
    zmm6 = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_pd(zmm6, 1))
    zmm13 = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, 
        __vaddps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm6, 0x39)))
    zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)
    zmm13 f- zmm5[0]
    
    if (zmm13 f!= zmm5[0] || not(is_ordered.d(zmm13, zmm5[0])))
        arg4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
        zmm5 = __vmovddup_xmmdq_xmmq(arg3[0].q)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5)
        zmm5 = zmm0[0].q | zmm1[0].q << 0x40
        arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(arg3[0].o, 0x20)), arg4[0].o)
        zmm6 = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, 1f, 0x36)
        arg6 = __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(var_148_1, arg6), arg4[0].o)
        zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm4, 0x10), 
            _mm_permute_ps(zmm10, 0x66))
        zmm4 = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm10, 0x33)), zmm4)
        zmm12 = __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm12), zmm4)
        zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm8)
        zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, _mm_permute_pd(zmm10, 3))
        arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9, 0x1d)
        zmm4 = __vmovddup_xmmdq_xmmq(zmm10[0].q)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
        arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7, arg4[0].o)
        arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, arg4[0].o)
        zmm4 = __vmulps_xmmdq_xmmdq_memdq(zmm5, arg5)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(var_148_1, _mm_permute_ps(arg3[0].o, 0xcc))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x9d)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xb0)
        zmm1[0].o = _mm_permute_ps(arg3[0].o, 0x66)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
        zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
        zmm1[0].o = data_142fc92f0
        zmm1[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm13)
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm12, zmm1[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6, zmm1[0].o)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm1[0].o)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x77)
        arg4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x77)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x22)
    else
        zmm1[0].o = data_142d4cc20
        zmm0[0].o = data_142d4cc30
    
    zmm10 = var_138
    zmm13 = var_158
    zmm5 = var_168_1
    zmm9 = __vmovshdup_xmmdq_xmmdq(arg4[0].o)
    zmm8 = _mm_permute_pd(arg4[0].o, 1)
    zmm12 = _mm_permute_ps(arg4[0].o, 0xe7)
    arg5 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm11 = _mm_permute_pd(zmm1[0].o, 1)
    arg3[0].o = _mm_permute_ps(zmm1[0].o, 0xe7)
    zmm7 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    zmm4 = _mm_permute_pd(zmm0[0].o, 1)
    zmm6 = _mm_permute_ps(zmm0[0].o, 0xe7)
else
    arg3[0].o = 0x800000
    arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 0x800000, 0x30)
    arg3[0].o = _mm_permute_ps(0x800000, 0)
    arg3 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg4, arg3[0].o, 1), data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(arg3) != 0xff)
        goto label_1400201bf
    
    arg3[0].o = zx.o(temp0_341)
    arg4[0].o = zx.o(temp0_342)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4[0].o, 0x10)
    arg4[0].o = zx.o(temp0_343)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4[0].o, 0x20)
    arg4[0].o = 0x800000
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, 0x800000, 0x30)
    arg4[0].o = _mm_permute_ps(0x800000, 0)
    arg3 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(arg3, arg4[0].o, 1), data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(arg3) != 0xff)
        goto label_1400201bf
    
    zmm4 = 0x3f800000
    zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(zmm6, zmm6)
    zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(zmm7, zmm7)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
    zmm11 = __vxorps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
    arg5 = 0x3f800000
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm12 = __vxorps_xmmdq_xmmdq_xmmdq(zmm12, zmm12)
    zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
    zmm9 = __vxorps_xmmdq_xmmdq_xmmdq(zmm9, zmm9)
    arg4[0].o = 0x3f800000
    zmm10 = var_138
    zmm13 = var_158
    zmm5 = var_168_1

zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x20)
zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x30)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm11, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x30)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm9, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm12, 0x30)
zmm0[0].o = _mm_broadcast_ss(*arg2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg4[0].o = _mm_broadcast_ss(*(arg2 + 4))
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4[0].o = _mm_broadcast_ss(arg2[1].d)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg4[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4[0].o = _mm_permute_ps(zmm5, 0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
arg4[0].o = _mm_permute_ps(zmm5, 0x55)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm1[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm5, 0xaa)
arg4[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, *(arg1 + 0x88), 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
zmm4 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc].q), *(arg1 + 0xc8), 0x20)
float var_168_2[0x4] = zmm4
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
zmm11 = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0xd2), zmm11)
arg5 = _mm_permute_ps(zmm1[0].o, 0xd2)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5)
zmm4 = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
zmm1[0].o = zx.o(temp0_124)
arg6 = __vpblendw_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm1[0].o, 3)
zmm1[0].o = zx.o(temp0_125)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zx.o(temp0_126), 0x10)
zmm10 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm1[0].o, var_118, 0xc)
zmm1[0].o = zx.o(temp0_127)
arg4[0].o = zx.o(temp0_128)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4[0].o, 0x10)
arg4[0].o = zx.o(temp0_129)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4[0].o, 0x20)
arg4[0].o = _mm_permute_ps(zmm4, 0xc0)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6, arg4[0].o)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(zmm4, 0xd5))
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5)
zmm4 = _mm_permute_ps(zmm4, 0xea)
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4), arg4[0].o)
float var_118_1[0x4] = arg4[0].o
arg4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, *(arg1 + 0x94), 0x20)
zmm12 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), *(arg1 + 0xd4), 0x20)
arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm12)
zmm4 = _mm_permute_ps(arg4[0].o, 0xc9)
zmm5 = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f780)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xd2), zmm4)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0xd2)
zmm5 = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xc9), arg4[0].o))
zmm6 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm13, _mm_permute_ps(zmm5, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(var_128_1, _mm_permute_ps(zmm5, 0xd5)))
float var_148_2[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(var_108, _mm_permute_ps(zmm5, 0xea)), zmm6)
zmm5 = __vsubps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg3[0].o, 0xd2), zmm11), 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg3[0].o, 0xc9), arg5))
zmm6 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg6, _mm_permute_ps(zmm5, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(zmm5, 0xd5)))
zmm5 = _mm_permute_ps(zmm5, 0xea)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6)
float var_158_1[0x4] = zmm1[0].o
zmm1[0].o = __vpermilps_xmmdq_memdq_immb(var_f8, 0xc0)
zmm5 = _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(var_e8, data_142d3f780), 0xc0)
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3[0].o)
zmm1[0].o = __vxorps_xmmdq_xmmdq_memdq(arg3[0].o, data_142d3f780)
arg3[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_permute_ps(zmm1[0].o, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, arg3[0].o)
arg4[0].o = arg7
zmm6 = _mm_permute_ps(arg4[0].o, 0xc0)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm7)
arg4[0].o = __vaddps_xmmdq_xmmdq_memdq(arg4[0].o, var_168_2)
arg1[0xc].d = arg4[0].d
*(arg1 + 0xc4) = __vextractps_memd_xmmdq_immb(arg4[0].o, 1)
zmm4 = _mm_permute_ps(zmm1[0].o, 0xd5)
*(arg1 + 0xc8) = __vextractps_memd_xmmdq_immb(arg4[0].o, 2)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_128_1, zmm4)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
arg4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm12)
*(arg1 + 0xcc) = arg4[0].d
arg1[0xd].d = __vextractps_memd_xmmdq_immb(arg4[0].o, 1)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
*(arg1 + 0xd4) = __vextractps_memd_xmmdq_immb(arg4[0].o, 2)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_108, zmm1[0].o)
zmm12 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm7 = arg1[0xe]
zmm9 = arg1[0xf]
arg4[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm6, var_118_1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm6, var_148_2)
zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(var_128_1, var_128_1)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm8)
arg3[0].o = _mm_permute_ps(arg4[0].o, 0)
zmm4 = _mm_permute_ps(zmm7, 0x1b)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
zmm10 = __vmovddup_xmmdq_memq(-0.007812501848093234)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm10))
zmm5 = _mm_permute_ps(arg4[0].o, 0x55)
zmm0[0].o = _mm_permute_pd(zmm7, 1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
zmm13 = data_142d3f7d0
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0xaa)
zmm4 = _mm_permute_ps(zmm7, 0xb1)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
arg3[0].o = data_142d3f7b0
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
zmm11 = arg3[0].o
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
arg4[0].o = data_142d3f640
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, zmm8)
zmm5 = _mm_permute_ps(zmm1[0].o, 0)
arg3[0].o = _mm_permute_ps(zmm9, 0x1b)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm10)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm1[0].o, 0x55), _mm_permute_pd(zmm9, 1)), 
        zmm13), 
    arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
zmm4 = _mm_permute_ps(zmm9, 0xb1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm11)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7, zmm0[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0].d
arg4[0].o = arg3[0].o f* 0.5f
zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
zmm4 = zmm4 f+ (zmm4 f* (0x3f000000 - (zmm4 f* zmm4[0] f* arg4[0].d)[0])[0])[0]
arg4[0].o = arg4[0].o f* (zmm4 f* zmm4[0])[0]
arg4[0].o = 0x3f000000 f- arg4[0].d
arg4[0].o = zmm4 f* arg4[0].d
arg4[0].o = zmm4 f+ arg4[0].d
arg3[0].o = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4[0].o = 0xffffffff
arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
zmm0 = _mm256_and_ps(zmm0, arg3)
arg3 = __vandnps_ymmqq_ymmqq_memqq(arg3, data_142fc9280)
zmm11 = _mm256_or_ps(zmm0, arg3).o
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm9, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0]
arg3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
arg4[0].o = zmm1[0].o f* 0.5f
zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
zmm1[0].o = zmm1[0].o f+ (zmm1[0].o f* (0x3f000000 - (zmm1[0].o f* zmm1[0] f* arg4[0].d)[0])[0])[0]
arg4[0].o = arg4[0].o f* (zmm1[0].o f* zmm1[0])[0]
int64_t rax_3 = __vpextrq_gpr64q_xmmdq_immb(zmm11, 1)
arg4[0].o = 0x3f000000 f- arg4[0].d
arg4[0].o = zmm1[0].o f* arg4[0].d
zmm1[0].o = zmm1[0].o f+ arg4[0].d
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(arg3[0].o, 0)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm1[0].o = _mm_cmp_ss(arg3[0].o, zmm1[0], 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xe] = zmm11
arg1[0xf] = zmm0[0].o
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg5)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0x10].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x108), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0x10].d = zmm0[0]
*(arg1 + 0x104) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x108) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, arg6)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x10c))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x114), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*(arg1 + 0x10c) = zmm0[0]
arg1[0x11].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x114) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm6, var_158_1)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x118))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[0x12].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*(arg1 + 0x118) = zmm0[0]
*(arg1 + 0x11c) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
arg1[0x12].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm12)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x124))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x12c), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
*(arg1 + 0x124) = zmm0[0]
*(arg1 + 0x128) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
int64_t rdx = zmm11[0].q
*(arg1 + 0x12c) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = zx.o(rdx.d)
zmm1[0].o = zx.o(rax_3.d)
uint32_t result = (rax_3 u>> 0x20).d
arg3[0].o = zx.o((rdx u>> 0x20).d)
zmm4 = *(arg1 + 0x18)
zmm5 = arg1[1].d
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x10), zmm0[0].o, 0x20)
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), 
        *(arg1 + 0x14), 0x20))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(__vpshufd_xmmdq_xmmdq_immb(zx.o(result), 0xc0), arg3[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(arg3[0].o, 0xd2))
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[0xf].d
zmm1[0].o = *(arg1 + 0xf8)
arg3[0].o = *(arg1 + 0x48)
zmm4 = arg1[4].d
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xf4)), zmm0[0].o, 0x20)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x10), 
        *(arg1 + 0x44), 0x20))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xf4), 0x20)
zmm7 = __vmovsd_xmmdq_memq(arg1[4].q)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xfc))
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, arg3[0].o, 0x20)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm6)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm4, 0xd2))
zmm4 = _mm_permute_ps(zmm4, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, zmm1[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0xd4), 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
*(arg1 + 0x8c) = zmm1[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = _mm_broadcast_ss(*(arg1 + 0xec))
arg3[0].o = *arg1
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
zmm4 = _mm_broadcast_ss(arg1[0xe].d)
zmm5 = *(arg1 + 0xc)
zmm6 = *(arg1 + 8)
zmm7 = *(arg1 + 4)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm6, 0x10)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm7, 0x20)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, arg3[0].o, 0x30)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg4[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm10)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
arg4[0].o = _mm_broadcast_ss(*(arg1 + 0xe4))
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), arg3[0].o, 0x20), 
        zmm7, 0x30), 
    arg4[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm13)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4[0].o)
arg4[0].o = _mm_broadcast_ss(*(arg1 + 0xe8))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm6, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
zmm11 = data_142d3f7b0
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = arg1[3]
arg4[0].o = _mm_broadcast_ss(arg1[0xf].d)
zmm4 = *(arg1 + 0x3c)
zmm5 = *(arg1 + 0x38)
zmm6 = *(arg1 + 0x34)
zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), zmm6, 
        0x20), 
    arg3[0].o, 0x30)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm7)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm10)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4[0].o = _mm_broadcast_ss(*(arg1 + 0xf4))
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg3[0].o, 0x20), 
        zmm6, 0x30), 
    arg4[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x30)
arg4[0].o = _mm_broadcast_ss(*(arg1 + 0xf8))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0].d
arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
arg3[0].o = _mm_cmp_ss(arg4[0].o, arg3[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg1[0xa] = zmm1[0].o
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
