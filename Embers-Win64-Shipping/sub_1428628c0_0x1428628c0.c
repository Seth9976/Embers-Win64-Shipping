// 函数: sub_1428628c0
// 地址: 0x1428628c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1e8)
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t var_1a8
__builtin_strncpy(&var_1a8, "tls13 ", 7)
int64_t* result = sub_1428bcf50(0x40c, nullptr)

if (result != 0)
    int32_t rax_2 = sub_1428916c0(arg2)
    void var_1d8
    void var_198
    
    if (sub_142873900(&var_1d8, &var_198, 0x140, 0) == 0)
    label_142862b69:
        sub_1428bcda0(result)
        sub_142873690(&var_1d8)
        sub_142856580(arg1, 0x50, 0x231, 0x44, "ssl\tls13_enc.c", 0x3f)
        result = nullptr
    else
        int32_t arg_48
        
        if (sub_142873b60(&var_1d8, arg_48, 2) == 0)
            goto label_142862b69
        
        int32_t result_1 = 1
        
        if (sub_142873e80(&var_1d8, 1) == 0)
            goto label_142862b69
        
        if (sub_142873970(&var_1d8, &var_1a8, 6) == 0)
            goto label_142862b69
        
        if (sub_142873970(&var_1d8, arg4, arg5) == 0)
            goto label_142862b69
        
        if (sub_1428736e0(&var_1d8) == 0)
            goto label_142862b69
        
        int64_t r8_1 = arg7
        
        if (arg6 == 0)
            r8_1 = 0
        
        if (sub_142874080(&var_1d8, arg6, r8_1, 1) == 0)
            goto label_142862b69
        
        int32_t var_1e0
        
        if (sub_142873850(&var_1d8, &var_1e0) == 0)
            goto label_142862b69
        
        if (sub_142873790(&var_1d8) == 0)
            goto label_142862b69
        
        int32_t rsi_1
        
        if (sub_1428bd580(result) s<= 0)
            rsi_1 = 1
            result_1 = 0
        else
            int32_t var_1f0
            var_1f0.q = 0
            
            if (sub_1428bcb30(result, 0xffffffff, 0x400, 0x1007, 2, var_1f0) s<= 0)
                rsi_1 = 1
                result_1 = 0
            else
                var_1f0.q = arg2
                
                if (sub_1428bcb30(result, 0xffffffff, 0x400, 0x1003, 0, var_1f0) s<= 0)
                    rsi_1 = 1
                    result_1 = 0
                else
                    var_1f0.q = arg3
                    
                    if (sub_1428bcb30(result, 0xffffffff, 0x400, 0x1005, rax_2, var_1f0) s<= 0)
                        rsi_1 = 1
                        result_1 = 0
                    else
                        var_1f0.q = &var_198
                        
                        if (sub_1428bcb30(result, 0xffffffff, 0x400, 0x1006, var_1e0, var_1f0)
                                s<= 0)
                            rsi_1 = 1
                            result_1 = 0
                        else if (sub_1428bd400(result, arg8, &arg_48) s<= 0)
                            rsi_1 = 1
                            result_1 = 0
                        else
                            rsi_1 = 0
        
        sub_1428bcda0(result)
        
        if (rsi_1 != 0)
            sub_142856580(arg1, 0x50, 0x231, 0x44, "ssl\tls13_enc.c", 0x4f)
        
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_218)
return result
