// 函数: sub_142ae39b0
// 地址: 0x142ae39b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* rbx = arg1
char* var_138 = arg2
int32_t var_130 = 0
void var_f0
char i = (*(*arg3 + 0x50))(arg3, &var_f0, arg4)

if (*arg4 s<= 0)
    int32_t r12_1 = 0
    
    for (i = sub_142ac2da0(&var_f0, 0, &var_138, arg3); i != 0; 
            i = sub_142ac2da0(&var_f0, r12_1, &var_138, arg3))
        int64_t r14_1 = sx.q(sub_142ae2100(*(rbx + 8), var_138, &var_130))
        
        if (r14_1.d != 0x10)
            int64_t r9_2 = *arg3
            void var_118
            i = (*(r9_2 + 0x50))(arg3, &var_118, arg4, r9_2)
            
            if (*arg4 s> 0)
                break
            
            int32_t rbx_1 = 0
            int32_t rdx_3 = 0
            
            while (sub_142ac2da0(&var_118, rdx_3, &var_138, arg3) != 0)
                char* rax_5 = var_138
                
                if (*rax_5 == 0x64 && rax_5[1] == 0x6e && rax_5[2] == 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
                    sub_142a9c7e0(arg3, &var_c8)
                    int64_t rsi_1 = sx.q(var_130)
                    int16_t var_c0
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                    
                    if ((sub_142ae2220(*(arg1 + 8), &var_88, r14_1.d, rsi_1.d)[1].w & 0xffe0) != 0
                            || (var_c0 & 0xffe0) == 0)
                        rbx_1.b = 0
                    else
                        rbx_1.b = 1
                    
                    sub_142a47ff0(&var_88)
                    
                    if (rbx_1.b != 0)
                        void* rbx_5 = ((r14_1 * 3 + rsi_1) << 6) + *(arg1 + 8)
                        sub_142a48100(rbx_5 + 0x508, &var_c8)
                        sub_142a4a210(rbx_5 + 0x508)
                    
                    sub_142a47ff0(&var_c8)
                    break
                
                rbx_1 += 1
                rdx_3 = rbx_1
            
            rbx = arg1
        
        r12_1 += 1

__security_check_cookie(rax_1 ^ &var_158)
return i
