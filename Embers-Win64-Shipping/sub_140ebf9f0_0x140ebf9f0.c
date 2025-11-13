// 函数: sub_140ebf9f0
// 地址: 0x140ebf9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x458)
void* rax = *(arg1 + 0x460)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

return arg2
