// 函数: sub_142aa52c0
// 地址: 0x142aa52c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x28))
int32_t rbx = *(arg1 + 0x2c)

if (rcx.d != rbx)
    int64_t rsi_1 = *(arg1 + 0x20)
    char rdx_1 = *(rcx + rsi_1)
    
    if (rdx_1 != 0 || rbx s>= 0)
        int32_t rdi = (rcx + 1).d
        uint64_t r8 = zx.q(rdx_1)
        *(arg1 + 0x28) = rdi
        
        if (r8.b s< 0)
            uint32_t r11
            r11.b = 0
            
            if (rdi != rbx)
                int32_t r9_1
                
                if (r8.d u>= 0xe0)
                    r9_1 = 1
                    int32_t rax_5
                    
                    if (r8.d u>= 0xf0)
                        r8 = zx.q(r8.d - 0xf0)
                        
                        if (r8.d s> 4)
                            rax_5 = 0
                        else
                            r11 = zx.d(*(sx.q(rdi) + rsi_1))
                            
                            if (not(test_bit(sx.d(*((zx.q(r11) u>> 4) + 0x14363c6e8)), r8.d)))
                                rax_5 = 0
                            else
                                r8 = (zx.q(r11.b) & 0x3f) | zx.q(r8.d << 6)
                                *(arg1 + 0x28) = rdi + 1
                                
                                if (rdi + 1 == rbx)
                                    rax_5 = 0
                                else
                                    r11.b = *(sx.q(rdi + 1) + rsi_1) - 0x80
                                    
                                    rax_5 = r11.b u> 0x3f ? 0 : 1
                    else
                        r8 = zx.q(r8.d) & 0xf
                        r11 = zx.d(*(sx.q(rdi) + rsi_1))
                        
                        if (not(test_bit(sx.d((*" 000000000000")[r8]), zx.d((r11 u>> 5).b))))
                            rax_5 = 0
                        else
                            r11.b &= 0x3f
                            rax_5 = 1
                    
                    if (rax_5 == 0)
                        r9_1 = 0
                    else
                        *(arg1 + 0x28) += 1
                        r8 = zx.q(r8.d << 6) | zx.q(r11.b)
                        
                        if (*(arg1 + 0x28) == rbx)
                            r9_1 = 0
                else if (r8.d u< 0xc2)
                    r9_1 = 0
                else
                    r8 = zx.q(r8.d) & 0x1f
                    r9_1 = 1
                
                if (r9_1 != 0)
                    int64_t rdx_2 = sx.q(*(arg1 + 0x28))
                    char rcx_4 = *(rdx_2 + rsi_1) - 0x80
                    
                    if (rcx_4 u<= 0x3f)
                        *(arg1 + 0x28) = (rdx_2 + 1).d
                        return zx.q(r8.d << 6) | zx.q(rcx_4)
            
            r8 = 0xfffd
        
        return zx.q(r8.d)

return 0xffffffff
