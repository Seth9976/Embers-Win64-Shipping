// 函数: sub_142aa3e40
// 地址: 0x142aa3e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2

if (*arg5 s<= 0)
    if (arg2 != 0 || arg3 == 0)
        sub_142b18700(arg4)
        int32_t rcx_2 = 0x20
        void* rax_2
        
        if (*(arg4 + 8) s>= 0)
            rax_2 = arg4 + 0x10
        else
            rcx_2 = *(arg4 + 0x18)
            rax_2 = *(arg4 + 0x10)
        
        void* var_38_1 = rax_2
        int32_t var_30_1 = rcx_2
        int32_t var_2c_1 = 0
        struct icu_64::SortKeyByteSink::icu_64::CollationKeyByteSink::VTable* const var_40 =
            &icu_64::CollationKeyByteSink::`vftable'{for `icu_64::SortKeyByteSink'}
        void* var_20_1 = arg4
        sub_142aa5e90(arg1, arg2, arg3, &var_40, arg5)
        
        if (*arg5 s> 0)
            sub_142b18740(arg4)
        else if (*(arg4 + 0xc) != 2)
            sub_142b18720(arg4, var_2c_1)
        else
            *arg5 = 7
        
        var_40 = &icu_64::CollationKeyByteSink::`vftable'{for `icu_64::SortKeyByteSink'}
        sub_142b23f10(&var_40)
        return arg4
    
    *arg5 = 1

return sub_142b18740(arg4)
