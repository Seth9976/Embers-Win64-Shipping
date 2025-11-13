// 函数: sub_1425e23f0
// 地址: 0x1425e23f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r12 = 0
int32_t arg_8 = 0

if (*(arg1 + 0x18) == 0 && *(arg1 + 8) != 0)
    void* rcx = *(arg1 + 0x10)
    
    if (rcx != 0)
        int32_t rax_1 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_1 = *(rcx + 8)
        
        if (rax_1 s> 0)
            void*** rax_2 = j_sub_140a82f30(0x168)
            int64_t* var_40
            void*** rbp_1
            int64_t* rdi_1
            
            if (rax_2 == 0)
                rdi_1 = var_40
                rbp_1 = nullptr
            else
                rdi_1 = *(arg1 + 0x10)
                int64_t rdx = 0
                
                if (rdi_1 != 0)
                    int32_t rax_3 = 0
                    bool z_1
                    
                    if (0 == rdi_1[1].d)
                        rdi_1[1].d = 0
                        z_1 = true
                    else
                        rax_3 = rdi_1[1].d
                        z_1 = false
                    
                    if (z_1)
                    label_1425e2496:
                        rdi_1 = nullptr
                    else
                        while (true)
                            bool z_2
                            
                            if (rax_3 == rdi_1[1].d)
                                rdi_1[1].d = rax_3 + 1
                                z_2 = true
                            else
                                rdi_1[1].d
                                z_2 = false
                            
                            if (z_2)
                                if (rdi_1 != 0)
                                    rdx = *(arg1 + 8)
                                
                                break
                            
                            rax_3 = 0
                            bool z_3
                            
                            if (0 == rdi_1[1].d)
                                rdi_1[1].d = 0
                                z_3 = true
                            else
                                rax_3 = rdi_1[1].d
                                z_3 = false
                            
                            if (z_3)
                                goto label_1425e2496
                
                int64_t var_48 = rdx
                var_40 = rdi_1
                rbp_1 = sub_1425e3510(rax_2, &var_48)
                r12 = 3
            
            int64_t* rax_6 = j_sub_140a82f30(0x18)
            int64_t* rbx_1 = rax_6
            
            if (rax_6 == 0)
                rbx_1 = nullptr
            else
                rax_6[1].d = 1
                *(rax_6 + 0xc) = 1
                *rbx_1 = &data_142e1d5c8
                rbx_1[2] = rbp_1
            
            int64_t* rsi_1 = &rbp_1[1]
            
            if (rbp_1 == 0)
                rsi_1 = nullptr
            
            if (rsi_1 != 0)
                void* rax_7
                
                if (*rsi_1 != 0)
                    rax_7 = rsi_1[1]
                
                if (*rsi_1 == 0 || rax_7 == 0 || *(rax_7 + 8) s<= 0)
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    *rsi_1 = rbp_1
                    int64_t* rcx_3 = rsi_1[1]
                    
                    if (rbx_1 != rcx_3)
                        if (rbx_1 != 0)
                            *(rbx_1 + 0xc) += 1
                            rcx_3 = rsi_1[1]
                        
                        if (rcx_3 != 0)
                            int32_t temp7_1 = *(rcx_3 + 0xc)
                            *(rcx_3 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rcx_3 + 8))(rcx_3, 1)
                        
                        rsi_1[1] = rbx_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp6_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            void var_38
            
            if (arg1 + 0x18 == &var_38)
            label_1425e25c1:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            else
                *(arg1 + 0x18) = rbp_1
                int64_t* rsi_2 = *(arg1 + 0x20)
                
                if (rbx_1 == rsi_2)
                    goto label_1425e25c1
                
                *(arg1 + 0x20) = rbx_1
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp4_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
            
            if ((r12 & 2) != 0 && rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**var_40)(var_40)
                    int32_t rsi_3 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (rsi_3 == 1)
                        (*(*var_40 + 8))(var_40, zx.q(rsi_3))

*arg2 = *(arg1 + 0x18)
void* rax_18 = *(arg1 + 0x20)
arg2[1] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

return arg2
