// 函数: sub_142a6e790
// 地址: 0x142a6e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg1 != arg2)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    struct icu_64::RuleChain::VTable** rdi_1 = nullptr
    *(arg1 + 8) = 0
    int32_t rax_2 = *(arg2 + 0x10)
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 s<= 0 && *(arg2 + 8) != 0)
        struct icu_64::RuleChain::VTable** rax_3 = j_sub_142a7dd00(0xe0)
        struct icu_64::RuleChain::VTable** arg_8 = rax_3
        
        if (rax_3 != 0)
            rdi_1 = sub_142a6e590(rax_3, *(arg2 + 8))
        
        *(arg1 + 8) = rdi_1
        
        if (rdi_1 != 0)
            int32_t rax_5 = *(rdi_1 + 0xdc)
            
            if (rax_5 s> 0)
                *(arg1 + 0x10) = rax_5
        else
            *(arg1 + 0x10) = 7

return arg1
