// 函数: sub_14000b5c0
// 地址: 0x14000b5c0
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
float zmm8[0x4] = zmm0[0].o f* (*arg1)[0x3a]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_4, 0x88)
float temp0_9[0x4] = _mm_permute_ps(zmm0[0].o, 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_4, 0x4e), zmm5[0].o, 0xc)
zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x78)
float temp0_16[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm8, 0x1c), temp0_4, 0x60)
zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_16)
float temp0_18[0x4] = _mm_broadcast_ss(1f)
zmm5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, zmm5[0].o)
float zmm11[0x4] = arg1[6][0]
zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm8, (*arg1)[0x19], 0x10)
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm8, (*arg1)[0x1a], 0x20)
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, _mm_broadcastss_ps(zmm5[0].o))
float temp0_26[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_11, 0xea), temp0_21, temp0_24)
float temp0_28[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_10, 0xd5), temp0_22, temp0_26)
float temp0_29[0x4] = _mm_permute_ps(temp0_10, 0xea)
float temp0_32[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm5[0].o, 0xd5)), zmm11, temp0_29)
zmm0[0].o = _mm_broadcastss_ps(temp0_11)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_22, temp0_32)
float temp0_35[0x4] = _mm_permute_ps(temp0_11, 0xd5)
float temp0_38[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_broadcastss_ps(temp0_10)), zmm11, temp0_35)
float temp0_40[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm5[0].o, 0xea), temp0_22, temp0_38)
float temp0_42[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_10, 0x9c), temp0_11, 0x60)
float temp0_44[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, temp0_11, 0x8c), temp0_10, 0x20)
zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), temp0_11, 0x14), 
    zmm5[0].o, 4)
float temp0_48[0x4] = _mm_broadcastss_ps(temp0_28)
float temp0_51[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_28, 0xd5)), temp0_42, temp0_48)
float temp0_53[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_28, 0xea), zmm5[0].o, temp0_51)
float temp0_54[0x4] = _mm_broadcastss_ps(zmm0[0].o)
float temp0_57[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(zmm0[0].o, 0xd5)), temp0_42, temp0_54)
float temp0_59[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), zmm5[0].o, temp0_57)
zmm0[0].o = _mm_broadcastss_ps(temp0_40)
float temp0_63[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, _mm_permute_ps(temp0_40, 0xd5)), temp0_42, zmm0[0].o)
float temp0_65[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_40, 0xea), zmm5[0].o, temp0_63)
arg3[0].o = arg1[0xf]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
int128_t var_c8 = arg3[0].o
zmm5[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_68[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
zmm5[0].o = _mm_broadcast_ss((*arg1)[0x3d])
float temp0_70[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
zmm5[0].o = _mm_broadcast_ss((*arg1)[0x3f])
float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm14[0x4] = zmm0[0].o f* (*arg1)[0x3e]
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_68, temp0_70, 0x88)
zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0xd8)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_72, zmm0[0].o)
float temp0_77[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_72)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_70, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_68, 0xc)
float zmm4[0x4] = (*arg1)[0x1b]
float temp0_80[0x4] = _mm_permute_ps(zmm0[0].o, 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm14, 0x1c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_70, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_80, zmm0[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, zmm0[0].o)
float temp0_85[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm8, arg1[7][0], 0x10)
arg3[0].o = _mm_broadcastss_ps(zmm0[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg3[0].o)
arg4[0].o = _mm_permute_ps(temp0_77, 0xea)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_85, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, arg3[0].o)
float temp0_92[0x4] = _mm_permute_ps(temp0_76, 0xea)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm4, temp0_92)
float temp0_97[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, _mm_broadcastss_ps(temp0_76)), zmm4, 
    _mm_permute_ps(temp0_77, 0xd5))
float temp0_98[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm8, (*arg1)[0x1d], 0x20)
float temp0_100[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_76, 0xd5), temp0_98, arg4[0].o)
arg4[0].o = _mm_broadcastss_ps(temp0_77)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_98, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, temp0_98, temp0_97)
float temp0_106[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_76, 0x9c), temp0_77, 0x60)
float temp0_108[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_77, 0x8c), temp0_76, 0x20)
float temp0_110[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, _mm_permute_ps(temp0_100, 0xd5))
zmm5[0].o = _mm_broadcastss_ps(temp0_100)
float temp0_112[0x4] = _mm_fmadd_ps(temp0_110, temp0_106, zmm5[0].o)
zmm5[0].o = _mm_permute_ps(arg4[0].o, 0xd5)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, zmm5[0].o)
float temp0_115[0x4] = _mm_broadcastss_ps(arg4[0].o)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, temp0_106, temp0_115)
float temp0_120[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, _mm_permute_ps(arg3[0].o, 0xd5)), temp0_106, 
    _mm_broadcastss_ps(arg3[0].o))
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_76, 0x4e), temp0_77, 0x14), 
    zmm0[0].o, 4)
float temp0_125[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_100, 0xea), zmm0[0].o, temp0_112)
float temp0_127[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg4[0].o, 0xea), zmm0[0].o, zmm5[0].o)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xea)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm0[0].o, temp0_120)
zmm0[0].o = _mm_broadcast_ss(*arg6)
arg4[0].o = _mm_broadcast_ss(arg6[1])
float temp0_132[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_59, arg4[0].o)
float temp0_133[0x4] = _mm_fmadd_ps(temp0_53, zmm0[0].o, temp0_132)
float temp0_135[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_127), zmm0[0].o, temp0_125)
zmm0[0].o = arg6[2]
arg4[0].o = _mm_broadcastss_ps(zmm0[0].o)
float temp0_137[0x4] = _mm_fmadd_ps(temp0_65, arg4[0].o, temp0_133)
float temp0_138[0x4] = _mm_fmadd_ps(temp0_135, arg4[0].o, arg3[0].o)
arg3 = *arg9
int32_t temp0_139 = _mm256_movemask_ps(arg3)
arg3[0].o = __vmovsd_xmmdq_memq(*arg6)
float temp0_141[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm0[0].o, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, temp0_137)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3[0].o = zmm0[0].o f+ arg3[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm11 = zmm0[0].o f+ arg3[0]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, temp0_138)
float temp0_146[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg2 = zmm0[0].o f+ temp0_146[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm8 = zmm0[0].o f+ arg2[0]
float zmm9[0x4] = zmm11 f+ zmm8[0]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
float zmm6[0x4]
float zmm10[0x4]
float zmm15[0x4]

if (temp0_139 != 0xff)
    arg2 = var_d4
    arg3[0].o = arg2
    
    if (not(arg2 f<= 9.99999975e-05f))
        arg3[0].o = arg1[0x15]
        zmm5[0].o = var_b8
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
        arg2 = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2)
        float temp0_209[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm0[0].o = zmm0[0].o f+ temp0_209[0]
        zmm0[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_209, temp0_209), zmm0[0], 2)
        arg4[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
        zmm0[0].o = arg1[0x16]
        arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
        arg4[0].o = _mm_fmsub_ps(arg4[0].o, zmm5[0].o, arg3[0].o)
        float zmm13[0x4] = data_142d3f690
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm13)
        zmm5[0].o = _mm_permute_ps(arg4[0].o, 0xff)
        float temp0_217[0x4] = _mm_broadcastss_ps(arg4[0].o)
        float temp0_219[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg3[0].o, 0xdb), temp0_217)
        zmm6 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
        float temp0_222[0x4] =
            _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_219, zmm6), arg3[0].o, zmm5[0].o)
        zmm5[0].o = _mm_permute_ps(arg4[0].o, 0xd5)
        float temp0_225[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg3[0].o, 1), zmm5[0].o)
        zmm15 = data_142fc92b0
        float temp0_226[0x4] = _mm_fmadd_ps(temp0_225, zmm15, temp0_222)
        arg4[0].o = _mm_permute_ps(arg4[0].o, 0xea)
        arg3[0].o = _mm_permute_ps(arg3[0].o, 0xf1)
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
        zmm10 = data_142fc92c0
        arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm10, temp0_226)
        float temp0_231[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
        arg4[0].o = var_c8
        arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm0[0].o)
        zmm5[0].o = _mm_permute_pd(arg3[0].o, 1)
        arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm5[0].o)
        zmm5[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
        arg3[0].o = arg3[0].o f+ zmm5[0]
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg3[0].o = _mm_cmp_ss(zmm5[0].o, arg3[0], 2)
        zmm5[0].o = 0x3f800000
        arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
        arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
        arg3[0].o = _mm_fmsub_ps(arg3[0].o, arg4[0].o, zmm0[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm13)
        zmm5[0].o = _mm_permute_ps(arg3[0].o, 0xff)
        float temp0_243[0x4] = _mm_broadcastss_ps(arg3[0].o)
        arg4[0].o = _mm_permute_ps(zmm0[0].o, 0xdb)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_243)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm6)
        arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm0[0].o, zmm5[0].o)
        zmm5[0].o = _mm_permute_ps(arg3[0].o, 0xd5)
        zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), zmm5[0].o)
        zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm15, arg4[0].o)
        arg3[0].o = _mm_permute_ps(arg3[0].o, 0xea)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm10, zmm5[0].o)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float temp0_257[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, temp0_231)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_257)
        arg4[0].o = _mm_permute_pd(temp0_257, 1)
        arg2 = arg4[0].o f+ (temp0_257 f+ arg3[0])[0]
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, zmm0[0].o)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg4[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = zmm0[0].o f+ arg3[0]
        arg3[0].o = var_d4
        zmm0[0].o = arg4[0].o f+ zmm0[0]
        zmm0[0].o = arg2 f- zmm0[0]
    
    zmm10 = 0x3f800000
    
    if ((arg5 & 1) == 0)
        zmm6 = zmm10
    else
        zmm6 = zmm10 f/ zmm9[0]
else
    arg2 = var_d4
    arg3[0].o = arg2
    
    if (not(arg2 f<= 9.99999975e-05f))
        arg2 = arg1[0x15]
        arg4[0].o = var_b8
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg2)
        arg3[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm0[0].o = zmm0[0].o f+ arg3[0]
        arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
        zmm0[0].o = _mm_cmp_ss(arg3[0].o, zmm0[0], 2)
        arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
        zmm0[0].o = arg1[0x16]
        arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
        arg3[0].o = _mm_fmsub_ps(arg3[0].o, arg4[0].o, arg2)
        zmm5[0].o = data_142d3f690
        float temp0_158[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, zmm5[0].o)
        arg4[0].o = _mm_permute_ps(arg3[0].o, 0xff)
        float temp0_160[0x4] = _mm_broadcastss_ps(arg3[0].o)
        float temp0_162[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_158, 0xdb), temp0_160)
        zmm15 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
        float temp0_165[0x4] =
            _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_162, zmm15), temp0_158, arg4[0].o)
        arg4[0].o = _mm_permute_ps(arg3[0].o, 0xd5)
        float temp0_168[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_158, 1), arg4[0].o)
        zmm10 = data_142fc92b0
        float temp0_169[0x4] = _mm_fmadd_ps(temp0_168, zmm10, temp0_165)
        arg3[0].o = _mm_permute_ps(arg3[0].o, 0xea)
        float temp0_172[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_158, 0xf1), arg3[0].o)
        arg3[0].o = data_142fc92c0
        float temp0_173[0x4] = _mm_fmadd_ps(temp0_172, arg3[0].o, temp0_169)
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
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
        float temp0_185[0x4] = _mm_permute_ps(temp0_183, 0xff)
        zmm5[0].o = _mm_broadcastss_ps(temp0_183)
        arg4[0].o = _mm_permute_ps(zmm0[0].o, 0xdb)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
        arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm15)
        arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm0[0].o, temp0_185)
        zmm5[0].o = _mm_permute_ps(temp0_183, 0xd5)
        zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), zmm5[0].o)
        zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm10, arg4[0].o)
        arg4[0].o = _mm_permute_ps(temp0_183, 0xea)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
        zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, arg3[0].o, zmm5[0].o)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float temp0_200[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, temp0_174)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_200)
        arg4[0].o = _mm_permute_pd(temp0_200, 1)
        arg2 = arg4[0].o f+ (temp0_200 f+ arg3[0])[0]
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, zmm0[0].o)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg4[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = zmm0[0].o f+ arg3[0]
        arg3[0].o = var_d4
        zmm0[0].o = arg4[0].o f+ zmm0[0]
        zmm0[0].o = arg2 f- zmm0[0]
    
    zmm10 = 0x3f800000
    
    if ((arg5 & 1) != 0)
        zmm6 = zmm10 f/ zmm9[0]
    else
        zmm6 = zmm10
arg4[0].o = var_cc
arg2 = zmm6 f* var_d0 f* arg4[0] f* arg4[0]
arg3[0].o = zmm6 f* arg3[0]
arg3[0].o = arg3[0].o f* arg4[0]
arg4[0].o = arg3[0].o f+ arg2[0]
arg4[0].o = _mm_fmadd_ss(arg4[0].o, zmm9[0], zmm10[0])
arg4[0].o = zmm10 f/ arg4[0]
zmm0[0].o = arg3[0].o f* zmm0[0]
float temp0_264[0x4] = _mm_fmsub_ss(arg7, arg2[0], zmm0[0])
zmm0[0].o = *arg8
arg2 = arg4[0].o f* (temp0_264 f- zmm0[0])[0]
arg3[0].o = zmm11 f* arg2[0]
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, arg3[0].o)
arg4[0].o = zmm8 f* arg2[0]
zmm5[0].o = _mm_broadcast_ss(-0f)
arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm5[0].o)
arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
float temp0_270[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_141, arg4[0].o)
zmm0[0].o = zmm0[0].o f+ arg2[0]
*arg8 = zmm0[0]
arg2 = arg1[0xe]
zmm4 = arg1[0xf]
float zmm12[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_264, temp0_264)
zmm0[0].o = _mm_broadcastss_ps(arg3[0].o)
zmm5[0].o = _mm_permute_ps(arg2, 0x1b)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm11 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm11)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, arg2, zmm12)
zmm5[0].o = _mm_permute_ps(arg3[0].o, 0x55)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg2, 1), zmm5[0].o)
zmm9 = data_142d3f7d0
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm9, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(arg3[0].o, 0xaa)
arg3[0].o = _mm_permute_ps(arg2, 0xb1)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
zmm8 = data_142d3f7b0
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm8, zmm5[0].o)
float temp0_286[0x4] = _mm_broadcastss_ps(0x3f000000)
arg3[0].o = _mm_broadcastss_ps(temp0_270)
arg4[0].o = _mm_permute_ps(zmm4, 0x1b)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg3[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm4, zmm12)
arg3[0].o = _mm_permute_ps(temp0_270, 0x55)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), arg3[0].o)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm9, arg4[0].o)
arg4[0].o = _mm_permute_ps(temp0_270, 0xaa)
float temp0_298[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), arg4[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_286, arg2)
float temp0_300[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg4[0].o = _mm_permute_pd(temp0_300, 1)
float temp0_302[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_300, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_302)
arg4[0].o = temp0_302 f+ arg4[0]
float temp0_304[0x4] = _mm_cmp_ss(0x322bcc77, arg4[0], 6)
arg2 = arg4[0].o f* 0.5f
arg4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg4[0].o, arg4[0])
zmm5[0].o = arg4[0].o f* arg4[0]
zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, arg2[0], 0.5f)
zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg4[0], arg4[0])
arg4[0].o = zmm5[0].o f* zmm5[0]
arg4[0].o = _mm_fnmadd_ss(arg4[0].o, arg2[0], 0.5f)
float zmm7[0x4] = __vandnps_xmmdq_xmmdq_xmmdq(temp0_304, 0xffffffff)
arg4[0].o = _mm_fmadd_ss(arg4[0].o, zmm5[0], zmm5[0])
arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
arg4 = _mm256_broadcastss_ps(zmm7)
zmm5 = __vandnps_ymmqq_ymmqq_memqq(arg4, data_142fc9280)
zmm0 = _mm256_or_ps(_mm256_and_ps(zmm0, arg4), zmm5)
int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
float temp0_318[0x4] = _mm_fmadd_ps(_mm_fmadd_ps(temp0_298, zmm8, arg3[0].o), temp0_286, zmm4)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_318, temp0_318)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
arg4[0].o = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
arg2 = __vandnps_xmmdq_xmmdq_xmmdq(arg4[0].o, 0xffffffff)
arg4[0].o = arg3[0].o f* 0.5f
arg3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
float temp0_327[0x4] =
    _mm_fmadd_ss(_mm_fnmadd_ss(arg3[0].o f* arg3[0], arg4[0], 0.5f), arg3[0], arg3[0])
arg3[0].o = temp0_327 f* temp0_327[0]
arg3[0].o = _mm_fnmadd_ss(arg3[0].o, arg4[0], 0.5f)
arg3[0].o = _mm_fmadd_ss(arg3[0].o, temp0_327[0], temp0_327[0])
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_318, arg3[0].o)
float temp0_332[0x4] = _mm_broadcastss_ps(arg2)
arg3[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_332)
arg2 = __vandnps_xmmdq_xmmdq_memdq(temp0_332, data_142d3f660)
arg2 = __vorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
zmm12 = __vxorps_xmmdq_xmmdq_xmmdq(0x322bcc77, 0x322bcc77)
arg3[0].o = _mm_cmp_ss(zmm12, arg3[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm10, arg3[0].o)
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_344[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2, arg3[0].o)
arg1[0xe] = zmm0[0].o
arg1[0xf] = temp0_344
int64_t rdx_1 = zmm0[0].q
zmm0[0].o = zx.o(rdx_1.d)
arg2 = zx.o(rax_2.d)
uint32_t result = (rax_2 u>> 0x20).d
arg3[0].o = zx.o((rdx_1 u>> 0x20).d)
arg4[0].o = (*arg1)[6]
zmm7 = arg1[1][0]
float temp0_345[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg2, 0x10)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm7, 0x10)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, (*arg1)[5], 0x20)
float temp0_348[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_345, zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3[0].o, 0x20)
arg2 = __vmovsd_xmmdq_memq(arg1[1][0].q)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm7, 0x20)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, temp0_348, zmm5[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm5[0].o = zx.o(result)
zmm5[0].o = _mm_broadcastd_epi32(zmm5[0])
float temp0_358[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg4[0].o, 0x20)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, arg3[0].o, temp0_358)
float temp0_360[0x4] = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_348, temp0_360)
float temp0_365[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_365, zmm0[0].o)
arg1[8][0] = zmm0[0]
(*arg1)[0x21] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
(*arg1)[0x22] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = (*arg1)[0x12]
arg2 = arg1[4][0]
arg3[0].o = _mm_permute_ps(temp0_344, 0xc9)
arg4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg2, 0x10)
arg4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg4[0].o, (*arg1)[0x11], 0x20)
float temp0_373[0x4] = _mm_permute_ps(temp0_344, 0xd2)
zmm5[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
float temp0_377[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_373, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x20)), 
    arg3[0].o, arg4[0].o)
float temp0_378[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_377, temp0_377)
float temp0_379[0x4] = _mm_broadcast_ss((*arg1)[0x3f])
arg4[0].o = __vmovsd_xmmdq_memq(arg1[4][0].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm0[0].o, 0x20)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, temp0_379, temp0_378)
arg4[0].o = _mm_permute_ps(temp0_378, 0xd2)
float temp0_386[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_373, _mm_permute_ps(temp0_378, 0xc9)), arg3[0].o, arg4[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[0x35], 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_386)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
(*arg1)[0x23] = zmm0[0]
arg1[9][0] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
(*arg1)[0x25] = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x3b])
arg2 = *arg1
arg3[0].o = _mm_broadcast_ss(arg1[0xe][0])
arg4[0].o = (*arg1)[3]
zmm4 = (*arg1)[2]
zmm5[0].o = (*arg1)[1]
float temp0_397[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x10), 
        zmm5[0].o, 0x20), 
    arg2, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_397)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, arg2, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x39])
float temp0_406[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), arg2, 0x20), 
            zmm5[0].o, 0x30), 
        zmm0[0].o), 
    zmm9, arg3[0].o)
zmm0[0].o = _mm_broadcast_ss((*arg1)[0x3a])
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x10), arg4[0].o, 0x20), 
        zmm4, 0x30), 
    zmm0[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm8, temp0_406)
arg2 = arg1[3]
arg3[0].o = _mm_broadcast_ss(arg1[0xf][0])
arg4[0].o = (*arg1)[0xf]
zmm4 = (*arg1)[0xe]
zmm5[0].o = (*arg1)[0xd]
float temp0_416[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4, 0x10), 
        zmm5[0].o, 0x20), 
    arg2, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_416)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm11)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, arg2, temp0_379)
float temp0_420[0x4] = _mm_broadcast_ss((*arg1)[0x3d])
float temp0_425[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), arg2, 0x20), 
            zmm5[0].o, 0x30), 
        temp0_420), 
    zmm9, arg3[0].o)
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3e])
float temp0_431[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg2, 0x10), arg4[0].o, 0x20), 
            zmm4, 0x30), 
        arg3[0].o), 
    zmm8, temp0_425)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_431)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
arg3[0].o = _mm_cmp_ss(zmm12, arg3[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm10, arg3[0].o)
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_439[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_431, arg3[0].o)
arg1[0xa] = zmm0[0].o
arg1[0xb] = temp0_439
_mm256_zeroupper()
return result
