// 函数: sub_142828058
// 地址: 0x142828058
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int32_t* result = __security_cookie ^ &var_b8
int32_t* result_1 = result

if (*(arg1 + 0x81) == 0)
    if (arg1[0x10].b != 0)
        sub_142828360(arg1)
        sub_142827d0c(arg1)
        
        if (sub_14282a90c(arg1) == 0)
            result = sub_142827814(arg1)
        else
            int64_t var_98
            
            if (arg1[2].d != 0)
            label_142828147:
                char rax_5 = sub_14282b034(arg1)
                char rax_6
                
                if (rax_5 != 0x5b)
                    rax_6 = sub_14282b034(arg1)
                
                if (rax_5 == 0x5b || rax_6 == 0x7b)
                    result = sub_14282d19c(arg1)
                else
                    char rax_7 = sub_14282b034(arg1)
                    char rax_8
                    
                    if (rax_7 != 0x5d)
                        rax_8 = sub_14282b034(arg1)
                    
                    if (rax_7 == 0x5d || rax_8 == 0x7d)
                        result = sub_14282cc28(arg1)
                    else if (sub_14282b034(arg1) != 0x2c)
                        sub_142827318()
                        var_98 = 0
                        int64_t* var_90_3 = arg1
                        
                        if (sub_14282694c(&data_143f898c0, &var_98) s< 0)
                            int32_t* rax_11
                            
                            if (arg1[0x22] != 0)
                                rax_11 = sub_142827a30()
                            else
                                rax_11 = sub_14282796c()
                            
                            var_98 = 0
                            int64_t* var_90_4 = arg1
                            
                            if (sub_14282694c(rax_11, &var_98) s< 0)
                                int32_t* rax_13 = sub_14282793c(arg1)
                                var_98 = 0
                                int64_t* var_90_5 = arg1
                                
                                if (sub_14282694c(rax_13, &var_98) s< 0)
                                    char rax_15 = sub_14282b034(arg1)
                                    char rax_16
                                    
                                    if (rax_15 != 0x2a)
                                        rax_16 = sub_14282b034(arg1)
                                    
                                    if (rax_15 == 0x2a || rax_16 == 0x26)
                                        result = sub_14282bdf8(arg1)
                                    else if (sub_14282b034(arg1) != 0x21)
                                        char rax_18
                                        char rax_19
                                        
                                        if (arg1[0x22] == 0)
                                            rax_18 = sub_14282b034(arg1)
                                            
                                            if (rax_18 != 0x7c)
                                                rax_19 = sub_14282b034(arg1)
                                        
                                        if (arg1[0x22] != 0 || (rax_18 != 0x7c && rax_19 != 0x3e))
                                            char rax_20 = sub_14282b034(arg1)
                                            char rax_21
                                            
                                            if (rax_20 != 0x27)
                                                rax_21 = sub_14282b034(arg1)
                                            
                                            if (rax_20 == 0x27 || rax_21 == 0x22)
                                                result = sub_14282d6a8(arg1)
                                            else
                                                int32_t* rax_22
                                                
                                                if (arg1[0x22] != 0)
                                                    rax_22 = sub_1428214e0()
                                                else
                                                    rax_22 = sub_142821188()
                                                
                                                var_98 = 0
                                                int64_t* var_90_6 = arg1
                                                
                                                if (sub_14282694c(rax_22, &var_98) s< 0)
                                                    void var_88
                                                    sub_14058a5c0(&var_88, "unknown token")
                                                    struct std::exception::VTable* exceptionObject
                                                    sub_1428244f0(&exceptionObject, 
                                                        sub_1427bde30(arg1, &var_98), &var_88)
                                                    _CxxThrowException(&exceptionObject, 
                                                        &data_143946450)
                                                    noreturn
                                                
                                                result = sub_14282d434(arg1)
                                        else
                                            result = sub_14282c288(arg1)
                                    else
                                        result = sub_14282dcf8(arg1)
                                else
                                    result = sub_14282df14(arg1)
                            else
                                result = sub_14282d2c8(arg1)
                        else
                            result = sub_14282c0e0(arg1)
                    else
                        result = sub_14282cf58(arg1)
            else if (sub_14282b034(arg1) != 0x25)
                if (arg1[2].d != 0)
                    goto label_142828147
                
                sub_142827648()
                var_98 = 0
                int64_t* var_90_1 = arg1
                
                if (sub_14282694c(&data_143f89870, &var_98) s< 0)
                    if (arg1[2].d != 0)
                        goto label_142828147
                    
                    sub_14282747c()
                    var_98 = 0
                    int64_t* var_90_2 = arg1
                    
                    if (sub_14282694c(&data_143f89898, &var_98) s< 0)
                        goto label_142828147
                    
                    result = sub_14282ca10(arg1)
                else
                    result = sub_14282cb1c(arg1)
            else
                result = sub_14282c6d4(arg1)
    else
        result = sub_1428284e0(arg1)

__security_check_cookie(result_1 ^ &var_b8)
return result
