// 函数: sub_141ec3110
// 地址: 0x141ec3110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    if ((*(*arg4 + 0x30))(arg4) == 5)
    label_141ec3167:
        
        if (not(arg8 > 0f))
            return sub_141ec32c0(arg1, arg2, arg3, arg4, arg6, arg7, arg9)
        
        int32_t rcx_3 = *arg2
        
        if (rcx_3 == 0)
            float zmm2 = arg8 f+ *(arg2 + 4)
            int32_t arg_20 = 0
            float arg_24 = zmm2
            return sub_141ec32c0(arg1, &arg_20, arg3, arg4, arg6, arg7, arg9)
        
        int32_t var_18
        
        if (rcx_3 == 2)
            float var_14_2 = arg8 f+ *(arg2 + 4)
            int32_t var_10_2 = *(arg2 + 8)
            var_18 = 2
            return sub_141ec32c0(arg1, &var_18, arg3, arg4, arg6, arg7, arg9)
        
        if (rcx_3 == 3)
            var_18 = 3
            int32_t var_14_1 = arg8 f+ *(arg2 + 4)
            float var_10_1 = arg8 f+ *(arg2 + 8)
            float var_c_1 = arg8 f+ *(arg2 + 0xc)
            return sub_141ec32c0(arg1, &var_18, arg3, arg4, arg6, arg7, arg9)
    else
        int64_t r8 = *arg4
        
        if ((*(r8 + 0x30))(arg4, arg5, r8) == 6)
            goto label_141ec3167

int32_t result
result.b = 0
return result
