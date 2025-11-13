// 函数: sub_140ce6060
// 地址: 0x140ce6060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r12 = 0
int64_t r13 = sx.q(arg2)
void** rbx = arg3
int32_t var_b0 = r13.d
int64_t rsi = r13

if (arg2 s>= 0)
    int64_t temp0_1
    
    do
        int128_t var_c0 = *(*arg1 + rsi * 0x10)
        
        if (rsi != 0)
            sub_140cea1e0()
            
            if (sub_140cc1670(&var_c0, &data_143e1b870) != 0)
                void* rax_8 = var_c0.q
                
                if (rax_8 != 0)
                    int32_t rdi_5 = 0
                    char rbp_1 = not.b((*(rax_8 + 0x80)).b) & 1
                    int32_t rsi_1 = 0
                    int32_t r14_1 = *(*(rax_8 + 0x78) + 0x3c)
                    
                    while (true)
                        int32_t rax_23 = rbx[1].d
                        
                        if (rdi_5 s>= rax_23)
                            break
                        
                        void* r8_1
                        
                        if (rax_23 != 0)
                            void* rax_24 = *rbx
                            
                            if (rbp_1 == 0 && (rax_24.b & 1) != 0)
                                rax_24 = (rax_24 s>> 1) + rbx
                            
                            r8_1 = sx.q(rsi_1) + rax_24
                        else
                            r8_1 = nullptr
                        
                        r12 += sub_140ce6060(arg1, zx.q((r13 - 1).d), r8_1, arg4, arg5)
                        rdi_5 += 1
                        rsi_1 += r14_1
                    
                    break
            
            if (sub_140cc16a0(&var_c0, sub_140d03070()) == 0 || var_c0.q == 0)
                sub_140d11d60()
                
                if (sub_140cc1670(&var_c0, &data_143e1c310) != 0)
                    void* rax_12 = var_c0.q
                    
                    if (rax_12 != 0)
                        int32_t rbp_2 = rbx[1].d
                        int32_t rdi_6 = 0
                        int32_t r15_1 = *(rax_12 + 0x90)
                        int32_t i = rbp_2 - *(rbx + 0x34)
                        
                        if (rbp_2 != *(rbx + 0x34))
                            int32_t rsi_2 = 1
                            int32_t r14_2 = 0
                            
                            do
                                if (rdi_6 s>= 0 && rdi_6 s< rbx[5].d)
                                    void* rax_28 = rbx[4]
                                    void* rcx_16 = &rbx[2]
                                    
                                    if (rax_28 != 0)
                                        rcx_16 = rax_28
                                    
                                    int32_t rax_29 = rdi_6
                                    
                                    if (rdi_6 s< 0)
                                        rax_29 = rdi_6 + 0x1f
                                    
                                    if ((*(rcx_16 + (sx.q(rax_29 s>> 5) << 2)) & rsi_2) != 0)
                                        i -= 1
                                        void* r8_3
                                        
                                        if (rbx[1].d != *(rbx + 0x34))
                                            r8_3 = sx.q(r14_2) + *rbx
                                        else
                                            r8_3 = nullptr
                                        
                                        r12 +=
                                            sub_140ce6060(arg1, zx.q((r13 - 1).d), r8_3, arg4, arg5)
                                
                                rdi_6 += 1
                                rsi_2 = rol.d(rsi_2, 1)
                                r14_2 += r15_1
                            while (i != 0)
                        
                        break
                
                if (sub_140cc16a0(&var_c0, sub_140d043e0()) == 0 || var_c0.q == 0)
                    sub_140d11890()
                    
                    if (sub_140cc1670(&var_c0, &data_143e1bbb0) != 0)
                        void* rax_16 = var_c0.q
                        
                        if (rax_16 != 0)
                            int32_t zmm0_1 = (*(rax_16 + 0x88)).d
                            char r13_1 = (*(rax_16 + 0xa0)).b
                            int64_t zmm1_1 = *(rax_16 + 0x98)
                            int32_t r15_2 = rbx[1].d
                            int32_t i_1
                            
                            if ((not.b(r13_1) & 1) != 0)
                                i_1 = r15_2 - *(rbx + 0x34)
                            else
                                i_1 = r15_2 - *(rbx + 0x24)
                            
                            int32_t rdi_7 = 0
                            
                            if (i_1 != 0)
                                int32_t rsi_3 = 1
                                r13_1 = not.b(r13_1) & 1
                                int32_t r14_3 = 0
                                
                                do
                                    void* r8_5
                                    
                                    if (r13_1 != 0)
                                        if (rdi_7 s>= 0 && rdi_7 s< rbx[5].d)
                                            void* rax_43 = rbx[4]
                                            void* rcx_20 = &rbx[2]
                                            
                                            if (rax_43 != 0)
                                                rcx_20 = rax_43
                                            
                                            int32_t rax_44 = rdi_7
                                            
                                            if (rdi_7 s< 0)
                                                rax_44 = rdi_7 + 0x1f
                                            
                                            if ((*(rcx_20 + (sx.q(rax_44 s>> 5) << 2)) & rsi_3)
                                                    != 0)
                                                if (rbx[1].d != *(rbx + 0x34))
                                                    r8_5 = sx.q(r14_3) + *rbx
                                                else
                                                    r8_5 = nullptr
                                                
                                            label_140ce6449:
                                                i_1 -= 1
                                                int32_t r12_1 = r12 + sub_140ce6060(arg1, 
                                                    zx.q(var_b0 - 1), r8_5, arg4, arg5)
                                                int32_t rax_50 = rbx[1].d
                                                void* r8_8
                                                
                                                if (r13_1 != 0)
                                                    if (rax_50 != *(rbx + 0x34))
                                                        r8_8 = sx.q(zmm0_1) + sx.q(r14_3) + *rbx
                                                    else
                                                        r8_8 = nullptr
                                                else if (rax_50 != *(rbx + 0x24))
                                                    void* rcx_22 = *rbx
                                                    
                                                    if ((rcx_22.b & 1) != 0)
                                                        rcx_22 = (rcx_22 s>> 1) + rbx
                                                    
                                                    r8_8 = sx.q(r14_3) + sx.q(zmm0_1) + rcx_22
                                                else
                                                    r8_8 = nullptr
                                                
                                                r12 = r12_1 + sub_140ce6060(arg1, zx.q(var_b0 - 1), 
                                                    r8_8, arg4, arg5)
                                    else if (rdi_7 s>= 0 && rdi_7 s< rbx[3].d)
                                        void* rcx_18 = rbx[2]
                                        
                                        if ((rcx_18.b & 1) != 0)
                                            rcx_18 = (rcx_18 s>> 1) + &rbx[2]
                                        
                                        int32_t rax_37 = rdi_7
                                        
                                        if (rdi_7 s< 0)
                                            rax_37 = rdi_7 + 0x1f
                                        
                                        if ((*(rcx_18 + (sx.q(rax_37 s>> 5) << 2)) & rsi_3) != 0)
                                            if (rbx[1].d != *(rbx + 0x24))
                                                void* rax_41 = *rbx
                                                
                                                if ((rax_41.b & 1) != 0)
                                                    rax_41 = (rax_41 s>> 1) + rbx
                                                
                                                r8_5 = sx.q(r14_3) + rax_41
                                            else
                                                r8_5 = nullptr
                                            
                                            goto label_140ce6449
                                    r14_3 += zmm1_1:4.d
                                    rdi_7 += 1
                                    rsi_3 = rol.d(rsi_3, 1)
                                while (i_1 != 0)
                            
                            break
                    
                    if (sub_140cc16a0(&var_c0, sub_140d03af0()) == 0 || var_c0.q == 0)
                        void* rax_19 = sub_140cd2b10(*arg1 + (sx.q(r13.d) << 4) - 0x10)
                        
                        if (rax_19 == 0)
                            void* rax_21 = sub_140cd2b40(*arg1 + (sx.q(r13.d) << 4) - 0x10)
                            
                            if (rax_21 != 0)
                                rbx += sx.q(*(rax_21 + 0x44))
                        else
                            rbx += sx.q(*(rax_19 + 0x4c))
        else
            sub_140d11cb0()
            int64_t* rdi_1 = nullptr
            
            if (sub_140cc1670(&var_c0, &data_143e1c060) != 0)
                rdi_1 = var_c0.q
            
            if ((*(*rdi_1 + 0x140))(rdi_1, rbx) == arg4)
                (*(*rdi_1 + 0x148))(rdi_1, rbx, arg5)
                r12 += 1
        
        r13 = zx.q(r13.d - 1)
        temp0_1 = rsi
        rsi -= 1
        var_b0 = r13.d
    while (temp0_1 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(r12)
