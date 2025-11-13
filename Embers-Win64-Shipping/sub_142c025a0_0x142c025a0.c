// 函数: sub_142c025a0
// 地址: 0x142c025a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
__builtin_memset(&arg2[2], 0, 0x1c)
arg2[9] = 0xffffffff
int32_t result

while (true)
    if (*(arg1 + 0x1c) == 0)
        uint64_t rcx = zx.q(*(arg1 + 0x18))
        int32_t rdx = *(arg1 + 0x10)
        
        if ((rcx + 1).d u<= rdx)
            int128_t* const rax
            
            if (rcx.d u< rdx)
                rax = rcx + *(arg1 + 8)
            else
                *(arg1 + 0x1c) = 1
                rax = &data_14369a5d0
            
            uint32_t rcx_1 = zx.d(*rax)
            
            if (rcx_1 != 0xc)
            label_142c0264e:
                int32_t rax_7
                
                if (*(arg1 + 0x1c) == 0)
                    rax_7 = *(arg1 + 0x18)
                
                if (*(arg1 + 0x1c) != 0 || rax_7 u> rdx || rax_7 + 1 u> rdx)
                    *(arg1 + 0x18) = rdx
                    *(arg1 + 0x1c) = 1
                else
                    *(arg1 + 0x18) = rax_7 + 1
            else
                uint64_t rax_3
                
                if (*(arg1 + 0x1c) == 0)
                    rax_3 = zx.q(*(arg1 + 0x18) + 1)
                
                if (*(arg1 + 0x1c) == 0 && rax_3.d u<= rdx)
                    int128_t* const rax_4
                    
                    if (rax_3.d u< rdx)
                        rax_4 = rax_3 + *(arg1 + 8)
                    else
                        *(arg1 + 0x1c) = 1
                        rax_4 = &data_14369a5d0
                    
                    rcx_1 = zx.d(*rax_4) + 0x100
                    int32_t rax_5
                    
                    if (*(arg1 + 0x1c) == 0)
                        rax_5 = *(arg1 + 0x18)
                    
                    if (*(arg1 + 0x1c) != 0 || rax_5 u> rdx || rax_5 + 1 u> rdx)
                        *(arg1 + 0x18) = rdx
                        *(arg1 + 0x1c) = 1
                    else
                        *(arg1 + 0x18) = rax_5 + 1
                    
                    goto label_142c0264e
                
                rcx_1 = 0xffff
            
            sub_142c03630(rcx_1, arg1, arg2)
            
            if (sub_142c00df0(arg1).b != 0)
                break
            
            continue
    
    result.b = 1
    return result

result.b = 0
return result
