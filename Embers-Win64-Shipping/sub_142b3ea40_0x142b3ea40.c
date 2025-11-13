// 函数: sub_142b3ea40
// 地址: 0x142b3ea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    return arg2

if (*(arg1 + 0x100) == 0)
    struct icu_64::UObject::icu_64::PluralRules::VTable** rax_2 = sub_142a6f8c0(arg3, arg4)
    int64_t* rcx_1 = *(arg1 + 0x100)
    
    if (rcx_1 != 0)
        int64_t r8 = *rcx_1
        (*r8)(rcx_1, 1, r8)
    
    *(arg1 + 0x100) = rax_2

return *(arg1 + 0x100)
