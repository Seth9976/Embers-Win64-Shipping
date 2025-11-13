// 函数: sub_14296bd40
// 地址: 0x14296bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rdi = *(arg1 + 0x18)
int64_t* rsi = *(arg1 + 8)
int64_t rbp = 0
void* r13 = nullptr
int32_t var_4c = 0
int64_t r14 = 0
int32_t r12 = 0
int32_t rax_2
rax_2.b = rdi != 0
int64_t* result_1 = sub_14289a500(&data_14354acb0)
int64_t* result

if (result_1 != 0)
    int64_t* var_58
    sub_142899cf0(result_1, 0x81, 0, &var_58)
    int32_t* rax_3
    
    if (rdi != 0)
        rax_3 = *(arg1 + 0x18)
        
        if (*(arg1 + 0x20) != 0)
            *(arg1 + 0x18) = 0
        
        goto label_14296be10
    
    rax_3 = sub_14289b930(sub_1428a9620(sub_1428a96d0(*rsi)))
    
    if (rax_3 != 0)
    label_14296be10:
        int32_t var_68
        var_68.q = 0
        
        if (sub_142892480(var_58, rax_3, nullptr, 0, var_68, rax_2) s> 0)
            int64_t* rcx_7 = var_58
            
            if (rdi == 0)
                if (sub_142890f40(rcx_7, rsi[1]) s> 0)
                    goto label_14296bed8
                
                sub_1428a5670(0x2e, 0x78, 0x66, "crypto\cms\cms_enc.c", 0x51)
                sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 0x9b)
                *(arg1 + 0x20) = 0
            else
                *rsi = sub_1428a9570(sub_1428912b0(sub_140687ad0(rcx_7)))
                int32_t rax_10 = sub_142890ed0(var_58)
                
                if (rax_10 s<= 0)
                    goto label_14296bed8
                
                void var_48
                
                if (sub_142897af0(&var_48, zx.q(rax_10)) s<= 0)
                    sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 0x9b)
                    *(arg1 + 0x20) = 0
                else
                    r13 = &var_48
                label_14296bed8:
                    r14 = sx.q(sub_142890ee0(var_58))
                    
                    if (rdi == 0 || *(arg1 + 0x20) == 0)
                        int64_t rax_13 = sub_1428a6730(r14)
                        rbp = rax_13
                        
                        if (rax_13 != 0)
                            if (sub_142892230(var_58, rax_13) s> 0)
                                goto label_14296bf75
                            
                            sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 
                                0x9b)
                            *(arg1 + 0x20) = 0
                        else
                            sub_1428a5670((rax_13 + 0x2e).d, (rax_13 + 0x78).d, (rax_13 + 0x41).d, 
                                "crypto\cms\cms_enc.c", 0x59)
                            sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 
                                0x9b)
                            *(arg1 + 0x20) = 0
                    else
                    label_14296bf75:
                        
                        if (*(arg1 + 0x20) == 0)
                            *(arg1 + 0x20) = rbp
                            rbp = 0
                            *(arg1 + 0x28) = r14
                            
                            if (rdi == 0)
                                sub_1428a49e0()
                            else
                                var_4c = 1
                        
                        int64_t rax_16 = *(arg1 + 0x28)
                        
                        if (rax_16 == r14)
                            goto label_14296bff6
                        
                        if (sub_142892370(var_58, rax_16.d) s> 0)
                            goto label_14296bff6
                        
                        if (rdi != 0 || *(arg1 + 0x30) != 0)
                            sub_1428a5670(0x2e, 0x78, 0x76, "crypto\cms\cms_enc.c", 0x74)
                        else
                            sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 
                                (rdi + 0x78).d)
                            *(arg1 + 0x20) = rbp
                            rbp = 0
                            *(arg1 + 0x28) = r14
                            sub_1428a49e0()
                        label_14296bff6:
                            var_68.q = r13
                            
                            if (sub_142892480(var_58, nullptr, nullptr, *(arg1 + 0x20), var_68, 
                                    rax_2) s<= 0)
                                sub_1428a5670(0x2e, 0x78, 0x65, "crypto\cms\cms_enc.c", 0x83)
                            else if (rdi == 0)
                                r12 = 1
                            else
                                int32_t* rax_20 = sub_1428c3640()
                                rsi[1] = rax_20
                                
                                if (rax_20 != 0)
                                    if (sub_142891110(var_58, rax_20) s> 0)
                                        int32_t* rcx_21 = rsi[1]
                                        
                                        if (*rcx_21 == 0xffffffff)
                                            sub_1428c3620(rcx_21)
                                            rsi[1] = 0
                                        
                                        r12 = 1
                                    else
                                        sub_1428a5670(0x2e, 0x78, 0x66, "crypto\cms\cms_enc.c", 
                                            0x8e)
                                else
                                    sub_1428a5670((rax_20 + 0x2e).d, (&rax_20[0x1e]).d, 
                                        (rax_20 + 0x41).d, "crypto\cms\cms_enc.c", 0x89)
                        
                        if (var_4c == 0 || r12 == 0)
                            sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 
                                0x9b)
                            *(arg1 + 0x20) = 0
        else
            sub_1428a5670(0x2e, 0x78, 0x65, "crypto\cms\cms_enc.c", 0x41)
            sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 0x9b)
            *(arg1 + 0x20) = 0
    else
        int32_t rdx_2 = (&rax_3[0x1e]).d
        sub_1428a5670((rax_3 + 0x2e).d, rdx_2, rdx_2 + 0x1c, "crypto\cms\cms_enc.c", 0x3a)
        sub_1428a6890(*(arg1 + 0x20), *(arg1 + 0x28), "crypto\cms\cms_enc.c", 0x9b)
        *(arg1 + 0x20) = 0
    
    sub_1428a6890(rbp, r14, "crypto\cms\cms_enc.c", 0x9e)
    
    if (r12 == 0)
        sub_142899e70(result_1)
        result = nullptr
    else
        result = result_1
else
    sub_1428a5670(0x2e, 0x78, 0x41, "crypto\cms\cms_enc.c", 0x29)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_88)
return result
