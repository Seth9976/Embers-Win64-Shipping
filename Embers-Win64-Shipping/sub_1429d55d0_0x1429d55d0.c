// 函数: sub_1429d55d0
// 地址: 0x1429d55d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_6 = *(arg1 + 0x34)

if (rdx_6 == 0)
    return 

int64_t i_1 = sx.q(*(arg1 + 0x4c))
int64_t i = i_1
int64_t r10_1 = sx.q(i_1.d + rdx_6)

if (*(*(arg1 + 8) + 0xc) s<= 0)
    for (; i s< r10_1; i += 1)
        *(*(*(arg1 + 0x10) + 0x1b0) + (i << 1)) = 0x80
        
        if (*(*(*(arg1 + 8) + 0x18) + (sx.q(*(*(arg1 + 0x138) + (i << 2)) * 2) << 2))
                != *(arg1 + 0x20))
            int64_t rdx_5 = *(*(arg1 + 0x10) + 0x1b0)
            *(rdx_5 + (i << 1)) |= 2
else if (i s< r10_1)
    do
        *(*(*(arg1 + 0x10) + 0x1b0) + (i << 1)) = 0x80
        i += 1
    while (i s< r10_1)
