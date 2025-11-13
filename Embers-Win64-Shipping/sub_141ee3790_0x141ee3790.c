// 函数: sub_141ee3790
// 地址: 0x141ee3790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0x1ec)
float zmm5 = arg3

if (zmm3 < 0f)
    zmm3 = 360f
else
    zmm3 = _mm_min_ss(zmm3 * zmm5, 0x43b40000)

arg3 = *(arg1 + 0x1e8)

if (arg3 < 0f)
    arg3 = 360f
else
    arg3 = _mm_min_ss(arg3 * zmm5, 0x43b40000)

float zmm0 = *(arg1 + 0x1e4)

if (zmm0 < 0f)
    arg2[1] = arg3
    *arg2 = 0x43b40000
    arg2[2] = zmm3
    return arg2

arg2[1] = arg3
arg2[2] = zmm3
*arg2 = _mm_min_ss(zmm0 * zmm5, 0x43b40000)
return arg2
