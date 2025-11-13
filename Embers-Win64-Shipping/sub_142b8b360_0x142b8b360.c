// 函数: sub_142b8b360
// 地址: 0x142b8b360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t rbx = arg2
uint64_t result

if (*arg4 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
    sub_142a47a60(&var_88, 0, u"other", 5)
    int32_t r15_1 = *(arg1 + 0x60)
    int32_t result_2 = 0
    int32_t result_1
    
    while (true)
        int32_t* rdi_3 = (sx.q(rbx) << 4) + *(arg1 + 0x58)
        result_1 = rbx + 1
        
        if (*rdi_3 != 6)
            if (sub_142b5f280(arg1 + 0x10, rdi_3[1], zx.d(rdi_3[2].w), arg3) == 0)
                break
            
            if (result_2 == 0)
                int32_t var_7c
                int32_t rax_3 = var_7c
                int16_t var_80
                int32_t rcx_3
                
                if (var_80 s< 0)
                    rcx_3 = rax_3
                else
                    rcx_3 = sx.d(var_80) s>> 5
                
                char rax_4
                
                if ((var_80.b & 1) == 0)
                    if (var_80 s>= 0)
                        rax_3 = sx.d(var_80) s>> 5
                    
                    int32_t r8_1 = 0
                    
                    if (rax_3 s< 0)
                        r8_1 = rax_3
                    
                    if (rcx_3 s>= 0)
                        int32_t rax_6 = rax_3 - r8_1
                        
                        if (rcx_3 s> rax_6)
                            rcx_3 = rax_6
                    else
                        rcx_3 = 0
                    
                    void var_7e
                    void* r9_1 = &var_7e
                    void* var_70
                    
                    if ((var_80.b & 2) == 0)
                        r9_1 = var_70
                    rax_4 =
                        sub_142a48fb0(arg1 + 0x10, rdi_3[1], zx.d(rdi_3[2].w), r9_1, r8_1, rcx_3)
                else
                    rax_4 = not.b(*(arg1 + 0x18)) & 1
                
                if (rax_4 == 0)
                    result_2 = result_1
            
            int64_t rcx_6 = sx.q(result_1) * 2
            int64_t rax_7 = *(arg1 + 0x58)
            
            if (*(rax_7 + (rcx_6 << 3) + 0xc) s>= result_1)
                result_1 = *(rax_7 + (rcx_6 << 3) + 0xc)
            
            rbx = result_1 + 1
            
            if (rbx s< r15_1)
                continue
        
        result_1 = result_2
        break
    
    sub_142a47ff0(&var_88)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
