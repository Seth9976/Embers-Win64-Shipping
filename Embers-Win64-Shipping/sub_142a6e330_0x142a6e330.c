// 函数: sub_142a6e330
// 地址: 0x142a6e330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &icu_64::OrConstraint::`vftable'
void* rdi = nullptr
__builtin_memset(&arg1[1], 0, 0x14)
int32_t rax = *(arg2 + 0x18)
arg1[3].d = rax

if (rax s<= 0)
    struct icu_64::AndConstraint::VTable** arg_8
    struct icu_64::AndConstraint::VTable** rax_2
    
    if (*(arg2 + 8) != 0)
        struct icu_64::AndConstraint::VTable** rax_1 = j_sub_142a7dd00(0x38)
        arg_8 = rax_1
        
        if (rax_1 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_142a6e1e0(rax_1, *(arg2 + 8))
        
        arg1[1] = rax_2
    
    if (*(arg2 + 8) != 0 && rax_2 == 0)
        arg1[3].d = 7
    else if (*(arg2 + 0x10) != 0)
        struct icu_64::AndConstraint::VTable** rax_3 = j_sub_142a7dd00(0x20)
        arg_8 = rax_3
        
        if (rax_3 != 0)
            rdi = sub_142a6e330(rax_3, *(arg2 + 0x10))
        
        arg1[2] = rdi
        
        if (rdi == 0)
            arg1[3].d = 7
        else
            int32_t rax_5 = *(rdi + 0x18)
            
            if (rax_5 s> 0)
                arg1[3].d = rax_5

return arg1
