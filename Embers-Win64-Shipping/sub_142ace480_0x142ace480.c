// 函数: sub_142ace480
// 地址: 0x142ace480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    int64_t rax
    rax.b = 1
    return rax

uint64_t rax_1 = __RTDynamicCast(arg2, 0, &class icu_64::TimeZone `RTTI Type Descriptor', 
    &class icu_64::OlsonTimeZone `RTTI Type Descriptor', 0)
uint64_t rbx = rax_1

if (rax_1 != 0)
    if (*(arg1 + 0x78) == *(rax_1 + 0x78))
        rax_1.b = 1
        return rax_1
    
    int64_t* rcx_1 = *(arg1 + 0x80)
    
    if (rcx_1 != 0)
    label_142ace4fb:
        
        if (*(rbx + 0x80) != 0)
            if (rcx_1 == 0 || *(rbx + 0x80) == 0)
                goto label_142ace520
            
            if ((*(*rcx_1 + 0x10))().b != 0)
                goto label_142ace520
    else if (*(rbx + 0x80) == rcx_1)
        if (rcx_1 != 0)
            goto label_142ace4fb
        
    label_142ace520:
        
        if (*(arg1 + 0x80) == 0)
        label_142ace56d:
            int16_t r15 = *(arg1 + 0x68)
            
            if (r15 != *(rbx + 0x68))
                rax_1.b = 0
            else
                int16_t rbp_1 = *(arg1 + 0x48)
                
                if (rbp_1 != *(rbx + 0x48))
                    rax_1.b = 0
                else
                    int16_t r14_1 = *(arg1 + 0x4a)
                    
                    if (r14_1 != *(rbx + 0x4a))
                        rax_1.b = 0
                    else
                        int16_t rsi_1 = *(arg1 + 0x4c)
                        
                        if (rsi_1 != *(rbx + 0x4c))
                            rax_1.b = 0
                        else
                            if (sub_142acd2e0(*(arg1 + 0x50), *(rbx + 0x50), sx.d(rbp_1) << 3) == 0)
                                return 0
                            
                            if (sub_142acd2e0(*(arg1 + 0x58), *(rbx + 0x58), sx.d(r14_1) << 2) == 0)
                                return 0
                            
                            if (sub_142acd2e0(*(arg1 + 0x60), *(rbx + 0x60), sx.d(rsi_1) << 3) == 0)
                                return 0
                            
                            if (sub_142acd2e0(*(arg1 + 0x70), *(rbx + 0x70), sx.d(r15) << 3) == 0)
                                return 0
                            
                            if (sub_142acd2e0(*(arg1 + 0x78), *(rbx + 0x78), 
                                    sx.d(rsi_1 + r14_1 + rbp_1)).b == 0)
                                return 0
                            
                            rax_1.b = 1
            
            return rax_1
        
        if (*(arg1 + 0x90) == *(rbx + 0x90))
            double zmm0_1 = *(arg1 + 0x88)
            double temp0_1 = *(rbx + 0x88)
            zmm0_1 - temp0_1
            
            if (not(is_unordered.q(zmm0_1, temp0_1)) && zmm0_1 == temp0_1)
                goto label_142ace56d

rax_1.b = 0
return rax_1
