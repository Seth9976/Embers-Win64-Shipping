// 函数: sub_14002b2d0
// 地址: 0x14002b2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm13 = __insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20)
uint128_t zmm5 = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_2[0x4] = _mm_shuffle_ps(arg3, arg3, 0xc0)
uint128_t zmm0 = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
zmm13 = _mm_div_ps(zmm13, temp0_2)
zmm5 = _mm_sub_ps(zmm5, zmm0)
zmm0 = arg1[0x12][0]
float zmm1[0x4] = (*arg1)[0x46]
float temp0_6[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x11c)), zmm1, 0x20)
uint128_t zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_6)
zmm0 = __insertps_xmmps_memd_immb(_mm_insert_ps(zmm0, zmm1, 0x10), (*arg1)[0x47], 0x20)
uint128_t var_138 = zmm5
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm0)
zmm0 = __insertps_xmmps_memd_immb(zx.o(arg1[0x10][0].q), (*arg1)[0x42], 0x20)
zmm4 = _mm_sub_ps(zmm4, temp0_12)
float temp0_15[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm0 = _mm_add_ps(zmm0, zmm4)
float temp0_18[0x4] =
    _mm_sub_ps(temp0_15, __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20))
arg3 = (*arg1)[0x4b]
zmm4 = (*arg1)[0x49]
zmm5 = _mm_insert_ps(zx.o(*(arg1 + 0x128)), zmm4, 0x20)
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), zmm5)
float temp0_23[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg3, zmm4, 0x10), (*arg1)[0x4a], 0x20)
float temp0_26[0x4] =
    _mm_sub_ps(temp0_21, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_23))
float temp0_30[0x4] = _mm_mul_ps(
    _mm_sub_ps(
        _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x10c)), (*arg1)[0x45], 0x20), 
            temp0_26), 
        zmm0), 
    zmm13)
float temp0_31[0x4] = _mm_movehdup_ps(temp0_30)
temp0_31[0] = temp0_31[0] + temp0_30[0]
temp0_30[0].q = temp0_30 u>> 0x40
temp0_31[0] = temp0_31[0] + temp0_30[0]
float zmm11[0x4] = (*arg1)[0x1e]
zmm11[0] = zmm11[0] * arg4[0]
zmm0 = _mm_mul_ps(__insertps_xmmps_memd_immb(zx.o(arg1[6][0].q), (*arg1)[0x1a], 0x20), 
    _mm_shuffle_ps(arg4, arg4, 0xc0))
arg3 = arg1[0xe]
zmm4 = _mm_add_ps(arg3, arg3)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm4)
arg4 = (*arg1)[0x39]
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm4)
zmm5 = (*arg1)[0x3b]
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm4)
zmm4.q = zmm4 u>> 0x40
zmm4.d = zmm4.d f* (*arg1)[0x3a]
float temp0_43[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_26, temp0_39, 0x4e), temp0_37, 0xc)
float temp0_44[0x4] = _mm_insert_ps(temp0_37, temp0_39, 0x88)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xd8)
float temp0_46[0x4] = _mm_add_ps(zmm5, temp0_45)
float temp0_47[0x4] = _mm_sub_ps(temp0_45, zmm5)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x78)
zmm4 = _mm_add_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm4, 0x1c), temp0_39, 0x60), temp0_48)
float zmm8[0x4] = data_142d3f670
float temp0_52[0x4] = _mm_sub_ps(zmm8, zmm4)
zmm5 = _mm_blend_ps(zx.o(0), zmm0, 1)
float temp0_54[0x4] = _mm_blend_ps(zx.o(0), zmm0, 2)
zmm0 = _mm_blend_ps(zmm0, zx.o(0), 0xb)
float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xc0), zmm5)
float temp0_60[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_54), temp0_57)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xd5), zmm0), temp0_60)
float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xea), zmm5)
zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xd5), temp0_54), temp0_65)
float temp0_70[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_52, temp0_46, 0x9c), temp0_47, 0x60)
float temp0_73[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), zmm0), zmm4)
zmm4 = _mm_insert_ps(temp0_52, temp0_47, 0x8c)
float temp0_76[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_60, temp0_46, 0x4e), temp0_47, 0x14)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), zmm5)
zmm4 = _mm_insert_ps(zmm4, temp0_46, 0x20)
float temp0_80[0x4] = _mm_blend_ps(temp0_76, temp0_52, 4)
float temp0_83[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0xc0), temp0_54), temp0_78)
float temp0_86[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xea), zmm0), temp0_83)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xc0), temp0_70)
float temp0_91[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xd5), zmm4), zmm0)
float temp0_94[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xea), temp0_80), temp0_91)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xc0), temp0_70)
float temp0_99[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xd5), zmm4), zmm0)
float temp0_102[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0xea), temp0_80), temp0_99)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc0), temp0_70)
float temp0_107[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd5), zmm4), zmm0)
float temp0_110[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xea), temp0_80), temp0_107)
int32_t temp0_111 = _mm_extract_ps(temp0_110, 0)
int32_t temp0_112 = _mm_extract_ps(temp0_110, 1)
int32_t temp0_113 = _mm_extract_ps(temp0_110, 2)
zmm1 = arg1[0xf]
float temp0_114[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_116[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_114)
arg4 = (*arg1)[0x3d]
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_114)
zmm4 = (*arg1)[0x3f]
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_114)
temp0_114[0].q = temp0_114 u>> 0x40
temp0_114[0] = temp0_114[0] * (*arg1)[0x3e]
zmm5 = _mm_shuffle_ps(_mm_insert_ps(zmm5, temp0_118, 0x4e), temp0_116, 0xc)
float temp0_123[0x4] = _mm_insert_ps(temp0_116, temp0_118, 0x88)
float temp0_124[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xd8)
zmm0 = _mm_add_ps(zmm4, temp0_124)
float temp0_126[0x4] = _mm_sub_ps(temp0_124, zmm4)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x78)
float temp0_130[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_114, temp0_114, 0x1c), temp0_118, 0x60), zmm5)
float temp0_131[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_132[0x4] = _mm_sub_ps(zmm8, temp0_130)
uint128_t zmm15 = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float zmm9[0x4] = (*arg1)[0x1b]
zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xc0), zmm9)
float temp0_138[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xea), temp0_131), zmm5)
zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xd5), zmm15), temp0_138)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xea), zmm9)
float temp0_146[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xd5), temp0_131), zmm5)
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xc0), zmm15), temp0_146)
float temp0_151[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_132, zmm0, 0x9c), temp0_126, 0x60)
float temp0_152[0x4] = _mm_insert_ps(temp0_132, temp0_126, 0x8c)
zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, zmm0, 0x4e), temp0_126, 0x14)
float temp0_156[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xd5), zmm9)
float temp0_157[0x4] = _mm_insert_ps(temp0_152, zmm0, 0x20)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), temp0_131)
zmm5 = _mm_blend_ps(zmm5, temp0_132, 4)
int32_t temp0_161 = _mm_extract_ps(temp0_94, 0)
int32_t temp0_162 = _mm_extract_ps(temp0_102, 0)
arg4 = _mm_shuffle_ps(temp0_31, temp0_31, 0xc0)
int32_t temp0_164 = _mm_extract_ps(temp0_102, 1)
zmm0 = _mm_add_ps(zmm0, temp0_156)
float var_168[0x4] = (*arg1)[0x1f]
float temp0_168[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xea), zmm15), zmm0)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), temp0_151)
float temp0_173[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd5), temp0_157), zmm0)
uint128_t var_f8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm5), temp0_173)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xc0), temp0_151)
float temp0_181[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xd5), temp0_157), zmm0)
arg3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xea), zmm5), temp0_181)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xc0), temp0_151)
float temp0_189[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xd5), temp0_157), zmm0)
float zmm7[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xea), zmm5), temp0_189)
float zmm10[0x4] = zx.o(0)
float var_128[0x4] = zmm11
bool cond:0 = zmm11[0] <= 0f
zmm1 = zx.o(0)
zmm11 = zx.o(0)
zmm0 = zx.o(0)
zmm9 = zx.o(0)
float zmm14[0x4] = zx.o(0)
float var_108[0x4] = zmm7
float zmm6[0x4]
float zmm12[0x4]

if (not(cond:0))
    zmm0 = _mm_unpackhi_pd(var_138, var_138.q)
    float temp0_194[0x4] = _mm_movehdup_ps(var_138)
    float var_148_1[0x4] = arg4
    arg4 = data_142d3f780
    zmm7 = zmm0 ^ arg4
    zmm11 = temp0_194 ^ arg4
    arg4 ^= var_138
    zmm8 = _mm_shuffle_epi32(zmm7, 0x80)
    zmm9 = zx.o(temp0_164)
    zmm10 = zx.o(temp0_162)
    zmm12 = zx.o(temp0_112)
    float temp0_197[0x4] = _mm_insert_ps(_mm_shuffle_ps(zmm12, zmm12, 0xe0), zmm9, 0x20)
    zmm5 = zx.o(temp0_113)
    zmm4 = zmm5
    zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, zmm12, 0x10), zmm9, 0x20)
    float temp0_202[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm9, zmm10, 0x10), zmm10, 0x20), zmm8)
    float temp0_203[0x4] = _mm_shuffle_ps(var_138, var_138, 0xd5)
    zmm1 = zx.o(temp0_111)
    zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xe0), zmm12, 0x20)
    float temp0_209[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm12, zmm1, 0x10), zmm1, 0x20), temp0_203), 
        temp0_202)
    float temp0_212[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_unpacklo_ps(zmm7, zmm0.q), zmm11, 0x20), temp0_209)
    float temp0_213[0x4] = _mm_mul_ps(temp0_197, zmm8)
    zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, temp0_203), temp0_213)
    float temp0_218[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_insert_ps(temp0_194, arg4, 0x10)[0].q | var_138.q << 0x40, zmm4), temp0_212)
    float temp0_219[0x4] = __blendps_xmmdq_memdq_immb(zx.o(0), var_128, 1)
    zmm14 = _mm_add_ps(temp0_218, temp0_219)
    zmm4 = _mm_insert_ps(_mm_insert_ps(zmm0, zmm0, 0x10), zmm11, 0x20)
    zmm6 = zx.o(temp0_161)
    float temp0_224[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc0), zmm4)
    float temp0_225[0x4] = _mm_shuffle_ps(arg4, var_138, 0x40)
    float temp0_229[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(zmm1, zmm1, 0xe0), zmm10, 0x20), temp0_225), 
        temp0_224)
    zmm0 = _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm11, 0x10), zmm11, 0x20), temp0_229)
    float temp0_235[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm1, zmm10, 0x10), zmm10, 0x20), zmm4)
    zmm7 = var_108
    zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, temp0_225), temp0_235)
    float temp0_241[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg4, var_138, 0), var_138, 0xc8), zmm5), zmm0)
    zmm0 = _mm_add_ps(_mm_broadcastsd_pd(temp0_219[0].q), temp0_241)
    arg4 = var_148_1
    zmm9 = _mm_movehdup_ps(zmm14)
    zmm11 = _mm_unpackhi_pd(zmm14, zmm14[0].q)
    zmm1 = _mm_movehdup_ps(zmm0)
    zmm10 = _mm_unpackhi_pd(zmm0, zmm0.q)

float var_e8[0x4] = zmm1
int32_t var_148_2 = zmm0.d
uint128_t var_158_2 = _mm_mul_ps(zmm13, arg4)
zmm4 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20), 
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20))
zmm12 = data_142d3f780
zmm0 = _mm_unpackhi_pd(zmm4, zmm4.q)
zmm1 = zmm0 ^ zmm12
float temp0_253[0x4] = _mm_movehdup_ps(zmm4)
zmm13 = _mm_shuffle_epi32(zmm1, 0x80)
zmm5 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xc1), zmm13)
float temp0_257[0x4] = _mm_insert_ps(zmm1, zmm4, 0x9c)
float temp0_258[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd5)
float temp0_261[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc1), temp0_258), zmm5)
zmm5 = temp0_253 ^ zmm12
float temp0_263[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_257, zmm5, 0x20), temp0_261)
zmm15 = arg3
float temp0_266[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(zmm7), zmm15, 0x68), zmm13)
float temp0_268[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xda), temp0_258)
zmm6 = zmm4 ^ zmm12
arg4 = _mm_insert_ps(temp0_253, zmm6, 0x10)[0].q | zmm4.q << 0x40
float temp0_270[0x4] = _mm_add_ps(temp0_268, temp0_266)
float temp0_271[0x4] = _mm_shuffle_ps(zmm6, zmm4, 0x40)
float temp0_273[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0), zmm4, 0xc8)
float temp0_275[0x4] = _mm_add_ps(_mm_mul_ps(arg4, temp0_270), temp0_263)
zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm5, 0x20)
float temp0_279[0x4] = _mm_shuffle_ps(zmm7, _mm_shuffle_ps(zmm15, zmm7, 0x30), 0x80)
zmm1 = var_f8
float temp0_281[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), zmm4)
float temp0_283[0x4] = _mm_add_ps(_mm_mul_ps(temp0_279, temp0_271), temp0_281)
zmm0 = _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm5, 0x10), zmm5, 0x20), temp0_283)
float temp0_287[0x4] = _mm_shuffle_ps(zmm7, zmm15, 0xc)
float temp0_289[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_287, temp0_287, 0x78), zmm4)
uint128_t var_138_1 = zmm15
float temp0_295[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_273, 
        _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(zmm7, zmm7, 0xe6), zmm15, 0x68), temp0_271), 
            temp0_289)), 
    zmm0)
zmm0 = __blendps_xmmdq_memdq_immb(zx.o(0), var_168, 1)
float temp0_297[0x4] = _mm_add_ps(temp0_275, zmm0)
zmm0 = _mm_add_ps(_mm_broadcastsd_pd(zmm0.q), temp0_295)
float temp0_300[0x4] = _mm_insert_ps(zmm14, zmm9, 0x10)
float temp0_301[0x4] = __insertps_xmmps_memd_immb(zmm9, var_148_2, 0x10)
float temp0_302[0x4] = _mm_insert_ps(temp0_300, zmm11, 0x20)
float temp0_303[0x4] = _mm_insert_ps(temp0_301, var_e8, 0x20)
float temp0_305[0x4] = _mm_insert_ps(_mm_insert_ps(zmm11, var_e8, 0x10), zmm10, 0x20)
zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_297, zmm0, 5), zmm0, 0xd8)
float temp0_308[0x4] = _mm_add_ps(temp0_302, temp0_297)
temp0_297[0].q = temp0_297 u>> 0x40
float temp0_310[0x4] = _mm_add_ps(_mm_blend_ps(temp0_297, zmm0, 0xe), temp0_305)
int32_t temp0_311 = _mm_extract_ps(temp0_310, 0)
int32_t temp0_312 = _mm_extract_ps(temp0_310, 1)
int32_t temp0_313 = _mm_extract_ps(temp0_310, 2)
zmm0 = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_308, 0x800000, 0x30), data_142d3f770), 
    data_142d3f5c0, 2)
zmm15 = _mm_add_ps(zmm15, temp0_303)
char result = _mm_movemask_ps(zmm0)

if (result != 0xf)
label_14002bc29:
    float temp0_329[0x4] = _mm_movehdup_ps(temp0_308)
    arg3 = _mm_unpackhi_pd(temp0_308, temp0_308[0].q)
    float temp0_331[0x4] = _mm_insert_ps(zmm15, temp0_308, 0x8a)
    zmm7 = zx.o(temp0_311)
    zmm0 = zx.o(temp0_312)
    float temp0_332[0x4] = _mm_insert_ps(zmm7, zmm0, 0x1c)
    zmm13 = zx.o(temp0_313)
    zmm4 = data_142d3f660
    float temp0_335[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(temp0_308, arg3, 0x10), zmm7, 0x20), zmm13, 0x30)
    zmm4 = _mm_mul_ps(_mm_insert_ps(zmm4, zmm15, 0x46), temp0_335)
    float temp0_338[0x4] = _mm_insert_ps(temp0_329, zmm0, 0x2a)
    zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(_mm_insert_ps(zmm15, zmm15, 0x9c), temp0_338))
    float temp0_342[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_343[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_344[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    zmm12 = 0x3f800000
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm13, 0), temp0_332)
    float var_148_3 = zmm7[0]
    zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_unpacklo_ps(zmm7, zmm0.q)[0].q << 0x40, zx.o(0)))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm15, temp0_308, 5), temp0_331)
    float temp0_353[0x4] = _mm_shuffle_ps(temp0_308, zmm15, 5)
    zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(_mm_insert_ps(temp0_308, zmm15, 0x8a), temp0_353))
    float temp0_357[0x4] = _mm_mul_ps(temp0_342, zmm4)
    float temp0_359[0x4] = _mm_add_ps(_mm_mul_ps(temp0_343, temp0_344), temp0_357)
    float temp0_361[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd8), zmm0)
    float temp0_363[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_361, temp0_361, 1), temp0_361)
    float temp0_366[0x4] =
        _mm_sub_ps(temp0_359, _mm_add_ps(_mm_shuffle_ps(temp0_363, temp0_363, 0x39), temp0_363))
    temp0_366[0] - 0f
    
    if (temp0_366[0] != 0f || not(is_ordered.d(temp0_366[0], 0f)))
        zmm7 = temp0_308[0].q | zmm15.q << 0x40
        float temp0_367[0x4] = __insertps_xmmps_memd_immb(zmm13, 0x3f800000, 0x36)
        float temp0_368[0x4] = _mm_shuffle_ps(temp0_308, zmm15, 0x20)
        float temp0_370[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(zmm5.q), temp0_368)
        float temp0_373[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x20), zmm7), temp0_370)
        float temp0_375[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_344, temp0_331), temp0_373)
        float temp0_376[0x4] = _mm_insert_ps(data_142d4cc30, zmm13, 0x10)
        float temp0_378[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x66), temp0_376)
        float temp0_381[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x33), temp0_367), temp0_378)
        float temp0_383[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_343, temp0_332), temp0_381)
        float temp0_384[0x4] = _mm_mul_ps(temp0_367, temp0_342)
        arg3 = _mm_broadcastsd_pd(zmm0.q)
        zmm0.q = zmm0 u>> 0x40
        zmm0 = _mm_mul_ps(zmm0, temp0_332)
        float temp0_390[0x4] = _mm_sub_ps(temp0_384, 
            _mm_add_ps(_mm_mul_ps(__insertps_xmmps_memd_immb(temp0_378, var_148_3, 0x1d), arg3), 
                zmm0))
        float temp0_391[0x4] = _mm_mul_ps(zmm7, zmm4)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xcc), temp0_331)
        float temp0_395[0x4] = _mm_insert_ps(_mm_insert_ps(arg3, temp0_308, 0x9d), zmm15, 0xb0)
        float temp0_399[0x4] = _mm_sub_ps(temp0_391, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x66), temp0_395), zmm0))
        zmm0 = _mm_div_ps(data_142fc92f0, temp0_366)
        float temp0_401[0x4] = _mm_mul_ps(temp0_399, zmm0)
        float temp0_402[0x4] = _mm_mul_ps(temp0_383, zmm0)
        zmm1 = _mm_shuffle_ps(_mm_mul_ps(temp0_375, zmm0), _mm_mul_ps(zmm0, temp0_390), 0x77)
        zmm12 = _mm_shuffle_ps(temp0_401, temp0_402, 0x77)
        zmm7 = _mm_shuffle_ps(temp0_401, temp0_402, 0x22)
    else
        zmm7 = data_142d4cc20
        zmm1 = data_142d4cc30
    
    zmm13 = var_158_2
    zmm14 = var_168
    zmm8 = _mm_movehdup_ps(zmm12)
    zmm0 = _mm_unpackhi_pd(zmm12, zmm12[0].q)
    arg4 = _mm_shuffle_ps(zmm12, zmm12, 0xe7)
    zmm9 = _mm_movehdup_ps(zmm7)
    zmm4 = _mm_unpackhi_pd(zmm7, zmm7[0].q)
    zmm6 = _mm_shuffle_ps(zmm7, zmm7, 0xe7)
    zmm10 = _mm_movehdup_ps(zmm1)
    zmm5 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
    arg3 = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
else
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(zmm15, 0x800000, 0x30), data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_14002bc29
    
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            __insertps_xmmps_memd_immb(
                _mm_insert_ps(_mm_insert_ps(zx.o(temp0_311), zx.o(temp0_312), 0x10), 
                    zx.o(temp0_313), 0x20), 
                0x800000, 0x30), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_14002bc29
    
    zmm5 = 0x3f800000
    arg3 = zx.o(0)
    zmm10 = zx.o(0)
    zmm1 = zx.o(0)
    zmm6 = zx.o(0)
    zmm4 = zx.o(0)
    zmm9 = 0x3f800000
    zmm7 = zx.o(0)
    arg4 = zx.o(0)
    zmm0 = zx.o(0)
    zmm8 = zx.o(0)
    zmm12 = 0x3f800000
    zmm13 = var_158_2
    zmm14 = var_168

float temp0_419[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm1, zmm10, 0x10), zmm5, 0x20), arg3, 0x30)
float temp0_422[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm7, zmm9, 0x10), zmm4, 0x20), zmm6, 0x30)
float temp0_425[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm12, zmm8, 0x10), zmm0, 0x20), arg4, 0x30)
zmm0 = *arg2
arg4 = *(arg2 + 4)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_425)
float temp0_430[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_422), zmm0)
arg3 = arg2[1].d
float temp0_433[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_419), temp0_430)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_425)
float temp0_438[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x55), temp0_422), zmm0)
zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xaa), temp0_419), temp0_438)
zmm4 = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
zmm0 = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
uint128_t var_158_3 = zmm0
zmm4 = _mm_sub_ps(zmm4, zmm0)
zmm15 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_433, temp0_433, 0xd2), zmm15)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
zmm0 = _mm_sub_ps(zmm0, _mm_mul_ps(_mm_shuffle_ps(temp0_433, temp0_433, 0xc9), zmm4))
zmm11 = _mm_blend_epi16(temp0_94, zx.o(temp0_161), 3)
float temp0_454[0x4] =
    _mm_blend_ps(temp0_102, _mm_insert_ps(zx.o(temp0_162), zx.o(temp0_164), 0x10), 3)
float temp0_456[0x4] =
    _mm_insert_ps(_mm_insert_ps(zx.o(temp0_111), zx.o(temp0_112), 0x10), zx.o(temp0_113), 0x20)
float temp0_458[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc0), zmm11)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xd5), temp0_454), temp0_458)
zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xea), temp0_456), zmm5)
float temp0_465[0x4] = _mm_shuffle_ps(var_128, var_128, 0xc0)
float temp0_466[0x4] = _mm_mul_ps(temp0_465, temp0_433)
zmm1 = data_142d3f780
arg4 = _mm_shuffle_epi32(zmm14 ^ zmm1, 0xc0)
float temp0_468[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
float temp0_469[0x4] = _mm_mul_ps(arg4, temp0_433)
float temp0_470[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_471[0x4] = _mm_sub_ps(temp0_468, temp0_470)
float temp0_472[0x4] = _mm_shuffle_ps(temp0_471, temp0_471, 0xc9)
arg3 = temp0_433 ^ zmm1
float temp0_474[0x4] = _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xd2), temp0_472)
float temp0_475[0x4] = _mm_shuffle_ps(temp0_471, temp0_471, 0xd2)
float temp0_478[0x4] = _mm_sub_ps(temp0_474, _mm_mul_ps(_mm_shuffle_epi32(arg3, 0xc9), temp0_475))
zmm8 = var_f8
float temp0_480[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_478, temp0_478, 0xc0), zmm8)
zmm5 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_478, temp0_478, 0xd5), var_138_1), 
    temp0_480)
float temp0_486[0x4] =
    _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_478, temp0_478, 0xea), var_108), zmm5)
float temp0_491[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xd2), zmm15), 
    _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc9), zmm4))
zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_491, temp0_491, 0xc0), zmm11)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_491, temp0_491, 0xd5), temp0_454), zmm4)
float temp0_499[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_491, temp0_491, 0xea), temp0_456), zmm5)
float temp0_500[0x4] = _mm_mul_ps(temp0_465, zmm13)
uint128_t var_168_2 = _mm_mul_ps(arg4, zmm13)
zmm13 ^= data_142d3f780
float temp0_506[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm13, 0xd2), temp0_472), 
    _mm_mul_ps(_mm_shuffle_epi32(zmm13, 0xc9), temp0_475))
zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_506, temp0_506, 0xc0), zmm8)
zmm5 = _mm_shuffle_ps(temp0_506, temp0_506, 0xd5)
zmm9 = arg5
float temp0_510[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc0)
float temp0_512[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_466, temp0_510), var_158_3)
arg1[0xc][0] = temp0_512[0]
(*arg1)[0x31] = __extractps_memd_xmmps_immb(temp0_512, 1)
zmm5 = __mulps_xmmps_memps(zmm5, var_138_1)
(*arg1)[0x32] = __extractps_memd_xmmps_immb(temp0_512, 2)
zmm5 = _mm_add_ps(zmm5, zmm4)
float temp0_517[0x4] = _mm_shuffle_ps(temp0_506, temp0_506, 0xea)
float temp0_519[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_469, temp0_510), temp0_470)
(*arg1)[0x33] = temp0_519[0]
arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_519, 1)
float temp0_521[0x4] = __mulps_xmmps_memps(temp0_517, var_108)
(*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_519, 2)
float temp0_523[0x4] = _mm_add_ps(temp0_521, zmm5)
zmm4 = arg1[0xe]
zmm8 = arg1[0xf]
zmm0 = _mm_mul_ps(zmm0, temp0_510)
float temp0_525[0x4] = _mm_mul_ps(temp0_486, temp0_510)
float temp0_526[0x4] = _mm_mul_ps(zmm4, zx.o(0))
zmm5 = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_529[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), zmm5)
zmm15 = data_142d3f7c0
float temp0_531[0x4] = _mm_add_ps(_mm_mul_ps(temp0_529, zmm15), temp0_526)
float temp0_532[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm5 = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_532)
zmm10 = data_142d3f7d0
zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm10), temp0_531)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
float temp0_539[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), zmm0)
zmm0 = data_142d3f7b0
arg3 = zmm0
float temp0_541[0x4] = _mm_add_ps(_mm_mul_ps(temp0_539, zmm0), zmm5)
zmm13 = data_142d3f640
float temp0_542[0x4] = _mm_mul_ps(temp0_541, zmm13)
float temp0_543[0x4] = _mm_mul_ps(zx.o(0), zmm8)
zmm5 = _mm_shuffle_ps(temp0_525, temp0_525, 0)
float temp0_548[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0x1b), zmm5), zmm15), temp0_543)
zmm5 = _mm_shuffle_ps(temp0_525, temp0_525, 0x55)
zmm0 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm8, zmm8, 1), zmm5), zmm10), temp0_548)
float temp0_554[0x4] = _mm_shuffle_ps(temp0_525, temp0_525, 0xaa)
float temp0_559[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xb1), temp0_554), arg3), zmm0), 
    zmm13)
float temp0_560[0x4] = _mm_add_ps(temp0_542, zmm4)
zmm0 = _mm_mul_ps(temp0_560, temp0_560)
float temp0_563[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
zmm4.d = _mm_movehdup_ps(temp0_563).d f+ temp0_563[0]
zmm13 = _mm_cmpeq_ss(0x322bcc77, zmm4.d, 6)
zmm1 = zmm4
zmm1[0] = zmm1[0] * 0.5f
zmm4 = _mm_rsqrt_ss(zmm4.d, zmm4.d)
arg3 = zmm4
arg3[0] = arg3[0] f* zmm4.d
arg3[0] = arg3[0] * zmm1[0]
zmm5.d = 0.5f - arg3[0]
zmm5.d = zmm5.d f* zmm4.d
zmm5.d = zmm5.d f+ zmm4.d
arg3 = zmm5
arg3[0] = arg3[0] f* zmm5.d
arg3[0] = arg3[0] * zmm1[0]
zmm1 = 0x3f000000
zmm1[0] = 0.5f - arg3[0]
zmm1[0] = zmm1[0] f* zmm5.d
zmm1[0] = zmm1[0] f+ zmm5.d
zmm13 = _mm_andnot_ps(zmm13, 0xffffffff)
float temp0_569[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_560)
zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
arg4 = data_142d3f660
zmm1 = _mm_and_ps(temp0_569, zmm13)
zmm13 = _mm_or_ps(_mm_andnot_ps(zmm13, arg4), zmm1)
float temp0_574[0x4] = _mm_add_ps(temp0_559, zmm8)
float temp0_575[0x4] = _mm_mul_ps(temp0_574, temp0_574)
zmm4 = _mm_add_ps(_mm_unpackhi_pd(temp0_575, temp0_575[0].q), temp0_575)
float temp0_578[0x4] = _mm_movehdup_ps(zmm4)
temp0_578[0] = temp0_578[0] f+ zmm4.d
zmm6 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_578[0], 6), 0xffffffff)
temp0_578[0] = temp0_578[0] * 0.5f
float temp0_581[0x4] = _mm_rsqrt_ss(temp0_578[0], temp0_578[0])
zmm4.d = temp0_581.d f* temp0_581[0]
zmm4.d = zmm4.d f* temp0_578[0]
zmm5.d = 0.5f f- zmm4.d
zmm5.d = zmm5.d f* temp0_581[0]
zmm5.d = zmm5.d f+ temp0_581[0]
zmm1 = zmm5
zmm1[0] = zmm1[0] f* zmm5.d
zmm1[0] = zmm1[0] * temp0_578[0]
zmm0.d = 0.5f - zmm1[0]
zmm0.d = zmm0.d f* zmm5.d
zmm0.d = zmm0.d f+ zmm5.d
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_574)
float temp0_584[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm0 = _mm_and_ps(zmm0, temp0_584)
zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_584, arg4), zmm0)
zmm0 = _mm_mul_ps(zmm13, zmm6)
float temp0_590[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
zmm0.d = _mm_movehdup_ps(temp0_590).d f+ temp0_590[0]
float temp0_592[0x4] = _mm_cmpeq_ss(0, zmm0.d, 2)
zmm0 = _mm_and_ps(temp0_592, 0x3f800000)
arg4 = _mm_or_ps(_mm_andnot_ps(temp0_592, 0xbf800000), zmm0)
arg1[0xe] = zmm13
float temp0_597[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm6)
zmm4 = _mm_shuffle_epi32(zmm13, 0xc9)
arg1[0xf] = temp0_597
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(arg1[0x10][0].q), (*arg1)[0x42], 0x20), 
    _mm_mul_ps(temp0_500, temp0_510))
arg4 = _mm_shuffle_epi32(zmm13, 0xd2)
zmm1 = _mm_shuffle_epi32(zmm13, 0xff)
arg1[0x10][0] = zmm0.d
(*arg1)[0x41] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x42] = __extractps_memd_xmmps_immb(zmm0, 2)
float temp0_606[0x4] = _mm_mul_ps(var_168_2, temp0_510)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x10c)), (*arg1)[0x45], 0x20), temp0_606)
(*arg1)[0x43] = zmm0.d
arg1[0x11][0] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x45] = __extractps_memd_xmmps_immb(zmm0, 2)
float temp0_611[0x4] = _mm_mul_ps(temp0_499, temp0_510)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x118)), arg1[0x12][0], 0x20), temp0_611)
(*arg1)[0x46] = zmm0.d
(*arg1)[0x47] = __extractps_memd_xmmps_immb(zmm0, 1)
arg1[0x12][0] = __extractps_memd_xmmps_immb(zmm0, 2)
float temp0_616[0x4] = _mm_mul_ps(temp0_510, temp0_523)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x124)), (*arg1)[0x4b], 0x20), temp0_616)
(*arg1)[0x49] = zmm0.d
(*arg1)[0x4a] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x4b] = __extractps_memd_xmmps_immb(zmm0, 2)
zmm0 = (*arg1)[6]
arg3 = arg1[1][0]
float temp0_621[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), zmm0, 0x20)
zmm0 = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(_mm_insert_ps(zmm0, arg3, 0x10), (*arg1)[5], 0x20), 
        zmm4), 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x14)), arg3, 0x20), arg4))
zmm0 = _mm_add_ps(zmm0, zmm0)
float temp0_630[0x4] = _mm_add_ps(temp0_621, _mm_mul_ps(zmm1, zmm0))
float temp0_636[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xd2), zmm4), 
        _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xc9), arg4)), 
    temp0_630)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20), temp0_636)
arg1[8][0] = zmm0.d
(*arg1)[0x21] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(zmm0, 2)
zmm1 = arg1[0xf][0]
zmm0 = (*arg1)[0x3e]
arg4 = (*arg1)[0x12]
zmm4 = arg1[4][0]
arg3 = zx.o(*(arg1 + 0xf4))
float temp0_641[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), arg4, 0x20)
float temp0_643[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg4, zmm4, 0x10), (*arg1)[0x11], 0x20)
float temp0_644[0x4] = _mm_insert_ps(arg3, zmm1, 0x20)
zmm0 = __insertps_xmmps_memd_immb(_mm_insert_ps(zmm0, zmm1, 0x10), (*arg1)[0x3d], 0x20)
float temp0_650[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_643, temp0_644), 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm4, 0x20), zmm0))
float temp0_651[0x4] = _mm_add_ps(temp0_650, temp0_650)
zmm1 = (*arg1)[0x3f]
float temp0_654[0x4] =
    _mm_add_ps(temp0_641, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), temp0_651))
zmm4 = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_651, temp0_651, 0xd2), temp0_644), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_651, temp0_651, 0xc9), zmm0)), 
    temp0_654)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20), zmm4)
(*arg1)[0x23] = zmm0.d
arg1[9][0] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x25] = __extractps_memd_xmmps_immb(zmm0, 2)
zmm6 = (*arg1)[0x3b]
float temp0_665[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
arg3 = *arg1
float temp0_666[0x4] = _mm_mul_ps(temp0_665, arg3)
zmm7 = arg1[0xe][0]
float temp0_667[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
arg4 = (*arg1)[3]
zmm12 = (*arg1)[2]
zmm0 = (*arg1)[1]
zmm4 = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg4, zmm12, 0x10), zmm0, 0x20), arg3, 0x30), 
            temp0_667), 
        zmm15), 
    temp0_666)
zmm6 = (*arg1)[0x39]
float temp0_674[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_679[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), arg3, 0x20), zmm0, 0x30), 
            temp0_674), 
        zmm10), 
    zmm4)
zmm4 = (*arg1)[0x3a]
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm0 = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, arg3, 0x10), arg4, 0x20), zmm12, 0x30), zmm4)
zmm9 = data_142d3f7b0
zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm9), temp0_679)
arg4 = arg1[3]
zmm7 = arg1[0xf][0]
float temp0_687[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm4 = (*arg1)[0xf]
zmm12 = (*arg1)[0xe]
arg3 = (*arg1)[0xd]
float temp0_691[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm12, 0x10), arg3, 0x20), arg4, 0x30), 
    temp0_687)
float temp0_693[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg4)
float temp0_695[0x4] = _mm_add_ps(_mm_mul_ps(temp0_691, zmm15), temp0_693)
zmm1 = (*arg1)[0x3d]
float temp0_696[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_701[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), arg4, 0x20), arg3, 0x30), 
            temp0_696), 
        zmm10), 
    temp0_695)
float temp0_704[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg3, arg4, 0x10), zmm4, 0x20), zmm12, 0x30)
zmm1 = (*arg1)[0x3e]
float temp0_708[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_704, _mm_shuffle_ps(zmm1, zmm1, 0)), zmm9), temp0_701)
arg1[0xa] = zmm0
zmm0 = _mm_mul_ps(zmm0, temp0_708)
float temp0_711[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
zmm0.d = _mm_movehdup_ps(temp0_711).d f+ temp0_711[0]
float temp0_713[0x4] = _mm_cmpeq_ss(0, zmm0.d, 2)
zmm5 = _mm_and_ps(0x3f800000, temp0_713)
zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_713, 0xbf800000), zmm5)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_708)
return result
