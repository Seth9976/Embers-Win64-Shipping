// 函数: sub_142a460b0
// 地址: 0x142a460b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_114 = 0

if (arg2 == 0)
    sub_142a46330()
    sub_142a860a0(&data_144015410)
    struct icu_64::UObject::icu_64::Locale::VTable** rsi_1 = data_144015408
    sub_142a860d0(&data_144015410)
    
    if (rsi_1 == 0)
        int32_t var_118 = 0
        rsi_1 = sub_142a469a0(nullptr, &var_118)
    
    *arg1 = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
    arg1[5] = &arg1[6]
    arg1[0x1a] = 0
    sub_142a45c20(arg1, rsi_1)
else
    struct icu_64::UObject::icu_64::Locale::VTable* const var_108
    sub_142a45710(&var_108, &data_1434cce10, nullptr, nullptr, nullptr)
    sub_142a46540(&var_108, arg2, 0)
    *arg1 = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
    arg1[5] = &arg1[6]
    arg1[0x1a] = &arg1[6]
    sub_142a45b10(arg1, &var_108)
    var_108 = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
    int64_t var_e0
    int64_t rcx_3 = var_e0
    int64_t var_38
    
    if (var_38 != rcx_3)
        sub_142a7dcd0(var_38)
        rcx_3 = var_e0
    
    int64_t var_38_1 = 0
    void var_d8
    
    if (rcx_3 != &var_d8)
        sub_142a7dcd0(rcx_3)
        int64_t var_e0_1 = 0
    
    sub_142a47900(&var_108)

__security_check_cookie(rax_1 ^ &var_148)
return arg1
