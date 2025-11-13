// 函数: sub_142a5c560
// 地址: 0x142a5c560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
int128_t zmm6 = arg2

if (*arg5 s<= 0)
    if (*(arg1 + 0x170) != 0)
        char rax_1
        
        if (arg4 == 0)
            rax_1, zmm6 = sub_142a5bfa0(arg1, arg2, arg3)
        
        if (arg4 != 0 || rax_1 == 0)
            struct icu_64::FormattedValue::icu_64::number::FormattedNumber::VTable* var_60
            sub_142ab7d90(*(*(arg1 + 0x170) + 0x10), &var_60, zmm6, arg5)
            int16_t rax_3 = *(arg3 + 8)
            int32_t rsi_2
            
            if (rax_3 s< 0)
                rsi_2 = *(arg3 + 0xc)
            else
                rsi_2 = sx.d(rax_3) s>> 5
            
            if (*arg5 s<= 0 && arg4 != 0)
                struct icu_64::FieldPositionHandler::icu_64::FieldPositionIteratorHandler::VTable* 
                    var_48
                sub_142abb0d0(&var_48, arg4, arg5)
                sub_14266cbe0(&var_48, rsi_2)
                sub_142ab86e0(&var_60, &var_48, arg5)
                Concurrency::details::TransmogrifiedPrimary::~TransmogrifiedPrimary(&var_48)
            
            struct icu_64::Appendable::icu_64::UnicodeStringAppendable::VTable* var_70 =
                &icu_64::UnicodeStringAppendable::`vftable'{for `icu_64::Appendable'}
            void* var_68_1 = arg3
            sub_142ab86b0(&var_60, &var_70, arg5)
            sub_142a48040(&var_70)
            sub_142ab8640(&var_60)
    else
        *arg5 = 7
        sub_142a4ab40(arg3)

return arg3
