// 函数: sub_141ef4eb0
// 地址: 0x141ef4eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x88) & 1) == 0)
    *(arg1 + 0x89) &= 0x7f
    *(arg1 + 0x89) |= arg2 << 7
    return 

void* rax = *(arg1 + 0xa0)

if (rax != 0 && (*(rax + 0x5c) & 2) != 0)
    *(arg1 + 0x89) &= 0x7f
    *(arg1 + 0x89) |= arg2 << 7
