// 函数: sub_142a50240
// 地址: 0x142a50240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
uint64_t result

if (arg7 == 0 || *arg7 s> 0)
    result = 0
else
    int32_t var_2c8
    int32_t rax_2
    int32_t rcx
    
    if (arg4 s>= 0 && (arg4 s<= 0 || arg3 != 0))
        int32_t var_2d8 = 0
        rax_2 = arg5(arg1, &var_2c8, 0x274, &var_2d8)
        rcx = var_2d8
    
    if (arg4 s< 0 || (arg4 s> 0 && arg3 == 0) || rcx s> 0 || rcx == 0xffffff84)
        *arg7 = 1
        result = 0
    else
        if (rax_2 != 0)
            goto label_142a50307
        
        if (arg5 != sub_142a4d500)
            result = sub_142a8c440(arg3, arg4, 0, arg7)
        else
            var_2c8 = 0x646e75
        label_142a50307:
            char** rcx_1 = "icudt64l-lang"
            
            if (arg6 == "Countries")
                rcx_1 = "icudt64l-region"
            
            result = sub_142a50370(rcx_1, arg2, arg6, nullptr, &var_2c8, &var_2c8, arg3, arg4, arg7)

__security_check_cookie(rax_1 ^ &var_328)
return result
