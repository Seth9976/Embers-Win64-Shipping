// 函数: sub_1427f10f0
// 地址: 0x1427f10f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg2
float zmm2 = 1f

if (not(zmm5 == 0f))
    zmm2 = zmm5

float zmm4 = arg2[1]

if (not(zmm4 == 0f))
    zmm2 = zmm2 * zmm4

float zmm3 = arg2[2]

if (not(zmm3 == 0f))
    zmm2 = zmm2 * zmm3

zmm2 = zmm2 * 8f
zmm3 = zmm3 * zmm3
arg1[0xc] = zmm2
float zmm1 = zmm2 * 0.333333343f
*(arg1 + 4) = 0
zmm4 = zmm4 * zmm4
zmm5 = zmm5 * zmm5
*arg1 = (zmm3 f+ zmm4) f* zmm1
arg1[3] = 0
arg1[4] = (zmm3 + zmm5) * zmm1
*(arg1 + 0x14) = 0
arg1[7] = 0
arg1[8] = (zmm4 + zmm5) * zmm1
*(arg1 + 0x24) = 0
arg1[0xb] = 0
return 0
