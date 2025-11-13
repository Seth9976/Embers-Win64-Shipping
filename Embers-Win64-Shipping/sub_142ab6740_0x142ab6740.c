// 函数: sub_142ab6740
// 地址: 0x142ab6740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::MeasureUnit::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::MeasureUnit::icu_64::CurrencyUnit::VTable** result = arg1
sub_142ab6010(arg1, arg2)
*result = &icu_64::CurrencyUnit::`vftable'{for `icu_64::MeasureUnit'}

if (strcmp("currency", sub_142ab63b0(result)) == 0)
    sub_142a8d750(sub_142ab6380(result), &result[3], 4)
    *(result + 0x1e) = 0
else
    *arg3 = 1
    result[3].w = 0

return result
