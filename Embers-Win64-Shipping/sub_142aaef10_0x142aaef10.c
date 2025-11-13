// 函数: sub_142aaef10
// 地址: 0x142aaef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t result

if (*(arg1 + 0x170) == 0)
    result = 0
else if (*(arg1 + 0x270) != 0 || *(arg1 + 0x294) == 0)
    result = *(arg1 + 0x270)
else
    int32_t var_78 = 0
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** inptr =
        sub_142a57420(arg1 + 0x190, &var_78)
    struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** inptr_1 = inptr
    
    if (var_78 s> 0)
    label_142aaf07d:
        
        if (inptr_1 == 0)
            result = *(arg1 + 0x270)
        else
            (*inptr_1)->__offset(0x0).q(inptr_1, 1)
            result = *(arg1 + 0x270)
    else
        struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** rax_2 = __RTDynamicCast(inptr, 
            0, &class icu_64::Collator `RTTI Type Descriptor', 
            &class icu_64::RuleBasedCollator `RTTI Type Descriptor', 0)
        struct icu_64::Collator::icu_64::RuleBasedCollator::VTable** rdi_1 = rax_2
        
        if (rax_2 == 0)
            goto label_142aaf07d
        
        if (*(arg1 + 0x298) == 0)
            inptr_1 = nullptr
        label_142aaf04c:
            struct icu_64::Collator::icu_64::RuleBasedCollator::VTable* rax_7 = *rdi_1
            
            if (var_78 s> 0)
                rax_7->__offset(0x0).q(rdi_1, 1)
            else
                rax_7->__offset(0xb0).q(rdi_1, 4, 0x11, &var_78)
                *(arg1 + 0x270) = rdi_1
            
            goto label_142aaf07d
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
        sub_142a479b0(&var_58, sub_142aa4080(rax_2))
        void* rdx_3 = *(arg1 + 0x298)
        int16_t rax_4 = *(rdx_3 + 8)
        int32_t r9_2
        
        if (rax_4 s< 0)
            r9_2 = *(rdx_3 + 0xc)
        else
            r9_2 = sx.d(rax_4) s>> 5
        
        sub_142a48d00(&var_58, rdx_3, 0, r9_2)
        struct icu_64::UObject::icu_64::Collator::VTable** rax_5 = j_sub_142a7dd00(0x110)
        struct icu_64::UObject::icu_64::Collator::VTable** var_68_1 = rax_5
        
        if (rax_5 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_142b2e9b0(rax_5, &var_58, &var_78)
        
        sub_142a47ff0(&var_58)
        
        if (rdi_1 != 0)
            goto label_142aaf04c
        
        result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
