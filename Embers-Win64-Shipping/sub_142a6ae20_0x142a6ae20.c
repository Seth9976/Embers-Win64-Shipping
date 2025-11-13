// 函数: sub_142a6ae20
// 地址: 0x142a6ae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_142aa75d0(0xc, sub_142a6cac0)
struct icu_64::ICUNotifier::VTable** result = j_sub_142a7dd00(0x198)
struct icu_64::ICUNotifier::VTable** result_1 = result

if (result != 0)
    result = sub_142a66fa0(result)

data_1440158a0 = result

if (result != 0)
    struct icu_64::ICUNotifier::VTable** result_2 = j_sub_142a7dd00(0x50)
    struct icu_64::ICUNotifier::VTable** result_3 = result_2
    result_1 = result_2
    
    if (result_2 == 0)
        result_3 = nullptr
    else
        sub_142a9aa10(result_2, 1)
        *result_3 = &icu_64::BasicCalendarFactory::`vftable'{for `icu_64::LocaleKeyFactory'}
    
    int64_t* rcx_2 = data_1440158a0
    result = (*(*rcx_2 + 0x40))(rcx_2, result_3, arg1)
    
    if (*arg1 s> 0)
        int64_t* rcx_3 = data_1440158a0
        
        if (rcx_3 != 0)
            result = (**rcx_3)(rcx_3, 1)
        
        data_1440158a0 = 0
else
    *arg1 = 7

return result
