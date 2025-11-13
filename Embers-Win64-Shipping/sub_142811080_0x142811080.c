// 函数: sub_142811080
// 地址: 0x142811080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result_2[0x4] = *(arg1 + 4)
uint32_t zmm4[0x4] = 0x3f800000
uint32_t zmm6[0x4] = *(arg1 + 8)
uint32_t result[0x4]
uint32_t result_3[0x4]
float result_1[0x4]

if (__andps_xmmxud_memxud(zmm6, data_142d3f770)[0] f<= 0.707106769f)
    result_3 = *arg1
    result = result_2
    result[0] = result[0] f* result_2[0]
    arg2[2] = 0
    result_3[0] = result_3[0] f* result_3[0]
    result_3[0] = result_3[0] f+ result[0]
    zmm4[0] = 1f / _mm_sqrt_ss(0, result_3[0])[0]
    result_3[0] = result_3[0] f* zmm4[0]
    result_2[0] = result_2[0] f* zmm4[0]
    arg2[1] = result_3[0]
    zmm4[0] = zmm4[0] f* result_3[0]
    result_2 ^= data_142d3f780
    *arg2 = result_2[0]
    result_1 = *(arg1 + 8)
    result = result_1
    arg3[2] = zmm4[0]
    result[0] = result[0] f* result_3[0]
    result_1[0] = result_1[0] * result_2[0]
    *arg3 = (result ^ data_142d3f780)[0]
    arg3[1] = result_1[0]
else
    *arg2 = 0
    zmm6[0] = zmm6[0] f* zmm6[0]
    result_3 = result_2
    result_3[0] = result_3[0] f* result_2[0]
    result_3[0] = result_3[0] f+ zmm6[0]
    zmm4[0] = 1f / _mm_sqrt_ss(0, result_3[0])[0]
    result_2[0] = result_2[0] f* zmm4[0]
    zmm6[0] = zmm6[0] f* zmm4[0]
    arg2[2] = result_2[0]
    zmm4[0] = zmm4[0] f* result_3[0]
    zmm6 ^= data_142d3f780
    arg2[1] = zmm6[0]
    result_1 = *arg1
    result = result_1
    *arg3 = zmm4[0]
    result[0] = result[0] f* result_2[0]
    result_1[0] = result_1[0] f* zmm6[0]
    arg3[1] = (result ^ data_142d3f780)[0]
    arg3[2] = result_1[0]
zmm4 = arg2[1]
zmm6 = zx.o(0)
result_3 = *arg2
result_2 = arg2[2]
float zmm2 = zmm4[0] f* zmm4[0]
result_2[0] = result_2[0] * result_2[0]
result_3[0] = result_3[0] f* result_3[0]
float temp0_3[0x4] = _mm_sqrt_ss(0, zmm2 f+ result_3[0] + result_2[0])

if (not(temp0_3[0] f<= zmm6[0]))
    result = 0x3f800000
    result[0] = 1f / temp0_3[0]
    result_3[0] = result_3[0] f* result[0]
    zmm4[0] = zmm4[0] f* result[0]
    result_2[0] = result_2[0] f* result[0]
    *arg2 = result_3[0]
    arg2[1] = zmm4[0]
    arg2[2] = result_2[0]

zmm4 = arg3[1]
result_3 = *arg3
result_2 = arg3[2]
zmm2 = result_3[0]
zmm4[0] = zmm4[0] f* zmm4[0]
zmm2 = zmm2 f* result_3[0]
result_2[0] = result_2[0] * result_2[0]
result = _mm_sqrt_ss(0, zmm2 f+ zmm4[0] + result_2[0])

if (not(result[0] f<= zmm6[0]))
    int128_t zmm7
    zmm7.d = 1f f/ result[0]
    result_3[0] = result_3[0] f* zmm7.d
    zmm4[0] = zmm4[0] f* zmm7.d
    result_2[0] = result_2[0] f* zmm7.d
    *arg3 = result_3[0]
    arg3[1] = zmm4[0]
    arg3[2] = result_2[0]

return result
