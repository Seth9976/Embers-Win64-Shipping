// 函数: sub_141c57a20
// 地址: 0x141c57a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x38, 8)
*arg2 = rax
*rax = &data_14320ada0
rax[1] = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
rax[2] = rcx

if (rcx != 0)
    *(rcx + 0xc) += 1

rax[3] = *(arg1 + 0x18)
rax[4] = *(arg1 + 0x20)
void* rax_3 = *(arg1 + 0x28)
rax[5] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

rax[6].d = *(arg1 + 0x30)
*rax = &data_14320adc0
return &rax[1]
