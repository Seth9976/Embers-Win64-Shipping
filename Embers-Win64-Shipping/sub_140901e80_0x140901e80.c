// 函数: sub_140901e80
// 地址: 0x140901e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int64_t r11_1 = sx.q(*arg2)
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + (((sx.q(arg1[9].d) - 1) & r11_1) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t i_1 = sx.q(i)
            int64_t r8_3 = i_1 * 2
            int32_t* rcx = *(r9_2 + (r8_3 << 3))
            
            if (*rcx == r11_1.d)
                if (i != 0xffffffff)
                    int64_t rdx_3 = i_1 << 4
                    
                    if (rdx_3 != neg.q(r9_2))
                        void* rax_1 = arg1[0xa]
                        
                        if (rcx == rax_1)
                            int64_t rax_2 = *(rax_1 + 0x10)
                            
                            if (rax_2 != 0)
                                arg1[0xa] = rax_2
                        
                        if (rcx != arg1[0xb])
                            void* r8_4 = *(rcx + 8)
                            
                            if (r8_4 != 0)
                                *(r8_4 + 0x10) = *(rcx + 0x10)
                            
                            void* r8_5 = *(rcx + 0x10)
                            
                            if (r8_5 != 0)
                                *(r8_5 + 8) = *(rcx + 8)
                            
                            *(rcx + 8) = 0
                            *(rcx + 0x10) = 0
                            void* rax_5 = arg1[0xb]
                            *(rcx + 8) = rax_5
                            
                            if (rax_5 != 0)
                                *(rax_5 + 0x10) = rcx
                            
                            arg1[0xb] = rcx
                        
                        return *(rdx_3 + r9_2) + 0x18
                
                break
            
            i = *(r9_2 + (r8_3 << 3) + 8)
        while (i != 0xffffffff)

return 0
