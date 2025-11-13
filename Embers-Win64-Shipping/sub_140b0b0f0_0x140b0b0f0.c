// 函数: sub_140b0b0f0
// 地址: 0x140b0b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
arg1[2] = 0
*arg1 = &data_142e75548
arg1[3] = 0
*(arg1 + 0x821) = 0
arg1[0x104].b = arg4
arg1[0x105] = 0
arg1[0x106].b = arg3

if (arg2 == 0)
    arg1[4].w = 0
    return arg1

wcsncpy(&arg1[4], arg2, 0x3ff)
*(arg1 + 0x81e) = 0
return arg1
