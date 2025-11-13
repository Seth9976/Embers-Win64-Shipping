// 函数: sub_140f02510
// 地址: 0x140f02510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x418)
void* rax = *(arg1 + 0x420)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x428)
return arg2
