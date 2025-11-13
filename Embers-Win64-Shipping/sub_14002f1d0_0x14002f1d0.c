// 函数: sub_14002f1d0
// 地址: 0x14002f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
float result[0x4] = arg1[rax + 0xe]
float temp0[0x4] = _mm_add_ps(result, result)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0)
float zmm4[0x4] = arg1[rax][0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
float result_14[0x4] = arg1[rax][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_14, result_14, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[rax][0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_4, 0), temp0_2, 0x6c)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_10[0x4] = _mm_add_ps(temp0_6, temp0_9)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_4, zx.o(0), 0xe5), temp0_2, 0xc)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x78)
float temp0_18[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0, _mm_shuffle_ps(temp0_4, _mm_shuffle_ps(temp0, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_14)
float temp0_19[0x4] = _mm_sub_ps(data_142d3f670, temp0_18)
result_14 = (*arg1)[rdx + 0x18]
float zmm7[0x4] = (*arg1)[rdx + 0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[rdx + 0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), result_14)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), result_14)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), result_14)
float temp0_44[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc0), temp0_21), temp0_41)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xea), temp0_23), temp0_44)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_10, temp0_19, 2)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_48, 
    _mm_shuffle_ps(temp0_11, _mm_shuffle_ps(temp0_48, zx.o(0), 0x22), 0x31), 0x82)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_19, temp0_11, 0xa1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, zx.o(0), 0x42)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_11, temp0_10, 0x50)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, _mm_shuffle_ps(temp0_10, temp0_53, 0x30), 0x82)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, 
    _mm_shuffle_ps(temp0_19, _mm_shuffle_ps(temp0_54, zx.o(0), 0x42), 0x32), 0x82)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc0), temp0_51)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xd5), temp0_56), temp0_61)
float result_11[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xea), temp0_59), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_51)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), temp0_56), temp0_69)
float zmm8[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_59), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), temp0_51)
float temp0_80[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), temp0_56), temp0_77)
float result_10[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59), temp0_80)
float r14 = _mm_shuffle_ps(result_11, result_11, 0xe5)[0]
float r15 = _mm_shuffle_epi32(result_11, 0x4e)[0]
float r11 = _mm_shuffle_epi32(zmm8, 0x4e)[0]
uint128_t result_6 = *(arg1 + (rdx << 2) + 0xc0) | (*arg1)[rdx + 0x32][0].q << 0x40
uint128_t result_15 =
    _mm_sub_ps(*(arg1 + (rdx << 2) + 0x80) | (*arg1)[rdx + 0x22][0].q << 0x40, result_6)
float zmm6[0x4] = data_142d3f780
float result_18[0x4] = _mm_unpackhi_pd(result_15, result_15.q)
float result_20[0x4] = result_18 ^ zmm6
zmm7 = _mm_shuffle_ps(result_15, result_15, 0xe5) ^ zmm6
uint32_t temp0_90[0x4] = _mm_shuffle_epi32(result_20, 0xc0)
float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc1), temp0_90)
float temp0_93[0x4] = _mm_shuffle_ps(result_15, result_15, 0xd5)
float temp0_96[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_10, result_10, 0xc1), temp0_93), temp0_92)
float temp0_97[0x4] = _mm_shuffle_ps(result_15, zmm7, 0xca)
float temp0_99[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, result_15, 0xa0), zmm7, 0xc2)
float temp0_100[0x4] = _mm_shuffle_ps(zmm7, result_20, 0x20)
float temp0_101[0x4] = _mm_unpacklo_ps(result_20, result_18[0].q)
float zmm15[0x4] = (*arg1)[rax + 0x1e]
result_18 = result_15 ^ zmm6
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_100, 0x84), temp0_96)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_10, zmm8, 0xd5), temp0_90)
float temp0_108[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_10, result_10, 0xda), temp0_93), temp0_105)
float temp0_112[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(result_18, result_15, 0x50), result_15, 0x42), 
        temp0_108), 
    temp0_103)
float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_11, result_11, 0xc0), temp0_97)
float temp0_116[0x4] = _mm_shuffle_ps(result_10, _mm_shuffle_ps(zmm8, result_10, 0x30), 0x80)
float temp0_117[0x4] = _mm_shuffle_ps(result_18, result_15, 0x40)
float temp0_119[0x4] = _mm_add_ps(_mm_mul_ps(temp0_116, temp0_117), temp0_114)
result_20 = *arg6
float temp0_120[0x4] = _mm_mul_ps(temp0_99, temp0_119)
float temp0_121[0x4] = _mm_shuffle_ps(result_10, zmm8, 0xc)
float temp0_123[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_121, temp0_121, 0x78), temp0_97)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_10, zmm8, 0xd6), temp0_117)
uint32_t temp0_126 = _mm_movemask_ps(result_20)
float temp0_127[0x4] = _mm_add_ps(temp0_125, temp0_123)
float temp0_128[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe5)
float temp0_129[0x4] = _mm_add_ps(temp0_112, zmm15)
uint128_t result_7 = result_15
float temp0_133[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(result_18, result_15, 0), result_15, 0xc8), 
        temp0_127), 
    temp0_120)
float temp0_134[0x4] = _mm_add_ps(zmm15[0].q | zmm15[0].q << 0x40, temp0_133)
float result_4 = temp0_134[0]
float result_19[0x4] = _mm_shuffle_epi32(temp0_134, 0x4e)
float result_17 = _mm_shuffle_ps(temp0_134, temp0_134, 0xe5)[0]
float result_2 = result_19[0]
uint32_t result_5[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xe5)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_129, _mm_shuffle_ps(0x800000, temp0_129, 0x20), 0x24)
zmm4 = _mm_unpackhi_pd(temp0_129, temp0_129[0].q)
result = __andps_xmmxud_memxud(temp0_139, data_142d3f770)
float result_13[0x4] = result_11
uint128_t result_8 = result_6
float var_108[0x4] = zmm15
uint128_t result_3

if (temp0_126 != 0xf)
    result_15 = arg5
    float temp0_236[0x4] = __cmpps_xmmps_memps_immb(result, data_142d3f5c0, 2)
    result_3 = zx.o(result_4)
    result_14 = zx.o(result_17)
    
    if (_mm_movemask_ps(_mm_cmpeq_epi32(zx.o(0), result_20) | temp0_236) != 0xf)
    label_14002f9e6:
        float result_12[0x4] = result_10
        result_19 = zx.o(0)
        result_19[0] = zmm4[0]
        float result_22[0x4] = result_19
        float temp0_253[0x4] =
            _mm_shuffle_ps(result_19, _mm_shuffle_ps(result_14, result_19, 0x30), 0x84)
        result_15 = _mm_shuffle_ps(_mm_shuffle_ps(result_14, zmm4, 0), zx.o(0), 0x42)
        result = zx.o(result_2)
        result_11 = data_142d3f660
        float temp0_258[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, temp0_129, 0), 
            _mm_shuffle_ps(result, zmm4, 0xc0), 0x22)
        result_11[0] = result_3.d
        float temp0_259[0x4] = _mm_mul_ps(result_11, temp0_258)
        result_19 = zx.o(0)
        result_10 = result_5
        result_19[0] = result_5[0]
        float temp0_261[0x4] =
            _mm_shuffle_ps(result_19, _mm_shuffle_ps(result_14, result_19, 0x30), 0x84)
        float temp0_265[0x4] = _mm_sub_ps(temp0_259, 
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(result_14, result_5, 0), zx.o(0), 0x42), 
                temp0_261))
        result_6 = _mm_shuffle_ps(temp0_265, temp0_265, 0)
        result_5 = _mm_shuffle_ps(temp0_265, temp0_265, 0x55)
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_265, temp0_265, 0xaa)
        float temp0_269[0x4] = _mm_shuffle_ps(temp0_265, temp0_265, 0xff)
        zmm15 = 0x3f800000
        float result_1[0x4] = result
        uint128_t temp0_270 = _mm_shuffle_ps(0x3f800000, result, 0)
        result = result_3
        uint128_t result_16 = result_15
        result_3 = _mm_sub_ps(_mm_mul_ps(temp0_270, result_15), 
            __mulps_xmmps_memps(_mm_unpacklo_ps(zmm4, result_14[0].q)[0].q << 0x40, data_142d8f750))
        float temp0_276[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, temp0_129, 0), temp0_253)
        result_15 = result_10
        result_10 = zx.o(0)
        result_10[0] = result_14[0]
        float temp0_281[0x4] = _mm_sub_ps(temp0_276, 
            _mm_mul_ps(_mm_shuffle_ps(result_10, _mm_shuffle_ps(temp0_129, result_10, 0x32), 0x84), 
                _mm_shuffle_ps(temp0_129, temp0_129, 0x55)))
        float temp0_282[0x4] = _mm_mul_ps(result_6, temp0_269)
        float temp0_284[0x4] = _mm_add_ps(_mm_mul_ps(result_5, temp0_268), temp0_282)
        float temp0_286[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0xd8), temp0_281)
        float temp0_288[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_286, temp0_286, 1), temp0_286)
        float temp0_291[0x4] =
            _mm_sub_ps(temp0_284, _mm_add_ps(_mm_shuffle_ps(temp0_288, temp0_288, 0x39), temp0_288))
        temp0_291[0] - 0f
        
        if (temp0_291[0] != 0f || not(is_ordered.d(temp0_291[0], 0f)))
            result_18 = result_15
            result_15 = arg5
            float temp0_294[0x4] = _mm_shuffle_ps(temp0_129, 
                _mm_shuffle_ps(result, _mm_shuffle_ps(temp0_129, result_18, 0x84), 0x20), 0x24)
            float temp0_295[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x60)
            float temp0_296[0x4] = _mm_mul_ps(result_3[0].q | result_3.q << 0x40, temp0_295)
            float temp0_299[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0x20), temp0_294), temp0_296)
            result_14 = data_142d3f660
            result_14[0] = result_1[0]
            float temp0_301[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_268, temp0_253), temp0_299)
            result_19 = data_142d4cc30
            float temp0_303[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(result_1, result_19, 0), result_19, 0xe2)
            float temp0_305[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_281, temp0_281, 0x66), temp0_303)
            float temp0_308[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_281, temp0_281, 0x33), result_14), temp0_305)
            result_19 = result_16
            result_5 = _mm_sub_ps(_mm_mul_ps(result_5, result_19), temp0_308)
            float temp0_311[0x4] = __mulps_xmmps_memps(result_14, result_6)
            float temp0_313[0x4] = _mm_mul_ps(_mm_unpackhi_pd(temp0_281, temp0_281[0].q), result_19)
            float temp0_314[0x4] = __shufps_xmmps_memps_immb(temp0_129, data_142d8f750, 0xe8)
            float temp0_317[0x4] = _mm_sub_ps(temp0_311, 
                _mm_add_ps(_mm_mul_ps(temp0_281[0].q | temp0_281[0].q << 0x40, temp0_314), 
                    temp0_313))
            float temp0_318[0x4] = _mm_mul_ps(temp0_294, temp0_269)
            float temp0_320[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0xcc), temp0_253)
            float temp0_321[0x4] = _mm_shuffle_ps(result_22, result_10, 0x11)
            float temp0_325[0x4] = _mm_sub_ps(temp0_318, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0x66), temp0_321), 
                    temp0_320))
            float temp0_326[0x4] = _mm_div_ps(data_142fc92f0, temp0_291)
            float temp0_327[0x4] = _mm_mul_ps(temp0_325, temp0_326)
            result_5 = _mm_mul_ps(result_5, temp0_326)
            zmm6 = _mm_shuffle_ps(_mm_mul_ps(temp0_301, temp0_326), 
                _mm_mul_ps(temp0_326, temp0_317), 0x77)
            zmm15 = _mm_shuffle_ps(temp0_327, result_5, 0x77)
            result_18 = _mm_shuffle_ps(temp0_327, result_5, 0x22)
        else
            result_15 = arg5
            result_18 = data_142d4cc20
            zmm6 = data_142d4cc30
        
        result_11 = result_13
        result_6 = result_8
        result_5 = result_7
        result_3 = data_142d3f780
        result_10 = result_12
        result_20 = _mm_shuffle_ps(zmm15, zmm15, 0xe5)
        zmm4 = _mm_unpackhi_pd(zmm15, zmm15[0].q)
        result = _mm_shuffle_ps(result_18, result_18, 0xe5)
        result_14 = _mm_unpackhi_pd(result_18, result_18[0].q)
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xe5)
        result_19 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
    else
        result_19 = _mm_unpacklo_epi32(result_14, 0x800000[0].q)
        float temp0_242[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_unpacklo_ps(result_5, result_3.q)[0].q | result_19[0].q << 0x40, 
                data_142d3f770), 
            data_142d3f5c0, 2)
        result_20 = _mm_cmpeq_epi32(result_20, zx.o(0))
        
        if (_mm_movemask_ps(_mm_or_ps(temp0_242, result_20)) != 0xf)
            goto label_14002f9e6
        
        float temp0_246[0x4] = _mm_unpacklo_ps(zmm4, result_14[0].q)
        result = _mm_unpacklo_epi32(zx.o(result_2), 0x800000[0].q)
        
        if (_mm_movemask_ps(_mm_or_ps(
                __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(temp0_246[0].q | result[0].q << 0x40, data_142d3f770), 
                    data_142d3f5c0, 2), 
                result_20)) != 0xf)
            goto label_14002f9e6
        
        zmm7 = zx.o(0)
        result_19 = 0x3f800000
        zmm6 = zx.o(0)
        result_14 = zx.o(0)
        result = 0x3f800000
        result_18 = zx.o(0)
        zmm4 = zx.o(0)
        result_20 = zx.o(0)
        zmm15 = 0x3f800000
        result_5 = result_7
        result_3 = data_142d3f780
    
    zmm6 = _mm_unpacklo_ps(zmm6, zmm7[0].q)[0].q | result_19[0].q << 0x40
    result_18 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(result_18, result[0].q), result_14[0].q)
    zmm15 = _mm_unpacklo_ps(zmm15, result_20[0].q)[0].q | zmm4[0].q << 0x40
    result = *arg4
    float temp0_385[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm15)
    result_19 = (*arg4)[1]
    float temp0_388[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_19, result_19, 0), result_18), temp0_385)
    result_20 = (*arg4)[2]
    float temp0_391[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_20, result_20, 0), zmm6), temp0_388)
    result = _mm_mul_ps(_mm_shuffle_epi32(var_108 ^ result_3, 0xc0), temp0_391)
    float temp0_394[0x4] = _mm_shuffle_ps(result_5, result_5, 0xc9)
    result_20 = temp0_391 ^ result_3
    float temp0_396[0x4] = _mm_mul_ps(_mm_shuffle_epi32(result_20, 0xd2), temp0_394)
    result_5 = _mm_shuffle_ps(result_5, result_5, 0xd2)
    float temp0_400[0x4] =
        _mm_sub_ps(temp0_396, _mm_mul_ps(_mm_shuffle_epi32(result_20, 0xc9), result_5))
    float temp0_403[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r14), result_11, 0), 
        _mm_shuffle_ps(zx.o(r15), result_11, 0x30), 0x82)
    zmm8 = _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm8, temp0_128), zx.o(r11)[0].q)
    float temp0_407[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xc0), temp0_403)
    float temp0_410[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xd5), zmm8), temp0_407)
    result_10 =
        _mm_add_ps(_mm_mul_ps(result_10, _mm_shuffle_ps(temp0_400, temp0_400, 0xea)), temp0_410)
    result_14 = _mm_shuffle_ps(result_15, result_15, 0xc0)
else
    result_3 = zx.o(result_4)
    result_20 = zx.o(result_17)
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(result, data_142d3f5c0, 2)) != 0xf)
    label_14002f6c5:
        result_19 = zx.o(0)
        result_19[0] = zmm4[0]
        float result_21[0x4] = result_19
        float temp0_155[0x4] =
            _mm_shuffle_ps(result_19, _mm_shuffle_ps(result_20, result_19, 0x30), 0x84)
        float temp0_157[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(result_20, zmm4, 0), zx.o(0), 0x42)
        result_11 = result_5
        result_6 = zx.o(result_2)
        zmm6 = data_142d3f660
        float temp0_160[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, temp0_129, 0), 
            _mm_shuffle_ps(result_6, zmm4, 0xc0), 0x22)
        zmm6[0] = result_3.d
        float temp0_161[0x4] = _mm_mul_ps(zmm6, temp0_160)
        result = zx.o(0)
        result[0] = result_5[0]
        float temp0_163[0x4] = _mm_shuffle_ps(result, _mm_shuffle_ps(result_20, result, 0x30), 0x84)
        float temp0_167[0x4] = _mm_sub_ps(temp0_161, 
            _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(result_20, result_5, 0), zx.o(0), 0x42), 
                temp0_163))
        float temp0_168[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0)
        float temp0_169[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0x55)
        result_15 = _mm_shuffle_ps(temp0_167, temp0_167, 0xaa)
        float temp0_171[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xff)
        zmm15 = 0x3f800000
        result_5 = result_3
        uint128_t result_9 = result_6
        result_3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, result_6, 0), temp0_157), 
            __mulps_xmmps_memps(_mm_unpacklo_ps(zmm4, result_20[0].q)[0].q << 0x40, data_142d8f750))
        result_14 = result_11
        result_6 = result_5
        result_5 = _mm_mul_ps(_mm_shuffle_ps(result_5, temp0_129, 0), temp0_155)
        result_11 = zx.o(0)
        result_11[0] = result_20[0]
        result_5 = _mm_sub_ps(result_5, 
            _mm_mul_ps(_mm_shuffle_ps(result_11, _mm_shuffle_ps(temp0_129, result_11, 0x32), 0x84), 
                _mm_shuffle_ps(temp0_129, temp0_129, 0x55)))
        float temp0_184[0x4] = _mm_mul_ps(temp0_168, temp0_171)
        float temp0_186[0x4] = _mm_add_ps(_mm_mul_ps(temp0_169, result_15), temp0_184)
        float temp0_188[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0xd8), result_5)
        float temp0_190[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_188, temp0_188, 1), temp0_188)
        float temp0_193[0x4] =
            _mm_sub_ps(temp0_186, _mm_add_ps(_mm_shuffle_ps(temp0_190, temp0_190, 0x39), temp0_190))
        temp0_193[0] - 0f
        
        if (temp0_193[0] != 0f || not(is_ordered.d(temp0_193[0], 0f)))
            float temp0_196[0x4] = _mm_shuffle_ps(temp0_129, 
                _mm_shuffle_ps(result_6, _mm_shuffle_ps(temp0_129, result_14, 0x84), 0x20), 0x24)
            float temp0_197[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0x60)
            float temp0_198[0x4] = _mm_mul_ps(result_3[0].q | result_3.q << 0x40, temp0_197)
            float temp0_201[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0x20), temp0_196), temp0_198)
            result = data_142d3f660
            result_14 = result_9
            result[0] = result_14[0]
            result_15 = _mm_sub_ps(_mm_mul_ps(result_15, temp0_155), temp0_201)
            result_19 = data_142d4cc30
            float temp0_205[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(result_14, result_19, 0), result_19, 0xe2)
            float temp0_207[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_5, result_5, 0x66), temp0_205)
            float temp0_210[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(result_5, result_5, 0x33), result), temp0_207)
            float temp0_212[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_169, temp0_157), temp0_210)
            float temp0_213[0x4] = __mulps_xmmps_memps(result, temp0_168)
            float temp0_215[0x4] = _mm_mul_ps(_mm_unpackhi_pd(result_5, result_5[0].q), temp0_157)
            float temp0_216[0x4] = __shufps_xmmps_memps_immb(temp0_129, data_142d8f750, 0xe8)
            float temp0_219[0x4] = _mm_sub_ps(temp0_213, 
                _mm_add_ps(_mm_mul_ps(result_5[0].q | result_5[0].q << 0x40, temp0_216), temp0_215))
            float temp0_220[0x4] = _mm_mul_ps(temp0_196, temp0_171)
            float temp0_222[0x4] = _mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0xcc), temp0_155)
            float temp0_223[0x4] = _mm_shuffle_ps(result_21, result_11, 0x11)
            float temp0_227[0x4] = _mm_sub_ps(temp0_220, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_3, result_3, 0x66), temp0_223), 
                    temp0_222))
            float temp0_228[0x4] = _mm_div_ps(data_142fc92f0, temp0_193)
            float temp0_229[0x4] = _mm_mul_ps(temp0_227, temp0_228)
            float temp0_230[0x4] = _mm_mul_ps(temp0_212, temp0_228)
            result_15 = _mm_shuffle_ps(_mm_mul_ps(result_15, temp0_228), 
                _mm_mul_ps(temp0_228, temp0_219), 0x77)
            zmm15 = _mm_shuffle_ps(temp0_229, temp0_230, 0x77)
            result_18 = _mm_shuffle_ps(temp0_229, temp0_230, 0x22)
        else
            result_18 = data_142d4cc20
            result_15 = data_142d4cc30
        
        result_11 = result_13
        result_6 = result_8
        result_5 = result_7
        result_3 = data_142d3f780
        zmm8 = zmm8
        zmm4 = _mm_shuffle_ps(zmm15, zmm15, 0xe5)
        result_14 = _mm_unpackhi_pd(zmm15, zmm15[0].q)
        result = _mm_shuffle_ps(result_18, result_18, 0xe5)
        zmm6 = _mm_unpackhi_pd(result_18, result_18[0].q)
        zmm7 = _mm_shuffle_ps(result_15, result_15, 0xe5)
        result_19 = _mm_unpackhi_pd(result_15, result_15.q)
    else
        result_19 = _mm_unpacklo_epi32(result_20, 0x800000[0].q)
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    _mm_unpacklo_ps(result_5, result_3.q)[0].q | result_19[0].q << 0x40, 
                    data_142d3f770), 
                data_142d3f5c0, 2)) != 0xf)
            goto label_14002f6c5
        
        float temp0_149[0x4] = _mm_unpacklo_ps(zmm4, result_20[0].q)
        result = _mm_unpacklo_epi32(zx.o(result_2), 0x800000[0].q)
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(temp0_149[0].q | result[0].q << 0x40, data_142d3f770), 
                data_142d3f5c0, 2)) != 0xf)
            goto label_14002f6c5
        
        zmm7 = zx.o(0)
        result_19 = 0x3f800000
        result_15 = zx.o(0)
        zmm6 = zx.o(0)
        result = 0x3f800000
        result_18 = zx.o(0)
        result_14 = zx.o(0)
        zmm4 = zx.o(0)
        zmm15 = 0x3f800000
        result_5 = result_7
        result_3 = data_142d3f780
    
    result_15 = _mm_unpacklo_ps(result_15, zmm7[0].q).q | result_19[0].q << 0x40
    result_18 = _mm_unpacklo_ps(result_18, result[0].q)[0].q | zmm6[0].q << 0x40
    zmm15 = _mm_unpacklo_ps(zmm15, zmm4[0].q)[0].q | result_14[0].q << 0x40
    result = *arg4
    float temp0_344[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm15)
    result_19 = (*arg4)[1]
    float temp0_347[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_19, result_19, 0), result_18), temp0_344)
    result_18 = (*arg4)[2]
    float temp0_350[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result_18, result_18, 0), result_15), temp0_347)
    result = _mm_mul_ps(_mm_shuffle_epi32(var_108 ^ result_3, 0xc0), temp0_350)
    float temp0_353[0x4] = _mm_shuffle_ps(result_5, result_5, 0xc9)
    result_18 = temp0_350 ^ result_3
    float temp0_355[0x4] = _mm_mul_ps(_mm_shuffle_epi32(result_18, 0xd2), temp0_353)
    result_5 = _mm_shuffle_ps(result_5, result_5, 0xd2)
    float temp0_359[0x4] =
        _mm_sub_ps(temp0_355, _mm_mul_ps(_mm_shuffle_epi32(result_18, 0xc9), result_5))
    float temp0_362[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r14), result_11, 0), 
        _mm_shuffle_ps(zx.o(r15), result_11, 0x30), 0x82)
    zmm8 = _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm8, temp0_128), zx.o(r11)[0].q)
    float temp0_366[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_359, temp0_359, 0xc0), temp0_362)
    float temp0_369[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_359, temp0_359, 0xd5), zmm8), temp0_366)
    result_10 =
        _mm_add_ps(_mm_mul_ps(result_10, _mm_shuffle_ps(temp0_359, temp0_359, 0xea)), temp0_369)
    result_14 = arg5
    result_14 = _mm_shuffle_ps(result_14, result_14, 0xc0)

float temp0_416[0x4] = _mm_add_ps(_mm_mul_ps(result, result_14), result_6)
(*arg1)[rdx + 0x30] = temp0_416[0]
float temp0_417[0x4] = _mm_shuffle_ps(temp0_416, temp0_416, 0xe5)
temp0_416[0].q = temp0_416 u>> 0x40
(*arg1)[rdx + 0x31] = temp0_417[0]
(*arg1)[rdx + 0x32] = temp0_416[0]
zmm4 = arg1[rax + 0xe]
float temp0_418[0x4] = _mm_mul_ps(result_14, result_10)
float temp0_419[0x4] = _mm_mul_ps(zx.o(0), zmm4)
float temp0_420[0x4] = _mm_shuffle_ps(temp0_418, temp0_418, 0)
float temp0_422[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_420)
zmm8 = data_142d3f7c0
float temp0_424[0x4] = _mm_add_ps(_mm_mul_ps(temp0_422, zmm8), temp0_419)
float temp0_425[0x4] = _mm_shuffle_ps(temp0_418, temp0_418, 0x55)
float temp0_427[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_425)
result_5 = data_142d3f7d0
float temp0_429[0x4] = _mm_add_ps(_mm_mul_ps(temp0_427, result_5), temp0_424)
float temp0_430[0x4] = _mm_shuffle_ps(temp0_418, temp0_418, 0xaa)
float temp0_432[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_430)
result_3 = data_142d3f7b0
float temp0_436[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_432, result_3), temp0_429), data_142d3f640), 
    zmm4)
float temp0_437[0x4] = _mm_mul_ps(temp0_436, temp0_436)
float temp0_439[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_437, temp0_437[0].q), temp0_437)
float temp0_440[0x4] = _mm_shuffle_ps(temp0_439, temp0_439, 0xe5)
temp0_440[0] = temp0_440[0] + temp0_439[0]
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_440[0], 6), 0xffffffff)
result = 0x3f000000
temp0_440[0] = temp0_440[0] * 0.5f
float temp0_443[0x4] = _mm_rsqrt_ss(temp0_440[0], temp0_440[0])
temp0_443[0] = temp0_443[0] * temp0_443[0]
temp0_443[0] = temp0_443[0] * temp0_440[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_443[0]
zmm7[0] = zmm7[0] * temp0_443[0]
zmm7[0] = zmm7[0] + temp0_443[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_440[0]
result[0] = 0.5f - zmm7[0]
result[0] = result[0] * zmm7[0]
result[0] = result[0] + zmm7[0]
float temp0_445[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_436)
float temp0_446[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
result = _mm_and_ps(temp0_445, temp0_446)
arg1[rax + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_446, data_142d3f660), result)
result = arg1[0xf]
float temp0_450[0x4] = _mm_mul_ps(arg1[0xe], result)
float temp0_452[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_450, temp0_450[0].q), temp0_450)
float temp0_453[0x4] = _mm_shuffle_ps(temp0_452, temp0_452, 0xe5)
temp0_453[0] = temp0_453[0] + temp0_452[0]
float temp0_454[0x4] = _mm_cmpeq_ss(0, temp0_453[0], 2)
result_19 = _mm_and_ps(temp0_454, 0x3f800000)
result_14 = _mm_or_ps(_mm_andnot_ps(temp0_454, 0xbf800000), result_19)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(result_14, result_14, 0), result)
zmm6 = arg1[rax + 0xe][0]
zmm7 = arg1[rax][0x39]
result_14 = arg1[rax][0x3a]
result_19 = arg1[rdx][6]
result = arg1[rdx + 1][0]
zmm4 = zx.o(arg1[rdx + 1][0].q)[0].q | result_19[0].q << 0x40
result_19 = _mm_unpacklo_ps(result_19, result[0].q)[0].q | arg1[rdx][5][0].q << 0x40
result_20 = _mm_unpacklo_ps(zmm7, result_14[0].q)[0].q | zmm6[0].q << 0x40
float temp0_462[0x4] = _mm_unpacklo_ps(result_14, zmm6[0].q)
float temp0_463[0x4] = _mm_mul_ps(result_19, result_20)
result_14 = temp0_462[0].q | zmm7[0].q << 0x40
float temp0_465[0x4] = _mm_sub_ps(temp0_463, 
    _mm_mul_ps(zx.o(*(&arg1[rdx] + 0x14))[0].q | result[0].q << 0x40, result_14))
float temp0_466[0x4] = _mm_add_ps(temp0_465, temp0_465)
result = arg1[rax][0x3b]
float temp0_469[0x4] = _mm_add_ps(zmm4, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_466))
float temp0_475[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_466, temp0_466, 0xd2), result_20), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_466, temp0_466, 0xc9), result_14)), 
    temp0_469)
float temp0_477[0x4] = _mm_add_ps(
    _mm_unpacklo_ps((*arg1)[rdx + 0x30], (*arg1)[rdx + 0x31][0].q)[0].q
        | (*arg1)[rdx + 0x32][0].q << 0x40, 
    temp0_475)
(*arg1)[rdx + 0x20] = temp0_477[0]
float temp0_478[0x4] = _mm_shuffle_ps(temp0_477, temp0_477, 0xe5)
temp0_477[0].q = temp0_477 u>> 0x40
(*arg1)[rdx + 0x21] = temp0_478[0]
(*arg1)[rdx + 0x22] = temp0_477[0]
result_14 = arg1[rax][0x3b]
float temp0_479[0x4] = _mm_shuffle_ps(result_14, result_14, 0)
zmm7 = arg1[rdx]
float temp0_480[0x4] = _mm_mul_ps(temp0_479, zmm7)
float temp0_481[0x4] = _mm_unpacklo_ps(arg1[rdx][3], arg1[rdx][2][0].q)
zmm6 = arg1[rdx][1]
result_19 = temp0_481[0].q | zmm6[0].q << 0x40
float temp0_482[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
float temp0_483[0x4] = _mm_unpacklo_ps(zmm6, zmm7[0].q)
float temp0_484[0x4] = _mm_shuffle_ps(zmm7, result_19, 0x20)
zmm6 = temp0_483[0].q | temp0_481[0].q << 0x40
float temp0_485[0x4] = _mm_shuffle_ps(temp0_481, temp0_484, 0x24)
result_19 = arg1[rax + 0xe][0]
float temp0_489[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(temp0_485, _mm_shuffle_ps(result_19, result_19, 0)), zmm8), temp0_480)
result_20 = arg1[rax][0x39]
float temp0_493[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(&arg1[rdx] + 8))[0].q | temp0_482[0].q << 0x40, 
            _mm_shuffle_ps(result_20, result_20, 0)), 
        result_5), 
    temp0_489)
result = arg1[rax][0x3a]
arg1[rax + 0xa] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm6, _mm_shuffle_ps(result, result, 0)), result_3), temp0_493)
result = arg1[0xb]
float temp0_498[0x4] = _mm_mul_ps(arg1[0xa], result)
float temp0_500[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_498, temp0_498[0].q), temp0_498)
float temp0_501[0x4] = _mm_shuffle_ps(temp0_500, temp0_500, 0xe5)
temp0_501[0] = temp0_501[0] + temp0_500[0]
float temp0_502[0x4] = _mm_cmpeq_ss(0, temp0_501[0], 2)
result_18 = _mm_and_ps(0x3f800000, temp0_502)
result_20 = _mm_or_ps(_mm_andnot_ps(temp0_502, 0xbf800000), result_18)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(result_20, result_20, 0), result)
return result
