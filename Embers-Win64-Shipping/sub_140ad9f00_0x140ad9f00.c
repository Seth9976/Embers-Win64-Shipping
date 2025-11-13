// 函数: sub_140ad9f00
// 地址: 0x140ad9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = 0x447a0000

if (not(arg2[0] < 1000f))
    zmm3 = __minss_xmmss_memss(arg2[0], 0x466a6000)

zmm3[0] = zmm3[0] * 1.28641219e-07f
float zmm0 = zmm3[0]
arg1[3] = 0x3f800000
float zmm4 = zmm3[0] * 4.20481676e-08f
zmm3[0] = zmm3[0] * 1.61456057e-07f
zmm3[0] = zmm3[0] + 0.000154118257f
zmm3[0] = zmm3[0] * zmm3[0]
zmm0 = (zmm0 * 7.08145137e-07f + 0.00084242021f) * zmm3[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm4 = (zmm4 + 4.22806261e-05f) * zmm3[0]
zmm3[0] = zmm3[0] + 0.860117733f
zmm3[0] = zmm3[0] / (zmm0 + 1f)
float zmm2 = 1f - zmm3[0] * 2.8974182e-05f + zmm3[0]
zmm3[0] = zmm3[0] + zmm3[0]
zmm3[0] = zmm3[0] * 3f
zmm4 = (zmm4 + 0.317398727f) / zmm2
zmm3[0] = zmm3[0] - zmm4 * 8f
zmm3[0] = zmm3[0] + 4f
zmm0 = 1f / zmm3[0]
zmm4 = (zmm4 + zmm4) * zmm0
zmm3[0] = zmm3[0] * zmm0
int128_t zmm6
zmm6.d = 1f - zmm3[0]
zmm3[0] = zmm3[0] / zmm4
zmm6.d = zmm6.d f- zmm4
zmm3[0] = zmm3[0] * 3.2404542f
zmm6.d = zmm6.d f/ zmm4
zmm3[0] = zmm3[0] - 1.53713846f
zmm3[0] = zmm3[0] - zmm6.d * 0.498531401f
zmm0 = zmm6.d
zmm6.d = zmm6.d f* 1.05722523f
*arg1 = zmm3[0]
zmm3[0] = zmm3[0] * 0.0556433983f
zmm3[0] = zmm3[0] * 0.969265997f
zmm3[0] = zmm3[0] f+ zmm6.d
zmm2 = 1.87601078f - zmm3[0]
zmm3[0] = zmm3[0] - 0.204025894f
arg1[2] = zmm3[0]
arg1[1] = zmm2 + zmm0 * 0.0415560007f
return arg1
