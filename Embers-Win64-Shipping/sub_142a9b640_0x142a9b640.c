// 函数: sub_142a9b640
// 地址: 0x142a9b640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::ICUServiceFactory::icu_64::LocaleKeyFactory::VTable** rax = j_sub_142a7dd00(0xa0)
struct icu_64::ICUServiceFactory::icu_64::LocaleKeyFactory::VTable** var_10 = rax
struct icu_64::LocaleKeyFactory::icu_64::SimpleLocaleKeyFactory::VTable** rdx_1

if (rax == 0)
    rdx_1 = nullptr
else
    rdx_1 = sub_142b12420(rax, arg2, arg3, arg4, arg5)

if (rdx_1 != 0)
    return (*(*arg1 + 0x40))(arg1, rdx_1, arg6)

if (arg2 != 0)
    (**arg2)(arg2, 1)

return 0
