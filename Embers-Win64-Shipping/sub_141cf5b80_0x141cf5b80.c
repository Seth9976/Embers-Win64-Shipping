// 函数: sub_141cf5b80
// 地址: 0x141cf5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0)
    result.b = 1
else
    uint64_t r13_4 = (arg6 + 1 + arg5) u>> 1
    int32_t* r15_1 = data_143a21128 + (sx.q(not.d(data_143a2114c)) & sx.q(arg1)) * 0xc
    int64_t var_38
    
    if (arg3 << arg7.b s< 0)
    label_141cf5c8f:
        int64_t rax_10 = *arg9
        var_38 = rax_10
        
        if (rax_10 != 0)
            int64_t var_30_3 = arg9[1]
        
        if (sub_141cf6540(r15_1[1], arg2, arg3, arg4, &var_38).b == 0)
            result.b = 0
        else
            result = *arg4
            int64_t result_1 = arg6
            
            if (result u<= arg6)
                result_1 = result
            
            if (result_1 << arg7.b s>= 0)
                result.b = 1
            else
                int64_t rax_12 = *arg9
                var_38 = rax_12
                
                if (arg7 != arg8)
                    if (rax_12 != 0)
                        int64_t var_30_5 = arg9[1]
                    
                    uint64_t r8_3 = r13_4
                    
                    if (arg3 u>= r13_4)
                        r8_3 = arg3
                    
                    result = sub_141cf5b80(zx.q(r15_1[2]), arg2, r8_3, arg4, r13_4, arg6, arg7 + 1, 
                        arg8, &var_38)
                else
                    if (rax_12 != 0)
                        int64_t var_30_4 = arg9[1]
                    
                    result = sub_141cf6540(r15_1[2], arg2, arg3, arg4, &var_38)
                
                if (result.b != 0)
                    result.b = 1
                else
                    result.b = 0
    else
        int64_t rax_6 = *arg9
        var_38 = rax_6
        
        if (arg7 != arg8)
            if (rax_6 != 0)
                int64_t var_30_2 = arg9[1]
            
            int64_t* var_48_1 = &var_38
            int32_t var_50_1 = arg8
            int32_t var_58_1 = arg7 + 1
            int64_t var_60_1 = r13_4 - 1
            int64_t var_68_2 = arg5
            
            if (sub_141cf5b80(zx.q(*r15_1), arg2, arg3).b != 0)
                goto label_141cf5c8f
            
            result.b = 0
        else
            if (rax_6 != 0)
                int64_t var_30_1 = arg9[1]
            
            result = sub_141cf6540(*r15_1, arg2, arg3, arg4, &var_38)
            
            if (result.b != 0)
                goto label_141cf5c8f

return result
