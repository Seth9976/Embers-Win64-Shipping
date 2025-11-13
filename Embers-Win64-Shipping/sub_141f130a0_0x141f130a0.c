// 函数: sub_141f130a0
// 地址: 0x141f130a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = arg3 f+ *(arg1 + 0x10c)
float zmm3 = arg3 f+ *(arg1 + 0x110)
float zmm4 = arg3 f+ *(arg1 + 0x114)

if (not(arg3 >= 0f))
    zmm1 = __maxss_xmmss_memss(zmm1, data_143dbb1f8)
    zmm3 = __maxss_xmmss_memss(zmm3, data_143dbb1fc)
    zmm4 = __maxss_xmmss_memss(zmm4, data_143dbb200)

arg2[1] = zmm1
arg2[2] = zmm3
arg2[3] = zmm4
*arg2 = 1
return arg2
