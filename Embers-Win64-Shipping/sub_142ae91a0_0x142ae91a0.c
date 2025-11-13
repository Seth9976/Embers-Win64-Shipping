// 函数: sub_142ae91a0
// 地址: 0x142ae91a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) s< 0)
    int64_t rdx_1 = *(arg1 + 0x48)
    int64_t rax_1 = *(arg1 + 0x10)
    
    while (*(rdx_1 + (rax_1 << 1)) != 0)
        rax_1 += 1
        *(arg1 + 0x10) = rax_1
    
    int64_t rax_2 = *(arg1 + 0x10)
    *(arg1 + 8) &= 0xfffffffd
    *(arg1 + 0x70) = rax_2
    *(arg1 + 0x2c) = rax_2.d
    *(arg1 + 0x1c) = rax_2.d

return *(arg1 + 0x70)
