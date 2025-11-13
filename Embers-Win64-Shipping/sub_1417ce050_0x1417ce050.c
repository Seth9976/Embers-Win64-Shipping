// 函数: sub_1417ce050
// 地址: 0x1417ce050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax = arg2[1]
arg1[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0xa] = arg2[0xa]
arg1[0xb].d = arg2[0xb].d
return arg1
