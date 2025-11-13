// 函数: sub_142790310
// 地址: 0x142790310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
void* result = __security_cookie ^ &var_178
void* result_1 = result
int32_t rdi = arg4

if (*(arg1 + 0x168) != 0)
    sub_1419c6730()
    result = arg2
    int64_t r13_1 = 0
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(result + 8) s> 0)
        do
            if (test_bit(rdi, i))
                void* rcx = nullptr
                int32_t var_38_1 = 0
                int32_t r14_1 = 0
                int32_t var_34_1 = 0x20
                void* var_40_1 = nullptr
                void var_140
                
                if (*(*(arg1 + 0x708) + 0x20) != 0)
                    int32_t rax_19 = *(arg1 + 0x700)
                    
                    if (rax_19 s> 0)
                        void* rsi_2 = nullptr
                        
                        do
                            void*** rax_21 =
                                sub_1427908a0(arg1, arg5, zx.q(*(rsi_2 + *(arg1 + 0x6f8))))
                            int64_t rdi_4 = sx.q(var_38_1)
                            int32_t rcx_19 = (rdi_4 + 1).d
                            var_38_1 = rcx_19
                            
                            if (rcx_19 s> var_34_1)
                                sub_1407c3a50(&var_140, rdi_4.d)
                            
                            void* rdx_11 = &var_140
                            
                            if (var_40_1 != 0)
                                rdx_11 = var_40_1
                            
                            r14_1 += 1
                            rsi_2 += 0x20
                            *(rdx_11 + (rdi_4 << 3)) = rax_21
                            rax_19 = *(arg1 + 0x700)
                        while (r14_1 s< rax_19)
                        
                        rcx = var_40_1
                        i = i_1
                    
                    int32_t j = 0
                    
                    if (rax_19 s> 0)
                        int64_t r15_3 = 0
                        
                        do
                            void* rdi_6 = *(arg1 + 0x6f8) + r13_1
                            int32_t rax_22 = sub_14081f8e0(arg5, 1)
                            int64_t* r8_11 =
                                zx.q(rax_22 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_22 s/ 0x66) << 3))
                            void* rcx_27 = &var_140
                            int64_t* rdx_16 = r8_11
                            int64_t* rax_24 = r8_11[0xd]
                            
                            if (rax_24 != 0)
                                rdx_16 = rax_24
                            
                            rdx_16[2] = arg1 + 0x578
                            *(r8_11 + 0x9c) &= 0xffffffbf
                            r8_11[0xf] = arg1 + 0x170
                            
                            if (var_40_1 != 0)
                                rcx_27 = var_40_1
                            
                            r8_11[0x10] = *(rcx_27 + r15_3)
                            *rdx_16 = *(arg1 + 0x140)
                            rdx_16[8].d = *(rdi_6 + 4)
                            *(rdx_16 + 0x44) = *(rdi_6 + 8)
                            rdx_16[0xa].d = *(rdi_6 + 0xc)
                            *(rdx_16 + 0x54) = *(rdi_6 + 0x10)
                            *(r8_11 + 0x9c) = (zx.d(*(arg1 + 0x35)) & 1)
                                | (*(r8_11 + 0x9c) & 0xffff007e) | 0x10000
                            sub_1422dd2a0(arg5, i, r8_11)
                            j += 1
                            r15_3 += 8
                            r13_1 += 0x20
                        while (j s< *(arg1 + 0x700))
                        
                        rcx = var_40_1
                        r13_1 = 0
                else
                    void* r15_1 = *(arg1 + 0x710)
                    int32_t rax_2 = *(r15_1 + 0xd8)
                    
                    if (rax_2 s> 0)
                        void* rsi_1 = nullptr
                        
                        do
                            void*** rax_4 =
                                sub_1427908a0(arg1, arg5, zx.q(*(rsi_1 + *(r15_1 + 0xd0))))
                            int64_t rdi_1 = sx.q(var_38_1)
                            int32_t rcx_2 = (rdi_1 + 1).d
                            var_38_1 = rcx_2
                            
                            if (rcx_2 s> var_34_1)
                                sub_1407c3a50(&var_140, rdi_1.d)
                            
                            void* rdx_2 = &var_140
                            
                            if (var_40_1 != 0)
                                rdx_2 = var_40_1
                            
                            r14_1 += 1
                            rsi_1 += 0x20
                            *(rdx_2 + (rdi_1 << 3)) = rax_4
                            rax_2 = *(r15_1 + 0xd8)
                        while (r14_1 s< rax_2)
                        
                        rcx = var_40_1
                        r13_1 = 0
                        i = i_1
                    
                    int32_t j_1 = 0
                    
                    if (rax_2 s> 0)
                        int64_t rcx_5 = 0
                        i_1.q = 0
                        
                        do
                            void* rdi_3 = *(r15_1 + 0xd0) + rcx_5
                            int32_t rax_5 = sub_14081f8e0(arg5, 1)
                            int64_t* r8_5 =
                                zx.q(rax_5 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_5 s/ 0x66) << 3))
                            void* rcx_11 = &var_140
                            int64_t* rdx_7 = r8_5
                            int64_t* rax_7 = r8_5[0xd]
                            
                            if (rax_7 != 0)
                                rdx_7 = rax_7
                            
                            rdx_7[2] = arg1 + 0x598
                            *(r8_5 + 0x9c) &= 0xffffffbf
                            r8_5[0xf] = arg1 + 0x170
                            
                            if (var_40_1 != 0)
                                rcx_11 = var_40_1
                            
                            r8_5[0x10] = *(rcx_11 + r13_1)
                            *rdx_7 = *(arg1 + 0x140)
                            rdx_7[8].d = *(rdi_3 + 4)
                            *(rdx_7 + 0x44) = *(rdi_3 + 8)
                            rdx_7[0xa].d = *(rdi_3 + 0xc)
                            *(rdx_7 + 0x54) = *(rdi_3 + 0x10)
                            *(r8_5 + 0x9c) =
                                (zx.d(*(arg1 + 0x35)) & 1) | (*(r8_5 + 0x9c) & 0xffff007e) | 0x10000
                            sub_1422dd2a0(arg5, i, r8_5)
                            r13_1 += 8
                            rcx_5 = i_1.q + 0x20
                            j_1 += 1
                            i_1.q = rcx_5
                        while (j_1 s< *(r15_1 + 0xd8))
                        
                        rcx = var_40_1
                        r13_1 = 0
                
                if (rcx != 0)
                    sub_140a74f90(rcx)
                
                if (*(arg1 + 0x718) != 0 || *(arg1 + 0x719) != 0)
                    int64_t* rcx_34 = *(*(arg1 + 0x150) + (sx.q(*(arg1 + 0x71c)) << 3))
                    int64_t rax_38 = (*(*rcx_34 + 0x280))(rcx_34)
                    int32_t rax_39 = sub_14081f8e0(arg5, 1)
                    int64_t* r8_16 =
                        zx.q(rax_39 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_39 s/ 0x66) << 3))
                    int64_t* rcx_40 = r8_16
                    int64_t* rax_41 = r8_16[0xd]
                    
                    if (rax_41 != 0)
                        rcx_40 = rax_41
                    
                    rcx_40[2] = arg1 + 0x578
                    *(r8_16 + 0x9c) &= 0xffffffbf
                    r8_16[0xf] = arg1 + 0x170
                    r8_16[0x10] = rax_38
                    *rcx_40 = *(arg1 + 0x140)
                    rcx_40[8].d = 0
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = muls.dp.d(0x55555556, *(arg1 + 0x16c))
                    rcx_40[0xa].d = 0
                    *(rcx_40 + 0x44) = temp6_1 + (temp6_1 u>> 0x1f)
                    *(rcx_40 + 0x54) = *(arg1 + 0x168)
                    *(r8_16 + 0x9c) = (zx.d(*(arg1 + 0x35)) & 1) | (*(r8_16 + 0x9c) & 0xfffe007e)
                    sub_1422dd2a0(arg5, i, r8_16)
                
                rdi = arg4
                result = arg2
            
            i += 1
            i_1 = i
        while (i s< *(result + 8))

__security_check_cookie(result_1 ^ &var_178)
return result
