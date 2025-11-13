// 函数: sub_142ab1150
// 地址: 0x142ab1150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1d0 = -2
void var_208
int64_t rax_1 = __security_cookie ^ &var_208
struct icu_64::NumberFormat::icu_64::Win32NumberFormat::VTable** result = arg1
struct icu_64::UObject::icu_64::Format::VTable** var_1c8 = arg1
sub_142a57f10(arg1)
*result = &icu_64::Win32NumberFormat::`vftable'{for `icu_64::NumberFormat'}
result[0x2e].b = arg3
sub_142a459c0(&result[0x2f])
void* rbx_1 = nullptr
result[0x4c] = 0
result[0x4d].b = 0
result[0x4e] = 0

if (*arg4 s<= 0)
    result[0x4b].d = sub_142a46480(arg2)
    sub_142ab14f0(arg2, &result[0x4e])
    int32_t var_1d8 = 0
    char var_d8[0xa0]
    int32_t rax_3 = j_sub_142a94170(result[0x4b].d, &var_d8, 0x9c, &var_1d8)
    
    if (var_1d8 s<= 0)
        int64_t rax_4 = sx.q(rax_3)
        
        if (rax_4 u>= 0x9d)
            __report_rangecheckfailure()
            noreturn
        
        var_d8[rax_4] = 0
        struct icu_64::UObject::icu_64::Locale::VTable* var_1b8
        sub_142a45b10(&result[0x2f], sub_142a45710(&var_1b8, &var_d8, nullptr, nullptr, nullptr))
        sub_142a45a20(&var_1b8)
    
    void* rcx_7 = result[0x4e]
    
    if (rcx_7 != 0)
        rbx_1 = sub_142a4a210(rcx_7)
    
    wchar16* rax_7 = sub_142a7dd00(0x30)
    result[0x4c] = rax_7
    
    if (result[0x2e].b == 0)
        sub_142ab1c40(rax_7, rbx_1)
    else
        sub_142ab1ac0(rax_7, rbx_1)

__security_check_cookie(rax_1 ^ &var_208)
return result
