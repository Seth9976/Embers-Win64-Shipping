// 函数: sub_142a6a190
// 地址: 0x142a6a190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result
int64_t r8
result, r8 = sub_142a69b20(arg1)

if (result == 0)
    *arg4 = 0x10
    result.b = 0
else
    struct icu_64::UObject::icu_64::TimeZoneTransition::VTable* var_40
    sub_142ad0f20(&var_40)
    r8.b = 1
    
    if ((*(*result + 0x70))(result, arg2, r8, &var_40, -2) == 0)
        *arg4 = 5
        sub_142ad0f40(&var_40)
        result.b = 0
    else
        *arg3 = sub_142ad1130(&var_40)
        sub_142ad0f40(&var_40)
        result.b = 1

return result
