// 函数: sub_141f44c40
// 地址: 0x141f44c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14c) & 0x40) == 0 || *(arg1 + 0xc0) != 0)
    return 

int64_t rcx = *(*(arg1 + 0xa0) + 0x130)

if (rcx != arg1)
    *(arg1 + 0x14e) |= 1
    *(arg1 + 0xc0) = rcx
