// 函数: sub_142649240
// 地址: 0x142649240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x40)) ^ zx.q(*(arg1 + 0x88))

if ((result.d & 0x7fffffff) != 0)
    char r8 = 0
    int32_t i = 0
    
    if (*(arg1 + 0x80) s> 0)
        do
            int32_t rax_1 = 1 << i.b
            bool rdx
            
            if (i u> 0xf)
                rdx = false
            else
                rdx = (*(arg2 + 0x40) & rax_1) != 0
            
            if (rdx == 1)
                bool rdx_1
                
                if (i u> 0xf)
                    rdx_1 = false
                else
                    rdx_1 = (*(arg1 + 0x88) & rax_1) != 0
                
                if (rdx_1 == 0)
                    if (i u<= 0xf)
                        *(arg1 + 0x88) |= rax_1
                    
                    r8 = 1
            
            i += 1
        while (i s< *(arg1 + 0x80))
        
        if (r8 != 0)
            sub_142649710(arg1)
    
    int32_t rbx_1 = *(arg1 + 0x3c)
    result = sub_140b5b8a0(*(arg1 + 0x38), 0)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0
    
    if ((rcx_1.b & result.b) != 0)
        result = *(arg2 + 0x44)
        *(arg1 + 0x38) = result

return result
