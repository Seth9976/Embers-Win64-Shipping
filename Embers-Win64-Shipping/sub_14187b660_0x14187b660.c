// 函数: sub_14187b660
// 地址: 0x14187b660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_142fe8308
rax[1] = *(arg1 + 8)
void* rdx_1 = *(arg1 + 0x10)
rax[2] = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 0xc) += 1

*(rax + 0x18) = *(arg1 + 0x18)
*rax = &data_142fe8328
return &rax[1]
