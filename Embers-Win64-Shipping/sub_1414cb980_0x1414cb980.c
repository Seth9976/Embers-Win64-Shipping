// 函数: sub_1414cb980
// 地址: 0x1414cb980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = arg1[1]
float zmm4 = arg3
float zmm3 = *arg1
float zmm1 = arg1[2]
zmm3 = zmm3 * zmm3 + zmm0 * zmm0 + zmm1 * zmm1

if (zmm3 <= zmm4)
    *arg2 = 0f
else
    *arg2 = _mm_sqrt_ss((zx.o(0)).d, zmm3)

zmm0 = arg1[5]
arg3 = arg1[4]
zmm1 = arg1[6]
arg3 = arg3 * arg3 + zmm0 * zmm0 + zmm1 * zmm1

if (arg3 <= zmm4)
    arg2[1] = 0
else
    arg2[1] = _mm_sqrt_ss((zx.o(0)).d, arg3)

zmm0 = arg1[9]
arg3 = arg1[8]
zmm1 = arg1[0xa]
arg3 = arg3 * arg3 + zmm0 * zmm0 + zmm1 * zmm1

if (arg3 <= zmm4)
    arg2[2] = 0
    return arg2

arg2[2] = _mm_sqrt_ss(0, arg3)
return arg2
