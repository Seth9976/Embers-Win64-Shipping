// 函数: sub_141f25bb0
// 地址: 0x141f25bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x20d)
char result = r8 & 1

if (arg2 == result)
    return result

*(arg1 + 0x20d) = (r8 & 0xfe) | arg2
sub_141ee8490(arg1)
return sub_141f1e980(arg1) __tailcall
