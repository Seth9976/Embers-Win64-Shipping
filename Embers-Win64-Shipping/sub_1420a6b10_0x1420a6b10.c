// 函数: sub_1420a6b10
// 地址: 0x1420a6b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)

if (rcx == 0)
    return 

if ((*(rcx + 0x8a) & 1) != 0 && (*(arg2 + 0xa0) & 2) != 0)
    rcx[0x42].b |= 1
    *(arg1 + 0x30) = 0
    return 

(*(*rcx + 0x538))()
sub_141efdf10(*(arg1 + 0x30))
*(arg1 + 0x30) = 0
