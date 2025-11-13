// 函数: sub_1425caa70
// 地址: 0x1425caa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].q = arg2[1].q
sub_140596d10(arg1 + 0x18, arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
void* rax_2 = arg2[3].q
arg1[3].q = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[4].q = arg2[4].q
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[5] = arg2[5]
arg1[6].q = arg2[6].q
*(arg1 + 0x68) = *(arg2 + 0x68)
arg1[7] = arg2[7]
arg1[8].d = arg2[8].d
return arg1
