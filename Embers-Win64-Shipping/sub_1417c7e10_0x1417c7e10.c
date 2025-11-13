// 函数: sub_1417c7e10
// 地址: 0x1417c7e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3 = sbb.b(arg3, arg3, *(arg2 + 2) != 0) & 2
*arg1 = arg3
bool cond:0

if (arg4 == 0)
    cond:0 = *arg2 == 0
else
    cond:0 = *(arg2 + 1) == 0

if (not(cond:0))
    arg3 |= 1

*arg1 = arg3 | 8
return arg1
