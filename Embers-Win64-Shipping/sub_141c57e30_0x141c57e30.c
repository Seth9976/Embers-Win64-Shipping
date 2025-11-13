// 函数: sub_141c57e30
// 地址: 0x141c57e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_14320ade0
rax[1] = *(arg1 + 8)
rax[2].d = *(arg1 + 0x10)
rax[3] = *(arg1 + 0x18)
void* rcx_1 = *(arg1 + 0x20)
rax[4] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

*rax = &data_14320ae00
return &rax[1]
