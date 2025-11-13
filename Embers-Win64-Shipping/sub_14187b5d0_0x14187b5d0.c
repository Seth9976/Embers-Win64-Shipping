// 函数: sub_14187b5d0
// 地址: 0x14187b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x40, 8)
*arg2 = rax
*rax = &data_142fe84a8
rax[1] = *(arg1 + 8)
rax[2].d = *(arg1 + 0x10)
sub_140596d10(&rax[3], arg1 + 0x18)
rax[5] = *(arg1 + 0x28)
rax[6] = *(arg1 + 0x30)
void* rcx_3 = *(arg1 + 0x38)
rax[7] = rcx_3

if (rcx_3 != 0)
    *(rcx_3 + 0xc) += 1

*rax = &data_142fe84c8
return &rax[1]
