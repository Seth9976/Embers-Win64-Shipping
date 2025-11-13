// 函数: sub_140f2d650
// 地址: 0x140f2d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_142ee7430
rax[1] = *(arg1 + 8)
rax[2] = *(arg1 + 0x10)
void* rcx_1 = *(arg1 + 0x18)
rax[3] = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

rax[4].b = *(arg1 + 0x20)
*(rax + 0x21) = *(arg1 + 0x21)
*(rax + 0x24) = *(arg1 + 0x24)
*rax = &data_142ee7450
return &rax[1]
