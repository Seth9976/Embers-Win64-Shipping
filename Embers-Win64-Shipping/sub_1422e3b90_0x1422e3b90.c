// 函数: sub_1422e3b90
// 地址: 0x1422e3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rax = arg1[1].d

if (rax s> 0)
    sub_1405a5410(arg2, rax)
    rax = arg1[1].d

for (int64_t* i = *arg1; i != &i[sx.q(rax) * 2]; i = &i[2])
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
                    int64_t* rsi_1 = *i
                    
                    if (rsi_1 != 0 && (*(*rsi_1 + 0x60))(rsi_1, arg3) != 0)
                        rbx_1[1].d += 1
                        int64_t rbp_1 = sx.q(arg2[1].d)
                        int32_t rax_5 = (rbp_1 + 1).d
                        arg2[1].d = rax_5
                        
                        if (rax_5 s> *(arg2 + 0xc))
                            sub_1405a4f90(arg2)
                        
                        int64_t* rax_8 = (rbp_1 << 4) + *arg2
                        *rax_8 = rsi_1
                        rax_8[1] = rbx_1
                        rbx_1[1].d += 1
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t rax_11 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (rax_11 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_15 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_15 == 1)
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

sub_1422d5b60(*arg2, arg2[1].d, arg4)
return arg2
