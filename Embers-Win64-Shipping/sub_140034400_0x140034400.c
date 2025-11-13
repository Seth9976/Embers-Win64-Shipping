// 函数: sub_140034400
// 地址: 0x140034400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg6
int64_t r8 = sx.q(arg3)
int64_t r10 = r8 * 3
float zmm8[0x4] = arg1[r8 + 0xe]
float temp0[0x4] = _mm_add_ps(zmm8, zmm8)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0)
uint128_t result_1 = arg1[r8][0x39]
result_1 = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0), temp0)
float zmm6[0x4] = arg1[r8][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[r8][0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(result_1, 0), temp0_2, 0x6c)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_10[0x4] = _mm_add_ps(temp0_6, temp0_9)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(result_1, zx.o(0), 0xe5), temp0_2, 0xc)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x78)
float temp0_18[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0, _mm_shuffle_ps(result_1, _mm_shuffle_ps(temp0, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_14)
float temp0_19[0x4] = _mm_sub_ps(data_142d3f670, temp0_18)
float zmm10[0x4] = (*arg1)[r10 + 0x18]
float result[0x4] = (*arg1)[r10 + 0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[r10 + 0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(result, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm10)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm10)
result_1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), result_1)
result_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm10)
float temp0_44[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc0), temp0_21), result_1)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xea), temp0_23), temp0_44)
zmm10 = zx.o(0)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_10, temp0_19, 2)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_48, 
    _mm_shuffle_ps(temp0_11, _mm_shuffle_ps(temp0_48, zx.o(0), 0x22), 0x31), 0x82)
result_1 = _mm_shuffle_ps(temp0_19, temp0_11, 0xa1)
float temp0_53[0x4] = _mm_shuffle_ps(result_1, zx.o(0), 0x42)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_11, temp0_10, 0x50)
result_1 = _mm_shuffle_ps(result_1, _mm_shuffle_ps(temp0_10, temp0_53, 0x30), 0x82)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, 
    _mm_shuffle_ps(temp0_19, _mm_shuffle_ps(temp0_54, zx.o(0), 0x42), 0x32), 0x82)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc0), temp0_51)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xd5), result_1), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xea), temp0_59), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_51)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), result_1), temp0_69)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_59), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), temp0_51)
float temp0_80[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), result_1), temp0_77)
float temp0_83[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59), temp0_80)
float zmm1[0x4] = *arg8
result_1 = (*arg8)[1]
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_67)
result_1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0), temp0_75), temp0_85)
result = (*arg8)[2]
float zmm4[0x4] = zx.o(*arg8)[0].q | result[0].q << 0x40
float temp0_92[0x4] =
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_83), result_1), zmm4)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xe5)
temp0_93[0] = temp0_93[0] + temp0_92[0]
temp0_92[0].q = temp0_92 u>> 0x40

if (not(zmm9[0] <= 9.99999975e-05f))
    zmm6 = arg1[r8 + 0x15]
    float temp0_94[0x4] = _mm_mul_ps(zmm8, zmm6)
    float temp0_96[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_94, temp0_94[0].q), temp0_94)
    result_1.d = _mm_shuffle_ps(temp0_96, temp0_96, 0xe5).d f+ temp0_96[0]
    float temp0_98[0x4] = _mm_cmpeq_ss(0, result_1.d, 2)
    zmm1 = _mm_and_ps(0x3f800000, temp0_98)
    result = _mm_or_ps(_mm_andnot_ps(temp0_98, 0xbf800000), zmm1)
    float temp0_104[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm8), zmm6)
    float temp0_105[0x4] = __mulps_xmmps_memps(zmm6, data_142d3f690)
    float temp0_106[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc0)
    result_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xdb), temp0_106)
    float temp0_109[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xd5)
    float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_105, temp0_105, 1), temp0_109)
    float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xff), temp0_105)
    result_1 = __mulps_xmmps_memps(result_1, data_142fc92a0)
    float temp0_117[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(temp0_111, data_142fc92b0), _mm_add_ps(result_1, temp0_113))
    float temp0_118[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xea)
    float temp0_122[0x4] = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xf1), temp0_118), 
            data_142fc92c0), 
        temp0_117)
    float temp0_124[0x4] = _mm_mul_ps(_mm_add_ps(temp0_122, temp0_122), zmm4)
    float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xe5)
    temp0_125[0] = temp0_125[0] + temp0_124[0]
    temp0_124[0].q = temp0_124 u>> 0x40
    temp0_125[0] = temp0_125[0] + temp0_124[0]
    zmm10 = temp0_125 ^ data_142d3f780

temp0_92[0] = temp0_92[0] + temp0_93[0]
result = arg5
zmm6 = 0x3f800000

if ((arg7 & 1) != 0)
    zmm6[0] = 1f / temp0_92[0]

result[0] = result[0] * zmm6[0]
result[0] = result[0] * arg4[0]
result[0] = result[0] * arg4[0]
zmm9[0] = zmm9[0] * zmm6[0]
zmm9[0] = zmm9[0] * arg4[0]
zmm9[0] = zmm9[0] + result[0]
zmm9[0] = zmm9[0] * temp0_92[0]
zmm9[0] = zmm9[0] + 1f
zmm6 = 0x3f800000
zmm6[0] = 1f / zmm9[0]
result[0] = result[0] f* arg9.d
zmm9[0] = zmm9[0] * zmm10[0]
result[0] = result[0] - zmm9[0]
result_1 = *arg10
result[0] = result[0] f- result_1.d
result[0] = result[0] * zmm6[0]
temp0_92[0] = temp0_92[0] * result[0]
float temp0_127[0x4] = _mm_mul_ps(zmm4, _mm_shuffle_epi32(temp0_92 ^ data_142d3f780, 0xc0))
result[0] = result[0] f+ result_1.d
*arg10 = result[0]
result = arg1[r8 + 0xe]
result_1 = _mm_mul_ps(zx.o(0), result)
float temp0_129[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0)
float temp0_131[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0x1b), temp0_129)
zmm8 = data_142d3f7c0
float temp0_133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_131, zmm8), result_1)
result_1 = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_pd(result, result, 1), result_1)
zmm9 = data_142d3f7d0
float temp0_138[0x4] = _mm_add_ps(_mm_mul_ps(temp0_136, zmm9), temp0_133)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xaa)
float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0xb1), temp0_139)
zmm10 = data_142d3f7b0
float temp0_145[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_141, zmm10), temp0_138), data_142d3f640), 
    result)
float temp0_146[0x4] = _mm_mul_ps(temp0_145, temp0_145)
result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_146, temp0_146[0].q), temp0_146)
float temp0_149[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
temp0_149[0] = temp0_149[0] f+ result_1.d
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_149[0], 6), 0xffffffff)
result = 0x3f000000
result_1.d = temp0_149.d f* 0.5f
float temp0_152[0x4] = _mm_rsqrt_ss(temp0_149[0], temp0_149[0])
temp0_152[0] = temp0_152[0] * temp0_152[0]
temp0_152[0] = temp0_152[0] f* result_1.d
float zmm7[0x4] = 0x3f000000
zmm7[0] = 0.5f - temp0_152[0]
zmm7[0] = zmm7[0] * temp0_152[0]
zmm7[0] = zmm7[0] + temp0_152[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] f* result_1.d
result[0] = 0.5f - zmm7[0]
result[0] = result[0] * zmm7[0]
result[0] = result[0] + zmm7[0]
float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_145)
float temp0_155[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
result = _mm_and_ps(temp0_154, temp0_155)
arg1[r8 + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_155, data_142d3f660), result)
result = arg1[0xf]
result_1 = _mm_mul_ps(arg1[0xe], result)
float temp0_161[0x4] = _mm_add_ps(_mm_unpackhi_pd(result_1, result_1.q), result_1)
result_1.d = _mm_shuffle_ps(temp0_161, temp0_161, 0xe5).d f+ temp0_161[0]
float temp0_163[0x4] = _mm_cmpeq_ss(0, result_1.d, 2)
result_1 = _mm_and_ps(temp0_163, 0x3f800000)
arg4 = _mm_or_ps(_mm_andnot_ps(temp0_163, 0xbf800000), result_1)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), result)
result = arg1[r8 + 0xe][0]
result_1 = arg1[r8][0x39]
zmm6 = arg1[r8][0x3a]
float zmm5[0x4] = arg1[r10][6]
arg4 = arg1[r10 + 1][0]
float zmm13[0x4] = arg1[r10][5]
zmm7 = _mm_unpacklo_ps(result_1, zmm6[0].q)[0].q | result[0].q << 0x40
zmm1 = zx.o(arg1[r10 + 1][0].q)[0].q | zmm5[0].q << 0x40
float temp0_171[0x4] = _mm_mul_ps(_mm_unpacklo_ps(zmm5, arg4[0].q)[0].q | zmm13[0].q << 0x40, zmm7)
zmm6 = _mm_unpacklo_ps(zmm6, result[0].q)[0].q | result_1.q << 0x40
float temp0_174[0x4] =
    _mm_sub_ps(temp0_171, _mm_mul_ps(zx.o(*(&arg1[r10] + 0x14))[0].q | arg4[0].q << 0x40, zmm6))
float temp0_175[0x4] = _mm_add_ps(temp0_174, temp0_174)
result = arg1[r8][0x3b]
float temp0_178[0x4] = _mm_add_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_175))
float temp0_184[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xd2), zmm7), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xc9), zmm6)), 
    temp0_178)
result_1 = _mm_add_ps(*(arg1 + (r10 << 2) + 0xc0) | (*arg1)[r10 + 0x32][0].q << 0x40, temp0_184)
result = result_1
(*arg1)[r10 + 0x20] = result_1.d
result_1 = _mm_shuffle_ps(result_1, result_1, 0xe5)
result[0].q = result u>> 0x40
(*arg1)[r10 + 0x21] = result_1.d
(*arg1)[r10 + 0x22] = result[0]
zmm6 = arg1[r8][0x3b]
float temp0_187[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
result = arg1[r10]
float temp0_188[0x4] = _mm_mul_ps(temp0_187, result)
result_1 = arg1[r8 + 0xe][0]
result_1 = _mm_shuffle_ps(result_1, result_1, 0)
float temp0_190[0x4] = _mm_unpacklo_ps(arg1[r10][3], arg1[r10][2][0].q)
zmm7 = arg1[r10][1]
zmm1 = temp0_190[0].q | zmm7[0].q << 0x40
float temp0_191[0x4] = _mm_unpacklo_ps(result, zmm7[0].q)
float temp0_192[0x4] = _mm_unpacklo_ps(zmm7, result[0].q)
float temp0_193[0x4] = _mm_shuffle_ps(result, zmm1, 0x20)
zmm7 = temp0_192[0].q | temp0_190[0].q << 0x40
float temp0_197[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_190, temp0_193, 0x24), result_1), zmm8), temp0_188)
result = arg1[r8][0x39]
float temp0_198[0x4] = _mm_shuffle_ps(result, result, 0)
float temp0_201[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(&arg1[r10] + 8))[0].q | temp0_191[0].q << 0x40, temp0_198), zmm9), 
    temp0_197)
result = arg1[r8][0x3a]
arg1[r8 + 0xa] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm7, _mm_shuffle_ps(result, result, 0)), zmm10), temp0_201)
result = arg1[0xb]
float temp0_206[0x4] = _mm_mul_ps(arg1[0xa], result)
result_1 = _mm_add_ps(_mm_unpackhi_pd(temp0_206, temp0_206[0].q), temp0_206)
float temp0_209[0x4] = _mm_shuffle_ps(result_1, result_1, 0xe5)
temp0_209[0] = temp0_209[0] f+ result_1.d
float temp0_210[0x4] = _mm_cmpeq_ss(0, temp0_209[0], 2)
float temp0_211[0x4] = _mm_and_ps(0x3f800000, temp0_210)
zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_210, 0xbf800000), temp0_211)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), result)
return result
