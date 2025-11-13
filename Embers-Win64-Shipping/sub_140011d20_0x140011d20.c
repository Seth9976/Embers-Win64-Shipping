// 函数: sub_140011d20
// 地址: 0x140011d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_d4 = arg4[0]
float var_d0 = arg3[0]
float var_cc = arg2[0]
arg2 = arg1[0xe]
int32_t zmm0[0x8]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2, arg2)
float var_b8[0x4] = arg2
float temp0_1[0x4] = _mm_broadcastss_ps(arg2)
uint32_t zmm5[0x8]
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_1)
float temp0_3[0x4] = _mm_broadcast_ss((*arg1)[0x39])
float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_3)
float temp0_5[0x4] = _mm_broadcast_ss((*arg1)[0x3b])
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_5)
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm9[0x4] = zmm0[0].o f* (*arg1)[0x3a]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_4, 0x88)
float temp0_9[0x4] = _mm_permute_ps(zmm0[0].o, 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_4, 0x4e), zmm5[0].o, 0xc)
zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x78)
float temp0_16[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm9, 0x1c), temp0_4, 0x60)
zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_16)
float temp0_18[0x4] = _mm_broadcast_ss(1f)
zmm5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, zmm5[0].o)
float zmm10[0x4] = arg1[6][0]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (*arg1)[0x19], 0x10)
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, (*arg1)[0x1a], 0x20)
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_broadcastss_ps(zmm5[0].o))
float temp0_26[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_11, 0xea), temp0_21, temp0_24)
float temp0_28[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_10, 0xd5), temp0_22, temp0_26)
float temp0_29[0x4] = _mm_permute_ps(temp0_10, 0xea)
float temp0_32[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm5[0].o, 0xd5)), zmm10, temp0_29)
zmm0[0].o = _mm_broadcastss_ps(temp0_11)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_22, temp0_32)
float temp0_35[0x4] = _mm_permute_ps(temp0_11, 0xd5)
float temp0_38[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_broadcastss_ps(temp0_10)), zmm10, temp0_35)
float temp0_40[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm5[0].o, 0xea), temp0_22, temp0_38)
float temp0_42[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_10, 0x9c), temp0_11, 0x60)
float temp0_44[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_11, 0x8c), temp0_10, 0x20)
float temp0_47[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), temp0_11, 0x14), 
    zmm5[0].o, 4)
zmm5[0].o = _mm_broadcastss_ps(temp0_28)
float temp0_51[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_28, 0xd5)), temp0_42, zmm5[0].o)
float temp0_53[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_28, 0xea), temp0_47, temp0_51)
float temp0_54[0x4] = _mm_broadcastss_ps(zmm0[0].o)
float temp0_57[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(zmm0[0].o, 0xd5)), temp0_42, temp0_54)
float zmm12[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), temp0_47, temp0_57)
zmm0[0].o = _mm_broadcastss_ps(temp0_40)
float temp0_63[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_40, 0xd5)), temp0_42, zmm0[0].o)
float temp0_65[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_40, 0xea), temp0_47, temp0_63)
arg2 = arg1[0xf]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2, arg2)
float var_c8[0x4] = arg2
float temp0_67[0x4] = _mm_broadcastss_ps(arg2)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_67)
float temp0_69[0x4] = _mm_broadcast_ss((*arg1)[0x3d])
float temp0_70[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_69)
float temp0_71[0x4] = _mm_broadcast_ss((*arg1)[0x3f])
float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_71)
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm14[0x4] = zmm0[0].o f* (*arg1)[0x3e]
float temp0_74[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_70, 0x88)
zmm0[0].o = _mm_permute_ps(temp0_74, 0xd8)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_72, zmm0[0].o)
float temp0_77[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_72)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_70, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0xc)
zmm5[0].o = (*arg1)[0x1b]
float temp0_80[0x4] = _mm_permute_ps(zmm0[0].o, 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm14, 0x1c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_70, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_80, zmm0[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, zmm0[0].o)
float zmm4[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_74, temp0_74)
float temp0_86[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, arg1[7][0], 0x10)
float temp0_87[0x4] = _mm_broadcastss_ps(zmm0[0].o)
float temp0_88[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_87)
arg4[0].o = _mm_permute_ps(temp0_77, 0xea)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_86, temp0_88)
float temp0_92[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, _mm_permute_ps(zmm0[0].o, 0xd5))
float temp0_93[0x4] = _mm_permute_ps(temp0_76, 0xea)
float temp0_94[0x4] = _mm_fmadd_ps(temp0_92, zmm5[0].o, temp0_93)
float temp0_96[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, _mm_broadcastss_ps(temp0_76))
float temp0_97[0x4] = _mm_permute_ps(temp0_77, 0xd5)
float temp0_98[0x4] = _mm_fmadd_ps(temp0_96, zmm5[0].o, temp0_97)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4, (*arg1)[0x1d], 0x20)
float temp0_101[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_76, 0xd5), zmm5[0].o, arg4[0].o)
arg4[0].o = _mm_broadcastss_ps(temp0_77)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm5[0].o, temp0_94)
float temp0_105[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), zmm5[0].o, temp0_98)
float temp0_107[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_76, 0x9c), temp0_77, 0x60)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_77, 0x8c)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_76, 0x20)
float temp0_110[0x4] = _mm_permute_ps(temp0_101, 0xd5)
float temp0_113[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_110), temp0_107, 
    _mm_broadcastss_ps(temp0_101))
float temp0_114[0x4] = _mm_permute_ps(arg4[0].o, 0xd5)
float temp0_117[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_114), temp0_107, 
    _mm_broadcastss_ps(arg4[0].o))
float temp0_118[0x4] = _mm_permute_ps(temp0_105, 0xd5)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_118)
float temp0_120[0x4] = _mm_broadcastss_ps(temp0_105)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, temp0_107, temp0_120)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_76, 0x4e), temp0_77, 0x14), 
    zmm0[0].o, 4)
float temp0_126[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_101, 0xea), zmm0[0].o, temp0_113)
float temp0_128[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg4[0].o, 0xea), zmm0[0].o, temp0_117)
float temp0_130[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_105, 0xea), zmm0[0].o, zmm5[0].o)
zmm0[0].o = _mm_broadcast_ss(*arg6)
arg4[0].o = _mm_broadcast_ss(arg6[1])
float temp0_133[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm12, arg4[0].o)
float temp0_134[0x4] = _mm_fmadd_ps(temp0_53, zmm0[0].o, temp0_133)
float temp0_136[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_128), zmm0[0].o, temp0_126)
zmm0[0].o = arg6[2]
arg4[0].o = _mm_broadcastss_ps(zmm0[0].o)
float temp0_138[0x4] = _mm_fmadd_ps(temp0_65, arg4[0].o, temp0_134)
float temp0_139[0x4] = _mm_fmadd_ps(temp0_136, arg4[0].o, temp0_130)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*arg6), zmm0[0].o, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_138)
float temp0_143[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3 = zmm0[0].o f+ temp0_143[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm14 = zmm0[0].o f+ arg3[0]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_139)
float temp0_146[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg2 = zmm0[0].o f+ temp0_146[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm15[0x4] = zmm0[0].o f+ arg2[0]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg2 = var_d4
zmm9 = arg2

if (not(arg2 f<= 9.99999975e-05f))
    arg3 = arg1[0x15]
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_b8, arg3)
    arg2 = _mm_permute_pd(zmm0[0].o, 1)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2)
    float temp0_152[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    zmm0[0].o = zmm0[0].o f+ temp0_152[0]
    zmm0[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_152, temp0_152), zmm0[0], 2)
    zmm12 = 0xbf800000
    arg4[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
    zmm0[0].o = arg1[0x16]
    arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
    arg4[0].o = _mm_fmsub_ps(arg4[0].o, var_b8, arg3)
    float zmm8[0x4] = data_142d3f690
    float temp0_158[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3, zmm8)
    float temp0_159[0x4] = _mm_permute_ps(arg4[0].o, 0xff)
    float temp0_160[0x4] = _mm_broadcastss_ps(arg4[0].o)
    float temp0_162[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_158, 0xdb), temp0_160)
    zmm4 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
    float temp0_165[0x4] =
        _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_162, zmm4), temp0_158, temp0_159)
    float temp0_166[0x4] = _mm_permute_ps(arg4[0].o, 0xd5)
    float temp0_168[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_158, 1), temp0_166)
    float zmm13[0x4] = data_142fc92b0
    float temp0_169[0x4] = _mm_fmadd_ps(temp0_168, zmm13, temp0_165)
    arg4[0].o = _mm_permute_ps(arg4[0].o, 0xea)
    float temp0_172[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_158, 0xf1), arg4[0].o)
    zmm10 = data_142fc92c0
    float temp0_173[0x4] = _mm_fmadd_ps(temp0_172, zmm10, temp0_169)
    float temp0_174[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_173, temp0_173)
    arg4[0].o = var_c8
    float temp0_175[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
    float temp0_177[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_175, _mm_permute_pd(temp0_175, 1))
    float temp0_178[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_177)
    float temp0_183[0x4] = _mm_fmsub_ps(
        _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
            _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_178, temp0_178), 
                (temp0_177 f+ temp0_178[0])[0], 2))), 
        arg4[0].o, zmm0[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8)
    float temp0_185[0x4] = _mm_permute_ps(temp0_183, 0xff)
    float temp0_186[0x4] = _mm_broadcastss_ps(temp0_183)
    arg4[0].o = _mm_permute_ps(zmm0[0].o, 0xdb)
    arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_186)
    arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm4)
    arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm0[0].o, temp0_185)
    float temp0_191[0x4] = _mm_permute_ps(temp0_183, 0xd5)
    float temp0_194[0x4] = _mm_fmadd_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), temp0_191), zmm13, arg4[0].o)
    float temp0_195[0x4] = _mm_permute_ps(temp0_183, 0xea)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_195)
    zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm10, temp0_194)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float temp0_200[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_174)
    float temp0_201[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_200)
    arg4[0].o = _mm_permute_pd(temp0_200, 1)
    arg2 = arg4[0].o f+ (temp0_200 f+ temp0_201[0])[0]
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    float temp0_204[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    arg4[0].o = _mm_permute_pd(zmm0[0].o, 1)
    zmm0[0].o = zmm0[0].o f+ temp0_204[0]
    zmm0[0].o = arg4[0].o f+ zmm0[0]
    zmm0[0].o = arg2 f- zmm0[0]

float zmm6[0x4] = zmm14 f+ zmm15[0]
float zmm7[0x4]

if ((arg5 & 1) != 0)
    zmm7 = 0x3f800000 / zmm6[0]
else
    zmm7 = 0x3f800000

arg4[0].o = var_cc
arg2 = zmm7 f* var_d0 f* arg4[0] f* arg4[0]
arg3 = zmm7 f* zmm9[0] f* arg4[0]
arg4[0].o = arg3 f+ arg2[0]
arg4[0].o = _mm_fmadd_ss(arg4[0].o, zmm6[0], 1f)
arg4[0].o = 0x3f800000 f/ arg4[0]
zmm0[0].o = arg3 f* zmm0[0]
float temp0_207[0x4] = _mm_fmsub_ss(arg7, arg2[0], zmm0[0])
zmm0[0].o = *arg8
arg2 = arg4[0].o f* (temp0_207 f- zmm0[0])[0]
float temp0_208[0x4] = _mm_broadcastss_ps(zmm14 f* arg2[0])
float temp0_209[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_208)
arg4[0].o = zmm15 f* arg2[0]
float temp0_210[0x4] = _mm_broadcast_ss(-0f)
arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_210)
arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
float temp0_213[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
zmm0[0].o = zmm0[0].o f+ arg2[0]
*arg8 = zmm0[0]
arg2 = arg1[0xe]
zmm4 = arg1[0xf]
zmm12 = __vxorps_xmmdq_xmmdq_xmmdq(zmm12, zmm12)
zmm0[0].o = _mm_broadcastss_ps(temp0_209)
zmm5[0].o = _mm_permute_ps(arg2, 0x1b)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
float zmm11[0x4] = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm11)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, arg2, zmm12)
zmm5[0].o = _mm_permute_ps(temp0_209, 0x55)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg2, 1), zmm5[0].o)
zmm10 = data_142d3f7d0
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm10, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(temp0_209, 0xaa)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg2, 0xb1), zmm0[0].o)
zmm9 = data_142d3f7b0
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm9, zmm5[0].o)
float temp0_229[0x4] = _mm_broadcastss_ps(0x3f000000)
float temp0_230[0x4] = _mm_broadcastss_ps(temp0_213)
arg4[0].o = _mm_permute_ps(zmm4, 0x1b)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_230), zmm11)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm4, zmm12)
float temp0_235[0x4] = _mm_permute_ps(temp0_213, 0x55)
float temp0_238[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_235), zmm10, arg4[0].o)
arg4[0].o = _mm_permute_ps(temp0_213, 0xaa)
float temp0_241[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), arg4[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_229, arg2)
float temp0_243[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg4[0].o = _mm_permute_pd(temp0_243, 1)
float temp0_245[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_243, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_245)
arg4[0].o = temp0_245 f+ arg4[0]
float temp0_247[0x4] = _mm_cmp_ss(0x322bcc77, arg4[0], 6)
arg2 = arg4[0].o f* 0.5f
arg4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg4[0].o, arg4[0])
zmm5[0].o = arg4[0].o f* arg4[0]
zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, arg2[0], 0.5f)
zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg4[0], arg4[0])
arg4[0].o = zmm5[0].o f* zmm5[0]
arg4[0].o = _mm_fnmadd_ss(arg4[0].o, arg2[0], 0.5f)
zmm7 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_247, 0xffffffff)
arg4[0].o = _mm_fmadd_ss(arg4[0].o, zmm5[0], zmm5[0])
arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4 = _mm256_broadcastss_ps(zmm7)
zmm5 = __vandnps_ymmqq_ymmqq_memqq(arg4, data_142fc9280)
zmm0 = _mm256_or_ps(_mm256_and_ps(zmm0, arg4), zmm5)
int64_t rax_1 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
float temp0_261[0x4] = _mm_fmadd_ps(_mm_fmadd_ps(temp0_241, zmm9, temp0_238), temp0_229, zmm4)
float temp0_262[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_261, temp0_261)
arg4[0].o = _mm_permute_pd(temp0_262, 1)
float temp0_264[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_262, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_264)
arg3 = temp0_264 f+ arg4[0]
arg4[0].o = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
arg2 = __vandnps_xmmdq_xmmdq_xmmdq(arg4[0].o, 0xffffffff)
arg4[0].o = arg3 f* 0.5f
float temp0_268[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3, arg3[0])
float temp0_270[0x4] = _mm_fmadd_ss(_mm_fnmadd_ss(temp0_268 f* temp0_268[0], arg4[0], 0.5f), 
    temp0_268[0], temp0_268[0])
float temp0_274[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_261, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(temp0_270 f* temp0_270[0], arg4[0], 0.5f), 
        temp0_270[0], temp0_270[0])))
float temp0_275[0x4] = _mm_broadcastss_ps(arg2)
arg2 = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_274, temp0_275), 
    __vandnps_xmmdq_xmmdq_memdq(temp0_275, data_142d3f660))
float temp0_279[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2)
arg4[0].o = _mm_permute_pd(temp0_279, 1)
float temp0_281[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_279, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_281)
arg3 = temp0_281 f+ arg4[0]
zmm12 = __vxorps_xmmdq_xmmdq_xmmdq(0x322bcc77, 0x322bcc77)
float temp0_287[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
        _mm_cmp_ss(zmm12, arg3[0], 2))))
arg1[0xe] = zmm0[0].o
arg1[0xf] = temp0_287
int64_t rdx_2 = zmm0[0].q
zmm0[0].o = zx.o(rdx_2.d)
arg2 = zx.o(rax_1.d)
uint32_t result = (rax_1 u>> 0x20).d
arg3 = zx.o((rdx_2 u>> 0x20).d)
arg4[0].o = (*arg1)[6]
zmm7 = arg1[1][0]
float temp0_288[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, arg2, 0x10)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm7, 0x10)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, (*arg1)[5], 0x20)
float temp0_291[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_288, zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x20)
arg2 = __vmovsd_xmmdq_memq(arg1[1][0].q)
float temp0_296[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm7, 0x20)
float temp0_298[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_296), temp0_291, zmm5[0].o)
float temp0_299[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_298, temp0_298)
zmm5[0].o = zx.o(result)
zmm5[0].o = _mm_broadcastd_epi32(zmm5[0])
float temp0_301[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg4[0].o, 0x20)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, temp0_299, temp0_301)
float temp0_303[0x4] = _mm_permute_ps(temp0_299, 0xd2)
float temp0_304[0x4] = _mm_permute_ps(temp0_299, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_304)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_291, temp0_303)
float temp0_308[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_308, zmm0[0].o)
arg1[8][0] = zmm0[0]
(*arg1)[0x21] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
(*arg1)[0x22] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = (*arg1)[0x12]
arg2 = arg1[4][0]
float temp0_313[0x4] = _mm_permute_ps(temp0_287, 0xc9)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg2, 0x10)
arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, (*arg1)[0x11], 0x20)
float temp0_316[0x4] = _mm_permute_ps(temp0_287, 0xd2)
zmm5[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
float temp0_320[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_316, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x20)), 
    temp0_313, arg4[0].o)
float temp0_321[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_320, temp0_320)
float temp0_322[0x4] = _mm_broadcast_ss((*arg1)[0x3f])
arg4[0].o = __vmovsd_xmmdq_memq(arg1[4][0].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm0[0].o, 0x20)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_322, temp0_321)
arg4[0].o = _mm_permute_ps(temp0_321, 0xd2)
float temp0_329[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_316, _mm_permute_ps(temp0_321, 0xc9)), temp0_313, arg4[0].o)
float temp0_331[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_329)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_331, zmm0[0].o)
(*arg1)[0x23] = zmm0[0]
arg1[9][0] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
(*arg1)[0x25] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x3b])
arg2 = *arg1
float temp0_337[0x4] = _mm_broadcast_ss(arg1[0xe][0])
arg4[0].o = (*arg1)[3]
zmm4 = (*arg1)[2]
zmm5[0].o = (*arg1)[1]
float temp0_343[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_337, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x10), zmm5[0].o, 0x20), 
                arg2, 0x30)), 
        zmm11), 
    arg2, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x39])
float temp0_349[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), arg2, 0x20), 
            zmm5[0].o, 0x30), 
        zmm0[0].o), 
    zmm10, temp0_343)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x3a])
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x10), arg4[0].o, 0x20), 
        zmm4, 0x30), 
    zmm0[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm9, temp0_349)
arg2 = arg1[3]
float temp0_356[0x4] = _mm_broadcast_ss(arg1[0xf][0])
arg4[0].o = (*arg1)[0xf]
zmm4 = (*arg1)[0xe]
zmm5[0].o = (*arg1)[0xd]
float temp0_362[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_356, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x10), zmm5[0].o, 0x20), 
                arg2, 0x30)), 
        zmm11), 
    arg2, temp0_322)
float temp0_363[0x4] = _mm_broadcast_ss((*arg1)[0x3d])
float temp0_368[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg2, 0x20), 
            zmm5[0].o, 0x30), 
        temp0_363), 
    zmm10, temp0_362)
float temp0_369[0x4] = _mm_broadcast_ss((*arg1)[0x3e])
float temp0_374[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x10), arg4[0].o, 0x20), 
            zmm4, 0x30), 
        temp0_369), 
    zmm9, temp0_368)
float temp0_375[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_374)
arg4[0].o = _mm_permute_pd(temp0_375, 1)
float temp0_377[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_375, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_377)
float temp0_382[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_374, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
        _mm_cmp_ss(zmm12, (temp0_377 f+ arg4[0])[0], 2))))
arg1[0xa] = zmm0[0].o
arg1[0xb] = temp0_382
_mm256_zeroupper()
return result
