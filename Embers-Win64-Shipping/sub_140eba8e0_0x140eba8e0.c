// 函数: sub_140eba8e0
// 地址: 0x140eba8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (*(arg1 + 0x80) s<= 0)
label_140ebaa03:
    *arg2 = 0
    arg2[1] = 0
else
    int64_t r14_1 = 0
    
    while (true)
        int64_t* rcx = *(arg1 + 0x78)
        int64_t* rbx_1 = *(rcx + r14_1 + 8)
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 != 0)
                rbx_1[1].d = rax_1 + 1
                
                if (rbx_1 != 0)
                    int64_t rax_3 = *(rcx + r14_1)
                    
                    if (rax_3 != 0)
                        rbx_1[1].d += 1
                        int64_t var_28 = rax_3
                        int64_t* var_20_1 = rbx_1
                        int64_t var_38
                        sub_140eba730(&var_38, arg3, &var_28)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp3_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        int64_t rax_6 = var_38
                        int64_t* var_30
                        
                        if (rax_6 != 0)
                            *arg2 = rax_6
                            arg2[1] = var_30
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp5_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            break
                        
                        if (var_30 != 0)
                            var_30[1].d -= 1
                            
                            if (var_30[1].d == 1)
                                (**var_30)(var_30)
                                int32_t temp7_1 = *(var_30 + 0xc)
                                *(var_30 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*var_30 + 8))(var_30, 1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi += 1
        r14_1 += 0x10
        
        if (rsi s>= *(arg1 + 0x80))
            goto label_140ebaa03

return arg2
