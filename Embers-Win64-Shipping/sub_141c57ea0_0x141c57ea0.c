// 函数: sub_141c57ea0
// 地址: 0x141c57ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x38, 8)
*arg2 = rax
*rax = &data_14320b040
rax[1] = *(arg1 + 8)
rax[2].d = *(arg1 + 0x10)
rax[3] = *(arg1 + 0x18)
void* rcx_1 = *(arg1 + 0x20)
rax[4] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 0xc) += 1

rax[5].d = *(arg1 + 0x28)
*(rax + 0x2c) = *(arg1 + 0x2c)
rax[6] = *(arg1 + 0x30)
*rax = &data_14320b060
return &rax[1]
