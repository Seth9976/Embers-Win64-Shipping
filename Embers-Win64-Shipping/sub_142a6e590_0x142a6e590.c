// 函数: sub_142a6e590
// 地址: 0x142a6e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::RuleChain::VTable** arg_8 = arg1
int64_t var_18 = -2
*arg1 = &icu_64::RuleChain::`vftable'
sub_142a479b0(&arg1[1], arg2 + 8)
void* rdi = nullptr
arg1[9] = 0
arg1[0xa] = 0
sub_142a479b0(&arg1[0xb], arg2 + 0x58)
sub_142a479b0(&arg1[0x13], arg2 + 0x98)
arg1[0x1b].b = *(arg2 + 0xd8)
*(arg1 + 0xd9) = *(arg2 + 0xd9)
int32_t rax_2 = *(arg2 + 0xdc)
*(arg1 + 0xdc) = rax_2

if (rax_2 s<= 0)
    if (*(arg2 + 0x50) == 0)
        goto label_142a6e672
    
    struct icu_64::OrConstraint::VTable** rax_3 = j_sub_142a7dd00(0x20)
    struct icu_64::OrConstraint::VTable** arg_10 = rax_3
    struct icu_64::OrConstraint::VTable** rax_4
    
    if (rax_3 == 0)
        rax_4 = nullptr
    else
        rax_4 = sub_142a6e330(rax_3, *(arg2 + 0x50))
    
    arg1[0xa] = rax_4
    
    if (rax_4 != 0)
        int32_t rcx_4 = rax_4[3].d
        
        if (rcx_4 s<= 0)
            goto label_142a6e672
        
        *(arg1 + 0xdc) = rcx_4
    else
        *(arg1 + 0xdc) = 7
    label_142a6e672:
        
        if (*(arg2 + 0x48) != 0)
            struct icu_64::OrConstraint::VTable** rax_5 = j_sub_142a7dd00(0xe0)
            arg_10 = rax_5
            
            if (rax_5 != 0)
                rdi = sub_142a6e590(rax_5, *(arg2 + 0x48))
            
            arg1[9] = rdi
            
            if (rdi != 0)
                int32_t rax_7 = *(rdi + 0xdc)
                
                if (rax_7 s> 0)
                    *(arg1 + 0xdc) = rax_7
            else
                *(arg1 + 0xdc) = 7

return arg1
