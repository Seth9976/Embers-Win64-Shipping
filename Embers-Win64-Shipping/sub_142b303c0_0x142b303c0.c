// 函数: sub_142b303c0
// 地址: 0x142b303c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x250))
    r8 = 0
else
    r8 = *(*(arg1 + 0x260) + (sx.q(arg2) << 3))

if ((r8.d & 3) s< arg3)
    uint8_t rax_6
    
    if (arg3 != 1)
        rax_6 = (r8 u>> 5).b
    else
        rax_6 = (r8 u>> 6).b
    
    if ((not.b(rax_6) & 1) == 0)
        uint64_t r8_2 = zx.q(r8.d s>> 8) & 0xfffff
        int64_t rdx
        
        if (r8_2.d s>= *(arg1 + 0x250))
            rdx = 0
        else
            rdx = *(*(arg1 + 0x260) + (r8_2 << 3))
        
        uint64_t rdx_2
        
        while (true)
            rdx_2 = zx.q(rdx.d s>> 8) & 0xfffff
            
            if (rdx_2.d s>= *(arg1 + 0x250))
                rdx = 0
            else
                rdx = *(*(arg1 + 0x260) + (rdx_2 << 3))
            
            if ((rdx.b u>> 3 & 1) == 0 && (rdx.d & 3) s<= arg3)
                if ((rdx s>> 0x30).w u>= 0x500)
                    break
        
        return zx.q(rdx_2.d)

return zx.q(arg2)
