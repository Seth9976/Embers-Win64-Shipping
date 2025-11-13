// 函数: sub_142b9b2b0
// 地址: 0x142b9b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (strcmp(arg2, "darkening-parameters") == 0)
    *arg3 = *(arg1 + 0x40)
    arg3[1] = *(arg1 + 0x44)
    arg3[2] = *(arg1 + 0x48)
    arg3[3] = *(arg1 + 0x4c)
    arg3[4] = *(arg1 + 0x50)
    arg3[5] = *(arg1 + 0x54)
    arg3[6] = *(arg1 + 0x58)
    arg3[7] = *(arg1 + 0x5c)
    return 0

if (strcmp(arg2, "hinting-engine") == 0)
    *arg3 = *(arg1 + 0x38)
    return 0

if (strcmp(arg2, "no-stem-darkening") != 0)
    return 0xc

*arg3 = *(arg1 + 0x3c)
return 0
