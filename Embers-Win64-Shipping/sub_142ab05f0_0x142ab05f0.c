// 函数: sub_142ab05f0
// 地址: 0x142ab05f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x278) != 0)
    return *(arg1 + 0x278)

struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax = j_sub_142a7dd00(0xb00)
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** arg_8 = rax
struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** result

if (rax == 0)
    result = nullptr
else
    result = sub_142aabd40(rax, arg1 + 0x190, arg2)

if (result != 0)
    if (*arg2 s<= 0)
        *(arg1 + 0x278) = result
        return result
else if (*arg2 s<= result.d)
    *arg2 = 7

if (result != 0)
    (*result)->__offset(0x0).q(result, 1)

return *(arg1 + 0x278)
