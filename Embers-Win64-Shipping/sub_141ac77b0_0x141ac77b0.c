// 函数: sub_141ac77b0
// 地址: 0x141ac77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = zx.o(0)
float zmm4 = (sub_140add740(arg2).d - -1f) * 0.5f

if (zmm4 >= 0f)
    zmm4 = __minss_xmmss_memss(zmm4, 0x3f800000)
else
    zmm4 = (zx.o(0)).d

*arg1 = (arg6 - arg5) * zmm4 + arg5
float zmm2 = (sub_140add740(arg3).d - -1f) * 0.5f

if (zmm2 >= 0f)
    zmm2 = __minss_xmmss_memss(zmm2, 0x3f800000)
else
    zmm2 = (zx.o(0)).d

arg1[1] = (arg8 - arg7) * zmm2 + arg7
float zmm0_3[0x4] = sub_140add740(arg4)
zmm0_3[0] = zmm0_3[0] - -1f
zmm0_3[0] = zmm0_3[0] * 0.5f

if (not(zmm0_3[0] < 0f))
    zmm6 = __minss_xmmss_memss(zmm0_3[0], 0x3f800000)

arg1[2] = (arg10 - arg9) * zmm6[0] + arg9
return arg1
