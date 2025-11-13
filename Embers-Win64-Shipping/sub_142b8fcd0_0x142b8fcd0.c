// 函数: sub_142b8fcd0
// 地址: 0x142b8fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x210) s> 0)
    int64_t r8_1 = 0
    
    do
        r8_1 += 4
        i += 1
        *(r8_1 + *(arg1 + 0x200) - 4) = 0
    while (i s< *(arg1 + 0x210))

*(arg1 + 0x210) = 0

if (arg2 == 0)
    return 

uint64_t r10_1 = arg2 u>> 0x1c
**(arg1 + 0x200) = arg2.d & 0xfffffff
*(*(arg1 + 0x200) + 4) = r10_1.d & 0xfffffff
*(*(arg1 + 0x200) + 8) = (r10_1 u>> 0x1c).d & 0xfffffff
int64_t rdx_3 = *(arg1 + 0x200)
*(arg1 + 0x210) = 3

while (*(rdx_3 + (sx.q(*(arg1 + 0x210) - 1) << 2)) == 0)
    *(arg1 + 0x210) -= 1
    
    if (*(arg1 + 0x210) s<= 0)
        break

if (*(arg1 + 0x210) == 0)
    *(arg1 + 0x214) = 0
