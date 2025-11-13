// 函数: sub_140016bb0
// 地址: 0x140016bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48[0x4] = arg5
float var_c4 = arg4[0]
float var_c0 = arg3[0]
int32_t var_bc = arg2[0]
float zmm0[0x8] = *arg10
int32_t temp0 = _mm256_movemask_ps(zmm0)
arg2[0].o = arg1[0xe]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
float var_b8[0x4] = arg2[0].o
float temp0_2[0x4] = _mm_permute_ps(arg2[0].o, 0)
float temp0_3[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_2)
float temp0_4[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_5[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_4)
float temp0_6[0x4] = _mm_broadcast_ss(*(arg1 + 0xec))
float zmm8[0x4] = _mm_permute_pd(zmm0[0].o, 1) f* *(arg1 + 0xe8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_6)
double zmm5[0x2] = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_3, temp0_5, 0x88), 0xd8)
float temp0_11[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
zmm5 = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_5, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_3, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
float temp0_17[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm8, 0x1c), temp0_5, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_17)
zmm8 = data_142d3f670
float temp0_19[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
int32_t temp0_20[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x64), 0x10)
zmm0[0].o = arg1[6].d
float temp0_22[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x68), 0x20)
float temp0_23[0x4] = _mm_permute_ps(temp0_19, 0xc0)
float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_23)
float temp0_27[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(zmm5, 0xea)), temp0_24)
float temp0_30[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, _mm_permute_ps(temp0_11, 0xd5)), temp0_27)
float temp0_31[0x4] = _mm_permute_ps(temp0_11, 0xea)
float temp0_35[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_31), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_19, 0xd5)))
float temp0_38[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, _mm_permute_ps(zmm5, 0xc0)), temp0_35)
float temp0_39[0x4] = _mm_permute_ps(zmm5, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_39)
float temp0_42[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_21, _mm_permute_ps(temp0_11, 0xc0))
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_42)
float temp0_45[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_22, _mm_permute_ps(temp0_19, 0xea))
float temp0_46[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_45)
float temp0_48[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, temp0_11, 0x9c), zmm5, 0x60)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, zmm5, 0x8c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_11, 0x20)
float temp0_53[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_11, 0x4e), zmm5, 0x14), 
    temp0_19, 4)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_30, 0xc0))
float temp0_56[0x4] = _mm_permute_ps(temp0_30, 0xd5)
zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_56))
float temp0_61[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, _mm_permute_ps(temp0_30, 0xea)), zmm5)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_38, 0xc0))
float temp0_64[0x4] = _mm_permute_ps(temp0_38, 0xd5)
zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_64))
float temp0_69[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, _mm_permute_ps(temp0_38, 0xea)), zmm5)
float temp0_71[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_46, 0xc0))
float temp0_72[0x4] = _mm_permute_ps(temp0_46, 0xd5)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_72)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_71, zmm0[0].o)
float temp0_77[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_53, _mm_permute_ps(temp0_46, 0xea)), zmm0[0].o)
float zmm11[0x4] = arg1[0xf]
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
float temp0_79[0x4] = _mm_permute_ps(zmm11, 0)
float temp0_80[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_79)
float temp0_81[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_82[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_81)
float temp0_83[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_84[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_83)
zmm5 = _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_80, temp0_82, 0x88), 0xd8)
float temp0_87[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_84, zmm5)
float temp0_88[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm5, temp0_84)
float temp0_90[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_82, 0x4e), temp0_80, 0xc)
float zmm10[0x4] = *(arg1 + 0x6c)
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f* *(arg1 + 0xf8)
float temp0_92[0x4] = _mm_permute_ps(temp0_90, 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm0[0].o, 0x1c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_82, 0x60)
float temp0_95[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_92, zmm0[0].o)
float temp0_96[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, arg1[7].d, 0x10)
arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_20, *(arg1 + 0x74), 0x20)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, temp0_95)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(zmm0[0].o, 0xc0))
float temp0_103[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, _mm_permute_ps(temp0_88, 0xea)), zmm5)
float temp0_106[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(temp0_87, 0xd5)), temp0_103)
float temp0_111[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(temp0_87, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, _mm_permute_ps(zmm0[0].o, 0xd5)))
float temp0_114[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(temp0_88, 0xc0)), temp0_111)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, _mm_permute_ps(temp0_88, 0xd5))
arg2[0].o = _mm_permute_ps(temp0_87, 0xc0)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_96, arg2[0].o)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, arg2[0].o)
zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg5, _mm_permute_ps(zmm0[0].o, 0xea))
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm5)
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_87, 0x9c), temp0_88, 0x60)
float temp0_126[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_88, 0x8c), temp0_87, 0x20)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_87, 0x4e), temp0_88, 0x14), 
    zmm0[0].o, 4)
float temp0_134[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_106, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(temp0_106, 0xd5)))
float temp0_135[0x4] = _mm_permute_ps(temp0_106, 0xea)
float temp0_137[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_135), temp0_134)
float temp0_142[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_114, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(temp0_114, 0xd5)))
float temp0_143[0x4] = _mm_permute_ps(temp0_114, 0xea)
float temp0_145[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_143), temp0_142)
float temp0_150[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(arg2[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_126, _mm_permute_ps(arg2[0].o, 0xd5)))
arg2[0].o = _mm_permute_ps(arg2[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_150)
arg2[0].o = _mm_broadcast_ss(*arg7)
float temp0_155[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_61, arg2[0].o)
zmm5 = _mm_broadcast_ss(arg7[1])
float temp0_158[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_155, __vmulps_xmmdq_xmmdq_xmmdq(temp0_69, zmm5))
float zmm6[0x4] = arg7[2]
float temp0_159[0x4] = _mm_permute_ps(zmm6, 0)
float temp0_161[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_158, __vmulps_xmmdq_xmmdq_xmmdq(temp0_77, temp0_159))
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_137)
float temp0_163[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, temp0_145)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_163)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_159, zmm0[0].o)
zmm5 = arg8
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = __vmovsd_xmmdq_memq(*arg7)
float temp0_168[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg2[0].o, zmm6, 0x20)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, temp0_161)
float temp0_170[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
arg3 = arg2[0].o f+ temp0_170[0]
arg2[0].o = _mm_permute_pd(arg2[0].o, 1)
arg5 = arg2[0].o f+ arg3[0]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, zmm0[0].o)
arg2[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg2[0].o = zmm0[0].o f+ arg2[0]
zmm0[0].o = _mm_permute_pd(zmm0[0].o, 1)
float zmm15[0x4] = zmm0[0].o f+ arg2[0]
float zmm9[0x4] = arg5 f+ zmm15[0]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
float zmm7[0x4]

if (temp0 != 0xff)
    arg2[0].o = var_c4
    arg3 = arg2[0].o
    
    if (not(arg2[0].o f<= 9.99999975e-05f))
        arg3 = arg1[0x15]
        zmm5 = var_b8
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, arg3)
        arg2[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
        arg2[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm0[0].o = zmm0[0].o f+ arg2[0]
        arg2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
        zmm0[0].o = _mm_cmp_ss(arg2[0].o, zmm0[0], 2)
        float temp0_247[0x4] =
            __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
        zmm0[0].o = arg1[0x16]
        float temp0_250[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_247, 0)), arg3)
        zmm8 = data_142d3f690
        float temp0_251[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg3, zmm8)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_251, _mm_permute_ps(temp0_250, 0xff))
        float temp0_254[0x4] = _mm_permute_ps(temp0_250, 0xc0)
        arg2[0].o = _mm_permute_ps(temp0_251, 0xdb)
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_254)
        zmm6 = __vmovddup_xmmdq_memq(-0.007812501848093234)
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm6)
        arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, arg2[0].o)
        zmm5 = _mm_permute_ps(temp0_250, 0xd5)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_251, 1), zmm5)
        zmm10 = data_142fc92b0
        arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm10), arg2[0].o)
        float temp0_265[0x4] = _mm_permute_ps(temp0_250, 0xea)
        float temp0_267[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_251, 0xf1), temp0_265)
        arg4 = data_142fc92c0
        arg2[0].o =
            __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_267, arg4), arg2[0].o)
        arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
        float temp0_271[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0[0].o)
        float temp0_273[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_271, _mm_permute_pd(temp0_271, 1))
        zmm5 = __vmovshdup_xmmdq_xmmdq(temp0_273)
        float temp0_280[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm11, 
                _mm_permute_ps(
                    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
                        _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5), 
                            (temp0_273 f+ zmm5[0].d)[0], 2)), 
                    0)), 
            zmm0[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8)
        zmm5 = _mm_permute_ps(temp0_280, 0xff)
        float temp0_283[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
        zmm5 = _mm_permute_ps(temp0_280, 0xc0)
        zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(temp0_283, 
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0xdb), zmm5), zmm6))
        float temp0_289[0x4] = _mm_permute_ps(temp0_280, 0xd5)
        zmm5 = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), temp0_289), zmm10), 
            zmm5)
        float temp0_294[0x4] = _mm_permute_ps(temp0_280, 0xea)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_294)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
        zmm5 = arg8
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, arg2[0].o)
        float temp0_301[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
        arg4 = _mm_permute_pd(arg2[0].o, 1)
        arg2[0].o = arg2[0].o f+ temp0_301[0]
        arg2[0].o = arg4 f+ arg2[0]
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, zmm0[0].o)
        float temp0_304[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg4 = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = zmm0[0].o f+ temp0_304[0]
        arg3 = var_c4
        zmm0[0].o = arg4 f+ zmm0[0]
        zmm0[0].o = arg2[0].o f- zmm0[0]
    
    zmm10 = 0x3f800000
    
    if ((arg6 & 1) == 0)
        zmm7 = zmm10
    else
        zmm7 = zmm10 f/ zmm9[0]
else
    arg2[0].o = var_c4
    arg3 = arg2[0].o
    
    if (not(arg2[0].o f<= 9.99999975e-05f))
        arg2[0].o = arg1[0x15]
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_b8, arg2[0].o)
        arg3 = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
        float temp0_179[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm0[0].o = zmm0[0].o f+ temp0_179[0]
        zmm0[0].o = _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_179, temp0_179), zmm0[0], 2)
        float temp0_182[0x4] =
            __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
        zmm0[0].o = arg1[0x16]
        float temp0_185[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(var_b8, _mm_permute_ps(temp0_182, 0)), arg2[0].o)
        zmm6 = data_142d3f690
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm6)
        float temp0_187[0x4] = _mm_permute_ps(temp0_185, 0xff)
        float temp0_188[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_187)
        float temp0_189[0x4] = _mm_permute_ps(temp0_185, 0xc0)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg2[0].o, 0xdb), temp0_189)
        zmm7 = __vmovddup_xmmdq_memq(-0.007812501848093234)
        float temp0_194[0x4] =
            __vaddps_xmmdq_xmmdq_xmmdq(temp0_188, __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm7))
        zmm5 = _mm_permute_ps(temp0_185, 0xd5)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg2[0].o, 1), zmm5)
        zmm10 = data_142fc92b0
        float temp0_199[0x4] =
            __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm10), temp0_194)
        float temp0_200[0x4] = _mm_permute_ps(temp0_185, 0xea)
        arg2[0].o = _mm_permute_ps(arg2[0].o, 0xf1)
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_200)
        zmm8 = data_142fc92c0
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm8)
        arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_199)
        arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
        float temp0_206[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm11, zmm0[0].o)
        float temp0_208[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_206, _mm_permute_pd(temp0_206, 1))
        arg4 = temp0_208 f+ __vmovshdup_xmmdq_xmmdq(temp0_208)[0].d
        float temp0_215[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm11, 
                _mm_permute_ps(
                    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
                        _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_200, temp0_200), arg4[0], 2)), 
                    0)), 
            zmm0[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
        zmm5 = _mm_permute_ps(temp0_215, 0xff)
        zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5)
        float temp0_219[0x4] = _mm_permute_ps(temp0_215, 0xc0)
        float temp0_223[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, 
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0xdb), temp0_219), zmm7))
        zmm5 = _mm_permute_ps(temp0_215, 0xd5)
        float temp0_228[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm0[0].o, 1), zmm5), zmm10), 
            temp0_223)
        zmm5 = arg8
        float temp0_229[0x4] = _mm_permute_ps(temp0_215, 0xea)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xf1)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_229)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_228)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, arg2[0].o)
        float temp0_236[0x4] = __vmovshdup_xmmdq_xmmdq(arg2[0].o)
        arg4 = _mm_permute_pd(arg2[0].o, 1)
        arg2[0].o = arg2[0].o f+ temp0_236[0]
        arg2[0].o = arg4 f+ arg2[0]
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, zmm0[0].o)
        float temp0_239[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        arg4 = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = zmm0[0].o f+ temp0_239[0]
        arg3 = var_c4
        zmm0[0].o = arg4 f+ zmm0[0]
        zmm0[0].o = arg2[0].o f- zmm0[0]
    
    zmm10 = 0x3f800000
    
    if ((arg6 & 1) != 0)
        zmm7 = zmm10 f/ zmm9[0]
    else
        zmm7 = zmm10

arg2[0].o = zmm7 f* var_c0
arg4 = var_bc
arg2[0].o = arg2[0].o f* arg4[0]
arg2[0].o = arg2[0].o f* arg4[0]
arg3 = zmm7 f* arg3[0] f* arg4[0]
arg2[0].o = arg2[0].o f* zmm5[0].d
zmm0[0].o = arg3 f* zmm0[0]
zmm0[0].o = arg2[0].o f- zmm0[0]
arg2[0].o = *arg9
zmm0[0].o = zmm0[0].o f- arg2[0]
zmm0[0].o = zmm10 f/ (zmm9 f* (arg3 f+ arg2[0])[0] f+ zmm10[0])[0] f* zmm0[0]
float temp0_307[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, _mm_permute_ps(arg5 f* zmm0[0], 0xc0))
float temp0_310[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, 
    _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(zmm15 f* zmm0[0], data_142d3f780), 0xc0))
zmm9 = arg2[0].o f+ zmm0[0]
zmm6 = arg1[0xe]
zmm5 = arg1[0xf]
zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
float temp0_313[0x4] = _mm_permute_ps(temp0_307, 0)
float temp0_315[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_313)
zmm11 = __vmovddup_xmmdq_memq(-0.007812501848093234)
float temp0_317[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_315, zmm11)
float temp0_318[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_317)
arg2[0].o = _mm_permute_ps(temp0_307, 0x55)
float temp0_321[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), arg2[0].o)
float zmm13[0x4] = data_142d3f7d0
float temp0_323[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_321, zmm13), temp0_318)
float temp0_324[0x4] = _mm_permute_ps(temp0_307, 0xaa)
float temp0_326[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_324)
arg5 = data_142d3f7b0
float temp0_328[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_326, arg5), temp0_323)
float zmm4[0x4] = data_142d3f640
float temp0_329[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_328, zmm4)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, zmm0[0].o)
float temp0_331[0x4] = _mm_permute_ps(temp0_310, 0)
arg2[0].o = _mm_permute_ps(zmm5, 0x1b)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, temp0_331)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg2[0].o)
arg2[0].o = _mm_permute_ps(temp0_310, 0x55)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm5, 1), arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg2[0].o = _mm_permute_ps(temp0_310, 0xaa)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm5, 0xb1), arg2[0].o)
arg2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg5)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
float temp0_346[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, temp0_329)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, arg2[0].o)
arg3 = _mm_permute_pd(zmm0[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
float temp0_351[0x4] = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
arg3 = zmm0[0].o f+ temp0_351[0]
float temp0_352[0x4] = _mm_cmp_ss(0x322bcc77, arg3[0], 6)
zmm4 = arg3 f* 0.5f
float temp0_353[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3, arg3[0])
zmm0[0].o = temp0_353 f* temp0_353[0]
zmm0[0].o = zmm0[0].o f* zmm4[0]
zmm0[0].o = 0x3f000000 f- zmm0[0]
zmm0[0].o = temp0_353 f* zmm0[0]
zmm0[0].o = temp0_353 f+ zmm0[0]
arg3 = zmm4 f* (zmm0[0].o f* zmm0[0])[0]
arg4 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_352, 0xffffffff)
zmm0[0].o = zmm0[0].o f+ (zmm0[0].o f* (0x3f000000 - arg3[0])[0])[0]
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg2[0].o, zmm0[0].o)
arg2[0].o = _mm_permute_ps(arg4, 0)
zmm0 = _mm256_and_ps(zmm0, arg2)
int32_t temp0_359[0x8] = __vandnps_ymmqq_ymmqq_memqq(arg2, data_142fc9280)
float temp0_360[0x4] = _mm256_or_ps(zmm0, temp0_359)
int64_t rax_2 = __vpextrq_gpr64q_xmmdq_immb(temp0_360, 1)
int64_t rdx_1 = temp0_360[0].q
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5, temp0_346)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
arg3 = _mm_permute_pd(temp0_359[0].o, 1)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, arg3)
float temp0_365[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_359[0].o)
temp0_359[0].o = temp0_359[0].o f+ temp0_365[0]
arg3 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, temp0_359[0], 6), 0xffffffff)
arg4 = temp0_359[0].o f* 0.5f
temp0_359[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(temp0_359[0].o, temp0_359[0])
temp0_359[0].o = temp0_359[0].o
    f+ (temp0_359[0].o f* (0x3f000000 - (temp0_359[0].o f* temp0_359[0] f* arg4[0])[0])[0])[0]
temp0_359[0].o = temp0_359[0].o
    f+ (temp0_359[0].o f* (0x3f000000 - (arg4 f* (temp0_359[0].o f* temp0_359[0])[0])[0])[0])[0]
temp0_359[0].o = _mm_permute_ps(temp0_359[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
temp0_359[0].o = _mm_permute_ps(arg3, 0)
arg3 = __vandnps_xmmdq_xmmdq_memdq(temp0_359[0].o, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg3)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_360, zmm0[0].o)
arg3 = _mm_permute_pd(temp0_359[0].o, 1)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, arg3)
float temp0_378[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_359[0].o)
temp0_359[0].o = temp0_359[0].o f+ temp0_378[0]
float zmm14[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(0x322bcc77, 0x322bcc77)
temp0_359[0].o = _mm_cmp_ss(zmm14, temp0_359[0], 2)
temp0_359[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm10, temp0_359[0].o)
temp0_359[0].o = _mm_permute_ps(temp0_359[0].o, 0)
float temp0_383[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
arg1[0xe] = temp0_360
arg1[0xf] = temp0_383
zmm0[0].o = zx.o(rdx_1.d)
temp0_359[0].o = zx.o(rax_2.d)
arg3 = zx.o((rdx_1 u>> 0x20).d)
arg4 = *(arg1 + 0x18)
zmm4 = arg1[1].d
zmm5 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, temp0_359[0].o, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_359[0].o, zmm0[0].o, 0x10)
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10)
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_359[0].o, *(arg1 + 0x14), 0x20)
uint32_t result = (rax_2 u>> 0x20).d
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, temp0_359[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg3, 0x20)
float temp0_392[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x14)), zmm4, 0x20)
zmm4 = __vmovsd_xmmdq_memq(arg1[1].q)
float temp0_394[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_392)
temp0_359[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_394)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_359[0].o)
float temp0_398[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(__vpshufd_xmmdq_xmmdq_immb(zx.o(result), 0xc0), temp0_359[0].o)
float temp0_400[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg4, 0x20), temp0_398)
float temp0_402[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_359[0].o, 0xd2))
temp0_359[0].o = _mm_permute_ps(temp0_359[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_402, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_400, zmm0[0].o)
temp0_359[0].o = __vmovsd_xmmdq_memq(arg1[0xc].q)
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_359[0].o, *(arg1 + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, zmm0[0].o)
arg1[8].d = zmm0[0]
*(arg1 + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*arg9 = zmm9[0]
*(arg1 + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = *(arg1 + 0x48)
temp0_359[0].o = arg1[4].d
float temp0_412[0x4] = _mm_permute_ps(temp0_383, 0xc9)
float temp0_415[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_412, 
    __vinsertps_xmmdq_xmmdq_memd_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_359[0].o, 0x10), *(arg1 + 0x44), 0x20))
zmm5 = _mm_permute_ps(temp0_383, 0xd2)
temp0_359[0].o =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x44)), temp0_359[0].o, 0x20)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, temp0_359[0].o)
temp0_359[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_415, temp0_359[0].o)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_359[0].o)
float temp0_422[0x4] = _mm_broadcast_ss(*(arg1 + 0xfc))
float temp0_423[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_422, temp0_359[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(arg1[4].q), zmm0[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_423)
float temp0_428[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_412, _mm_permute_ps(temp0_359[0].o, 0xd2))
temp0_359[0].o = _mm_permute_ps(temp0_359[0].o, 0xc9)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, temp0_359[0].o)
temp0_359[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_428, temp0_359[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
temp0_359[0].o = __vmovsd_xmmdq_memq(*(arg1 + 0xcc))
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_359[0].o, *(arg1 + 0xd4), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, zmm0[0].o)
*(arg1 + 0x8c) = zmm0[0]
arg1[9].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x94) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = _mm_broadcast_ss(*(arg1 + 0xec))
temp0_359[0].o = *arg1
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, zmm0[0].o)
float temp0_440[0x4] = _mm_broadcast_ss(arg1[0xe].d)
arg4 = *(arg1 + 0xc)
zmm5 = *(arg1 + 8)
zmm7 = *(arg1 + 4)
float temp0_445[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_440, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm5, 0x10), zmm7, 0x20), 
            temp0_359[0].o, 0x30)), 
    zmm11)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_445)
float temp0_447[0x4] = _mm_broadcast_ss(*(arg1 + 0xe4))
float temp0_452[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 8)), temp0_359[0].o, 
                0x20), 
            zmm7, 0x30), 
        temp0_447), 
    zmm13)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_452)
float temp0_454[0x4] = _mm_broadcast_ss(*(arg1 + 0xe8))
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, temp0_359[0].o, 0x10)
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_359[0].o, arg4, 0x20)
temp0_359[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_359[0].o, zmm5, 0x30)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_454)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, arg5)
float temp0_460[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, zmm0[0].o)
zmm0[0].o = arg1[3]
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_422)
float temp0_462[0x4] = _mm_broadcast_ss(arg1[0xf].d)
arg4 = *(arg1 + 0x3c)
zmm4 = *(arg1 + 0x38)
zmm5 = *(arg1 + 0x34)
float temp0_467[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_462, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), zmm5, 0x20), 
            zmm0[0].o, 0x30)), 
    zmm11)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_467)
float temp0_469[0x4] = _mm_broadcast_ss(*(arg1 + 0xf4))
float temp0_474[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(arg1 + 0x38)), zmm0[0].o, 
                0x20), 
            zmm5, 0x30), 
        temp0_469), 
    zmm13)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, temp0_474)
float temp0_476[0x4] = _mm_broadcast_ss(*(arg1 + 0xf8))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg4, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_476)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
temp0_359[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_460, zmm0[0].o)
arg3 = _mm_permute_pd(temp0_359[0].o, 1)
temp0_359[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_359[0].o, arg3)
float temp0_486[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_359[0].o)
temp0_359[0].o = temp0_359[0].o f+ temp0_486[0]
temp0_359[0].o = _mm_cmp_ss(zmm14, temp0_359[0], 2)
temp0_359[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, zmm10, temp0_359[0].o)
temp0_359[0].o = _mm_permute_ps(temp0_359[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359[0].o)
arg1[0xa] = temp0_460
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
