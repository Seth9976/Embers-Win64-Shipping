// 函数: sub_142a50e20
// 地址: 0x142a50e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
uint64_t result

if (arg6 == 0 || *arg6 s> 0)
    result = 0
else if (arg5 s< 0 || (arg5 s> 0 && arg4 == 0))
    *arg6 = 1
    result = 0
else
    char var_2c8[0x280]
    var_2c8[0] = 0
    int32_t result_4 = sub_142a4d040(arg1, arg2, &var_2c8, 0x274, arg6)
    int32_t result_2 = result_4
    
    if (*arg6 == 0xffffff84)
        *arg6 = 0xf
    
    int32_t result_6 = sub_142a862b0(arg2, "currency", result_4)
    
    if (result_6 != 0)
        result = sub_142a50370("icudt64l-lang", arg3, "Types", arg2, &var_2c8, &var_2c8, arg4, 
            arg5, arg6)
    else
        int32_t result_3 = result_6
        char** rax_2 = sub_142a641c0("icudt64l-curr", arg3, arg6)
        char** rax_3 = sub_142a625a0(rax_2, "Currencies", nullptr, arg6)
        char** rax_4 = sub_142a62230(rax_3, &var_2c8, nullptr, arg6)
        void* rax_5 = sub_142a63b20(rax_4, 1, &result_3, arg6)
        int32_t rcx_4 = *arg6
        
        if (rcx_4 s<= 0)
            goto label_142a50f46
        
        if (rcx_4 != 2)
            if (rax_4 != 0)
                sub_142a5f860(rax_4)
            
            if (rax_3 != 0)
                sub_142a5f860(rax_3)
            
            if (rax_2 != 0)
                sub_142a5f860(rax_2)
            
            result = 0
        else
            *arg6 = 0xffffff81
        label_142a50f46:
            int32_t result_5
            
            if (rax_5 != 0)
                result_2 = result_3
                
                if (result_2 s> arg5)
                    goto label_142a50fee
                
                sub_142a8bca0(arg4, rax_5, result_2)
                result_5 = result_3
                goto label_142a50fbc
            
            if (result_2 s> arg5)
            label_142a50fee:
                *arg6 = 0xf
                
                if (rax_4 != 0)
                    sub_142a5f860(rax_4)
                
                if (rax_3 != 0)
                    sub_142a5f860(rax_3)
                
                if (rax_2 != 0)
                    sub_142a5f860(rax_2)
                
                result = zx.q(result_2)
            else
                sub_142a8d750(&var_2c8, arg4, result_2)
                result_5 = result_2
            label_142a50fbc:
                int32_t result_1 = sub_142a8c440(arg4, arg5, result_5, arg6)
                
                if (rax_4 != 0)
                    sub_142a5f860(rax_4)
                
                if (rax_3 != 0)
                    sub_142a5f860(rax_3)
                
                if (rax_2 != 0)
                    sub_142a5f860(rax_2)
                
                result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_328)
return result
