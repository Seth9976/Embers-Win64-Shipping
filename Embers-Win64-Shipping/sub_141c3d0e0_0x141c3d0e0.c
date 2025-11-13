// 函数: sub_141c3d0e0
// 地址: 0x141c3d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = arg5
float zmm0[0x4] = zx.o(0)
float zmm4[0x4] = *arg4
float zmm5[0x4] = arg4[1]
float zmm6[0x4] = arg4[2]
float zmm7[0x4] = arg4[3]
float temp0[0x4] = _mm_sub_ps(*result, zmm4)
float temp0_1[0x4] = _mm_sub_ps(result[1], zmm5)
float temp0_2[0x4] = _mm_sub_ps(result[2], zmm6)
float temp0_3[0x4] = _mm_sub_ps(result[3], zmm7)
zmm0[0] = float.s(arg3)
float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_5[0x4] = _mm_div_ps(temp0_3, temp0_4)
float temp0_6[0x4] = _mm_div_ps(temp0, temp0_4)
float temp0_7[0x4] = _mm_div_ps(temp0_1, temp0_4)
float temp0_8[0x4] = _mm_div_ps(temp0_2, temp0_4)

if (arg3 s> 0)
    result = zx.q(arg3)
    int128_t* i
    
    do
        float zmm3[0x4] = *arg1
        float zmm2[0x4] = (*arg1)[1]
        arg1 = &(*arg1)[2]
        float temp0_9[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_11[0x4] = _mm_mul_ps(temp0_9, zmm6)
        float temp0_12[0x4] = _mm_mul_ps(temp0_10, zmm4)
        zmm6 = _mm_add_ps(zmm6, temp0_8)
        float temp0_14[0x4] = _mm_mul_ps(temp0_9, zmm7)
        zmm4 = _mm_add_ps(zmm4, temp0_6)
        float temp0_16[0x4] = _mm_mul_ps(temp0_10, zmm5)
        zmm7 = _mm_add_ps(zmm7, temp0_5)
        float temp0_18[0x4] = _mm_add_ps(temp0_11, temp0_12)
        zmm5 = _mm_add_ps(zmm5, temp0_7)
        float temp0_20[0x4] = _mm_add_ps(temp0_14, temp0_16)
        *arg2 = temp0_18
        *(arg2 + 0x10) = temp0_20
        arg2 += 0x20
        i = result
        result -= 1
    while (i != 1)

return result
