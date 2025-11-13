// 函数: sub_142b90310
// 地址: 0x142b90310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 1)
    return 

if (arg2 == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x210) s> 0)
        int64_t r8_1 = 0
        
        do
            r8_1 += 4
            i += 1
            *(r8_1 + *(arg1 + 0x200) - 4) = 0
        while (i s< *(arg1 + 0x210))
    
    *(arg1 + 0x210) = 0
    return 

int32_t rcx_1 = *(arg1 + 0x210)

if (rcx_1 == 0)
    return 

uint64_t i_2 = 0
int32_t i_1 = 0

if (rcx_1 s<= 0)
    return 

int64_t r10_1 = 0

do
    int64_t rdx = *(arg1 + 0x200)
    r10_1 += 4
    i_1 += 1
    int64_t rcx_4 = zx.q(*(rdx + r10_1 - 4)) * zx.q(arg2) + i_2
    *(rdx + r10_1 - 4) = rcx_4.d & 0xfffffff
    i_2 = rcx_4 u>> 0x1c
while (i_1 s< *(arg1 + 0x210))

if (i_2 == 0)
    return 

do
    int64_t rcx_6 = sx.q(*(arg1 + 0x210))
    
    if (rcx_6.d s>= 0x80)
        abort()
        noreturn
    
    int32_t r8_3 = i_2.d & 0xfffffff
    i_2 u>>= 0x1c
    *(*(arg1 + 0x200) + (rcx_6 << 2)) = r8_3
    *(arg1 + 0x210) += 1
while (i_2 != 0)
