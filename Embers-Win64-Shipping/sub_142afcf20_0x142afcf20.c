// 函数: sub_142afcf20
// 地址: 0x142afcf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (*arg3 s<= 0)
    char rax_1 = *(arg1 + 0x16)
    
    if (rax_1 s<= 0)
        if (rax_1 s< 0 && arg1[2].d s> 0)
            arg1[1].d += 1
            *(arg1 + 0x16) = 1
            return 1
        
        *(arg1 + 0x16) = 1
    else
        arg1[4].d += arg1[3].d
        
        if (*(arg1 + 0x17) != 0)
            *(arg1 + 0x24) += *(arg1 + 0x1c)
        
        arg1[5].d += *(arg1 + 0x1c)
    
    rax = arg1[2].d
    
    if (rax s>= 1)
        if (rax s> 1)
            arg1[2].d = rax - 1
            int32_t rax_5
            rax_5.b = 1
            return rax_5
        
        arg1[2].d = 0
    
    int64_t rcx = sx.q(arg1[1].d)
    int32_t rdx = *(arg1 + 0xc)
    
    if (rcx.d s< rdx)
        int64_t r8 = *arg1
        uint32_t rdi = zx.d(*(r8 + (rcx << 1)))
        int32_t rcx_1 = rcx.d + 1
        arg1[1].d = rcx_1
        uint64_t rax_6
        
        if (rdi u> 0xfff)
        label_142afd036:
            *(arg1 + 0x17) = 1
            
            if (rdi u> 0x6fff)
                arg1[3].d = sub_142afd140(arg1, rdi u>> 6 & 0x3f)
                rax_6 = sub_142afd140(arg1, rdi & 0x3f)
                bool cond:3_1 = *(arg1 + 0x15) == 0
                *(arg1 + 0x1c) = rax_6.d
                
                if (not(cond:3_1))
                    goto label_142afd0b6
            else
                uint32_t rdx_2 = rdi u>> 0xc
                int32_t rcx_4 = rdi u>> 9 & 7
                
                if (*(arg1 + 0x15) == 0)
                    arg1[3].d = rdx_2
                    *(arg1 + 0x1c) = rcx_4
                    
                    if ((rdi & 0x1ff) + 1 u> 1)
                        arg1[2].d = (rdi & 0x1ff) + 1
                        rax_6.b = 1
                        return rax_6
                else
                    arg1[3].d = ((rdi & 0x1ff) + 1) * rdx_2
                    *(arg1 + 0x1c) = ((rdi & 0x1ff) + 1) * rcx_4
                label_142afd0b6:
                    
                    while (arg1[1].d s< *(arg1 + 0xc))
                        int64_t rdx_6 = sx.q(arg1[1].d)
                        uint32_t rdi_5 = zx.d(*(*arg1 + (rdx_6 << 1)))
                        
                        if (rdi_5 u<= 0xfff)
                            break
                        
                        arg1[1].d = (rdx_6 + 1).d
                        
                        if (rdi_5 u> 0x6fff)
                            int32_t rax_18 = sub_142afd140(arg1, rdi_5 u>> 6 & 0x3f)
                            arg1[3].d += rax_18
                            int32_t rax_19 = sub_142afd140(arg1, rdi_5 & 0x3f)
                            *(arg1 + 0x1c) += rax_19
                        else
                            arg1[3].d += (rdi_5 u>> 0xc) * ((rdi_5 & 0x1ff) + 1)
                            *(arg1 + 0x1c) += (rdi_5 u>> 9 & 7) * ((rdi_5 & 0x1ff) + 1)
        else
            *(arg1 + 0x17) = 0
            arg1[3].d = rdi + 1
            
            while (rcx_1 s< rdx)
                rdi = zx.d(*(r8 + (sx.q(rcx_1) << 1)))
                
                if (rdi u> 0xfff)
                    break
                
                rcx_1 += 1
                arg1[3].d += rdi + 1
                arg1[1].d = rcx_1
            
            rax_6 = zx.q(arg1[3].d)
            *(arg1 + 0x1c) = rax_6.d
            
            if (arg2 != 0)
                arg1[4].d += rax_6.d
                arg1[5].d += rax_6.d
                int32_t rax_10 = arg1[1].d
                
                if (rax_10 s< rdx)
                    arg1[1].d = rax_10 + 1
                    goto label_142afd036
                
                rax_10.b = 0
                *(arg1 + 0x16) = 0
                arg1[3] = 0
                return rax_10
        
        rax_6.b = 1
        return rax_6
    
    *(arg1 + 0x16) = 0
    arg1[3] = 0

rax.b = 0
return rax
