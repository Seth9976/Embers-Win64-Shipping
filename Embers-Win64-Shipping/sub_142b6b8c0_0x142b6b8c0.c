// 函数: sub_142b6b8c0
// 地址: 0x142b6b8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg1 + 3))
int32_t r10 = arg2
uint32_t rax_1 = zx.d(*(arg1 + (sx.q(arg2 - 1) << 2) + 3))
uint32_t r9_1 = zx.d(arg3)

if (r9_1 u>= rcx && rax_1 u>= r9_1)
    if (arg2 == rax_1 - rcx + 1)
        return zx.q(*(arg1 + (sx.q(r9_1 - rcx) << 2))) & 0xffffff
    
    int32_t r8 = 0
    uint32_t rbx_2 = r9_1 << 0x18
    int32_t i = arg2
    
    if (arg2 s> 1)
        do
            if (i s<= 4)
                if (rbx_2 u> *(arg1 + (sx.q(r8) << 2)))
                    r8 += 1
                    
                    if (r8 s>= r10 || rbx_2 u> *(arg1 + (sx.q(r8) << 2)))
                        r8 += 1
                        
                        if (r8 s>= r10 || rbx_2 u> *(arg1 + (sx.q(r8) << 2)))
                            r8 += 1
                
                break
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10 + r8)
            int32_t rax_10 = (temp1_1 - temp0_1) s>> 1
            
            if ((rbx_2 | 0xffffff) u>= *(arg1 + (sx.q(rax_10) << 2)))
                r8 = rax_10
            else
                r10 = rax_10
            
            i = r10 - r8
        while (i s> 1)
    
    if (r8 s< r10)
        int32_t rax_5 = *(arg1 + (sx.q(r8) << 2))
        
        if (r9_1 == rax_5 u>> 0x18)
            return zx.q(rax_5) & 0xffffff

return 0
