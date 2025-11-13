// 函数: sub_142ac3b90
// 地址: 0x142ac3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx_1 = zx.q(arg2) & 0xfffffff

if (arg3 s< 0)
    return 0xffffffff

uint32_t rdx = arg2 u>> 0x1c

if (rdx == 2)
    if (rcx_1.d != 0)
        int64_t rbx_3 = *(arg1 + 8)
        uint64_t rax_15 = zx.q(*(rbx_3 + (rcx_1 << 2)))
        
        if (arg3 s< rax_15.d)
            int64_t rdi = rbx_3 + (rcx_1 << 2) + 2 + (((zx.q(not.d(rax_15.d)) & 1) + rax_15) << 1)
            
            if (arg4 != 0)
                uint64_t r11_3 = zx.q(*(rbx_3 + (rcx_1 << 2) + 2 + (sx.q(arg3) << 1)))
                int64_t rax_17 = sx.q(*(arg1 + 0x24))
                
                if (r11_3.d s< rax_17.d)
                    *arg4 = rbx_3 + r11_3
                    return zx.q(*(rdi + (sx.q(arg3) << 2)))
                
                *arg4 = *(arg1 + 0x18) - rax_17 + r11_3
            
            return zx.q(*(rdi + (sx.q(arg3) << 2)))
else if (rdx == 4)
    if (rcx_1.d != 0)
        int64_t rbx_2 = *(arg1 + 8)
        int32_t r11_2 = *(rbx_2 + (rcx_1 << 2))
        int64_t rdx_5 = rbx_2 + (rcx_1 << 2)
        
        if (arg3 s< r11_2)
            if (arg4 != 0)
                int64_t rcx_9 = sx.q(*(rdx_5 + (sx.q(arg3) << 2) + 4))
                
                if (rcx_9.d s>= 0)
                    *arg4 = rcx_9 + rbx_2
                    return zx.q(*(rdx_5 + (sx.q(r11_2 + arg3) << 2) + 4))
                
                *arg4 = (zx.q(rcx_9.d) & 0x7fffffff) + *(arg1 + 0x18)
            
            return zx.q(*(rdx_5 + (sx.q(r11_2 + arg3) << 2) + 4))
else if (rdx == 5)
    int64_t rax_2 = *(arg1 + 0x10)
    uint32_t rbx_1 = zx.d(*(rax_2 + (rcx_1 << 1)))
    int64_t rdx_3 = rax_2 + (rcx_1 << 1)
    
    if (arg3 s< rbx_1)
        if (arg4 != 0)
            uint64_t r11_1 = zx.q(*(rdx_3 + (sx.q(arg3) << 1) + 2))
            int64_t rax_4 = sx.q(*(arg1 + 0x24))
            int64_t rcx_3
            
            if (r11_1.d s>= rax_4.d)
                rcx_3 = *(arg1 + 0x18) - rax_4 + r11_1
            else
                rcx_3 = zx.q(r11_1.d) + *(arg1 + 8)
            
            *arg4 = rcx_3
        
        uint32_t rax_6 = zx.d(*(rdx_3 + (sx.q(rbx_1 + arg3) << 1) + 2))
        int32_t rdx_4 = *(arg1 + 0x34)
        
        if (rax_6 s>= rdx_4)
            rax_6 += *(arg1 + 0x30) - rdx_4
        
        return zx.q(rax_6) | 0x60000000

return 0xffffffff
