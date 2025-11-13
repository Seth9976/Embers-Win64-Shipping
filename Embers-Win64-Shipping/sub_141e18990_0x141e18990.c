// 函数: sub_141e18990
// 地址: 0x141e18990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4]

if (arg3 == 0)
    var_28 = *arg5
else
    float zmm3[0x4] = *(arg3 + 0x10)
    float zmm2[0x4] = *arg5
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(zmm2, zmm2, 0x1b))
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_6[0x4] = _mm_mul_ps(temp0_2, zmm2)
    float temp0_7[0x4] = __mulps_xmmps_memps(temp0_4, data_143f39670)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_6)
    float temp0_11[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143f39660)
    float temp0_15[0x4] = __mulps_xmmps_memps(temp0_13, data_143f39650)
    var_28 = _mm_add_ps(_mm_add_ps(temp0_9, temp0_14), temp0_15)

int128_t* rax_1 = arg4 + 0x10
float var_18[0x4] = var_28

if (arg4 == 0)
    rax_1 = &data_14399f720

float var_30 = arg9[0]
var_28 = *rax_1
return sub_141e18a90(arg1, arg2, arg3, &var_18, arg4, &var_28, arg6, arg7, arg8, var_30)
