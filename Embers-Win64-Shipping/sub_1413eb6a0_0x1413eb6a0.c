// 函数: sub_1413eb6a0
// 地址: 0x1413eb6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 0x1244)

if (not(zmm1 == 0f))
    float zmm2 = *(arg1 + 0x123c)
    float zmm0 = (*(arg1 + 0x1a4) - zmm1 - zmm2) / (*(arg1 + 0x1240) - zmm2)
    
    if (zmm0 >= 0f)
        return __minss_xmmss_memss(zmm0, 0x3f800000)

return (zx.o(0)).d
