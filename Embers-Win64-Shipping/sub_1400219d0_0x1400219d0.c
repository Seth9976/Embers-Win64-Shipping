// 函数: sub_1400219d0
// 地址: 0x1400219d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38[0x4] = arg8
float var_58[0x4] = arg7
float var_68[0x4] = arg6
float var_a8[0x4] = arg5
_mm_movemask_ps(*arg15)
int64_t r8 = sx.q(arg3)
int64_t rsi = r8 * 3
float zmm9[0x4] = arg1[r8 + 0xe]
float temp0_1[0x4] = _mm_add_ps(zmm9, zmm9)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_1)
float zmm2[0x4] = arg1[r8][0x39]
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_1)
float zmm4[0x4] = arg1[r8][0x3b]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_1)
temp0_1[0].q = temp0_1 u>> 0x40
temp0_1[0] = temp0_1[0] * arg1[r8][0x3a]
float temp0_9[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_5, 0x4e), temp0_3, 0xc)
float temp0_10[0x4] = _mm_insert_ps(temp0_3, temp0_5, 0x88)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xd8)
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_11)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
float temp0_17[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_1, temp0_1, 0x1c), temp0_5, 0x60), temp0_14)
float temp0_18[0x4] = _mm_sub_ps(data_142d3f670, temp0_17)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(arg7, (*arg1)[rsi + 0x19], 0x1d)
float zmm12[0x4] = (*arg1)[rsi + 0x18]
float temp0_20[0x4] = __insertps_xmmps_memd_immb(arg6, (*arg1)[rsi + 0x1a], 0x2b)
float temp0_23[0x4] =
    _mm_blend_ps(_mm_insert_ps(_mm_insert_ps(arg8, temp0_12, 0x4e), temp0_13, 0x14), temp0_18, 4)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc0), zmm12)
float temp0_27[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_18, temp0_12, 0x9c), temp0_13, 0x60)
float temp0_28[0x4] = _mm_insert_ps(temp0_18, temp0_13, 0x8c)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xea), temp0_19), temp0_25)
float temp0_32[0x4] = _mm_insert_ps(temp0_28, temp0_12, 0x20)
float temp0_35[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), temp0_20), temp0_31)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), zmm12)
float temp0_40[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd5), temp0_19), temp0_37)
float temp0_43[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc0), temp0_20), temp0_40)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd5), zmm12)
zmm12 = arg10
arg7 = arg9
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_45)
float temp0_51[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xea), temp0_20), temp0_48)
float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc0), temp0_27)
float temp0_56[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xd5), temp0_32), temp0_53)
float temp0_59[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xea), temp0_23), temp0_56)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xc0), temp0_27)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xd5), temp0_32), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xea), temp0_23), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc0), temp0_27)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd5), temp0_32), temp0_69)
zmm4 = *arg12
float zmm7[0x4] = (*arg12)[1]
float zmm1[0x4] = (*arg12)[2]
arg6 = zx.o(*arg12)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xea), temp0_23), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_59)
float temp0_80[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_67), temp0_77)
float temp0_81[0x4] = _mm_insert_ps(arg6, zmm1, 0x20)
float temp0_85[0x4] =
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_75), temp0_80), temp0_81)
float temp0_86[0x4] = _mm_movehdup_ps(temp0_85)
temp0_86[0] = temp0_86[0] + temp0_85[0]
temp0_85[0].q = temp0_85 u>> 0x40
temp0_86[0] = temp0_86[0] + temp0_85[0]
zmm4 = zx.o(0)
float zmm0[0x4]

if (not(zmm12[0] <= 9.99999975e-05f))
    zmm7 = arg1[r8 + 0x15]
    float temp0_87[0x4] = _mm_mul_ps(zmm9, zmm7)
    float temp0_89[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_87, temp0_87[0].q), temp0_87)
    float temp0_90[0x4] = _mm_movehdup_ps(temp0_89)
    temp0_90[0] = temp0_90[0] + temp0_89[0]
    float temp0_91[0x4] = _mm_cmpeq_ss(0, temp0_90[0], 2)
    zmm0 = _mm_and_ps(0x3f800000, temp0_91)
    zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_91, 0xbf800000), zmm0)
    float temp0_97[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9), zmm7)
    float temp0_98[0x4] = __mulps_xmmps_memps(zmm7, data_142d3f690)
    float temp0_99[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc0)
    float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xdb), temp0_99)
    float temp0_102[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xd5)
    float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_98, temp0_98, 1), temp0_102)
    float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_97, temp0_97, 0xff), temp0_98)
    float temp0_107[0x4] = __mulps_xmmps_memps(temp0_101, data_142fc92a0)
    float temp0_110[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(temp0_104, data_142fc92b0), _mm_add_ps(temp0_107, temp0_106))
    float temp0_111[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xea)
    float temp0_115[0x4] = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xf1), temp0_111), 
            data_142fc92c0), 
        temp0_110)
    float temp0_117[0x4] = _mm_mul_ps(_mm_add_ps(temp0_115, temp0_115), temp0_81)
    float temp0_118[0x4] = _mm_movehdup_ps(temp0_117)
    temp0_118[0] = temp0_118[0] + temp0_117[0]
    temp0_117[0].q = temp0_117 u>> 0x40
    temp0_118[0] = temp0_118[0] + temp0_117[0]
    zmm4 = temp0_118 ^ data_142d3f780

zmm2 = 0x3f800000

if ((arg11 & 1) != 0)
    zmm2[0] = 1f / temp0_86[0]

arg7[0] = arg7[0] * zmm2[0]
arg7[0] = arg7[0] * arg4[0]
arg7[0] = arg7[0] * arg4[0]
zmm12[0] = zmm12[0] * zmm2[0]
zmm12[0] = zmm12[0] * arg4[0]
zmm12[0] = zmm12[0] + arg7[0]
zmm12[0] = zmm12[0] * temp0_86[0]
zmm12[0] = zmm12[0] + 1f
zmm1 = 0x3f800000
zmm1[0] = 1f / zmm12[0]
arg7[0] = arg7[0] * arg13[0]
zmm12[0] = zmm12[0] * zmm4[0]
arg7[0] = arg7[0] - zmm12[0]
arg8 = *arg14
arg7[0] = arg7[0] - arg8[0]
arg7[0] = arg7[0] * zmm1[0]
temp0_86[0] = temp0_86[0] * arg7[0]
float temp0_120[0x4] = _mm_mul_ps(temp0_81, _mm_shuffle_epi32(temp0_86 ^ data_142d3f780, 0xc0))
zmm0 = arg1[r8 + 0xe]
float temp0_121[0x4] = _mm_mul_ps(zx.o(0), zmm0)
float temp0_122[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0)
float temp0_124[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_122)
zmm12 = data_142d3f7c0
float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, zmm12), temp0_121)
float temp0_127[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x55)
float temp0_129[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_127)
zmm9 = data_142d3f7d0
float temp0_131[0x4] = _mm_add_ps(_mm_mul_ps(temp0_129, zmm9), temp0_126)
float temp0_132[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xaa)
float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_132)
float zmm8[0x4] = data_142d3f7b0
float temp0_138[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_134, zmm8), temp0_131), data_142d3f640), zmm0)
float temp0_139[0x4] = _mm_mul_ps(temp0_138, temp0_138)
float temp0_141[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_139, temp0_139[0].q), temp0_139)
float temp0_142[0x4] = _mm_movehdup_ps(temp0_141)
temp0_142[0] = temp0_142[0] + temp0_141[0]
zmm0 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_142[0], 6), 0xffffffff)
zmm1 = 0x3f000000
temp0_142[0] = temp0_142[0] * 0.5f
float temp0_145[0x4] = _mm_rsqrt_ss(temp0_142[0], temp0_142[0])
temp0_145[0] = temp0_145[0] * temp0_145[0]
temp0_145[0] = temp0_145[0] * temp0_142[0]
zmm2 = 0x3f000000
zmm2[0] = 0.5f - temp0_145[0]
zmm2[0] = zmm2[0] * temp0_145[0]
zmm2[0] = zmm2[0] + temp0_145[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm2[0] = zmm2[0] * temp0_142[0]
zmm1[0] = 0.5f - zmm2[0]
zmm1[0] = zmm1[0] * zmm2[0]
zmm1[0] = zmm1[0] + zmm2[0]
float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_138)
float temp0_148[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm1 = _mm_and_ps(temp0_147, temp0_148)
arg1[r8 + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_148, data_142d3f660), zmm1)
zmm0 = arg1[0xf]
float temp0_152[0x4] = _mm_mul_ps(arg1[0xe], zmm0)
float temp0_154[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_152, temp0_152[0].q), temp0_152)
float temp0_155[0x4] = _mm_movehdup_ps(temp0_154)
temp0_155[0] = temp0_155[0] + temp0_154[0]
float temp0_156[0x4] = _mm_cmpeq_ss(0, temp0_155[0], 2)
zmm1 = _mm_and_ps(temp0_156, 0x3f800000)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_156, 0xbf800000), zmm1)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm0)
zmm2 = arg1[r8 + 0xe][0]
zmm1 = arg1[r8][0x39]
zmm0 = arg1[r8][0x3a]
zmm4 = arg1[rsi][6]
arg4 = arg1[rsi + 1][0]
float temp0_163[0x4] = _mm_insert_ps(_mm_insert_ps(zmm1, zmm0, 0x10), zmm2, 0x20)
float temp0_164[0x4] = _mm_insert_ps(zmm0, zmm2, 0x10)
float temp0_165[0x4] = _mm_insert_ps(zx.o(arg1[rsi + 1][0].q), zmm4, 0x20)
float temp0_168[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm4, arg4, 0x10), arg1[rsi][5], 0x20), temp0_163)
float temp0_169[0x4] = _mm_insert_ps(temp0_164, zmm1, 0x20)
float temp0_172[0x4] = _mm_sub_ps(temp0_168, 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(&arg1[rsi] + 0x14)), arg4, 0x20), temp0_169))
float temp0_173[0x4] = _mm_add_ps(temp0_172, temp0_172)
zmm1 = arg1[r8][0x3b]
float temp0_176[0x4] =
    _mm_add_ps(temp0_165, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), temp0_173))
float temp0_182[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0xd2), temp0_163), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0xc9), temp0_169)), 
    temp0_176)
float temp0_184[0x4] = _mm_add_ps(
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (rsi << 2) + 0xc0)), (*arg1)[rsi + 0x32], 0x20), 
    temp0_182)
(*arg1)[rsi + 0x20] = temp0_184[0]
(*arg1)[rsi + 0x21] = __extractps_memd_xmmps_immb(temp0_184, 1)
(*arg1)[rsi + 0x22] = __extractps_memd_xmmps_immb(temp0_184, 2)
arg7[0] = arg7[0] + arg8[0]
*arg14 = arg7[0]
zmm4 = arg1[r8][0x3b]
float temp0_187[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm7 = arg1[rsi]
float temp0_188[0x4] = _mm_mul_ps(temp0_187, zmm7)
arg5 = arg1[r8 + 0xe][0]
float temp0_189[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
float zmm5[0x4] = arg1[rsi][3]
zmm1 = arg1[rsi][2]
zmm2 = arg1[rsi][1]
float temp0_195[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, zmm1, 0x10), zmm2, 0x20), zmm7, 0x30), 
            temp0_189), 
        zmm12), 
    temp0_188)
zmm4 = arg1[r8][0x39]
float temp0_196[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_201[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(&arg1[rsi] + 8)), zmm7, 0x20), zmm2, 0x30), 
            temp0_196), 
        zmm9), 
    temp0_195)
arg4 = arg1[r8][0x3a]
float temp0_202[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
arg1[r8 + 0xa] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm2, zmm7, 0x10), zmm5, 0x20), zmm1, 0x30), 
            temp0_202), 
        zmm8), 
    temp0_201)
zmm1 = arg1[0xb]
float temp0_209[0x4] = _mm_mul_ps(arg1[0xa], zmm1)
float temp0_211[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_209, temp0_209[0].q), temp0_209)
float temp0_212[0x4] = _mm_movehdup_ps(temp0_211)
temp0_212[0] = temp0_212[0] + temp0_211[0]
float temp0_213[0x4] = _mm_cmpeq_ss(0, temp0_212[0], 2)
float zmm14[0x4] = _mm_and_ps(0x3f800000, temp0_213)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_213, 0xbf800000), zmm14)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
return &arg1[r8 + 0xe]
