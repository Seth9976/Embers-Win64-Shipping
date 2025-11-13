// 函数: sub_14001c9b0
// 地址: 0x14001c9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28[0x4] = arg5
float zmm9[0x4] = arg7
int64_t r10 = sx.q(arg3)
int64_t r11 = r10 * 3
float zmm8[0x4] = arg1[r10 + 0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_permute_ps(zmm8, 0))
float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss(arg1[r10][0x39]))
float temp0_5[0x4] = _mm_broadcast_ss(arg1[r10][0x3b])
double zmm7[0x2] = _mm_permute_pd(temp0, 1) f* arg1[r10][0x3a]
float temp0_7[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, temp0_5)
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, temp0_4, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_7, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_7)
float temp0_17[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_10, temp0_4, 0x4e), temp0_2, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm7, 0x1c), 
    temp0_4, 0x60))
float temp0_18[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(data_142d3f670, temp0_17)
float zmm5[0x4] = (*arg1)[r11 + 0x18]
float temp0_19[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_10, (*arg1)[r11 + 0x19], 0x1d)
zmm7 = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_10, (*arg1)[r11 + 0x1a], 0x2b)
float temp0_22[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_18, 0xc0))
float temp0_25[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, _mm_permute_ps(temp0_11, 0xea)), temp0_22)
float temp0_28[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm7, _mm_permute_ps(temp0_10, 0xd5)), temp0_25)
float temp0_33[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_10, 0xea)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, _mm_permute_ps(temp0_18, 0xd5)))
float temp0_36[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm7, _mm_permute_ps(temp0_11, 0xc0)), temp0_33)
float temp0_44[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm5, _mm_permute_ps(temp0_11, 0xd5)), 
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, _mm_permute_ps(temp0_10, 0xc0))), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm7, _mm_permute_ps(temp0_18, 0xea)))
float temp0_46[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_18, temp0_10, 0x9c), temp0_11, 0x60)
float temp0_48[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_18, temp0_11, 0x8c), temp0_10, 0x20)
float temp0_51[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_10, temp0_10, 0x4e), temp0_11, 0x14), 
    temp0_18, 4)
float temp0_56[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(temp0_28, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_28, 0xd5)))
float temp0_59[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_51, _mm_permute_ps(temp0_28, 0xea)), temp0_56)
float temp0_64[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(temp0_36, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_36, 0xd5)))
float temp0_67[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_51, _mm_permute_ps(temp0_36, 0xea)), temp0_64)
float temp0_69[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(temp0_44, 0xc0))
float temp0_71[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_44, 0xd5))
float temp0_72[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_69, temp0_71)
float temp0_75[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_51, _mm_permute_ps(temp0_44, 0xea)), temp0_72)
float temp0_80[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(*arg9), temp0_59), 
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg9[1]), temp0_67))
float zmm2[0x4] = arg9[2]
float temp0_83[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm2, 0), temp0_75), temp0_80)
float temp0_85[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*arg9), zmm2, 0x20)
float temp0_86[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, temp0_83)
float temp0_87[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_86)
float zmm10[0x4] = _mm_permute_pd(temp0_86, 1)
zmm5 = temp0_86 f+ temp0_87[0]
float zmm6[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_71, temp0_71)
float zmm0[0x4]

if (not(zmm9 f<= 9.99999975e-05f))
    zmm0 = arg1[r10 + 0x15]
    float temp0_90[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, zmm0)
    float temp0_92[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_90, _mm_permute_pd(temp0_90, 1))
    float temp0_93[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_92)
    float temp0_99[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(zmm8, 
            _mm_permute_ps(
                __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
                    _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_93, temp0_93), 
                        (temp0_92 f+ temp0_93[0])[0], 2)), 
                0)), 
        zmm0)
    float temp0_100[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, data_142d3f690)
    float temp0_101[0x4] = _mm_permute_ps(temp0_99, 0xc0)
    float temp0_103[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_100, 0xdb), temp0_101)
    zmm7 = _mm_permute_ps(temp0_99, 0xd5)
    float temp0_106[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_100, 1), zmm7)
    zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(temp0_100, _mm_permute_ps(temp0_99, 0xff))
    float temp0_109[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_103, data_142fc92a0)
    float temp0_112[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_memdq(temp0_106, data_142fc92b0), 
        __vaddps_xmmdq_xmmdq_xmmdq(zmm7, temp0_109))
    float temp0_113[0x4] = _mm_permute_ps(temp0_99, 0xea)
    float temp0_117[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_100, 0xf1), temp0_113), 
            data_142fc92c0), 
        temp0_112)
    float temp0_119[0x4] =
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, __vaddps_xmmdq_xmmdq_xmmdq(temp0_117, temp0_117))
    float temp0_120[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_119)
    zmm6 = __vxorps_xmmdq_xmmdq_memdq(
        _mm_permute_pd(temp0_119, 1) f+ (temp0_119 f+ temp0_120[0])[0], data_142d3f780)

zmm5 = zmm10 f+ zmm5[0]
float zmm1[0x4]

if ((arg8 & 1) != 0)
    zmm1 = 0x3f800000 / zmm5[0]
else
    zmm1 = 0x3f800000

zmm0 = zmm1 f* arg6[0].d f* arg4[0] f* arg4[0]
zmm1 = zmm1 f* zmm9[0] f* arg4[0]
arg4 = 0x3f800000 f/ (zmm5 f* (zmm1 f+ zmm0[0])[0] f+ 1f)[0]
float zmm11[0x4] = *arg11
zmm2 = arg4 f* (zmm0 f* arg10[0] f- (zmm1 f* zmm6[0])[0] f- zmm11[0])[0]
float temp0_125[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_85, 
    _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(zmm5 f* zmm2[0], data_142d3f780), 0xc0))
zmm6 = arg1[r10 + 0xe]
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, __vxorps_xmmdq_xmmdq_xmmdq(arg4, arg4))
float temp0_128[0x4] = _mm_permute_ps(temp0_125, 0)
float temp0_130[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_128)
zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
arg4 = __vaddps_xmmdq_xmmdq_xmmdq(arg4, __vmulps_xmmdq_xmmdq_xmmdq(temp0_130, zmm5))
float temp0_134[0x4] = _mm_permute_ps(temp0_125, 0x55)
zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), temp0_134)
zmm10 = data_142d3f7d0
zmm7 = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm10), arg4)
float temp0_139[0x4] = _mm_permute_ps(temp0_125, 0xaa)
float temp0_141[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_139)
zmm9 = data_142d3f7b0
float temp0_145[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm6, 
    __vmulps_xmmdq_xmmdq_memdq(
        __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_141, zmm9), zmm7), 
        data_142d3f640))
float temp0_146[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_145, temp0_145)
float temp0_148[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_146, _mm_permute_pd(temp0_146, 1))
zmm6 = temp0_148 f+ __vmovshdup_xmmdq_xmmdq(temp0_148)[0].d
int32_t temp0_151[0x4] = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm6[0], 6), 0xffffffff)
float zmm4[0x4] = zmm6 f* 0.5f
float temp0_152[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
zmm0 = temp0_152 f+ (temp0_152 f* (0x3f000000 - (temp0_152 f* temp0_152[0] f* zmm4[0])[0])[0])[0]
float temp0_154[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_145, 
    _mm_permute_ps(zmm0 f+ (zmm0 f* (0x3f000000 - (zmm4 f* (zmm0 f* zmm0[0])[0])[0])[0])[0], 0))
float temp0_155[0x4] = _mm_permute_ps(temp0_151, 0)
int32_t temp0_156[0x4] = __vandnps_xmmdq_xmmdq_memdq(temp0_155, data_142d3f660)
arg1[r10 + 0xe] =
    __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_154, temp0_155), temp0_156)
zmm0 = arg1[0xf]
float temp0_159[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xe])
float temp0_161[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_159, _mm_permute_pd(temp0_159, 1))
zmm1 = temp0_161 f+ __vmovshdup_xmmdq_xmmdq(temp0_161)[0]
int32_t temp0_163[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
arg1[0xf] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, 
    _mm_permute_ps(
        __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
            _mm_cmp_ss(temp0_163, zmm1[0], 2)), 
        0))
zmm0 = arg1[r10 + 0xe][0]
zmm1 = arg1[r10][0x39]
arg4 = arg1[r10][0x3a]
zmm4 = arg1[r11][6]
zmm6 = arg1[r11 + 1][0]
zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, arg4, 0x10), 
    zmm0, 0x20)
float temp0_170[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm0, 0x10)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm6, 0x10), 
        arg1[r11][5], 0x20))
float temp0_174[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_170, zmm1, 0x20)
float temp0_176[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 0x14)), zmm6, 0x20)
zmm6 = __vmovsd_xmmdq_memq(arg1[r11 + 1][0].q)
float temp0_179[0x4] =
    __vsubps_xmmdq_xmmdq_xmmdq(arg4, __vmulps_xmmdq_xmmdq_xmmdq(temp0_174, temp0_176))
float temp0_180[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_179, temp0_179)
arg4 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg1[r10][0x3b]), temp0_180)
float temp0_190[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vaddps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4, 0x20), arg4), 
    __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm7, _mm_permute_ps(temp0_180, 0xd2)), 
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_174, _mm_permute_ps(temp0_180, 0xc9))))
float temp0_193[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + (r11 << 2) + 0xc0)), 
        (*arg1)[r11 + 0x32], 0x20), 
    temp0_190)
(*arg1)[r11 + 0x20] = temp0_193[0]
(*arg1)[r11 + 0x21] = __vextractps_memd_xmmdq_immb(temp0_193, 1)
(*arg1)[r11 + 0x22] = __vextractps_memd_xmmdq_immb(temp0_193, 2)
zmm0 = arg1[r11]
float temp0_196[0x4] = _mm_broadcast_ss(arg1[r10 + 0xe][0])
arg4 = arg1[r11][3]
zmm4 = arg1[r11][2]
zmm6 = arg1[r11][1]
float temp0_200[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_196, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), 
            zmm6, 0x20), 
        zmm0, 0x30))
float temp0_204[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_broadcast_ss(arg1[r10][0x3b])), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_200, zmm5))
float temp0_205[0x4] = _mm_broadcast_ss(arg1[r10][0x39])
float temp0_211[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_204, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 8)), zmm0, 
                    0x20), 
                zmm6, 0x30), 
            temp0_205), 
        zmm10))
float temp0_212[0x4] = _mm_broadcast_ss(arg1[r10][0x3a])
arg1[r10 + 0xa] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0, 0x10), arg4, 0x20), 
                zmm4, 0x30), 
            temp0_212), 
        zmm9), 
    temp0_211)
zmm0 = arg1[0xb]
float temp0_219[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0, arg1[0xa])
zmm2 = zmm11 f+ zmm2[0]
float temp0_221[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_219, _mm_permute_pd(temp0_219, 1))
float temp0_224[0x4] = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
    _mm_cmp_ss(temp0_163, (temp0_221 f+ __vmovshdup_xmmdq_xmmdq(temp0_221)[0])[0], 2))
*arg11 = zmm2[0]
arg1[0xb] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0, _mm_permute_ps(temp0_224, 0))
return &arg1[r10 + 0xe]
