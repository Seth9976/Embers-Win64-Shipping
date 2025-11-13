// 函数: sub_1425e62b0
// 地址: 0x1425e62b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) != 0)
    int64_t* rdi_1 = *(arg1 + 0x40)
    
    if (rdi_1 != 0)
        int32_t rax_1 = 0
        bool z_1
        
        if (0 == rdi_1[1].d)
            rdi_1[1].d = 0
            z_1 = true
        else
            rax_1 = rdi_1[1].d
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (rax_1 == rdi_1[1].d)
                    rdi_1[1].d = rax_1 + 1
                    z_2 = true
                else
                    rdi_1[1].d
                    z_2 = false
                
                if (z_2)
                    if (rdi_1 != 0)
                        int64_t* r10_1 = *(arg1 + 0x38)
                        
                        if (r10_1 != 0)
                            int64_t* rbx_1 = *(arg1 + 0x20)
                            int64_t var_50
                            
                            if (rbx_1 == 0)
                                var_50 = 0
                            else
                                int32_t rax_3 = 0
                                bool z_4
                                
                                if (0 == rbx_1[1].d)
                                    rbx_1[1].d = 0
                                    z_4 = true
                                else
                                    rax_3 = rbx_1[1].d
                                    z_4 = false
                                
                                if (z_4)
                                label_1425e6388:
                                    rbx_1 = nullptr
                                    var_50 = 0
                                else
                                    while (true)
                                        bool z_5
                                        
                                        if (rax_3 == rbx_1[1].d)
                                            rbx_1[1].d = rax_3 + 1
                                            z_5 = true
                                        else
                                            rbx_1[1].d
                                            z_5 = false
                                        
                                        if (z_5)
                                            break
                                        
                                        rax_3 = 0
                                        bool z_6
                                        
                                        if (0 == rbx_1[1].d)
                                            rbx_1[1].d = 0
                                            z_6 = true
                                        else
                                            rax_3 = rbx_1[1].d
                                            z_6 = false
                                        
                                        if (z_6)
                                            goto label_1425e6388
                                    
                                    if (rbx_1 == 0)
                                        var_50 = 0
                                    else
                                        int64_t rax_18 = *(arg1 + 0x18)
                                        
                                        if (rax_18 == 0)
                                            var_50 = 0
                                        else
                                            var_50 = rax_18 + 8
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t* var_60_1 = &var_50
                            int64_t var_68_1 = arg5
                            int64_t var_70_1 = arg4
                            int64_t* var_78_1 = arg3
                            (*(*r10_1 + 0x18))(r10_1, arg2)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t rax_8 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (rax_8 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t rax_12 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (rax_12 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t rbp_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (rbp_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))
                    
                    break
                
                rax_1 = 0
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_3 = true
                else
                    rax_1 = rdi_1[1].d
                    z_3 = false
            while (not(z_3))

arg3[9].d = 0
int64_t rcx_9 = arg3[8]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return sub_140597460(arg3) __tailcall
