// 函数: sub_141c88fd0
// 地址: 0x141c88fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3[1]

if (rbx != 0)
    int32_t rax = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = rbx[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax == rbx[1].d)
                rbx[1].d = rax + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                if (rbx != 0)
                    int64_t rbp_1 = *arg3
                    
                    if (rbp_1 != 0)
                        int64_t* rax_2 =
                            sub_141c80c30(arg1 + 0x60, sub_140b212b0(arg2, 0x10, 0), arg2)
                        *rax_2 = rbp_1
                        
                        if (rbx != rax_2[1])
                            *(rbx + 0xc) += 1
                            int64_t* rcx_3 = rax_2[1]
                            
                            if (rcx_3 != 0)
                                int32_t rax_3 = *(rcx_3 + 0xc)
                                *(rcx_3 + 0xc) -= 1
                                
                                if (rax_3 == 1)
                                    (*(*rcx_3 + 8))(rcx_3, 1)
                            
                            rax_2[1] = rbx
                        
                        int64_t var_38 = rbp_1
                        int64_t* var_30_1 = rbx
                        rbx[1].d += 1
                        sub_141c8d9d0(*(arg1 + 0x148), arg2, &var_38)
                        rbx[1].d -= 1
                        
                        if (rbx[1].d == 1)
                            (**rbx)(rbx)
                            int32_t rax_7 = *(rbx + 0xc)
                            *(rbx + 0xc) -= 1
                            
                            if (rax_7 == 1)
                                (*(*rbx + 8))(rbx, 1)
                        
                        sub_141c8a730(arg1, arg2, 0)
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        rax = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rax == 1)
                            (*(*rbx + 8))(rbx, 1)
                
                break
            
            rax = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
        while (not(z_3))

int64_t* rcx_10 = arg3[1]

if (rcx_10 == 0)
    return 

int32_t rdi_1 = *(rcx_10 + 0xc)
*(rcx_10 + 0xc) -= 1

if (rdi_1 == 1 && rcx_10 != 0)
    (*(*rcx_10 + 8))(rcx_10, zx.q(rdi_1))
