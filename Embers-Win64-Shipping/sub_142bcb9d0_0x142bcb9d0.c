// 函数: sub_142bcb9d0
// 地址: 0x142bcb9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142bcba50(arg1, arg2)

if (rax == 0)
    return 6

if (*(rax + 8) == 0)
    *arg3 = 2
    arg3[2] = *(rax + 0x10)
    return 0

*arg3 = 1
*(arg3 + 8) = *(rax + 0x10)
return 0
