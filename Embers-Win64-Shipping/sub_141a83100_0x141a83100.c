// 函数: sub_141a83100
// 地址: 0x141a83100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg1[1]
float zmm6[0x4] = *(arg3 + 0x10)
float zmm7[0x4] = arg2[1]
float zmm5 = zmm6[0]
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm5 = zmm5 - zmm7[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
temp0[0] = temp0[0] - temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
float zmm4 = zmm7[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm4 = zmm4 - zmm1[0]
temp0_1[0] = temp0_1[0] - temp0_4[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
temp0_3[0] = temp0_3[0] - temp0_6[0]
temp0[0] = temp0[0] * temp0[0]
float var_30 = arg8[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
temp0[0] = temp0[0] + zmm5 * zmm5
temp0_3[0] = temp0_3[0] * temp0_3[0]
temp0_5[0] = temp0_5[0] - temp0_7[0]
float var_38 = arg7[0]
temp0_1[0] = temp0_1[0] * temp0_1[0]
temp0_3[0] = temp0_3[0] + zmm4 * zmm4
temp0_5[0] = temp0_5[0] * temp0_5[0]
temp0[0] = temp0[0] + temp0_1[0]
temp0_3[0] = temp0_3[0] + temp0_5[0]
float temp0_8[0x4] = _mm_sqrt_ss(temp0[0], temp0[0])
return sub_141a82a50(arg1, arg2, arg3, arg4, arg5, _mm_sqrt_ss(temp0_3[0], temp0_3[0])[0], 
    temp0_8[0], arg6, var_38, var_30)
