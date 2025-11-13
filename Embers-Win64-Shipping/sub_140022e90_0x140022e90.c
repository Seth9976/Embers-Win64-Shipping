// 函数: sub_140022e90
// 地址: 0x140022e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_a8[0x4] = arg8
float var_b8[0x4] = arg7
float var_c8[0x4] = arg6
int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
float result_8[0x4] = arg1[rax + 0xe]
float temp0[0x4] = _mm_add_ps(result_8, result_8)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_8, result_8, 0), temp0)
float zmm1[0x4] = arg1[rax][0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
float zmm2[0x4] = arg1[rax][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[rax][0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float temp0_17[0x4] = _mm_sub_ps(data_142d3f670, temp0_16)
float temp0_18[0x4] = __insertps_xmmps_memd_immb(arg8, (*arg1)[rdx + 0x19], 0x1d)
float zmm11[0x4] = (*arg1)[rdx + 0x18]
float temp0_19[0x4] = __insertps_xmmps_memd_immb(arg7, (*arg1)[rdx + 0x1a], 0x2b)
float temp0_22[0x4] =
    _mm_blend_ps(_mm_insert_ps(_mm_insert_ps(arg6, temp0_11, 0x4e), temp0_12, 0x14), temp0_17, 4)
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
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_18), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc0), temp0_26)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd5), temp0_31), temp0_52)
float result_7[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xea), temp0_22), temp0_55)
float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc0), temp0_26)
float temp0_62[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd5), temp0_31), temp0_59)
float temp0_65[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xea), temp0_22), temp0_62)
float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_26)
float temp0_70[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_31), temp0_67)
float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_22)
uint128_t result_4 =
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (rdx << 2) + 0x80)), (*arg1)[rdx + 0x22], 0x20)
float zmm12[0x4] = _mm_add_ps(temp0_72, temp0_70)
uint128_t zmm15 =
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (rdx << 2) + 0xc0)), (*arg1)[rdx + 0x32], 0x20)
result_4 = _mm_sub_ps(result_4, zmm15)
zmm11 = data_142d3f780
zmm2 = _mm_unpackhi_pd(result_4, result_4.q)
result_8 = zmm2 ^ zmm11
float temp0_78[0x4] = _mm_movehdup_ps(result_4)
arg5 = temp0_78 ^ zmm11
float result[0x4] = _mm_shuffle_epi32(result_8, 0x80)
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xc1), result)
float temp0_82[0x4] = _mm_shuffle_ps(result_4, result_4, 0xd5)
float temp0_85[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc1), temp0_82), temp0_81)
float result_1[0x4] = result_4 ^ zmm11
float temp0_88[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(result_8, result_4, 0x9c), arg5, 0x20), temp0_85)
float temp0_91[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(zmm12), temp0_65, 0x68), result)
float temp0_94[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xda), temp0_82), temp0_91)
float temp0_97[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(temp0_78, result_1, 0x10)[0].q | result_4.q << 0x40, temp0_94), 
    temp0_88)
float temp0_99[0x4] = _mm_insert_ps(_mm_shuffle_ps(result_4, result_4, 0xea), arg5, 0x20)
float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_7, result_7, 0xc0), temp0_99)
float temp0_103[0x4] = _mm_shuffle_ps(zmm12, _mm_shuffle_ps(temp0_65, zmm12, 0x30), 0x80)
float temp0_104[0x4] = _mm_shuffle_ps(result_1, result_4, 0x40)
float temp0_106[0x4] = _mm_add_ps(_mm_mul_ps(temp0_103, temp0_104), temp0_101)
arg6 = (*arg1)[rax + 0x1e]
float temp0_108[0x4] = _mm_insert_ps(_mm_insert_ps(zmm2, arg5, 0x10), arg5, 0x20)
arg5 = *arg10
float temp0_109[0x4] = _mm_mul_ps(temp0_108, temp0_106)
float temp0_110[0x4] = _mm_shuffle_ps(zmm12, temp0_65, 0xc)
float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x78), temp0_99)
float temp0_115[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(zmm12, zmm12, 0xe6), temp0_65, 0x68), temp0_104)
result_8 = arg9
uint32_t temp0_116 = _mm_movemask_ps(arg5)
int32_t temp0_117 = _mm_extract_ps(result_7, 1)
int32_t temp0_118 = _mm_extract_ps(result_7, 2)
int32_t temp0_119 = _mm_extract_ps(temp0_65, 2)
float temp0_120[0x4] = _mm_add_ps(temp0_115, temp0_112)
float temp0_121[0x4] = _mm_movehdup_ps(temp0_65)
float temp0_125[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(result_1, result_4, 0), result_4, 0xc8), temp0_120), 
    temp0_109)
float temp0_127[0x4] = _mm_add_ps(_mm_broadcastsd_pd(arg6[0].q), temp0_125)
int32_t result_9 = _mm_extract_ps(temp0_127, 0)
int32_t result_2 = _mm_extract_ps(temp0_127, 1)
int32_t temp0_128 = _mm_extract_ps(temp0_127, 2)
float temp0_129[0x4] = _mm_add_ps(temp0_97, arg6)
float temp0_130[0x4] = _mm_movehdup_ps(temp0_129)
float temp0_131[0x4] = __insertps_xmmps_memd_immb(temp0_129, 0x800000, 0x30)
float result_5[0x4] = _mm_unpackhi_pd(temp0_129, temp0_129[0].q)
zmm2 = __andps_xmmxud_memxud(temp0_131, data_142d3f770)
uint128_t var_188 = zmm15
uint128_t result_3 = result_4
int32_t var_e8 = temp0_121[0]
float var_f8[0x4] = arg6
float temp0_134[0x4] = __cmpps_xmmps_memps_immb(zmm2, data_142d3f5c0, 2)
float result_10[0x4]

if (temp0_116 != 0xf)
    result = _mm_cmpeq_epi32(arg5, zx.o(0))
    result_10 = zx.o(result_9)
    result_1 = zx.o(result_2)
    
    if (_mm_movemask_ps(_mm_or_ps(temp0_134, result)) != 0xf)
    label_140023626:
        result_4 = result_5
        float temp0_245[0x4] = _mm_insert_ps(result_5, result_1, 0x2a)
        float temp0_246[0x4] = _mm_insert_ps(result_5, result_1, 0x1c)
        arg6 = zx.o(temp0_128)
        float temp0_249[0x4] = _mm_insert_ps(
            _mm_insert_ps(_mm_insert_ps(temp0_129, result_4, 0x10), result_4, 0x20), arg6, 0x30)
        float temp0_251[0x4] =
            _mm_mul_ps(__insertps_xmmps_memd_immb(result_10, 0x3f800000, 0x36), temp0_249)
        float temp0_252[0x4] = _mm_insert_ps(temp0_130, result_1, 0x2a)
        float temp0_255[0x4] =
            _mm_sub_ps(temp0_251, _mm_mul_ps(_mm_insert_ps(temp0_130, result_1, 0x1c), temp0_252))
        result = result_1
        float temp0_256[0x4] = _mm_shuffle_ps(temp0_255, temp0_255, 0)
        float temp0_257[0x4] = _mm_shuffle_ps(temp0_255, temp0_255, 0x55)
        zmm15 = _mm_shuffle_ps(temp0_255, temp0_255, 0xaa)
        float temp0_259[0x4] = _mm_shuffle_ps(temp0_255, temp0_255, 0xff)
        zmm2 = 0x3f800000
        float temp0_264[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, arg6, 0), temp0_246), 
            _mm_mul_ps(_mm_unpacklo_ps(result_4, result[0].q)[0].q << 0x40, zx.o(0)))
        float var_158_2 = result_10[0]
        float temp0_266[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_10, temp0_129, 0), temp0_245)
        float temp0_267[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x55)
        float temp0_270[0x4] =
            _mm_sub_ps(temp0_266, _mm_mul_ps(_mm_insert_ps(result, temp0_129, 0xaa), temp0_267))
        float temp0_271[0x4] = _mm_mul_ps(temp0_256, temp0_259)
        float temp0_273[0x4] = _mm_add_ps(_mm_mul_ps(temp0_257, zmm15), temp0_271)
        float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0xd8), temp0_270)
        float temp0_277[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_275, temp0_275, 1), temp0_275)
        float temp0_280[0x4] =
            _mm_sub_ps(temp0_273, _mm_add_ps(_mm_shuffle_ps(temp0_277, temp0_277, 0x39), temp0_277))
        temp0_280[0] - 0f
        
        if (temp0_280[0] != 0f || not(is_ordered.d(temp0_280[0], 0f)))
            float temp0_282[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(temp0_129, temp0_130[0], 0x20), var_158_2, 0x30)
            float temp0_283[0x4] = __insertps_xmmps_memd_immb(arg6, 0x3f800000, 0x36)
            float temp0_284[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x60)
            float temp0_286[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_264[0].q), temp0_284)
            float temp0_289[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0x20), temp0_282), temp0_286)
            zmm15 = _mm_sub_ps(_mm_mul_ps(zmm15, temp0_245), temp0_289)
            float temp0_292[0x4] = _mm_insert_ps(data_142d4cc30, arg6, 0x10)
            float temp0_294[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x66), temp0_292)
            float temp0_297[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x33), temp0_283), temp0_294)
            float temp0_299[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_257, temp0_246), temp0_297)
            float temp0_300[0x4] = __mulps_xmmps_memps(temp0_283, temp0_256)
            result_1 = _mm_broadcastsd_pd(temp0_270[0].q)
            temp0_270[0].q = temp0_270 u>> 0x40
            float temp0_302[0x4] = _mm_mul_ps(temp0_270, temp0_246)
            float temp0_306[0x4] = _mm_sub_ps(temp0_300, 
                _mm_add_ps(_mm_mul_ps(_mm_insert_ps(temp0_294, temp0_129, 0x9d), result_1), 
                    temp0_302))
            float temp0_307[0x4] = _mm_mul_ps(temp0_282, temp0_259)
            float temp0_309[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0xcc), temp0_245)
            float temp0_310[0x4] = _mm_blend_ps(result, zx.o(0), 0xe)
            result_4 = _mm_shuffle_ps(_mm_blend_ps(result_4, zx.o(0), 0xe), temp0_310, 0x11)
            float temp0_316[0x4] = _mm_sub_ps(temp0_307, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_264, temp0_264, 0x66), result_4), 
                    temp0_309))
            float temp0_317[0x4] = _mm_div_ps(data_142fc92f0, temp0_280)
            float temp0_318[0x4] = _mm_mul_ps(temp0_316, temp0_317)
            float temp0_319[0x4] = _mm_mul_ps(temp0_299, temp0_317)
            zmm15 =
                _mm_shuffle_ps(_mm_mul_ps(zmm15, temp0_317), _mm_mul_ps(temp0_317, temp0_306), 0x77)
            zmm2 = _mm_shuffle_ps(temp0_318, temp0_319, 0x77)
            arg6 = _mm_shuffle_ps(temp0_318, temp0_319, 0x22)
        else
            arg6 = data_142d4cc20
            zmm15 = data_142d4cc30
        
        zmm12 = zmm12
        zmm11 = var_188
        result_8 = arg9
        result_4 = result_3
        result_5 = result_7
        arg7 = _mm_movehdup_ps(zmm2)
        arg5 = _mm_unpackhi_pd(zmm2, zmm2[0].q)
        arg8 = _mm_movehdup_ps(arg6)
        result_10 = _mm_unpackhi_pd(arg6, arg6[0].q)
        zmm1 = _mm_movehdup_ps(zmm15)
        result_1 = _mm_unpackhi_pd(zmm15, zmm15.q)
    else
        if (_mm_movemask_ps(_mm_or_ps(
                __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        __insertps_xmmps_memd_immb(
                            _mm_insert_ps(_mm_insert_ps(temp0_130, result_10, 0x10), result_1, 
                                0x20), 
                            0x800000, 0x30), 
                        data_142d3f770), 
                    data_142d3f5c0, 2), 
                result)) != 0xf)
            goto label_140023626
        
        if (_mm_movemask_ps(_mm_or_ps(
                __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        __insertps_xmmps_memd_immb(
                            _mm_insert_ps(_mm_insert_ps(result_5, result_1, 0x10), zx.o(temp0_128), 
                                0x20), 
                            0x800000, 0x30), 
                        data_142d3f770), 
                    data_142d3f5c0, 2), 
                _mm_cmpeq_epi32(arg5, zx.o(0)))) != 0xf)
            goto label_140023626
        
        zmm1 = zx.o(0)
        result_1 = 0x3f800000
        zmm15 = zx.o(0)
        result_10 = zx.o(0)
        arg8 = 0x3f800000
        arg6 = zx.o(0)
        arg5 = zx.o(0)
        arg7 = zx.o(0)
        zmm2 = 0x3f800000
        zmm11 = var_188
        result_5 = result_7
    
    zmm15 = _mm_insert_ps(_mm_insert_ps(zmm15, zmm1, 0x10), result_1, 0x20)
    float temp0_378[0x4] = _mm_insert_ps(_mm_insert_ps(arg6, arg8, 0x10), result_10, 0x20)
    float temp0_380[0x4] = _mm_insert_ps(_mm_insert_ps(zmm2, arg7, 0x10), arg5, 0x20)
    zmm1 = *arg4
    float temp0_382[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_380)
    zmm2 = (*arg4)[1]
    float temp0_385[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_378), temp0_382)
    zmm1 = (*arg4)[2]
    float temp0_388[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm15), temp0_385)
    result = data_142d3f780
    float temp0_390[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_f8 ^ result, 0xc0), temp0_388)
    float temp0_391[0x4] = _mm_shuffle_ps(result_4, result_4, 0xc9)
    zmm1 = temp0_388 ^ result
    float temp0_393[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xd2), temp0_391)
    result_4 = _mm_shuffle_ps(result_4, result_4, 0xd2)
    float temp0_397[0x4] =
        _mm_sub_ps(temp0_393, _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xc9), result_4))
    float temp0_399[0x4] =
        _mm_insert_ps(_mm_insert_ps(result_5, zx.o(temp0_117), 0x10), zx.o(temp0_118), 0x20)
    float temp0_401[0x4] =
        _mm_insert_ps(__insertps_xmmps_memd_immb(temp0_65, var_e8, 0x10), zx.o(temp0_119), 0x20)
    float temp0_403[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xc0), temp0_399)
    float temp0_406[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xd5), temp0_401), temp0_403)
    zmm12 = _mm_add_ps(_mm_mul_ps(zmm12, _mm_shuffle_ps(temp0_397, temp0_397, 0xea)), temp0_406)
    result_8 = _mm_shuffle_ps(result_8, result_8, 0xc0)
    zmm2 = _mm_add_ps(_mm_mul_ps(temp0_390, result_8), zmm11)
else
    result_8 = zx.o(result_9)
    result = zx.o(result_2)
    
    if (_mm_movemask_ps(temp0_134) != 0xf)
    label_140023352:
        float result_6[0x4] = _mm_insert_ps(result_5, result, 0x2a)
        float temp0_148[0x4] = _mm_insert_ps(result_5, result, 0x1c)
        arg6 = zx.o(temp0_128)
        float temp0_151[0x4] = _mm_insert_ps(
            _mm_insert_ps(_mm_insert_ps(temp0_129, result_5, 0x10), result_5, 0x20), arg6, 0x30)
        float temp0_153[0x4] =
            _mm_mul_ps(__insertps_xmmps_memd_immb(result_8, 0x3f800000, 0x36), temp0_151)
        float temp0_154[0x4] = _mm_insert_ps(temp0_130, result, 0x2a)
        float temp0_157[0x4] =
            _mm_sub_ps(temp0_153, _mm_mul_ps(_mm_insert_ps(temp0_130, result, 0x1c), temp0_154))
        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0)
        float temp0_159[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0x55)
        zmm15 = _mm_shuffle_ps(temp0_157, temp0_157, 0xaa)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xff)
        result_4 = 0x3f800000
        float temp0_166[0x4] = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(0x3f800000, arg6, 0), temp0_148), 
            _mm_mul_ps(_mm_unpacklo_ps(result_5, result[0].q)[0].q << 0x40, zx.o(0)))
        float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_8, temp0_129, 0), result_6)
        float temp0_169[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x55)
        float temp0_172[0x4] =
            _mm_sub_ps(temp0_168, _mm_mul_ps(_mm_insert_ps(result, temp0_129, 0xaa), temp0_169))
        float temp0_173[0x4] = _mm_mul_ps(temp0_158, temp0_161)
        float temp0_175[0x4] = _mm_add_ps(_mm_mul_ps(temp0_159, zmm15), temp0_173)
        float temp0_177[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0xd8), temp0_172)
        float temp0_179[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_177, temp0_177, 1), temp0_177)
        float temp0_182[0x4] =
            _mm_sub_ps(temp0_175, _mm_add_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0x39), temp0_179))
        temp0_182[0] - 0f
        
        if (temp0_182[0] != 0f || not(is_ordered.d(temp0_182[0], 0f)))
            float temp0_184[0x4] =
                _mm_insert_ps(_mm_insert_ps(temp0_129, temp0_130, 0x20), result_8, 0x30)
            float temp0_185[0x4] = __insertps_xmmps_memd_immb(arg6, 0x3f800000, 0x36)
            float temp0_186[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x60)
            float temp0_188[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_166[0].q), temp0_186)
            float temp0_191[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0x20), temp0_184), temp0_188)
            result_4 = result_6
            zmm15 = _mm_sub_ps(_mm_mul_ps(zmm15, result_4), temp0_191)
            float temp0_194[0x4] = _mm_insert_ps(data_142d4cc30, arg6, 0x10)
            float temp0_196[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0x66), temp0_194)
            float temp0_199[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_172, temp0_172, 0x33), temp0_185), temp0_196)
            float temp0_201[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_159, temp0_148), temp0_199)
            float temp0_202[0x4] = __mulps_xmmps_memps(temp0_185, temp0_158)
            result_1 = _mm_broadcastsd_pd(temp0_172[0].q)
            temp0_172[0].q = temp0_172 u>> 0x40
            float temp0_204[0x4] = _mm_mul_ps(temp0_172, temp0_148)
            float temp0_208[0x4] = _mm_sub_ps(temp0_202, 
                _mm_add_ps(_mm_mul_ps(_mm_insert_ps(temp0_196, temp0_129, 0x9d), result_1), 
                    temp0_204))
            float temp0_209[0x4] = _mm_mul_ps(temp0_184, temp0_161)
            float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0xcc), result_4)
            float temp0_212[0x4] = _mm_blend_ps(result, zx.o(0), 0xe)
            float temp0_214[0x4] =
                _mm_shuffle_ps(_mm_blend_ps(result_5, zx.o(0), 0xe), temp0_212, 0x11)
            float temp0_218[0x4] = _mm_sub_ps(temp0_209, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0x66), temp0_214), 
                    temp0_211))
            float temp0_219[0x4] = _mm_div_ps(data_142fc92f0, temp0_182)
            float temp0_220[0x4] = _mm_mul_ps(temp0_218, temp0_219)
            float temp0_221[0x4] = _mm_mul_ps(temp0_201, temp0_219)
            zmm15 =
                _mm_shuffle_ps(_mm_mul_ps(zmm15, temp0_219), _mm_mul_ps(temp0_219, temp0_208), 0x77)
            result_4 = _mm_shuffle_ps(temp0_220, temp0_221, 0x77)
            arg6 = _mm_shuffle_ps(temp0_220, temp0_221, 0x22)
        else
            arg6 = data_142d4cc20
            zmm15 = data_142d4cc30
        
        zmm12 = zmm12
        arg7 = var_188
        zmm11 = data_142d3f780
        result_8 = result_7
        arg5 = _mm_movehdup_ps(result_4)
        zmm2 = _mm_unpackhi_pd(result_4, result_4.q)
        zmm1 = _mm_movehdup_ps(arg6)
        result = _mm_unpackhi_pd(arg6, arg6[0].q)
        result_10 = _mm_movehdup_ps(zmm15)
        result_1 = _mm_unpackhi_pd(zmm15, zmm15.q)
    else
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    __insertps_xmmps_memd_immb(
                        _mm_insert_ps(_mm_insert_ps(temp0_130, result_8, 0x10), result, 0x20), 
                        0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5c0, 2)) != 0xf)
            goto label_140023352
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    __insertps_xmmps_memd_immb(
                        _mm_insert_ps(_mm_insert_ps(result_5, result, 0x10), zx.o(temp0_128), 
                            0x20), 
                        0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5c0, 2)) != 0xf)
            goto label_140023352
        
        arg7 = zmm15
        result_10 = zx.o(0)
        result_1 = 0x3f800000
        zmm15 = zx.o(0)
        result = zx.o(0)
        zmm1 = 0x3f800000
        arg6 = zx.o(0)
        zmm2 = zx.o(0)
        arg5 = zx.o(0)
        result_4 = 0x3f800000
        result_8 = result_7
    
    zmm15 = _mm_insert_ps(_mm_insert_ps(zmm15, result_10, 0x10), result_1, 0x20)
    float temp0_334[0x4] = _mm_insert_ps(_mm_insert_ps(arg6, zmm1, 0x10), result, 0x20)
    result_4 = _mm_insert_ps(_mm_insert_ps(result_4, arg5, 0x10), zmm2, 0x20)
    result = *arg4
    float temp0_338[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), result_4)
    zmm1 = (*arg4)[1]
    float temp0_341[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_334), temp0_338)
    arg5 = (*arg4)[2]
    float temp0_344[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm15), temp0_341)
    float temp0_346[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_f8 ^ zmm11, 0xc0), temp0_344)
    result_1 = result_3
    float temp0_347[0x4] = _mm_shuffle_ps(result_1, result_1, 0xc9)
    arg5 = temp0_344 ^ zmm11
    float temp0_349[0x4] = _mm_mul_ps(_mm_shuffle_epi32(arg5, 0xd2), temp0_347)
    float temp0_350[0x4] = _mm_shuffle_ps(result_1, result_1, 0xd2)
    float temp0_353[0x4] =
        _mm_sub_ps(temp0_349, _mm_mul_ps(_mm_shuffle_epi32(arg5, 0xc9), temp0_350))
    float temp0_355[0x4] =
        _mm_insert_ps(_mm_insert_ps(result_8, zx.o(temp0_117), 0x10), zx.o(temp0_118), 0x20)
    float temp0_357[0x4] =
        _mm_insert_ps(__insertps_xmmps_memd_immb(temp0_65, var_e8, 0x10), zx.o(temp0_119), 0x20)
    float temp0_359[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_353, temp0_353, 0xc0), temp0_355)
    float temp0_362[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_353, temp0_353, 0xd5), temp0_357), temp0_359)
    zmm12 = _mm_add_ps(_mm_mul_ps(zmm12, _mm_shuffle_ps(temp0_353, temp0_353, 0xea)), temp0_362)
    result_8 = arg9
    result_8 = _mm_shuffle_ps(result_8, result_8, 0xc0)
    zmm2 = _mm_add_ps(_mm_mul_ps(temp0_346, result_8), arg7)

(*arg1)[rdx + 0x30] = zmm2[0]
(*arg1)[rdx + 0x31] = __extractps_memd_xmmps_immb(zmm2, 1)
(*arg1)[rdx + 0x32] = __extractps_memd_xmmps_immb(zmm2, 2)
result_1 = arg1[rax + 0xe]
float temp0_415[0x4] = _mm_mul_ps(result_8, zmm12)
float temp0_416[0x4] = _mm_mul_ps(zx.o(0), result_1)
float temp0_417[0x4] = _mm_shuffle_ps(temp0_415, temp0_415, 0)
float temp0_419[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0x1b), temp0_417)
result_5 = data_142d3f7c0
float temp0_421[0x4] = _mm_add_ps(_mm_mul_ps(temp0_419, result_5), temp0_416)
float temp0_422[0x4] = _mm_shuffle_ps(temp0_415, temp0_415, 0x55)
float temp0_424[0x4] = _mm_mul_ps(_mm_shuffle_pd(result_1, result_1, 1), temp0_422)
arg8 = data_142d3f7d0
float temp0_426[0x4] = _mm_add_ps(_mm_mul_ps(temp0_424, arg8), temp0_421)
float temp0_427[0x4] = _mm_shuffle_ps(temp0_415, temp0_415, 0xaa)
float temp0_429[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_1, result_1, 0xb1), temp0_427)
arg7 = data_142d3f7b0
float temp0_433[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_429, arg7), temp0_426), data_142d3f640), 
    result_1)
float temp0_434[0x4] = _mm_mul_ps(temp0_433, temp0_433)
float temp0_436[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_434, temp0_434[0].q), temp0_434)
float temp0_437[0x4] = _mm_movehdup_ps(temp0_436)
temp0_437[0] = temp0_437[0] + temp0_436[0]
result_1 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_437[0], 6), 0xffffffff)
result = 0x3f000000
temp0_437[0] = temp0_437[0] * 0.5f
float temp0_440[0x4] = _mm_rsqrt_ss(temp0_437[0], temp0_437[0])
temp0_440[0] = temp0_440[0] * temp0_440[0]
temp0_440[0] = temp0_440[0] * temp0_437[0]
result_10 = 0x3f000000
result_10[0] = 0.5f - temp0_440[0]
result_10[0] = result_10[0] * temp0_440[0]
result_10[0] = result_10[0] + temp0_440[0]
result_10[0] = result_10[0] * result_10[0]
result_10[0] = result_10[0] * temp0_437[0]
result[0] = 0.5f - result_10[0]
result[0] = result[0] * result_10[0]
result[0] = result[0] + result_10[0]
float temp0_442[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_433)
float temp0_443[0x4] = _mm_shuffle_ps(result_1, result_1, 0)
result = _mm_and_ps(temp0_442, temp0_443)
arg1[rax + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_443, data_142d3f660), result)
result = arg1[0xf]
float temp0_447[0x4] = _mm_mul_ps(arg1[0xe], result)
float temp0_449[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_447, temp0_447[0].q), temp0_447)
float temp0_450[0x4] = _mm_movehdup_ps(temp0_449)
temp0_450[0] = temp0_450[0] + temp0_449[0]
float temp0_451[0x4] = _mm_cmpeq_ss(0, temp0_450[0], 2)
zmm1 = _mm_and_ps(temp0_451, 0x3f800000)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_451, 0xbf800000), zmm1)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), result)
arg6 = arg1[rax + 0xe][0]
result = arg1[rax][0x39]
result_8 = arg1[rax][0x3a]
result_1 = arg1[rdx][6]
zmm1 = arg1[rdx + 1][0]
float temp0_458[0x4] = _mm_insert_ps(_mm_insert_ps(result, result_8, 0x10), arg6, 0x20)
float temp0_459[0x4] = _mm_insert_ps(zx.o(arg1[rdx + 1][0].q), result_1, 0x20)
float temp0_461[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(result_1, zmm1, 0x10), arg1[rdx][5], 0x20)
float temp0_462[0x4] = _mm_insert_ps(result_8, arg6, 0x10)
float temp0_463[0x4] = _mm_mul_ps(temp0_461, temp0_458)
float temp0_464[0x4] = _mm_insert_ps(temp0_462, result, 0x20)
float temp0_467[0x4] = _mm_sub_ps(temp0_463, 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(&arg1[rdx] + 0x14)), zmm1, 0x20), temp0_464))
float temp0_468[0x4] = _mm_add_ps(temp0_467, temp0_467)
result = arg1[rax][0x3b]
float temp0_471[0x4] =
    _mm_add_ps(temp0_459, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_468))
float temp0_476[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_shuffle_ps(temp0_468, temp0_468, 0xd2), temp0_458), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_468, temp0_468, 0xc9), temp0_464))
float temp0_477[0x4] = __insertps_xmmps_memd_immb((*arg1)[rdx + 0x30], (*arg1)[rdx + 0x31], 0x10)
float temp0_478[0x4] = _mm_add_ps(temp0_476, temp0_471)
float temp0_480[0x4] =
    _mm_add_ps(__insertps_xmmps_memd_immb(temp0_477, (*arg1)[rdx + 0x32], 0x20), temp0_478)
(*arg1)[rdx + 0x20] = temp0_480[0]
(*arg1)[rdx + 0x21] = __extractps_memd_xmmps_immb(temp0_480, 1)
(*arg1)[rdx + 0x22] = __extractps_memd_xmmps_immb(temp0_480, 2)
result_10 = arg1[rdx]
zmm1 = arg1[rax + 0xe][0]
float temp0_483[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
arg6 = arg1[rdx][3]
result = arg1[rdx][2]
result_8 = arg1[rdx][1]
float temp0_487[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg6, result, 0x10), result_8, 0x20), result_10, 
        0x30), 
    temp0_483)
zmm1 = arg1[rax][0x3b]
float temp0_489[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), result_10)
float temp0_491[0x4] = _mm_add_ps(_mm_mul_ps(temp0_487, result_5), temp0_489)
zmm1 = arg1[rax][0x39]
float temp0_492[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_497[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(zx.o(*(&arg1[rdx] + 8)), result_10, 0x20), result_8, 0x30), 
            temp0_492), 
        arg8), 
    temp0_491)
float temp0_500[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(result_8, result_10, 0x10), arg6, 0x20), result, 0x30)
result = arg1[rax][0x3a]
arg1[rax + 0xa] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(temp0_500, _mm_shuffle_ps(result, result, 0)), arg7), temp0_497)
result = arg1[0xb]
float temp0_505[0x4] = _mm_mul_ps(arg1[0xa], result)
float temp0_507[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_505, temp0_505[0].q), temp0_505)
float temp0_508[0x4] = _mm_movehdup_ps(temp0_507)
temp0_508[0] = temp0_508[0] + temp0_507[0]
float temp0_509[0x4] = _mm_cmpeq_ss(0, temp0_508[0], 2)
arg5 = _mm_and_ps(0x3f800000, temp0_509)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_509, 0xbf800000), arg5)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), result)
return result
