// 函数: sub_1428a2200
// 地址: 0x1428a2200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 != &data_1434e9110 || (*(arg1 + 0x7c) & 0x100) == 0)
    return sub_1428f0c60(&data_143513f90, arg2, arg1, arg3, arg4)

if (arg4 != 0)
    *arg4 = 0x14

*arg3 = *(arg1 + 0xb0)
arg3[1].d = *(arg1 + 0xc0)
return 1
