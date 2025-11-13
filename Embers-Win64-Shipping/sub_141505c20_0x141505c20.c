// 函数: sub_141505c20
// 地址: 0x141505c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg3
int32_t r10 = arg2

if (arg2 != arg3)
    int64_t rbx_1 = *(arg1 + 0x60)
    
    do
        int32_t rax_4 = ((r11 - r10) u>> 1) + r10
        int32_t rdx_1 = *(rbx_1 + (sx.q(rax_4) << 2)) & arg5
        
        if (arg4 u>= rdx_1)
            if (arg4 u<= rdx_1)
                int32_t rsi = rax_4
                
                if (r10 != rax_4)
                    int32_t r8_3
                    
                    do
                        r8_3 = ((rsi - r10) u>> 1) + r10
                        int32_t rcx_2 = r8_3 + 1
                        int32_t rdx_3 = *(rbx_1 + (sx.q(r8_3) << 2)) & arg5
                        
                        if (arg4 u> rdx_3)
                            r8_3 = rsi
                        
                        if (arg4 u> rdx_3)
                            r10 = rcx_2
                        
                        rsi = r8_3
                    while (r10 != r8_3)
                
                int32_t r8_4 = rax_4 + 1
                
                while (r8_4 != r11)
                    int32_t rdx_7 = ((r11 - r8_4) u>> 1) + r8_4
                    int32_t rax_7 = rdx_7
                    int32_t rcx_4 = *(rbx_1 + (sx.q(rdx_7) << 2)) & arg5
                    
                    if (arg4 u>= rcx_4)
                        rax_7 = r11
                    
                    r11 = rax_7
                    
                    if (arg4 u>= rcx_4)
                        r8_4 = rdx_7 + 1
                
                return zx.q(r8_4) << 0x20 | zx.q(r10)
            
            r10 = rax_4 + 1
        else
            r11 = rax_4
    while (r10 != r11)

return 0
