// 函数: sub_141932e90
// 地址: 0x141932e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_142ff86c8
rax[1] = *(arg1 + 8)
rax[2] = *(arg1 + 0x10)
void* rcx_1 = *(arg1 + 0x18)
rax[3] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

rax[4] = *(arg1 + 0x20)
*rax = &data_142ff86e8
return &rax[1]
