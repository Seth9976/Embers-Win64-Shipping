// 函数: sub_1429c4290
// 地址: 0x1429c4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
void* i_2 = __CheckForDebuggerJustMyCode(&data_14427d007)
int32_t r13 = 0

if (rsi.d s> 0)
    int64_t rbp_1 = 0
    int32_t* r12_1 = arg2 + 8
    int32_t* r15_1 = arg1 + 8
    
    while (true)
        if (r15_1[-2] == 0xffffffff)
            int32_t r11_1 = 0
            int32_t rsi_1 = 0
            void* i_3 = nullptr
            int64_t i = 0
            
            while (true)
                if (i_3 s< rsi)
                    if (i_3 != rbp_1)
                        i = 0
                        
                        if (r11_1 == 0)
                            for (; i s< 3; i += 1)
                                void* rcx = i_3 * 3
                                void* r8 = rcx + i
                                void* rax = r8 + 1
                                
                                if (i s>= 2)
                                    rax = rcx
                                
                                if (r12_1[-2] == *(arg2 + (rax << 2))
                                        && r12_1[-1] == *(arg2 + (r8 << 2)))
                                    r11_1 = 1
                                    break
                    
                    int32_t rax_1 = rsi_1 + 1
                    
                    if (r11_1 != 0)
                        rax_1 = rsi_1
                    
                    rsi_1 = rax_1
                    i_2 = i_3 + 1
                    
                    if (r11_1 != 0)
                        i_2 = i_3
                    
                    i_3 = i_2
                    
                    if (r11_1 == 0)
                        continue
                else if (r11_1 == 0)
                    break
                
                r15_1[-2] = rsi_1
                i_2 = i_3 * 0x16 + i
                *(arg1 + (i_2 << 2)) = r13
                break
        
        if (r15_1[-1] == 0xffffffff)
            int32_t r11_2 = 0
            int32_t rsi_2 = 0
            void* i_4 = nullptr
            int64_t i_1 = 0
            
            while (true)
                if (i_4 s< rsi)
                    if (i_4 != rbp_1)
                        i_1 = 0
                        
                        if (r11_2 == 0)
                            for (; i_1 s< 3; i_1 += 1)
                                void* rcx_1 = i_4 * 3
                                void* r8_1 = rcx_1 + i_1
                                void* rax_3 = r8_1 + 1
                                
                                if (i_1 s>= 2)
                                    rax_3 = rcx_1
                                
                                if (r12_1[-1] == *(arg2 + (rax_3 << 2))
                                        && *r12_1 == *(arg2 + (r8_1 << 2)))
                                    r11_2 = 1
                                    break
                    
                    int32_t rax_4 = rsi_2 + 1
                    
                    if (r11_2 != 0)
                        rax_4 = rsi_2
                    
                    rsi_2 = rax_4
                    i_2 = i_4 + 1
                    
                    if (r11_2 != 0)
                        i_2 = i_4
                    
                    i_4 = i_2
                    
                    if (r11_2 == 0)
                        continue
                else if (r11_2 == 0)
                    break
                
                r15_1[-1] = rsi_2
                i_2 = i_4 * 0x16 + i_1
                *(arg1 + (i_2 << 2)) = r13
                break
        
        if (*r15_1 == 0xffffffff)
            int32_t r11_3 = 0
            int32_t rsi_3 = 0
            int64_t r9_1 = 0
            i_2 = nullptr
            
            while (true)
                if (r9_1 s< rsi)
                    if (r9_1 != rbp_1)
                        i_2 = nullptr
                        
                        if (r11_3 == 0)
                            for (; i_2 s< 3; i_2 += 1)
                                void* rdx = r9_1 * 3
                                void* r8_2 = rdx + i_2
                                void* rcx_3 = r8_2 + 1
                                
                                if (i_2 s>= 2)
                                    rcx_3 = rdx
                                
                                if (*r12_1 == *(arg2 + (rcx_3 << 2))
                                        && r12_1[-2] == *(arg2 + (r8_2 << 2)))
                                    r11_3 = 1
                                    break
                    
                    int32_t rcx_4 = rsi_3 + 1
                    
                    if (r11_3 != 0)
                        rcx_4 = rsi_3
                    
                    rsi_3 = rcx_4
                    int64_t rcx_5 = r9_1 + 1
                    
                    if (r11_3 != 0)
                        rcx_5 = r9_1
                    
                    r9_1 = rcx_5
                    
                    if (r11_3 == 0)
                        continue
                else if (r11_3 == 0)
                    break
                
                *r15_1 = rsi_3
                void* rcx_7 = r9_1 * 0x16 + i_2
                i_2 = arg1
                *(i_2 + (rcx_7 << 2)) = r13
                break
        
        r13 += 1
        rbp_1 += 1
        r15_1 = &r15_1[0x16]
        r12_1 = &r12_1[3]
        
        if (r13 s>= arg3)
            break

return i_2
