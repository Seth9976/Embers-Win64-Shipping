// 函数: sub_142b8f800
// 地址: 0x142b8f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg2 + 0x214)
*(arg1 + 0x214) = rax_1
int32_t i = 0

if (*(arg2 + 0x210) s> 0)
    int64_t rdx = 0
    
    do
        rdx += 4
        i += 1
        rax_1 = *(rdx + *(arg2 + 0x200) - 4)
        *(rdx + *(arg1 + 0x200) - 4) = rax_1
    while (i s< *(arg2 + 0x210))

int64_t rcx_1 = sx.q(*(arg2 + 0x210))

if (rcx_1.d s>= *(arg1 + 0x210))
    *(arg1 + 0x210) = rcx_1.d
    return rax_1

int64_t rdx_1 = rcx_1 << 2

do
    rdx_1 += 4
    rcx_1 = zx.q(rcx_1.d + 1)
    *(rdx_1 + *(arg1 + 0x200) - 4) = 0
while (rcx_1.d s< *(arg1 + 0x210))

int32_t rax_3 = *(arg2 + 0x210)
*(arg1 + 0x210) = rax_3
return rax_3
