// 函数: sub_140f05600
// 地址: 0x140f05600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)

for (void* r13_2 = &i[sx.q(*(arg1 + 0x18)) * 4]; i != r13_2; i = &i[4])
    int64_t* j = *i
    
    for (void* r15_3 = &j[sx.q(i[1].d) * 2]; j != r15_3; j = &j[2])
        void* rcx = *j
        int64_t* rbx_1 = *(rcx + 0x3a8)
        
        if (rbx_1 != 0)
            int32_t rax = rbx_1[1].d
            
            if (rax != 0)
                rbx_1[1].d = rax + 1
                
                if (rbx_1 != 0)
                    int64_t rbp_1 = *(rcx + 0x3a0)
                    
                    if (rbp_1 != 0)
                        rbx_1[1].d += 1
                        int64_t rsi_1 = sx.q(arg2[1].d)
                        int32_t rax_1 = (rsi_1 + 1).d
                        arg2[1].d = rax_1
                        
                        if (rax_1 s> *(arg2 + 0xc))
                            sub_1405a4f90(arg2)
                        
                        int64_t* rax_4 = (rsi_1 << 4) + *arg2
                        *rax_4 = rbp_1
                        rax_4[1] = rbx_1
                        rax = rbx_1[1].d
                        rbx_1[1].d = rax
                        
                        if (rax == 0)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
