// 函数: sub_141c7f780
// 地址: 0x141c7f780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* i = *(arg1 + 0x18)

for (void* r15_2 = &i[sx.q(*(arg1 + 0x20)) * 2]; i != r15_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    
    if (rbx_1 != 0)
        int32_t rax_1 = 0
        bool z_1
        
        if (0 == rbx_1[1].d)
            rbx_1[1].d = 0
            z_1 = true
        else
            rax_1 = rbx_1[1].d
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (rax_1 == rbx_1[1].d)
                    rbx_1[1].d = rax_1 + 1
                    z_2 = true
                else
                    rbx_1[1].d
                    z_2 = false
                
                if (z_2)
                    int64_t rbp_1 = *i
                    
                    if (rbp_1 != 0)
                        rbx_1[1].d += 1
                        int64_t rsi_1 = sx.q(arg2[1].d)
                        int32_t rax_3 = (rsi_1 + 1).d
                        arg2[1].d = rax_3
                        
                        if (rax_3 s> *(arg2 + 0xc))
                            sub_1405a4f90(arg2)
                        
                        int64_t* rax_6 = (rsi_1 << 4) + *arg2
                        *rax_6 = rbp_1
                        rax_6[1] = rbx_1
                        rbx_1[1].d += 1
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t rax_9 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (rax_9 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_13 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_13 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    break
                
                rax_1 = 0
                
                if (0 == rbx_1[1].d)
                    rbx_1[1].d = 0
                    z_3 = true
                else
                    rax_1 = rbx_1[1].d
                    z_3 = false
            while (not(z_3))

return arg2
