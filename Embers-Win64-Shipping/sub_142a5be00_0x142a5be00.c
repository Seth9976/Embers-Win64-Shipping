// 函数: sub_142a5be00
// 地址: 0x142a5be00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (*(arg1 + 0x170) == 0)
    return nullptr

struct icu_64::UObject::icu_64::Format::VTable** rax_1 = j_sub_142a7dd00(0x178)
struct icu_64::UObject::icu_64::Format::VTable** arg_8 = rax_1
struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable** result

if (rax_1 == 0)
    result = nullptr
else
    result = sub_142a5a740(rax_1, arg1)

if (result != 0)
    if (result[0x2e] != 0)
        return result
    
    if (result != 0)
        struct icu_64::NumberFormat::icu_64::DecimalFormat::VTable* r8_1 = *result
        r8_1->__offset(0x0).q(result, 1, r8_1)

return nullptr
