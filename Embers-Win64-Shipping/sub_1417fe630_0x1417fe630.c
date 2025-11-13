// 函数: sub_1417fe630
// 地址: 0x1417fe630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe2278
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0

if (arg2[1].b != 0)
    arg1[2].d = *arg2
    *(arg1 + 0x14) = 1

arg1[4].b = 0

if (arg3[1].b != 0)
    arg1[3] = *arg3
    arg1[4].b = 1

arg1[5] = 0
arg1[6] = 0
return arg1
