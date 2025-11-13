// 函数: sub_141ffcd60
// 地址: 0x141ffcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = arg2
*arg2 = 0
arg2[1] = 0
int64_t* rdi = arg1[1]

if (rdi != 0)
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_1 = rdi[1].d
        z_1 = false
    
    if (not(z_1))
        bool z_3
        
        do
            bool z_2
            
            if (rax_1 == rdi[1].d)
                rdi[1].d = rax_1 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                if (rdi != 0)
                    int64_t* rax_3 = *arg1
                    
                    if (rax_3 != 0)
                        int64_t* var_48 = rax_3
                        int64_t* var_40_1 = rdi
                        rdi[1].d += 1
                        void*** rax_4 = j_sub_140a82f30(0xf0)
                        void*** r14_1 = rax_4
                        
                        if (rax_4 == 0)
                            r14_1 = nullptr
                        else
                            rax_4[1].d = 1
                            *(rax_4 + 0xc) = 1
                            *r14_1 = &data_14329d800
                            int64_t var_78 = 0
                            int32_t var_70_1 = 0
                            
                            if (&arg1[3] != &var_78 && arg1[4].d != 0)
                                int64_t* rcx_1 = arg1[3]
                                
                                if (rcx_1 != 0)
                                    (*(*rcx_1 + 0x40))(rcx_1, &var_78)
                            
                            sub_141ff3de0(&r14_1[2], arg1 + 0x3c, &var_48, &arg1[5], &var_78)
                        
                        void*** var_30_1 = r14_1
                        void* var_38 = &r14_1[2]
                        sub_141ff2130(&var_38, &r14_1[2])
                        void* var_88 = &r14_1[2]
                        void*** rcx_4 = r14_1
                        void*** var_80 = rcx_4
                        
                        if (r14_1 != 0)
                            r14_1[1].d += 1
                            rcx_4 = var_80
                        
                        if (result != &var_88)
                            *result = &r14_1[2]
                            var_88 = nullptr
                            sub_1405aeff0(&result[1], &var_80)
                            rcx_4 = var_80
                        
                        if (rcx_4 != 0)
                            rcx_4[1].d -= 1
                            
                            if (rcx_4[1].d == 1)
                                void*** rbx_2 = var_80
                                (**rbx_2)(rbx_2)
                                int32_t rax_8 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (rax_8 == 1)
                                    void*** rcx_7 = var_80
                                    (*rcx_7)[1](rcx_7, 1)
                        
                        if (r14_1 != 0)
                            r14_1[1].d -= 1
                            
                            if (r14_1[1].d == 1)
                                (**r14_1)(r14_1)
                                int32_t rax_12 = *(r14_1 + 0xc)
                                *(r14_1 + 0xc) -= 1
                                
                                if (rax_12 == 1)
                                    (*r14_1)[1](r14_1, 1)
                        
                        rdi[1].d -= 1
                        
                        if (rdi[1].d == 1)
                            (**rdi)(rdi)
                            int32_t rax_16 = *(rdi + 0xc)
                            *(rdi + 0xc) -= 1
                            
                            if (rax_16 == 1)
                                (*(*rdi + 8))(rdi, 1)
                        
                        int64_t* rbx_3 = result[1]
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        void* var_58 = *result
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d += 1
                        
                        (*(*rax_3 + 0x20))(rax_3, *result + 0x28, &var_58)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t rax_22 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (rax_22 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t rax_26 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (rax_26 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        if (arg1[4].d != 0)
                            int64_t* rcx_17 = arg1[3]
                            
                            if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                                int64_t* rbx_4 = result[1]
                                void* rax_30 = *result
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d += 1
                                
                                void* var_68
                                
                                if (rax_30 == 0)
                                    var_68 = nullptr
                                else
                                    var_68 = rax_30 + 0x10
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d += 1
                                
                                (*(*rax_3 + 0x58))(rax_3, &var_68)
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        (**rbx_4)(rbx_4)
                                        int32_t rax_35 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (rax_35 == 1)
                                            (*(*rbx_4 + 8))(rbx_4, 1)
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        (**rbx_4)(rbx_4)
                                        int32_t rax_39 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (rax_39 == 1)
                                            (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        if (arg1[2].b != 0)
                            *(*result + 0x48) = 0
                        
                        uint32_t rcx_23 = 0xff
                        arg2 = *result
                        
                        if (arg1[7].b == 0)
                            uint32_t rax_44 = zx.d((*(arg1 + 0x44)).b)
                            
                            if (rax_44 != 0xff)
                                rcx_23 = rax_44
                            
                            *(arg2 + 0x9c) = rcx_23
                        else
                            arg2[0x12].b = 1
                            *(*result + 0x9c) = 0xff
                    
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi, arg2)
                        int32_t rsi_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (rsi_1 == 1)
                            (*(*rdi + 8))(rdi, zx.q(rsi_1))
                
                break
            
            rax_1 = 0
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_1 = rdi[1].d
                z_3 = false
        while (not(z_3))

return result
