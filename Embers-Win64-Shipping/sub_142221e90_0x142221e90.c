// 函数: sub_142221e90
// 地址: 0x142221e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0_1 = sub_140a454f0(arg2, 0x43b40000)

if (not(zmm0_1 >= 0f))
    zmm0_1 = zmm0_1 + 360f

char result = (int.d(zmm0_1 * 0.708333313f)).b
*(arg1 + 0x232) = result
return result
