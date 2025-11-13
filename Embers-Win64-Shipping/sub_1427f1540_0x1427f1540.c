// 函数: sub_1427f1540
// 地址: 0x1427f1540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *arg1
float zmm0 = 1f

if (not(zmm2 == 0f))
    zmm0 = zmm2

zmm2 = arg1[1]

if (not(zmm2 == 0f))
    zmm0 = zmm0 * zmm2

zmm2 = arg1[2]

if (not(zmm2 == 0f))
    zmm0 = zmm0 * zmm2

return arg2 / zmm0
