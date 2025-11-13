// 函数: sub_141869f00
// 地址: 0x141869f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]

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
                    int64_t*** rsi_1 = *arg1
                    
                    if (rsi_1 != 0)
                        int128_t zmm0 = *(arg1 + 0x10)
                        int64_t rdi_1 = *arg2
                        *arg2 = 0
                        int32_t rbp_1 = arg2[1].d
                        int32_t r15_1 = *(arg2 + 0xc)
                        arg2[1] = 0
                        int128_t var_48_1 = zmm0
                        int64_t* rax_1 = j_sub_140a82f30(0x28)
                        
                        if (rax_1 != 0)
                            *rax_1 = 0
                            *(rax_1 + 8) = zmm0
                            rax_1[3] = rdi_1
                            rax_1[4].d = rbp_1
                            *(rax_1 + 0x24) = r15_1
                            int64_t** rcx_1 = *rsi_1
                            *rsi_1 = rax_1
                            *rcx_1 = rax_1
                        else if (rdi_1 != 0)
                            sub_140a74f90(rdi_1)
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t rdi_2 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rdi_2 == 1)
                            (*(*rbx + 8))(rbx, zx.q(rdi_2))
                
                break
            
            rax = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
        while (not(z_3))

int64_t rcx_5 = *arg2

if (rcx_5 == 0)
    return 

return sub_140a74f90(rcx_5) __tailcall
