// 函数: sub_141f1b9c0
// 地址: 0x141f1b9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x37c) != 0)
    return 0x3f800000

float zmm0[0x4] = *(arg1 + 0x380)
zmm0[0] = zmm0[0] * 0.0500000007f

if (zmm0[0] < 9.99999975e-05f)
    return 0x38d1b717

return __minss_xmmss_memss(zmm0[0], 0x3f800000)
