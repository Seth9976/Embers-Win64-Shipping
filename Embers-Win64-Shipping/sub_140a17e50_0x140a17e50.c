// 函数: sub_140a17e50
// 地址: 0x140a17e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x48)
void* rax = *(arg1 + 0x50)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2
