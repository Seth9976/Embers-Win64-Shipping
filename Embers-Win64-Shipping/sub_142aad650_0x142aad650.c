// 函数: sub_142aad650
// 地址: 0x142aad650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char* var_b8 = arg2
void var_a8
char i = (*(*arg3 + 0x50))(arg3, &var_a8, arg4)

if (*arg4 s<= 0)
    int32_t rdi_1 = 0
    
    for (i = sub_142ac2da0(&var_a8, 0, &var_b8, arg3); i != 0; 
            i = sub_142ac2da0(&var_a8, rdi_1, &var_b8, arg3))
        int32_t rbx_1 = 0
        int64_t r9_2 = 0
        char* r10_1 = var_b8
        
        while (true)
            int64_t r8_2 = (&data_143ccae50)[r9_2]
            
            if (r8_2 != 0)
                char* rax_3 = r10_1
                uint32_t j
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rax_3)
                    j = zx.d(*(rax_3 + r8_2 - r10_1))
                    
                    if (rdx_1 != j)
                        break
                    
                    rax_3 = &rax_3[1]
                while (j != 0)
                
                if (rdx_1 - j == 0)
                    break
            
            rbx_1 += 1
            r9_2 += 1
            
            if (rbx_1 s>= 0x1c)
                goto label_142aad764
        
        if (*(r9_2 + arg1 + 0x10) == 0)
            *(r9_2 + arg1 + 0x10) = 1
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
                sub_142a9c7e0(arg3, &var_78)
            sub_142aad8a0(*(arg1 + 8), rbx_1, rax_4, 1)
            i = sub_142a47ff0(&var_78)
            
            if (*arg4 s> 0)
                break
        
    label_142aad764:
        rdi_1 += 1

__security_check_cookie(rax_1 ^ &var_d8)
return i
