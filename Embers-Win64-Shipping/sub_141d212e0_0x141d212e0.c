// 函数: sub_141d212e0
// 地址: 0x141d212e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2[1].d)

if (result.d != 0)
    int64_t i = result - 1
    result = *arg2
    int32_t rdi_1 = *(result + (i << 2))
    
    for (; i s> -1; i -= 1)
        result = *arg2
        
        if (i != 0)
            int64_t r10_2 = sx.q(*(result + (i << 2)))
            result = zx.q(*(result + (i << 2) - 4) + 1)
            
            if (r10_2.d != result.d)
                int32_t rdi_2 = rdi_1 - r10_2.d
                
                if (rdi_2 != 0xffffffff)
                    int32_t rax_4 = *(arg1 + 0x10)
                    int32_t rcx_7 = rax_4 - r10_2.d
                    
                    if (rcx_7 != rdi_2 + 1)
                        memmove(r10_2 * 0x1c + *(arg1 + 8), 
                            sx.q(r10_2.d + rdi_2 + 1) * 0x1c + *(arg1 + 8), 
                            (rcx_7 - (rdi_2 + 1)) * 0x1c)
                        rax_4 = *(arg1 + 0x10)
                    
                    *(arg1 + 0x10) = rax_4 - (rdi_2 + 1)
                
                result = *arg2
                rdi_1 = *(result + (i << 2) - 4)
        else
            int64_t r10_1 = sx.q(*result)
            int32_t rsi_2 = rdi_1 - r10_1.d
            
            if (rsi_2 != 0xffffffff)
                int32_t rax = *(arg1 + 0x10)
                int32_t rcx_1 = rax - r10_1.d
                
                if (rcx_1 != rsi_2 + 1)
                    memmove(r10_1 * 0x1c + *(arg1 + 8), 
                        sx.q(r10_1.d + rsi_2 + 1) * 0x1c + *(arg1 + 8), 
                        (rcx_1 - (rsi_2 + 1)) * 0x1c)
                    rax = *(arg1 + 0x10)
                
                result = zx.q(rax - (rsi_2 + 1))
                *(arg1 + 0x10) = result.d
    
    int32_t rdx_4 = *(arg1 + 0x10)
    
    if (*(arg1 + 0x14) != rdx_4)
        return sub_1413f6f70(arg1 + 8, rdx_4)

return result
