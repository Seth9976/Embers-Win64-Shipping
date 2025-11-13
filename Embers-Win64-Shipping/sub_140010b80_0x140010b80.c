// 函数: sub_140010b80
// 地址: 0x140010b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88[0x4] = arg5
float var_f0 = arg4[0]
float var_ec = arg3[0]
float var_f4 = arg2[0]
float zmm0[0x4] = arg1[0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcastss_ps(zmm0))
arg3[0].o = _mm_broadcast_ss((*arg1)[0x39])
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, arg3[0].o)
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss((*arg1)[0x3b]))
arg2 = _mm_permute_pd(temp0, 1) f* (*arg1)[0x3a]
int32_t zmm4[0x8]
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, arg3[0].o, 0x88)
float temp0_9[0x4] = _mm_permute_ps(zmm4[0].o, 0xd8)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
float temp0_17[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, arg3[0].o, 0x4e), temp0_2, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg2, 0x1c), 
    arg3[0].o, 0x60))
float temp0_18[0x4] = _mm_broadcast_ss(1f)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, temp0_17)
float zmm11[0x4] = arg1[6][0]
int32_t temp0_20[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x19], 0x10)
uint32_t zmm7[0x8]
zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x1a], 0x20)
float zmm9[0x4] = (*arg1)[0x1b]
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, _mm_broadcastss_ps(arg3[0].o))
float temp0_26[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_11, 0xea), temp0_21, temp0_24)
float temp0_28[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm4[0].o, 0xd5), zmm7[0].o, temp0_26)
float temp0_29[0x4] = _mm_permute_ps(zmm4[0].o, 0xea)
float temp0_32[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(arg3[0].o, 0xd5)), zmm11, temp0_29)
float temp0_34[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(temp0_11), zmm7[0].o, temp0_32)
float temp0_35[0x4] = _mm_permute_ps(temp0_11, 0xd5)
float temp0_38[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_broadcastss_ps(zmm4[0].o)), zmm11, temp0_35)
float temp0_40[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg3[0].o, 0xea), zmm7[0].o, temp0_38)
float temp0_42[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4[0].o, 0x9c), temp0_11, 0x60)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_11, 0x8c)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm4[0].o, 0x20)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_42, zmm4[0].o, 0x4e)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, temp0_11, 0x14)
arg3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 4)
zmm4[0].o = _mm_broadcastss_ps(temp0_28)
float temp0_49[0x4] = _mm_permute_ps(temp0_28, 0xd5)
float temp0_51[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_49), temp0_42, zmm4[0].o)
float temp0_53[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_28, 0xea), arg3[0].o, temp0_51)
zmm4[0].o = _mm_broadcastss_ps(temp0_34)
float temp0_55[0x4] = _mm_permute_ps(temp0_34, 0xd5)
float temp0_57[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_55), temp0_42, zmm4[0].o)
float temp0_59[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_34, 0xea), arg3[0].o, temp0_57)
float temp0_60[0x4] = _mm_broadcastss_ps(temp0_40)
float temp0_61[0x4] = _mm_permute_ps(temp0_40, 0xd5)
float temp0_63[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_61), temp0_42, temp0_60)
float temp0_65[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_40, 0xea), arg3[0].o, temp0_63)
zmm0 = arg1[0xf]
float temp0_66[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
float temp0_68[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_66, _mm_broadcastss_ps(zmm0))
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3d])
float temp0_70[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_66, arg3[0].o)
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3f])
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_66, arg3[0].o)
arg2 = _mm_permute_pd(temp0_66, 1) f* (*arg1)[0x3e]
float temp0_75[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_68, temp0_70, 0x88), 0xd8)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_75)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_75, arg3[0].o)
float temp0_84[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, 
    __vaddps_xmmdq_xmmdq_xmmdq(
        _mm_permute_ps(
            __vshufps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_68, temp0_70, 0x4e), temp0_68, 0xc), 
            0x78), 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg2, 0x1c), 
        temp0_70, 0x60)))
float temp0_85[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, arg1[7][0], 0x10)
float temp0_86[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x1d], 0x20)
arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_broadcastss_ps(temp0_84))
float temp0_90[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg3[0].o, 0xea), temp0_85, arg5)
float temp0_92[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_76, 0xd5), temp0_86, temp0_90)
float temp0_93[0x4] = _mm_permute_ps(temp0_76, 0xea)
zmm4[0].o = _mm_permute_ps(temp0_84, 0xd5)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, zmm4[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm9, temp0_93)
float temp0_98[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(arg3[0].o), temp0_86, zmm4[0].o)
zmm4[0].o = _mm_broadcastss_ps(temp0_76)
float temp0_100[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xd5)
float temp0_102[0x4] = _mm_fmadd_ps(temp0_100, zmm9, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(temp0_84, 0xea)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_86, temp0_102)
float temp0_106[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_84, temp0_76, 0x9c), arg3[0].o, 0x60)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_84, arg3[0].o, 0x8c)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, temp0_76, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_106, temp0_76, 0x4e), arg3[0].o, 0x14)
arg3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_84, 4)
float temp0_112[0x4] = _mm_broadcastss_ps(temp0_92)
float temp0_113[0x4] = _mm_permute_ps(temp0_92, 0xd5)
float temp0_115[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_113), temp0_106, temp0_112)
float temp0_117[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_92, 0xea), arg3[0].o, temp0_115)
float temp0_118[0x4] = _mm_broadcastss_ps(temp0_98)
float temp0_119[0x4] = _mm_permute_ps(temp0_98, 0xd5)
float temp0_121[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_119), temp0_106, temp0_118)
float temp0_123[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_98, 0xea), arg3[0].o, temp0_121)
float temp0_124[0x4] = _mm_broadcastss_ps(zmm4[0].o)
float temp0_125[0x4] = _mm_permute_ps(zmm4[0].o, 0xd5)
float temp0_127[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_125), temp0_106, temp0_124)
arg5 = _mm_fmadd_ps(_mm_permute_ps(zmm4[0].o, 0xea), arg3[0].o, temp0_127)
float temp0_131[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[8][0].q), (*arg1)[0x22], 0x20)
arg3[0].o =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
zmm0 = (*arg7)[2]
zmm9 = *arg7
float zmm13[0x4] = (*arg7)[1]
float var_e8 = zmm0[0]
float temp0_135[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm9, 0x10), zmm13, 0x20)
float var_b8[0x4] = arg3[0].o
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_131, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm4[0].o, 0xc9)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd2)
float temp0_140[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg7 + 4)), zmm9, 0x20)
float temp0_142[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_140)
float temp0_145[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, temp0_135, zmm4[0].o)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_142, temp0_145)
float temp0_149[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_140, _mm_permute_ps(zmm4[0].o, 0xd2))
float zmm5[0x4] = var_f0
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xc9)
float temp0_151[0x4] = _mm_fmsub_ps(temp0_149, temp0_135, zmm4[0].o)
float temp0_153[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_59, _mm_permute_ps(arg3[0].o, 0xd5))
zmm4[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_155[0x4] = _mm_fmadd_ps(temp0_153, temp0_53, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xea)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_65, temp0_155)
float temp0_159[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_123, _mm_permute_ps(temp0_151, 0xd5))
float temp0_160[0x4] = _mm_broadcastss_ps(temp0_151)
float temp0_161[0x4] = _mm_fmadd_ps(temp0_159, temp0_117, temp0_160)
float temp0_163[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_151, 0xea), arg5, temp0_161)
float temp0_164[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4[0].o)
arg2 = temp0_164 f+ __vmovshdup_xmmdq_xmmdq(temp0_164)[0]
zmm0 = _mm_permute_pd(temp0_164, 1) f+ arg2[0]
float temp0_167[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_151, temp0_163)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_167)
arg3[0].o = temp0_167 f+ arg3[0]
arg5 = _mm_permute_pd(temp0_167, 1) f+ arg3[0]
zmm7[0].o = (*arg1)[0x1e]
zmm11 = (*arg1)[0x1f]
arg2 = zmm11 f+ (zmm7[0].o f+ zmm0[0])[0]
arg4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_160, temp0_160)

if (not(zmm5 f<= 9.99999975e-05f))
    zmm0 = __vmovsd_xmmdq_memq(arg1[0x17][0].q)
    arg4 = __vmovsd_xmmdq_memq(*(arg1 + 0x17c))
    float temp0_174[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_131, 
        __vinsertps_xmmdq_xmmdq_memd_immb(zmm0, (*arg1)[0x5e], 0x20))
    arg3[0].o = temp0_18
    float temp0_179[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
        __vdivps_xmmdq_xmmdq_xmmdq(temp0_174, arg3[0].o), 
        __vdivps_xmmdq_xmmdq_xmmdq(
            __vsubps_xmmdq_xmmdq_xmmdq(temp0_142, 
                __vinsertps_xmmdq_xmmdq_memd_immb(arg4, (*arg1)[0x61], 0x20)), 
            arg3[0].o))
    float temp0_182[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm13, 0x10), 
            var_e8, 0x20), 
        temp0_179)
    float temp0_183[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_182)
    arg3[0].o = _mm_permute_pd(temp0_182, 1)
    arg4 = arg3[0].o f+ (temp0_182 f+ temp0_183[0])[0]

arg3[0].o = 0x3f800000

if ((arg6 & 1) != 0)
    arg3[0].o = 0x3f800000
    arg3[0].o = 0x3f800000 f/ (zmm7[0].o f+ zmm11[0])[0]

arg3[0].o = arg3[0].o f* zmm5[0]
zmm5 = var_f4
float zmm6[0x4] = arg3[0].o f* var_ec f* zmm5[0] f* zmm5[0]
arg3[0].o = arg3[0].o f* zmm5[0]
arg2 = 0x3f800000 / _mm_fmadd_ss(arg3[0].o f+ zmm6[0], (arg2 f+ arg5[0])[0], 1f)[0]
arg3[0].o = arg4 f* arg3[0]
float temp0_186[0x4] = _mm_fmsub_ss(arg8, zmm6[0], arg3[0])
arg3[0].o = *arg9
float var_f4_1 = arg3[0]
float zmm15[0x4] = (temp0_186 f- arg3[0]) f* arg2[0]
float temp0_187[0x4] = _mm_broadcastss_ps(zmm7[0].o f* zmm15[0])
float temp0_189[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm13, 0x10), var_e8, 0x20)
float temp0_190[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_189, temp0_187)
zmm0 = zmm11 f* zmm15[0]
arg3[0].o = _mm_broadcast_ss(-0f)
float temp0_194[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_189, 
    _mm_broadcastss_ps(__vxorps_xmmdq_xmmdq_xmmdq(zmm0, arg3[0].o)))
float temp0_195[0x4] = _mm_broadcastss_ps(zmm15)
float temp0_196[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_195)
zmm0 = __vxorps_xmmdq_xmmdq_xmmdq(zmm15, arg3[0].o)
arg3[0].o = _mm_broadcastss_ps(0x3f800000)
float temp0_199[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(temp0_190, arg3[0].o, var_b8)
float temp0_200[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(temp0_194, arg3[0].o, temp0_145)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_199, temp0_200, 0x30)
arg1[0xc] = arg3[0].o
float temp0_202[0x4] = _mm_broadcastss_ps(zmm0)
arg1[0xd][0] = __vextractps_memd_xmmdq_immb(temp0_200, 1)
float temp0_204[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_163, temp0_202)
(*arg1)[0x35] = __vextractps_memd_xmmdq_immb(temp0_200, 2)
zmm5 = arg1[0xe]
zmm0 = arg1[0xf]
zmm11 = __vxorps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
zmm4[0].o = _mm_broadcastss_ps(temp0_196)
zmm7[0].o = _mm_permute_ps(zmm5, 0x1b)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
zmm13 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm13)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm5, zmm11)
zmm7[0].o = _mm_permute_ps(temp0_196, 0x55)
arg3[0].o = _mm_permute_pd(zmm5, 1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg3[0].o)
zmm7[0].o = data_142d3f7d0
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm7[0].o, zmm4[0].o)
float temp0_217[0x4] = _mm_permute_ps(temp0_196, 0xaa)
zmm4[0].o = _mm_permute_ps(zmm5, 0xb1)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_217, zmm4[0].o)
float zmm12[0x4] = data_142d3f7b0
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, arg3[0].o)
float temp0_221[0x4] = _mm_broadcastss_ps(temp0_204)
arg3[0].o = _mm_permute_ps(zmm0, 0x1b)
float temp0_225[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_221, arg3[0].o), zmm13), zmm0, 
    zmm11)
float temp0_226[0x4] = _mm_permute_ps(temp0_204, 0x55)
arg3[0].o = _mm_permute_pd(zmm0, 1)
float temp0_228[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_226, arg3[0].o)
float temp0_229[0x4] = _mm_broadcastss_ps(0x3f000000)
float temp0_230[0x4] = _mm_fmadd_ps(temp0_228, zmm7[0].o, temp0_225)
float temp0_231[0x4] = _mm_permute_ps(temp0_204, 0xaa)
zmm7[0].o = _mm_permute_ps(zmm0, 0xb1)
float temp0_233[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_231, zmm7[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_229, zmm5)
float temp0_235[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
zmm7[0].o = _mm_permute_pd(temp0_235, 1)
float temp0_237[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_235, zmm7[0].o)
zmm7[0].o = __vmovshdup_xmmdq_xmmdq(temp0_237)
zmm5 = temp0_237 f+ zmm7[0]
zmm7[0].o = zmm5 f* 0.5f
arg3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5, zmm5[0])
float temp0_241[0x4] =
    _mm_fmadd_ss(_mm_fnmadd_ss(arg3[0].o f* arg3[0], zmm7[0], 0.5f), arg3[0], arg3[0])
arg3[0].o = temp0_241 f* temp0_241[0]
arg3[0].o = _mm_fnmadd_ss(arg3[0].o, zmm7[0], 0.5f)
arg3[0].o = _mm_fmadd_ss(arg3[0].o, temp0_241[0], temp0_241[0])
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg3[0].o)
zmm4[0].o = _mm_cmp_ss(0x322bcc77, zmm5[0], 6)
zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, 0xffffffff)
zmm4 = _mm256_broadcastss_ps(zmm4[0].o)
zmm7 = __vandnps_ymmqq_ymmqq_memqq(zmm4, data_142fc9280)
arg3 = _mm256_and_ps(arg3, zmm4)
zmm4 = _mm256_or_ps(arg3, zmm7)
int64_t rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
float temp0_253[0x4] = _mm_fmadd_ps(_mm_fmadd_ps(temp0_233, zmm12, temp0_230), temp0_229, zmm0)
float temp0_254[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_253, temp0_253)
float temp0_256[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_254, _mm_permute_pd(temp0_254, 1))
zmm0 = temp0_256 f+ __vmovshdup_xmmdq_xmmdq(temp0_256)[0]
arg2 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm0[0], 6), 0xffffffff)
arg3[0].o = zmm0 f* 0.5f
float temp0_260[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0, zmm0[0])
float temp0_262[0x4] = _mm_fmadd_ss(_mm_fnmadd_ss(temp0_260 f* temp0_260[0], arg3[0], 0.5f), 
    temp0_260[0], temp0_260[0])
float temp0_266[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_253, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(temp0_262 f* temp0_262[0], arg3[0], 0.5f), 
        temp0_262[0], temp0_262[0])))
float temp0_267[0x4] = _mm_broadcastss_ps(arg2)
zmm0 = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_266, temp0_267), 
    __vandnps_xmmdq_xmmdq_memdq(temp0_267, data_142d3f660))
float temp0_271[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0)
arg3[0].o = _mm_permute_pd(temp0_271, 1)
float temp0_273[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_271, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_273)
arg2 = temp0_273 f+ arg3[0]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
float temp0_276[0x4] = _mm_cmp_ss(arg3[0].o, arg2[0], 2)
arg3[0].o = 0xbf800000
float temp0_279[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_276)))
arg1[0xe] = zmm4[0].o
arg1[0xf] = temp0_279
int64_t rax_1 = zmm4[0].q
arg2 = zx.o(rax_1.d)
arg3[0].o = zx.o(rdx_1.d)
uint32_t result = (rax_1 u>> 0x20).d
arg4 = zx.o(result)
zmm4[0].o = (*arg1)[6]
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, arg3[0].o, 0x10)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, arg2, 0x20)
float temp0_282[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg2, 0x10)
arg3[0].o = arg1[1][0]
float temp0_283[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_282, arg4, 0x20)
float temp0_285[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), arg3[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[5], 0x20)
float temp0_289[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_283, temp0_285), zmm7[0].o, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_289, temp0_289)
float temp0_292[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[1][0].q), zmm4[0].o, 0x20)
zmm4[0].o = zx.o((rdx_1 u>> 0x20).d)
zmm4[0].o = _mm_broadcastd_epi32(zmm4[0])
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, arg3[0].o, temp0_292)
float temp0_295[0x4] = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
float temp0_298[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_283, arg3[0].o), zmm7[0].o, temp0_295)
float temp0_300[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_199, __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_298))
arg3[0].o = (*arg1)[0x12]
arg4 = arg1[4][0]
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x10)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, (*arg1)[0x11], 0x20)
zmm7[0].o = _mm_permute_ps(temp0_279, 0xc9)
float temp0_305[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), arg4, 0x20)
float temp0_306[0x4] = _mm_permute_ps(temp0_279, 0xd2)
float temp0_308[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_306, temp0_305), zmm7[0].o, zmm4[0].o)
float temp0_309[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_308, temp0_308)
float temp0_310[0x4] = _mm_permute_ps(temp0_279, 0xff)
zmm4[0].o = __vmovsd_xmmdq_memq(arg1[4][0].q)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x20)
float temp0_313[0x4] = _mm_fmadd_ps(temp0_310, temp0_309, arg3[0].o)
arg3[0].o = _mm_permute_ps(temp0_309, 0xd2)
float temp0_319[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_200, 
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_313, 
        _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_306, _mm_permute_ps(temp0_309, 0xc9)), 
            zmm7[0].o, arg3[0].o)))
arg1[8] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_300, temp0_319, 0x30)
arg1[9][0] = __vextractps_memd_xmmdq_immb(temp0_319, 1)
(*arg1)[0x25] = __vextractps_memd_xmmdq_immb(temp0_319, 2)
zmm4[0].o = _mm_broadcast_ss((*arg1)[0x3b])
zmm0 = *arg1
float temp0_324[0x4] = _mm_broadcast_ss(arg1[0xe][0])
float zmm10[0x4] = (*arg1)[3]
zmm11 = (*arg1)[2]
float zmm14[0x4] = (*arg1)[1]
float temp0_330[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_324, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm11, 0x10), zmm14, 0x20), 
                zmm0, 0x30)), 
        zmm13), 
    zmm0, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss((*arg1)[0x39])
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), zmm0, 0x20), zmm14, 
        0x30), 
    zmm4[0].o)
zmm12 = data_142d3f7d0
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, temp0_330)
zmm9 = (*arg1)[0xf]
zmm6 = (*arg1)[0xe]
zmm7[0].o = (*arg1)[0xd]
float temp0_338[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm6, 0x10), zmm7[0].o, 0x20)
arg4 = arg1[3]
float temp0_339[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_338, arg4, 0x30)
float temp0_342[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg1[0xf][0]), temp0_339), zmm13)
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3f])
float temp0_344[0x4] = _mm_fmadd_ps(temp0_342, arg4, arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x38))
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm7[0].o, 0x30)
float temp0_348[0x4] = _mm_broadcast_ss((*arg1)[0x3d])
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_348)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm12, temp0_344)
float temp0_355[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm0, 0x10), 
            zmm10, 0x20), 
        zmm11, 0x30), 
    _mm_broadcast_ss((*arg1)[0x3a]))
zmm5 = data_142d3f7b0
float temp0_356[0x4] = _mm_fmadd_ps(temp0_355, zmm5, zmm4[0].o)
float temp0_362[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, arg4, 0x10), zmm9, 0x20), 
            zmm6, 0x30), 
        _mm_broadcast_ss((*arg1)[0x3e])), 
    zmm5, arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_356, temp0_362)
arg4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
float temp0_366[0x4] = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ temp0_366[0]
arg3[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_366, temp0_366), arg3[0], 2)
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
*arg9 = (zmm15 f+ var_f4_1)[0]
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_371[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_362, arg3[0].o)
arg1[0xa] = temp0_356
arg1[0xb] = temp0_371
_mm256_zeroupper()
return result
