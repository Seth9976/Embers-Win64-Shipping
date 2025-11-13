// 函数: sub_1407ca600
// 地址: 0x1407ca600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg2 + 8)
float zmm0[0x4] = *(arg2 + 4)
float zmm3[0x4] = *(arg2 + 0x14)
float zmm5 = *(arg2 + 0x24)
float zmm1[0x4] = *(arg2 + 0x2c)
float zmm2[0x4] = arg2[2].d
zmm0[0] = zmm0[0] * zmm0[0]
float zmm6[0x4] = *(arg2 + 0x18)
float zmm7[0x4] = *(arg2 + 0xc)
float zmm8[0x4] = *arg2
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm0[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm0 = arg2[1].d
zmm0[0] = zmm0[0] * zmm0[0]
zmm7[0] = zmm7[0] + zmm0[0]
zmm0 = *(arg2 + 0x1c)
zmm0[0] = zmm0[0] * zmm0[0]
zmm6[0] = zmm6[0] + zmm0[0]
zmm0 = *(arg2 + 0x28)
zmm0[0] = zmm0[0] * zmm0[0]
zmm5 = zmm5 * zmm5 + zmm0[0]
zmm4[0] = zmm4[0] + zmm4[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] + zmm8[0]
zmm4[0] = zmm4[0] + zmm8[0]
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm3[0] = zmm3[0] + zmm7[0]
zmm3[0] = zmm3[0] + zmm7[0]
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm2[0] = zmm2[0] + zmm6[0]
zmm2[0] = zmm2[0] + zmm6[0]
zmm6 = zmm1
zmm6[0] = zmm6[0] + zmm1[0]
zmm6[0] = zmm6[0] * zmm1[0]
zmm1 = zx.o(0)
zmm6[0] = zmm6[0] + zmm5
zmm6[0] = zmm6[0] + zmm5

if (zmm6[0] >= 0f)
    zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
else
    zmm6 = zx.o(0)

if (zmm2[0] >= 0f)
    zmm7 = _mm_min_ss(zmm2[0], 0x3f800000)
else
    zmm7 = zx.o(0)

if (zmm3[0] >= 0f)
    zmm8 = _mm_min_ss(zmm3[0], 0x3f800000)
else
    zmm8 = zx.o(0)

if (not(zmm4[0] < 0f))
    zmm1 = _mm_min_ss(zmm4[0], 0x3f800000)

zmm4 = 0x40400000
zmm3 = 0x40400000
zmm4[0] = 3f - zmm1[0]
zmm2 = 0x40400000
zmm3[0] = 3f - zmm8[0]
zmm2[0] = 3f - zmm7[0]
zmm4[0] = zmm4[0] * zmm1[0]
zmm3[0] = zmm3[0] * zmm8[0]
zmm2[0] = zmm2[0] * zmm7[0]
zmm4[0] = zmm4[0] - 3f
zmm3[0] = zmm3[0] - 3f
zmm2[0] = zmm2[0] - 3f
zmm4[0] = zmm4[0] * zmm1[0]
zmm1 = 0x40400000
zmm1[0] = 3f - zmm6[0]
zmm3[0] = zmm3[0] * zmm8[0]
zmm4[0] = zmm4[0] + 1f
zmm2[0] = zmm2[0] * zmm7[0]
zmm3[0] = zmm3[0] + 1f
zmm1[0] = zmm1[0] * zmm6[0]
zmm2[0] = zmm2[0] + 1f
zmm1[0] = zmm1[0] - 3f
zmm4[0] = zmm4[0] * 2.73066664f
zmm3[0] = zmm3[0] * 2.73066664f
zmm1[0] = zmm1[0] * zmm6[0]
*arg1 = zmm4[0]
arg1[1] = zmm3[0]
zmm1[0] = zmm1[0] + 1f
zmm2[0] = zmm2[0] * 2.73066664f
zmm1[0] = zmm1[0] * 2.73066664f
arg1[2] = zmm2[0]
arg1[3] = zmm1[0]
return arg1
