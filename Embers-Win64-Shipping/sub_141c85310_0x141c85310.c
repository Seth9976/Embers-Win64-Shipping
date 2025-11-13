// 函数: sub_141c85310
// 地址: 0x141c85310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x30, 8)
*arg2 = rax
*rax = &data_14320fcc0
rax[1] = *(arg1 + 8)
rax[2] = *(arg1 + 0x10)
void* rcx_1 = *(arg1 + 0x18)
rax[3] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

rax[4] = *(arg1 + 0x20)
void* rcx_3 = *(arg1 + 0x28)
rax[5] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 8) += 1

*rax = &data_14320fce0
return &rax[1]
