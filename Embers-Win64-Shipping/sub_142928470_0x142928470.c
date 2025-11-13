// 函数: sub_142928470
// 地址: 0x142928470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x470)
void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int32_t* rsi = *arg5
int64_t var_458 = arg3
int64_t result

if (rsi != 0)
label_142928750:
    *arg6 = 1
    result = sub_142898e20(rsi)
else
    int32_t r12_1 = 0
    
    if (arg1 != 0)
        result = 0
    else
        void* rax_2 = sub_142968c40(arg1, &var_458, arg4)
        
        if (rax_2 != 0)
            *arg6 = 1
            char* const rdi_1 = &data_1437020ab
            void* var_468 = nullptr
            int64_t var_460 = 0
            int32_t* var_478 = nullptr
            
            if (sub_142968720(rax_2, &data_1437020ab, 0) != 0)
            label_142928604:
                
                if (sub_142968c60(rax_2, rdi_1, &var_468, &var_460, &var_478) != 0)
                    int32_t* rbp_1 = nullptr
                    int32_t* r14_1 = nullptr
                    int32_t* rdi_2 = nullptr
                    int32_t* rax_8 = sub_142898ba0()
                    rsi = rax_8
                    
                    if (rax_8 == 0)
                    label_1429286db:
                        sub_1429691b0(rdi_2)
                        sub_1429691b0(r14_1)
                        sub_1429691b0(rbp_1)
                        sub_142898cb0(rsi, sub_1429691b0)
                        sub_1428965a0(var_468)
                        sub_1428a2c50(var_460)
                        sub_142898cb0(var_478, sub_1428a2c50)
                        rsi = nullptr
                        r12_1 = 0
                    else
                        int32_t* rax_9 = sub_142969440(var_468)
                        rbp_1 = rax_9
                        
                        if (rax_9 == 0)
                            goto label_1429286db
                        
                        if (sub_142898d50(rsi, rax_9) == 0)
                            goto label_1429286db
                        
                        int32_t* rax_11 = sub_142969280(var_460)
                        r14_1 = rax_11
                        
                        if (rax_11 == 0)
                            goto label_1429286db
                        
                        if (sub_142898d50(rsi, rax_11) == 0)
                            goto label_1429286db
                        
                        r12_1 = 1
                        rbp_1 = nullptr
                        r14_1 = nullptr
                        
                        if (sub_142898c70(var_478) s> 0)
                            int32_t i
                            
                            do
                                int32_t* rax_15 = sub_142969280(sub_142898ea0(var_478, 0))
                                rdi_2 = rax_15
                                
                                if (rax_15 == 0)
                                    goto label_1429286db
                                
                                if (sub_142898d50(rsi, rax_15) == 0)
                                    goto label_1429286db
                                
                                sub_142898e20(var_478)
                                i = sub_142898c70(var_478)
                            while (i s> 0)
                    
                    *arg5 = rsi
            else
                if (sub_142968720(rax_2, nullptr, 0) != 0)
                    goto label_142928604
                
                void var_448
                char* rax_5 = sub_142929d20(arg7, &var_448, 0x400, "PKCS12 import password", arg8)
                rdi_1 = rax_5
                int64_t var_488_1
                
                if (rax_5 != 0)
                    int32_t i_1 = 0
                    
                    if (*rax_5 != 0)
                        while (i_1 u< 0x80000000)
                            rax_5 = &rax_5[1]
                            i_1 += 1
                            
                            if (*rax_5 == 0)
                                break
                    
                    int32_t rax_6 = sub_142968720(rax_2, rdi_1, i_1 & 0x7fffffff)
                    
                    if (rax_6 != 0)
                        goto label_142928604
                    
                    var_488_1.d = 0xed
                    sub_1428a5670(rax_6 + 0x2c, rax_6 + 0x7a, rax_6 + 0x71, 
                        "crypto\store\loader_file.c", var_488_1.d)
                else
                    var_488_1.d = 0xe8
                    sub_1428a5670(0x2c, 0x7a, 0x72, "crypto\store\loader_file.c", var_488_1.d)
        
        sub_142968c20(rax_2)
        
        if (r12_1 == 0)
            result = 0
        else
            if (rsi != 0)
                goto label_142928750
            
            result = 0

__security_check_cookie(rax_1 ^ &var_4a8)
return result
