// 函数: sub_140acf590
// 地址: 0x140acf590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[0] = arg3[0] - arg2[0]
float zmm0[0x4]
float zmm6[0x4]
int32_t zmm7_1
zmm0, zmm6, zmm7_1 = sub_140a454f0(arg3, 0x43b40000)

if (not(zmm0[0] >= 0f))
    zmm0[0] = zmm0[0] + zmm6[0]

zmm0[0] = zmm0[0] * 0.5f
zmm0[0] = zmm0[0] f+ zmm7_1
float zmm0_1[0x4]
float zmm6_1[0x4]
zmm0_1, zmm6_1 = sub_140a454f0(zmm0, zmm6)
float zmm7_2 = zmm0_1[0]

if (not(zmm7_2 >= 0f))
    zmm7_2 = zmm7_2 + zmm6_1[0]

arg1[0] = arg1[0] - zmm7_2
float zmm0_2[0x4]
float zmm6_2[0x4]
float zmm7_3[0x4]
float zmm8_1[0x4]
zmm0_2, zmm6_2, zmm7_3, zmm8_1 = sub_140a454f0(arg1, zmm6_1)

if (not(zmm0_2[0] >= 0f))
    zmm0_2[0] = zmm0_2[0] + zmm6_2[0]

if (not(zmm0_2[0] <= 180f))
    zmm0_2[0] = zmm0_2[0] - zmm6_2[0]

if (not(zmm0_2[0] <= zmm8_1[0]))
    zmm7_3[0] = zmm7_3[0] + zmm8_1[0]
    zmm0_2 = zmm7_3
else if (zmm0_2[0] >= (zmm8_1 ^ data_142d3f780)[0])
    zmm0_2 = arg1
else
    zmm7_3[0] = zmm7_3[0] - zmm8_1[0]
    zmm0_2 = zmm7_3

int64_t result
float zmm0_3
float zmm6_3
int32_t zmm9
zmm0_3, result, zmm6_3, zmm9 = sub_140a454f0(zmm0_2, zmm6_2)
return result
