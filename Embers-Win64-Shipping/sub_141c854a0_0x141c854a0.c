// 函数: sub_141c854a0
// 地址: 0x141c854a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x38, 8)
*arg2 = rax
*rax = &data_14320fc80
rax[1] = *(arg1 + 8)
rax[2] = *(arg1 + 0x10)
void* rcx_1 = *(arg1 + 0x18)
rax[3] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

rax[4] = *(arg1 + 0x20)
void* rax_2 = *(arg1 + 0x28)
rax[5] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

rax[6] = *(arg1 + 0x30)
*rax = &data_14320fca0
return &rax[1]
