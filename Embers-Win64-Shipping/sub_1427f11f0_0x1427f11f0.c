// 函数: sub_1427f11f0
// 地址: 0x1427f11f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg3 * 3.14159274f * arg3 * (arg4 + arg4)
arg1[0xc] = zmm4
*(arg1 + 4) = 0
float zmm5 = arg3 * arg3 * zmm4 * 0.5f
float zmm1 = (arg3 * 0.25f * arg3 + arg4 * 0.333333343f * arg4) * zmm4

if (arg2 == 0)
    *arg1 = zmm5
    arg1[4] = zmm1
    arg1[3] = 0
    *(arg1 + 0x14) = 0
    arg1[8] = zmm1
    arg1[7] = 0
    arg1[0xb] = 0
    *(arg1 + 0x24) = 0
    return 0

*arg1 = zmm1
arg1[3] = 0
*(arg1 + 0x14) = 0

if (arg2 == 1)
    arg1[4] = zmm5
    arg1[8] = zmm1
    arg1[7] = 0
    arg1[0xb] = 0
    *(arg1 + 0x24) = 0
    return 0

arg1[4] = zmm1
arg1[8] = zmm5
arg1[7] = 0
arg1[0xb] = 0
*(arg1 + 0x24) = 0
return 0
