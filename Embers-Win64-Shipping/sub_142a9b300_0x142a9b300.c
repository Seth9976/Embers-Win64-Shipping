// 函数: sub_142a9b300
// 地址: 0x142a9b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t arg_10 = 0
struct icu_64::StringEnumeration::icu_64::ServiceEnumeration::VTable** result_1 =
    j_sub_142a7dd00(0xb8)
struct icu_64::StringEnumeration::icu_64::ServiceEnumeration::VTable** result = result_1
struct icu_64::StringEnumeration::icu_64::ServiceEnumeration::VTable** result_2 = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_142a85450(result_1)
    *result = &icu_64::ServiceEnumeration::`vftable'{for `icu_64::StringEnumeration'}
    result[0xf] = arg1
    result[0x10].d = sub_141d90190(arg1)
    sub_142ae6e40(&result[0x11], sub_140a4f210, 0, &arg_10)
    result[0x16].d = 0
    sub_142a9a320(result[0xf], &result[0x11], &arg_10)

if (arg_10 s<= 0)
    return result

if (result != 0)
    (*result)->__offset(0x0).q(result, 1)

return nullptr
