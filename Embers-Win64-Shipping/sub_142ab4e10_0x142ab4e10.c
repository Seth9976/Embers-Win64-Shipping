// 函数: sub_142ab4e10
// 地址: 0x142ab4e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    int32_t rax = *(arg1 + 0x10)
    int64_t rbx = 0
    int64_t rcx = sx.q(rax - 1)
    
    if (rax - 1 s>= 0)
        int64_t temp1_1
        
        do
            rbx = rbx << 4 | sx.q(*(*(arg1 + 0x30) + rcx))
            temp1_1 = rcx
            rcx -= 1
        while (temp1_1 - 1 s>= 0)
    
    int64_t rax_3 = sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = rbx
    *(arg1 + 0x40) = 0
    return rax_3

uint64_t rsi = *(arg1 + 0x30)
int64_t rax_4 = sub_142ab3600(arg1, 0x28)
int32_t i = 0

if (*(arg1 + 0x10) s> 0)
    int64_t rdx_2 = 0
    
    do
        rax_4 = *(arg1 + 0x30)
        rdx_2 += 1
        i += 1
        char rcx_2 = rsi.b & 0xf
        rsi u>>= 4
        *(rdx_2 + rax_4 - 1) = rcx_2
    while (i s< *(arg1 + 0x10))

return rax_4
