// 函数: sub_142b4f760
// 地址: 0x142b4f760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* var_a8 = arg4
int32_t* result

if (*arg4 s<= 0)
    int32_t* r13_1 = nullptr
    int32_t* rdi_1 = nullptr
    int32_t* r12_1 = nullptr
    result = *arg3
    
    if (result != 0)
        int32_t rsi_1 = 1
        
        if (*(arg3 + 0xe) != 0)
            rsi_1 = result[2]
        
        int32_t var_b8_1 = rsi_1
        int32_t rbp_1 = 0
        
        if (rsi_1 s> 0)
            do
                int32_t* rbx_1 = r12_1
                int32_t* r11_1
                
                if (*(arg3 + 0xe) != 0)
                    r11_1 = sub_142ae72d0(*arg3, rbp_1)
                else
                    r11_1 = *arg3
                
                if (r11_1 != 0 && (r11_1[2] & *(arg1 + 8)) != 0)
                    int64_t* r9 = *(r11_1 + 0x10)
                    
                    if (r9 != 0)
                        int32_t r10_1 = 0
                        int32_t rbx_2 = r11_1[6]
                        
                        if (rbx_2 s> 0)
                            int32_t* result_1 = *(arg1 + 0x18)
                            
                            while (true)
                                result = result_1
                                uint32_t i
                                uint32_t rdx_1
                                
                                do
                                    rdx_1 = zx.d(*result)
                                    i = zx.d(*(result + *r9 - result_1))
                                    
                                    if (rdx_1 != i)
                                        break
                                    
                                    result += 1
                                while (i != 0)
                                
                                if (rdx_1 - i == 0)
                                    rdi_1 = r11_1
                                    goto label_142b4f88c
                                
                                r10_1 += 1
                                r9 = &r9[1]
                                
                                if (r10_1 s>= rbx_2)
                                    rsi_1 = var_b8_1
                                    break
                        
                        if (rdi_1 == 0)
                            rdi_1 = r11_1
                    else
                        if (r12_1 == 0)
                            r12_1 = r11_1
                        
                        if (rbx_1 != 0)
                            r11_1 = rdi_1
                        
                        rdi_1 = r11_1
                
                rbp_1 += 1
            while (rbp_1 s< rsi_1)
            
        label_142b4f88c:
            
            if (rdi_1 != 0)
                int32_t rbx_3 = rdi_1[2]
                
                if (rdi_1[3].b != 0 && ((rbx_3 - 0x10) & 0xffffffef) == 0)
                    result.b = *(arg1 + 8) & 0x30
                    
                    if (result.b == 0x30)
                        rbx_3 = 8
                
                if (*(arg1 + 0x10) == 0)
                    result = j_sub_142a7dd00(0x10)
                    var_b8_1.q = result
                    
                    if (result != 0)
                        r13_1 = sub_142ac5de0(result)
                    
                    *(arg1 + 0x10) = r13_1
                
                if (*(arg1 + 0x10) == 0 && r13_1 == 0)
                    *var_a8 = 7
                else if (*var_a8 s<= 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
                        sub_142a47f60(&var_98, *rdi_1, 0xffffffff)
                    sub_142ac6210(*(arg1 + 0x10), rbx_3, arg2, rax_2, var_a8)
                    sub_142a47ff0(&var_98)
                    
                    if (*var_a8 s<= 0 && arg2 s> *(arg1 + 0xc))
                        *(arg1 + 0xc) = arg2
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
