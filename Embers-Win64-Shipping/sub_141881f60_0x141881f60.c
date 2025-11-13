// 函数: sub_141881f60
// 地址: 0x141881f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)
int64_t r10 = 0
int32_t rax

if (rbx != 0)
    rax = 0
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
                    if (*(arg1 + 8) != 0)
                        int64_t* r14 = arg2[1]
                        
                        if (r14 != 0)
                            r14[1].d += 1
                        
                        int64_t* rdi = *(arg1 + 0x10)
                        
                        if (rdi != 0)
                            int32_t rax_1 = 0
                            bool z_4
                            
                            if (0 == rdi[1].d)
                                rdi[1].d = 0
                                z_4 = true
                            else
                                rax_1 = rdi[1].d
                                z_4 = false
                            
                            if (z_4)
                            label_141882004:
                                rdi = nullptr
                            else
                                while (true)
                                    bool z_5
                                    
                                    if (rax_1 == rdi[1].d)
                                        rdi[1].d = rax_1 + 1
                                        z_5 = true
                                    else
                                        rdi[1].d
                                        z_5 = false
                                    
                                    if (z_5)
                                        if (rdi != 0)
                                            r10 = *(arg1 + 8)
                                        
                                        break
                                    
                                    rax_1 = 0
                                    bool z_6
                                    
                                    if (0 == rdi[1].d)
                                        rdi[1].d = 0
                                        z_6 = true
                                    else
                                        rax_1 = rdi[1].d
                                        z_6 = false
                                    
                                    if (z_6)
                                        goto label_141882004
                        
                        int64_t rsi_1 = *(arg1 + 0x18)
                        int64_t var_28 = *arg2
                        int64_t* var_20 = r14
                        
                        if (r14 != 0)
                            r14[1].d += 1
                        
                        int32_t var_38 = *(arg1 + 0x20)
                        rsi_1(r10, &var_28)
                        
                        if (rdi != 0)
                            rdi[1].d -= 1
                            
                            if (rdi[1].d == 1)
                                (**rdi)(rdi)
                                int32_t rax_6 = *(rdi + 0xc)
                                *(rdi + 0xc) -= 1
                                
                                if (rax_6 == 1)
                                    (*(*rdi + 8))(rdi, 1)
                        
                        if (r14 != 0)
                            r14[1].d -= 1
                            
                            if (r14[1].d == 1)
                                (**r14)(r14)
                                int32_t temp6_1 = *(r14 + 0xc)
                                *(r14 + 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    (*(*r14 + 8))(r14, 1)
                        
                        rbx[1].d -= 1
                        
                        if (rbx[1].d == 1)
                            (**rbx)(rbx)
                            int32_t rsi_2 = *(rbx + 0xc)
                            *(rbx + 0xc) -= 1
                            
                            if (rsi_2 == 1)
                                (*(*rbx + 8))(rbx, zx.q(rsi_2))
                        
                        int64_t* rbx_1 = arg2[1]
                        
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp8_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        uint64_t rax_11
                        rax_11.b = 1
                        return rax_11
                    
                    rbx[1].d -= 1
                    
                    if (rbx[1].d == 1)
                        (**rbx)(rbx)
                        int32_t rsi_3 = *(rbx + 0xc)
                        *(rbx + 0xc) -= 1
                        
                        if (rsi_3 == 1)
                            (*(*rbx + 8))(rbx, zx.q(rsi_3))
                
                break
            
            rax = 0
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
        while (not(z_3))

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

rax.b = 0
return rax
