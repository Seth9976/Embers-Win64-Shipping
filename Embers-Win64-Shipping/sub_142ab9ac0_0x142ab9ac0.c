// 函数: sub_142ab9ac0
// 地址: 0x142ab9ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t rax_1 = *(arg2 + 0x20)
    *(arg1 + 0x20) = rax_1
    
    if (rax_1 s<= 0)
        sub_142ab9e20(arg1, *(arg1 + 8))
        void** rax_2 = sub_142ab9fc0(arg1, arg1 + 0x20)
        *(arg1 + 8) = rax_2
        sub_142ab9cb0(arg1, *(arg2 + 8), rax_2, arg1 + 0x20)
        
        if (*(arg1 + 0x20) s<= 0)
            int64_t* rcx_2 = *(arg1 + 0x10)
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            int64_t* rcx_3 = *(arg1 + 0x18)
            *(arg1 + 0x10) = 0
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
            
            *(arg1 + 0x18) = 0
            void* rcx_4 = *(arg2 + 0x10)
            struct icu_64::UObject::icu_64::PluralRules::VTable** rax_5
            
            if (rcx_4 != 0)
                rax_5 = sub_142a6f460(rcx_4)
                *(arg1 + 0x10) = rax_5
            
            if (rcx_4 != 0 && rax_5 == 0)
                *(arg1 + 0x20) = 7
            else
                void* rcx_5 = *(arg2 + 0x18)
                
                if (rcx_5 != 0)
                    struct icu_64::UObject::icu_64::Locale::VTable** rax_6 = sub_142a46010(rcx_5)
                    *(arg1 + 0x18) = rax_6
                    
                    if (rax_6 == 0)
                        *(arg1 + 0x20) = 7
                    else if (*(*(arg2 + 0x18) + 0xd8) == 0 && rax_6[0x1b].b != 0)
                        *(arg1 + 0x20) = 7

return arg1
