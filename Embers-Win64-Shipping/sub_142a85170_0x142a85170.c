// 函数: sub_142a85170
// 地址: 0x142a85170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg7 != 0 && *arg7 s<= 0)
    if (arg1 == 0 || arg2 == 0 || arg4 == 0)
        *arg7 = 1
        return result
    
    int64_t rdx = *arg2
    void* const* result_2 = -ffffffffffffffff
    int64_t rbp_1 = *arg4
    void* rsi_1 = arg3 - 1
    result = arg3 + 0x7fffffff
    
    if (result u> arg3)
        result_2 = result
    
    if (result_2 != arg3)
        rsi_1 = arg3
    
    if (arg5 u< rbp_1 || rsi_1 u< rdx)
        *arg7 = 1
    else
        result = arg5 - rbp_1
        
        if (result u<= 0x7fffffff || arg5 u<= rbp_1)
            void* rcx_1 = rsi_1 - rdx
            result = rcx_1 s>> 1
            
            if ((result u<= 0x3fffffff || rsi_1 u<= rdx) && (rcx_1.b & 1) == 0)
                int64_t arg_30
                
                if (*(arg1 + 0x5d) s> 0)
                    result = sub_142a849f0(arg1, arg2, rsi_1, &arg_30, arg7)
                
                if (*(arg1 + 0x5d) s<= 0 || result.b == 0)
                    result = zx.q(arg6)
                    
                    if (result.b != 0 || rbp_1 != arg5 || *(arg1 + 0x11a) s< result.b)
                        char var_56_1 = result.b
                        int64_t var_28_1 = arg_30
                        void** result_1 = *arg2
                        int16_t var_58 = 0x38
                        void* var_50_1 = arg1
                        int64_t var_40_1 = arg5
                        void* var_30_1 = rsi_1
                        sub_142a844d0(&var_58, arg7)
                        *arg4 = rbp_1
                        result = result_1
                        *arg2 = result
            else
                *arg7 = 1
        else
            *arg7 = 1

return result
