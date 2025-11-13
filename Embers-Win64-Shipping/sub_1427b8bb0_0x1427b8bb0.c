// 函数: sub_1427b8bb0
// 地址: 0x1427b8bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 8) != *(arg1 + 0xf0))
    *arg2 = 2
    *(arg2 + 8) = 0
    *(arg2 + 0x18) = 0
    arg2[4] = 0x63
    return arg2

sub_1427b8ff0(arg1 + 0x90, arg3, *(arg1 + 0x70))
bool cond:0 = *(arg3 + 0x22) == 0
arg2[4] = 0x63
*(arg2 + 8) = 0
*(arg2 + 0x18) = 0

if (cond:0)
    *arg2 = 2
    return arg2

*arg2 = 3
return arg2
