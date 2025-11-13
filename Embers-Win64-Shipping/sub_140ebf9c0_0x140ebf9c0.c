// 函数: sub_140ebf9c0
// 地址: 0x140ebf9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x478)
void* rax = *(arg1 + 0x480)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x488)
return arg2
