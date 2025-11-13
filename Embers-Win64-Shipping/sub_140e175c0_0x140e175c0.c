// 函数: sub_140e175c0
// 地址: 0x140e175c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int64_t* rdi_1 = *(arg1 + 0x20)
    
    if (rdi_1 != 0)
        int32_t r8_1 = rdi_1[1].d
        
        if (r8_1 s> 0)
            int64_t* rax_1 = rdi_1
            
            if (rdi_1 != 0)
                if (r8_1 == 0)
                    rdi_1 = nullptr
                    rax_1 = nullptr
                else
                    rdi_1[1].d = r8_1 + 1
                    rax_1 = rdi_1
            
            if (rax_1 != 0)
                int64_t* i = *(arg1 + 0x18)
                
                while (i != 0)
                    if ((*(*i + 0x208))(i) != 0)
                        *arg2 = i
                        arg2[1] = rdi_1
                        
                        if (rdi_1 != 0)
                            int32_t rax_13 = rdi_1[1].d
                            rdi_1[1].d = rax_13
                            
                            if (rax_13 == 0)
                                (**rdi_1)(rdi_1)
                                int32_t temp2_1 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                        
                        goto label_140e1772e
                    
                    void* rcx_1 = &i[0x4d]
                    i = nullptr
                    int64_t* rbx_1 = *(rcx_1 + 8)
                    
                    if (rbx_1 != 0)
                        int32_t rax_5 = rbx_1[1].d
                        
                        if (rax_5 == 0)
                            rbx_1 = nullptr
                        else
                            rbx_1[1].d = rax_5 + 1
                            
                            if (rbx_1 != 0)
                                i = *rcx_1
                    
                    int64_t* rsi_1 = rdi_1
                    
                    if (rbx_1 != rdi_1)
                        rdi_1 = rbx_1
                        
                        if (rsi_1 != 0)
                            rsi_1[1].d -= 1
                            
                            if (rsi_1[1].d == 1)
                                (**rsi_1)(rsi_1)
                                int32_t temp6_1 = *(rsi_1 + 0xc)
                                *(rsi_1 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rsi_1 + 8))(rsi_1, 1)
                    else if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp5_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)

*arg2 = nullptr
arg2[1] = 0
label_140e1772e:
return arg2
