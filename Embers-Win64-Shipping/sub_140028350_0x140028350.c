// 函数: sub_140028350
// 地址: 0x140028350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg8
float var_68[0x4] = arg7
float var_78[0x4] = arg6
int64_t r8 = sx.q(arg3)
int64_t r11 = r8 * 3
float zmm8[0x4] = arg1[r8 + 0xe]
float temp0[0x4] = _mm_add_ps(zmm8, zmm8)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0)
float zmm2[0x4] = arg1[r8][0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0)
float zmm4[0x4] = arg1[r8][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[r8][0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float temp0_17[0x4] = _mm_sub_ps(data_142d3f670, temp0_16)
float temp0_18[0x4] = __insertps_xmmps_memd_immb(arg7, (*arg1)[r11 + 0x19], 0x1d)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(arg6, (*arg1)[r11 + 0x1a], 0x2b)
float zmm11[0x4] = (*arg1)[r11 + 0x18]
float temp0_22[0x4] =
    _mm_blend_ps(_mm_insert_ps(_mm_insert_ps(arg8, temp0_11, 0x4e), temp0_12, 0x14), temp0_17, 4)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc0), zmm11)
float temp0_26[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_17, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_27[0x4] = _mm_insert_ps(temp0_17, temp0_12, 0x8c)
float temp0_30[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_18), temp0_24)
float temp0_31[0x4] = _mm_insert_ps(temp0_27, temp0_11, 0x20)
float temp0_34[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_30)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm11)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd5), temp0_18), temp0_36)
float temp0_42[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_39)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm11)
arg7 = arg10
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_18), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc0), temp0_26)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd5), temp0_31), temp0_52)
float temp0_58[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xea), temp0_22), temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc0), temp0_26)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd5), temp0_31), temp0_60)
float temp0_66[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xea), temp0_22), temp0_63)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_26)
float temp0_71[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_31), temp0_68)
float temp0_74[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_22), temp0_71)
float result[0x4] = *arg12
zmm2 = (*arg12)[1]
float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_58)
float temp0_79[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_66), temp0_76)
result = (*arg12)[2]
float temp0_80[0x4] = _mm_insert_ps(zx.o(*arg12), result, 0x20)
float temp0_84[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_74), temp0_79), temp0_80)
float temp0_85[0x4] = _mm_movehdup_ps(temp0_84)
temp0_85[0] = temp0_85[0] + temp0_84[0]
temp0_84[0].q = temp0_84 u>> 0x40
float zmm7[0x4] = zx.o(0)
float zmm1[0x4]

if (not(arg7[0] <= 9.99999975e-05f))
    zmm1 = arg1[r8 + 0x15]
    float temp0_86[0x4] = _mm_mul_ps(zmm8, zmm1)
    float temp0_88[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_86, temp0_86[0].q), temp0_86)
    float temp0_89[0x4] = _mm_movehdup_ps(temp0_88)
    temp0_89[0] = temp0_89[0] + temp0_88[0]
    float temp0_90[0x4] = _mm_cmpeq_ss(0, temp0_89[0], 2)
    zmm2 = _mm_and_ps(0x3f800000, temp0_90)
    result = _mm_or_ps(_mm_andnot_ps(temp0_90, 0xbf800000), zmm2)
    float temp0_96[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm8), zmm1)
    float temp0_97[0x4] = __mulps_xmmps_memps(zmm1, data_142d3f690)
    float temp0_98[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0xc0)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xdb), temp0_98)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0xd5)
    float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_97, temp0_97, 1), temp0_101)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xff), temp0_97)
    float temp0_106[0x4] = __mulps_xmmps_memps(temp0_100, data_142fc92a0)
    float temp0_109[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(temp0_103, data_142fc92b0), _mm_add_ps(temp0_106, temp0_105))
    float temp0_110[0x4] = _mm_shuffle_ps(temp0_96, temp0_96, 0xea)
    float temp0_114[0x4] = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xf1), temp0_110), 
            data_142fc92c0), 
        temp0_109)
    float temp0_116[0x4] = _mm_mul_ps(_mm_add_ps(temp0_114, temp0_114), temp0_80)
    float temp0_117[0x4] = _mm_movehdup_ps(temp0_116)
    temp0_117[0] = temp0_117[0] + temp0_116[0]
    temp0_116[0].q = temp0_116 u>> 0x40
    temp0_117[0] = temp0_117[0] + temp0_116[0]
    zmm7 = temp0_117 ^ data_142d3f780

temp0_84[0] = temp0_84[0] + temp0_85[0]
zmm1 = arg9
arg5 = 0x3f800000

if ((arg11 & 1) != 0)
    arg5[0] = 1f / temp0_84[0]

zmm1[0] = zmm1[0] * arg5[0]
zmm1[0] = zmm1[0] * arg4[0]
zmm1[0] = zmm1[0] * arg4[0]
arg7[0] = arg7[0] * arg5[0]
arg7[0] = arg7[0] * arg4[0]
arg7[0] = arg7[0] + zmm1[0]
arg7[0] = arg7[0] * temp0_84[0]
arg7[0] = arg7[0] + 1f
arg5 = 0x3f800000
arg5[0] = 1f / arg7[0]
zmm1[0] = zmm1[0] * arg13[0]
arg7[0] = arg7[0] * zmm7[0]
zmm1[0] = zmm1[0] - arg7[0]
zmm11 = *arg14
zmm1[0] = zmm1[0] - zmm11[0]
zmm1[0] = zmm1[0] * arg5[0]
temp0_84[0] = temp0_84[0] * zmm1[0]
float temp0_119[0x4] = _mm_mul_ps(temp0_80, _mm_shuffle_epi32(temp0_84 ^ data_142d3f780, 0xc0))
zmm2 = arg1[r8 + 0xe]
float temp0_120[0x4] = _mm_mul_ps(zx.o(0), zmm2)
float temp0_121[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0)
float temp0_123[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_121)
arg7 = data_142d3f7c0
float temp0_125[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, arg7), temp0_120)
float temp0_126[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0x55)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm2, zmm2, 1), temp0_126)
arg6 = data_142d3f7d0
float temp0_130[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, arg6), temp0_125)
float temp0_131[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xaa)
float temp0_133[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xb1), temp0_131)
zmm8 = data_142d3f7b0
float temp0_137[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_133, zmm8), temp0_130), data_142d3f640), zmm2)
float temp0_138[0x4] = _mm_mul_ps(temp0_137, temp0_137)
float temp0_140[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_138, temp0_138[0].q), temp0_138)
float temp0_141[0x4] = _mm_movehdup_ps(temp0_140)
temp0_141[0] = temp0_141[0] + temp0_140[0]
float zmm6[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_141[0], 6), 0xffffffff)
zmm2 = 0x3f000000
temp0_141[0] = temp0_141[0] * 0.5f
float temp0_144[0x4] = _mm_rsqrt_ss(temp0_141[0], temp0_141[0])
temp0_144[0] = temp0_144[0] * temp0_144[0]
temp0_144[0] = temp0_144[0] * temp0_141[0]
result = 0x3f000000
result[0] = 0.5f - temp0_144[0]
result[0] = result[0] * temp0_144[0]
result[0] = result[0] + temp0_144[0]
result[0] = result[0] * result[0]
result[0] = result[0] * temp0_141[0]
zmm2[0] = 0.5f - result[0]
zmm2[0] = zmm2[0] * result[0]
zmm2[0] = zmm2[0] + result[0]
float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_137)
float temp0_147[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm2 = _mm_and_ps(temp0_146, temp0_147)
arg1[r8 + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_147, data_142d3f660), zmm2)
result = arg1[0xf]
float temp0_151[0x4] = _mm_mul_ps(arg1[0xe], result)
float temp0_153[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_151, temp0_151[0].q), temp0_151)
float temp0_154[0x4] = _mm_movehdup_ps(temp0_153)
temp0_154[0] = temp0_154[0] + temp0_153[0]
float temp0_155[0x4] = _mm_cmpeq_ss(0, temp0_154[0], 2)
zmm2 = _mm_and_ps(temp0_155, 0x3f800000)
arg4 = _mm_or_ps(_mm_andnot_ps(temp0_155, 0xbf800000), zmm2)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), result)
result = arg1[r8 + 0xe][0]
zmm4 = arg1[r8][0x39]
zmm7 = arg1[r8][0x3a]
arg4 = arg1[r11][6]
arg5 = arg1[r11 + 1][0]
float temp0_162[0x4] = _mm_insert_ps(_mm_insert_ps(zmm4, zmm7, 0x10), result, 0x20)
float temp0_163[0x4] = _mm_insert_ps(zmm7, result, 0x10)
float temp0_164[0x4] = _mm_insert_ps(zx.o(arg1[r11 + 1][0].q), arg4, 0x20)
float temp0_167[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg4, arg5, 0x10), arg1[r11][5], 0x20), temp0_162)
float temp0_168[0x4] = _mm_insert_ps(temp0_163, zmm4, 0x20)
float temp0_171[0x4] = _mm_sub_ps(temp0_167, 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(&arg1[r11] + 0x14)), arg5, 0x20), temp0_168))
float temp0_172[0x4] = _mm_add_ps(temp0_171, temp0_171)
zmm4 = arg1[r8][0x3b]
float temp0_175[0x4] =
    _mm_add_ps(temp0_164, _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), temp0_172))
float temp0_181[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0xd2), temp0_162), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0xc9), temp0_168)), 
    temp0_175)
float temp0_183[0x4] = _mm_add_ps(
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (r11 << 2) + 0xc0)), (*arg1)[r11 + 0x32], 0x20), 
    temp0_181)
(*arg1)[r11 + 0x20] = temp0_183[0]
(*arg1)[r11 + 0x21] = __extractps_memd_xmmps_immb(temp0_183, 1)
(*arg1)[r11 + 0x22] = __extractps_memd_xmmps_immb(temp0_183, 2)
zmm1[0] = zmm1[0] + zmm11[0]
*arg14 = zmm1[0]
result = arg1[r8][0x3b]
float temp0_186[0x4] = _mm_shuffle_ps(result, result, 0)
zmm2 = arg1[r11]
float temp0_187[0x4] = _mm_mul_ps(temp0_186, zmm2)
arg5 = arg1[r8 + 0xe][0]
float temp0_188[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
zmm6 = arg1[r11][3]
zmm4 = arg1[r11][2]
arg4 = arg1[r11][1]
float temp0_194[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm4, 0x10), arg4, 0x20), zmm2, 0x30), 
            temp0_188), 
        arg7), 
    temp0_187)
result = arg1[r8][0x39]
float temp0_195[0x4] = _mm_shuffle_ps(result, result, 0)
float temp0_200[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(&arg1[r11] + 8)), zmm2, 0x20), arg4, 0x30), 
            temp0_195), 
        arg6), 
    temp0_194)
result = arg1[r8][0x3a]
float temp0_201[0x4] = _mm_shuffle_ps(result, result, 0)
arg1[r8 + 0xa] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg4, zmm2, 0x10), zmm6, 0x20), zmm4, 0x30), 
            temp0_201), 
        zmm8), 
    temp0_200)
result = arg1[0xb]
float temp0_208[0x4] = _mm_mul_ps(arg1[0xa], result)
float temp0_210[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_208, temp0_208[0].q), temp0_208)
float temp0_211[0x4] = _mm_movehdup_ps(temp0_210)
temp0_211[0] = temp0_211[0] + temp0_210[0]
float temp0_212[0x4] = _mm_cmpeq_ss(0, temp0_211[0], 2)
float zmm12[0x4] = _mm_and_ps(0x3f800000, temp0_212)
zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_212, 0xbf800000), zmm12)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), result)
return result
