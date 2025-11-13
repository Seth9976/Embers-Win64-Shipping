// 函数: sub_140016230
// 地址: 0x140016230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = arg9
int128_t zmm10 = arg6
float zmm9[0x4] = arg5
float zmm2[0x8] = *arg11
int32_t temp0 = _mm256_movemask_ps(zmm2)
int64_t r8 = sx.q(arg3)
int64_t rsi = r8 * 3
float zmm11[0x4] = arg1[r8 + 0xe]
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
float temp0_2[0x4] = _mm_permute_ps(zmm11, 0)
float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_2)
float temp0_4[0x4] = _mm_broadcast_ss(arg1[r8][0x39])
float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_4)
float temp0_6[0x4] = _mm_broadcast_ss(arg1[r8][0x3b])
float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_6)
zmm2[0].o = _mm_permute_pd(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f* arg1[r8][0x3a]
float temp0_10[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_3, temp0_5, 0x88), 0xd8)
float temp0_11[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_7, temp0_10)
float temp0_12[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_10, temp0_7)
float temp0_15[0x4] = _mm_permute_ps(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_12, temp0_5, 0x4e), 
        temp0_3, 0xc), 
    0x78)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm2[0].o, 0x1c)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_5, 0x60)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_15, zmm2[0].o)
zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(data_142d3f670, zmm2[0].o)
float temp0_20[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_12, (*arg1)[rsi + 0x19], 0x1d)
float zmm6[0x4] = (*arg1)[rsi + 0x18]
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_12, (*arg1)[rsi + 0x1a], 0x2b)
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(zmm2[0].o, 0xc0))
float temp0_26[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_12, 0xea)), temp0_23)
float temp0_29[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_11, 0xd5)), temp0_26)
float temp0_34[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(temp0_11, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(zmm2[0].o, 0xd5)))
float temp0_37[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_12, 0xc0)), temp0_34)
float temp0_45[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, _mm_permute_ps(temp0_12, 0xd5)), 
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_11, 0xc0))), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm2[0].o, 0xea)))
float temp0_47[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_49[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_12, 0x8c), temp0_11, 0x20)
float temp0_52[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_12, temp0_11, 0x4e), temp0_12, 0x14), 
    zmm2[0].o, 4)
float temp0_57[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, _mm_permute_ps(temp0_29, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_29, 0xd5)))
float temp0_60[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, _mm_permute_ps(temp0_29, 0xea)), temp0_57)
float temp0_62[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, _mm_permute_ps(temp0_37, 0xc0))
zmm2[0].o = _mm_permute_ps(temp0_37, 0xd5)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, zmm2[0].o)
float temp0_65[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_62, zmm2[0].o)
zmm2[0].o = _mm_permute_ps(temp0_37, 0xea)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, zmm2[0].o)
float temp0_68[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_65)
zmm2[0].o = _mm_permute_ps(temp0_45, 0xc0)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_47, zmm2[0].o)
float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_49, _mm_permute_ps(temp0_45, 0xd5))
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_72)
float temp0_74[0x4] = _mm_broadcast_ss(*arg8)
float temp0_75[0x4] = _mm_broadcast_ss(arg8[1])
float zmm0[0x4] = arg8[2]
float zmm1[0x4] = __vmovsd_xmmdq_memq(*arg8)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_52, _mm_permute_ps(temp0_45, 0xea)), zmm2[0].o)
float temp0_82[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_74, temp0_60), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_75, temp0_68))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0, 0), zmm2[0].o)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_82)
float temp0_86[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm0, 0x20)
float temp0_87[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, zmm2[0].o)
float temp0_88[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_87)
zmm2[0].o = _mm_permute_pd(temp0_87, 1)
zmm6 = zmm2[0].o f+ (temp0_87 f+ temp0_88[0])[0]
float zmm7[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_75, temp0_75)
float zmm4[0x4]
float zmm5[0x4]

if (temp0 != 0xff)
    if (not(zmm10 f<= 9.99999975e-05f))
        zmm0 = arg1[r8 + 0x15]
        float temp0_124[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
        zmm2[0].o = _mm_permute_pd(temp0_124, 1)
        float temp0_126[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_124, zmm2[0].o)
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(temp0_126)
        zmm1 = temp0_126 f+ zmm2[0]
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        float temp0_129[0x4] = _mm_cmp_ss(zmm2[0].o, zmm1[0], 2)
        zmm2[0].o = 0x3f800000
        float temp0_133[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm11, 
                _mm_permute_ps(
                    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_129), 0)), 
            zmm0)
        float temp0_134[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
        zmm2[0].o = _mm_permute_ps(temp0_133, 0xc0)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_134, 0xdb), zmm2[0].o)
        float temp0_138[0x4] = _mm_permute_ps(temp0_133, 0xd5)
        float temp0_140[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_134, 1), temp0_138)
        float temp0_142[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_134, _mm_permute_ps(temp0_133, 0xff))
        zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc92a0)
        float temp0_144[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_140, data_142fc92b0)
        zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_142, zmm2[0].o)
        zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_144, zmm2[0].o)
        float temp0_147[0x4] = _mm_permute_ps(temp0_133, 0xea)
        float temp0_151[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_memdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_134, 0xf1), temp0_147), 
                data_142fc92c0), 
            zmm2[0].o)
        float temp0_153[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, __vaddps_xmmdq_xmmdq_xmmdq(temp0_151, temp0_151))
        float temp0_154[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_153)
        zmm2[0].o = _mm_permute_pd(temp0_153, 1)
        zmm7 =
            __vxorps_xmmdq_xmmdq_memdq(zmm2[0].o f+ (temp0_153 f+ temp0_154[0])[0], data_142d3f780)
    
    zmm11 = 0x3f800000
    
    if ((arg7 & 1) != 0)
        zmm2[0].o = 0x3f800000 f/ zmm6[0]
    else
        zmm2[0].o = 0x3f800000
    
    zmm0 = zmm2[0].o f* zmm9[0] f* arg4[0] f* arg4[0]
    zmm1 = zmm2[0].o f* zmm10.d f* arg4[0]
    zmm2[0].o = zmm1 f+ zmm0[0]
    zmm2[0].o = zmm6 f* zmm2[0]
    zmm2[0].o = zmm2[0].o f+ 1f
    zmm2[0].o = 0x3f800000 f/ zmm2[0]
    zmm10 = *arg10
    zmm1 = zmm2[0].o f* (zmm0 f* zmm8[0] f- (zmm1 f* zmm7[0])[0] f- zmm10.d)[0]
    zmm2[0].o = zmm6 f* zmm1[0]
    zmm2[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d3f780)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xc0)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, zmm2[0].o)
    zmm6 = arg1[r8 + 0xe]
    arg4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4))
    float temp0_195[0x4] = _mm_permute_ps(zmm2[0].o, 0)
    float temp0_197[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_195)
    zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
    float temp0_200[0x4] =
        __vaddps_xmmdq_xmmdq_xmmdq(arg4, __vmulps_xmmdq_xmmdq_xmmdq(temp0_197, zmm5))
    arg4 = _mm_permute_ps(zmm2[0].o, 0x55)
    float temp0_203[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), arg4)
    zmm9 = data_142d3f7d0
    float temp0_205[0x4] =
        __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_203, zmm9), temp0_200)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xaa)
    float temp0_208[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), zmm2[0].o)
    zmm8 = data_142d3f7b0
    float temp0_212[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, 
        __vmulps_xmmdq_xmmdq_memdq(
            __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_208, zmm8), temp0_205), 
            data_142d3f640))
    float temp0_213[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_212, temp0_212)
    float temp0_215[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_213, _mm_permute_pd(temp0_213, 1))
    zmm6 = temp0_215 f+ __vmovshdup_xmmdq_xmmdq(temp0_215)[0]
    float temp0_217[0x4] = _mm_cmp_ss(0x322bcc77, zmm6[0], 6)
    zmm2[0].o = 0xffffffff
    zmm2[0].o = __vandnps_xmmdq_xmmdq_xmmdq(temp0_217, 0xffffffff)
    arg4 = zmm6 f* 0.5f
    float temp0_219[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
    zmm0 =
        temp0_219 f+ (temp0_219 f* (0x3f000000 - (temp0_219 f* temp0_219[0] f* arg4[0])[0])[0])[0]
    zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_212, 
        _mm_permute_ps(zmm0 f+ (zmm0 f* (0x3f000000 f- (arg4 f* (zmm0 f* zmm0[0])[0])[0])[0])[0], 
            0))
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0)
else
    if (not(zmm10 f<= 9.99999975e-05f))
        zmm0 = arg1[r8 + 0x15]
        float temp0_91[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0)
        zmm2[0].o = _mm_permute_pd(temp0_91, 1)
        float temp0_93[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_91, zmm2[0].o)
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(temp0_93)
        zmm1 = temp0_93 f+ zmm2[0]
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        float temp0_96[0x4] = _mm_cmp_ss(zmm2[0].o, zmm1[0], 2)
        zmm2[0].o = 0x3f800000
        float temp0_100[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm11, 
                _mm_permute_ps(
                    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_96), 0)), 
            zmm0)
        float temp0_101[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
        zmm2[0].o = _mm_permute_ps(temp0_100, 0xc0)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_101, 0xdb), zmm2[0].o)
        float temp0_105[0x4] = _mm_permute_ps(temp0_100, 0xd5)
        float temp0_107[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_101, 1), temp0_105)
        float temp0_109[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_101, _mm_permute_ps(temp0_100, 0xff))
        zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142fc92a0)
        float temp0_111[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_107, data_142fc92b0)
        zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_109, zmm2[0].o)
        zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_111, zmm2[0].o)
        float temp0_114[0x4] = _mm_permute_ps(temp0_100, 0xea)
        float temp0_118[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_memdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_101, 0xf1), temp0_114), 
                data_142fc92c0), 
            zmm2[0].o)
        float temp0_120[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, __vaddps_xmmdq_xmmdq_xmmdq(temp0_118, temp0_118))
        float temp0_121[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_120)
        zmm2[0].o = _mm_permute_pd(temp0_120, 1)
        zmm7 =
            __vxorps_xmmdq_xmmdq_memdq(zmm2[0].o f+ (temp0_120 f+ temp0_121[0])[0], data_142d3f780)
    
    zmm11 = 0x3f800000
    
    if ((arg7 & 1) != 0)
        zmm4 = 0x3f800000 / zmm6[0]
    else
        zmm4 = 0x3f800000
    
    zmm0 = zmm4 f* zmm9[0] f* arg4[0] f* arg4[0]
    zmm1 = zmm4 f* zmm10.d f* arg4[0]
    zmm10 = *arg10
    zmm1 = 0x3f800000 f/ (zmm6 f* (zmm1 f+ zmm0[0])[0] f+ 1f)[0]
        f* (zmm0 f* zmm8[0] f- (zmm1 f* zmm7[0])[0] f- zmm10.d)[0]
    arg4 = _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(zmm6 f* zmm1[0], data_142d3f780), 0xc0)
    float temp0_159[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_86, arg4)
    zmm6 = arg1[r8 + 0xe]
    arg4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4))
    float temp0_162[0x4] = _mm_permute_ps(temp0_159, 0)
    float temp0_164[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_162)
    zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
    float temp0_167[0x4] =
        __vaddps_xmmdq_xmmdq_xmmdq(arg4, __vmulps_xmmdq_xmmdq_xmmdq(temp0_164, zmm5))
    arg4 = _mm_permute_ps(temp0_159, 0x55)
    zmm2[0].o = _mm_permute_pd(zmm6, 1)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4)
    zmm9 = data_142d3f7d0
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm9)
    zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_167)
    float temp0_173[0x4] = _mm_permute_ps(temp0_159, 0xaa)
    float temp0_175[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_173)
    zmm8 = data_142d3f7b0
    zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_175, zmm8), zmm2[0].o)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d3f640)
    zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, zmm2[0].o)
    float temp0_180[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    float temp0_182[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_180, _mm_permute_pd(temp0_180, 1))
    zmm6 = temp0_182 f+ __vmovshdup_xmmdq_xmmdq(temp0_182)[0]
    zmm4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm6[0], 6), 0xffffffff)
    arg4 = zmm6 f* 0.5f
    float temp0_186[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
    zmm0 =
        temp0_186 f+ (temp0_186 f* (0x3f000000 - (temp0_186 f* temp0_186[0] f* arg4[0])[0])[0])[0]
    float temp0_187[0x4] =
        _mm_permute_ps(zmm0 f+ (zmm0 f* (0x3f000000 f- (arg4 f* (zmm0 f* zmm0[0])[0])[0])[0])[0], 0)
    zmm0 = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_187)
    zmm2[0].o = _mm_permute_ps(zmm4, 0)

int32_t temp0_223[0x4] = __vandnps_xmmdq_xmmdq_memdq(zmm2[0].o, data_142d3f660)
arg1[r8 + 0xe] = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(zmm0, zmm2[0].o), temp0_223)
zmm0 = arg1[0xf]
zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xe])
arg4 = _mm_permute_pd(zmm2[0].o, 1)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(zmm2[0].o)
zmm2[0].o = zmm2[0].o f+ arg4[0]
float zmm12[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_60, temp0_60)
zmm2[0].o = _mm_cmp_ss(zmm12, zmm2[0], 2)
zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm11, zmm2[0].o)
zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0)
arg1[0xf] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, zmm2[0].o)
zmm0 = arg1[r8 + 0xe][0]
zmm2[0].o = arg1[r8][0x39]
arg4 = arg1[r8][0x3a]
zmm4 = arg1[rsi][6]
zmm6 = arg1[rsi + 1][0]
float temp0_236[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg4, 0x10), zmm0, 0x20)
float temp0_237[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0, 0x10)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_236, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm6, 0x10), 
        arg1[rsi][5], 0x20))
float temp0_241[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_237, zmm2[0].o, 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*(&arg1[rsi] + 0x14))
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm6, 0x20)
zmm6 = __vmovsd_xmmdq_memq(arg1[rsi + 1][0].q)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_241, zmm2[0].o)
zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg4, zmm2[0].o)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg1[r8][0x3b]), zmm2[0].o)
arg4 = __vaddps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4, 0x20), arg4)
float temp0_253[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_236, _mm_permute_ps(zmm2[0].o, 0xd2))
zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xc9)
float temp0_257[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg4, 
    __vsubps_xmmdq_xmmdq_xmmdq(temp0_253, __vmulps_xmmdq_xmmdq_xmmdq(temp0_241, zmm2[0].o)))
zmm2[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rsi << 2) + 0xc0))
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, (*arg1)[rsi + 0x32], 0x20)
float temp0_260[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_257)
(*arg1)[rsi + 0x20] = temp0_260[0]
(*arg1)[rsi + 0x21] = __vextractps_memd_xmmdq_immb(temp0_260, 1)
(*arg1)[rsi + 0x22] = __vextractps_memd_xmmdq_immb(temp0_260, 2)
zmm0 = arg1[rsi]
zmm2[0].o = _mm_broadcast_ss(arg1[r8 + 0xe][0])
arg4 = arg1[rsi][3]
zmm4 = arg1[rsi][2]
zmm6 = arg1[rsi][1]
float temp0_266[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), zmm6, 
        0x20), 
    zmm0, 0x30)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_266)
float temp0_269[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_broadcast_ss(arg1[r8][0x3b]))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_269, zmm2[0].o)
float temp0_272[0x4] = _mm_broadcast_ss(arg1[r8][0x39])
float temp0_277[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rsi] + 8)), zmm0, 0x20), 
            zmm6, 0x30), 
        temp0_272), 
    zmm9)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_277)
float temp0_279[0x4] = _mm_broadcast_ss(arg1[r8][0x3a])
arg1[r8 + 0xa] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0, 0x10), arg4, 0x20), 
                zmm4, 0x30), 
            temp0_279), 
        zmm8), 
    zmm2[0].o)
zmm0 = arg1[0xb]
zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xa])
zmm1 = zmm10 f+ zmm1[0]
arg4 = _mm_permute_pd(zmm2[0].o, 1)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg4)
arg4 = __vmovshdup_xmmdq_xmmdq(zmm2[0].o)
zmm2[0].o = zmm2[0].o f+ arg4[0]
zmm2[0].o = _mm_cmp_ss(zmm12, zmm2[0], 2)
zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm11, zmm2[0].o)
*arg10 = zmm1[0]
arg1[0xb] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_permute_ps(zmm2[0].o, 0))
_mm256_zeroupper()
return rsi << 4
