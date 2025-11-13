// 函数: sub_142b8fda0
// 地址: 0x142b8fda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = 0
int32_t i = 0

if (*(arg1 + 0x210) s> 0)
    int64_t rbx_1 = 0
    uint32_t r9_2
    
    do
        int64_t r8_1 = *(arg1 + 0x200)
        rbx_1 += 4
        i += 1
        int32_t rdx = *(r8_1 + rbx_1 - 4)
        r9_2 = rdx u>> (0x1c - arg2)
        int32_t rdx_2 = (rdx << arg2) + r10
        r10 = r9_2
        *(r8_1 + rbx_1 - 4) = rdx_2 & 0xfffffff
    while (i s< *(arg1 + 0x210))
    
    if (r9_2 != 0)
        *(*(arg1 + 0x200) + (sx.q(*(arg1 + 0x210)) << 2)) = r9_2
        *(arg1 + 0x210) += 1

return arg1
