// 函数: sub_142930d50
// 地址: 0x142930d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(8)

while (true)
    char r9_1 = *arg2
    
    if (r9_1 u> 0x7f)
        break
    
    int64_t rax_1 = *(arg1 + 8)
    
    if ((*(rax_1 + (zx.q(r9_1) << 1)) & 0x800) != 0)
        *arg2 = 0
        return rax_1
    
    if (r9_1 u> 0x7f)
        break
    
    if ((*(rax_1 + (zx.q(r9_1) << 1)) & 0x10) == 0)
        break
    
    arg2 = &arg2[1]

int64_t rax_2

while (true)
    char r10_1 = *arg2
    
    if (r10_1 u<= 0x7f)
        rax_2 = *(arg1 + 8)
        
        if ((*(rax_2 + (zx.q(r10_1) << 1)) & 0x80) != 0)
            *arg2 = 0
            break
        
        if (r10_1 u<= 0x7f)
            if ((*(rax_2 + (zx.q(r10_1) << 1)) & 0x400) != 0)
                void* r8_2 = &arg2[1]
                char r9_2
                
                while (true)
                    r9_2 = *r8_2
                    
                    if (r9_2 u<= 0x7f && (*(*(arg1 + 8) + (zx.q(r9_2) << 1)) & 8) != 0)
                        arg2 = r8_2 + 1
                        break
                    
                    if (r9_2 == r10_1)
                        arg2 = r8_2 + 1
                        
                        if (*(r8_2 + 1) != r10_1)
                            break
                        
                        r8_2 = arg2
                    
                    r8_2 += 1
                
                if (r9_2 != r10_1)
                    arg2 = r8_2
                    continue
                else
                    continue
            else if (r10_1 u<= 0x7f)
                int64_t r8_3 = *(arg1 + 8)
                
                if ((*(r8_3 + (zx.q(r10_1) << 1)) & 0x40) != 0)
                    arg2 = &arg2[1]
                    
                    while (true)
                        char rcx_4 = *arg2
                        
                        if ((rcx_4 u<= 0x7f && (*(r8_3 + (zx.q(rcx_4) << 1)) & 8) != 0)
                                || rcx_4 == r10_1)
                            char* rax_9 = &arg2[1]
                            
                            if (rcx_4 != r10_1)
                                rax_9 = arg2
                            
                            arg2 = rax_9
                            break
                        
                        if (rcx_4 u<= 0x7f && (*(r8_3 + (zx.q(rcx_4) << 1)) & 0x20) != 0)
                            char rax_7 = arg2[1]
                            arg2 = &arg2[1]
                            
                            if (rax_7 u<= 0x7f && (*(r8_3 + (zx.q(rax_7) << 1)) & 8) != 0)
                                break
                        
                        arg2 = &arg2[1]
                        continue
                    
                    continue
                else if (r10_1 u<= 0x7f)
                    int64_t rcx_5 = *(arg1 + 8)
                    
                    if ((*(rcx_5 + (zx.q(r10_1) << 1)) & 0x20) != 0)
                        char rax_11 = arg2[1]
                        
                        if (rax_11 u<= 0x7f)
                            arg2 = &arg2[1
                                + ((zx.q(zx.d(*(rcx_5 + (zx.q(rax_11) << 1))) u>> 3) & 1) ^ 1)]
                            continue
                        else
                            arg2 = &arg2[2]
                            continue
                    else if (r10_1 u<= 0x7f)
                        rax_2 = *(arg1 + 8)
                        
                        if ((*(rax_2 + (zx.q(r10_1) << 1)) & 8) != 0)
                            break
    
    arg2 = &arg2[1]

return rax_2
