// 函数: sub_141f1ba30
// 地址: 0x141f1ba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (*(arg1 + 0x334) != 0)
    result.o = 0x3f800000
    return result

float zmm1[0x4] = *(arg1 + 0x340)
result.o = zx.o(0)

if (not(zmm1[0] != 0f))
    result.o = __minss_xmmss_memss(0x3d4ccccd, 0x3f800000)
    return result

zmm1[0] = zmm1[0] * 0.00499999989f
result.o = 0x38d1b717

if (not(zmm1[0] < 9.99999975e-05f))
    result.o = __minss_xmmss_memss(zmm1[0], 0x3f800000)

return result
