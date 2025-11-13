// 函数: sub_142b61ac0
// 地址: 0x142b61ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2a4) != 0)
    *arg4 = 0x1010c
    return nullptr

struct icu_64::UObject::icu_64::ParsePosition::VTable* var_20 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int64_t* result = nullptr
int32_t var_18_1 = 0
int32_t var_14_1 = 0xffffffff
int64_t* result_1 = (*(*arg1 + 0xb8))(arg1, arg2, &var_20, arg3, -2, var_20, var_18_1)

if (var_18_1 != 0)
    result = result_1
else
    *arg4 = 6
    
    if (result_1 != 0)
        if (result_1[-1] == 0)
            j_sub_140a74f90(&result_1[-1])
        else
            int64_t r8_1 = *result_1
            (*r8_1)(result_1, 3, r8_1)

sub_142aa8450(&var_20)
return result
