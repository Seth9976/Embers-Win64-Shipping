// 函数: sub_142a29db0
// 地址: 0x142a29db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rbx = 0
int64_t rsi = sx.q(arg6)
int64_t r9 = **(arg2 + 0x1a8)
int32_t var_48
int32_t result = sub_142a29fa0(arg1, arg2, arg4, *(rsi + r9 + 8), arg3, &var_48, arg7, arg8, arg5, 
    1, 0, 0, var_48)

if (arg5 == 0)
    result = (&var_48)[sx.q(result - 1)]
    *arg9 = result
else if (arg5 s> 0)
    if (arg5 s<= 2)
        if (arg4 != 0xa)
            *arg9 = 0
            
            if (result s> 0)
                int64_t result_1 = sx.q(result)
                
                while (true)
                    result = (&var_48)[rbx]
                    
                    if (*(r9 + 0x14 + (rsi << 2) + 4) != result)
                        break
                    
                    rbx += 1
                    
                    if (rbx s>= result_1)
                        goto label_142a29ef5
                
                *arg9 = result
        else
            result = *(r9 + 0x14 + (rsi << 2) + 4)
            *arg9 = result
    else if (arg5 == 3)
        if (arg4 != 0xa)
            int32_t var_40 = *(r9 + 0x14 + (rsi << 2) + 0x10)
            int32_t var_3c_1 = *(r9 + 0x14 + (rsi << 2) + 4)
            int32_t var_38_1 = var_48
            *arg9 = 0
            int32_t var_44
            int32_t var_34_1 = var_44
            
            while (true)
                result = (&var_40)[rbx]
                
                if (*(r9 + 0x14 + (rsi << 2) + 0x1c) != result)
                    break
                
                rbx += 1
                
                if (rbx s>= 4)
                    goto label_142a29ef5
        else
            result = *(r9 + 0x14 + (rsi << 2) + 0x1c)
        
        *arg9 = result

label_142a29ef5:
__security_check_cookie(rax_1 ^ &var_a8)
return result
