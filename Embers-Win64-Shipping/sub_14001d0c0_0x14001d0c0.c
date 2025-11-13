// 函数: sub_14001d0c0
// 地址: 0x14001d0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48[0x4] = arg5
float var_c4 = arg4[0]
float var_c0 = arg3[0]
int32_t var_bc = arg2[0]
arg2[0].o = arg1[0xe]
int32_t zmm0[0x8]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
float var_b8[0x4] = arg2[0].o
float temp0_1[0x4] = _mm_permute_ps(arg2[0].o, 0)
float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_1)
float temp0_3[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_3)
float temp0_5[0x4] = _mm_broadcast_ss(*(arg1 + 0xec))
float zmm8[0x4] = _mm_permute_pd(zmm0[0].o, 1) f* *(arg1 + 0xe8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_5)
double zmm6[0x2] = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, temp0_4, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
zmm6 = __vsubps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_4, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_2, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
float temp0_16[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm8, 0x1c), temp0_4, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_16)
zmm8 = data_142d3f670
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
int32_t temp0_19[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
float temp0_20[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x64), 0x10)
float zmm5[0x4] = arg1[6].d
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x68), 0x20)
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm0[0].o, 0xc0))
float temp0_26[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(zmm6, 0xea)), temp0_23)
float temp0_29[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_10, 0xd5)), temp0_26)
float temp0_34[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_10, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(zmm0[0].o, 0xd5)))
float temp0_37[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm6, 0xc0)), temp0_34)
float temp0_45[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(zmm6, 0xd5)), 
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_10, 0xc0))), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm0[0].o, 0xea)))
float temp0_47[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x9c), zmm6, 0x60)
float temp0_49[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x8c), temp0_10, 0x20)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), zmm6, 0x14), 
    zmm0[0].o, 4)
float temp0_57[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, _mm_permute_ps(temp0_29, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_29, 0xd5)))
zmm6 = _mm_permute_ps(temp0_29, 0xea)
float temp0_60[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6), temp0_57)
float temp0_65[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, _mm_permute_ps(temp0_37, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_37, 0xd5)))
zmm6 = _mm_permute_ps(temp0_37, 0xea)
float temp0_68[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6), temp0_65)
float temp0_73[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, _mm_permute_ps(temp0_45, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_45, 0xd5)))
float temp0_74[0x4] = _mm_permute_ps(temp0_45, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_74)
float temp0_76[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_73)
float zmm14[0x4] = arg1[0xf]
float temp0_77[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm14, zmm14)
zmm0[0].o = _mm_permute_ps(zmm14, 0)
float temp0_79[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_81[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xfc))
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, zmm0[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_79, temp0_81, 0x88)
float temp0_85[0x4] = _mm_permute_ps(zmm0[0].o, 0xd8)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, temp0_85)
zmm6 = __vsubps_xmmdq_xmmdq_xmmdq(temp0_85, zmm6)
float temp0_89[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_81, 0x4e), temp0_79, 0xc)
float zmm10[0x4] = *(arg1 + 0x6c)
zmm5 = _mm_permute_pd(temp0_77, 1) f* *(arg1 + 0xf8)
float temp0_94[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_89, 0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm5, 0x1c), 
        temp0_81, 0x60))
float temp0_95[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, arg1[7].d, 0x10)
arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_19, *(arg1 + 0x74), 0x20)
float temp0_97[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, temp0_94)
float temp0_99[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(temp0_97, 0xc0))
float temp0_102[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, _mm_permute_ps(zmm6, 0xea)), temp0_99)
float temp0_105[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(zmm0[0].o, 0xd5)), temp0_102)
float temp0_110[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(zmm0[0].o, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, _mm_permute_ps(temp0_97, 0xd5)))
float temp0_113[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(zmm6, 0xc0)), temp0_110)
float temp0_115[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(zmm6, 0xd5))
arg2[0].o = _mm_permute_ps(zmm0[0].o, 0xc0)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, arg2[0].o)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_115, arg2[0].o)
float temp0_120[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(temp0_97, 0xea))
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_120)
float temp0_123[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_97, zmm0[0].o, 0x9c), zmm6, 0x60)
float temp0_125[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_97, zmm6, 0x8c), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x4e)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_97, 4)
float temp0_133[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_123, _mm_permute_ps(temp0_105, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_105, 0xd5)))
float temp0_134[0x4] = _mm_permute_ps(temp0_105, 0xea)
float temp0_136[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_134), temp0_133)
float temp0_141[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_123, _mm_permute_ps(temp0_113, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(temp0_113, 0xd5)))
float temp0_142[0x4] = _mm_permute_ps(temp0_113, 0xea)
float temp0_144[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_142), temp0_141)
float temp0_149[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_123, _mm_permute_ps(arg2[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_125, _mm_permute_ps(arg2[0].o, 0xd5)))
arg2[0].o = _mm_permute_ps(arg2[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_149)
arg2[0].o = _mm_broadcast_ss(*arg7)
float temp0_154[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_60, arg2[0].o)
float temp0_155[0x4] = _mm_broadcast_ss(arg7[1])
float temp0_157[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_154, __vmulps_xmmdq_xmmdq_xmmdq(temp0_68, temp0_155))
zmm6 = arg7[2]
float temp0_158[0x4] = _mm_permute_ps(zmm6, 0)
float temp0_160[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_157, __vmulps_xmmdq_xmmdq_xmmdq(temp0_76, temp0_158))
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_136)
float temp0_162[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_155, temp0_144)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_162)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_158, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = __vmovsd_xmmdq_memq(*arg7)
float temp0_167[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, zmm6, 0x20)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, temp0_160)
float temp0_169[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg3 = arg2[0].o f+ temp0_169[0]
arg2[0].o = _mm_permute_pd(arg2[0].o, 1)
arg5 = arg2[0].o f+ arg3[0]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, zmm0[0].o)
arg2[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg2[0].o = zmm0[0].o f+ arg2[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm13[0x4] = zmm0[0].o f+ arg2[0]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg2[0].o = var_c4
float zmm9[0x4] = arg2[0].o

if (not(arg2[0].o f<= 9.99999975e-05f))
    arg2[0].o = arg1[0x15]
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_b8, arg2[0].o)
    arg3 = _mm_permute_pd(zmm0[0].o, 1)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
    float temp0_178[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    zmm0[0].o = zmm0[0].o f+ temp0_178[0]
    zmm0[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_178, temp0_178), zmm0[0], 2)
    float temp0_181[0x4] = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
    zmm0[0].o = arg1[0x16]
    float temp0_184[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(var_b8, _mm_permute_ps(temp0_181, 0)), arg2[0].o)
    zmm10 = data_142d3f690
    arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm10)
    float temp0_186[0x4] = _mm_permute_ps(temp0_184, 0xff)
    float temp0_187[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_186)
    float temp0_188[0x4] = _mm_permute_ps(temp0_184, 0xc0)
    float temp0_190[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg2[0].o, 0xdb), temp0_188)
    double temp0_191[0x2] = __vmovddup_xmmdq_memq(-0.007812501848093234)
    float temp0_193[0x4] =
        __vaddps_xmmdq_xmmdq_xmmdq(temp0_187, __vmulps_xmmdq_xmmdq_xmmdq(temp0_190, temp0_191))
    float temp0_194[0x4] = _mm_permute_ps(temp0_184, 0xd5)
    float temp0_196[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg2[0].o, 1), temp0_194)
    float zmm15[0x4] = data_142fc92b0
    float temp0_198[0x4] =
        __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_196, zmm15), temp0_193)
    float temp0_199[0x4] = _mm_permute_ps(temp0_184, 0xea)
    arg2[0].o = _mm_permute_ps(arg2[0].o, 0xf1)
    arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_199)
    zmm8 = data_142fc92c0
    arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm8)
    arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_198)
    arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
    float temp0_205[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm14, zmm0[0].o)
    float temp0_207[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_205, _mm_permute_pd(temp0_205, 1))
    arg4 = temp0_207 f+ __vmovshdup_xmmdq_xmmdq(temp0_207)[0]
    float temp0_214[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(zmm14, 
            _mm_permute_ps(
                __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
                    _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_199, temp0_199), arg4[0], 2)), 
                0)), 
        zmm0[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm10)
    float temp0_216[0x4] = _mm_permute_ps(temp0_214, 0xff)
    float temp0_217[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_216)
    float temp0_218[0x4] = _mm_permute_ps(temp0_214, 0xc0)
    float temp0_222[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_217, 
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0xdb), temp0_218), temp0_191))
    float temp0_223[0x4] = _mm_permute_ps(temp0_214, 0xd5)
    float temp0_227[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), temp0_223), zmm15), 
        temp0_222)
    float temp0_228[0x4] = _mm_permute_ps(temp0_214, 0xea)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_228)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_227)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, arg2[0].o)
    float temp0_235[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
    arg4 = _mm_permute_pd(arg2[0].o, 1)
    arg2[0].o = arg2[0].o f+ temp0_235[0]
    arg2[0].o = arg4 f+ arg2[0]
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, zmm0[0].o)
    float temp0_238[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    arg4 = _mm_permute_pd(zmm0[0].o, 1)
    zmm0[0].o = zmm0[0].o f+ temp0_238[0]
    zmm0[0].o = arg4 f+ zmm0[0]
    zmm0[0].o = arg2[0].o f- zmm0[0]

zmm6 = arg5 f+ zmm13[0]
float zmm7[0x4]

if ((arg6 & 1) != 0)
    zmm7 = 0x3f800000 f/ zmm6[0].d
else
    zmm7 = 0x3f800000

arg2[0].o = zmm7 f* var_c0
arg4 = var_bc
arg2[0].o = arg2[0].o f* arg4[0]
arg2[0].o = arg2[0].o f* arg4[0]
arg3 = zmm7 f* zmm9[0] f* arg4[0]
arg2[0].o = arg2[0].o f* arg8[0]
zmm0[0].o = arg3 f* zmm0[0]
zmm0[0].o = arg2[0].o f- zmm0[0]
arg2[0].o = *arg9
zmm0[0].o = zmm0[0].o f- arg2[0]
zmm0[0].o = 0x3f800000 / (zmm6 f* (arg3 f+ arg2[0])[0] f+ 1f)[0] f* zmm0[0]
float temp0_241[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, _mm_permute_ps(arg5 f* zmm0[0], 0xc0))
float temp0_244[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_167, 
    _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(zmm13 f* zmm0[0], data_142d3f780), 0xc0))
zmm10 = arg2[0].o f+ zmm0[0]
zmm6 = arg1[0xe]
zmm5 = arg1[0xf]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
float temp0_247[0x4] = _mm_permute_ps(temp0_241, 0)
float temp0_249[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_247)
float zmm11[0x4] = __vmovddup_xmmdq_memq(-0.007812501848093234)
float temp0_251[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_249, zmm11)
float temp0_252[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_251)
arg2[0].o = _mm_permute_ps(temp0_241, 0x55)
float temp0_255[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), arg2[0].o)
zmm13 = data_142d3f7d0
float temp0_257[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_255, zmm13), temp0_252)
float temp0_258[0x4] = _mm_permute_ps(temp0_241, 0xaa)
float temp0_260[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_258)
arg5 = data_142d3f7b0
float temp0_262[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_260, arg5), temp0_257)
float zmm4[0x4] = data_142d3f640
float temp0_263[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_262, zmm4)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
float temp0_265[0x4] = _mm_permute_ps(temp0_244, 0)
arg2[0].o = _mm_permute_ps(zmm5, 0x1b)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_265)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = _mm_permute_ps(temp0_244, 0x55)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm5, 1), arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg2[0].o = _mm_permute_ps(temp0_244, 0xaa)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xb1), arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg5)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
float temp0_280[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, temp0_263)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
arg3 = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
float temp0_285[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3 = zmm0[0].o f+ temp0_285[0]
float temp0_286[0x4] = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
zmm4 = arg3 f* 0.5f
float temp0_287[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3, arg3[0])
zmm0[0].o = temp0_287 f* temp0_287[0]
zmm0[0].o = zmm0[0].o f* zmm4[0]
zmm0[0].o = 0x3f000000 f- zmm0[0]
zmm0[0].o = temp0_287 f* zmm0[0]
zmm0[0].o = temp0_287 f+ zmm0[0]
arg3 = zmm4 f* (zmm0[0].o f* zmm0[0])[0]
arg4 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_286, 0xffffffff)
zmm0[0].o = zmm0[0].o f+ (zmm0[0].o f* (0x3f000000 - arg3[0])[0])[0]
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg2[0].o = _mm_permute_ps(arg4, 0)
zmm0 = _mm256_and_ps(zmm0, arg2)
arg2 = __vandnps_ymmqq_ymmqq_memqq(arg2, data_142fc9280)
zmm8 = _mm256_or_ps(zmm0, arg2)
int64_t rdx_1 = __vpextrq_gpr64q_xmmdq_immb(zmm8, 1)
int64_t rax_1 = zmm8[0].q
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, temp0_280)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg3 = _mm_permute_pd(arg2[0].o, 1)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3)
float temp0_299[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg2[0].o = arg2[0].o f+ temp0_299[0]
arg3 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, arg2[0], 6), 0xffffffff)
arg4 = arg2[0].o f* 0.5f
arg2[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg2[0].o, arg2[0])
arg2[0].o = arg2[0].o f+ (arg2[0].o f* (0x3f000000 - (arg2[0].o f* arg2[0] f* arg4[0])[0])[0])[0]
arg2[0].o = arg2[0].o f+ (arg2[0].o f* (0x3f000000 - (arg4 f* (arg2[0].o f* arg2[0])[0])[0])[0])[0]
arg2[0].o = _mm_permute_ps(arg2[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = _mm_permute_ps(arg3, 0)
arg3 = __vandnps_xmmdq_xmmdq_memdq(arg2[0].o, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
arg3 = _mm_permute_pd(arg2[0].o, 1)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3)
float temp0_312[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg2[0].o = arg2[0].o f+ temp0_312[0]
zmm14 = __vxorps_xmmdq_xmmdq_xmmdq(0x322bcc77, 0x322bcc77)
arg2[0].o = _mm_cmp_ss(zmm14, arg2[0], 2)
arg2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg2[0].o)
arg2[0].o = _mm_permute_ps(arg2[0].o, 0)
float temp0_317[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg1[0xe] = zmm8
arg1[0xf] = temp0_317
zmm0[0].o = zx.o(rax_1.d)
arg2[0].o = zx.o(rdx_1.d)
uint32_t result = (rax_1 u>> 0x20).d
arg3 = zx.o(result)
arg4 = *(arg1 + 0x18)
zmm4 = arg1[1].d
float temp0_319[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, arg2[0].o, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, zmm0[0].o, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg2[0].o, *(arg1 + 0x14), 0x20)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_319, arg2[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x20)
float temp0_326[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm4, 0x20)
zmm4 = __vmovsd_xmmdq_memq(arg1[1].q)
float temp0_328[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_326)
arg2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_328)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
float temp0_332[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vpshufd_xmmdq_xmmdq_immb(zx.o((rdx_1 u>> 0x20).d), 0xc0), arg2[0].o)
float temp0_334[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg4, 0x20), temp0_332)
float temp0_336[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_319, _mm_permute_ps(arg2[0].o, 0xd2))
arg2[0].o = _mm_permute_ps(arg2[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_336, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_334, zmm0[0].o)
arg2[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
arg2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg2[0].o, *(arg1 + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*arg9 = zmm10[0]
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *(arg1 + 0x48)
arg2[0].o = arg1[4].d
float temp0_346[0x4] = _mm_permute_ps(temp0_317, 0xc9)
float temp0_349[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_346, 
    __vinsertps_xmmdq_xmmdq_memd_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg2[0].o, 0x10), *(arg1 + 0x44), 0x20))
float temp0_350[0x4] = _mm_permute_ps(temp0_317, 0xd2)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), arg2[0].o, 0x20)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_350, arg2[0].o)
arg2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_349, arg2[0].o)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
float temp0_356[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_357[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_356, arg2[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4].q), zmm0[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_357)
float temp0_362[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_346, _mm_permute_ps(arg2[0].o, 0xd2))
arg2[0].o = _mm_permute_ps(arg2[0].o, 0xc9)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_350, arg2[0].o)
arg2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_362, arg2[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
arg2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg2[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xec))
arg2[0].o = *arg1
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
float temp0_374[0x4] = _mm_broadcast_ss(arg1[0xe].d)
arg4 = *(arg1 + 0xc)
zmm5 = *(arg1 + 8)
zmm7 = *(arg1 + 4)
float temp0_379[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_374, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm5, 0x10), zmm7, 0x20), 
            arg2[0].o, 0x30)), 
    zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_379)
float temp0_381[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_386[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), arg2[0].o, 0x20), 
            zmm7, 0x30), 
        temp0_381), 
    zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_386)
float temp0_388[0x4] = _mm_broadcast_ss(*(arg1 + 0xe8))
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, arg2[0].o, 0x10)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, arg4, 0x20)
arg2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, zmm5, 0x30)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_388)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg5)
float temp0_394[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
zmm0[0].o = arg1[3]
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_356)
float temp0_396[0x4] = _mm_broadcast_ss(arg1[0xf].d)
arg4 = *(arg1 + 0x3c)
zmm4 = *(arg1 + 0x38)
zmm5 = *(arg1 + 0x34)
float temp0_401[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_396, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), zmm5, 0x20), 
            zmm0[0].o, 0x30)), 
    zmm11)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_401)
float temp0_403[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_408[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm0[0].o, 
                0x20), 
            zmm5, 0x30), 
        temp0_403), 
    zmm13)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_408)
float temp0_410[0x4] = _mm_broadcast_ss(*(arg1 + 0xf8))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_410)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_394, zmm0[0].o)
arg3 = _mm_permute_pd(arg2[0].o, 1)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg3)
float temp0_420[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg2[0].o = arg2[0].o f+ temp0_420[0]
arg2[0].o = _mm_cmp_ss(zmm14, arg2[0], 2)
arg2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, arg2[0].o)
arg2[0].o = _mm_permute_ps(arg2[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg1[0xa] = temp0_394
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
