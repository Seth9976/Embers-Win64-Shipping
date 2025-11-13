// 函数: sub_1427aaf80
// 地址: 0x1427aaf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x68)
void* rax = *(arg1 + 0x70)
arg2[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg2[2].d = *(arg1 + 0x78)
return arg2
