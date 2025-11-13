// 函数: sub_141933020
// 地址: 0x141933020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x38, 8)
*arg2 = rax
*rax = &data_142ff8708
rax[1] = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
rax[2] = rcx

if (rcx != 0)
    *(rcx + 8) += 1

rax[3].d = *(arg1 + 0x18)
*(rax + 0x1c) = *(arg1 + 0x1c)
rax[4] = *(arg1 + 0x20)
rax[5] = *(arg1 + 0x28)
rax[6] = *(arg1 + 0x30)
*rax = &data_142ff8728
return &rax[1]
