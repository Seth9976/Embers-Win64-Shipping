// 函数: sub_14290c280
// 地址: 0x14290c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t* rax = sub_14293bfc0(arg1)

if (rax != 0)
    if (sub_142891590(rax) != 0)
    label_14290c47e:
        int32_t rax_14 = sub_14290c8d0(rax, arg1)
        
        if (rax_14 != 0)
            return 1
        
        sub_1428a5670(rax_14 + 0x10, 0xee, 0x96, "crypto\ec\ec_ameth.c", 0x31b)
    else
        int32_t rbx_1 = 0
        char* var_58
        int64_t* arg_20
        
        if (sub_14293c470(arg1, &arg_20, &var_58, nullptr, nullptr, nullptr) != 0)
            int64_t* r9_1 = arg_20
            
            if (r9_1 != 0)
                char* rbp_1 = var_58
                
                if (rbp_1 != 0)
                    int64_t* arg_18 = nullptr
                    int32_t* rsi_1 = nullptr
                    void* var_50
                    int32_t* var_48
                    int32_t arg_10
                    sub_1428daf50(&var_50, &arg_10, &var_48, r9_1)
                    int64_t* rax_4
                    
                    if (sub_1428a96d0(var_50) != 0x198)
                        rax_4 = arg_18
                    else
                        int32_t rcx_4 = arg_10
                        
                        if (rcx_4 == 0xffffffff || rcx_4 == 5)
                            void* rax_5 = sub_14060aa60(rax)
                            
                            if (rax_5 == 0)
                                rax_4 = arg_18
                            else
                                int64_t* rax_6 = sub_142891590(*(rax_5 + 0x28))
                                rax_4 = sub_1428c0d20()
                                arg_18 = rax_4
                                
                                if (rax_4 != 0)
                                    if (sub_1428c1040(rax_4, rax_6) != 0)
                                        goto label_14290c3bd
                                    
                                    rax_4 = arg_18
                        else
                            rax_4 = sub_14290ccd0(rcx_4, var_48)
                            arg_18 = rax_4
                            
                            if (rax_4 != 0)
                            label_14290c3bd:
                                int32_t rax_8 = sub_1406938b0(rbp_1)
                                int64_t rax_9 = sub_14060aa50(rbp_1)
                                int64_t var_40 = rax_9
                                
                                if (rax_9 != 0 && rax_8 != 0
                                        && sub_1428f0570(&arg_18, &var_40, rax_8) != 0)
                                    int32_t* rax_11 = sub_1428968f0()
                                    rsi_1 = rax_11
                                    
                                    if (rax_11 != 0)
                                        sub_142896bf0(rax_11, arg_18)
                                        
                                        if (sub_1428bd610(rax, rsi_1) s> 0)
                                            rbx_1 = 1
                                
                                rax_4 = arg_18
                    
                    sub_1428c0b90(rax_4)
                    sub_1428965a0(rsi_1)
                    
                    if (rbx_1 != 0)
                        goto label_14290c47e
                    
                    sub_1428a5670(rbx_1 + 0x10, 0xee, 0x95, "crypto\ec\ec_ameth.c", 0x315)

return 0
