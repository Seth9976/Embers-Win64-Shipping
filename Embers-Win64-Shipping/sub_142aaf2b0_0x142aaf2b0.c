// 函数: sub_142aaf2b0
// 地址: 0x142aaf2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t var_160 = 0
int64_t* rcx = *(arg1 + 0x2a0)
int32_t rax_3

if (rcx != 0 && arg3 s>= 0)
    rax_3 = (*(*rcx + 0x10))(rcx)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_9

if (rcx == 0 || arg3 s< 0 || arg3 s>= rax_3)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_100_1 = 2
    sub_142a4ab40(&var_108)
    sub_142a47930(arg2, &var_108)
    rcx_9 = &var_108
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
    sub_142a47e10(&var_148, sub_141a50850(arg4), 0xffffffff)
    int16_t var_140
    int32_t rbx_2
    int32_t var_13c
    
    if (var_140 s< 0)
        rbx_2 = var_13c
    else
        rbx_2 = sx.d(var_140) s>> 5
    void* rax_6 = sub_142a4a0b0(&var_148, rbx_2 + 1)
    int64_t rbx_3 = sx.q(rbx_2)
    
    if (rbx_3 s< 0)
    label_142aaf40e:
        int64_t* rcx_10 = *(arg1 + 0x2a0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        sub_142a47a60(&var_88, 1, (*(*rcx_10 + 0x18))(rcx_10, zx.q(arg3)), 0xffffffff)
        sub_142a47930(arg2, &var_88)
        sub_142a47ff0(&var_88)
        rcx_9 = &var_148
    else
        while (true)
            *(rax_6 + (rbx_3 << 1)) = 0
            int64_t* rcx_4 = *(arg1 + 0x2a0)
            int64_t r8 = *rcx_4
            int32_t rax_7 = (*(r8 + 0x38))(rcx_4, rax_6, r8)
            
            if (rax_7 s>= 0)
                int64_t* rcx_5 = *(arg1 + 0x2a0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
                sub_142a47a60(&var_c8, 1, (*(*rcx_5 + 0x30))(rcx_5, zx.q(rax_7), zx.q(arg3)), 
                    0xffffffff)
                sub_142a47930(arg2, &var_c8)
                sub_142a47ff0(&var_c8)
                rcx_9 = &var_148
                break
            
            bool cond:0_1
            
            while (true)
                rbx_3 -= 1
                cond:0_1 = rbx_3 s>= 0
                
                if (rbx_3 s<= 0)
                    break
                
                if (*(rax_6 + (rbx_3 << 1)) == 0x5f)
                    void* rax_9 = rax_6 + ((rbx_3 - 1) << 1)
                    
                    while (*rax_9 == 0x5f)
                        rbx_3 -= 1
                        rax_9 -= 2
                        
                        if (rbx_3 s<= 0)
                            break
                    
                    cond:0_1 = rbx_3 s>= 0
                    break
            
            if (not(cond:0_1))
                goto label_142aaf40e

sub_142a47ff0(rcx_9)
__security_check_cookie(rax_1 ^ &var_188)
return arg2
