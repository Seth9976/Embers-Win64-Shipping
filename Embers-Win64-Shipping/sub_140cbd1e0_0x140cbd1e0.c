// 函数: sub_140cbd1e0
// 地址: 0x140cbd1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1

if (arg1[1].b == 0)
    *arg2 = *(rax + 0x10)
    return arg2

*arg2 = *(rax + 0x20)
arg2[1].b = 1
return arg2
