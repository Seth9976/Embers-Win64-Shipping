// 函数: sub_140592390
// 地址: 0x140592390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg6
char* rsi = arg3

if (rax != 0)
    while (true)
        int64_t rbp_1 = rax
        
        if (rsi == arg4)
            break
        
        char* r9 = rsi
        int64_t* r11_1 = &arg6
        
        while (true)
            if (r11_1 != &arg6:2)
                uint32_t rcx = zx.d(*r9)
                uint32_t rax_1
                
                if (rcx u>= 0x80)
                    if (rcx u< 0xc0)
                        goto label_1405924da
                    
                    if (rcx u< 0xe0)
                        rax_1 = rcx & 0x1f
                        arg5 = 1
                    else if (rcx u< 0xf0)
                        rax_1 = rcx & 0xf
                        arg5 = 2
                    else if (rcx u>= 0xf8)
                        rax_1 = rcx & 3
                        arg5 = sbb.d(arg5, arg5, rcx u< 0xfc) + 5
                    else
                        rax_1 = rcx & 7
                        arg5 = 3
                    
                    if (arg4 - r9 s>= zx.q(arg5 + 1))
                        r9 = &r9[1]
                        
                        do
                            uint32_t rdx_1 = zx.d(*r9)
                            
                            if (rdx_1 - 0x80 u> 0x3f)
                                goto label_1405924da
                            
                            rax_1 = (rdx_1 & 0x3f) | rax_1 << 6
                            arg5 -= 1
                            r9 = &r9[1]
                        while (arg5 s> 0)
                        
                        goto label_140592496
                else
                    r9 = &r9[1]
                    rax_1 = rcx
                label_140592496:
                    
                    if (*arg2 == 0)
                        *arg2 = 1
                    
                    if (rax_1 u> 0x10ffff)
                        goto label_1405924da
                    
                    r11_1 += 2
                    
                    if (r9 != arg4)
                        continue
            
            if (rsi == r9)
                goto label_1405924da
            
            rsi = r9
            rax = rbp_1 - 1
            
            if (r11_1 != &arg6:2)
                rax = rbp_1
            
            if (rax != 0)
                break
            
            goto label_1405924da

label_1405924da:
void* rsi_1 = rsi - arg3

if (rsi_1 s> 0x7fffffff)
    rsi_1 = 0x7fffffff

return zx.q(rsi_1.d)
