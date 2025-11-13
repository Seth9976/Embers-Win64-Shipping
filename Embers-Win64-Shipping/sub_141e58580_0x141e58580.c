// 函数: sub_141e58580
// 地址: 0x141e58580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x10)
int64_t r8 = sx.q(arg2)
int64_t rdx = *(arg1 + 0x20)
arg3 = (arg3 f- *(rax + (r8 << 2))) / (*(rax + (r8 << 2) + 4) f- *(rax + (r8 << 2)))
    * (*(rdx + (r8 << 2) + 4) f- *(rdx + (r8 << 2)))
return arg3 f+ *(rdx + (r8 << 2))
