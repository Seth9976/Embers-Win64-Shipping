// 函数: sub_14001e7a0
// 地址: 0x14001e7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48[0x4] = arg4
float var_b8[0x4] = arg3[0].o
int32_t zmm0[0x8]
zmm0[0].o = arg1[0xe]
double zmm1[0x4]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xe4))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
float temp0_5[0x4] = _mm_broadcast_ss(*(arg1 + 0xec))
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_5)
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
float zmm4[0x4] = zmm1[0].o f* *(arg1 + 0xe8)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x88)
float temp0_9[0x4] = _mm_permute_ps(zmm1[0].o, 0xd8)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm4, 0x1c), arg3[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
float zmm8[0x4] = data_142d3f670
float temp0_18[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
float zmm6[0x4] = arg1[6].d
int32_t temp0_19[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4)
float temp0_20[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x64), 0x10)
float zmm9[0x4] = *(arg1 + 0x6c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x68), 0x20)
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(temp0_18, 0xc0))
zmm0[0].o = _mm_permute_ps(temp0_11, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_23)
float temp0_27[0x4] = _mm_permute_ps(zmm1[0].o, 0xd5)
float temp0_29[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_27), zmm0[0].o)
float zmm10[0x8]
zmm10[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm1[0].o, 0xea))
float temp0_33[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_18, 0xd5))
zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm10[0].o, temp0_33)
float temp0_35[0x4] = _mm_permute_ps(temp0_11, 0xc0)
float temp0_37[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_35), zmm10[0].o)
zmm0[0].o = _mm_permute_ps(temp0_11, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
float temp0_41[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(zmm1[0].o, 0xc0))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_41)
float temp0_43[0x4] = _mm_permute_ps(temp0_18, 0xea)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_43)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_18, zmm1[0].o, 0x9c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_11, 0x60)
float temp0_49[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_18, temp0_11, 0x8c), zmm1[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x4e)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_11, 0x14)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_18, 4)
float temp0_53[0x4] = _mm_permute_ps(temp0_29, 0xc0)
float temp0_57[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_53), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_29, 0xd5)))
float temp0_58[0x4] = _mm_permute_ps(temp0_29, 0xea)
float zmm14[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_58), temp0_57)
float temp0_61[0x4] = _mm_permute_ps(temp0_37, 0xc0)
float temp0_65[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_61), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_37, 0xd5)))
float temp0_66[0x4] = _mm_permute_ps(temp0_37, 0xea)
float zmm15[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_66), temp0_65)
float temp0_69[0x4] = _mm_permute_ps(zmm0[0].o, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_69)
float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(zmm0[0].o, 0xd5))
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_72)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = arg1[0xf]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xf4))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
float temp0_82[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
zmm4 = _mm_permute_pd(zmm1[0].o, 1) f* *(arg1 + 0xf8)
float temp0_84[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_82)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x88)
float temp0_86[0x4] = _mm_permute_ps(zmm1[0].o, 0xd8)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_84, temp0_86)
float temp0_88[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_86, temp0_84)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm4, 0x1c), arg3[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
float temp0_95[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, arg1[7].d, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x74), 0x20)
float temp0_99[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(temp0_95, 0xc0))
float temp0_100[0x4] = _mm_permute_ps(temp0_88, 0xea)
float temp0_102[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_100), temp0_99)
float temp0_103[0x4] = _mm_permute_ps(zmm1[0].o, 0xd5)
float temp0_105[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_103), temp0_102)
float temp0_107[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(zmm1[0].o, 0xea))
float temp0_108[0x4] = _mm_permute_ps(temp0_95, 0xd5)
float temp0_110[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_107, __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_108))
float temp0_111[0x4] = _mm_permute_ps(temp0_88, 0xc0)
float temp0_113[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_111), temp0_110)
float temp0_115[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(temp0_88, 0xd5))
float temp0_116[0x4] = _mm_permute_ps(zmm1[0].o, 0xc0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_116)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_115, zmm0[0].o)
float temp0_119[0x4] = _mm_permute_ps(temp0_95, 0xea)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_119)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_95, zmm1[0].o, 0x9c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_88, 0x60)
float temp0_125[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_95, temp0_88, 0x8c), zmm1[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x4e)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_88, 0x14)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_95, 4)
float temp0_129[0x4] = _mm_permute_ps(temp0_105, 0xc0)
float temp0_133[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_129), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_105, 0xd5)))
float temp0_134[0x4] = _mm_permute_ps(temp0_105, 0xea)
arg4 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_134), temp0_133)
float temp0_137[0x4] = _mm_permute_ps(temp0_113, 0xc0)
float temp0_141[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_137), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_113, 0xd5)))
float temp0_142[0x4] = _mm_permute_ps(temp0_113, 0xea)
zmm9 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_142), temp0_141)
float temp0_145[0x4] = _mm_permute_ps(zmm0[0].o, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_145)
float temp0_148[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(zmm0[0].o, 0xd5))
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_148)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
float temp0_152[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[8].q), *(arg1 + 0x88), 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0xc8), 0x20)
float temp0_156[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
float temp0_157[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_152, zmm1[0].o)
zmm8 = data_142d3f780
zmm1[0].o = _mm_permute_pd(temp0_157, 1)
arg3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm8)
float temp0_160[0x4] = _mm_permute_ps(arg3[0].o, 0x80)
float temp0_162[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm15, 0xc1), temp0_160)
float temp0_163[0x4] = _mm_permute_ps(temp0_157, 0xd5)
float temp0_166[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_76, 0xc1), temp0_163), temp0_162)
float temp0_167[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_157)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_157, 0x9c)
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_167, zmm8)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_166)
float temp0_174[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovshdup_xmmdq_xmmdq(temp0_76), zmm15, 0x68), temp0_160)
float temp0_177[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_76, 0xda), temp0_163), temp0_174)
float zmm5[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_157, zmm8)
float temp0_180[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_167, zmm5, 0x10)[0].q | temp0_157[0].q << 0x40, 
    temp0_177)
zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_180)
float temp0_183[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(temp0_157, 0x4a), zmm0[0].o, 0x20)
float temp0_185[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm14, 0xc0), temp0_183)
float temp0_187[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_76, 
    __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm15, temp0_76, 0x30), 0x80)
arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5, temp0_157, 0x40)
float temp0_190[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_185, __vmulps_xmmdq_xmmdq_xmmdq(temp0_187, arg3[0].o))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_190)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_76, zmm15, 0xc)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x78)
float temp0_196[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_183)
zmm1[0].o = _mm_permute_ps(temp0_76, 0x46)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm15, 0x68)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm6 = *(arg1 + 0x78)
zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, zmm10[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_196, arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5, temp0_157, 0), 
        temp0_157, 0xc8), 
    arg3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6, *(arg1 + 0x78), 0x20)
float temp0_207[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0x94), 0x20)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0xd4), 0x20)
float temp0_212[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm5 = _mm_permute_pd(temp0_212, 1)
zmm0[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm5, zmm8)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0x80)
float temp0_217[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9, 0xc1), arg3[0].o)
float temp0_218[0x4] = _mm_permute_ps(temp0_212, 0xd5)
zmm1[0].o = _mm_permute_ps(temp0_156, 0xc1)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_218)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_217)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_212, 0x9c)
float temp0_223[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_212)
zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_223, zmm8)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmovshdup_xmmdq_xmmdq(temp0_156)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm9, 0x68)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(temp0_156, 0xda)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_218)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_212, zmm8)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_223, arg3[0].o, 0x10)[0].q | temp0_212[0].q << 0x40, 
    zmm1[0].o)
float temp0_236[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(temp0_212, 0x4a)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x20)
int32_t var_d8[0x4] = arg4
float temp0_240[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg4, 0xc0), zmm1[0].o)
float temp0_242[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_156, 
    __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm9, temp0_156, 0x30), 0x80)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_212, 0x40)
float temp0_245[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_240, __vmulps_xmmdq_xmmdq_xmmdq(temp0_242, zmm0[0].o))
float temp0_248[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm4, 0x10), zmm4, 
        0x20), 
    temp0_245)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_156, zmm9, 0xc), 0x78), zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(temp0_156, 0x46), zmm9, 0x68), zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_212, 0)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_212, 0xc8)
zmm6 = *(arg1 + 0x7c)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, temp0_236)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_248, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm6, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_207, 5)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_207, 0xd8)
float temp0_266[0x4] =
    __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_207, _mm_permute_pd(zmm10[0].o, 1), 1)
float temp0_268[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 5), zmm0[0].o, 0xd8)
float temp0_269[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_268)
zmm1[0].o = _mm_permute_pd(arg3[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_266, zmm0[0].o)
zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm10[0].o, arg3[0].o)
int32_t temp0_274 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t temp0_275 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t temp0_276 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
    __vandps_ymmqq_ymmqq_memqq(__vblendps_ymmqq_ymmqq_memqq_immb(zmm10, data_142fc9300, 0xf8), 
        data_142fc9320), 
    data_142fc9340, 2)
float zmm3[0x4]
float zmm7[0x4]
float zmm11[0x4]
float zmm13[0x4]

if (_mm256_movemask_ps(zmm0) != 0xff)
label_14001eeb6:
    float var_148_1[0x4] = zmm6
    float var_128_1[0x4] = zmm15
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm10[0].o)
    zmm6 = _mm_permute_pd(zmm10[0].o, 1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_269, zmm10[0].o, 0x8a)
    zmm15 = zx.o(temp0_274)
    zmm13 = zx.o(temp0_275)
    float temp0_298[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm13, 0x1c)
    zmm3 = zx.o(temp0_276)
    zmm0[0].o = data_142d3f660
    float temp0_301[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, zmm6, 0x10), zmm15, 0x20), 
        zmm3, 0x30)
    float temp0_303[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_269, 0x46), temp0_301)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm13, 0x2a)
    float temp0_305[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_269, temp0_269, 0x9c)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_305)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_303, arg3[0].o)
    float temp0_308[0x4] = _mm_permute_ps(arg3[0].o, 0)
    arg4 = _mm_permute_ps(arg3[0].o, 0x55)
    float temp0_310[0x4] = _mm_permute_ps(arg3[0].o, 0xaa)
    float temp0_311[0x4] = _mm_permute_ps(arg3[0].o, 0xff)
    zmm7 = 0x3f800000
    arg3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm3, 0)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_298)
    float temp0_314[0x4] = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm15, zmm13)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float temp0_316[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].q | temp0_314[0].q << 0x40, zmm0[0].o)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_316)
    float temp0_318[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_269, zmm10[0].o, 5)
    float var_f8_1[0x4] = zmm1[0].o
    float temp0_319[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_318)
    zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_269, 5)
    float temp0_321[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_269, 0x8a)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_321)
    float temp0_323[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_319, zmm1[0].o)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_308, temp0_311)
    float temp0_325[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg4, temp0_310)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_325)
    float temp0_328[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_323, _mm_permute_ps(arg3[0].o, 0xd8))
    zmm0[0].o = _mm_permute_pd(temp0_328, 1)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_328, zmm0[0].o)
    float temp0_331[0x4] = _mm_permute_ps(zmm0[0].o, 0x39)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_331)
    float temp0_333[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    temp0_333 f- zmm0[0]
    
    if (temp0_333 f!= zmm0[0] || not(is_ordered.d(temp0_333, zmm0[0])))
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_269, 0x20)
        zmm1[0].o = __vmovddup_xmmdq_xmmq(arg3[0].q)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = zmm10[0].q | temp0_269[0].q << 0x40
        float temp0_338[0x4] = _mm_permute_ps(arg3[0].o, 0x20)
        zmm0[0].o =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_338), zmm0[0].o)
        float temp0_341[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3, 1f, 0x36)
        float temp0_343[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(var_f8_1, temp0_310), zmm0[0].o)
        float temp0_346[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm3, 0x10), 
            _mm_permute_ps(temp0_323, 0x66))
        float temp0_349[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_341, _mm_permute_ps(temp0_323, 0x33)), temp0_346)
        float temp0_351[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_298, arg4), temp0_349)
        float temp0_352[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_341, temp0_308)
        float temp0_354[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_298, _mm_permute_pd(temp0_323, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm15, 0x1d)
        zmm6 = __vmovddup_xmmdq_xmmq(temp0_323[0].q)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_354, zmm0[0].o)
        zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_352, zmm0[0].o)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm1[0].o, temp0_311)
        float temp0_362[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(var_f8_1, _mm_permute_ps(arg3[0].o, 0xcc))
        float temp0_364[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm10[0].o, 0x9d), temp0_269, 0xb0)
        arg3[0].o = _mm_permute_ps(arg3[0].o, 0x66)
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_364, arg3[0].o)
        arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_362, arg3[0].o)
        zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        arg3[0].o = data_142fc92f0
        arg3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_333)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
        float temp0_371[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_351, arg3[0].o)
        float temp0_372[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_343, arg3[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_372, zmm0[0].o, 0x77)
        zmm7 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_371, 0x77)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_371, 0x22)
    else
        zmm1[0].o = data_142d4cc20
        zmm5 = data_142d4cc30
    
    zmm14 = zmm14
    zmm15 = var_128_1
    zmm9 = zmm9
    zmm6 = var_148_1
    zmm8 = __vmovshdup_xmmdq_xmmdq(zmm7)
    zmm10[0].o = _mm_permute_pd(zmm7, 1)
    zmm11 = _mm_permute_ps(zmm7, 0xe7)
    arg4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm13 = _mm_permute_pd(zmm1[0].o, 1)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0xe7)
    zmm3 = __vmovshdup_xmmdq_xmmdq(zmm5)
    arg3[0].o = _mm_permute_pd(zmm5, 1)
    zmm4 = _mm_permute_ps(zmm5, 0xe7)
else
    zmm0[0].o = 0x800000
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_269, 0x800000, 0x30)
    zmm0[0].o = _mm_permute_ps(0x800000, 0)
    zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1), data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(zmm0) != 0xff)
        goto label_14001eeb6
    
    zmm0[0].o = zx.o(temp0_274)
    zmm1[0].o = zx.o(temp0_275)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = zx.o(temp0_276)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
    zmm1[0].o = 0x800000
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm1[0].o = _mm_permute_ps(0x800000, 0)
    zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(zmm0) != 0xff)
        goto label_14001eeb6
    
    arg3[0].o = 0x3f800000
    zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_268, temp0_268)
    zmm3 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_266, temp0_266)
    zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_269, temp0_269)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm13 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_156, temp0_156)
    arg4 = 0x3f800000
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm11 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_207, temp0_207)
    zmm10[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
    zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_236, temp0_236)
    zmm7 = 0x3f800000

arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm3, 0x10), arg3[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x30)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg4, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm13, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm8, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm10[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm11, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(*arg2), zmm1[0].o)
float temp0_397[0x4] = _mm_broadcast_ss(arg2[1])
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_397)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = _mm_broadcast_ss(arg2[2])
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
float temp0_402[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0x78))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_402, zmm0[0].o)
zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm6, data_142d3f780)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc0)
float temp0_407[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_402, zmm0[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
float temp0_409[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x88), 0x20)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0xc8), 0x20)
float temp0_412[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_409, arg3[0].o)
float temp0_413[0x4] = _mm_permute_ps(temp0_412, 0xc9)
float temp0_415[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_402, 0xd2), temp0_413)
float temp0_416[0x4] = _mm_permute_ps(temp0_412, 0xd2)
float temp0_418[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_402, 0xc9), temp0_416)
zmm6 = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
float temp0_420[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_415, temp0_418)
float temp0_425[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm14, _mm_permute_ps(temp0_420, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm15, _mm_permute_ps(temp0_420, 0xd5)))
float temp0_427[0x4] = __vmulps_xmmdq_xmmdq_memdq(_mm_permute_ps(temp0_420, 0xea), temp0_76)
float temp0_428[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6, *(arg1 + 0x94), 0x20)
float temp0_429[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_427, temp0_425)
float temp0_431[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), *(arg1 + 0xd4), 0x20)
float temp0_432[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_428, temp0_431)
float temp0_433[0x4] = _mm_permute_ps(temp0_432, 0xc9)
zmm3 = __vxorps_xmmdq_xmmdq_memdq(temp0_402, data_142d3f780)
zmm0[0].o = _mm_permute_ps(zmm3, 0xd2)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_433)
float temp0_437[0x4] = _mm_permute_ps(temp0_432, 0xd2)
float temp0_439[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3, 0xc9), temp0_437)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_439)
float temp0_442[0x4] = __vmulps_xmmdq_xmmdq_memdq(_mm_permute_ps(zmm0[0].o, 0xc0), var_d8)
float temp0_443[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
float temp0_444[0x4] = __vpermilps_xmmdq_memdq_immb(var_b8, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_444, zmm1[0].o)
float temp0_446[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg1[0xc].d = temp0_446[0]
*(arg1 + 0xc4) = __vextractps_memd_xmmdq_immb(temp0_446, 1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, temp0_443)
*(arg1 + 0xc8) = __vextractps_memd_xmmdq_immb(temp0_446, 2)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_442, arg3[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
float temp0_453[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_444, temp0_407), temp0_431)
*(arg1 + 0xcc) = temp0_453[0]
arg1[0xd].d = __vextractps_memd_xmmdq_immb(temp0_453, 1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_156)
*(arg1 + 0xd4) = __vextractps_memd_xmmdq_immb(temp0_453, 2)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm6 = arg1[0xe]
zmm4 = arg1[0xf]
float temp0_458[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_444, temp0_429)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_444, zmm0[0].o)
zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_444, temp0_444)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm5)
float temp0_462[0x4] = _mm_permute_ps(temp0_458, 0)
zmm1[0].o = _mm_permute_ps(zmm6, 0x1b)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_462, zmm1[0].o)
arg4 = __vmovddup_xmmdq_memq(-0.007812501848093234)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_permute_ps(temp0_458, 0x55)
zmm3 = _mm_permute_pd(zmm6, 1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm3)
zmm11 = data_142d3f7d0
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = _mm_permute_ps(temp0_458, 0xaa)
float temp0_474[0x4] = _mm_permute_ps(zmm6, 0xb1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_474)
zmm10[0].o = data_142d3f7b0
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm10[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = data_142d3f640
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
float temp0_484[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm5), 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0), _mm_permute_ps(zmm4, 0x1b)), arg4))
float temp0_489[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0x55), _mm_permute_pd(zmm4, 1)), 
        zmm11), 
    temp0_484)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
float temp0_491[0x4] = _mm_permute_ps(zmm4, 0xb1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_491)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm10[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_489)
float temp0_495[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
arg3[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3[0].o = zmm0[0].o f+ arg3[0]
float temp0_501[0x4] = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
zmm5 = arg3[0].o f* 0.5f
arg3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
zmm0[0].o = arg3[0].o f* arg3[0]
zmm0[0].o = zmm0[0].o f* zmm5[0]
zmm0[0].o = 0x3f000000 f- zmm0[0]
zmm0[0].o = arg3[0].o f* zmm0[0]
zmm0[0].o = arg3[0].o f+ zmm0[0]
arg3[0].o = zmm0[0].o f* zmm0[0]
arg3[0].o = zmm5 f* arg3[0]
zmm3 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_501, 0xffffffff)
arg3[0].o = 0x3f000000 f- arg3[0]
arg3[0].o = zmm0[0].o f* arg3[0]
zmm0[0].o = zmm0[0].o f+ arg3[0]
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = _mm_permute_ps(zmm3, 0)
arg3 = __vandnps_ymmqq_ymmqq_memqq(zmm1, data_142fc9280)
zmm0 = _mm256_and_ps(zmm0, zmm1)
zmm9 = _mm256_or_ps(zmm0, arg3)
int64_t rdx = __vpextrq_gpr64q_xmmdq_immb(zmm9, 1)
int64_t rax_3 = zmm9[0].q
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, temp0_495)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0]
arg3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0].d, 6)
arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
zmm3 = zmm1[0].o f* 0.5f
zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0].d)
zmm1[0].o = zmm1[0].o f+ (zmm1[0].o f* (0x3f000000 - (zmm1[0].o f* zmm1[0].d f* zmm3[0])[0])[0])[0]
zmm1[0].o =
    zmm1[0].o f+ (zmm1[0].o f* (0x3f000000 - (zmm3 f* (zmm1[0].o f* zmm1[0].d)[0])[0])[0])[0]
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(arg3[0].o, 0)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm1[0].o = _mm_cmp_ss(arg3[0].o, zmm1[0].d, 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
float temp0_532[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xe] = zmm9
arg1[0xf] = temp0_532
zmm0[0].o = zx.o(rax_3.d)
zmm1[0].o = zx.o(rdx.d)
uint32_t result = (rax_3 u>> 0x20).d
arg3[0].o = zx.o(result)
zmm3 = *(arg1 + 0x18)
float temp0_534[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x10)
zmm1[0].o = arg1[1].d
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + 0x14), 0x20)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_534, zmm1[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm3, 0x20)
float temp0_548[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(__vpshufd_xmmdq_xmmdq_immb(zx.o((rdx u>> 0x20).d), 0xc0), zmm1[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_548)
float temp0_551[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_534, _mm_permute_ps(zmm1[0].o, 0xd2))
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_551, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_446, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *(arg1 + 0x48)
zmm1[0].o = arg1[4].d
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x44), 0x20)
float temp0_561[0x4] = _mm_permute_ps(temp0_532, 0xc9)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_561, arg3[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), zmm1[0].o, 0x20)
float temp0_565[0x4] = _mm_permute_ps(temp0_532, 0xd2)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_565, zmm1[0].o)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[4].q)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
float temp0_571[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_532, 0xff), zmm1[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_571)
arg3[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_561, arg3[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_565, zmm1[0].o)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_453, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xec))
zmm1[0].o = *arg1
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg3[0].o = _mm_broadcast_ss(arg1[0xe].d)
zmm3 = *(arg1 + 0xc)
zmm4 = *(arg1 + 8)
zmm5 = *(arg1 + 4)
float temp0_588[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm4, 0x10), zmm5, 
        0x20), 
    zmm1[0].o, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_588)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xe4))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm1[0].o, 0x20), 
        zmm5, 0x30), 
    arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xe8))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm10[0].o)
float temp0_605[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = arg1[3]
zmm1[0].o = _mm_broadcast_ss(arg1[0xf].d)
arg3[0].o = *(arg1 + 0x3c)
zmm4 = *(arg1 + 0x38)
zmm5 = *(arg1 + 0x34)
float temp0_609[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4, 0x10), 
        zmm5, 0x20), 
    zmm0[0].o, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_609)
float temp0_611[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_612[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_611)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg4)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_612, zmm1[0].o)
float temp0_615[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_620[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm0[0].o, 
                0x20), 
            zmm5, 0x30), 
        temp0_615), 
    zmm11)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_620)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xf8))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm10[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_605, zmm0[0].o)
arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ arg3[0]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm1[0].o = _mm_cmp_ss(arg3[0].o, zmm1[0].d, 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xa] = temp0_605
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
