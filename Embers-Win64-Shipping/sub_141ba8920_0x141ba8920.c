// 函数: sub_141ba8920
// 地址: 0x141ba8920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *arg2
int128_t zmm6 = zx.o(0)
float zmm7[0x4] = 0xc2b20000
float zmm8[0x4] = 0x42b40000
float zmm0[0x4]
int128_t zmm9

if (zmm1 != 0f)
    if (zmm1 >= -89f)
        zmm1 = __minss_xmmss_memss(zmm1, 0x42b20000)
    else
        zmm1 = -89f
    
    zmm0 = 0x42b40000
    zmm0[0] = 90f - zmm1
    zmm0[0] = zmm0[0] * 0.0174532924f
    zmm9.d = 1f / tanf(zmm0[0])[0]
else
    zmm9 = zx.o(0)

zmm0 = arg2[1]

if (not(zmm0[0] == 0f))
    if (not(zmm0[0] < -89f))
        zmm7 = __minss_xmmss_memss(zmm0[0], 0x42b20000)
    
    zmm8[0] = 90f - zmm7[0]
    zmm8[0] = zmm8[0] * 0.0174532924f
    zmm6.d = 1f / tanf(zmm8[0])

*arg1 = zmm9.d
arg1[1] = zmm6.d
return arg1
