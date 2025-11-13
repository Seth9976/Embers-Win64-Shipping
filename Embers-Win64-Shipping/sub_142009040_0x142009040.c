// 函数: sub_142009040
// 地址: 0x142009040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142008f10(arg1, arg2, arg3).b != 0 && *(arg1 + 0xac) == *(arg2 + 0xac)
        && arg1[0x16] == arg2[0x16] && arg1[0x17] == arg2[0x17])
    uint32_t zmm0_1[0x4] = *(arg1 + 0xa4)
    zmm0_1[0] = zmm0_1[0] f- *(arg2 + 0xa4)
    arg3.o = 0x7fffffff
    
    if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999994e-09f))
        zmm0_1 = arg1[0x15].d
        zmm0_1[0] = zmm0_1[0] f- arg2[0x15].d
        
        if (not(_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> 9.99999994e-09f))
            arg3.o = zx.o(0)
            float zmm3[0x4] = arg2[0x13].d
            float temp0_3[0x4] = _mm_unpacklo_ps(*(arg1 + 0x9c), 0)
            float temp0_4[0x4] = _mm_unpacklo_ps(arg1[0x13].d, arg1[0x14].d[0].q)
            zmm0_1 = arg2[0x14].d
            float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
            float temp0_6[0x4] = _mm_unpacklo_ps(*(arg2 + 0x9c), 0)
            float temp0_8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), temp0_6[0].q)
            float zmm2[0x4] = data_143f3f330
            float temp0_9[0x4] = _mm_sub_ps(temp0_5, temp0_8)
            float zmm7[0x4] = data_143f3f320
            float zmm5_1[0x4] = __andps_xmmxud_memxud(zmm7, data_143f3f300)
            float temp0_11[0x4] = _mm_div_ps(temp0_9, zmm7)
            float temp0_13[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_11))
            arg3.o = temp0_13
            arg3.o ^= temp0_11
            zmm2 = _mm_and_ps(
                _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_11, data_143f3f300), 2), arg3.o)
            arg3.o = zmm7
            float temp0_18[0x4] = _mm_sub_ps(temp0_9, _mm_mul_ps(zmm2 ^ temp0_13, zmm7))
            float temp0_21[0x4] =
                _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), _mm_min_ps(temp0_18, zmm5_1))
            arg3.o = _mm_add_ps(arg3.o, temp0_21)
            float zmm8[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(zx.o(0), temp0_21, 2), arg3.o ^ temp0_21) ^ arg3.o
            zmm0_1 = _mm_cmpeq_ps(data_143f3f310, zmm8, 1)
            arg3.o = zmm8
            arg3.o = _mm_sub_ps(arg3.o, zmm7)
            arg3.o ^= zmm8
            arg3.o = _mm_and_ps(arg3.o, zmm0_1)
            arg3.o ^= zmm8
            zmm0_1 = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0)
            arg3.o = __andps_xmmxud_memxud(arg3.o, data_143f3f300)
            
            if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(zmm0_1, arg3.o, 1))) == 0)
                result.b = 1
                return result

result.b = 0
return result
