// 函数: sub_14000a1b0
// 地址: 0x14000a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_78[0x4] = arg5
float var_ec = arg4[0]
float var_e8 = arg3[0]
float var_f0 = arg2[0]
float zmm0[0x4] = arg1[0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0, zmm0)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcastss_ps(zmm0))
int32_t zmm4[0x8]
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss((*arg1)[0x39]))
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss((*arg1)[0x3b]))
arg2 = _mm_permute_pd(temp0, 1) f* (*arg1)[0x3a]
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, zmm4[0].o, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_9)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, arg3[0].o)
arg4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_10, zmm4[0].o, 0x4e), arg4[0].o, 0xc)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0x78)
float temp0_16[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2, arg2, 0x1c), zmm4[0].o, 0x60)
float temp0_17[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_16)
float temp0_18[0x4] = _mm_broadcast_ss(1f)
arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, temp0_17)
float zmm12[0x4] = arg1[6][0]
int32_t temp0_20[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
uint32_t zmm6[0x8]
zmm6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x19], 0x10)
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x1a], 0x20)
float zmm10[0x4] = (*arg1)[0x1b]
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm12, _mm_broadcastss_ps(arg4[0].o))
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xea)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm6[0].o, temp0_24)
float temp0_28[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_10, 0xd5), temp0_22, zmm4[0].o)
float temp0_29[0x4] = _mm_permute_ps(temp0_10, 0xea)
zmm4[0].o = _mm_permute_ps(arg4[0].o, 0xd5)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, temp0_29)
float temp0_34[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(arg3[0].o), temp0_22, zmm4[0].o)
float temp0_35[0x4] = _mm_permute_ps(arg3[0].o, 0xd5)
zmm4[0].o = _mm_broadcastss_ps(temp0_10)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, temp0_35)
zmm6[0].o = _mm_permute_ps(arg4[0].o, 0xea)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, temp0_22, zmm4[0].o)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, temp0_10, 0x9c)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x60)
float temp0_44[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4[0].o, arg3[0].o, 0x8c), temp0_10, 0x20)
arg3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_10, temp0_10, 0x4e), arg3[0].o, 0x14), 
    arg4[0].o, 4)
float temp0_48[0x4] = _mm_broadcastss_ps(temp0_28)
arg4[0].o = _mm_permute_ps(temp0_28, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, arg4[0].o)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm4[0].o, temp0_48)
float temp0_53[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_28, 0xea), arg3[0].o, arg4[0].o)
float temp0_54[0x4] = _mm_broadcastss_ps(temp0_34)
arg4[0].o = _mm_permute_ps(temp0_34, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, arg4[0].o)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm4[0].o, temp0_54)
float temp0_59[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_34, 0xea), arg3[0].o, arg4[0].o)
float temp0_60[0x4] = _mm_broadcastss_ps(zmm6[0].o)
arg4[0].o = _mm_permute_ps(zmm6[0].o, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_44, arg4[0].o)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, zmm4[0].o, temp0_60)
float temp0_65[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm6[0].o, 0xea), arg3[0].o, arg4[0].o)
arg2 = arg1[0xf]
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2, arg2)
float temp0_67[0x4] = _mm_broadcastss_ps(arg2)
float temp0_68[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_67)
arg4[0].o = _mm_broadcast_ss((*arg1)[0x3d])
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = _mm_broadcast_ss((*arg1)[0x3f])
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg3[0].o = _mm_permute_pd(arg3[0].o, 1)
float zmm5[0x4] = arg3[0].o f* (*arg1)[0x3e]
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_68, zmm4[0].o, 0x88)
zmm6[0].o = _mm_permute_ps(arg3[0].o, 0xd8)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm6[0].o)
arg4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg4[0].o)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_54, zmm4[0].o, 0x4e)
float temp0_80[0x4] =
    _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, temp0_68, 0xc), 0x78)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm5, 0x1c), zmm4[0].o, 0x60)
float temp0_84[0x4] =
    __vsubps_xmmdq_xmmdq_xmmdq(temp0_18, __vaddps_xmmdq_xmmdq_xmmdq(temp0_80, zmm4[0].o))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, arg1[7][0], 0x10)
float temp0_86[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, (*arg1)[0x1d], 0x20)
zmm6[0].o = _mm_broadcastss_ps(temp0_84)
arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, zmm6[0].o)
zmm6[0].o = _mm_permute_ps(arg4[0].o, 0xea)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm4[0].o, arg5)
float temp0_92[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg3[0].o, 0xd5), temp0_86, zmm6[0].o)
zmm6[0].o = _mm_permute_ps(arg3[0].o, 0xea)
float temp0_94[0x4] = _mm_permute_ps(temp0_84, 0xd5)
float temp0_96[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_94), zmm10, zmm6[0].o)
zmm6[0].o = _mm_broadcastss_ps(arg4[0].o)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, temp0_86, temp0_96)
float temp0_99[0x4] = _mm_broadcastss_ps(arg3[0].o)
float temp0_100[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_99)
zmm4[0].o = _mm_permute_ps(arg4[0].o, 0xd5)
float temp0_102[0x4] = _mm_fmadd_ps(temp0_100, zmm10, zmm4[0].o)
arg5 = _mm_fmadd_ps(_mm_permute_ps(temp0_84, 0xea), temp0_86, temp0_102)
float temp0_106[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_84, arg3[0].o, 0x9c), arg4[0].o, 0x60)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_84, arg4[0].o, 0x8c)
float temp0_108[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_108, arg3[0].o, 0x4e)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4[0].o, 0x14)
float temp0_111[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, temp0_84, 4)
arg3[0].o = _mm_broadcastss_ps(temp0_92)
arg4[0].o = _mm_permute_ps(temp0_92, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, arg4[0].o)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_106, arg3[0].o)
zmm4[0].o = _mm_permute_ps(temp0_92, 0xea)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_111, arg4[0].o)
arg3[0].o = _mm_broadcastss_ps(zmm6[0].o)
arg4[0].o = _mm_permute_ps(zmm6[0].o, 0xd5)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_108, arg4[0].o)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_106, arg3[0].o)
float temp0_123[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm6[0].o, 0xea), temp0_111, arg4[0].o)
arg3[0].o = _mm_broadcastss_ps(arg5)
arg4[0].o = _mm_permute_ps(arg5, 0xd5)
float temp0_127[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_108, arg4[0].o), temp0_106, arg3[0].o)
arg4[0].o = _mm_permute_ps(arg5, 0xea)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_111, temp0_127)
float temp0_131[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_133[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
zmm10 = *(arg7 + 8)
float zmm14[0x4] = *arg7
float zmm13[0x4] = *(arg7 + 4)
float temp0_135[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm14, 0x10), zmm13, 0x20)
zmm6[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_131, temp0_133)
arg3[0].o = _mm_permute_ps(zmm6[0].o, 0xc9)
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xd2)
float temp0_140[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg7 + 4)), zmm14, 0x20)
arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, temp0_140)
float temp0_145[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
arg3[0].o = _mm_fmsub_ps(arg3[0].o, temp0_135, zmm6[0].o)
zmm6[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5, temp0_145)
float temp0_149[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_140, _mm_permute_ps(zmm6[0].o, 0xd2))
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xc9)
float temp0_151[0x4] = _mm_fmsub_ps(temp0_149, temp0_135, zmm6[0].o)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_59, _mm_permute_ps(arg3[0].o, 0xd5))
float temp0_154[0x4] = _mm_broadcastss_ps(arg3[0].o)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, temp0_53, temp0_154)
float temp0_157[0x4] = _mm_fmadd_ps(_mm_permute_ps(arg3[0].o, 0xea), temp0_65, zmm6[0].o)
zmm6[0].o = _mm_permute_ps(temp0_151, 0xd5)
float temp0_159[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_123, zmm6[0].o)
zmm6[0].o = _mm_broadcastss_ps(temp0_151)
float temp0_161[0x4] = _mm_fmadd_ps(temp0_159, zmm4[0].o, zmm6[0].o)
float temp0_163[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_151, 0xea), arg4[0].o, temp0_161)
arg4 = *arg10
_mm256_movemask_ps(arg4)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_157)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg4[0].o = arg3[0].o f+ arg4[0]
arg3[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = arg3[0].o f+ arg4[0]
float temp0_168[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_151, temp0_163)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_168)
arg4[0].o = temp0_168 f+ arg4[0]
arg2 = _mm_permute_pd(temp0_168, 1) f+ arg4[0]
zmm5 = (*arg1)[0x1e]
arg3[0].o = zmm5 f+ arg3[0]
zmm6[0].o = (*arg1)[0x1f]
arg3[0].o = zmm6[0].o f+ arg3[0]
float zmm15[0x4] = arg3[0].o f+ arg2[0]
zmm4[0].o = arg8
float zmm8[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_59, temp0_59)
zmm12 = var_ec

if (not(zmm12 f<= 9.99999975e-05f))
    arg2 = __vmovsd_xmmdq_memq(arg1[0x17][0].q)
    arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x17c))
    float temp0_175[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_131, 
        __vinsertps_xmmdq_xmmdq_memd_immb(arg2, (*arg1)[0x5e], 0x20))
    arg4[0].o = temp0_18
    float temp0_176[0x4] = __vdivps_xmmdq_xmmdq_xmmdq(temp0_175, arg4[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[0x61], 0x20)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5, arg3[0].o)
    arg3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
    float temp0_180[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_176, arg3[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm13, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm10, 0x20)
    float temp0_183[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_180)
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_183)
    arg4[0].o = _mm_permute_pd(temp0_183, 1)
    zmm8 = arg4[0].o f+ (temp0_183 f+ arg3[0])[0]

arg4[0].o = 0x3f800000

if ((arg6 & 1) != 0)
    arg4[0].o = 0x3f800000
    arg4[0].o = 0x3f800000 f/ (zmm5 f+ zmm6[0])[0]

arg4[0].o = arg4[0].o f* zmm12[0]
arg3[0].o = var_f0
arg2 = arg4[0].o f* var_e8 f* arg3[0] f* arg3[0]
arg4[0].o = arg4[0].o f* arg3[0]
arg3[0].o = arg4[0].o f+ arg2[0]
arg3[0].o = _mm_fmadd_ss(arg3[0].o, zmm15[0], 1f)
arg3[0].o = 0x3f800000 f/ arg3[0]
arg4[0].o = zmm8 f* arg4[0]
zmm4[0].o = _mm_fmsub_ss(zmm4[0].o, arg2[0], arg4[0])
arg2 = *arg9
float var_f0_1 = arg2[0]
zmm4[0].o = (zmm4[0].o f- arg2[0]) f* arg3[0]
var_e8.o = zmm4[0].o
float temp0_188[0x4] = _mm_broadcastss_ps(zmm5 f* zmm4[0])
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm13, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm10, 0x20)
float temp0_191[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_188)
arg2 = zmm6[0].o f* zmm4[0]
arg4[0].o = _mm_broadcast_ss(-0f)
float temp0_194[0x4] = _mm_broadcastss_ps(__vxorps_xmmdq_xmmdq_xmmdq(arg2, arg4[0].o))
float temp0_195[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_194)
float temp0_197[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_157, _mm_broadcastss_ps(zmm4[0].o))
zmm0 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg4[0].o)
arg3[0].o = _mm_broadcastss_ps(0x3f800000)
float temp0_200[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(temp0_191, arg3[0].o, temp0_133)
float temp0_201[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(temp0_195, arg3[0].o, temp0_145)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_200, temp0_201, 0x30)
arg1[0xc] = arg3[0].o
float temp0_203[0x4] = _mm_broadcastss_ps(zmm0)
arg1[0xd][0] = __vextractps_memd_xmmdq_immb(temp0_201, 1)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_163, temp0_203)
(*arg1)[0x35] = __vextractps_memd_xmmdq_immb(temp0_201, 2)
zmm5 = arg1[0xe]
zmm0 = arg1[0xf]
zmm14 = __vxorps_xmmdq_xmmdq_xmmdq(zmm14, zmm14)
arg3[0].o = _mm_broadcastss_ps(temp0_197)
float temp0_209[0x4] = _mm_permute_ps(zmm5, 0x1b)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_209)
zmm15 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm15)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm5, zmm14)
float temp0_214[0x4] = _mm_permute_ps(temp0_197, 0x55)
zmm4[0].o = _mm_permute_pd(zmm5, 1)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_214, zmm4[0].o)
zmm12 = data_142d3f7d0
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, arg3[0].o)
float temp0_218[0x4] = _mm_permute_ps(temp0_197, 0xaa)
arg3[0].o = _mm_permute_ps(zmm5, 0xb1)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_218, arg3[0].o)
arg2 = data_142d3f7b0
arg3[0].o = _mm_fmadd_ps(arg3[0].o, arg2, zmm4[0].o)
float temp0_222[0x4] = _mm_broadcastss_ps(arg4[0].o)
zmm4[0].o = _mm_permute_ps(zmm0, 0x1b)
float temp0_226[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_222, zmm4[0].o), zmm15), zmm0, 
    zmm14)
float temp0_227[0x4] = _mm_permute_ps(arg4[0].o, 0x55)
zmm4[0].o = _mm_permute_pd(zmm0, 1)
float temp0_229[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_227, zmm4[0].o)
float temp0_230[0x4] = _mm_broadcastss_ps(0x3f000000)
float temp0_231[0x4] = _mm_fmadd_ps(temp0_229, zmm12, temp0_226)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0xaa)
zmm6[0].o = _mm_permute_ps(zmm0, 0xb1)
float temp0_234[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg4[0].o, zmm6[0].o)
arg3[0].o = _mm_fmadd_ps(arg3[0].o, temp0_230, zmm5)
float temp0_236[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm6[0].o = _mm_permute_pd(temp0_236, 1)
float temp0_238[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_236, zmm6[0].o)
zmm6[0].o = __vmovshdup_xmmdq_xmmdq(temp0_238)
zmm5 = temp0_238 f+ zmm6[0]
zmm6[0].o = zmm5 f* 0.5f
zmm4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5, zmm5[0])
arg4[0].o = zmm4[0].o f* zmm4[0]
arg4[0].o = _mm_fnmadd_ss(arg4[0].o, zmm6[0], 0.5f)
arg4[0].o = _mm_fmadd_ss(arg4[0].o, zmm4[0], zmm4[0])
zmm4[0].o = arg4[0].o f* arg4[0]
zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm6[0], 0.5f)
zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, arg4[0], arg4[0])
arg4[0].o = _mm_broadcastss_ps(zmm4[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = 0x322bcc77
zmm4[0].o = _mm_cmp_ss(0x322bcc77, zmm5[0], 6)
zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, 0xffffffff)
zmm4 = _mm256_broadcastss_ps(zmm4[0].o)
zmm6 = __vandnps_ymmqq_ymmqq_memqq(zmm4, data_142fc9280)
arg3 = _mm256_or_ps(_mm256_and_ps(arg3, zmm4), zmm6)
int64_t rdx_1 = __vpextrq_gpr64q_xmmdq_immb(arg3[0].o, 1)
float temp0_254[0x4] = _mm_fmadd_ps(_mm_fmadd_ps(temp0_234, arg2, temp0_231), temp0_230, zmm0)
float temp0_255[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_254, temp0_254)
float temp0_257[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_255, _mm_permute_pd(temp0_255, 1))
zmm0 = temp0_257 f+ __vmovshdup_xmmdq_xmmdq(temp0_257)[0]
arg2 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm0[0], 6), 0xffffffff)
arg4[0].o = zmm0 f* 0.5f
float temp0_261[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0, zmm0[0])
zmm4[0].o = temp0_261 f* temp0_261[0]
zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, arg4[0], 0.5f)
zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, temp0_261[0], temp0_261[0])
float temp0_267[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_254, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(zmm4[0].o f* zmm4[0], arg4[0], 0.5f), zmm4[0], 
        zmm4[0])))
float temp0_268[0x4] = _mm_broadcastss_ps(arg2)
arg2 = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_267, temp0_268), 
    __vandnps_xmmdq_xmmdq_memdq(temp0_268, data_142d3f660))
float temp0_272[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg2)
arg4[0].o = _mm_permute_pd(temp0_272, 1)
float temp0_274[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_272, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_274)
arg4[0].o = temp0_274 f+ arg4[0]
arg4[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_274, temp0_274), arg4[0], 2)
arg4[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg4[0].o)
arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
arg4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2, arg4[0].o)
arg1[0xe] = arg3[0].o
arg1[0xf] = arg4[0].o
int64_t rax_2 = arg3[0].q
arg2 = zx.o(rax_2.d)
arg3[0].o = zx.o(rdx_1.d)
uint32_t result = (rax_2 u>> 0x20).d
zmm4[0].o = zx.o(result)
zmm5 = (*arg1)[6]
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x10)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg2, 0x20)
float temp0_283[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg2, 0x10)
arg3[0].o = arg1[1][0]
float temp0_284[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_283, zmm4[0].o, 0x20)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x14))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg3[0].o, 0x20)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, arg3[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, (*arg1)[5], 0x20)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_284, zmm4[0].o)
zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm6[0].o, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
zmm4[0].o = __vmovsd_xmmdq_memq(arg1[1][0].q)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5, 0x20)
float temp0_295[0x4] =
    _mm_fmadd_ps(_mm_broadcastd_epi32(zx.o((rdx_1 u>> 0x20).d)[0]), arg3[0].o, zmm4[0].o)
zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
float temp0_301[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_200, 
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_295, 
        _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_284, arg3[0].o), zmm6[0].o, zmm4[0].o)))
arg3[0].o = (*arg1)[0x12]
zmm4[0].o = arg1[4][0]
float temp0_303[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm4[0].o, 0x10), (*arg1)[0x11], 0x20)
zmm6[0].o = _mm_permute_ps(arg4[0].o, 0xc9)
float temp0_306[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), zmm4[0].o, 0x20)
zmm4[0].o = _mm_permute_ps(arg4[0].o, 0xd2)
float temp0_309[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_306), zmm6[0].o, temp0_303)
float temp0_310[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_309, temp0_309)
arg4[0].o = _mm_permute_ps(arg4[0].o, 0xff)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4][0].q), arg3[0].o, 0x20)
arg4[0].o = _mm_fmadd_ps(arg4[0].o, temp0_310, arg3[0].o)
arg3[0].o = _mm_permute_ps(temp0_310, 0xd2)
float temp0_316[0x4] = _mm_permute_ps(temp0_310, 0xc9)
float temp0_318[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_316), zmm6[0].o, arg3[0].o)
float temp0_320[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_201, __vaddps_xmmdq_xmmdq_xmmdq(arg4[0].o, temp0_318))
arg1[8] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_301, temp0_320, 0x30)
arg1[9][0] = __vextractps_memd_xmmdq_immb(temp0_320, 1)
(*arg1)[0x25] = __vextractps_memd_xmmdq_immb(temp0_320, 2)
float temp0_324[0x4] = _mm_broadcast_ss((*arg1)[0x3b])
arg2 = *arg1
float temp0_325[0x4] = _mm_broadcast_ss(arg1[0xe][0])
zmm10 = (*arg1)[3]
zmm13 = (*arg1)[2]
arg5 = (*arg1)[1]
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm13, 0x10)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg5, 0x20)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg2, 0x30)
float temp0_331[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_325, zmm6[0].o), zmm15), arg2, 
    temp0_324)
float temp0_332[0x4] = _mm_broadcast_ss((*arg1)[0x39])
zmm6[0].o = __vmovsd_xmmdq_memq(*(arg1 + 8))
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg2, 0x20)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, arg5, 0x30)
float temp0_337[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, temp0_332), zmm12, temp0_331)
zmm8 = (*arg1)[0xf]
zmm6[0].o = (*arg1)[0xe]
float zmm7[0x4] = (*arg1)[0xd]
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm6[0].o, 0x10)
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm7, 0x20)
arg4[0].o = arg1[3]
arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, arg4[0].o, 0x30)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg1[0xf][0]), arg3[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm15)
zmm4[0].o = _mm_broadcast_ss((*arg1)[0x3f])
arg3[0].o = _mm_fmadd_ps(arg3[0].o, arg4[0].o, zmm4[0].o)
zmm4[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x38))
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg4[0].o, 0x20)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm7, 0x30)
float temp0_349[0x4] = _mm_broadcast_ss((*arg1)[0x3d])
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_349)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm12, arg3[0].o)
float temp0_354[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5, arg2, 0x10), zmm10, 
        0x20), 
    zmm13, 0x30)
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3a])
float temp0_356[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_354, arg3[0].o)
zmm5 = data_142d3f7b0
float temp0_357[0x4] = _mm_fmadd_ps(temp0_356, zmm5, temp0_337)
float temp0_360[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, arg4[0].o, 0x10), 
        zmm8, 0x20), 
    zmm6[0].o, 0x30)
arg3[0].o = _mm_broadcast_ss((*arg1)[0x3e])
float temp0_363[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_360, arg3[0].o), zmm5, zmm4[0].o)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_357, temp0_363)
arg4[0].o = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4[0].o)
arg4[0].o = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
arg3[0].o = arg3[0].o f+ arg4[0]
arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
arg3[0].o = _mm_cmp_ss(arg4[0].o, arg3[0], 2)
arg4[0].o = 0xbf800000
arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg3[0].o)
arg4[0].o = var_e8.o
arg4[0].o = arg4[0].o f+ var_f0_1
*arg9 = arg4[0]
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
float temp0_372[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_363, arg3[0].o)
arg1[0xa] = temp0_357
arg1[0xb] = temp0_372
_mm256_zeroupper()
return result
