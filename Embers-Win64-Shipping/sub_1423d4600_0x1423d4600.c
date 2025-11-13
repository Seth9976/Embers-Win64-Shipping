// 函数: sub_1423d4600
// 地址: 0x1423d4600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_14333d970
rax[1] = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
rax[2] = rcx

if (rcx != 0)
    *(rcx + 8) += 1

rax[3] = *(arg1 + 0x18)
rax[4].b = *(arg1 + 0x20)
*(rax + 0x21) = *(arg1 + 0x21)
*rax = &data_143343538
return &rax[1]
