// 函数: sub_14001bdf0
// 地址: 0x14001bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68[0x4] = arg5
float var_f0 = arg4[0]
float var_ec = arg3[0]
float var_f4 = arg2[0]
float zmm0[0x4] = arg1[0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_permute_ps(zmm0, 0))
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xe4))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, arg3[0].o)
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss(*(arg1 + 0xec)))
arg2 = _mm_permute_pd(temp0, 1) f* *(arg1 + 0xe8)
int32_t zmm4[0x8]
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, arg3[0].o, 0x88)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, zmm4[0].o)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_6)
float temp0_17[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, arg3[0].o, 0x4e), temp0_2, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg2, 0x1c), 
    arg3[0].o, 0x60))
float zmm11[0x4] = data_142d3f670
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm11, temp0_17)
arg2 = arg1[6].d
float zmm12[0x4] = *(arg1 + 0x6c)
int32_t temp0_19[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x64), 0x10)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x68), 0x20)
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, _mm_permute_ps(zmm4[0].o, 0xc0))
float temp0_24[0x4] = _mm_permute_ps(temp0_11, 0xea)
float temp0_26[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_24), temp0_23)
float temp0_29[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_10, 0xd5)), temp0_26)
float temp0_31[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, _mm_permute_ps(temp0_10, 0xea))
float temp0_32[0x4] = _mm_permute_ps(zmm4[0].o, 0xd5)
float temp0_34[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_31, __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_32))
float temp0_37[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_11, 0xc0)), temp0_34)
float temp0_39[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, _mm_permute_ps(temp0_11, 0xd5))
float temp0_40[0x4] = _mm_permute_ps(temp0_10, 0xc0)
float temp0_45[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_39, __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_40)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm4[0].o, 0xea)))
float temp0_47[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, temp0_10, 0x9c), temp0_11, 0x60)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, temp0_11, 0x8c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_10, 0x20)
float temp0_52[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_45, temp0_10, 0x4e), temp0_11, 0x14), 
    zmm4[0].o, 4)
zmm4[0].o = _mm_permute_ps(temp0_29, 0xc0)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, zmm4[0].o)
float temp0_55[0x4] = _mm_permute_ps(temp0_29, 0xd5)
float temp0_56[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_55)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_56)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, _mm_permute_ps(temp0_29, 0xea)), zmm4[0].o)
float var_c8[0x4] = zmm4[0].o
zmm4[0].o = _mm_permute_ps(temp0_37, 0xc0)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, zmm4[0].o)
float temp0_63[0x4] = _mm_permute_ps(temp0_37, 0xd5)
float temp0_64[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_63)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_64)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, _mm_permute_ps(temp0_37, 0xea)), zmm4[0].o)
float var_d8[0x4] = zmm4[0].o
zmm4[0].o = _mm_permute_ps(temp0_45, 0xc0)
float temp0_70[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(temp0_45, 0xd5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4[0].o)
float temp0_73[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_70, arg3[0].o)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, _mm_permute_ps(temp0_45, 0xea)), temp0_73)
zmm0 = arg1[0xf]
float temp0_77[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
float temp0_79[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, _mm_permute_ps(zmm0, 0))
arg3[0].o = _mm_broadcast_ss(*(arg1 + 0xf4))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, arg3[0].o)
float temp0_83[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, _mm_broadcast_ss(*(arg1 + 0xfc)))
arg2 = _mm_permute_pd(temp0_77, 1) f* *(arg1 + 0xf8)
float temp0_86[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_79, arg3[0].o, 0x88), 0xd8)
float temp0_87[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_83, temp0_86)
float temp0_88[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_86, temp0_83)
float temp0_94[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_79, arg3[0].o, 0x4e), temp0_79, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg2, 0x1c), 
    arg3[0].o, 0x60))
float temp0_95[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, arg1[7].d, 0x10)
float temp0_96[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm11, temp0_94)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x74), 0x20)
float temp0_99[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm12, _mm_permute_ps(temp0_96, 0xc0))
float temp0_102[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, _mm_permute_ps(temp0_88, 0xea)), temp0_99)
float temp0_103[0x4] = _mm_permute_ps(temp0_87, 0xd5)
float temp0_105[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_103), temp0_102)
float temp0_107[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm12, _mm_permute_ps(temp0_87, 0xea))
zmm4[0].o = _mm_permute_ps(temp0_96, 0xd5)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, zmm4[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_107, zmm4[0].o)
float temp0_111[0x4] = _mm_permute_ps(temp0_88, 0xc0)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_111), zmm4[0].o)
float temp0_118[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm12, _mm_permute_ps(temp0_88, 0xd5)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, _mm_permute_ps(temp0_87, 0xc0)))
float temp0_119[0x4] = _mm_permute_ps(temp0_96, 0xea)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_119)
float temp0_121[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_118, arg3[0].o)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_96, temp0_87, 0x9c)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_88, 0x60)
float temp0_125[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_96, temp0_88, 0x8c), temp0_87, 0x20)
float temp0_128[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_96, temp0_87, 0x4e), temp0_88, 0x14), 
    temp0_96, 4)
float temp0_129[0x4] = _mm_permute_ps(temp0_105, 0xc0)
float temp0_133[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_129), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_105, 0xd5)))
float temp0_136[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_128, _mm_permute_ps(temp0_105, 0xea)), temp0_133)
float temp0_137[0x4] = _mm_permute_ps(zmm4[0].o, 0xc0)
float temp0_141[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_137), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(zmm4[0].o, 0xd5)))
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xea)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_128, zmm4[0].o)
float temp0_144[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_141)
float temp0_145[0x4] = _mm_permute_ps(temp0_121, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_145)
float temp0_148[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_121, 0xd5))
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_148)
float temp0_151[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_128, _mm_permute_ps(temp0_121, 0xea))
arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[8].q), *(arg1 + 0x88), 0x20)
float temp0_154[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_151, arg3[0].o)
float temp0_156[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc].q), *(arg1 + 0xc8), 0x20)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5, temp0_156)
float zmm13[0x4] = (*arg7)[2]
zmm12 = *arg7
float zmm14[0x4] = (*arg7)[1]
float temp0_159[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm13, zmm12, 0x10), zmm14, 0x20)
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_159)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
float temp0_164[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg7 + 4)), zmm12, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_164)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x8c))
float temp0_168[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg1 + 0x94), 0x20)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
float temp0_170[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg1 + 0xd4), 0x20)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_168, temp0_170)
float temp0_173[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_159, _mm_permute_ps(zmm4[0].o, 0xc9))
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd2)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_164, zmm4[0].o)
float temp0_176[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_173, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xc0)
zmm4[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm4[0].o, var_c8)
float temp0_180[0x4] = __vmulps_xmmdq_xmmdq_memdq(_mm_permute_ps(arg3[0].o, 0xd5), var_d8)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_180)
float temp0_184[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_76, _mm_permute_ps(arg3[0].o, 0xea)), zmm4[0].o)
zmm4[0].o = _mm_permute_ps(temp0_176, 0xc0)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_136, zmm4[0].o)
zmm0 = var_f0
float temp0_188[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_144, _mm_permute_ps(temp0_176, 0xd5))
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_188)
float temp0_192[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_154, _mm_permute_ps(temp0_176, 0xea)), zmm4[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_184)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
float zmm5[0x4] = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = arg3[0].o f+ zmm4[0]
arg3[0].o = zmm5 f+ arg3[0]
float temp0_196[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_176, temp0_192)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_196)
zmm5 = _mm_permute_pd(temp0_196, 1)
zmm4[0].o = zmm5 f+ (temp0_196 f+ zmm4[0])[0]
float zmm6[0x4] = *(arg1 + 0x78)
arg3[0].o = zmm6 f+ arg3[0]
float zmm7[0x4] = *(arg1 + 0x7c)
arg4 = zmm7 f+ arg3[0]
zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)

if (not(zmm0 f<= 9.99999975e-05f))
    arg3[0].o = __vmovsd_xmmdq_memq(arg1[0x17].q)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x178), 0x20)
    zmm5 = __vmovsd_xmmdq_memq(*(arg1 + 0x17c))
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5, arg3[0].o)
    arg2 = data_142e6da00
    arg3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2)
    float temp0_207[0x4] = __vdivps_xmmdq_xmmdq_xmmdq(
        __vsubps_xmmdq_xmmdq_xmmdq(temp0_168, 
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5, *(arg1 + 0x184), 0x20)), 
        arg2)
    float temp0_208[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_207)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm12, zmm14, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm13, 0x20)
    float temp0_211[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_208)
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_211)
    zmm5 = _mm_permute_pd(temp0_211, 1) f+ (temp0_211 f+ arg3[0])[0]

zmm4[0].o = 0x3f800000

if ((arg6 & 1) != 0)
    zmm4[0].o = 0x3f800000
    zmm4[0].o = 0x3f800000 f/ (zmm6 f+ zmm7[0])[0]

zmm4[0].o = zmm4[0].o f* zmm0[0]
zmm0 = var_f4
arg2 = zmm4[0].o f* var_ec f* zmm0[0] f* zmm0[0]
zmm4[0].o = zmm4[0].o f* zmm0[0]
arg3[0].o = zmm4[0].o f+ arg2[0]
arg3[0].o = (arg4 f+ zmm4[0]) f* arg3[0]
arg3[0].o = arg3[0].o f+ 1f
arg3[0].o = 0x3f800000 f/ arg3[0]
zmm0 = *arg9
float var_f4_1 = zmm0[0]
float zmm15[0x4] = (arg2 f* arg8[0] f- (zmm5 f* zmm4[0])[0] f- zmm0[0]) f* arg3[0]
float temp0_214[0x4] = _mm_permute_ps(zmm6 f* zmm15[0], 0xc0)
float temp0_216[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm12, zmm14, 0x10), zmm13, 0x20)
float temp0_217[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_216, temp0_214)
zmm4[0].o = data_142d3f780
float temp0_220[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_216, 
    _mm_permute_ps(__vxorps_xmmdq_xmmdq_xmmdq(zmm7 f* zmm15[0], zmm4[0].o), 0xc0))
float temp0_222[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_184, _mm_permute_ps(zmm15, 0xc0))
float temp0_223[0x4] = __vaddps_xmmdq_xmmdq_memdq(temp0_217, temp0_156)
float temp0_224[0x4] = __vaddps_xmmdq_xmmdq_memdq(temp0_220, temp0_170)
arg1[0xc] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_223, temp0_224, 0x30)
arg1[0xd].d = __vextractps_memd_xmmdq_immb(temp0_224, 1)
zmm0 = __vxorps_xmmdq_xmmdq_xmmdq(zmm15, zmm4[0].o)
*(arg1 + 0xd4) = __vextractps_memd_xmmdq_immb(temp0_224, 2)
float temp0_230[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_192, _mm_permute_ps(zmm0, 0xc0))
arg2 = arg1[0xe]
zmm0 = arg1[0xf]
float zmm8[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_192, temp0_192)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2, zmm8)
float temp0_233[0x4] = _mm_permute_ps(temp0_222, 0)
arg3[0].o = _mm_permute_ps(arg2, 0x1b)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_233, arg3[0].o)
arg5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg5)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
zmm4[0].o = _mm_permute_ps(temp0_222, 0x55)
zmm5 = _mm_permute_pd(arg2, 1)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5)
zmm14 = data_142d3f7d0
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm14)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
zmm4[0].o = _mm_permute_ps(temp0_222, 0xaa)
float temp0_245[0x4] = _mm_permute_ps(arg2, 0xb1)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_245)
zmm5 = data_142d3f7b0
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
zmm4[0].o = data_142d3f640
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4[0].o)
float temp0_255[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0, zmm8), 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_230, 0), _mm_permute_ps(zmm0, 0x1b)), arg5))
float temp0_260[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_230, 0x55), _mm_permute_pd(zmm0, 1)), 
        zmm14), 
    temp0_255)
float temp0_266[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_230, 0xaa), 
                _mm_permute_ps(zmm0, 0xb1)), 
            zmm5), 
        temp0_260), 
    zmm4[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2, arg3[0].o)
float temp0_268[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm4[0].o = _mm_permute_pd(temp0_268, 1)
float temp0_270[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_268, zmm4[0].o)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_270)
zmm4[0].o = temp0_270 f+ zmm4[0]
zmm5 = zmm4[0].o f* 0.5f
float temp0_272[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4[0].o, zmm4[0])
zmm6 = temp0_272 f+ (temp0_272 f* (0x3f000000 - (temp0_272 f* temp0_272[0] f* zmm5[0])[0])[0])[0]
zmm5 = zmm5 f* (zmm6 f* zmm6[0])[0]
zmm4[0].o = _mm_cmp_ss(0x322bcc77, zmm4[0], 6)
zmm5 = zmm6 f+ (zmm6 f* (0x3f000000 - zmm5[0])[0])[0]
zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, 0xffffffff)
float temp0_275[0x4] = _mm_permute_ps(zmm5, 0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_275)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0)
arg3 = _mm256_and_ps(arg3, zmm4)
zmm4 = __vandnps_ymmqq_ymmqq_memqq(zmm4, data_142fc9280)
zmm11 = _mm256_or_ps(arg3, zmm4)
int64_t rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm11, 1)
float temp0_281[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, temp0_266)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_281, temp0_281)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
float temp0_285[0x4] = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ temp0_285[0]
arg4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, arg3[0], 6), 0xffffffff)
zmm4[0].o = arg3[0].o f* 0.5f
arg3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
arg3[0].o = arg3[0].o f+ (arg3[0].o f* (0x3f000000 - (arg3[0].o f* arg3[0] f* zmm4[0])[0])[0])[0]
zmm4[0].o = zmm4[0].o f* (arg3[0].o f* arg3[0])[0]
float temp0_290[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_281, 
    _mm_permute_ps(arg3[0].o f+ (arg3[0].o f* (0x3f000000 f- zmm4[0])[0])[0], 0))
float temp0_291[0x4] = _mm_permute_ps(arg4, 0)
arg3[0].o = __vandnps_xmmdq_xmmdq_memdq(temp0_291, data_142d3f660)
zmm0 = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_290, temp0_291), arg3[0].o)
float temp0_295[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
arg3[0].o = _mm_permute_pd(temp0_295, 1)
float temp0_297[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_295, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_297)
arg2 = temp0_297 f+ arg3[0]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
arg3[0].o = _mm_cmp_ss(arg3[0].o, arg2[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
int64_t rax_1 = zmm11[0].q
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
float temp0_303[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)
arg1[0xe] = zmm11
arg1[0xf] = temp0_303
arg3[0].o = zx.o(rax_1.d)
arg4 = zx.o(rdx_1.d)
uint32_t result = (rax_1 u>> 0x20).d
zmm4[0].o = zx.o(result)
zmm5 = *(arg1 + 0x18)
float temp0_305[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg4, 0x10), arg3[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, arg3[0].o, 0x10)
arg4 = arg1[1].d
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4[0].o, 0x20)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg4, 0x20)
float temp0_312[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_305, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, arg4, 0x10), 
        *(arg1 + 0x14), 0x20))
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4[0].o)
float temp0_314[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_312, zmm4[0].o)
float temp0_315[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_314, temp0_314)
zmm4[0].o = __vmovsd_xmmdq_memq(arg1[1].q)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5, 0x20)
float temp0_319[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vpshufd_xmmdq_xmmdq_immb(zx.o((rdx_1 u>> 0x20).d), 0xc0), temp0_315)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_319)
float temp0_322[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_305, _mm_permute_ps(temp0_315, 0xd2))
float temp0_323[0x4] = _mm_permute_ps(temp0_315, 0xc9)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_323)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_322, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_223, arg3[0].o)
arg4 = *(arg1 + 0x48)
zmm4[0].o = arg1[4].d
float temp0_328[0x4] = _mm_permute_ps(temp0_303, 0xc9)
float temp0_331[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_328, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4[0].o, 0x10), 
        *(arg1 + 0x44), 0x20))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), zmm4[0].o, 0x20)
float temp0_334[0x4] = _mm_permute_ps(temp0_303, 0xd2)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_334, zmm4[0].o)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_331, zmm4[0].o)
float temp0_338[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4].q), arg4, 0x20)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
float temp0_342[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_338, 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_303, 0xff), zmm4[0].o))
float temp0_344[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_328, _mm_permute_ps(zmm4[0].o, 0xd2))
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xc9)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_334, zmm4[0].o)
float temp0_349[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_224, 
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_342, __vsubps_xmmdq_xmmdq_xmmdq(temp0_344, zmm4[0].o)))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_349, 0x30)
arg1[8] = arg3[0].o
arg1[9].d = __vextractps_memd_xmmdq_immb(temp0_349, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(temp0_349, 2)
float temp0_353[0x4] = _mm_broadcast_ss(*(arg1 + 0xec))
arg3[0].o = *arg1
float temp0_354[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_353)
float temp0_355[0x4] = _mm_broadcast_ss(arg1[0xe].d)
zmm4[0].o = *(arg1 + 0xc)
zmm5 = *(arg1 + 8)
zmm6 = *(arg1 + 4)
float temp0_361[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_354, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_355, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5, 0x10), zmm6, 0x20), 
                arg3[0].o, 0x30)), 
        arg5))
float temp0_362[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_368[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_361, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), arg3[0].o, 
                    0x20), 
                zmm6, 0x30), 
            temp0_362), 
        zmm14))
float temp0_369[0x4] = _mm_broadcast_ss(*(arg1 + 0xe8))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_369)
float zmm9[0x4] = data_142d3f7b0
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm9)
float temp0_375[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_368)
arg3[0].o = arg1[3]
float temp0_376[0x4] = _mm_broadcast_ss(arg1[0xf].d)
zmm4[0].o = *(arg1 + 0x3c)
zmm5 = *(arg1 + 0x38)
zmm6 = *(arg1 + 0x34)
float temp0_380[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_376, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5, 0x10), zmm6, 0x20), 
        arg3[0].o, 0x30))
float temp0_381[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_384[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_381), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_380, arg5))
float temp0_385[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_391[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_384, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg3[0].o, 
                    0x20), 
                zmm6, 0x30), 
            temp0_385), 
        zmm14))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm5, 0x30)
float temp0_395[0x4] = _mm_broadcast_ss(*(arg1 + 0xf8))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_395)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm9)
float temp0_398[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_391)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_375, temp0_398)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
float temp0_402[0x4] = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ temp0_402[0]
arg3[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_402, temp0_402), arg3[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
*arg9 = (zmm15 f+ var_f4_1)[0]
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
float temp0_407[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_398, arg3[0].o)
arg1[0xa] = temp0_375
arg1[0xb] = temp0_407
_mm256_zeroupper()
return result
