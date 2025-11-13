// 函数: sub_1418e1e20
// 地址: 0x1418e1e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return arg1 + 0x38

char* rbx = *(arg1 + 0x30)
uint32_t rdi_1 = (*(arg1 + 0x18) + 1) * 0xc
sub_1418edb40(arg1 + 0x38, rbx, rdi_1)
*(arg1 + 0x38) = sub_140b21160(rbx, rdi_1, 0)
*(arg1 + 0x50) = 0
return arg1 + 0x38
