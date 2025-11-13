// 函数: sub_142a5c170
// 地址: 0x142a5c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2

if (*arg5 s<= 0)
    void* rcx = *(arg1 + 0x170)
    
    if (rcx != 0)
        struct icu_64::FormattedValue::icu_64::number::FormattedNumber::VTable* var_50
        sub_142ab7c60(*(rcx + 0x10), &var_50, arg2, arg5)
        int16_t rax_1 = *(arg3 + 8)
        int32_t rsi_2
        
        if (rax_1 s< 0)
            rsi_2 = *(arg3 + 0xc)
        else
            rsi_2 = sx.d(rax_1) s>> 5
        
        if (*arg5 s<= 0 && arg4 != 0)
            struct icu_64::FieldPositionHandler::icu_64::FieldPositionIteratorHandler::VTable* 
                var_38
            sub_142abb0d0(&var_38, arg4, arg5)
            sub_14266cbe0(&var_38, rsi_2)
            sub_142ab86e0(&var_50, &var_38, arg5)
            Concurrency::details::TransmogrifiedPrimary::~TransmogrifiedPrimary(&var_38)
        
        struct icu_64::Appendable::icu_64::UnicodeStringAppendable::VTable* var_60 =
            &icu_64::UnicodeStringAppendable::`vftable'{for `icu_64::Appendable'}
        void* var_58_1 = arg3
        sub_142ab86b0(&var_50, &var_60, arg5)
        sub_142a48040(&var_60)
        sub_142ab8640(&var_50)
    else
        *arg5 = 7
        sub_142a4ab40(arg3)

return arg3
