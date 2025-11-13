// 函数: sub_142034430
// 地址: 0x142034430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1d8) == 0)
    arg2[2].b = 0
else
    int64_t r9 = sx.q(*(arg4 + 0x38))
    
    if (r9.d == 0 || *(arg1 + 0x190) == *(arg1 + 0x1bc))
        arg2[2].b = 0
    else
        void* r8 = arg1 + 0x1c0
        void* rcx = *(r8 + 8)
        
        if (rcx != 0)
            r8 = rcx
        
        int32_t rax_2 = *(r8 + (((sx.q(*(arg1 + 0x1d0)) - 1) & r9) << 2))
        
        if (rax_2 == 0xffffffff)
            arg2[2].b = 0
        else
            int64_t rdx_3 = *(arg1 + 0x188)
            int64_t rbx_1
            
            while (true)
                rbx_1 = sx.q(rax_2)
                int64_t rcx_2 = rbx_1 << 5
                
                if (*(rcx_2 + rdx_3) == r9.d)
                    break
                
                rax_2 = *(rcx_2 + rdx_3 + 0x18)
                
                if (rax_2 == 0xffffffff)
                    arg2[2].b = 0
                    return arg2
            
            if (rax_2 == 0xffffffff)
                arg2[2].b = 0
            else
                int64_t rbx_2 = rbx_1 << 5
                void* rbx_3 = rbx_2 + rdx_3
                
                if (rbx_2 == neg.q(rdx_3))
                    arg2[2].b = 0
                else
                    int64_t rax_4 = *(rbx_3 + 8)
                    int64_t* rbx_4 = *(rbx_3 + 0x10)
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d += 1
                    
                    if (rax_4 == 0)
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp2_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        arg2[2].b = 0
                    else
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        *arg2 = rax_4
                        arg2[1] = rbx_4
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        arg2[2].b = 1
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp5_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                            
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp6_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)

return arg2
