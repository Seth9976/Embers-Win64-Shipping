// 函数: sub_1427f15e0
// 地址: 0x1427f15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *arg1
float zmm2 = 1f

if (not(zmm0 == 0f))
    zmm2 = zmm0

zmm0 = arg1[1]

if (not(zmm0 == 0f))
    zmm2 = zmm2 * zmm0

zmm0 = arg1[2]

if (not(zmm0 == 0f))
    zmm2 = zmm2 * zmm0

return 0.238732412f / zmm2 * arg2
