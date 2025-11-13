// 函数: sub_142004250
// 地址: 0x142004250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0xc)
float temp0 = _mm_max_ss(*(arg1 + 8), 0)
float temp0_1 = _mm_max_ss(arg2, 0)
float temp0_2 = _mm_max_ss(zmm3, temp0)

if (temp0_1 >= temp0_2)
    return (zx.o(0)).d

float zmm4 = *(arg1 + 0x10)

if (not(zmm4 == 0f) && not(temp0_1 <= temp0))
    return powf(1f - (temp0_1 - temp0) / (temp0_2 - temp0), zmm4) __tailcall

return 0x3f800000
