// 函数: sub_1427a5c50
// 地址: 0x1427a5c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xc0)
float zmm0 = *(result + 0x60) - 0.0199999996f

if (zmm0 >= 0f)
    *(result + 0x60) = __minss_xmmss_memss(zmm0, 0x3f800000)
    return result

*(result + 0x60) = 0
return result
