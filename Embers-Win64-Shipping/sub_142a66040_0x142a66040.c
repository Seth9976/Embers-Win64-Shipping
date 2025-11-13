// 函数: sub_142a66040
// 地址: 0x142a66040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_142aa75d0(0x12, sub_142a66a90)
char** rax_2 = sub_142a64160(nullptr, "zoneinfo64", arg2)
char** rax_3 = sub_142a625a0(rax_2, "Names", rax_2, arg2)

if (*arg2 s<= 0)
    int64_t r12_1 = sx.q(sub_142a63b10(rax_3))
    int32_t* rax_5 = sub_142a7dd00(r12_1 << 2)
    int32_t* r15_1 = rax_5
    
    if (rax_5 != 0)
        int32_t r14_1 = 0
        int32_t rdi_1 = 0
        
        if (r12_1.d s> 0)
            while (true)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
                sub_142a66a00(&var_b8, rax_3, rdi_1, arg2)
                
                if (*arg2 s<= 0)
                    int16_t var_b0
                    int32_t var_ac
                    int32_t r8_4
                    
                    if (var_b0 s< 0)
                        r8_4 = var_ac
                    else
                        r8_4 = sx.d(var_b0) s>> 5
                    
                    if (sub_142a48fb0(&var_b8, 0, r8_4, u"Etc/Unknown", 0, 0xb) == 0)
                        goto label_142a6623d
                    
                    if (arg1 - 1 u> 1)
                    label_142a6622f:
                        *r15_1 = rdi_1
                        r14_1 += 1
                        r15_1 = &r15_1[1]
                    label_142a6623d:
                        sub_142a47ff0(&var_b8)
                        rdi_1 += 1
                        
                        if (rdi_1 s>= r12_1.d)
                            break
                        
                        continue
                    else
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_70_1 = 2
                        sub_142acf920(&var_b8, &var_78, arg2)
                        
                        if (*arg2 s> 0)
                            sub_142a47ff0(&var_78)
                        else
                            if ((var_70_1.b & 1) == 0)
                                int32_t r8_7
                                int32_t var_6c
                                
                                if (var_70_1 s< 0)
                                    r8_7 = var_6c
                                else
                                    r8_7 = sx.d(var_70_1) s>> 5
                                int32_t rax_12
                                
                                if (var_b0 s< 0)
                                    rax_12 = var_ac
                                else
                                    rax_12 = sx.d(var_b0) s>> 5
                                
                                if ((var_b0.b & 1) != 0 || r8_7 != rax_12)
                                    sub_142a47ff0(&var_78)
                                    goto label_142a6623d
                                
                                if (sub_142a490e0(&var_78, &var_b8, r8_7) == 0)
                                    sub_142a47ff0(&var_78)
                                    goto label_142a6623d
                            else if ((var_b0.b & 1) == 0)
                                sub_142a47ff0(&var_78)
                                goto label_142a6623d
                            
                            sub_142a47ff0(&var_78)
                            
                            if (arg1 != 2)
                                goto label_142a6622f
                            
                            void* rax_14 = sub_142a65e00(&var_b8, arg2)
                            
                            if (*arg2 s<= 0)
                                if (sub_142a8c280(rax_14, &data_14363e008) != 0)
                                    goto label_142a6622f
                                
                                goto label_142a6623d
                
                sub_142a47ff0(&var_b8)
                break
            
            r15_1 = rax_5
        
        if (*arg2 s<= 0)
            int32_t* rax_16 = sub_142a7dd30(r15_1, sx.q(r14_1) << 2)
            
            if (rax_16 == 0)
                rax_16 = r15_1
            
            if (arg1 == 0)
                data_144015860 = rax_16
                data_144015878 = r14_1
            else if (arg1 == 1)
                data_144015868 = rax_16
                data_14401587c = r14_1
            else if (arg1 == 2)
                data_144015870 = rax_16
                data_144015880 = r14_1
    else
        *arg2 = 7

int64_t result = sub_142a5f860(rax_3)
__security_check_cookie(rax_1 ^ &var_108)
return result
