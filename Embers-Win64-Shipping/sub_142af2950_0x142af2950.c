// 函数: sub_142af2950
// 地址: 0x142af2950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1 = nullptr
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (**(arg1 + 8) s<= 0)
    int64_t r12_1 = *(arg1 + 0x20)
    void* rcx = *(*(arg1 + 0x10) + 8)
    int64_t rax_4 = sx.q(*(rcx + 0x28))
    int64_t rbp_2
    
    if (rax_4.d s> *(rcx + 0x1c))
        rbp_2 = (*(*(rcx + 0x38) + 0x40))()
    else
        rbp_2 = rax_4 + *(rcx + 0x20)
    
    char r13_1 = *(arg1 + 0x28)
    char rax_7 = *(arg1 + 0x29)
    char rax_8 = *(arg1 + 0x2a)
    int64_t rax_9 = *(arg1 + 0x30)
    int64_t rax_10 = *(arg1 + 0x38)
    int32_t rax_11 = *(arg1 + 0x40)
    int32_t rax_12 = *(arg1 + 0x44)
    int64_t rbx_1 = *(arg1 + 0x48)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_70_1 = 2
    int64_t r15
    r15.b = 0
    int512_t zmm0 = sub_142af21f0(arg1, arg1 + 0x48, arg2)
    
    if (*(arg1 + 0x48) == 0x5e)
        r15.b = 1
        sub_142af21f0(arg1, arg1 + 0x48, zmm0)
    
    int512_t zmm0_2 = sub_142af21f0(arg1, arg1 + 0x48, sub_142a48580(&var_78, *(arg1 + 0x48)))
    
    if (*(arg1 + 0x4c) != 0)
    label_142af2ab3:
        *(arg1 + 0x20) = r12_1
        *(arg1 + 0x28) = r13_1
        *(arg1 + 0x29) = rax_7
        *(arg1 + 0x2a) = rax_8
        *(arg1 + 0x30) = rax_9
        *(arg1 + 0x38) = rax_10
        *(arg1 + 0x40) = rax_11
        *(arg1 + 0x44) = rax_12
        *(arg1 + 0x48) = rbx_1
        void* rcx_9 = *(*(arg1 + 0x10) + 8)
        int64_t rdx_10 = rbp_2 - *(rcx_9 + 0x20)
        
        if (rbp_2 - *(rcx_9 + 0x20) s< 0 || rdx_10 s>= sx.q(*(rcx_9 + 0x1c))
                || *(*(rcx_9 + 0x30) + (rdx_10 << 1)) u>= 0xdc00)
            sub_142aeacd0(rcx_9, rbp_2)
        else
            *(rcx_9 + 0x28) = rdx_10.d
    else
        while (true)
            int32_t rdx_5 = *(arg1 + 0x48)
            
            if (rdx_5 == 0xffffffff)
                goto label_142af2ab3
            
            if (rdx_5 == 0x3a)
                sub_142af21f0(arg1, arg1 + 0x48, zmm0_2)
                
                if (*(arg1 + 0x48) != 0x5d)
                    goto label_142af2ab3
                
                result_1 = sub_142aec4c0(arg1, &var_78, r15.b)
                break
            
            zmm0_2 = sub_142af21f0(arg1, arg1 + 0x48, sub_142a48580(&var_78, rdx_5))
            
            if (*(arg1 + 0x4c) != 0)
                goto label_142af2ab3
    
    sub_142a47ff0(&var_78)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_c8)
return result
