// 函数: sub_142ac3940
// 地址: 0x142ac3940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg2) & 0xfffffff

if (arg3 s>= 0)
    uint32_t rdx = arg2 u>> 0x1c
    
    if (rdx == 8)
        if (r9.d != 0)
            int64_t rax_6 = *(arg1 + 8)
            
            if (arg3 s< *(rax_6 + (r9 << 2)))
                return zx.q(*(rax_6 + (r9 << 2) + (sx.q(arg3 + 1) << 2)))
    else if (rdx == 9)
        int64_t rax_1 = *(arg1 + 0x10)
        
        if (arg3 s< zx.d(*(rax_1 + (r9 << 1))))
            uint32_t rax_4 = zx.d(*(rax_1 + (r9 << 1) + (sx.q(arg3 + 1) << 1)))
            int32_t rdx_3 = *(arg1 + 0x34)
            
            if (rax_4 s>= rdx_3)
                rax_4 += *(arg1 + 0x30) - rdx_3
            
            return zx.q(rax_4) | 0x60000000

return 0xffffffff
