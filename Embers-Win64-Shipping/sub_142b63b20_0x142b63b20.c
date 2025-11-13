// 函数: sub_142b63b20
// 地址: 0x142b63b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result

if (*arg1 s<= 0)
    int64_t rax_1 = j_sub_142a7dd00(0x18)
    int64_t var_b0_1 = rax_1
    
    if (rax_1 == 0)
        rax_1 = 0
    else
        __builtin_memset(rax_1, 0, 0x14)
    
    data_144016e58 = rax_1
    *data_144016e58 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, arg1)
    char** rax_3 = sub_142a64160(nullptr, "dayPeriods", arg1)
    struct icu_64::ResourceSink::icu_64::DayPeriodRulesCountSink::VTable* const var_b8 =
        &icu_64::DayPeriodRulesCountSink::`vftable'{for `icu_64::ResourceSink'}
    sub_142a61e60(rax_3, "rules", &var_b8, arg1)
    struct icu_64::ResourceSink::icu_64::DayPeriodRulesDataSink::VTable* const var_a8 =
        &icu_64::DayPeriodRulesDataSink::`vftable'{for `icu_64::ResourceSink'}
    void var_a0
    __builtin_memset(&var_a0, 0, 0x64)
    sub_142a61e60(rax_3, &data_1434cce10, &var_a8, arg1)
    sub_142aa75d0(0x17, sub_142b646e0)
    var_a8 = &icu_64::DayPeriodRulesDataSink::`vftable'{for `icu_64::ResourceSink'}
    sub_142ac3f40(&var_a8)
    var_b8 = &icu_64::DayPeriodRulesCountSink::`vftable'{for `icu_64::ResourceSink'}
    result = sub_142ac3f40(&var_b8)
    
    if (rax_3 != 0)
        result = sub_142a5f860(rax_3)

__security_check_cookie(result_1 ^ &var_d8)
return result
