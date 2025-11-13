// 函数: sub_142c22e30
// 地址: 0x142c22e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x90)

if (*(arg1 + 0xcc) != 0)
    *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14 + 0xc) = sub_142c1ed90(*(arg1 + 0xa0), arg2)
        | (*(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14 + 0xc) & 0x60) | 0x10

void* rdx = *(arg1 + 0x90)
int64_t result = *(rdx + 0x70)
*(result + zx.q(*(rdx + 0x5c)) * 0x14) = arg2
return result
