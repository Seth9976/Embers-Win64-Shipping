// 函数: sub_140ad9b20
// 地址: 0x140ad9b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg1
float zmm2[0x4] = *(arg1 + 4)
float zmm1[0x4] = *(arg1 + 8)
float temp0[0x4] = _mm_min_ss(zmm3[0], zmm2[0])
float temp0_1[0x4] = _mm_max_ss(zmm3[0], zmm2[0])
float zmm7[0x4] = zx.o(0)
float temp0_2[0x4] = _mm_min_ss(temp0[0], zmm1[0])
float zmm6[0x4] = _mm_max_ss(temp0_1[0], zmm1[0])
bool cond:0 = zmm6[0] == temp0_2[0]
float zmm8[0x4] = zmm6
zmm8[0] = zmm8[0] - temp0_2[0]

if (cond:0)
    zmm1 = zx.o(0)
else if (not(zmm6[0] != zmm3[0]))
    zmm2[0] = zmm2[0] - zmm1[0]
    zmm2[0] = zmm2[0] / zmm8[0]
    zmm2[0] = zmm2[0] * 60f
    zmm2[0] = zmm2[0] + 360f
    float zmm0_1[0x4]
    zmm0_1, zmm6, zmm7, zmm8 = sub_140a454f0(zmm2, 0x43b40000)
    zmm1 = zmm0_1
else if (not(zmm6[0] != zmm2[0]))
    zmm1[0] = zmm1[0] - zmm3[0]
    zmm1[0] = zmm1[0] / zmm8[0]
    zmm1[0] = zmm1[0] * 60f
    zmm1[0] = zmm1[0] + 120f
else if (zmm6[0] != zmm1[0])
    zmm1 = zx.o(0)
else
    zmm1 = zmm3
    zmm1[0] = zmm1[0] - zmm2[0]
    zmm1[0] = zmm1[0] / zmm8[0]
    zmm1[0] = zmm1[0] * 60f
    zmm1[0] = zmm1[0] + 240f

if (not(zmm6[0] == zmm7[0]))
    zmm7 = zmm8
    zmm7[0] = zmm7[0] / zmm6[0]

arg2[3] = *(arg1 + 0xc)
arg2[1] = zmm7[0]
arg2[2] = zmm6[0]
*arg2 = zmm1[0]
return arg2
