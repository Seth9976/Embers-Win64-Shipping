// 函数: sub_14002da50
// 地址: 0x14002da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = arg9
float zmm10[0x4] = arg6
int128_t zmm12 = arg5
uint32_t temp0 = _mm_movemask_ps(*arg11)
int64_t r8 = sx.q(arg3)
int64_t rsi = r8 * 3
float zmm9[0x4] = arg1[r8 + 0xe]
float temp0_1[0x4] = _mm_add_ps(zmm9, zmm9)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_1)
float zmm4[0x4] = arg1[r8][0x39]
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_1)
float zmm5[0x4] = arg1[r8][0x3b]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_1)
temp0_1[0].q = temp0_1 u>> 0x40
temp0_1[0] = temp0_1[0] * arg1[r8][0x3a]
float temp0_9[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_5, 0), temp0_3, 0x6c)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
uint128_t result_1 = _mm_add_ps(temp0_7, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_5, zx.o(0), 0xe5), temp0_3, 0xc)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x78)
float temp0_19[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0_1, _mm_shuffle_ps(temp0_5, _mm_shuffle_ps(temp0_1, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_15)
float temp0_20[0x4] = _mm_sub_ps(data_142d3f670, temp0_19)
float result_2[0x4] = (*arg1)[rsi + 0x18]
zmm5 = (*arg1)[rsi + 0x1a]
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[rsi + 0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_24[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x30), 0x84)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xc0), result_2)
float temp0_29[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_22), temp0_26)
float temp0_32[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0xd5), temp0_24), temp0_29)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0xea), result_2)
float temp0_37[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xd5), temp0_22), temp0_34)
float temp0_40[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_24), temp0_37)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), result_2)
float temp0_45[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0xc0), temp0_22), temp0_42)
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xea), temp0_24), temp0_45)
float zmm11[0x4] = zx.o(0)
float temp0_49[0x4] = _mm_shuffle_ps(result_1, temp0_20, 2)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, 
    _mm_shuffle_ps(temp0_12, _mm_shuffle_ps(temp0_49, zx.o(0), 0x22), 0x31), 0x82)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_20, temp0_12, 0xa1)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, zx.o(0), 0x42)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_12, result_1, 0x50)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, _mm_shuffle_ps(result_1, temp0_54, 0x30), 0x82)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_55, 
    _mm_shuffle_ps(temp0_20, _mm_shuffle_ps(temp0_55, zx.o(0), 0x42), 0x32), 0x82)
float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xc0), temp0_52)
result_1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd5), temp0_57), temp0_62)
float temp0_68[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xea), temp0_60), result_1)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc0), temp0_52)
result_1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd5), temp0_57), temp0_70)
float temp0_76[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xea), temp0_60), result_1)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc0), temp0_52)
result_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd5), temp0_57)
float result_3[0x4] = *arg8
float zmm7[0x4] = (*arg8)[1]
zmm4 = (*arg8)[2]
uint128_t zmm13 = zx.o(*arg8)
result_1 = _mm_add_ps(result_1, temp0_78)
float temp0_84[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xea), temp0_60), result_1)
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0), temp0_68)
float temp0_89[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_76), temp0_86)
zmm13 = zmm13.q | zmm4[0].q << 0x40
float temp0_93[0x4] =
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_84), temp0_89), zmm13)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0xe5)
temp0_94[0] = temp0_94[0] + temp0_93[0]
temp0_93[0].q = temp0_93 u>> 0x40
temp0_94[0] = temp0_94[0] + temp0_93[0]
float result[0x4]
float zmm14[0x4]

if (temp0 != 0xf)
    if (not(zmm10[0] <= 9.99999975e-05f))
        result_2 = arg1[r8 + 0x15]
        float temp0_127[0x4] = _mm_mul_ps(zmm9, result_2)
        result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_127, temp0_127[0].q), temp0_127)
        float temp0_130[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
        temp0_130[0] = temp0_130[0] f+ result_1.d
        float temp0_131[0x4] = _mm_cmpeq_ss(0, temp0_130[0], 2)
        result_1 = _mm_and_ps(0x3f800000, temp0_131)
        result = _mm_or_ps(_mm_andnot_ps(temp0_131, 0xbf800000), result_1)
        float temp0_137[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm9), result_2)
        float temp0_138[0x4] = __mulps_xmmps_memps(result_2, data_142d3f690)
        result_1 = _mm_shuffle_ps(temp0_137, temp0_137, 0xc0)
        float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xdb), result_1)
        result_1 = _mm_shuffle_ps(temp0_137, temp0_137, 0xd5)
        float temp0_144[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_138, temp0_138, 1), result_1)
        result_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xff), temp0_138)
        float temp0_147[0x4] = __mulps_xmmps_memps(temp0_141, data_142fc92a0)
        float temp0_150[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_144, data_142fc92b0), 
            _mm_add_ps(temp0_147, result_1))
        float temp0_151[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xea)
        float temp0_155[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xf1), temp0_151), 
                data_142fc92c0), 
            temp0_150)
        float temp0_157[0x4] = _mm_mul_ps(_mm_add_ps(temp0_155, temp0_155), zmm13)
        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xe5)
        temp0_158[0] = temp0_158[0] + temp0_157[0]
        temp0_157[0].q = temp0_157 u>> 0x40
        temp0_158[0] = temp0_158[0] + temp0_157[0]
        zmm11 = temp0_158 ^ data_142d3f780
    
    zmm14 = 0x3f800000
    result = 0x3f800000
    
    if ((arg7 & 1) != 0)
        result[0] = 1f / temp0_94[0]
    
    zmm12.d = zmm12.d f* result[0]
    zmm12.d = zmm12.d f* arg4[0]
    zmm12.d = zmm12.d f* arg4[0]
    zmm10[0] = zmm10[0] * result[0]
    zmm10[0] = zmm10[0] f* arg4[0]
    zmm10[0] = zmm10[0] f+ zmm12.d
    zmm10[0] = zmm10[0] * temp0_94[0]
    zmm10[0] = zmm10[0] + 1f
    result_2 = 0x3f800000
    result_2[0] = 1f / zmm10[0]
    zmm12.d = zmm12.d f* zmm8[0]
    zmm10[0] = zmm10[0] * zmm11[0]
    zmm12.d = zmm12.d f- zmm10[0]
    result = *arg10
    zmm12.d = zmm12.d f- result[0]
    zmm12.d = zmm12.d f* result_2[0]
else
    result = zx.o(0)
    
    if (not(zmm10[0] <= 9.99999975e-05f))
        result_2 = arg1[r8 + 0x15]
        float temp0_95[0x4] = _mm_mul_ps(zmm9, result_2)
        result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_95, temp0_95[0].q), temp0_95)
        float temp0_98[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
        temp0_98[0] = temp0_98[0] f+ result_1.d
        float temp0_99[0x4] = _mm_cmpeq_ss(0, temp0_98[0], 2)
        result_1 = _mm_and_ps(0x3f800000, temp0_99)
        result = _mm_or_ps(_mm_andnot_ps(temp0_99, 0xbf800000), result_1)
        float temp0_105[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm9), result_2)
        float temp0_106[0x4] = __mulps_xmmps_memps(result_2, data_142d3f690)
        result_1 = _mm_shuffle_ps(temp0_105, temp0_105, 0xc0)
        float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xdb), result_1)
        result_1 = _mm_shuffle_ps(temp0_105, temp0_105, 0xd5)
        float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_106, temp0_106, 1), result_1)
        result_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xff), temp0_106)
        float temp0_115[0x4] = __mulps_xmmps_memps(temp0_109, data_142fc92a0)
        float temp0_118[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_112, data_142fc92b0), 
            _mm_add_ps(temp0_115, result_1))
        float temp0_119[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xea)
        float temp0_123[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0xf1), temp0_119), 
                data_142fc92c0), 
            temp0_118)
        float temp0_125[0x4] = _mm_mul_ps(_mm_add_ps(temp0_123, temp0_123), zmm13)
        float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xe5)
        temp0_126[0] = temp0_126[0] + temp0_125[0]
        temp0_125[0].q = temp0_125 u>> 0x40
        temp0_126[0] = temp0_126[0] + temp0_125[0]
        result = temp0_126 ^ data_142d3f780
    
    zmm14 = 0x3f800000
    result_2 = 0x3f800000
    
    if ((arg7 & 1) != 0)
        result_2[0] = 1f / temp0_94[0]
    
    zmm12.d = zmm12.d f* result_2[0]
    zmm12.d = zmm12.d f* arg4[0]
    zmm12.d = zmm12.d f* arg4[0]
    zmm10[0] = zmm10[0] * result_2[0]
    zmm10[0] = zmm10[0] f* arg4[0]
    zmm10[0] = zmm10[0] f+ zmm12.d
    zmm10[0] = zmm10[0] * temp0_94[0]
    zmm10[0] = zmm10[0] + 1f
    result_1.d = 1f / zmm10[0]
    zmm12.d = zmm12.d f* zmm8[0]
    zmm10[0] = zmm10[0] * result[0]
    zmm12.d = zmm12.d f- zmm10[0]
    result = *arg10
    zmm12.d = zmm12.d f- result[0]
    zmm12.d = zmm12.d f* result_1.d

temp0_94[0] = temp0_94[0] f* zmm12.d
zmm13 = _mm_mul_ps(zmm13, _mm_shuffle_epi32(temp0_94 ^ data_142d3f780, 0xc0))
zmm12.d = zmm12.d f+ result[0]
*arg10 = zmm12.d
result = arg1[r8 + 0xe]
float temp0_161[0x4] = _mm_mul_ps(zx.o(0), result)
result_1 = _mm_shuffle_ps(zmm13, zmm13, 0)
arg4 = _mm_mul_ps(_mm_shuffle_ps(result, result, 0x1b), result_1)
zmm8 = data_142d3f7c0
arg4 = _mm_add_ps(_mm_mul_ps(arg4, zmm8), temp0_161)
float temp0_167[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
result_1 = _mm_mul_ps(_mm_shuffle_pd(result, result, 1), temp0_167)
zmm9 = data_142d3f7d0
result_1 = _mm_add_ps(_mm_mul_ps(result_1, zmm9), arg4)
zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
arg4 = _mm_mul_ps(_mm_shuffle_ps(result, result, 0xb1), zmm13)
zmm10 = data_142d3f7b0
arg4 = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(arg4, zmm10), result_1), data_142d3f640), result)
float temp0_179[0x4] = _mm_mul_ps(arg4, arg4)
float temp0_181[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_179, temp0_179[0].q), temp0_179)
result_1.d = _mm_shuffle_ps(temp0_181, temp0_181, 0xe5).d f+ temp0_181[0]
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, result_1.d, 6), 0xffffffff)
result = 0x3f000000
result_2 = result_1
result_2[0] = result_2[0] * 0.5f
result_1 = _mm_rsqrt_ss(result_1.d, result_1.d)
result_3 = result_1
result_3[0] = result_3[0] f* result_1.d
result_3[0] = result_3[0] * result_2[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - result_3[0]
zmm7[0] = zmm7[0] f* result_1.d
zmm7[0] = zmm7[0] f+ result_1.d
result_1.d = zmm7.d f* zmm7[0]
result_1.d = result_1.d f* result_2[0]
result[0] = 0.5f f- result_1.d
result[0] = result[0] * zmm7[0]
result[0] = result[0] + zmm7[0]
float temp0_187[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), arg4)
float temp0_188[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
result = _mm_and_ps(temp0_187, temp0_188)
arg1[r8 + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_188, data_142d3f660), result)
result = arg1[0xf]
float temp0_192[0x4] = _mm_mul_ps(arg1[0xe], result)
result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_192, temp0_192[0].q), temp0_192)
float temp0_195[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
temp0_195[0] = temp0_195[0] f+ result_1.d
result_1 = _mm_cmpeq_ss(0, temp0_195[0], 2)
result_2 = _mm_and_ps(result_1, zmm14)
result_1 = _mm_or_ps(_mm_andnot_ps(result_1, 0xbf800000), result_2)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0), result)
result = arg1[r8 + 0xe][0]
result_2 = arg1[r8][0x39]
result_3 = arg1[r8][0x3a]
zmm4 = arg1[rsi][6]
result_1 = arg1[rsi + 1][0]
zmm12 = arg1[rsi][5]
zmm7 = _mm_unpacklo_ps(result_2, result_3[0].q)[0].q | result[0].q << 0x40
zmm5 = zx.o(arg1[rsi + 1][0].q)[0].q | zmm4[0].q << 0x40
float temp0_204[0x4] = _mm_mul_ps(_mm_unpacklo_ps(zmm4, result_1.q)[0].q | zmm12.q << 0x40, zmm7)
result_3 = _mm_unpacklo_ps(result_3, result[0].q)[0].q | result_2[0].q << 0x40
float temp0_207[0x4] = _mm_sub_ps(temp0_204, 
    _mm_mul_ps(zx.o(*(&arg1[rsi] + 0x14))[0].q | result_1.q << 0x40, result_3))
float temp0_208[0x4] = _mm_add_ps(temp0_207, temp0_207)
result = arg1[r8][0x3b]
float temp0_211[0x4] = _mm_add_ps(zmm5, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_208))
float temp0_217[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_208, temp0_208, 0xd2), zmm7), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_208, temp0_208, 0xc9), result_3)), 
    temp0_211)
result_1 = _mm_add_ps(*(arg1 + (rsi << 2) + 0xc0) | (*arg1)[rsi + 0x32][0].q << 0x40, temp0_217)
result = result_1
(*arg1)[rsi + 0x20] = result_1.d
result_1 = _mm_shuffle_ps(result_1, result_1, 0xe5)
result[0].q = result u>> 0x40
(*arg1)[rsi + 0x21] = result_1.d
(*arg1)[rsi + 0x22] = result[0]
result_3 = arg1[r8][0x3b]
float temp0_220[0x4] = _mm_shuffle_ps(result_3, result_3, 0)
result = arg1[rsi]
float temp0_221[0x4] = _mm_mul_ps(temp0_220, result)
result_2 = arg1[r8 + 0xe][0]
float temp0_222[0x4] = _mm_shuffle_ps(result_2, result_2, 0)
result_1 = _mm_unpacklo_ps(arg1[rsi][3], arg1[rsi][2][0].q)
zmm7 = arg1[rsi][1]
zmm4 = result_1[0].q | zmm7[0].q << 0x40
float temp0_224[0x4] = _mm_unpacklo_ps(result, zmm7[0].q)
float temp0_225[0x4] = _mm_unpacklo_ps(zmm7, result[0].q)
float temp0_226[0x4] = _mm_shuffle_ps(result, zmm4, 0x20)
zmm7 = temp0_225[0].q | result_1.q << 0x40
result_1 = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(result_1, temp0_226, 0x24), temp0_222), zmm8), temp0_221)
result = arg1[r8][0x39]
float temp0_231[0x4] = _mm_shuffle_ps(result, result, 0)
float temp0_234[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(&arg1[rsi] + 8))[0].q | temp0_224[0].q << 0x40, temp0_231), zmm9), 
    result_1)
result = arg1[r8][0x3a]
arg1[r8 + 0xa] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm7, _mm_shuffle_ps(result, result, 0)), zmm10), temp0_234)
result = arg1[0xb]
float temp0_239[0x4] = _mm_mul_ps(arg1[0xa], result)
result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_239, temp0_239[0].q), temp0_239)
float temp0_242[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
temp0_242[0] = temp0_242[0] f+ result_1.d
arg4 = _mm_cmpeq_ss(0, temp0_242[0], 2)
zmm14 = _mm_and_ps(zmm14, arg4)
uint32_t temp0_246[0x4] = _mm_or_ps(_mm_andnot_ps(arg4, 0xbf800000), zmm14)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(temp0_246, temp0_246, 0), result)
return result
