// 函数: sub_142adba50
// 地址: 0x142adba50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** rbx = *(arg1 + 0x300)

if (rbx != 0)
    sub_142b57bd0(rbx)
    sub_142a47920(rbx)

struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** result = j_sub_142a7dd00(0x4d8)
struct icu_64::UObject::icu_64::DateFormatSymbols::VTable** result_1 = result

if (result == 0)
    *(arg1 + 0x300) = 0
else
    result = sub_142b57920(result, arg2)
    *(arg1 + 0x300) = result

return result
