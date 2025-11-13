// 函数: sub_142271de0
// 地址: 0x142271de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0_1[0x4] = sub_140acf590(*(arg2 + 8), arg3, arg4)
*(arg2 + 8) = zmm0_1[0]
int64_t result
float zmm0_2
zmm0_2, result = sub_140a454f0(zmm0_1, 0x43b40000)

if (not(zmm0_2 >= 0f))
    zmm0_2 = zmm0_2 + 360f

*(arg2 + 8) = zmm0_2
return result
