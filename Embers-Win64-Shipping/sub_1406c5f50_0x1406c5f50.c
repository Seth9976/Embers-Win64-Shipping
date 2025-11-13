// 函数: sub_1406c5f50
// 地址: 0x1406c5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0

if (*arg1 != 0)
    sub_140a74f90(*arg1)

*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1].d = 0
*(arg2 + 0xc) = 0
return arg1
