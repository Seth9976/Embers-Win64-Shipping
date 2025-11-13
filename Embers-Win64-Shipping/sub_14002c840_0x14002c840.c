// 函数: sub_14002c840
// 地址: 0x14002c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_1 = arg4[0]
float var_dc = arg2[0]
uint32_t temp0 = _mm_movemask_ps(*arg9)
float zmm6[0x4] = arg1[0xe]
float temp0_1[0x4] = _mm_add_ps(zmm6, zmm6)
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_1)
float zmm5[0x4] = (*arg1)[0x39]
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_1)
float zmm7[0x4] = (*arg1)[0x3b]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_1)
temp0_1[0].q = temp0_1 u>> 0x40
temp0_1[0] = temp0_1[0] * (*arg1)[0x3a]
float temp0_9[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_5, 0), temp0_3, 0x6c)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_5, zx.o(0), 0xe5), temp0_3, 0xc)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x78)
float temp0_19[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0_1, _mm_shuffle_ps(temp0_5, _mm_shuffle_ps(temp0_1, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_15)
float zmm10[0x4] = data_142d3f670
float temp0_20[0x4] = _mm_sub_ps(zmm10, temp0_19)
float zmm9[0x4] = arg1[6][0]
zmm7 = (*arg1)[0x1a]
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_24[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xc0), zmm9)
float temp0_29[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_22), temp0_26)
float temp0_32[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_24), temp0_29)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm9)
float temp0_37[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xd5), temp0_22), temp0_34)
float temp0_40[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_24), temp0_37)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm9)
float temp0_45[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_22), temp0_42)
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xea), temp0_24), temp0_45)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_11, temp0_20, 2)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, 
    _mm_shuffle_ps(temp0_12, _mm_shuffle_ps(temp0_49, zx.o(0), 0x22), 0x31), 0x82)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_20, temp0_12, 0xa1)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, zx.o(0), 0x42)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_12, temp0_11, 0x50)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, _mm_shuffle_ps(temp0_11, temp0_54, 0x30), 0x82)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_55, 
    _mm_shuffle_ps(temp0_20, _mm_shuffle_ps(temp0_55, zx.o(0), 0x42), 0x32), 0x82)
float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xc0), temp0_52)
float temp0_65[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd5), temp0_57), temp0_62)
float temp0_68[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xea), temp0_60), temp0_65)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc0), temp0_52)
float temp0_73[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd5), temp0_57), temp0_70)
float temp0_76[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xea), temp0_60), temp0_73)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc0), temp0_52)
float temp0_81[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd5), temp0_57), temp0_78)
float temp0_84[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xea), temp0_60), temp0_81)
zmm6 = arg1[0xf]
float temp0_85[0x4] = _mm_add_ps(zmm6, zmm6)
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_85)
zmm5 = (*arg1)[0x3d]
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_85)
zmm7 = (*arg1)[0x3f]
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_85)
temp0_85[0].q = temp0_85 u>> 0x40
temp0_85[0] = temp0_85[0] * (*arg1)[0x3e]
float temp0_93[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_89, 0), temp0_87, 0x6c)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0x78)
float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_94)
float temp0_96[0x4] = _mm_sub_ps(temp0_94, temp0_91)
float temp0_98[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, zx.o(0), 0xe5), temp0_87, 0xc)
float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x78)
float temp0_104[0x4] = _mm_sub_ps(zmm10, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_85, 
            _mm_shuffle_ps(temp0_89, _mm_shuffle_ps(temp0_85, zx.o(0), 0x40), 0x31), 0x80), 
        temp0_99))
zmm6 = (*arg1)[0x1d]
float zmm13[0x4] = (*arg1)[0x1b]
float temp0_106[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_108[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm6, zx.o(0), 0x30), 0x84)
float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xc0), zmm13)
float temp0_113[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xea), temp0_106), temp0_110)
float temp0_116[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd5), temp0_108), temp0_113)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xea), zmm13)
float temp0_121[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xd5), temp0_106), temp0_118)
float temp0_124[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xc0), temp0_108), temp0_121)
float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xd5), zmm13)
float temp0_129[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc0), temp0_106), temp0_126)
float temp0_132[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xea), temp0_108), temp0_129)
float temp0_133[0x4] = _mm_shuffle_ps(temp0_95, temp0_104, 2)
float temp0_136[0x4] = _mm_shuffle_ps(temp0_133, 
    _mm_shuffle_ps(temp0_96, _mm_shuffle_ps(temp0_133, zx.o(0), 0x22), 0x31), 0x82)
float temp0_137[0x4] = _mm_shuffle_ps(temp0_104, temp0_96, 0xa1)
float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, zx.o(0), 0x42)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_96, temp0_95, 0x50)
float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, _mm_shuffle_ps(temp0_95, temp0_138, 0x30), 0x82)
float temp0_144[0x4] = _mm_shuffle_ps(temp0_139, 
    _mm_shuffle_ps(temp0_104, _mm_shuffle_ps(temp0_139, zx.o(0), 0x42), 0x32), 0x82)
float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xc0), temp0_136)
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xd5), temp0_141), temp0_146)
float temp0_152[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xea), temp0_144), temp0_149)
float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xc0), temp0_136)
float temp0_157[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xd5), temp0_141), temp0_154)
float temp0_160[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xea), temp0_144), temp0_157)
float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xc0), temp0_136)
float temp0_165[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xd5), temp0_141), temp0_162)
float temp0_168[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xea), temp0_144), temp0_165)
zmm13 = zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40
arg2 = zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40
float var_b8[0x4] = arg2
float temp0_169[0x4] = _mm_sub_ps(zmm13, arg2)
arg2 = (*arg6)[2]
float zmm14[0x4] = *arg6
float temp0_170[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xc9)
float var_c8[0x4] = arg2
float temp0_171[0x4] = _mm_unpacklo_ps(arg2, zmm14[0].q)
zmm7 = (*arg6)[1]
float var_d8[0x4] = zmm7
arg2 = temp0_171[0].q | zmm7[0].q << 0x40
float temp0_172[0x4] = _mm_mul_ps(temp0_170, arg2)
float temp0_173[0x4] = _mm_shuffle_ps(temp0_169, temp0_169, 0xd2)
float zmm11[0x4] = zx.o(*(arg6 + 4))[0].q | zmm14[0].q << 0x40
float temp0_175[0x4] = _mm_sub_ps(temp0_172, _mm_mul_ps(temp0_173, zmm11))
float zmm8[0x4] = zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40
zmm10 = zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40
float temp0_176[0x4] = _mm_sub_ps(zmm8, zmm10)
float temp0_181[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_176, temp0_176, 0xc9), arg2), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_176, temp0_176, 0xd2), zmm11))
float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xc0), temp0_68)
float temp0_186[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xd5), temp0_76), temp0_183)
float temp0_189[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xea), temp0_84), temp0_186)
float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0xc0), temp0_152)
float temp0_194[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0xd5), temp0_160), temp0_191)
float temp0_197[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0xea), temp0_168), temp0_194)
float temp0_198[0x4] = _mm_mul_ps(temp0_175, temp0_189)
float temp0_199[0x4] = _mm_shuffle_ps(temp0_198, temp0_198, 0xe5)
temp0_199[0] = temp0_199[0] + temp0_198[0]
temp0_198[0].q = temp0_198 u>> 0x40
temp0_199[0] = temp0_199[0] + temp0_198[0]
float temp0_200[0x4] = _mm_mul_ps(temp0_181, temp0_197)
float temp0_201[0x4] = _mm_shuffle_ps(temp0_200, temp0_200, 0xe5)
temp0_201[0] = temp0_201[0] + temp0_200[0]
temp0_200[0].q = temp0_200 u>> 0x40
temp0_201[0] = temp0_201[0] + temp0_200[0]
float zmm4[0x4] = (*arg1)[0x1e]
temp0_199[0] = temp0_199[0] + zmm4[0]
zmm11 = (*arg1)[0x1f]
temp0_199[0] = temp0_199[0] + zmm11[0]
temp0_199[0] = temp0_199[0] + temp0_201[0]
float (* rax_1)[0x4]
rax_1.b = arg5
float zmm12[0x4] = arg7
float result[0x4]
float result_2[0x4]

if (temp0 != 0xf)
    result = result_1
    zmm7 = zx.o(0)
    
    if (not(result[0] <= 9.99999975e-05f))
        float temp0_382[0x4] =
            _mm_sub_ps(zmm13, zx.o(arg1[0x17][0].q)[0].q | (*arg1)[0x5e][0].q << 0x40)
        arg4 = data_142e6da00
        float temp0_386[0x4] = _mm_sub_ps(_mm_div_ps(temp0_382, arg4), 
            _mm_div_ps(_mm_sub_ps(zmm8, zx.o(*(arg1 + 0x17c))[0].q | (*arg1)[0x61][0].q << 0x40), 
                arg4))
        float temp0_389[0x4] = _mm_mul_ps(
            __unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm14, var_d8), var_c8), temp0_386)
        zmm7 = _mm_shuffle_ps(temp0_389, temp0_389, 0xe5)
        zmm7[0] = zmm7[0] + temp0_389[0]
        temp0_389[0].q = temp0_389 u>> 0x40
        zmm7[0] = zmm7[0] + temp0_389[0]
    
    zmm5 = 0x3f800000
    
    if ((rax_1.b & 1) != 0)
        zmm4[0] = zmm4[0] + zmm11[0]
        zmm5 = 0x3f800000
        zmm5[0] = 1f / zmm4[0]
    
    arg3[0] = arg3[0] * zmm5[0]
    result[0] = result[0] * zmm5[0]
    arg4 = var_dc
    arg3[0] = arg3[0] * arg4[0]
    arg3[0] = arg3[0] * arg4[0]
    result[0] = result[0] * arg4[0]
    zmm7[0] = zmm7[0] * result[0]
    result[0] = result[0] + arg3[0]
    temp0_199[0] = temp0_199[0] * result[0]
    temp0_199[0] = temp0_199[0] + 1f
    zmm5 = 0x3f800000
    zmm5[0] = 1f / temp0_199[0]
    arg3[0] = arg3[0] * zmm12[0]
    arg3[0] = arg3[0] - zmm7[0]
    arg4 = *arg8
    arg3[0] = arg3[0] - arg4[0]
    arg3[0] = arg3[0] * zmm5[0]
    zmm4[0] = zmm4[0] * arg3[0]
    float temp0_391[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc0)
    zmm14 = __unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm14, var_d8), var_c8)
    float temp0_394[0x4] = _mm_mul_ps(temp0_391, zmm14)
    zmm11[0] = zmm11[0] * arg3[0]
    zmm5 = data_142d3f780
    float temp0_396[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm11 ^ zmm5, 0xc0), zmm14)
    float temp0_398[0x4] = _mm_mul_ps(temp0_189, _mm_shuffle_ps(arg3, arg3, 0xc0))
    float temp0_400[0x4] = _mm_mul_ps(temp0_197, _mm_shuffle_epi32(zmm5 ^ arg3, 0xc0))
    arg3[0] = arg3[0] + arg4[0]
    *arg8 = arg3[0]
    float temp0_401[0x4] = _mm_add_ps(var_b8, temp0_394)
    float temp0_402[0x4] = _mm_add_ps(temp0_396, zmm10)
    arg1[0xc] = _mm_shuffle_ps(temp0_401, _mm_shuffle_ps(temp0_402, temp0_401, 0x20), 0x24)
    float temp0_405[0x4] = _mm_shuffle_ps(temp0_402, temp0_402, 0xe5)
    arg4 = _mm_unpackhi_pd(temp0_402, temp0_402[0].q)
    arg1[0xd][0] = temp0_405[0]
    (*arg1)[0x35] = arg4[0]
    zmm5 = arg1[0xe]
    zmm12 = arg1[0xf]
    float temp0_407[0x4] = _mm_mul_ps(zmm5, zx.o(0))
    float temp0_408[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0)
    float temp0_410[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), temp0_408)
    result = data_142d3f7c0
    float temp0_412[0x4] = _mm_add_ps(_mm_mul_ps(temp0_410, result), temp0_407)
    float temp0_413[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0x55)
    float temp0_415[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm5, zmm5, 1), temp0_413)
    zmm9 = data_142d3f7d0
    float temp0_417[0x4] = _mm_add_ps(_mm_mul_ps(temp0_415, zmm9), temp0_412)
    float temp0_418[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0xaa)
    float temp0_420[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xb1), temp0_418)
    zmm10 = data_142d3f7b0
    float temp0_422[0x4] = _mm_add_ps(_mm_mul_ps(temp0_420, zmm10), temp0_417)
    zmm6 = data_142d3f640
    float temp0_423[0x4] = _mm_mul_ps(temp0_422, zmm6)
    float temp0_424[0x4] = _mm_mul_ps(zx.o(0), zmm12)
    float temp0_425[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0)
    result_2 = result
    float temp0_429[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_425), result), temp0_424)
    float temp0_430[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0x55)
    float temp0_434[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm12, zmm12, 1), temp0_430), zmm9), temp0_429)
    float temp0_435[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0xaa)
    float temp0_440[0x4] = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), temp0_435), zmm10), 
            temp0_434), 
        zmm6)
    float temp0_441[0x4] = _mm_add_ps(temp0_423, zmm5)
    float temp0_442[0x4] = _mm_mul_ps(temp0_441, temp0_441)
    float temp0_444[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_442, temp0_442[0].q), temp0_442)
    float temp0_445[0x4] = _mm_shuffle_ps(temp0_444, temp0_444, 0xe5)
    temp0_445[0] = temp0_445[0] + temp0_444[0]
    float temp0_446[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_445[0], 6)
    zmm6 = 0x3f000000
    temp0_445[0] = temp0_445[0] * 0.5f
    float temp0_447[0x4] = _mm_rsqrt_ss(temp0_445[0], temp0_445[0])
    temp0_447[0] = temp0_447[0] * temp0_447[0]
    temp0_447[0] = temp0_447[0] * temp0_445[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - temp0_447[0]
    zmm7[0] = zmm7[0] * temp0_447[0]
    zmm7[0] = zmm7[0] + temp0_447[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] * temp0_445[0]
    arg3 = 0x3f000000
    arg3[0] = 0.5f - zmm7[0]
    zmm5 = _mm_andnot_ps(temp0_446, 0xffffffff)
    arg3[0] = arg3[0] * zmm7[0]
    arg3[0] = arg3[0] + zmm7[0]
    float temp0_450[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_441)
    float temp0_451[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    arg2 = data_142d3f660
    arg3 = _mm_and_ps(temp0_450, temp0_451)
    zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_451, arg2), arg3)
    float temp0_455[0x4] = _mm_add_ps(temp0_440, zmm12)
    float temp0_456[0x4] = _mm_mul_ps(temp0_455, temp0_455)
    float temp0_458[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_456, temp0_456[0].q), temp0_456)
    float temp0_459[0x4] = _mm_shuffle_ps(temp0_458, temp0_458, 0xe5)
    temp0_459[0] = temp0_459[0] + temp0_458[0]
    zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_459[0], 6), 0xffffffff)
    temp0_459[0] = temp0_459[0] * 0.5f
    float temp0_462[0x4] = _mm_rsqrt_ss(temp0_459[0], temp0_459[0])
    temp0_462[0] = temp0_462[0] * temp0_462[0]
    temp0_462[0] = temp0_462[0] * temp0_459[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - temp0_462[0]
    zmm7[0] = zmm7[0] * temp0_462[0]
    zmm7[0] = zmm7[0] + temp0_462[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] * temp0_459[0]
    zmm6[0] = 0.5f - zmm7[0]
    zmm6[0] = zmm6[0] * zmm7[0]
    zmm6[0] = zmm6[0] + zmm7[0]
    float temp0_464[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_455)
    float temp0_465[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    zmm6 = _mm_and_ps(temp0_464, temp0_465)
    zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_465, arg2), zmm6)
    arg1[0xe] = zmm5
    result = _mm_shuffle_epi32(zmm5, 0xc9)
    float temp0_470[0x4] = _mm_mul_ps(zmm5, zmm14)
    float temp0_472[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_470, temp0_470[0].q), temp0_470)
    float temp0_473[0x4] = _mm_shuffle_ps(temp0_472, temp0_472, 0xe5)
    temp0_473[0] = temp0_473[0] + temp0_472[0]
    float temp0_474[0x4] = _mm_cmpeq_ss(0, temp0_473[0], 2)
    arg3 = _mm_and_ps(temp0_474, 0x3f800000)
    arg2 = _mm_or_ps(_mm_andnot_ps(temp0_474, 0xbf800000), arg3)
    float temp0_479[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm14)
    arg1[0xf] = temp0_479
    arg3 = (*arg1)[6]
    arg4 = arg1[1][0]
    zmm7 = zx.o(arg1[1][0].q)[0].q | arg3[0].q << 0x40
    arg3 = _mm_unpacklo_ps(arg3, arg4[0].q)[0].q | (*arg1)[5][0].q << 0x40
    zmm6 = zx.o(*(arg1 + 0x14))[0].q | arg4[0].q << 0x40
    arg4 = _mm_shuffle_epi32(zmm5, 0xd2)
    float temp0_484[0x4] = _mm_sub_ps(_mm_mul_ps(arg3, result), _mm_mul_ps(zmm6, arg4))
    zmm5 = _mm_shuffle_epi32(zmm5, 0xff)
    float temp0_486[0x4] = _mm_add_ps(temp0_484, temp0_484)
    float temp0_488[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, temp0_486))
    float temp0_495[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_486, temp0_486, 0xd2), result), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_486, temp0_486, 0xc9), arg4)), 
            temp0_488), 
        temp0_401)
    result = (*arg1)[0x12]
    arg3 = arg1[4][0]
    zmm6 = (*arg1)[0x11]
    float temp0_496[0x4] = _mm_shuffle_ps(temp0_479, temp0_479, 0xc9)
    zmm7 = zx.o(arg1[4][0].q)[0].q | result[0].q << 0x40
    float temp0_498[0x4] =
        _mm_mul_ps(_mm_unpacklo_ps(result, arg3[0].q)[0].q | zmm6[0].q << 0x40, temp0_496)
    zmm6 = zx.o(*(arg1 + 0x44))[0].q | arg3[0].q << 0x40
    float temp0_499[0x4] = _mm_shuffle_ps(temp0_479, temp0_479, 0xd2)
    float temp0_501[0x4] = _mm_sub_ps(temp0_498, _mm_mul_ps(zmm6, temp0_499))
    float temp0_502[0x4] = _mm_add_ps(temp0_501, temp0_501)
    float temp0_505[0x4] =
        _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(temp0_479, temp0_479, 0xff), temp0_502))
    float temp0_512[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_502, temp0_502, 0xd2), temp0_496), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_502, temp0_502, 0xc9), temp0_499)), 
            temp0_505), 
        temp0_402)
    arg1[8] = _mm_shuffle_ps(temp0_495, _mm_shuffle_ps(temp0_512, temp0_495, 0x20), 0x24)
    float temp0_515[0x4] = _mm_shuffle_ps(temp0_512, temp0_512, 0xe5)
    temp0_512[0].q = temp0_512 u>> 0x40
    arg1[9][0] = temp0_515[0]
    (*arg1)[0x25] = temp0_512[0]
    arg2 = (*arg1)[0x3b]
    float temp0_516[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
    arg4 = *arg1
    float temp0_517[0x4] = _mm_mul_ps(temp0_516, arg4)
    arg3 = arg1[0xe][0]
    float temp0_518[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
    result = (*arg1)[1]
    zmm6 = temp0_518[0].q | result[0].q << 0x40
    float temp0_519[0x4] = _mm_unpacklo_ps(arg4, result[0].q)
    float temp0_520[0x4] = _mm_unpacklo_ps(result, arg4[0].q)
    float temp0_521[0x4] = _mm_shuffle_ps(arg4, zmm6, 0x20)
    zmm6 = (*arg1)[0x39]
    float temp0_522[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    result = temp0_520[0].q | temp0_518[0].q << 0x40
    float temp0_526[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_518, temp0_521, 0x24), temp0_522), result_2), 
        temp0_517)
    float temp0_527[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_530[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_519[0].q << 0x40, temp0_527), zmm9), 
        temp0_526)
    arg3 = (*arg1)[0x3a]
    float temp0_534[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(result, _mm_shuffle_ps(arg3, arg3, 0)), zmm10), temp0_530)
    arg3 = (*arg1)[0x3f]
    float temp0_535[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    arg4 = arg1[3]
    float temp0_536[0x4] = _mm_mul_ps(temp0_535, arg4)
    float temp0_537[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
    arg2 = (*arg1)[0xd]
    zmm6 = temp0_537[0].q | arg2[0].q << 0x40
    float temp0_538[0x4] = _mm_unpacklo_ps(arg4, arg2[0].q)
    float temp0_539[0x4] = _mm_unpacklo_ps(arg2, arg4[0].q)
    float temp0_540[0x4] = _mm_shuffle_ps(arg4, zmm6, 0x20)
    arg2 = temp0_539[0].q | temp0_537[0].q << 0x40
    float temp0_541[0x4] = _mm_shuffle_ps(temp0_537, temp0_540, 0x24)
    arg4 = arg1[0xf][0]
    float temp0_545[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(temp0_541, _mm_shuffle_ps(arg4, arg4, 0)), result_2), temp0_536)
    arg4 = (*arg1)[0x3d]
    float temp0_549[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_538[0].q << 0x40, 
                _mm_shuffle_ps(arg4, arg4, 0)), 
            zmm9), 
        temp0_545)
    arg4 = (*arg1)[0x3e]
    arg2 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg2, _mm_shuffle_ps(arg4, arg4, 0)), zmm10), temp0_549)
    arg1[0xa] = temp0_534
    float temp0_554[0x4] = _mm_mul_ps(temp0_534, arg2)
    float temp0_556[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_554, temp0_554[0].q), temp0_554)
    result = _mm_shuffle_ps(temp0_556, temp0_556, 0xe5)
    result[0] = result[0] + temp0_556[0]
    float temp0_558[0x4] = _mm_cmpeq_ss(0, result[0], 2)
    float temp0_559[0x4] = _mm_and_ps(0x3f800000, temp0_558)
    arg3 = _mm_or_ps(_mm_andnot_ps(temp0_558, 0xbf800000), temp0_559)
else
    zmm7 = zx.o(0)
    result = result_1
    
    if (not(result[0] <= 9.99999975e-05f))
        float temp0_202[0x4] =
            _mm_sub_ps(zmm13, zx.o(arg1[0x17][0].q)[0].q | (*arg1)[0x5e][0].q << 0x40)
        arg4 = data_142e6da00
        float temp0_206[0x4] = _mm_sub_ps(_mm_div_ps(temp0_202, arg4), 
            _mm_div_ps(_mm_sub_ps(zmm8, zx.o(*(arg1 + 0x17c))[0].q | (*arg1)[0x61][0].q << 0x40), 
                arg4))
        float temp0_209[0x4] = _mm_mul_ps(
            __unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm14, var_d8), var_c8), temp0_206)
        zmm7 = _mm_shuffle_ps(temp0_209, temp0_209, 0xe5)
        zmm7[0] = zmm7[0] + temp0_209[0]
        temp0_209[0].q = temp0_209 u>> 0x40
        zmm7[0] = zmm7[0] + temp0_209[0]
    
    zmm5 = 0x3f800000
    
    if ((rax_1.b & 1) != 0)
        zmm4[0] = zmm4[0] + zmm11[0]
        zmm5 = 0x3f800000
        zmm5[0] = 1f / zmm4[0]
    
    arg3[0] = arg3[0] * zmm5[0]
    result[0] = result[0] * zmm5[0]
    arg4 = var_dc
    arg3[0] = arg3[0] * arg4[0]
    arg3[0] = arg3[0] * arg4[0]
    result[0] = result[0] * arg4[0]
    zmm7[0] = zmm7[0] * result[0]
    result[0] = result[0] + arg3[0]
    temp0_199[0] = temp0_199[0] * result[0]
    temp0_199[0] = temp0_199[0] + 1f
    zmm5 = 0x3f800000
    zmm5[0] = 1f / temp0_199[0]
    arg3[0] = arg3[0] * zmm12[0]
    arg3[0] = arg3[0] - zmm7[0]
    arg4 = *arg8
    arg3[0] = arg3[0] - arg4[0]
    arg3[0] = arg3[0] * zmm5[0]
    zmm4[0] = zmm4[0] * arg3[0]
    float temp0_211[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc0)
    zmm14 = __unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm14, var_d8), var_c8)
    float temp0_214[0x4] = _mm_mul_ps(temp0_211, zmm14)
    zmm11[0] = zmm11[0] * arg3[0]
    zmm5 = data_142d3f780
    float temp0_216[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm11 ^ zmm5, 0xc0), zmm14)
    float temp0_218[0x4] = _mm_mul_ps(temp0_189, _mm_shuffle_ps(arg3, arg3, 0xc0))
    float temp0_220[0x4] = _mm_mul_ps(temp0_197, _mm_shuffle_epi32(zmm5 ^ arg3, 0xc0))
    arg3[0] = arg3[0] + arg4[0]
    *arg8 = arg3[0]
    float temp0_221[0x4] = _mm_add_ps(var_b8, temp0_214)
    float temp0_222[0x4] = _mm_add_ps(temp0_216, zmm10)
    arg1[0xc] = _mm_shuffle_ps(temp0_221, _mm_shuffle_ps(temp0_222, temp0_221, 0x20), 0x24)
    float temp0_225[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xe5)
    arg4 = _mm_unpackhi_pd(temp0_222, temp0_222[0].q)
    arg1[0xd][0] = temp0_225[0]
    (*arg1)[0x35] = arg4[0]
    zmm5 = arg1[0xe]
    zmm13 = arg1[0xf]
    float temp0_227[0x4] = _mm_mul_ps(zmm5, zx.o(0))
    float temp0_228[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0)
    float temp0_230[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), temp0_228)
    result = data_142d3f7c0
    float temp0_232[0x4] = _mm_add_ps(_mm_mul_ps(temp0_230, result), temp0_227)
    float temp0_233[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0x55)
    float temp0_235[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm5, zmm5, 1), temp0_233)
    zmm10 = data_142d3f7d0
    float temp0_237[0x4] = _mm_add_ps(_mm_mul_ps(temp0_235, zmm10), temp0_232)
    float temp0_238[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0xaa)
    float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xb1), temp0_238)
    zmm11 = data_142d3f7b0
    float temp0_242[0x4] = _mm_add_ps(_mm_mul_ps(temp0_240, zmm11), temp0_237)
    zmm6 = data_142d3f640
    float temp0_243[0x4] = _mm_mul_ps(temp0_242, zmm6)
    float temp0_244[0x4] = _mm_mul_ps(zx.o(0), zmm13)
    float temp0_245[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0)
    result_2 = result
    float temp0_249[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_245), result), temp0_244)
    float temp0_250[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0x55)
    float temp0_254[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_250), zmm10), temp0_249)
    float temp0_255[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xaa)
    float temp0_260[0x4] = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_255), zmm11), 
            temp0_254), 
        zmm6)
    float temp0_261[0x4] = _mm_add_ps(temp0_243, zmm5)
    float temp0_262[0x4] = _mm_mul_ps(temp0_261, temp0_261)
    float temp0_264[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_262, temp0_262[0].q), temp0_262)
    float temp0_265[0x4] = _mm_shuffle_ps(temp0_264, temp0_264, 0xe5)
    temp0_265[0] = temp0_265[0] + temp0_264[0]
    float temp0_266[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_265[0], 6)
    zmm6 = 0x3f000000
    temp0_265[0] = temp0_265[0] * 0.5f
    float temp0_267[0x4] = _mm_rsqrt_ss(temp0_265[0], temp0_265[0])
    temp0_267[0] = temp0_267[0] * temp0_267[0]
    temp0_267[0] = temp0_267[0] * temp0_265[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - temp0_267[0]
    zmm7[0] = zmm7[0] * temp0_267[0]
    zmm7[0] = zmm7[0] + temp0_267[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] * temp0_265[0]
    arg3 = 0x3f000000
    arg3[0] = 0.5f - zmm7[0]
    zmm5 = _mm_andnot_ps(temp0_266, 0xffffffff)
    arg3[0] = arg3[0] * zmm7[0]
    arg3[0] = arg3[0] + zmm7[0]
    float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_261)
    float temp0_271[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    arg2 = data_142d3f660
    arg3 = _mm_and_ps(temp0_270, temp0_271)
    zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_271, arg2), arg3)
    float temp0_275[0x4] = _mm_add_ps(temp0_260, zmm13)
    float temp0_276[0x4] = _mm_mul_ps(temp0_275, temp0_275)
    float temp0_278[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_276, temp0_276[0].q), temp0_276)
    float temp0_279[0x4] = _mm_shuffle_ps(temp0_278, temp0_278, 0xe5)
    temp0_279[0] = temp0_279[0] + temp0_278[0]
    zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_279[0], 6), 0xffffffff)
    temp0_279[0] = temp0_279[0] * 0.5f
    float temp0_282[0x4] = _mm_rsqrt_ss(temp0_279[0], temp0_279[0])
    temp0_282[0] = temp0_282[0] * temp0_282[0]
    temp0_282[0] = temp0_282[0] * temp0_279[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - temp0_282[0]
    zmm7[0] = zmm7[0] * temp0_282[0]
    zmm7[0] = zmm7[0] + temp0_282[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm7[0] = zmm7[0] * temp0_279[0]
    zmm6[0] = 0.5f - zmm7[0]
    zmm6[0] = zmm6[0] * zmm7[0]
    zmm6[0] = zmm6[0] + zmm7[0]
    float temp0_284[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_275)
    float temp0_285[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    zmm6 = _mm_and_ps(temp0_284, temp0_285)
    zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_285, arg2), zmm6)
    arg1[0xe] = zmm5
    result = _mm_shuffle_epi32(zmm5, 0xc9)
    float temp0_290[0x4] = _mm_mul_ps(zmm5, zmm14)
    float temp0_292[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_290, temp0_290[0].q), temp0_290)
    float temp0_293[0x4] = _mm_shuffle_ps(temp0_292, temp0_292, 0xe5)
    temp0_293[0] = temp0_293[0] + temp0_292[0]
    float temp0_294[0x4] = _mm_cmpeq_ss(0, temp0_293[0], 2)
    arg3 = _mm_and_ps(temp0_294, 0x3f800000)
    arg2 = _mm_or_ps(_mm_andnot_ps(temp0_294, 0xbf800000), arg3)
    float temp0_299[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm14)
    arg1[0xf] = temp0_299
    arg3 = (*arg1)[6]
    arg4 = arg1[1][0]
    zmm7 = zx.o(arg1[1][0].q)[0].q | arg3[0].q << 0x40
    arg3 = _mm_unpacklo_ps(arg3, arg4[0].q)[0].q | (*arg1)[5][0].q << 0x40
    zmm6 = zx.o(*(arg1 + 0x14))[0].q | arg4[0].q << 0x40
    arg4 = _mm_shuffle_epi32(zmm5, 0xd2)
    float temp0_304[0x4] = _mm_sub_ps(_mm_mul_ps(arg3, result), _mm_mul_ps(zmm6, arg4))
    zmm5 = _mm_shuffle_epi32(zmm5, 0xff)
    float temp0_306[0x4] = _mm_add_ps(temp0_304, temp0_304)
    float temp0_308[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, temp0_306))
    float temp0_315[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_306, temp0_306, 0xd2), result), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_306, temp0_306, 0xc9), arg4)), 
            temp0_308), 
        temp0_221)
    result = (*arg1)[0x12]
    arg3 = arg1[4][0]
    zmm6 = (*arg1)[0x11]
    float temp0_316[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xc9)
    zmm7 = zx.o(arg1[4][0].q)[0].q | result[0].q << 0x40
    float temp0_318[0x4] =
        _mm_mul_ps(_mm_unpacklo_ps(result, arg3[0].q)[0].q | zmm6[0].q << 0x40, temp0_316)
    zmm6 = zx.o(*(arg1 + 0x44))[0].q | arg3[0].q << 0x40
    float temp0_319[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xd2)
    float temp0_321[0x4] = _mm_sub_ps(temp0_318, _mm_mul_ps(zmm6, temp0_319))
    float temp0_322[0x4] = _mm_add_ps(temp0_321, temp0_321)
    float temp0_325[0x4] =
        _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(temp0_299, temp0_299, 0xff), temp0_322))
    float temp0_332[0x4] = _mm_add_ps(
        _mm_add_ps(
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_322, temp0_322, 0xd2), temp0_316), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_322, temp0_322, 0xc9), temp0_319)), 
            temp0_325), 
        temp0_222)
    arg1[8] = _mm_shuffle_ps(temp0_315, _mm_shuffle_ps(temp0_332, temp0_315, 0x20), 0x24)
    float temp0_335[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xe5)
    temp0_332[0].q = temp0_332 u>> 0x40
    arg1[9][0] = temp0_335[0]
    (*arg1)[0x25] = temp0_332[0]
    arg2 = (*arg1)[0x3b]
    float temp0_336[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
    arg4 = *arg1
    float temp0_337[0x4] = _mm_mul_ps(temp0_336, arg4)
    arg3 = arg1[0xe][0]
    float temp0_338[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
    result = (*arg1)[1]
    zmm6 = temp0_338[0].q | result[0].q << 0x40
    float temp0_339[0x4] = _mm_unpacklo_ps(arg4, result[0].q)
    float temp0_340[0x4] = _mm_unpacklo_ps(result, arg4[0].q)
    float temp0_341[0x4] = _mm_shuffle_ps(arg4, zmm6, 0x20)
    zmm6 = (*arg1)[0x39]
    float temp0_342[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    result = temp0_340[0].q | temp0_338[0].q << 0x40
    float temp0_346[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_338, temp0_341, 0x24), temp0_342), result_2), 
        temp0_337)
    float temp0_347[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float temp0_350[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_339[0].q << 0x40, temp0_347), zmm10), 
        temp0_346)
    arg3 = (*arg1)[0x3a]
    float temp0_354[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(result, _mm_shuffle_ps(arg3, arg3, 0)), zmm11), temp0_350)
    arg3 = (*arg1)[0x3f]
    float temp0_355[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
    arg4 = arg1[3]
    float temp0_356[0x4] = _mm_mul_ps(temp0_355, arg4)
    float temp0_357[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
    arg2 = (*arg1)[0xd]
    zmm6 = temp0_357[0].q | arg2[0].q << 0x40
    float temp0_358[0x4] = _mm_unpacklo_ps(arg4, arg2[0].q)
    float temp0_359[0x4] = _mm_unpacklo_ps(arg2, arg4[0].q)
    float temp0_360[0x4] = _mm_shuffle_ps(arg4, zmm6, 0x20)
    arg2 = temp0_359[0].q | temp0_357[0].q << 0x40
    float temp0_361[0x4] = _mm_shuffle_ps(temp0_357, temp0_360, 0x24)
    arg4 = arg1[0xf][0]
    float temp0_365[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(temp0_361, _mm_shuffle_ps(arg4, arg4, 0)), result_2), temp0_356)
    arg4 = (*arg1)[0x3d]
    float temp0_369[0x4] = _mm_add_ps(
        _mm_mul_ps(
            _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_358[0].q << 0x40, 
                _mm_shuffle_ps(arg4, arg4, 0)), 
            zmm10), 
        temp0_365)
    arg4 = (*arg1)[0x3e]
    arg2 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg2, _mm_shuffle_ps(arg4, arg4, 0)), zmm11), temp0_369)
    arg1[0xa] = temp0_354
    float temp0_374[0x4] = _mm_mul_ps(temp0_354, arg2)
    float temp0_376[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_374, temp0_374[0].q), temp0_374)
    result = _mm_shuffle_ps(temp0_376, temp0_376, 0xe5)
    result[0] = result[0] + temp0_376[0]
    float temp0_378[0x4] = _mm_cmpeq_ss(0, result[0], 2)
    zmm9 = _mm_and_ps(0x3f800000, temp0_378)
    arg3 = _mm_or_ps(_mm_andnot_ps(temp0_378, 0xbf800000), zmm9)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), arg2)
return result
