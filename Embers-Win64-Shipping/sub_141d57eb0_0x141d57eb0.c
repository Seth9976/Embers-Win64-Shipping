// 函数: sub_141d57eb0
// 地址: 0x141d57eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg4
void* rax = arg4[1]
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = arg4[2].d
return arg2
