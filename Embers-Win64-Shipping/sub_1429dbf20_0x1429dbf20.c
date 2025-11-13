// 函数: sub_1429dbf20
// 地址: 0x1429dbf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t rdi = zx.q(arg2)
int32_t r14 = 0
int64_t result

if (arg1 + rdi u> arg1)
    *(arg3 + 8) = 0
    *(arg3 + 4) = 0
    
    if (arg6 != 0)
        int32_t rax_3 = 0xa
        
        if (rdi.d u<= 0xa)
            rax_3 = rdi.d
        
        rdi = zx.q(rax_3)
        void var_68
        arg6(arg7, arg1, &var_68, zx.q(rax_3))
        arg1 = &var_68
    
    if (rdi.d u>= 1)
        void* var_98 = arg1
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x18)
        int64_t r15_1 = 2
        void* var_90_1 = zx.q(rdi.d) + arg1
        int32_t rax_6 = sub_1429e0bd0(&var_98, 2)
        int32_t rax_7 = sub_1429e6fc0(&var_98, arg5)
        
        if (rax_6 != 2 || rax_7 s>= 4)
            result = 5
        else if (sub_1429e0b80(&var_98, arg5) == 0)
            if (rdi.d u< 0xa)
                result = 5
            else
                int32_t rcx_6
                rcx_6.b = sub_1429e0b80(&var_98, arg5) == 0
                *(arg3 + 0xc) = rcx_6
                int32_t rax_10 = sub_1429e0b80(&var_98, arg5)
                int32_t rax_11 = sub_1429e0b80(&var_98, arg5)
                
                if (*(arg3 + 0xc) == 0)
                    if (rax_10 == 0)
                        r14 = sub_1429e0b80(&var_98, arg5)
                    
                    if (rax_11 != 0)
                        r15_1 = 0
                    
                    int64_t var_88_1 = var_88 + r15_1
                    
                    if (r14 == 0)
                        goto label_1429dc0e6
                    
                    if (sub_1429e7010(&var_98) == 0)
                        result = 5
                    else
                        int32_t rax_16
                        
                        if (rax_7 s> 0)
                            rax_16 = sub_1429dc6a0(rax_7, &var_98)
                        
                        if (rax_7 s> 0 && rax_16 == 0)
                            result = 5
                        else
                            int64_t var_88_2 = var_88_1 + 8
                        label_1429dc0dd:
                            sub_1429e6f70(&var_98, arg3 + 4, arg3 + 8)
                        label_1429dc0e6:
                            
                            if (arg4 == 0)
                                result = 0
                            else
                                *arg4 = r14
                                result = 0
                else if (sub_1429e7010(&var_98) == 0)
                    result = 5
                else
                    if (sub_1429dc6a0(rax_7, &var_98) != 0)
                        goto label_1429dc0dd
                    
                    result = 5
        else if (rax_7 s<= 2 || rdi.d u>= 2)
            sub_1429e0bd0(&var_98, 3)
            result = 0
        else
            result = 5
    else
        result = 5
else
    result = 8

__security_check_cookie(rax_1 ^ &var_b8)
return result
