// 函数: sub_142b0ff10
// 地址: 0x142b0ff10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg2 s> *(arg1 + 0x2c))
    rax = zx.q(*(arg1 + 0x30))
    
    if (arg2 s<= rax.d)
        if (arg2 == rax.d)
            *(arg1 + 0x28) = *(arg1 + 0x10) - 1
        
        int32_t r9 = 0
        int32_t temp0_1 = *(arg1 + 0x28)
        bool cond:1_1 = temp0_1 == 0
        
        if (temp0_1 s> 0)
            rax = zx.q(*(arg1 + 0x10))
            
            if (*(arg1 + 0x28) s< rax.d)
                int64_t rdx = sx.q(*(arg1 + 0x28))
                int32_t r8
                
                if (rdx.d s< 0 || rax.d s<= 0 || rax.d - rdx.d s<= 0)
                    r8 = 0
                else
                    r8 = *(*(arg1 + 0x20) + (rdx << 2))
                
                if (r8 == arg2)
                    int32_t rcx = (rdx - 1).d
                    *(arg1 + 0x28) = rcx
                    
                    if (rcx s>= 0)
                        int32_t rax_2 = *(arg1 + 0x10)
                        
                        if (rax_2 s> 0 && rax_2 - rcx s> 0)
                            r9 = *(*(arg1 + 0x20) + (sx.q(rcx) << 2))
                    
                    *arg3 = r9
                    
                    if (r9 != *(arg1 + 0x2c))
                        *arg4 = *(arg1 + 0x38)
                        int32_t rax_6
                        rax_6.b = 1
                        return rax_6
                    
                    *arg4 = *(arg1 + 0x34)
                    int32_t rax_5
                    rax_5.b = 1
                    return rax_5
            
            cond:1_1 = *(arg1 + 0x28) == 0
        
        if (not(cond:1_1))
            int32_t rax_7 = *(arg1 + 0x10)
            *(arg1 + 0x28) = rax_7 - 1
            
            if (rax_7 - 1 s>= 0)
                int32_t i
                
                do
                    int64_t rdx_1 = sx.q(*(arg1 + 0x28))
                    int32_t rax_9
                    
                    if (rdx_1.d s>= 0)
                        rax_9 = *(arg1 + 0x10)
                    
                    int32_t r8_1
                    
                    if (rdx_1.d s< 0 || rax_9 s<= 0 || rax_9 - rdx_1.d s<= 0)
                        r8_1 = 0
                    else
                        r8_1 = *(*(arg1 + 0x20) + (rdx_1 << 2))
                    
                    if (r8_1 s< arg2)
                        *arg3 = r8_1
                        
                        if (r8_1 != *(arg1 + 0x2c))
                            *arg4 = *(arg1 + 0x38)
                            int32_t rax_13
                            rax_13.b = 1
                            return rax_13
                        
                        *arg4 = *(arg1 + 0x34)
                        int32_t rax_12
                        rax_12.b = 1
                        return rax_12
                    
                    i = (rdx_1 - 1).d
                    *(arg1 + 0x28) = i
                while (i s>= 0)
            
            abort()
            noreturn

rax.b = 0
*(arg1 + 0x28) = 0xffffffff
return rax
