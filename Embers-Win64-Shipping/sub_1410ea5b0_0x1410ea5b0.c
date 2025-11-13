// 函数: sub_1410ea5b0
// 地址: 0x1410ea5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = 0.00999999978f
float zmm3 = 2f

if (not(arg3 < 0.00999999978f))
    zmm0 = _mm_min_ss(arg3, 0x40000000)

arg1[2] = zmm0

if (not(arg2 < 2f))
    zmm3 = __minss_xmmss_memss(arg2, 0x453b8000)

if (data_1439b5c30 == 0)
    arg1[1] = zmm3
    *arg1 = 0f
    return arg1

arg1[1] = _mm_min_ss(data_1439b5c00, zmm3)

if (not(zmm3 f>= data_1439b5c00))
    zmm3 = (zx.o(0)).d

*arg1 = zmm3
return arg1
