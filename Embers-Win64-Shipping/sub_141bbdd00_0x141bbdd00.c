// 函数: sub_141bbdd00
// 地址: 0x141bbdd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x58)

if (rcx != 0)
    if (arg2 == 0 || *(arg3 + 0x50) != *(arg1 + 0x98))
        if (*(arg1 + 0x60) != 0)
            int64_t* rdi_1 = *(arg1 + 0x10)
            void* r15_1 = nullptr
            int64_t* r14_1 = nullptr
            
            if (rdi_1 != 0)
                int32_t rax_2 = rdi_1[1].d
                
                if (rax_2 != 0)
                    rdi_1[1].d = rax_2 + 1
                    rax_2.b = 1
                
                if (rax_2.b == 0)
                    rdi_1 = nullptr
                
                if (rdi_1 != 0)
                    r14_1 = *(arg1 + 8)
                    rdi_1[1].d += 1
            
            void** var_a8
            sub_140e51390(&var_a8, arg3)
            int64_t* var_38_1 = r14_1
            var_a8 = &data_142ed7318
            
            if (rdi_1 != 0)
                int32_t rax_3 = rdi_1[1].d
                rdi_1[1].d = rax_3
                
                if (rax_3 == 0)
                    (**rdi_1)(rdi_1)
                    int32_t temp0_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                r14_1 = var_38_1
            
            void* r13_1 = *(arg1 + 0x60)
            
            if (r14_1 != 0)
                int64_t rbx_1 = *r14_1
                sub_141bb1400()
                
                if ((*(rbx_1 + 0x58))(r14_1, &data_143f31920) != 0)
                    if (rdi_1 != 0)
                        rdi_1[1].d += 1
                    
                    if (var_38_1 != 0)
                        void* rax_7 = *(r13_1 + 0x3a0)
                        
                        if (rax_7 != 0)
                            int32_t rax_8 = *(rax_7 + 0xc)
                            
                            if (rax_8 s< data_143e1d9b4)
                                int16_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(rax_8)
                                uint32_t rdx_3 = zx.d(temp9_1)
                                int32_t rax_10 = temp10_1 + rdx_3
                                r15_1 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_10.w) - rdx_3) * 0x18
                            
                            if (((*(r15_1 + 8) u>> 0x1c).b & 1) == 0)
                                char arg_8 = 0
                                char* var_b0_1 = &arg_8
                                void*** (* var_b8)() = sub_140884c50
                                
                                if (*(sub_140a756e0(&var_b8, &data_14397f5f0) + 0x20) == 0)
                                    int64_t* rcx_10 = *(r13_1 + 0x3a0)
                                    (*(*rcx_10 + 0x420))(rcx_10, &var_a8, var_38_1[0xb])
                    
                    if (rdi_1 != 0)
                        rdi_1[1].d -= 1
                        
                        if (rdi_1[1].d == 1)
                            (**rdi_1)(rdi_1)
                            int32_t temp8_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rdi_1 + 8))(rdi_1, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            int64_t* var_60
            
            if (var_60 != 0)
                var_60[1].d -= 1
                
                if (var_60[1].d == 1)
                    (**var_60)(var_60)
                    int32_t temp5_1 = *(var_60 + 0xc)
                    *(var_60 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_60 + 8))(var_60, 1)
            
            var_a8 = &data_142d7f690
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        sub_141bfc6e0(*(arg1 + 0x58), arg3)
    else
        sub_141bfc880(rcx, arg3)

return j_sub_140d9cd40(arg1) __tailcall
