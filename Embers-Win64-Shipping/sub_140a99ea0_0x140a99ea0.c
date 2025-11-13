// 函数: sub_140a99ea0
// 地址: 0x140a99ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *arg1 = *arg2
    *arg2 = 0
    sub_1405aeff0(&arg1[1], &arg2[1])

arg1[2].w = arg2[2].w
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x14) = *(arg2 + 0x14)
return arg1
