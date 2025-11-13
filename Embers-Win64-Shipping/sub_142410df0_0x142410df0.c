// 函数: sub_142410df0
// 地址: 0x142410df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
void* r14 = arg2
int32_t result

if ((*(arg2 + 8) & 4) != 0)
    result = sub_1424159f0(arg1)

if ((*(arg2 + 8) & 4) == 0 || result.b != 0)
    if ((*(r14 + 8) & 2) != 0)
        result = sub_142415b10(arg1)
    
    if ((*(r14 + 8) & 2) == 0 || result.b != 0)
        if ((*(r14 + 8) & 1) != 0)
            result = sub_142416250(arg1)
        
        if ((*(r14 + 8) & 1) == 0 || result.b != 0)
            if ((*(r14 + 8) & 8) != 0)
                result = sub_142415a80(arg1)
            
            if ((*(r14 + 8) & 8) == 0 || result.b != 0)
                uint32_t r8 = zx.d(arg3[2])
                int64_t var_1d8 = *(r14 + 0x10)
                int64_t var_1d0_1 = *(r14 + 0x18)
                void* rax_3 = *(r14 + 0x20)
                void* var_1c8_1 = rax_3
                
                if (rax_3 != 0)
                    *(rax_3 + 8) += 1
                
                void* rsi_1 = arg1 + 0x390
                result = sub_142417060(arg1, &var_1d8, r8, rsi_1, arg7)
                
                if (result.b != 0)
                    int64_t r10_1 = *(r14 + 0x18)
                    int64_t* rbx_1 = *(r14 + 0x20)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    uint8_t rdx_1 = *(r14 + 8)
                    var_1d8 = *(r14 + 0x10)
                    int64_t var_1d0_2 = r10_1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    int32_t var_1c0
                    int32_t var_1c0_1 = ((((((zx.d(rdx_1 u>> 3) & 1) * 2) | (zx.d(rdx_1 u>> 2) & 1))
                        * 2) | (zx.d(rdx_1 u>> 1) & 1)) * 2) | (zx.d(rdx_1) & 1)
                        | (var_1c0 & 0xfffffff0)
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp2_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    int32_t rdi_1 = arg5[1].d
                    int32_t rdi_2 = rdi_1 - 1
                    
                    if (rdi_1 - 1 s< 0)
                    label_142410fe4:
                        int64_t var_1b8
                        int128_t var_148
                        int128_t* rcx_19
                        int64_t rdx_6
                        int32_t rdi_3
                        int32_t r12_1
                        
                        if (arg4 == 0 || (*arg3 & 2) != 0)
                            void* rax_17 = *(arg3 + 0x18)
                            rdx_6 = *(arg3 + 0x10)
                            var_1b8 = rdx_6
                            void* var_1b0_1 = rax_17
                            
                            if (rax_17 != 0)
                                *(rax_17 + 8) += 1
                            
                            int64_t var_1a8_1 = *(arg3 + 0x20)
                            void* rax_19 = *(arg3 + 0x28)
                            void* var_1a0_1 = rax_19
                            
                            if (rax_19 != 0)
                                *(rax_19 + 8) += 1
                            
                            int64_t var_198_1 = *(arg3 + 0x30)
                            void* rax_21 = *(arg3 + 0x38)
                            void* var_190_1 = rax_21
                            
                            if (rax_21 != 0)
                                *(rax_21 + 8) += 1
                            
                            rcx_19 = &var_1b8
                            char var_188_1 = arg3[0x40]
                            rdi_3 = 0
                            r12_1 = 2
                        else
                            rcx_19 = &var_148
                            rdx_6 = 0
                            __builtin_memset(&var_148, 0, 0x31)
                            rdi_3 = 1
                            r12_1 = 0
                        
                        int64_t rax_23 = *(rcx_19 + 8)
                        __builtin_memset(rcx_19, 0, 0x30)
                        int64_t var_178_1 = rax_23
                        int64_t var_170_1 = rcx_19[1].q
                        int64_t var_168_1 = *(rcx_19 + 0x18)
                        int64_t var_160_1 = rcx_19[2].q
                        int32_t r8_3 = arg5[1].d
                        int64_t var_158_1 = *(rcx_19 + 0x28)
                        int32_t* rcx_20 = *rsi_1
                        char var_150_1 = rcx_19[3].b
                        char rax_29 = arg3[2]
                        int64_t var_180 = rdx_6
                        int32_t var_108
                        sub_1423fb4b0(&var_108, *rcx_20, r8_3, &var_1d8, &var_180, rax_29, arg3)
                        
                        if (r12_1 != 0)
                            sub_141b84450(&var_1b8)
                        
                        if (rdi_3 != 0)
                            sub_141b84450(&var_148)
                        
                        r12 = sx.q(*(arg1 + 0x398)) - 1
                        
                        if (r12 s> 0)
                            int64_t rdi_4 = 0
                            
                            do
                                int64_t rsi_2 = sx.q(arg5[1].d)
                                int32_t rax_31 = (rsi_2 + 1).d
                                var_108 = *(*(arg1 + 0x390) + (rdi_4 << 2))
                                arg5[1].d = rax_31
                                
                                if (rax_31 s> *(arg5 + 0xc))
                                    sub_1405c5190(arg5)
                                
                                sub_1423fb320(rsi_2 * 0xc8 + *arg5, &var_108)
                                rdi_4 += 1
                            while (rdi_4 s< r12)
                            
                            r14 = arg2
                            rsi_1 = arg1 + 0x390
                        
                        int64_t rdi_5 = sx.q(arg5[1].d)
                        int32_t rax_33 = (rdi_5 + 1).d
                        var_108 = *(*rsi_1 + (r12 << 2))
                        arg5[1].d = rax_33
                        
                        if (rax_33 s> *(arg5 + 0xc))
                            sub_1405c5190(arg5)
                        
                        sub_1423fb170(rdi_5 * 0xc8 + *arg5, &var_108)
                        r12.b = 1
                        void var_68
                        sub_140e53610(&var_68)
                        void var_98
                        sub_140e53610(&var_98)
                        int64_t* var_b0
                        
                        if (var_b0 != 0)
                            var_b0[1].d -= 1
                            
                            if (var_b0[1].d == 1)
                                (**var_b0)(var_b0)
                                int32_t temp7_1 = *(var_b0 + 0xc)
                                *(var_b0 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    (*(*var_b0 + 8))(var_b0, 1)
                        
                        void var_100
                        result = sub_141b84450(&var_100)
                    else
                        while (true)
                            result = sub_140e68f40(&var_1d8, *arg5 + 0x48 + sx.q(rdi_2) * 0xc8)
                            
                            if (result == 3)
                                sub_14241dd30(arg5, rdi_2, result - 2, 0)
                            else if (result == 2)
                                break
                            
                            int32_t temp3_1 = rdi_2
                            rdi_2 -= 1
                            
                            if (temp3_1 - 1 s< 0)
                                goto label_142410fe4
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            result = (**rbx_1)(rbx_1)
                            int32_t temp5_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                result = (*(*rbx_1 + 8))(rbx_1, 1)

if ((*arg3 & 1) != 0)
    if (r12.b != 0)
        result = sub_141b6d510(arg6, r14 + 0x10)
    else if ((*(r14 + 8) & 0xf) == 0 && arg3[2] != 3)
        result = sub_141b6d510(arg6, r14 + 0x10)

*(arg1 + 0x398) = 0

if (*(arg1 + 0x39c) s> 0xffffffff)
    return result

return sub_1405dadb0(arg1 + 0x390, 0)
