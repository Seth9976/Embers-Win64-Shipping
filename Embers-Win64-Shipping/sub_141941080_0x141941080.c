// 函数: sub_141941080
// 地址: 0x141941080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143eff810)
void* rax = sub_1419271a0(arg1 + 0xe0, *arg2, arg2)

if (*rax == 0)
    *rax = 1
    
    if (*(arg1 + 0x1c8) == 3)
        int64_t* rdi_1 = *(rax + 8)
        int64_t rsi_1 = 0
        uint64_t r14_2 = sx.q(*(rax + 0x10)) << 3 u>> 3
        
        if (rdi_1 u> &rdi_1[sx.q(*(rax + 0x10))])
            r14_2 = 0
        
        if (r14_2 != 0)
            void* r10_1 = data_143eff640
            
            do
                int64_t* rbx_1 = *rdi_1
                
                if (*(rbx_1 + 0xa4) == 1)
                    uint64_t rax_2
                    rax_2.b = 1
                    int32_t r11_1 = 0
                    int64_t* r9_1 = rbx_1
                    
                    while (rax_2.b != 0)
                        uint64_t rcx_1 = sx.q(r11_1) * 5
                        
                        if (*(rbx_1 + (rcx_1 << 2)) != 0 || *(rbx_1 + (rcx_1 << 2) + 8) != 0
                                || *(rbx_1 + (rcx_1 << 2) + 0x10) != 0)
                            int64_t* rcx_5
                            
                            if (*(r10_1 + 0xe8) == *(r10_1 + 0x114))
                            label_1419411e4:
                                rcx_5 = nullptr
                            else
                                void* r8_1 = r10_1 + 0x118
                                void* rcx_2 = *(r8_1 + 8)
                                
                                if (rcx_2 != 0)
                                    r8_1 = rcx_2
                                
                                int32_t rax_5 =
                                    *(r8_1 + (((sx.q(*(r10_1 + 0x128)) - 1) & sx.q(*r9_1)) << 2))
                                
                                if (rax_5 == 0xffffffff)
                                label_1419411e4_1:
                                    rcx_5 = nullptr
                                else
                                    while (true)
                                        rcx_5 = sx.q(rax_5) * 0x38 + *(r10_1 + 0xe0)
                                        
                                        if (*rcx_5 == *r9_1 && rcx_5[1] == r9_1[1]
                                                && rcx_5[2].d == r9_1[2].d)
                                            break
                                        
                                        rax_5 = rcx_5[6].d
                                        
                                        if (rax_5 == 0xffffffff)
                                            goto label_1419411e4_2
                                    
                                    if (rax_5 == 0xffffffff)
                                    label_1419411e4_2:
                                        rcx_5 = nullptr
                            
                            rax_2 = &rcx_5[3]
                            
                            if (rcx_5 == 0)
                                rax_2 = 0
                            
                            if (rax_2 == 0 || *rax_2 == 0)
                                rax_2.b = 0
                            else
                                rax_2.b = 1
                        else
                            rax_2.b = 1
                        
                        r11_1 += 1
                        r9_1 += 0x14
                        
                        if (r11_1 s>= 5)
                            if (rax_2.b != 0)
                                sub_141930e20(arg1, rbx_1, arg3)
                                r10_1 = data_143eff640
                            
                            break
                
                rdi_1 = &rdi_1[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)

return LeaveCriticalSection(&data_143eff810) __tailcall
