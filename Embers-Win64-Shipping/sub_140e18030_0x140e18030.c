// 函数: sub_140e18030
// 地址: 0x140e18030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int64_t* rsi_1 = *(arg1 + 0x20)
    
    if (rsi_1 != 0)
        int32_t rax_1 = rsi_1[1].d
        
        if (rax_1 s> 0)
            void* rbp = nullptr
            int64_t* rbx = nullptr
            
            if (rsi_1 == 0)
                goto label_140e18082
            
            if (rax_1 == 0)
                rsi_1 = nullptr
            else
                rsi_1[1].d = rax_1 + 1
            label_140e18082:
                
                if (rsi_1 != 0)
                    rbx = *(arg1 + 0x18)
            
            void var_48
            sub_140e114f0(rbx, &var_48, 0)
            
            if (sub_140ab3dc0(&var_48) == 0)
                sub_140596d10(arg2, sub_140ac6680(&var_48))
            else
                int64_t* r14_1 = rbx[0x45]
                void* r12_3 = &r14_1[sx.q(rbx[0x46].d) * 2]
                int64_t* rbx_2
                
                if (r14_1 == r12_3)
                label_140e18105:
                    rbx_2 = nullptr
                label_140e18108:
                    
                    if (*(arg1 + 0x18) == 0)
                        *arg2 = 0
                        arg2[1] = 0
                    else
                        int64_t* rdi_2 = *(arg1 + 0x20)
                        
                        if (rdi_2 == 0)
                            *arg2 = 0
                            arg2[1] = 0
                        else
                            int32_t rax_5 = rdi_2[1].d
                            
                            if (rax_5 s<= 0)
                                *arg2 = 0
                                arg2[1] = 0
                            else
                                if (rdi_2 != 0)
                                    if (rax_5 != 0)
                                        rdi_2[1].d = rax_5 + 1
                                        rax_5.b = 1
                                    
                                    if (rax_5.b == 0)
                                        rdi_2 = nullptr
                                    
                                    if (rdi_2 != 0)
                                        rbp = *(arg1 + 0x18)
                                
                                sub_140b63b70(rbp + 0x218, arg2)
                                
                                if (rdi_2 != 0)
                                    rdi_2[1].d -= 1
                                    
                                    if (rdi_2[1].d == 1)
                                        (**rdi_2)(rdi_2)
                                        int32_t temp8_1 = *(rdi_2 + 0xc)
                                        *(rdi_2 + 0xc) -= 1
                                        
                                        if (temp8_1 == 1)
                                            (*(*rdi_2 + 8))(rdi_2, 1)
                else
                    while (true)
                        int64_t* rbx_1 = *r14_1
                        int64_t rdi_1 = *rbx_1
                        sub_140e17ac0()
                        
                        if ((*(rdi_1 + 8))(rbx_1, &data_143e24368) != 0)
                            break
                        
                        r14_1 = &r14_1[2]
                        
                        if (r14_1 == r12_3)
                            goto label_140e18105
                    
                    rbx_2 = r14_1[1]
                    void* rdi_3 = *r14_1
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                            
                            if (rbx_2 != 0)
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t temp7_1 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    if (rdi_3 == 0)
                        goto label_140e18108
                    
                    sub_140b63b70(rdi_3 + 8, arg2)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp4_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t rbx_3 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        (*(*var_40 + 8))(var_40, zx.q(rbx_3))
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    (**rsi_1)(rsi_1)
                    int32_t temp2_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rsi_1 + 8))(rsi_1, 1)
            
            return arg2

*arg2 = 0
arg2[1] = 0
return arg2
