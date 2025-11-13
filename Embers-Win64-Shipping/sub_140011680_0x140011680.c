// 函数: sub_140011680
// 地址: 0x140011680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg7
int64_t r8 = sx.q(arg3)
int64_t r11 = r8 * 3
float zmm8[0x4] = arg1[r8 + 0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcastss_ps(zmm8))
float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss(arg1[r8][0x39]))
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0, _mm_broadcast_ss(arg1[r8][0x3b]))
float zmm2[0x4] = _mm_permute_pd(temp0, 1) f* arg1[r8][0x3a]
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_2, temp0_4, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
float temp0_17[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    _mm_permute_ps(
        __vshufps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5, temp0_4, 0x4e), 
            temp0_2, 0xc), 
        0x78), 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2, zmm2, 0x1c), 
    temp0_4, 0x60))
float temp0_19[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(1f), temp0_17)
float temp0_20[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(arg5, (*arg1)[r11 + 0x19], 0x1d)
float temp0_21[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(arg5, (*arg1)[r11 + 0x1a], 0x2b)
float zmm7[0x4] = (*arg1)[r11 + 0x18]
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, _mm_broadcastss_ps(temp0_19))
float temp0_25[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_11, 0xea), temp0_20, temp0_23)
float temp0_27[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_10, 0xd5), temp0_21, temp0_25)
float temp0_28[0x4] = _mm_permute_ps(temp0_10, 0xea)
float temp0_31[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_19, 0xd5)), zmm7, temp0_28)
float temp0_33[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(temp0_11), temp0_21, temp0_31)
float temp0_34[0x4] = _mm_permute_ps(temp0_11, 0xd5)
float temp0_37[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_broadcastss_ps(temp0_10)), zmm7, temp0_34)
float temp0_39[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_19, 0xea), temp0_21, temp0_37)
float temp0_41[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, temp0_10, 0x9c), temp0_11, 0x60)
float temp0_43[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_19, temp0_11, 0x8c), temp0_10, 0x20)
float temp0_46[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_43, temp0_10, 0x4e), temp0_11, 0x14), 
    temp0_19, 4)
float temp0_47[0x4] = _mm_broadcastss_ps(temp0_27)
float temp0_50[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_43, _mm_permute_ps(temp0_27, 0xd5)), temp0_41, temp0_47)
float temp0_52[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_27, 0xea), temp0_46, temp0_50)
float temp0_53[0x4] = _mm_broadcastss_ps(temp0_33)
float temp0_56[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_43, _mm_permute_ps(temp0_33, 0xd5)), temp0_41, temp0_53)
float temp0_58[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_33, 0xea), temp0_46, temp0_56)
float temp0_59[0x4] = _mm_broadcastss_ps(temp0_39)
float temp0_60[0x4] = _mm_permute_ps(temp0_39, 0xd5)
float temp0_62[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_43, temp0_60), temp0_41, temp0_59)
float temp0_64[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_39, 0xea), temp0_46, temp0_62)
float temp0_65[0x4] = _mm_broadcast_ss(*arg9)
float temp0_68[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(arg9[1]), temp0_58), 
    temp0_52, temp0_65)
arg5 = arg9[2]
float temp0_70[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(arg5), temp0_64, temp0_68)
float temp0_72[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*arg9), arg5, 0x20)
float temp0_73[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_72, temp0_70)
float temp0_74[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_73)
float zmm10[0x4] = _mm_permute_pd(temp0_73, 1)
float zmm5[0x4] = temp0_73 f+ temp0_74[0]
float zmm6[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_60, temp0_60)

if (not(zmm9 f<= 9.99999975e-05f))
    arg5 = arg1[r8 + 0x15]
    float temp0_77[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, arg5)
    float temp0_79[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_77, _mm_permute_pd(temp0_77, 1))
    float temp0_80[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_79)
    float temp0_85[0x4] = _mm_fmsub_ps(
        _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
            _mm_cmp_ss(__vxorps_xmmdq_xmmdq_xmmdq(temp0_80, temp0_80), 
                (temp0_79 f+ temp0_80[0])[0], 2))), 
        zmm8, arg5)
    float temp0_86[0x4] = __vmulps_xmmdq_xmmdq_memdq(arg5, data_142d3f690)
    float temp0_87[0x4] = _mm_broadcastss_ps(temp0_85)
    float temp0_92[0x4] = _mm_fmadd_ps(
        __vmulps_xmmdq_xmmdq_memdq(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_86, 0xdb), temp0_87), data_142fc92a0), 
        temp0_86, _mm_permute_ps(temp0_85, 0xff))
    float temp0_93[0x4] = _mm_permute_ps(temp0_85, 0xd5)
    float temp0_96[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(temp0_86, 1), temp0_93), temp0_92, data_142fc92b0)
    float temp0_97[0x4] = _mm_permute_ps(temp0_85, 0xea)
    float temp0_100[0x4] = __vfmadd132ps_xmmdq_xmmdq_memdq(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_86, 0xf1), temp0_97), temp0_96, 
        data_142fc92c0)
    float temp0_102[0x4] =
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_72, __vaddps_xmmdq_xmmdq_xmmdq(temp0_100, temp0_100))
    float temp0_103[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_102)
    zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(
        _mm_permute_pd(temp0_102, 1) f+ (temp0_102 f+ temp0_103[0])[0], _mm_broadcast_ss(-0f))

zmm5 = zmm10 f+ zmm5[0]

if ((arg8 & 1) != 0)
    arg5 = 0x3f800000 / zmm5[0]
else
    arg5 = 0x3f800000

float zmm1[0x4] = arg5 f* arg6[0] f* arg4[0] f* arg4[0]
arg5 = arg5 f* zmm9[0] f* arg4[0]
arg4 = 0x3f800000 / _mm_fmadd_ss(arg5 f+ zmm1[0], zmm5[0], 1f)[0]
float temp0_108[0x4] = _mm_fmsub_ss(arg10, zmm1[0], (arg5 f* zmm6[0])[0])
float zmm11[0x4] = *arg11
zmm2 = arg4 f* (temp0_108 f- zmm11[0])[0]
arg5 = zmm5 f* zmm2[0]
float temp0_109[0x4] = _mm_broadcast_ss(-0f)
float temp0_112[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_72, 
    _mm_broadcastss_ps(__vxorps_xmmdq_xmmdq_xmmdq(arg5, temp0_109)))
zmm6 = arg1[r8 + 0xe]
arg4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_109, temp0_109)
float temp0_114[0x4] = _mm_broadcastss_ps(temp0_112)
float temp0_116[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0x1b), temp0_114)
zmm5 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
float temp0_119[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_116, zmm5), zmm6, arg4)
float temp0_120[0x4] = _mm_permute_ps(temp0_112, 0x55)
float temp0_122[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm6, 1), temp0_120)
zmm10 = data_142d3f7d0
float temp0_123[0x4] = _mm_fmadd_ps(temp0_122, zmm10, temp0_119)
float temp0_124[0x4] = _mm_permute_ps(temp0_112, 0xaa)
float temp0_126[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm6, 0xb1), temp0_124)
zmm9 = data_142d3f7b0
float temp0_127[0x4] = _mm_fmadd_ps(temp0_126, zmm9, temp0_123)
float temp0_129[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), temp0_127, zmm6)
float temp0_130[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_129, temp0_129)
float temp0_132[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_130, _mm_permute_pd(temp0_130, 1))
zmm6 = temp0_132 f+ __vmovshdup_xmmdq_xmmdq(temp0_132)[0]
float zmm4[0x4] = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm6[0], 6), 0xffffffff)
zmm7 = zmm6 f* 0.5f
float temp0_136[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6, zmm6[0])
float temp0_138[0x4] = _mm_fmadd_ss(_mm_fnmadd_ss(temp0_136 f* temp0_136[0], zmm7[0], 0.5f), 
    temp0_136[0], temp0_136[0])
float temp0_142[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_129, 
    _mm_broadcastss_ps(_mm_fmadd_ss(_mm_fnmadd_ss(temp0_138 f* temp0_138[0], zmm7[0], 0.5f), 
        temp0_138[0], temp0_138[0])))
float temp0_143[0x4] = _mm_broadcastss_ps(zmm4)
arg1[r8 + 0xe] = __vorps_xmmdq_xmmdq_xmmdq(__vandps_xmmdq_xmmdq_xmmdq(temp0_142, temp0_143), 
    __vandnps_xmmdq_xmmdq_memdq(temp0_143, data_142d3f660))
arg5 = arg1[0xf]
float temp0_147[0x4] = __vmulps_xmmdq_xmmdq_memdq(arg5, arg1[0xe])
float temp0_149[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_147, _mm_permute_pd(temp0_147, 1))
zmm1 = temp0_149 f+ __vmovshdup_xmmdq_xmmdq(temp0_149)[0]
float zmm12[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_20, temp0_20)
arg1[0xf] = __vmulps_xmmdq_xmmdq_xmmdq(arg5, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
        _mm_cmp_ss(zmm12, zmm1[0], 2))))
arg5 = arg1[r8 + 0xe][0]
zmm1 = arg1[r8][0x39]
arg4 = arg1[r8][0x3a]
zmm4 = arg1[r11][6]
float temp0_157[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, arg4, 0x10), arg5, 0x20)
float temp0_158[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, arg5, 0x10)
arg4 = arg1[r11 + 1][0]
float temp0_159[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_158, zmm1, 0x20)
float temp0_161[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 0x14)), arg4, 0x20)
float temp0_163[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg4, 0x10), arg1[r11][5], 0x20)
float temp0_165[0x4] =
    _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_159, temp0_161), temp0_157, temp0_163)
arg4 = __vmovsd_xmmdq_memq(arg1[r11 + 1][0].q)
float temp0_167[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_165, temp0_165)
float temp0_168[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x20)
float temp0_170[0x4] = _mm_fmadd_ps(_mm_broadcast_ss(arg1[r8][0x3b]), temp0_167, temp0_168)
float temp0_171[0x4] = _mm_permute_ps(temp0_167, 0xd2)
float temp0_174[0x4] = _mm_fmsub_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_159, _mm_permute_ps(temp0_167, 0xc9)), temp0_157, temp0_171)
float temp0_178[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(__vmovsd_xmmdq_memq(*(arg1 + (r11 << 2) + 0xc0)), 
        (*arg1)[r11 + 0x32], 0x20), 
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_170, temp0_174))
(*arg1)[r11 + 0x20] = temp0_178[0]
(*arg1)[r11 + 0x21] = __vextractps_memd_xmmdq_immb(temp0_178, 1)
(*arg1)[r11 + 0x22] = __vextractps_memd_xmmdq_immb(temp0_178, 2)
*arg11 = (zmm11 f+ zmm2[0])[0]
float temp0_181[0x4] = _mm_broadcast_ss(arg1[r8][0x3b])
zmm1 = arg1[r11]
float temp0_182[0x4] = _mm_broadcast_ss(arg1[r8 + 0xe][0])
arg4 = arg1[r11][3]
zmm4 = arg1[r11][2]
zmm6 = arg1[r11][1]
float temp0_188[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_182, 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg4, zmm4, 0x10), zmm6, 0x20), 
                zmm1, 0x30)), 
        zmm5), 
    zmm1, temp0_181)
float temp0_189[0x4] = _mm_broadcast_ss(arg1[r8][0x39])
float temp0_194[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[r11] + 8)), zmm1, 0x20), 
            zmm6, 0x30), 
        temp0_189), 
    zmm10, temp0_188)
float temp0_195[0x4] = _mm_broadcast_ss(arg1[r8][0x3a])
arg1[r8 + 0xa] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1, 0x10), arg4, 0x20), 
            zmm4, 0x30), 
        temp0_195), 
    zmm9, temp0_194)
arg5 = arg1[0xb]
float temp0_201[0x4] = __vmulps_xmmdq_xmmdq_memdq(arg5, arg1[0xa])
float temp0_203[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_201, _mm_permute_pd(temp0_201, 1))
arg1[0xb] = __vmulps_xmmdq_xmmdq_xmmdq(arg5, 
    _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
        _mm_cmp_ss(zmm12, (temp0_203 f+ __vmovshdup_xmmdq_xmmdq(temp0_203)[0])[0], 2))))
return &arg1[r8 + 0xe]
