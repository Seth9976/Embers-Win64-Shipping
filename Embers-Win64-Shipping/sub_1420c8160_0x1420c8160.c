// 函数: sub_1420c8160
// 地址: 0x1420c8160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = arg2[2]
float zmm0[0x4] = (*arg1)[2]
int32_t result = *(arg3 + 8)
float temp0[0x4] = _mm_unpacklo_ps((*arg1)[1], 0)
float temp0_1[0x4] = __mulps_xmmps_memps(*arg2, data_143f47e60)
float temp0_2[0x4] = _mm_rcp_ps(zmm5)
float temp0_5[0x4] =
    __subps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(*arg1, zmm0[0].q), temp0[0].q), arg2[1])
float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
float zmm7[0x4] = __andps_xmmxud_memxud(temp0_5, data_143f47e70)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_6)
float temp0_14[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), temp0_7), temp0_11)
float temp0_15[0x4] = _mm_mul_ps(temp0_2, temp0_2)
float temp0_16[0x4] = _mm_add_ps(temp0_2, temp0_2)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm5)
float temp0_19[0x4] = _mm_mul_ps(temp0_8, temp0_17)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_7)
float zmm3[0x4] = *(arg3 + 4)
float temp0_23[0x4] = _mm_add_ps(temp0_19, zmm7)
float temp0_24[0x4] = _mm_mul_ps(temp0_20, temp0_20)
float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm5)
float temp0_28[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f47e10), data_143f47e50, 2)
float temp0_29[0x4] = _mm_sub_ps(temp0_25, temp0_26)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
float zmm2[0x4] = *(arg3 + 8)
float temp0_32[0x4] = _mm_sub_ps(temp0_22, _mm_mul_ps(temp0_30, temp0_6))
int64_t var_4c = *arg3
zmm5 = _mm_and_ps(temp0_28, temp0_29 ^ zx.o(0)) ^ temp0_29
zmm0 = *arg3
float temp0_35[0x4] = _mm_mul_ps(_mm_add_ps(temp0_32, temp0_23), zmm5)
int96_t var_68 = temp0_35[0].12

if (temp0_35[0] < (zmm0 ^ 0x80000000)[0] || temp0_35[0] f> var_4c.d)
    result.b = 0
else
    zmm0 = var_68:4.d
    
    if (zmm0[0] < (zmm3 ^ 0x80000000)[0] || zmm0[0] f> var_4c:4.d)
        result.b = 0
    else
        zmm0 = var_68:8.d
        
        if (zmm0[0] < (zmm2 ^ 0x80000000)[0] || zmm0[0] f> result)
            result.b = 0
        else
            result.b = 1

return result
