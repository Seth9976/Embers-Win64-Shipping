// 函数: sub_141e96bf0
// 地址: 0x141e96bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4] = arg2
float zmm0[0x4]
float zmm1[0x4]
int128_t zmm2
float zmm3
float zmm4
int32_t zmm5
float var_58[0x4]
int128_t zmm6

if (*(arg1 + 0x34) != 1)
    float temp0_6[0x4] = __maxss_xmmss_memss((*(arg1 + 0x18))[0], 0x3a83126f)
    zmm6 = data_14399fa0c
    temp0_6[0] = temp0_6[0] * 0.00872664619f
    zmm0 = tanf(temp0_6[0])
    zmm4 = 1f
    zmm5 = (zx.o(0)).d
    zmm2 = data_142d3f660
    zmm1 = 0x3f800000
    zmm1[0] = 1f / zmm0[0]
    int64_t var_54_1 = 0
    int64_t var_40_1 = 0
    int32_t var_1c_1 = 0
    var_58[0] = zmm1[0]
    zmm3 = zmm1[0] f* *(arg1 + 0x2c)
    zmm1 = 0:4.o
    *result = var_58
    zmm0 = 0.o
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    temp0_7[0] = zmm3
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xe1)
    temp0_8[0] = zmm6.d
    result[1] = temp0_9
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
    result[2] = zmm2
    result[3] = temp0_10
else
    zmm4 = 1f
    zmm5 = (zx.o(0)).d
    zmm2 = *(arg1 + 0x20)
    zmm1 = 0x3f800000
    zmm1[0] = 1f f/ *(arg1 + 0x2c)
    zmm2.d = zmm2.d f* 0.5f
    zmm0 = *(arg1 + 0x28)
    zmm3 = 1f
    zmm0[0] = zmm0[0] f- *(arg1 + 0x24)
    zmm1[0] = zmm1[0] f* zmm2.d
    zmm6.d = 1f / zmm0[0]
    
    if (not(zmm1[0] == 0f))
        zmm3 = 1f / zmm1[0]
    
    zmm1 = 0x3f800000
    
    if (not(zmm2.d f== 0f))
        zmm1[0] = 1f f/ zmm2.d
    
    zmm2.d = zmm6.d f* *(arg1 + 0x24)
    int64_t var_2c_1 = 0
    zmm6 ^= data_142d3f780
    int64_t var_54 = 0
    zmm2.d = zmm2.d f+ 1f
    var_58[0] = zmm1[0]
    int64_t var_40 = 0
    zmm1 = 0:4.o
    *arg2 = var_58
    float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
    temp0[0] = zmm3
    zmm0 = 0.o
    arg2[1] = _mm_shuffle_ps(temp0, temp0, 0xe1)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xd2)
    int64_t var_28
    var_28:4.d = 0
    temp0_2[0] = zmm6.d
    int32_t var_1c = 0x3f800000
    zmm1 = var_28.o
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
    temp0_3[0] = zmm2.d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
    arg2[2] = temp0_4
    arg2[3] = temp0_5
zmm3 = *(arg1 + 0x580)

if (zmm3 f!= zmm5 || not(zmm5 f== *(arg1 + 0x584)))
    zmm1 = 0xbf000000
    zmm2 = *(arg1 + 0x584)
    zmm0 = 0xbf000000
    zmm2.d = zmm2.d f+ zmm2.d
    zmm2.d = zmm2.d f- zmm4
    zmm2.d = zmm2.d f* 0.5f
    zmm0[0] = -0.5f - (zmm3 + zmm3 - zmm4) * 0.5f
    zmm1[0] = -0.5f f- zmm2.d
    result[2][0] = zmm0[0]
    (*result)[9] = zmm1[0]

return result
