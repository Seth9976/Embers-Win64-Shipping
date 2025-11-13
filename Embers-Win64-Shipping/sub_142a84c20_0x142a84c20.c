// 函数: sub_142a84c20
// 地址: 0x142a84c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg7 != 0 && *arg7 s<= 0)
    if (arg1 == 0 || arg2 == 0 || arg4 == 0)
        *arg7 = 1
    else
        int64_t r8 = *arg2
        void* const* result_2 = -ffffffffffffffff
        int64_t r14_1 = *arg4
        result = arg5 + 0x7fffffff
        void* rbp_1 = arg5 - 1
        
        if (result u> arg5)
            result_2 = result
        
        if (result_2 != arg5)
            rbp_1 = arg5
        
        if (rbp_1 u< r14_1 || arg3 u< r8)
            *arg7 = 1
        else
            void* rcx_1 = rbp_1 - r14_1
            result = rcx_1 s>> 1
            
            if (result u<= 0x3fffffff || rbp_1 u<= r14_1)
                result = arg3 - r8
                
                if ((result u<= 0x7fffffff || arg3 u<= r8) && (rcx_1.b & 1) == 0)
                    int64_t arg_30
                    
                    if (*(arg1 + 0x5b) s> 0)
                        result = sub_142a84920(arg1, arg2, arg3, &arg_30, arg7)
                    
                    if (*(arg1 + 0x5b) s<= 0 || result.b == 0)
                        result = zx.q(arg6)
                        
                        if (result.b != 0 || r14_1 != rbp_1 || *(arg1 + 0x119) s< result.b)
                            char var_56_1 = result.b
                            int64_t var_28_1 = arg_30
                            void** result_1 = *arg2
                            int16_t var_58 = 0x38
                            void* var_50_1 = arg1
                            void* var_40_1 = rbp_1
                            int64_t var_30_1 = arg3
                            sub_142a83ee0(&var_58, arg7)
                            *arg4 = r14_1
                            result = result_1
                            *arg2 = result
                else
                    *arg7 = 1
            else
                *arg7 = 1

return result
