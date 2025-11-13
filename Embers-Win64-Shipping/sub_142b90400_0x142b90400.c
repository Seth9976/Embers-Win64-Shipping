// 函数: sub_142b90400
// 地址: 0x142b90400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 1)
    return 

int64_t i_2 = 0

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

int32_t i_1 = 0

if (*(arg1 + 0x210) s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t rdx = *(arg1 + 0x200)
    rbx_1 += 4
    i_1 += 1
    uint64_t r9_1 = zx.q(*(rdx + rbx_1 - 4))
    int64_t r9_3 = r9_1 * zx.q(arg2.d) + (zx.q(i_2.d) & 0xfffffff)
    *(rdx + rbx_1 - 4) = r9_3.d & 0xfffffff
    i_2 = (i_2 u>> 0x1c) + (r9_3 u>> 0x1c) + ((zx.q(r9_1.d) * (arg2 u>> 0x20)) << 4)
while (i_1 s< *(arg1 + 0x210))

while (i_2 != 0)
    int64_t rcx_5 = sx.q(*(arg1 + 0x210))
    
    if (rcx_5.d s>= 0x80)
        abort()
        noreturn
    
    int32_t r8_6 = i_2.d & 0xfffffff
    i_2 u>>= 0x1c
    *(*(arg1 + 0x200) + (rcx_5 << 2)) = r8_6
    *(arg1 + 0x210) += 1
