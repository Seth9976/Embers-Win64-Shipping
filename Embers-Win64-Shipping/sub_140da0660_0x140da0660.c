// 函数: sub_140da0660
// 地址: 0x140da0660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(*(arg3 + 0x24))) << 2))
    
    if (i != 0xffffffff)
        int64_t rbp_1 = *arg1
        
        do
            int64_t r13_1 = 0
            int64_t rsi_2 = sx.q(i) << 6
            int64_t* rdi_1 = *(rsi_2 + rbp_1 + 8)
            
            if (rdi_1 != 0)
                int32_t rax_2 = rdi_1[1].d
                
                if (rax_2 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1[1].d = rax_2 + 1
                    
                    if (rdi_1 != 0)
                        r13_1 = *(rsi_2 + rbp_1)
            
            int64_t* r14_1 = arg3[1]
            int64_t r12_1 = 0
            
            if (r14_1 != 0)
                int32_t rax_4 = r14_1[1].d
                
                if (rax_4 != 0)
                    r14_1[1].d = rax_4 + 1
                    
                    if (r14_1 != 0)
                        r12_1 = *arg3
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d == 1)
                            (**r14_1)(r14_1)
                            int32_t temp3_1 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*r14_1 + 8))(r14_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (r13_1 == r12_1 && *(rsi_2 + rbp_1 + 0x10) == arg3[2].d
                    && not(*(arg3 + 0x14) f!= *(rsi_2 + rbp_1 + 0x14))
                    && *(rsi_2 + rbp_1 + 0x18) == arg3[3].b
                    && not(*(arg3 + 0x1c) f!= *(rsi_2 + rbp_1 + 0x1c))
                    && *(rsi_2 + rbp_1 + 0x20) == arg3[4].d)
                *arg2 = i
                return arg2
            
            rbp_1 = *arg1
            i = *(rsi_2 + rbp_1 + 0x38)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
