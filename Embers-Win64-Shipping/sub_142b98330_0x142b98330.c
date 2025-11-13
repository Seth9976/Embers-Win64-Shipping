// 函数: sub_142b98330
// 地址: 0x142b98330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg2

if ((arg4 & 1) == 0)
    void* rax_1 = *(arg1 + 0x80)
    
    if (rax_1 == 0)
        return 0x24
    
    int32_t r11_1
    
    if ((arg4 & 0x10) == 0)
        r11_1 = *(rax_1 + 0x1c)
    else
        r11_1 = *(rax_1 + 0x20)
    
    if (arg3 != 0)
        uint64_t i_1 = zx.q(arg3)
        uint64_t i
        
        do
            int64_t rcx = sx.q(*r10)
            int32_t r8 = 1
            int64_t rdx = rcx
            int64_t rax_3 = sx.q(r11_1)
            
            if (rcx.d s< 0)
                rdx = neg.q(rdx)
                r8 = -1
            
            if (r11_1 s< 0)
                rax_3 = neg.q(rax_3)
                r8 = neg.d(r8)
            
            uint32_t rax_6 = ((rax_3 * rdx + 0x20) u>> 6).d
            
            if (r8 s< 0)
                rax_6 = neg.d(rax_6)
            
            *r10 = rax_6
            r10 = &r10[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return 0
