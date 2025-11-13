// 函数: sub_142b10d10
// 地址: 0x142b10d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_108
int32_t* result = __security_cookie ^ &var_108
int32_t* result_1 = result

if (*arg3 s<= 0 && (arg1[0xc] == 0 || *(arg1 + 0x6c) s<= 0))
    if (*(arg1 + 0x6c) != 0)
        goto label_142b10eb7
    
    int32_t rdx = *(arg1 + 0x5c)
    
    if (rdx == 0)
        *arg3 = 8
    else if ((arg1[3].b & 1) == 0)
        int32_t* var_d8_1 = arg3
        result = sub_142a94ab0(arg1[0xa], rdx, 8, sub_142b11c10, (&arg1[2]).b, 0)
        
        if (*arg3 s<= 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            sub_142b114e0(arg1[0xa], &var_78, &arg1[2])
            int32_t rdi_1 = 1
            
            if (*(arg1 + 0x5c) s<= 1)
            label_142b10eb0:
                sub_142a47ff0(&var_78)
            label_142b10eb7:
                *(arg1 + 0x6c) = 0
                int16_t rax_7 = arg1[3].w
                int32_t rdi_3
                
                if (rax_7 s< 0)
                    rdi_3 = *(arg1 + 0x1c)
                else
                    rdi_3 = sx.d(rax_7) s>> 5
                
                if (rdi_3 s< 0x400)
                    rdi_3 = 0x400
                
                if (arg1[0xd].d s>= rdi_3)
                    goto label_142b10f15
                
                sub_142a7dcd0(arg1[0xc])
                result = sub_142a7dd00(sx.q(rdi_3 * 2))
                arg1[0xc] = result
                
                if (result != 0)
                    arg1[0xd].d = rdi_3
                label_142b10f15:
                    result = sub_142b70760(arg1, arg2, *(arg1 + 0x5c), arg3)
                    
                    if (arg1[0xc] == 0)
                        *arg3 = 7
                else
                    *arg3 = 7
                    arg1[0xd].d = 0
            else
                while (true)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
                    sub_142b114e0(arg1[0xa] + (sx.q(rdi_1) << 3), &var_b8, &arg1[2])
                    int16_t var_70
                    char var_b0
                    bool cond:0_1
                    
                    if ((var_70.b & 1) == 0)
                        int32_t r8_3
                        int32_t var_6c
                        
                        if (var_70 s< 0)
                            r8_3 = var_6c
                        else
                            r8_3 = sx.d(var_70) s>> 5
                        int16_t rcx_4 = var_b0.w
                        int32_t rax_5
                        int32_t var_ac
                        
                        if (rcx_4 s< 0)
                            rax_5 = var_ac
                        else
                            rax_5 = sx.d(rcx_4) s>> 5
                        
                        if ((rcx_4.b & 1) == 0 && r8_3 == rax_5)
                            cond:0_1 = sub_142a490e0(&var_78, &var_b8, r8_3) != 0
                            goto label_142b10e5a
                    else
                        cond:0_1 = (var_b0 & 1) != 0
                    label_142b10e5a:
                        
                        if (cond:0_1)
                            *arg3 = 1
                            sub_142a47ff0(&var_b8)
                            result = sub_142a47ff0(&var_78)
                            break
                    sub_142a49d00(&var_78, &var_b8)
                    sub_142a47ff0(&var_b8)
                    rdi_1 += 1
                    
                    if (rdi_1 s>= *(arg1 + 0x5c))
                        goto label_142b10eb0
    else
        *arg3 = 7

__security_check_cookie(result_1 ^ &var_108)
return result
