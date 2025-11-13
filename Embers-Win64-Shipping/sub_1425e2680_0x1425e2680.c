// 函数: sub_1425e2680
// 地址: 0x1425e2680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = 0

if (*(arg1 + 0x28) == 0 && *(arg1 + 8) != 0)
    void* rcx = *(arg1 + 0x10)
    
    if (rcx != 0)
        int32_t rax_1 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_1 = *(rcx + 8)
        
        if (rax_1 s> 0)
            void*** rax_2 = j_sub_140a82f30(0x70)
            void*** rsi_1 = rax_2
            int64_t* rdi_1
            
            if (rax_2 == 0)
                rdi_1 = 0.q
                rsi_1 = nullptr
            else
                rdi_1 = *(arg1 + 0x10)
                int64_t rbp_1 = 0
                
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
                    label_1425e2729:
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
                                    rbp_1 = *(arg1 + 8)
                                
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
                                goto label_1425e2729
                
                rsi_1[1].w = 0x100
                *rsi_1 = &data_143449c00
                rsi_1[2] = &data_143449c48
                rsi_1[3] = 0
                rsi_1[4] = 0
                InitializeCriticalSection(&rsi_1[5])
                SetCriticalSectionSpinCount(&rsi_1[5], 0xfa0)
                rsi_1[0xa] = rbp_1
                rsi_1[0xb] = rdi_1
                
                if (rdi_1 != 0)
                    *(rdi_1 + 0xc) += 1
                
                rsi_1[0xc] = 0
                r15 = 3
                rsi_1[0xd] = 0
            
            void*** rax_5 = j_sub_140a82f30(0x18)
            void*** rbx_1 = rax_5
            
            if (rax_5 == 0)
                rbx_1 = nullptr
            else
                rax_5[1].d = 1
                *(rax_5 + 0xc) = 1
                *rbx_1 = &data_142d42ea8
                rbx_1[2] = rsi_1
            
            void* var_38
            void* rbp_2
            
            if (rsi_1 == 0)
                rbp_2 = nullptr
                var_38 = nullptr
            else
                rbp_2 = &rsi_1[2]
                var_38 = rbp_2
            
            void*** var_30_1 = rbx_1
            
            if (arg1 + 0x28 == &var_38)
            label_1425e284c:
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*rbx_1)[1](rbx_1, 1)
            else
                *(arg1 + 0x28) = rbp_2
                int64_t* rsi_2 = *(arg1 + 0x30)
                var_38 = nullptr
                
                if (rbx_1 == rsi_2)
                    goto label_1425e284c
                
                void*** var_30_2 = nullptr
                *(arg1 + 0x30) = rbx_1
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp4_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    rbx_1 = var_30_2
                    goto label_1425e284c
            
            if ((r15 & 2) != 0 && rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rbx_2 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rbx_2 == 1)
                        (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))

*arg2 = *(arg1 + 0x28)
void* rax_14 = *(arg1 + 0x30)
arg2[1] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

return arg2
