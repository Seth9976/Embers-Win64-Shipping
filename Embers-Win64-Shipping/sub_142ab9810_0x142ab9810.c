// 函数: sub_142ab9810
// 地址: 0x142ab9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t rdx = *(arg1 + 0x4c)

if (((rdx u>> 6).b & 1) != 0)
    return sub_142aa8140(arg2, sub_142a4bbb0())

if (((rdx u>> 7).b & 1) != 0)
    if ((rdx.b & 1) == 0)
        return sub_142aa8140(arg2, 0x7ff0000000000000)
    
    return sub_142aa8140(arg2, -0x10000000000000)

if (std::ios_base::good(arg1) != 0 && sub_142ab3a00(arg1) != 0 && ((arg3 u>> 4).b & 1) == 0)
    return sub_142aa8140(arg2, -0x8000000000000000)

struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** rax_5 =
    j_sub_142a7dd00(0x48)
struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable** arg_8 = rax_5

if (rax_5 != 0)
    rax_5 = sub_142ab2b60(rax_5, arg1)

return sub_142aa7af0(arg2, rax_5)
