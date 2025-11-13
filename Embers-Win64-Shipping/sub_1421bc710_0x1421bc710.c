// 函数: sub_1421bc710
// 地址: 0x1421bc710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x20)
int64_t result

if (rbp != 0)
    void* rax = sub_1425598e0()
    void* rdx_1 = *(rbp + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax + 0x30)
        int32_t rsi_1 = 0
        
        if (*(rbp + 0x48) s> 0)
            int64_t* r14_1 = nullptr
            
            while (true)
                void* r11_1 = *(r14_1 + *(rbp + 0x40))
                
                if (r11_1 != 0)
                    int32_t rcx_1 = *(r11_1 + 0x48)
                    
                    if (rcx_1 != 0)
                        result.b = 0
                        int32_t rbx_1 = 0
                        
                        if (rcx_1 s> 0)
                            int64_t* r10_1 = nullptr
                            
                            while (true)
                                if (result.b == 0)
                                    void* rdx_2 = *(r10_1 + *(r11_1 + 0x40))
                                    
                                    if (rdx_2 != 0)
                                        if (*(rdx_2 + 0x30) != arg1)
                                            int32_t r9_1 = 0
                                            
                                            if (*(rdx_2 + 0x40) s> 0)
                                                int64_t* r8_2 = nullptr
                                                
                                                while (result.b == 0)
                                                    result = zx.q(result.b)
                                                    
                                                    if (*(r8_2 + *(rdx_2 + 0x38)) == arg1)
                                                        result = 1
                                                    
                                                    r9_1 += 1
                                                    r8_2 = &r8_2[1]
                                                    
                                                    if (r9_1 s>= *(rdx_2 + 0x40))
                                                        break
                                        else
                                            result = 1
                                    
                                    rbx_1 += 1
                                    r10_1 = &r10_1[1]
                                    
                                    if (rbx_1 s< *(r11_1 + 0x48))
                                        continue
                                    else if (result.b == 0)
                                        break
                                
                                void* rcx_4 = **(r11_1 + 0x40)
                                
                                if (rcx_4 != 0)
                                    void* rbx_2 = *(rcx_4 + 0x48)
                                    
                                    if (rbx_2 != 0)
                                        void* rax_1 = sub_1425599a0()
                                        void* rdx_3 = *(rbx_2 + 0x10)
                                        result = sx.q(*(rax_1 + 0x38))
                                        
                                        if (result.d s<= *(rdx_3 + 0x38)
                                                && *(*(rdx_3 + 0x30) + (result << 3))
                                                == rax_1 + 0x30)
                                            return 1
                                
                                break
                
                rsi_1 += 1
                r14_1 = &r14_1[1]
                
                if (rsi_1 s>= *(rbp + 0x48))
                    break

result.b = 0
return result
