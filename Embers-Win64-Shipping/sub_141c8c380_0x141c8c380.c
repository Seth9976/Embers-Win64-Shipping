// 函数: sub_141c8c380
// 地址: 0x141c8c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[1].d
int32_t rsi = 0
int32_t rax = rcx

if (rcx s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdx = *arg1
        int64_t r12_1 = 0
        int64_t* rbx_1 = *(rdx + r14_1 + 8)
        
        if (rbx_1 != 0)
            int32_t rax_1 = 0
            bool z_1
            
            if (0 == rbx_1[1].d)
                rbx_1[1].d = 0
                z_1 = true
            else
                rax_1 = rbx_1[1].d
                z_1 = false
            
            if (z_1)
            label_141c8c404:
                rbx_1 = nullptr
            else
                while (true)
                    bool z_2
                    
                    if (rax_1 == rbx_1[1].d)
                        rbx_1[1].d = rax_1 + 1
                        z_2 = true
                    else
                        rbx_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        if (rbx_1 != 0)
                            r12_1 = *(rdx + r14_1)
                        
                        break
                    
                    rax_1 = 0
                    bool z_3
                    
                    if (0 == rbx_1[1].d)
                        rbx_1[1].d = 0
                        z_3 = true
                    else
                        rax_1 = rbx_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141c8c404
        
        int64_t* rdi_1 = arg2[1]
        int64_t rbp_1 = 0
        
        if (rdi_1 != 0)
            int32_t rax_3 = 0
            bool z_4
            
            if (0 == rdi_1[1].d)
                rdi_1[1].d = 0
                z_4 = true
            else
                rax_3 = rdi_1[1].d
                z_4 = false
            
            if (not(z_4))
                bool z_6
                
                do
                    bool z_5
                    
                    if (rax_3 == rdi_1[1].d)
                        rdi_1[1].d = rax_3 + 1
                        z_5 = true
                    else
                        rdi_1[1].d
                        z_5 = false
                    
                    if (z_5)
                        if (rdi_1 != 0)
                            rbp_1 = *arg2
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                (**rdi_1)(rdi_1)
                                int32_t rax_7 = *(rdi_1 + 0xc)
                                *(rdi_1 + 0xc) -= 1
                                
                                if (rax_7 == 1)
                                    (*(*rdi_1 + 8))(rdi_1, 1)
                        
                        break
                    
                    rax_3 = 0
                    
                    if (0 == rdi_1[1].d)
                        rdi_1[1].d = 0
                        z_6 = true
                    else
                        rax_3 = rdi_1[1].d
                        z_6 = false
                while (not(z_6))
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_11 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (r12_1 == rbp_1)
            sub_141c8bf50(arg1, rsi, 1, 1)
            rsi -= 1
            r14_1 -= 0x10
        
        rax = arg1[1].d
        rsi += 1
        r14_1 += 0x10
    while (rsi s< rax)

return zx.q(rcx - rax)
