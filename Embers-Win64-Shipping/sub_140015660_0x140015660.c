// 函数: sub_140015660
// 地址: 0x140015660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68[0x4] = arg5
float var_d0 = arg4[0]
float var_cc = arg3[0]
float var_d4 = arg2[0]
float zmm0[0x8] = *arg10
_mm256_movemask_ps(zmm0)
zmm0[0].o = arg1[0xe]
float temp0_1[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_1, zmm0[0].o)
float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_1, _mm_broadcast_ss(*(arg1 + 0xe4)))
float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_1, _mm_broadcast_ss(*(arg1 + 0xec)))
arg4 = _mm_permute_pd(temp0_1, 1) f* *(arg1 + 0xe8)
float temp0_10[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_5, 0x88), 0xd8)
float temp0_11[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_7, temp0_10)
float temp0_12[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_10, temp0_7)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_5, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
float temp0_17[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, arg4, 0x1c), temp0_5, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_17)
float zmm9[0x4] = data_142d3f670
float temp0_19[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm9, zmm0[0].o)
float zmm4[0x4] = arg1[6].d
float zmm13[0x4] = *(arg1 + 0x6c)
int32_t temp0_20[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x64), 0x10)
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x68), 0x20)
zmm0[0].o = _mm_permute_ps(temp0_19, 0xc0)
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(temp0_12, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, zmm0[0].o)
float temp0_27[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_24)
zmm0[0].o = _mm_permute_ps(temp0_11, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, zmm0[0].o)
float temp0_30[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_27)
zmm0[0].o = _mm_permute_ps(temp0_11, 0xea)
float temp0_32[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(temp0_19, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, zmm0[0].o)
float temp0_35[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_32, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(temp0_12, 0xc0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, zmm0[0].o)
float temp0_38[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_35)
zmm0[0].o = _mm_permute_ps(temp0_12, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm0[0].o)
float temp0_42[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_11, 0xc0))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_42)
float temp0_45[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, _mm_permute_ps(temp0_19, 0xea))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_45)
float temp0_48[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_50[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, temp0_12, 0x8c), temp0_11, 0x20)
float temp0_53[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_11, 0x4e), temp0_12, 0x14), 
    temp0_19, 4)
float temp0_58[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_30, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_50, _mm_permute_ps(temp0_30, 0xd5)))
float temp0_61[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, _mm_permute_ps(temp0_30, 0xea)), temp0_58)
float temp0_66[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_38, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_50, _mm_permute_ps(temp0_38, 0xd5)))
float temp0_69[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, _mm_permute_ps(temp0_38, 0xea)), temp0_66)
float temp0_74[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(zmm0[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_50, _mm_permute_ps(zmm0[0].o, 0xd5)))
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, zmm0[0].o)
float temp0_77[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_74)
zmm0[0].o = arg1[0xf]
float temp0_78[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_78, zmm0[0].o)
float temp0_82[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_78, _mm_broadcast_ss(*(arg1 + 0xf4)))
float temp0_84[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_78, _mm_broadcast_ss(*(arg1 + 0xfc)))
float zmm6[0x4] = _mm_permute_pd(temp0_78, 1) f* *(arg1 + 0xf8)
float temp0_87[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_82, 0x88), 0xd8)
float temp0_88[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_84, temp0_87)
float temp0_89[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_87, temp0_84)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_82, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
float temp0_94[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm6, 0x1c), temp0_82, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_94)
float temp0_96[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, arg1[7].d, 0x10)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm9, zmm0[0].o)
float temp0_98[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x74), 0x20)
float temp0_100[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, _mm_permute_ps(zmm0[0].o, 0xc0))
float temp0_103[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, _mm_permute_ps(temp0_89, 0xea)), temp0_100)
float temp0_106[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_98, _mm_permute_ps(temp0_88, 0xd5)), temp0_103)
arg5 = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm13, _mm_permute_ps(temp0_88, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, _mm_permute_ps(zmm0[0].o, 0xd5)))
float temp0_114[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_98, _mm_permute_ps(temp0_89, 0xc0)), arg5)
arg3[0].o = _mm_permute_ps(temp0_89, 0xd5)
arg5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, arg3[0].o)
arg3[0].o = _mm_permute_ps(temp0_88, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5, arg3[0].o)
float temp0_121[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_98, _mm_permute_ps(zmm0[0].o, 0xea))
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_121)
float temp0_124[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_88, 0x9c), temp0_89, 0x60)
float temp0_126[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_89, 0x8c), temp0_88, 0x20)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_88, 0x4e), temp0_89, 0x14), 
    zmm0[0].o, 4)
float temp0_134[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_124, _mm_permute_ps(temp0_106, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(temp0_106, 0xd5)))
float temp0_135[0x4] = _mm_permute_ps(temp0_106, 0xea)
float temp0_137[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_135), temp0_134)
float temp0_142[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_124, _mm_permute_ps(temp0_114, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(temp0_114, 0xd5)))
float temp0_143[0x4] = _mm_permute_ps(temp0_114, 0xea)
float temp0_145[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_143), temp0_142)
float temp0_150[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_124, _mm_permute_ps(arg3[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(arg3[0].o, 0xd5)))
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
arg3[0].o = __vmovsd_xmmdq_memq(arg1[8].q)
float temp0_154[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x88), 0x20)
float temp0_155[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_150)
zmm0[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + 0xc8), 0x20)
float var_c8[0x4] = zmm0[0].o
float temp0_158[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_154, zmm0[0].o)
float zmm15[0x4] = arg7[2]
zmm0[0].o = *arg7
zmm9 = arg7[1]
float temp0_160[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm0[0].o, 0x10), zmm9, 0x20)
arg3[0].o = _mm_permute_ps(temp0_158, 0xc9)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_160)
float temp0_163[0x4] = _mm_permute_ps(temp0_158, 0xd2)
float temp0_165[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg7 + 4)), zmm0[0].o, 0x20)
float temp0_166[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_163, temp0_165)
arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_166)
float temp0_169[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x8c)), *(arg1 + 0x94), 0x20)
arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + 0xcc)), *(arg1 + 0xd4), 0x20)
float temp0_172[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_169, arg5)
float temp0_177[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_160, _mm_permute_ps(temp0_172, 0xc9)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_165, _mm_permute_ps(temp0_172, 0xd2)))
float temp0_182[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_memdq(_mm_permute_ps(arg3[0].o, 0xc0), temp0_61), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_69, _mm_permute_ps(arg3[0].o, 0xd5)))
float temp0_185[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, _mm_permute_ps(arg3[0].o, 0xea)), temp0_182)
float temp0_190[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_137, _mm_permute_ps(temp0_177, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_145, _mm_permute_ps(temp0_177, 0xd5)))
float temp0_193[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_155, _mm_permute_ps(temp0_177, 0xea)), temp0_190)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_185)
float temp0_195[0x4] = __vmovshdup_xmmdq_xmmdq(arg3[0].o)
zmm4 = _mm_permute_pd(arg3[0].o, 1)
arg3[0].o = arg3[0].o f+ temp0_195[0]
arg3[0].o = zmm4 f+ arg3[0]
float temp0_197[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_177, temp0_193)
float temp0_198[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_197)
zmm4 = _mm_permute_pd(temp0_197, 1)
float zmm5[0x4] = *(arg1 + 0x78)
arg3[0].o = zmm5 f+ arg3[0]
float zmm7[0x4] = *(arg1 + 0x7c)
arg3[0].o = zmm7 f+ arg3[0]
float zmm14[0x4] = arg3[0].o f+ (zmm4 f+ (temp0_197 f+ temp0_198[0])[0])[0]
int32_t* rax
rax.b = arg6
zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(zmm4, zmm4)
arg4 = var_d0

if (not(arg4 f<= 9.99999975e-05f))
    float temp0_202[0x4] =
        __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(arg1[0x17].q), *(arg1 + 0x178), 0x20)
    arg3[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x17c))
    float temp0_204[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_154, temp0_202)
    zmm6 = arg4
    arg4 = data_142e6da00
    float temp0_205[0x4] = __vdivps_xmmdq_xmmdq_xmmdq(temp0_204, arg4)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg3[0].o, *(arg1 + 0x184), 0x20)
    arg3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_169, arg3[0].o)
    arg3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
    float temp0_209[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_205, arg3[0].o)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm15, 0x20)
    float temp0_212[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_209)
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_212)
    zmm4 = _mm_permute_pd(temp0_212, 1) f+ (temp0_212 f+ arg3[0])[0]
    arg4 = zmm6

zmm6 = 0x3f800000

if ((rax.b & 1) != 0)
    arg3[0].o = 0x3f800000
    zmm6 = 0x3f800000 / (zmm5 f+ zmm7[0])[0]

arg3[0].o = zmm6 f* arg4[0]
arg4 = var_d4
arg2 = zmm6 f* var_cc f* arg4[0] f* arg4[0]
arg3[0].o = arg3[0].o f* arg4[0]
arg3[0].o = zmm4 f* arg3[0]
arg3[0].o = *arg9
float var_d4_1 = arg3[0]
float zmm8[0x4] = (arg2 f* arg8[0] f- arg3[0] f- arg3[0])
    f* (0x3f800000 / (zmm14 f* (arg3[0].o f+ arg2[0])[0] f+ 1f)[0])[0]
float temp0_215[0x4] = _mm_permute_ps(zmm5 f* zmm8[0], 0xc0)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm15, 0x20)
float temp0_218[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_215)
arg3[0].o = zmm7 f* zmm8[0]
arg4 = data_142d3f780
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg4)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc0)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3[0].o)
zmm0[0].o = _mm_permute_ps(zmm8, 0xc0)
float temp0_223[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_185, zmm0[0].o)
float temp0_224[0x4] = __vaddps_xmmdq_xmmdq_memdq(temp0_218, var_c8)
float temp0_225[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg5)
arg1[0xc] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_224, temp0_225, 0x30)
arg1[0xd].d = __vextractps_memd_xmmdq_immb(temp0_225, 1)
arg2 = __vxorps_xmmdq_xmmdq_xmmdq(zmm8, arg4)
*(arg1 + 0xd4) = __vextractps_memd_xmmdq_immb(temp0_225, 2)
float temp0_231[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_193, _mm_permute_ps(arg2, 0xc0))
arg2 = arg1[0xe]
zmm7 = arg1[0xf]
arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2, arg3[0].o)
float temp0_236[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_223, 0), _mm_permute_ps(arg2, 0x1b))
zmm13 = __vmovddup_xmmdq_memq(-0.007812501848093234)
float temp0_238[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_236, zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_238)
float temp0_242[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_223, 0x55), _mm_permute_pd(arg2, 1))
float zmm12[0x4] = data_142d3f7d0
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_242, zmm12), zmm0[0].o)
float temp0_247[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_223, 0xaa), _mm_permute_ps(arg2, 0xb1))
zmm14 = data_142d3f7b0
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_247, zmm14), zmm0[0].o)
zmm4 = data_142d3f640
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, arg3[0].o)
float temp0_255[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_231, 0), _mm_permute_ps(zmm7, 0x1b)), zmm13)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, temp0_255)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_231, 0x55), _mm_permute_pd(zmm7, 1)), 
        zmm12), 
    arg3[0].o)
arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_231, 0xaa), _mm_permute_ps(zmm7, 0xb1)), 
        zmm14), 
    arg3[0].o)
float temp0_267[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm4)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2, zmm0[0].o)
float temp0_269[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg3[0].o = _mm_permute_pd(temp0_269, 1)
float temp0_271[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_269, arg3[0].o)
arg3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_271)
arg3[0].o = temp0_271 f+ arg3[0]
zmm4 = arg3[0].o f* 0.5f
float temp0_273[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
zmm5 = temp0_273 f+ (temp0_273 f* (0x3f000000 - (temp0_273 f* temp0_273[0] f* zmm4[0])[0])[0])[0]
zmm4 = zmm4 f* (zmm5 f* zmm5[0])[0]
arg3[0].o = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
zmm4 = zmm5 f+ (zmm5 f* (0x3f000000 - zmm4[0])[0])[0]
arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
float temp0_276[0x4] = _mm_permute_ps(zmm4, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_276)
arg3[0].o = _mm_permute_ps(arg3[0].o, 0)
zmm0 = _mm256_and_ps(zmm0, arg3)
int32_t temp0_280[0x8] = __vandnps_ymmqq_ymmqq_memqq(arg3, data_142fc9280)
int32_t temp0_281[0x4] = _mm256_or_ps(zmm0, temp0_280)
int64_t rax_1 = __vpextrq_gpr64q_xmmdq_immb(temp0_281, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7, temp0_267)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg4 = _mm_permute_pd(temp0_280[0].o, 1)
temp0_280[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, arg4)
float temp0_286[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_280[0].o)
temp0_280[0].o = temp0_280[0].o f+ temp0_286[0]
arg4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, temp0_280[0], 6), 0xffffffff)
zmm4 = temp0_280[0].o f* 0.5f
temp0_280[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(temp0_280[0].o, temp0_280[0])
temp0_280[0].o = temp0_280[0].o
    f+ (temp0_280[0].o f* (0x3f000000 - (temp0_280[0].o f* temp0_280[0] f* zmm4[0])[0])[0])[0]
float temp0_290[0x4] = _mm_permute_ps(
    temp0_280[0].o f+
        (temp0_280[0].o f* (0x3f000000 - (zmm4 f* (temp0_280[0].o f* temp0_280[0])[0])[0])[0])[0], 
    0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_290)
float temp0_292[0x4] = _mm_permute_ps(arg4, 0)
temp0_280[0].o = __vandnps_xmmdq_xmmdq_memdq(temp0_292, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_292)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_280[0].o)
float temp0_296[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_281, zmm0[0].o)
temp0_280[0].o = _mm_permute_pd(temp0_296, 1)
float temp0_298[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_296, temp0_280[0].o)
temp0_280[0].o = __vmovshdup_xmmdq_xmmdq(temp0_298)
arg2 = temp0_298 f+ temp0_280[0]
temp0_280[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_280[0].o)
float temp0_302[0x4] = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
    _mm_cmp_ss(temp0_280[0].o, arg2[0], 2))
int64_t rdx_1 = temp0_281[0].q
float temp0_303[0x4] = _mm_permute_ps(temp0_302, 0)
float temp0_304[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_303)
arg1[0xe] = temp0_281
arg1[0xf] = temp0_304
zmm0[0].o = zx.o(rdx_1.d)
arg4 = zx.o(rax_1.d)
zmm4 = zx.o((rdx_1 u>> 0x20).d)
zmm5 = *(arg1 + 0x18)
float temp0_306[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg4, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0[0].o, 0x10)
arg4 = arg1[1].d
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x20)
float temp0_310[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), arg4, 0x20)
uint32_t result = (rax_1 u>> 0x20).d
float temp0_315[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_306, 
        __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, arg4, 0x10), 
            *(arg1 + 0x14), 0x20)), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_310))
float temp0_316[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_315, temp0_315)
float temp0_321[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[1].q), zmm5, 0x20), 
    __vmulps_xmmdq_xmmdq_xmmdq(__vpshufd_xmmdq_xmmdq_immb(zx.o(result), 0xc0), temp0_316))
float temp0_323[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_306, _mm_permute_ps(temp0_316, 0xd2))
float temp0_324[0x4] = _mm_permute_ps(temp0_316, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_324)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_323, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_321, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_224, zmm0[0].o)
arg4 = *(arg1 + 0x48)
zmm4 = arg1[4].d
float temp0_329[0x4] = _mm_permute_ps(temp0_304, 0xc9)
float temp0_332[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_329, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), 
        *(arg1 + 0x44), 0x20))
temp0_280[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0x44))
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_280[0].o, zmm4, 0x20)
float temp0_335[0x4] = _mm_permute_ps(temp0_304, 0xd2)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_335, temp0_280[0].o)
temp0_280[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_332, temp0_280[0].o)
float temp0_339[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4].q), arg4, 0x20)
temp0_280[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_280[0].o)
float temp0_343[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_339, 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_304, 0xff), temp0_280[0].o))
float temp0_345[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_329, _mm_permute_ps(temp0_280[0].o, 0xd2))
temp0_280[0].o = _mm_permute_ps(temp0_280[0].o, 0xc9)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_335, temp0_280[0].o)
temp0_280[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_345, temp0_280[0].o)
temp0_280[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_343, temp0_280[0].o)
temp0_280[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_225, temp0_280[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_280[0].o, 0x30)
arg1[8] = zmm0[0].o
arg1[9].d = __vextractps_memd_xmmdq_immb(temp0_280[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(temp0_280[0].o, 2)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xec))
temp0_280[0].o = *arg1
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, zmm0[0].o)
float temp0_356[0x4] = _mm_broadcast_ss(arg1[0xe].d)
zmm4 = *(arg1 + 0xc)
zmm5 = *(arg1 + 8)
zmm6 = *(arg1 + 4)
float temp0_361[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_356, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), zmm6, 0x20), 
            temp0_280[0].o, 0x30)), 
    zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_361)
float temp0_363[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_368[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), temp0_280[0].o, 
                0x20), 
            zmm6, 0x30), 
        temp0_363), 
    zmm12)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_368)
float temp0_370[0x4] = _mm_broadcast_ss(*(arg1 + 0xe8))
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, temp0_280[0].o, 0x10)
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_280[0].o, zmm4, 0x20)
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_280[0].o, zmm5, 0x30)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_370)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, zmm14)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, zmm0[0].o)
temp0_280[0].o = arg1[3]
float temp0_377[0x4] = _mm_broadcast_ss(arg1[0xf].d)
zmm4 = *(arg1 + 0x3c)
zmm5 = *(arg1 + 0x38)
zmm6 = *(arg1 + 0x34)
float temp0_381[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_377, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10), 
            zmm6, 0x20), 
        temp0_280[0].o, 0x30))
float temp0_382[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_385[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_382), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_381, zmm13))
float temp0_386[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_392[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_385, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), 
                    temp0_280[0].o, 0x20), 
                zmm6, 0x30), 
            temp0_386), 
        zmm12))
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, temp0_280[0].o, 0x10)
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_280[0].o, zmm4, 0x20)
temp0_280[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_280[0].o, zmm5, 0x30)
float temp0_396[0x4] = _mm_broadcast_ss(*(arg1 + 0xf8))
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_396)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, zmm14)
float temp0_399[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, temp0_392)
temp0_280[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_399)
arg4 = _mm_permute_pd(temp0_280[0].o, 1)
temp0_280[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280[0].o, arg4)
float temp0_403[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_280[0].o)
temp0_280[0].o = temp0_280[0].o f+ temp0_403[0]
temp0_280[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_403, temp0_403), temp0_280[0], 2)
temp0_280[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_280[0].o)
*arg9 = (zmm8 f+ var_d4_1)[0]
temp0_280[0].o = _mm_permute_ps(temp0_280[0].o, 0)
float temp0_408[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_399, temp0_280[0].o)
arg1[0xa] = zmm0[0].o
arg1[0xb] = temp0_408
_mm256_zeroupper()
return result
