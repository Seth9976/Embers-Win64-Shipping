// 函数: sub_141ef79b0
// 地址: 0x141ef79b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = zx.o(0)

if (not(arg2[0] < 0f))
    zmm0 = _mm_min_ss(arg2[0], 0x3f800000)

arg2 = 0xbf800000
bool cond:1 = zmm0[0] < -1f
*(arg1 + 0x164) = zmm0[0]

if (not(cond:1))
    arg2 = _mm_min_ss(zmm0[0], 0x3f800000)

float result = acosf(arg2[0]) * 57.2957764f
*(arg1 + 0x160) = result
return result
