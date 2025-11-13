// 函数: sub_1417a8060
// 地址: 0x1417a8060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float result = data_1439b8e9c

if (not(result >= 0f))
    result = arg4 * arg6

float temp0 = _mm_max_ss(1f - result, 0)
float zmm1 = temp0 * arg2[1]
float zmm2 = temp0 * arg2[2]
*arg2 = temp0 * *arg2
arg2[1] = zmm1
arg2[2] = zmm2
result = data_1439b8ea0

if (not(result >= 0f))
    result = arg5 * arg6

float temp0_1 = _mm_max_ss(1f - result, 0)
result = temp0_1 * *arg3
zmm1 = temp0_1 * arg3[1]
arg4 = temp0_1 * arg3[2]
*arg3 = result
arg3[1] = zmm1
arg3[2] = arg4
return result
