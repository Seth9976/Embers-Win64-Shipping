// 函数: sub_142ae4b80
// 地址: 0x142ae4b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142a6ce50(arg1, arg2) == 0)
    return 0

if (*(arg1 + 0x1f0) == *(arg2 + 0x1f0) && sub_142a48110(arg1 + 0x168, arg2 + 0x168) != 0
        && sub_142a48110(arg1 + 0x1a8, arg2 + 0x1a8) != 0
        && sub_142a45d30(arg1 + 0x1f8, arg2 + 0x1f8) != 0)
    return 1

return 0
