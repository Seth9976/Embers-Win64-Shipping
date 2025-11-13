// 函数: sub_141bf2c60
// 地址: 0x141bf2c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = arg2
arg2 = arg2 f* *(arg1 + 0x20)
zmm0 = zmm0 f* *(arg1 + 0x1c)
return _mm_sqrt_ss(0, arg2 * arg2 + zmm0 * zmm0)
