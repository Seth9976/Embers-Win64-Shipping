// 函数: sub_141e53ac0
// 地址: 0x141e53ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = data_143f5b298

if (r11 != 0)
    int64_t* r11_1 = *(r11 + 0x2a8)
    
    if (r11_1 != 0)
        uint32_t rcx = zx.d(arg1[0xe].b)
        int64_t var_28
        void var_18
        int64_t* rax_2
        
        if (rcx == 0)
            int64_t rax_4 = *r11_1
            var_28 = 0
            int32_t var_20_3 = 0
            rax_2 = (*(rax_4 + 0x300))(r11_1, &var_18, &arg1[6], &arg1[8], &var_28, 0)
        label_141e53bb8:
            
            if (&arg1[0xc] != rax_2)
                arg1[0xc] = *rax_2
                *rax_2 = 0
                int64_t* rbx_1 = arg1[0xd]
                int64_t rcx_6 = rax_2[1]
                
                if (rcx_6 != rbx_1)
                    rax_2[1] = 0
                    arg1[0xd] = rcx_6
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp4_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp2_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
        else
            if (rcx == 1)
                int64_t rax_3 = *r11_1
                var_28 = 0
                int32_t var_20_2 = 0
                rax_2 = (*(rax_3 + 0x338))(r11_1, &var_18, &arg1[8], &arg1[0xa], &var_28, 0)
                goto label_141e53bb8
            
            if (rcx == 2)
                int64_t r10_1 = *r11_1
                var_28 = 0
                rax_2 = (*(r10_1 + 0x330))(r11_1, &var_18, &arg1[6], &arg1[8], &arg1[0xa], 0, 
                    &var_28, 0, var_28, 0)
                goto label_141e53bb8
        void* rax_9 = arg1[0xc]
        
        if (rax_9 != 0 && *(rax_9 + 0x10) == 0)
            var_28 = 0
            int32_t var_20_4 = 0
            void*** rax_10 = sub_1405978f0(0x28, &var_28)
            
            if (rax_10 != 0)
                *rax_10 = &data_142d57800
                sub_140d3a3a0(&rax_10[1], arg1)
                rax_10[2] = sub_140f28a78
                rax_10[4] = sub_140a387b0()
                *rax_10 = &data_142d57858
            
            return sub_142385440(arg1[0xc], &var_28)

jump(*(*arg1 + 0x280))
