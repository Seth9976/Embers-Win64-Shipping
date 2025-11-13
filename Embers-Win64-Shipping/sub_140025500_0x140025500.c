// 函数: sub_140025500
// 地址: 0x140025500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = _mm_div_ps(__insertps_xmmps_memd_immb(zx.o(*arg2), arg2[1].d, 0x20), 
    _mm_shuffle_ps(arg3, arg3, 0xc0))
uint128_t zmm13 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20), 
    __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20))
arg3 = arg1[0x12][0]
float zmm1[0x4] = (*arg1)[0x46]
uint128_t zmm4 = _mm_insert_ps(zx.o(*(arg1 + 0x11c)), zmm1, 0x20)
uint128_t zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xd2), zmm4)
float temp0_10[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg3, zmm1, 0x10), (*arg1)[0x47], 0x20)
zmm4 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
float temp0_12[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0x10][0].q), (*arg1)[0x42], 0x20)
zmm4 = _mm_mul_ps(zmm4, temp0_10)
float temp0_14[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm5 = _mm_sub_ps(zmm5, zmm4)
zmm4 = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_17[0x4] = _mm_add_ps(temp0_12, zmm5)
float temp0_18[0x4] = _mm_sub_ps(temp0_14, zmm4)
zmm4 = (*arg1)[0x4b]
zmm5 = (*arg1)[0x49]
uint128_t zmm6 = _mm_insert_ps(zx.o(*(arg1 + 0x128)), zmm5, 0x20)
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), zmm6)
zmm4 = __insertps_xmmps_memd_immb(_mm_insert_ps(zmm4, zmm5, 0x10), (*arg1)[0x4a], 0x20)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), zmm4)
zmm4 = _mm_mul_ps(
    _mm_sub_ps(
        _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x10c)), (*arg1)[0x45], 0x20), 
            _mm_sub_ps(temp0_21, temp0_25)), 
        temp0_17), 
    zmm0)
float temp0_31[0x4] = _mm_movehdup_ps(zmm4)
temp0_31[0] = temp0_31[0] f+ zmm4.d
zmm4.q = zmm4 u>> 0x40
temp0_31[0] = temp0_31[0] f+ zmm4.d
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc0), zmm0)
zmm0.d = (*arg1)[0x1e].d f* arg4[0]
uint128_t var_178 = zmm0
float temp0_34[0x4] = _mm_shuffle_ps(arg4, arg4, 0xc0)
uint128_t zmm11 =
    _mm_mul_ps(__insertps_xmmps_memd_immb(zx.o(arg1[6][0].q), (*arg1)[0x1a], 0x20), temp0_34)
arg3 = arg1[0xe]
zmm0 = _mm_add_ps(arg3, arg3)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm0)
zmm4 = (*arg1)[0x39]
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0)
zmm5 = (*arg1)[0x3b]
zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm0)
zmm0.q = zmm0 u>> 0x40
zmm0.d = zmm0.d f* (*arg1)[0x3a]
zmm6 = _mm_shuffle_ps(_mm_insert_ps(zmm6, zmm4, 0x4e), temp0_39, 0xc)
float temp0_46[0x4] = _mm_insert_ps(temp0_39, zmm4, 0x88)
float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xd8)
float temp0_48[0x4] = _mm_add_ps(zmm5, temp0_47)
float temp0_49[0x4] = _mm_sub_ps(temp0_47, zmm5)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x78)
zmm0 = _mm_add_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm0, 0x1c), zmm4, 0x60), zmm6)
uint128_t zmm9 = data_142d3f670
zmm5 = _mm_sub_ps(zmm9, zmm0)
float temp0_55[0x4] = _mm_blend_ps(zx.o(0), zmm11, 1)
zmm4 = _mm_blend_ps(zx.o(0), zmm11, 2)
zmm11 = _mm_blend_ps(zmm11, zx.o(0), 0xb)
zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc0), temp0_55)
float temp0_62[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xea), zmm4), zmm6)
float temp0_65[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd5), zmm11), temp0_62)
zmm6 = _mm_insert_ps(_mm_insert_ps(zmm5, temp0_48, 0x9c), temp0_49, 0x60)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xea), temp0_55)
zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd5), zmm4), temp0_69)
float temp0_73[0x4] = _mm_insert_ps(zmm5, temp0_49, 0x8c)
float temp0_76[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xc0), zmm11), zmm0)
zmm0 = _mm_insert_ps(_mm_insert_ps(zmm0, temp0_48, 0x4e), temp0_49, 0x14)
float temp0_79[0x4] = _mm_insert_ps(temp0_73, temp0_48, 0x20)
zmm0 = _mm_blend_ps(zmm0, zmm5, 4)
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0xd5), temp0_55)
float temp0_85[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc0), zmm4), temp0_82)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xea), zmm11), temp0_85)
float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xc0), zmm6)
float temp0_93[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xd5), temp0_79), temp0_90)
float temp0_96[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xea), zmm0), temp0_93)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xc0), zmm6)
float temp0_101[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xd5), temp0_79), temp0_98)
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xea), zmm0)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc0), zmm6)
float temp0_108[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd5), temp0_79), temp0_105)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xea), zmm0), temp0_108)
int32_t temp0_112 = _mm_extract_ps(zmm5, 0)
int32_t temp0_113 = _mm_extract_ps(zmm5, 1)
int32_t temp0_114 = _mm_extract_ps(zmm5, 2)
float temp0_115[0x4] = _mm_add_ps(temp0_103, temp0_101)
arg3 = arg1[0xf]
zmm0 = _mm_add_ps(arg3, arg3)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm0)
arg4 = (*arg1)[0x3d]
float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm0)
zmm4 = (*arg1)[0x3f]
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0)
zmm0.q = zmm0 u>> 0x40
zmm0.d = zmm0.d f* (*arg1)[0x3e]
zmm5 = _mm_shuffle_ps(_mm_insert_ps(zmm5, temp0_120, 0x4e), temp0_118, 0xc)
float temp0_125[0x4] = _mm_insert_ps(temp0_118, temp0_120, 0x88)
float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xd8)
float temp0_127[0x4] = _mm_add_ps(zmm4, temp0_126)
float temp0_128[0x4] = _mm_sub_ps(temp0_126, zmm4)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x78)
zmm9 = _mm_sub_ps(zmm9, 
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm0, 0x1c), temp0_120, 0x60), zmm5))
zmm11 = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float zmm10[0x4] = (*arg1)[0x1b]
float temp0_135[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xc0), zmm10)
zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0xea), zmm11), zmm0)
float temp0_143[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xd5), temp0_135), zmm6)
zmm0 = _mm_insert_ps(_mm_insert_ps(zmm9, temp0_127, 0x9c), temp0_128, 0x60)
float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xea), zmm10)
zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xd5), zmm11), temp0_147)
zmm6 = _mm_insert_ps(zmm9, temp0_128, 0x8c)
zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0xc0), temp0_135), zmm5)
zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, temp0_127, 0x4e), temp0_128, 0x14)
float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0xd5), zmm10)
zmm6 = _mm_insert_ps(zmm6, temp0_127, 0x20)
float temp0_162[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xc0), zmm11), temp0_158)
zmm5 = _mm_blend_ps(zmm5, zmm9, 4)
zmm9 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xea), temp0_135), temp0_162)
float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xc0), zmm0)
float temp0_171[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xd5), zmm6), temp0_168)
float temp0_174[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0xea), zmm5), temp0_171)
float temp0_176[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc0), zmm0)
float temp0_179[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd5), zmm6), temp0_176)
float zmm7[0x4] = *arg6
uint128_t var_118 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm5), temp0_179)
float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xc0), zmm0)
float temp0_186[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xd5), zmm6)
uint32_t temp0_187 = _mm_movemask_ps(zmm7)
float temp0_188[0x4] = _mm_add_ps(temp0_186, temp0_184)
uint128_t zmm14 = _mm_unpackhi_pd(zmm13, zmm13.q)
int32_t temp0_190 = _mm_extract_ps(temp0_96, 0)
zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xea), zmm5)
arg4 = zmm13
float temp0_193[0x4] = _mm_movehdup_ps(zmm13)
int32_t temp0_194 = _mm_extract_ps(temp0_115, 0)
uint128_t var_128 = _mm_add_ps(zmm9, temp0_188)
uint128_t var_168 = (*arg1)[0x1f]
int32_t temp0_196 = _mm_extract_ps(temp0_115, 1)
char result
float zmm8[0x4]
float zmm12[0x4]
float zmm15[0x4]

if (temp0_187 != 0xf)
    float var_158_2[0x4] = zmm7
    zmm9 = zx.o(0)
    zmm1 = zx.o(0)
    zmm15 = zx.o(0)
    zmm0 = zx.o(0)
    zmm10 = zx.o(0)
    zmm13 = zx.o(0)
    
    if (not(var_178.d f<= 0f))
        arg3 = data_142d3f780
        zmm7 = zmm14 ^ arg3
        zmm13 = temp0_193 ^ arg3
        zmm15 = arg4
        arg3 ^= arg4
        zmm8 = _mm_shuffle_epi32(zmm7, 0x80)
        zmm10 = zx.o(temp0_196)
        zmm9 = zx.o(temp0_194)
        zmm11 = zx.o(temp0_113)
        zmm6 = _mm_insert_ps(_mm_shuffle_ps(zmm11, zmm11, 0xe0), zmm10, 0x20)
        zmm5 = zx.o(temp0_114)
        zmm4 = zmm5
        zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, zmm11, 0x10), zmm10, 0x20)
        float temp0_416[0x4] =
            _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm10, zmm9, 0x10), zmm9, 0x20), zmm8)
        zmm0 = _mm_shuffle_ps(arg4, arg4, 0xd5)
        arg4 = zx.o(temp0_112)
        zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xe0), zmm11, 0x20)
        zmm11 = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm11, arg4, 0x10), arg4, 0x20), zmm0), 
            temp0_416)
        float temp0_426[0x4] =
            _mm_mul_ps(_mm_insert_ps(_mm_unpacklo_ps(zmm7, zmm14.q), zmm13, 0x20), zmm11)
        zmm6 = _mm_mul_ps(zmm6, zmm8)
        zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm0), zmm6)
        float temp0_432[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(temp0_193, arg3, 0x10)[0].q | zmm15[0].q << 0x40, zmm4), 
            temp0_426)
        zmm0 = __blendps_xmmdq_memdq_immb(zx.o(0), var_178, 1)
        float temp0_434[0x4] = _mm_add_ps(temp0_432, zmm0)
        zmm4 = _mm_insert_ps(_mm_insert_ps(zmm14, zmm14, 0x10), zmm13, 0x20)
        zmm6 = zx.o(temp0_190)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc0), zmm4)
        float temp0_439[0x4] = _mm_shuffle_ps(arg3, zmm15, 0x40)
        float temp0_443[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(arg4, arg4, 0xe0), zmm9, 0x20), temp0_439), 
            zmm6)
        zmm14 = _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm14, zmm13, 0x10), zmm13, 0x20), temp0_443)
        float temp0_449[0x4] =
            _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg4, zmm9, 0x10), zmm9, 0x20), zmm4)
        zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, temp0_439), temp0_449)
        float temp0_455[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg3, zmm15, 0), zmm15, 0xc8), zmm5), zmm14)
        zmm0 = _mm_add_ps(_mm_broadcastsd_pd(zmm0.q), temp0_455)
        zmm10 = _mm_movehdup_ps(temp0_434)
        zmm15 = _mm_unpackhi_pd(temp0_434, temp0_434[0].q)
        zmm1 = _mm_movehdup_ps(zmm0)
        zmm9 = _mm_unpackhi_pd(zmm0, zmm0.q)
        zmm13 = temp0_434
    
    float var_d8_1[0x4] = zmm1
    int32_t var_108_1 = zmm0.d
    zmm4 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20), 
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20))
    zmm8 = data_142d3f780
    zmm1 = _mm_unpackhi_pd(zmm4, zmm4.q)
    zmm7 = zmm1 ^ zmm8
    zmm0 = _mm_movehdup_ps(zmm4)
    zmm12 = _mm_shuffle_epi32(zmm7, 0x80)
    float temp0_469[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xc1), zmm12)
    float temp0_470[0x4] = _mm_insert_ps(zmm7, zmm4, 0x9c)
    zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0xd5)
    zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(var_128, var_128, 0xc1), zmm6), temp0_469)
    arg3 = zmm0 ^ zmm8
    float temp0_476[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_470, arg3, 0x20), zmm5)
    float temp0_479[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(var_128), var_118, 0x68), zmm12)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(var_128, var_128, 0xda), zmm6)
    zmm6 = zmm4 ^ zmm8
    zmm0 = _mm_insert_ps(zmm0, zmm6, 0x10).q | zmm4.q << 0x40
    zmm5 = _mm_add_ps(zmm5, temp0_479)
    float temp0_484[0x4] = _mm_shuffle_ps(zmm6, zmm4, 0x40)
    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0), zmm4, 0xc8)
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm5), temp0_476)
    zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), arg3, 0x20)
    float temp0_492[0x4] = _mm_shuffle_ps(var_128, _mm_shuffle_ps(var_118, var_128, 0x30), 0x80)
    zmm5 = temp0_174
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc0), zmm4)
    float temp0_496[0x4] = _mm_add_ps(_mm_mul_ps(temp0_492, temp0_484), zmm5)
    float temp0_499[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm1, arg3, 0x10), arg3, 0x20), temp0_496)
    float temp0_500[0x4] = _mm_shuffle_ps(var_128, var_118, 0xc)
    float temp0_502[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_500, temp0_500, 0x78), zmm4)
    zmm6 = _mm_add_ps(
        _mm_mul_ps(zmm6, 
            _mm_add_ps(
                _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(var_128, var_128, 0xe6), var_118, 0x68), 
                    temp0_484), 
                temp0_502)), 
        temp0_499)
    float temp0_509[0x4] = __blendps_xmmdq_memdq_immb(zx.o(0), var_168, 1)
    zmm0 = _mm_add_ps(zmm0, temp0_509)
    float temp0_512[0x4] = _mm_add_ps(_mm_broadcastsd_pd(temp0_509[0].q), zmm6)
    zmm13 = _mm_insert_ps(zmm13, zmm10, 0x10)
    float temp0_514[0x4] = __insertps_xmmps_memd_immb(zmm10, var_108_1, 0x10)
    zmm13 = _mm_insert_ps(zmm13, zmm15, 0x20)
    float temp0_516[0x4] = _mm_insert_ps(temp0_514, var_d8_1, 0x20)
    float temp0_518[0x4] = _mm_insert_ps(_mm_insert_ps(zmm15, var_d8_1, 0x10), zmm9, 0x20)
    zmm11 =
        _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_512, 5), temp0_512, 0xd8), temp0_516)
    zmm13 = _mm_add_ps(zmm13, zmm0)
    zmm0.q = zmm0 u>> 0x40
    zmm0 = _mm_add_ps(_mm_blend_ps(zmm0, temp0_512, 0xe), temp0_518)
    int32_t temp0_525 = _mm_extract_ps(zmm0, 0)
    int32_t temp0_526 = _mm_extract_ps(zmm0, 1)
    int32_t temp0_527 = _mm_extract_ps(zmm0, 2)
    float temp0_530[0x4] = __cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(zmm13, 0x800000, 0x30), data_142d3f770), 
        data_142d3f5c0, 2)
    zmm0 = _mm_cmpeq_epi32(var_158_2, zx.o(0))
    result = _mm_movemask_ps(_mm_or_ps(temp0_530, zmm0))
    
    if (result != 0xf)
    label_140026458:
        zmm0 = _mm_movehdup_ps(zmm13)
        arg3 = _mm_unpackhi_pd(zmm13, zmm13.q)
        float temp0_549[0x4] = _mm_insert_ps(zmm11, zmm13, 0x8a)
        zmm6 = zx.o(temp0_525)
        zmm1 = zx.o(temp0_526)
        float temp0_550[0x4] = _mm_insert_ps(zmm6, zmm1, 0x1c)
        zmm14 = zx.o(temp0_527)
        zmm5 = data_142d3f660
        float temp0_553[0x4] =
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm13, arg3, 0x10), zmm6, 0x20), zmm14, 0x30)
        zmm5 = _mm_mul_ps(_mm_insert_ps(zmm5, zmm11, 0x46), temp0_553)
        zmm0 = _mm_insert_ps(zmm0, zmm1, 0x2a)
        zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_insert_ps(zmm11, zmm11, 0x9c), zmm0))
        float temp0_560[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_561[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm7 = 0x3f800000
        int32_t var_158_3 = zmm6.d
        float temp0_568[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm14, 0), temp0_550), 
            _mm_mul_ps(_mm_unpacklo_ps(zmm6, zmm1[0].q)[0].q << 0x40, zx.o(0)))
        zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm13, 5), temp0_549)
        float temp0_571[0x4] = _mm_shuffle_ps(zmm13, zmm11, 5)
        zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(_mm_insert_ps(zmm13, zmm11, 0x8a), temp0_571))
        zmm4 = _mm_mul_ps(temp0_560, zmm5)
        float temp0_577[0x4] = _mm_add_ps(_mm_mul_ps(temp0_561, zmm0), zmm4)
        zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xd8), zmm9)
        zmm6 = _mm_add_ps(_mm_shuffle_pd(zmm4, zmm4, 1), zmm4)
        float temp0_584[0x4] =
            _mm_sub_ps(temp0_577, _mm_add_ps(_mm_shuffle_ps(zmm6, zmm6, 0x39), zmm6))
        temp0_584[0] - 0f
        
        if (temp0_584[0] != 0f || not(is_ordered.d(temp0_584[0], 0f)))
            zmm4 = zmm13.q | zmm11.q << 0x40
            float temp0_585[0x4] = __insertps_xmmps_memd_immb(zmm14, 0x3f800000, 0x36)
            zmm6 = _mm_shuffle_ps(zmm13, zmm11, 0x20)
            float temp0_588[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_568[0].q), zmm6)
            zmm6 =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0x20), zmm4), temp0_588)
            zmm0 = _mm_sub_ps(_mm_mul_ps(zmm0, temp0_549), zmm6)
            zmm6 = _mm_insert_ps(data_142d4cc30, zmm14, 0x10)
            float temp0_596[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x66), zmm6)
            zmm6 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x33), temp0_585), temp0_596)
            float temp0_601[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_561, temp0_550), zmm6)
            float temp0_602[0x4] = _mm_mul_ps(temp0_585, temp0_560)
            zmm1 = _mm_broadcastsd_pd(zmm9.q)
            zmm9.q = zmm9 u>> 0x40
            zmm9 = _mm_mul_ps(zmm9, temp0_550)
            float temp0_608[0x4] = _mm_sub_ps(temp0_602, 
                _mm_add_ps(_mm_mul_ps(__insertps_xmmps_memd_immb(zmm6, var_158_3, 0x1d), zmm1), 
                    zmm9))
            zmm4 = _mm_mul_ps(zmm4, zmm5)
            float temp0_611[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xcc), temp0_549)
            zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, zmm13, 0x9d), zmm11, 0xb0)
            zmm4 = _mm_sub_ps(zmm4, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0x66), zmm5), temp0_611))
            float temp0_618[0x4] = _mm_div_ps(data_142fc92f0, temp0_584)
            zmm4 = _mm_mul_ps(zmm4, temp0_618)
            float temp0_620[0x4] = _mm_mul_ps(temp0_601, temp0_618)
            zmm0 =
                _mm_shuffle_ps(_mm_mul_ps(zmm0, temp0_618), _mm_mul_ps(temp0_618, temp0_608), 0x77)
            zmm7 = _mm_shuffle_ps(zmm4, temp0_620, 0x77)
            zmm4 = _mm_shuffle_ps(zmm4, temp0_620, 0x22)
        else
            zmm4 = data_142d4cc20
            zmm0 = data_142d4cc30
        
        zmm8 = _mm_movehdup_ps(zmm7)
        zmm10 = _mm_unpackhi_pd(zmm7, zmm7[0].q)
        arg4 = _mm_shuffle_ps(zmm7, zmm7, 0xe7)
        zmm9 = _mm_movehdup_ps(zmm4)
        zmm5 = _mm_unpackhi_pd(zmm4, zmm4.q)
        arg3 = _mm_shuffle_ps(zmm4, zmm4, 0xe7)
        zmm11 = _mm_movehdup_ps(zmm0)
        zmm6 = _mm_unpackhi_pd(zmm0, zmm0.q)
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0xe7)
    else
        result = _mm_movemask_ps(_mm_or_ps(
            __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(zmm11, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5c0, 2), 
            zmm0))
        
        if (result != 0xf)
            goto label_140026458
        
        result = _mm_movemask_ps(_mm_or_ps(
            __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    __insertps_xmmps_memd_immb(
                        _mm_insert_ps(_mm_insert_ps(zx.o(temp0_525), zx.o(temp0_526), 0x10), 
                            zx.o(temp0_527), 0x20), 
                        0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5c0, 2), 
            _mm_cmpeq_epi32(var_158_2, zx.o(0))))
        
        if (result != 0xf)
            goto label_140026458
        
        zmm6 = 0x3f800000
        zmm1 = zx.o(0)
        zmm11 = zx.o(0)
        zmm0 = zx.o(0)
        arg3 = zx.o(0)
        zmm5 = zx.o(0)
        zmm9 = 0x3f800000
        zmm4 = zx.o(0)
        arg4 = zx.o(0)
        zmm10 = zx.o(0)
        zmm8 = zx.o(0)
        zmm7 = 0x3f800000
    
    zmm0 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm11, 0x10), zmm6, 0x20), zmm1, 0x30)
    zmm4 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm9, 0x10), zmm5, 0x20), arg3, 0x30)
    float temp0_866[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm7, zmm8, 0x10), zmm10, 0x20), arg4, 0x30)
    zmm1 = *arg2
    arg3 = *(arg2 + 4)
    float temp0_868[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_866)
    float temp0_871[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm4), temp0_868)
    zmm1 = arg2[1].d
    float temp0_874[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm0), temp0_871)
    float temp0_876[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0), temp0_866)
    float temp0_879[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x55), zmm4), temp0_876)
    float temp0_882[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xaa), zmm0), temp0_879)
    zmm4 = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
    zmm0 = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
    uint128_t var_148_2 = zmm0
    zmm4 = _mm_sub_ps(zmm4, zmm0)
    float temp0_886[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    zmm14 = _mm_mul_ps(_mm_shuffle_ps(temp0_874, temp0_874, 0xd2), temp0_886)
    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    zmm14 = _mm_sub_ps(zmm14, _mm_mul_ps(_mm_shuffle_ps(temp0_874, temp0_874, 0xc9), zmm4))
    zmm10 = _mm_blend_epi16(temp0_96, zx.o(temp0_190), 3)
    float temp0_895[0x4] =
        _mm_blend_ps(temp0_115, _mm_insert_ps(zx.o(temp0_194), zx.o(temp0_196), 0x10), 3)
    zmm13 =
        _mm_insert_ps(_mm_insert_ps(zx.o(temp0_112), zx.o(temp0_113), 0x10), zx.o(temp0_114), 0x20)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc0), zmm10)
    float temp0_902[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xd5), temp0_895), zmm0)
    zmm14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xea), zmm13), temp0_902)
    zmm7 = var_178
    float temp0_906[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc0)
    float temp0_907[0x4] = _mm_mul_ps(temp0_906, temp0_874)
    arg4 = data_142d3f780
    arg3 = _mm_shuffle_epi32(var_168 ^ arg4, 0xc0)
    zmm6 = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
    float temp0_910[0x4] = _mm_mul_ps(arg3, temp0_874)
    zmm11 = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
    zmm6 = _mm_sub_ps(zmm6, zmm11)
    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    zmm1 = temp0_874 ^ arg4
    zmm5 = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xd2), zmm9)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xc9), zmm6))
    float temp0_921[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0xc0), temp0_174)
    float temp0_924[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd5), var_118), temp0_921)
    zmm5 = _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(zmm5, zmm5, 0xea), var_128), temp0_924)
    float temp0_932[0x4] = _mm_sub_ps(
        _mm_mul_ps(_mm_shuffle_ps(temp0_882, temp0_882, 0xd2), temp0_886), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_882, temp0_882, 0xc9), zmm4))
    float temp0_934[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_932, temp0_932, 0xc0), zmm10)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_932, temp0_932, 0xd5), temp0_895), temp0_934)
    float temp0_940[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_932, temp0_932, 0xea), zmm13), zmm4)
    float temp0_941[0x4] = _mm_mul_ps(temp0_906, temp0_882)
    float temp0_942[0x4] = _mm_mul_ps(arg3, temp0_882)
    zmm8 = temp0_882 ^ data_142d3f780
    float temp0_947[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm8, 0xd2), zmm9), 
        _mm_mul_ps(_mm_shuffle_epi32(zmm8, 0xc9), zmm6))
    float temp0_949[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_947, temp0_947, 0xc0), temp0_174)
    zmm6 = _mm_shuffle_ps(temp0_947, temp0_947, 0xd5)
    zmm8 = arg5
    float temp0_951[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc0)
    float temp0_953[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_907, temp0_951), var_148_2)
    arg1[0xc][0] = temp0_953[0]
    (*arg1)[0x31] = __extractps_memd_xmmps_immb(temp0_953, 1)
    zmm6 = _mm_mul_ps(zmm6, var_118)
    (*arg1)[0x32] = __extractps_memd_xmmps_immb(temp0_953, 2)
    zmm6 = _mm_add_ps(zmm6, temp0_949)
    float temp0_958[0x4] = _mm_shuffle_ps(temp0_947, temp0_947, 0xea)
    float temp0_960[0x4] = _mm_add_ps(_mm_mul_ps(temp0_910, temp0_951), zmm11)
    (*arg1)[0x33] = temp0_960[0]
    arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_960, 1)
    float temp0_962[0x4] = __mulps_xmmps_memps(temp0_958, var_128)
    (*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_960, 2)
    float temp0_964[0x4] = _mm_add_ps(temp0_962, zmm6)
    arg3 = arg1[0xe]
    zmm9 = arg1[0xf]
    zmm14 = _mm_mul_ps(zmm14, temp0_951)
    zmm5 = _mm_mul_ps(zmm5, temp0_951)
    zmm0 = _mm_mul_ps(arg3, zx.o(0))
    float temp0_968[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    float temp0_970[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0x1b), temp0_968)
    zmm4 = data_142d3f7c0
    float temp0_972[0x4] = _mm_add_ps(_mm_mul_ps(temp0_970, zmm4), zmm0)
    zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    float temp0_975[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg3, arg3, 1), zmm0)
    zmm10 = data_142d3f7d0
    float temp0_977[0x4] = _mm_add_ps(_mm_mul_ps(temp0_975, zmm10), temp0_972)
    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xb1), zmm14)
    arg4 = data_142d3f7b0
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, arg4), temp0_977)
    zmm13 = data_142d3f640
    zmm0 = _mm_mul_ps(zmm0, zmm13)
    zmm6 = _mm_mul_ps(zx.o(0), zmm9)
    float temp0_985[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_989[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x1b), temp0_985), zmm4), zmm6)
    float temp0_990[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm9, zmm9, 1), temp0_990), zmm10), 
        temp0_989)
    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    zmm6 = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xb1), zmm5), arg4), zmm4), 
        zmm13)
    zmm0 = _mm_add_ps(zmm0, arg3)
    float temp0_1002[0x4] = _mm_mul_ps(zmm0, zmm0)
    float temp0_1004[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_1002, temp0_1002[0].q), temp0_1002)
    float temp0_1005[0x4] = _mm_movehdup_ps(temp0_1004)
    temp0_1005[0] = temp0_1005[0] + temp0_1004[0]
    zmm13 = _mm_cmpeq_ss(0x322bcc77, temp0_1005[0], 6)
    arg4 = 0x3f000000
    zmm4.d = temp0_1005.d f* 0.5f
    float temp0_1007[0x4] = _mm_rsqrt_ss(temp0_1005[0], temp0_1005[0])
    temp0_1007[0] = temp0_1007[0] * temp0_1007[0]
    temp0_1007[0] = temp0_1007[0] f* zmm4.d
    zmm5.d = 0.5f - temp0_1007[0]
    zmm5.d = zmm5.d f* temp0_1007[0]
    zmm5.d = zmm5.d f+ temp0_1007[0]
    arg3 = zmm5
    arg3[0] = arg3[0] f* zmm5.d
    arg3[0] = arg3[0] f* zmm4.d
    zmm4.d = 0.5f - arg3[0]
    zmm4.d = zmm4.d f* zmm5.d
    zmm4.d = zmm4.d f+ zmm5.d
    zmm13 = _mm_andnot_ps(zmm13, 0xffffffff)
    zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0)
    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0)
    zmm0 = data_142d3f660
    zmm4 = _mm_and_ps(zmm4, zmm13)
    zmm13 = _mm_or_ps(_mm_andnot_ps(zmm13, zmm0), zmm4)
    zmm6 = _mm_add_ps(zmm6, zmm9)
    zmm4 = _mm_mul_ps(zmm6, zmm6)
    zmm5 = _mm_add_ps(_mm_unpackhi_pd(zmm4, zmm4.q), zmm4)
    zmm4.d = _mm_movehdup_ps(zmm5).d f+ zmm5.d
    zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, zmm4.d, 6), 0xffffffff)
    arg3 = zmm4
    arg3[0] = arg3[0] * 0.5f
    zmm4 = _mm_rsqrt_ss(zmm4.d, zmm4.d)
    zmm5.d = zmm4.d f* zmm4.d
    zmm5.d = zmm5.d f* arg3[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f f- zmm5.d
    zmm7[0] = zmm7[0] f* zmm4.d
    zmm7[0] = zmm7[0] f+ zmm4.d
    zmm4.d = zmm7.d f* zmm7[0]
    zmm4.d = zmm4.d f* arg3[0]
    arg4[0] = 0.5f f- zmm4.d
    arg4[0] = arg4[0] * zmm7[0]
    arg4[0] = arg4[0] + zmm7[0]
    float temp0_1024[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), zmm6)
    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
    arg4 = _mm_and_ps(temp0_1024, zmm14)
    zmm14 = _mm_or_ps(_mm_andnot_ps(zmm14, zmm0), arg4)
    zmm0 = _mm_mul_ps(zmm13, zmm14)
    float temp0_1031[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
    float temp0_1032[0x4] = _mm_movehdup_ps(temp0_1031)
    temp0_1032[0] = temp0_1032[0] + temp0_1031[0]
    zmm0 = _mm_cmpeq_ss(0, temp0_1032[0], 2)
    zmm6 = 0x3f800000
    arg3 = _mm_and_ps(zmm0, 0x3f800000)
    zmm9 = 0xbf800000
    zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, 0xbf800000), arg3)
    arg1[0xe] = zmm13
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
    arg3 = _mm_shuffle_epi32(zmm13, 0xc9)
    arg1[0xf] = zmm0
    float temp0_1042[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(arg1[0x10][0].q), (*arg1)[0x42], 0x20), 
        _mm_mul_ps(temp0_941, temp0_951))
    zmm0 = _mm_shuffle_epi32(zmm13, 0xd2)
    zmm4 = _mm_shuffle_epi32(zmm13, 0xff)
    arg1[0x10][0] = temp0_1042[0]
    (*arg1)[0x41] = __extractps_memd_xmmps_immb(temp0_1042, 1)
    (*arg1)[0x42] = __extractps_memd_xmmps_immb(temp0_1042, 2)
    float temp0_1047[0x4] = _mm_mul_ps(temp0_942, temp0_951)
    float temp0_1049[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x10c)), (*arg1)[0x45], 0x20), temp0_1047)
    (*arg1)[0x43] = temp0_1049[0]
    arg1[0x11][0] = __extractps_memd_xmmps_immb(temp0_1049, 1)
    (*arg1)[0x45] = __extractps_memd_xmmps_immb(temp0_1049, 2)
    float temp0_1052[0x4] = _mm_mul_ps(temp0_940, temp0_951)
    float temp0_1054[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x118)), arg1[0x12][0], 0x20), temp0_1052)
    (*arg1)[0x46] = temp0_1054[0]
    (*arg1)[0x47] = __extractps_memd_xmmps_immb(temp0_1054, 1)
    arg1[0x12][0] = __extractps_memd_xmmps_immb(temp0_1054, 2)
    float temp0_1057[0x4] = _mm_mul_ps(temp0_951, temp0_964)
    float temp0_1059[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x124)), (*arg1)[0x4b], 0x20), temp0_1057)
    (*arg1)[0x49] = temp0_1059[0]
    (*arg1)[0x4a] = __extractps_memd_xmmps_immb(temp0_1059, 1)
    (*arg1)[0x4b] = __extractps_memd_xmmps_immb(temp0_1059, 2)
    zmm1 = (*arg1)[6]
    arg4 = arg1[1][0]
    zmm5 = _mm_insert_ps(zx.o(arg1[1][0].q), zmm1, 0x20)
    float temp0_1068[0x4] = _mm_sub_ps(
        _mm_mul_ps(__insertps_xmmps_memd_immb(_mm_insert_ps(zmm1, arg4, 0x10), (*arg1)[5], 0x20), 
            arg3), 
        _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x14)), arg4, 0x20), zmm0))
    zmm1 = _mm_add_ps(temp0_1068, temp0_1068)
    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(zmm4, zmm1))
else
    zmm11 = zx.o(0)
    zmm1 = zx.o(0)
    zmm15 = zx.o(0)
    zmm0 = zx.o(0)
    zmm13 = zx.o(0)
    zmm8 = zx.o(0)
    
    if (not(var_178.d f<= 0f))
        zmm1 = data_142d3f780
        zmm7 = zmm14 ^ zmm1
        zmm15 = temp0_193 ^ zmm1
        zmm1 ^= arg4
        zmm0 = _mm_shuffle_epi32(zmm7, 0x80)
        zmm10 = zx.o(temp0_196)
        zmm9 = zx.o(temp0_194)
        zmm11 = zx.o(temp0_113)
        zmm13 = _mm_insert_ps(_mm_shuffle_ps(zmm11, zmm11, 0xe0), zmm10, 0x20)
        zmm5 = zx.o(temp0_114)
        zmm4 = zmm5
        zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, zmm11, 0x10), zmm10, 0x20)
        float temp0_204[0x4] =
            _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm10, zmm9, 0x10), zmm9, 0x20), zmm0)
        float temp0_205[0x4] = _mm_shuffle_ps(arg4, arg4, 0xd5)
        zmm6 = zx.o(temp0_112)
        zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xe0), zmm11, 0x20)
        zmm11 = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm11, zmm6, 0x10), zmm6, 0x20), temp0_205), 
            temp0_204)
        float temp0_214[0x4] =
            _mm_mul_ps(_mm_insert_ps(_mm_unpacklo_ps(zmm7, zmm14.q), zmm15, 0x20), zmm11)
        zmm13 = _mm_mul_ps(zmm13, zmm0)
        zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, temp0_205), zmm13)
        float temp0_220[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(temp0_193, zmm1, 0x10)[0].q | arg4[0].q << 0x40, zmm4), 
            temp0_214)
        float temp0_221[0x4] = __blendps_xmmdq_memdq_immb(zx.o(0), var_178, 1)
        float temp0_222[0x4] = _mm_add_ps(temp0_220, temp0_221)
        zmm4 = _mm_insert_ps(_mm_insert_ps(zmm14, zmm14, 0x10), zmm15, 0x20)
        zmm7 = zx.o(temp0_190)
        float temp0_226[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc0), zmm4)
        float temp0_227[0x4] = _mm_shuffle_ps(zmm1, arg4, 0x40)
        zmm0 = _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(zmm6, zmm6, 0xe0), zmm9, 0x20), temp0_227), 
            temp0_226)
        zmm14 = _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm14, zmm15, 0x10), zmm15, 0x20), zmm0)
        zmm6 = _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm9, 0x10), zmm9, 0x20), zmm4)
        zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, temp0_227), zmm6)
        float temp0_243[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm1, arg4, 0), arg4, 0xc8), zmm5), zmm14)
        zmm0 = _mm_add_ps(_mm_broadcastsd_pd(temp0_221[0].q), temp0_243)
        zmm13 = _mm_movehdup_ps(temp0_222)
        zmm15 = _mm_unpackhi_pd(temp0_222, temp0_222[0].q)
        zmm1 = _mm_movehdup_ps(zmm0)
        zmm11 = _mm_unpackhi_pd(zmm0, zmm0.q)
        zmm8 = temp0_222
    
    float var_108[0x4] = zmm1
    int32_t var_158 = zmm0.d
    zmm4 = _mm_sub_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20), 
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20))
    zmm9 = data_142d3f780
    arg3 = _mm_unpackhi_pd(zmm4, zmm4.q)
    zmm1 = arg3 ^ zmm9
    zmm0 = _mm_movehdup_ps(zmm4)
    zmm12 = _mm_shuffle_epi32(zmm1, 0x80)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(var_118, var_118, 0xc1), zmm12)
    float temp0_258[0x4] = _mm_insert_ps(zmm1, zmm4, 0x9c)
    zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0xd5)
    zmm10 = var_128
    float temp0_262[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xc1), zmm6), zmm5)
    zmm7 = zmm0 ^ zmm9
    float temp0_264[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_258, zmm7, 0x20), temp0_262)
    zmm5 = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(zmm10), var_118, 0x68), zmm12)
    float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xda), zmm6)
    zmm6 = zmm4 ^ zmm9
    zmm0 = _mm_insert_ps(zmm0, zmm6, 0x10).q | zmm4.q << 0x40
    float temp0_271[0x4] = _mm_add_ps(temp0_269, zmm5)
    zmm5 = _mm_shuffle_ps(zmm6, zmm4, 0x40)
    zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0), zmm4, 0xc8)
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, temp0_271), temp0_264)
    zmm4 = _mm_insert_ps(_mm_shuffle_ps(zmm4, zmm4, 0xea), zmm7, 0x20)
    float temp0_280[0x4] = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(var_118, zmm10, 0x30), 0x80)
    float temp0_282[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xc0), zmm4)
    float temp0_284[0x4] = _mm_add_ps(_mm_mul_ps(temp0_280, zmm5), temp0_282)
    float temp0_287[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg3, zmm7, 0x10), zmm7, 0x20), temp0_284)
    float temp0_288[0x4] = _mm_shuffle_ps(zmm10, var_118, 0xc)
    float temp0_290[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_288, temp0_288, 0x78), zmm4)
    zmm6 = _mm_add_ps(
        _mm_mul_ps(zmm6, 
            _mm_add_ps(
                _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(zmm10, zmm10, 0xe6), var_118, 0x68), zmm5), 
                temp0_290)), 
        temp0_287)
    float temp0_297[0x4] = __blendps_xmmdq_memdq_immb(zx.o(0), var_168, 1)
    zmm0 = _mm_add_ps(zmm0, temp0_297)
    float temp0_300[0x4] = _mm_add_ps(_mm_broadcastsd_pd(temp0_297[0].q), zmm6)
    float temp0_301[0x4] = _mm_insert_ps(zmm8, zmm13, 0x10)
    zmm13 = __insertps_xmmps_memd_immb(zmm13, var_158, 0x10)
    float temp0_303[0x4] = _mm_insert_ps(temp0_301, zmm15, 0x20)
    zmm13 = _mm_insert_ps(zmm13, var_108, 0x20)
    float temp0_306[0x4] = _mm_insert_ps(_mm_insert_ps(zmm15, var_108, 0x10), zmm11, 0x20)
    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, temp0_300, 5), temp0_300, 0xd8)
    float temp0_309[0x4] = _mm_add_ps(temp0_303, zmm0)
    zmm0.q = zmm0 u>> 0x40
    zmm0 = _mm_add_ps(_mm_blend_ps(zmm0, temp0_300, 0xe), temp0_306)
    int32_t temp0_312 = _mm_extract_ps(zmm0, 0)
    int32_t temp0_313 = _mm_extract_ps(zmm0, 1)
    int32_t temp0_314 = _mm_extract_ps(zmm0, 2)
    zmm0 = __cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_309, 0x800000, 0x30), 
            data_142d3f770), 
        data_142d3f5c0, 2)
    zmm11 = _mm_add_ps(zmm11, zmm13)
    result = _mm_movemask_ps(zmm0)
    
    if (result != 0xf)
    label_140025e56:
        zmm0 = _mm_movehdup_ps(temp0_309)
        arg4 = _mm_unpackhi_pd(temp0_309, temp0_309[0].q)
        zmm9 = _mm_insert_ps(zmm11, temp0_309, 0x8a)
        zmm6 = zx.o(temp0_312)
        arg3 = zx.o(temp0_313)
        float temp0_333[0x4] = _mm_insert_ps(zmm6, arg3, 0x1c)
        zmm14 = zx.o(temp0_314)
        zmm5 = data_142d3f660
        zmm4 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(temp0_309, arg4, 0x10), zmm6, 0x20), 
            zmm14, 0x30)
        zmm5 = _mm_mul_ps(_mm_insert_ps(zmm5, zmm11, 0x46), zmm4)
        zmm0 = _mm_insert_ps(zmm0, arg3, 0x2a)
        zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_insert_ps(zmm11, zmm11, 0x9c), zmm0))
        float temp0_343[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_344[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        zmm13 = 0x3f800000
        float temp0_351[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm14, 0), temp0_333), 
            _mm_mul_ps(_mm_unpacklo_ps(zmm6, arg3[0].q).q << 0x40, zx.o(0)))
        zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm11, temp0_309, 5), zmm9)
        float temp0_354[0x4] = _mm_shuffle_ps(temp0_309, zmm11, 5)
        zmm4 = _mm_sub_ps(zmm4, _mm_mul_ps(_mm_insert_ps(temp0_309, zmm11, 0x8a), temp0_354))
        float temp0_358[0x4] = _mm_mul_ps(temp0_343, zmm5)
        float temp0_360[0x4] = _mm_add_ps(_mm_mul_ps(temp0_344, zmm0), temp0_358)
        float temp0_362[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_351, temp0_351, 0xd8), zmm4)
        float temp0_364[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_362, temp0_362, 1), temp0_362)
        float temp0_367[0x4] =
            _mm_sub_ps(temp0_360, _mm_add_ps(_mm_shuffle_ps(temp0_364, temp0_364, 0x39), temp0_364))
        temp0_367[0] - 0f
        
        if (temp0_367[0] != 0f || not(is_ordered.d(temp0_367[0], 0f)))
            zmm1 = temp0_309[0].q | zmm11.q << 0x40
            zmm13 = __insertps_xmmps_memd_immb(zmm14, 0x3f800000, 0x36)
            int32_t var_158_1 = zmm6.d
            zmm6 = _mm_shuffle_ps(temp0_309, zmm11, 0x20)
            float temp0_371[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_351[0].q), zmm6)
            zmm6 =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_351, temp0_351, 0x20), zmm1), temp0_371)
            zmm0 = _mm_sub_ps(_mm_mul_ps(zmm0, zmm9), zmm6)
            zmm6 = _mm_insert_ps(data_142d4cc30, zmm14, 0x10)
            float temp0_379[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x66), zmm6)
            zmm6 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x33), zmm13), temp0_379)
            float temp0_384[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_344, temp0_333), zmm6)
            zmm13 = _mm_mul_ps(zmm13, temp0_343)
            zmm6 = _mm_broadcastsd_pd(zmm4.q)
            zmm4.q = zmm4 u>> 0x40
            zmm4 = _mm_mul_ps(zmm4, temp0_333)
            zmm13 = _mm_sub_ps(zmm13, 
                _mm_add_ps(
                    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_379, var_158_1, 0x1d), zmm6), zmm4))
            float temp0_392[0x4] = _mm_mul_ps(zmm1, zmm5)
            zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_351, temp0_351, 0xcc), zmm9)
            zmm5 = _mm_insert_ps(_mm_insert_ps(zmm5, temp0_309, 0x9d), zmm11, 0xb0)
            float temp0_400[0x4] = _mm_sub_ps(temp0_392, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_351, temp0_351, 0x66), zmm5), zmm4))
            float temp0_401[0x4] = _mm_div_ps(data_142fc92f0, temp0_367)
            float temp0_402[0x4] = _mm_mul_ps(temp0_400, temp0_401)
            float temp0_403[0x4] = _mm_mul_ps(temp0_384, temp0_401)
            zmm0 = _mm_shuffle_ps(_mm_mul_ps(zmm0, temp0_401), _mm_mul_ps(temp0_401, zmm13), 0x77)
            zmm13 = _mm_shuffle_ps(temp0_402, temp0_403, 0x77)
            zmm1 = _mm_shuffle_ps(temp0_402, temp0_403, 0x22)
        else
            zmm1 = data_142d4cc20
            zmm0 = data_142d4cc30
        
        zmm8 = _mm_movehdup_ps(zmm13)
        arg3 = _mm_unpackhi_pd(zmm13, zmm13.q)
        zmm4 = _mm_shuffle_ps(zmm13, zmm13, 0xe7)
        zmm9 = _mm_movehdup_ps(zmm1)
        zmm5 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
        zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
        zmm10 = _mm_movehdup_ps(zmm0)
        zmm6 = _mm_unpackhi_pd(zmm0, zmm0.q)
        arg4 = _mm_shuffle_ps(zmm0, zmm0, 0xe7)
    else
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(zmm11, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_140025e56
        
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                __insertps_xmmps_memd_immb(
                    _mm_insert_ps(_mm_insert_ps(zx.o(temp0_312), zx.o(temp0_313), 0x10), 
                        zx.o(temp0_314), 0x20), 
                    0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_140025e56
        
        zmm6 = 0x3f800000
        arg4 = zx.o(0)
        zmm10 = zx.o(0)
        zmm0 = zx.o(0)
        zmm7 = zx.o(0)
        zmm5 = zx.o(0)
        zmm9 = 0x3f800000
        zmm1 = zx.o(0)
        zmm4 = zx.o(0)
        arg3 = zx.o(0)
        zmm8 = zx.o(0)
        zmm13 = 0x3f800000
    
    zmm0 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm10, 0x10), zmm6, 0x20), arg4, 0x30)
    float temp0_640[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm1, zmm9, 0x10), zmm5, 0x20), zmm7, 0x30)
    zmm13 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm13, zmm8, 0x10), arg3, 0x20), zmm4, 0x30)
    arg3 = *arg2
    arg4 = *(arg2 + 4)
    float temp0_645[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm13)
    float temp0_648[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_640), temp0_645)
    zmm4 = arg2[1].d
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm0), temp0_648)
    float temp0_653[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0), zmm13)
    float temp0_656[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x55), temp0_640), temp0_653)
    float temp0_659[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0xaa), zmm0), temp0_656)
    zmm0 = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
    float temp0_661[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
    zmm0 = _mm_sub_ps(zmm0, temp0_661)
    float temp0_663[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
    float temp0_665[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_663)
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    float temp0_669[0x4] = _mm_sub_ps(temp0_665, _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm0))
    zmm11 = _mm_blend_epi16(temp0_96, zx.o(temp0_190), 3)
    float temp0_672[0x4] =
        _mm_blend_ps(temp0_115, _mm_insert_ps(zx.o(temp0_194), zx.o(temp0_196), 0x10), 3)
    zmm13 =
        _mm_insert_ps(_mm_insert_ps(zx.o(temp0_112), zx.o(temp0_113), 0x10), zx.o(temp0_114), 0x20)
    float temp0_676[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_669, temp0_669, 0xc0), zmm11)
    float temp0_679[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_669, temp0_669, 0xd5), temp0_672), temp0_676)
    float temp0_682[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_669, temp0_669, 0xea), zmm13), temp0_679)
    zmm5 = _mm_shuffle_ps(var_178, var_178, 0xc0)
    uint128_t var_178_1 = zmm5
    zmm5 = _mm_mul_ps(zmm5, zmm4)
    arg3 = data_142d3f780
    arg4 = arg3
    arg3 = _mm_shuffle_epi32(var_168 ^ arg3, 0xc0)
    zmm6 = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
    float temp0_687[0x4] = _mm_mul_ps(arg3, zmm4)
    zmm14 = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
    zmm6 = _mm_sub_ps(zmm6, zmm14)
    zmm9 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    zmm4 ^= arg4
    float temp0_692[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm4, 0xd2), zmm9)
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
    float temp0_696[0x4] = _mm_sub_ps(temp0_692, _mm_mul_ps(_mm_shuffle_epi32(zmm4, 0xc9), zmm6))
    zmm4 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_696, temp0_696, 0xc0), temp0_174)
    float temp0_701[0x4] =
        _mm_add_ps(__mulps_xmmps_memps(_mm_shuffle_ps(temp0_696, temp0_696, 0xd5), var_118), zmm4)
    float temp0_704[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_696, temp0_696, 0xea), var_128), temp0_701)
    float temp0_709[0x4] = _mm_sub_ps(
        _mm_mul_ps(_mm_shuffle_ps(temp0_659, temp0_659, 0xd2), temp0_663), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_659, temp0_659, 0xc9), zmm0))
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_709, temp0_709, 0xc0), zmm11)
    float temp0_714[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_709, temp0_709, 0xd5), temp0_672), zmm0)
    float temp0_717[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_709, temp0_709, 0xea), zmm13), temp0_714)
    float temp0_718[0x4] = _mm_mul_ps(var_178_1, temp0_659)
    uint128_t var_168_2 = _mm_mul_ps(arg3, temp0_659)
    zmm8 = temp0_659 ^ data_142d3f780
    zmm13 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm8, 0xd2), zmm9), 
        _mm_mul_ps(_mm_shuffle_epi32(zmm8, 0xc9), zmm6))
    zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), temp0_174)
    float temp0_727[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd5)
    zmm8 = arg5
    float temp0_728[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc0)
    zmm5 = __addps_xmmps_memps(_mm_mul_ps(zmm5, temp0_728), temp0_661)
    arg1[0xc][0] = zmm5.d
    (*arg1)[0x31] = __extractps_memd_xmmps_immb(zmm5, 1)
    float temp0_732[0x4] = __mulps_xmmps_memps(temp0_727, var_118)
    (*arg1)[0x32] = __extractps_memd_xmmps_immb(zmm5, 2)
    float temp0_734[0x4] = _mm_add_ps(temp0_732, zmm0)
    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xea)
    float temp0_737[0x4] = _mm_add_ps(_mm_mul_ps(temp0_687, temp0_728), zmm14)
    (*arg1)[0x33] = temp0_737[0]
    arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_737, 1)
    zmm13 = _mm_mul_ps(zmm13, var_128)
    (*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_737, 2)
    zmm13 = _mm_add_ps(zmm13, temp0_734)
    arg3 = arg1[0xe]
    zmm9 = arg1[0xf]
    float temp0_742[0x4] = _mm_mul_ps(temp0_682, temp0_728)
    float temp0_743[0x4] = _mm_mul_ps(temp0_704, temp0_728)
    zmm0 = _mm_mul_ps(arg3, zx.o(0))
    float temp0_745[0x4] = _mm_shuffle_ps(temp0_742, temp0_742, 0)
    zmm5 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0x1b), temp0_745)
    zmm11 = data_142d3f7c0
    zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm11), zmm0)
    zmm0 = _mm_shuffle_ps(temp0_742, temp0_742, 0x55)
    float temp0_752[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg3, arg3, 1), zmm0)
    zmm10 = data_142d3f7d0
    float temp0_754[0x4] = _mm_add_ps(_mm_mul_ps(temp0_752, zmm10), zmm5)
    float temp0_755[0x4] = _mm_shuffle_ps(temp0_742, temp0_742, 0xaa)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xb1), temp0_755)
    zmm4 = data_142d3f7b0
    zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm4), temp0_754)
    zmm14 = data_142d3f640
    zmm0 = _mm_mul_ps(zmm0, zmm14)
    zmm6 = _mm_mul_ps(zx.o(0), zmm9)
    float temp0_762[0x4] = _mm_shuffle_ps(temp0_743, temp0_743, 0)
    zmm5 =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x1b), temp0_762), zmm11), zmm6)
    float temp0_767[0x4] = _mm_shuffle_ps(temp0_743, temp0_743, 0x55)
    float temp0_771[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm9, zmm9, 1), temp0_767), zmm10), zmm5)
    float temp0_772[0x4] = _mm_shuffle_ps(temp0_743, temp0_743, 0xaa)
    zmm6 = _mm_mul_ps(
        _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xb1), temp0_772), zmm4), 
            temp0_771), 
        zmm14)
    zmm0 = _mm_add_ps(zmm0, arg3)
    float temp0_779[0x4] = _mm_mul_ps(zmm0, zmm0)
    float temp0_781[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_779, temp0_779[0].q), temp0_779)
    float temp0_782[0x4] = _mm_movehdup_ps(temp0_781)
    temp0_782[0] = temp0_782[0] + temp0_781[0]
    uint128_t temp0_783 = _mm_cmpeq_ss(0x322bcc77, temp0_782[0], 6)
    zmm7 = 0x3f000000
    temp0_782[0] = temp0_782[0] * 0.5f
    float temp0_784[0x4] = _mm_rsqrt_ss(temp0_782[0], temp0_782[0])
    zmm4.d = temp0_784.d f* temp0_784[0]
    zmm4.d = zmm4.d f* temp0_782[0]
    zmm5.d = 0.5f f- zmm4.d
    zmm5.d = zmm5.d f* temp0_784[0]
    zmm5.d = zmm5.d f+ temp0_784[0]
    zmm1 = zmm5
    zmm1[0] = zmm1[0] f* zmm5.d
    zmm1[0] = zmm1[0] * temp0_782[0]
    arg3 = 0x3f000000
    arg3[0] = 0.5f - zmm1[0]
    arg3[0] = arg3[0] f* zmm5.d
    arg3[0] = arg3[0] f+ zmm5.d
    zmm14 = _mm_andnot_ps(temp0_783, 0xffffffff)
    float temp0_787[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm0)
    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0)
    zmm0 = data_142d3f660
    arg3 = _mm_and_ps(temp0_787, zmm14)
    zmm14 = _mm_or_ps(_mm_andnot_ps(zmm14, zmm0), arg3)
    zmm6 = _mm_add_ps(zmm6, zmm9)
    float temp0_793[0x4] = _mm_mul_ps(zmm6, zmm6)
    zmm4 = _mm_add_ps(_mm_unpackhi_pd(temp0_793, temp0_793[0].q), temp0_793)
    float temp0_796[0x4] = _mm_movehdup_ps(zmm4)
    temp0_796[0] = temp0_796[0] f+ zmm4.d
    arg4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_796[0], 6), 0xffffffff)
    temp0_796[0] = temp0_796[0] * 0.5f
    float temp0_799[0x4] = _mm_rsqrt_ss(temp0_796[0], temp0_796[0])
    zmm4.d = temp0_799.d f* temp0_799[0]
    zmm4.d = zmm4.d f* temp0_796[0]
    zmm5.d = 0.5f f- zmm4.d
    zmm5.d = zmm5.d f* temp0_799[0]
    zmm5.d = zmm5.d f+ temp0_799[0]
    arg3 = zmm5
    arg3[0] = arg3[0] f* zmm5.d
    arg3[0] = arg3[0] * temp0_796[0]
    zmm7[0] = 0.5f - arg3[0]
    zmm7[0] = zmm7[0] f* zmm5.d
    zmm7[0] = zmm7[0] f+ zmm5.d
    float temp0_801[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm6)
    float temp0_802[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
    zmm7 = _mm_and_ps(temp0_801, temp0_802)
    arg4 = _mm_or_ps(_mm_andnot_ps(temp0_802, zmm0), zmm7)
    zmm0 = _mm_mul_ps(zmm14, arg4)
    float temp0_808[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
    float temp0_809[0x4] = _mm_movehdup_ps(temp0_808)
    temp0_809[0] = temp0_809[0] + temp0_808[0]
    zmm0 = _mm_cmpeq_ss(0, temp0_809[0], 2)
    zmm6 = 0x3f800000
    zmm1 = _mm_and_ps(zmm0, 0x3f800000)
    zmm9 = 0xbf800000
    zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, 0xbf800000), zmm1)
    arg1[0xe] = zmm14
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg4)
    arg3 = _mm_shuffle_epi32(zmm14, 0xc9)
    arg1[0xf] = zmm0
    float temp0_819[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(arg1[0x10][0].q), (*arg1)[0x42], 0x20), 
        _mm_mul_ps(temp0_718, temp0_728))
    zmm0 = _mm_shuffle_epi32(zmm14, 0xd2)
    arg4 = _mm_shuffle_epi32(zmm14, 0xff)
    arg1[0x10][0] = temp0_819[0]
    (*arg1)[0x41] = __extractps_memd_xmmps_immb(temp0_819, 1)
    (*arg1)[0x42] = __extractps_memd_xmmps_immb(temp0_819, 2)
    zmm4 = _mm_mul_ps(var_168_2, temp0_728)
    float temp0_826[0x4] =
        _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x10c)), (*arg1)[0x45], 0x20), zmm4)
    (*arg1)[0x43] = temp0_826[0]
    arg1[0x11][0] = __extractps_memd_xmmps_immb(temp0_826, 1)
    (*arg1)[0x45] = __extractps_memd_xmmps_immb(temp0_826, 2)
    float temp0_829[0x4] = _mm_mul_ps(temp0_717, temp0_728)
    float temp0_831[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x118)), arg1[0x12][0], 0x20), temp0_829)
    (*arg1)[0x46] = temp0_831[0]
    (*arg1)[0x47] = __extractps_memd_xmmps_immb(temp0_831, 1)
    arg1[0x12][0] = __extractps_memd_xmmps_immb(temp0_831, 2)
    float temp0_834[0x4] = _mm_mul_ps(temp0_728, zmm13)
    float temp0_836[0x4] = _mm_add_ps(
        __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x124)), (*arg1)[0x4b], 0x20), temp0_834)
    (*arg1)[0x49] = temp0_836[0]
    (*arg1)[0x4a] = __extractps_memd_xmmps_immb(temp0_836, 1)
    (*arg1)[0x4b] = __extractps_memd_xmmps_immb(temp0_836, 2)
    zmm1 = (*arg1)[6]
    zmm4 = arg1[1][0]
    zmm5 = _mm_insert_ps(zx.o(arg1[1][0].q), zmm1, 0x20)
    float temp0_845[0x4] = _mm_sub_ps(
        _mm_mul_ps(__insertps_xmmps_memd_immb(_mm_insert_ps(zmm1, zmm4, 0x10), (*arg1)[5], 0x20), 
            arg3), 
        _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x14)), zmm4, 0x20), zmm0))
    zmm1 = _mm_add_ps(temp0_845, temp0_845)
    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(arg4, zmm1))
float temp0_1077[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), arg3), 
        _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), zmm0)), 
    zmm5)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20), temp0_1077)
arg1[8][0] = zmm0.d
(*arg1)[0x21] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(zmm0, 2)
zmm1 = arg1[0xf][0]
zmm0 = (*arg1)[0x3e]
arg4 = (*arg1)[0x12]
zmm4 = arg1[4][0]
arg3 = zx.o(*(arg1 + 0xf4))
zmm5 = _mm_insert_ps(zx.o(arg1[4][0].q), arg4, 0x20)
float temp0_1084[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg4, zmm4, 0x10), (*arg1)[0x11], 0x20)
float temp0_1085[0x4] = _mm_insert_ps(arg3, zmm1, 0x20)
zmm0 = __insertps_xmmps_memd_immb(_mm_insert_ps(zmm0, zmm1, 0x10), (*arg1)[0x3d], 0x20)
float temp0_1091[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_1084, temp0_1085), 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm4, 0x20), zmm0))
float temp0_1092[0x4] = _mm_add_ps(temp0_1091, temp0_1091)
zmm1 = (*arg1)[0x3f]
zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc0), temp0_1092))
zmm4 = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_1092, temp0_1092, 0xd2), temp0_1085), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_1092, temp0_1092, 0xc9), zmm0)), 
    zmm5)
zmm0 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20), zmm4)
(*arg1)[0x23] = zmm0.d
arg1[9][0] = __extractps_memd_xmmps_immb(zmm0, 1)
(*arg1)[0x25] = __extractps_memd_xmmps_immb(zmm0, 2)
zmm5 = (*arg1)[0x3b]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
arg3 = *arg1
zmm5 = _mm_mul_ps(zmm5, arg3)
zmm7 = arg1[0xe][0]
float temp0_1108[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
arg4 = (*arg1)[3]
zmm11 = (*arg1)[2]
zmm0 = (*arg1)[1]
zmm4 = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg4, zmm11, 0x10), zmm0, 0x20), arg3, 0x30), 
    temp0_1108)
zmm12 = data_142d3f7c0
zmm4 = _mm_add_ps(_mm_mul_ps(zmm4, zmm12), zmm5)
zmm5 = (*arg1)[0x39]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_1120[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), arg3, 0x20), zmm0, 0x30), zmm5), 
        zmm10), 
    zmm4)
zmm4 = (*arg1)[0x3a]
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm0 = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, arg3, 0x10), arg4, 0x20), zmm11, 0x30), zmm4)
zmm8 = data_142d3f7b0
zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm8), temp0_1120)
arg4 = arg1[3]
zmm7 = arg1[0xf][0]
float temp0_1128[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm4 = (*arg1)[0xf]
zmm11 = (*arg1)[0xe]
arg3 = (*arg1)[0xd]
zmm5 = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm11, 0x10), arg3, 0x20), arg4, 0x30), 
    temp0_1128)
float temp0_1134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg4)
zmm5 = _mm_add_ps(_mm_mul_ps(zmm5, zmm12), temp0_1134)
zmm1 = (*arg1)[0x3d]
float temp0_1137[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_1142[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), arg4, 0x20), arg3, 0x30), 
            temp0_1137), 
        zmm10), 
    zmm5)
float temp0_1145[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg3, arg4, 0x10), zmm4, 0x20), zmm11, 0x30)
zmm1 = (*arg1)[0x3e]
float temp0_1149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_1145, _mm_shuffle_ps(zmm1, zmm1, 0)), zmm8), temp0_1142)
arg1[0xa] = zmm0
zmm0 = _mm_mul_ps(zmm0, temp0_1149)
float temp0_1152[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0.q), zmm0)
zmm0.d = _mm_movehdup_ps(temp0_1152).d f+ temp0_1152[0]
float temp0_1154[0x4] = _mm_cmpeq_ss(0, zmm0.d, 2)
zmm6 = _mm_and_ps(zmm6, temp0_1154)
zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_1154, zmm9), zmm6)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_1149)
return result
