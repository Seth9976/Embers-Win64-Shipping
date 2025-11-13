// 函数: sub_142786b00
// 地址: 0x142786b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].b = arg3
char rax_1 = (*(*arg2 + 0x308))(arg2)
bool cond:0 = (arg1[1].b & 2) == 0
*(arg1 + 9) = rax_1

if (not(cond:0) && rax_1 != 0)
    sub_141edf3f0(*arg1)

return arg1
