// 函数: sub_141f58ee0
// 地址: 0x141f58ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = sub_141f0aa40(arg1)
float zmm6[0x4] = zmm0

if ((*(arg1 + 0x338) & 1) == 0)
    return zmm0

char rax_1 = *(arg1 + 0x320)

if (rax_1 == 1)
    zmm6[0] = zmm6[0] * 10000f
    return zmm6

if (rax_1 != 2)
    zmm6[0] = zmm6[0] * 16f
    return zmm6

zmm0 = *(arg1 + 0x350)
float zmm1[0x4] = zx.o(0)

if (not(zmm0[0] < 0f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x42b20000)

zmm1[0] = zmm1[0] * 0.0174532924f
float zmm2[0x4] = *(arg1 + 0x354)
zmm2[0] = zmm2[0] * 0.0174532924f
zmm1[0] = zmm1[0] + 0.00100000005f

if (not(zmm2[0] < zmm1[0]))
    zmm1 = __minss_xmmss_memss(zmm2[0], 0x3fc6f4b7)

float zmm0_1 = cosf(zmm1[0])
zmm2 = 0x3f800000
zmm1 = 0x44c6f195
zmm2[0] = 1f - zmm0_1
zmm1[0] = 1591.54944f / zmm2[0]
zmm6[0] = zmm6[0] * zmm1[0]
return zmm6[0]
