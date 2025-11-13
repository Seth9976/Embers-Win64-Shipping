// 函数: sub_141f1ba90
// 地址: 0x141f1ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg3

if (arg1 == arg2)
    return 1f

float zmm0
float zmm3

if (arg1 == 1)
    zmm3 = 625f
    zmm0 = 1f
    arg3 = 6.28318548f
else if (arg1 != 2)
    zmm0 = 0.00159999996f
    zmm3 = 1f
    arg3 = 0.0100530963f
else
    arg3 = 1f / (1f - zmm4)
    zmm3 = arg3 * 99.4718399f
    zmm0 = arg3 * 0.159154937f
    arg3 = arg3 * 1f

if (arg2 == 1)
    return zmm0

if (arg2 != 2)
    return zmm3

return (1f - zmm4) * arg3
