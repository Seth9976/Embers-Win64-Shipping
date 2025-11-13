// 函数: sub_1418e1aa0
// 地址: 0x1418e1aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc0) == 0)
    return arg1 + 0xa8

char* rdi = *(arg1 + 0x10)
uint32_t rbx_1 = *(arg1 + 0x18) * 0xc
sub_1418edb40(arg1 + 0xa8, rdi, rbx_1)
*(arg1 + 0xa8) = sub_140b21160(rdi, rbx_1, 0)
*(arg1 + 0xc0) = 0
return arg1 + 0xa8
