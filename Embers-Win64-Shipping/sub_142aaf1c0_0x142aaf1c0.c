// 函数: sub_142aaf1c0
// 地址: 0x142aaf1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_c8 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_4

if (arg1[0x54] == 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_b0_1 = 2
    sub_142a4ab40(&var_b8)
    sub_142a47930(arg2, &var_b8)
    rcx_4 = &var_b8
else
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    sub_142a479b0(&var_78, arg3)
    int64_t rbx_1 = *arg1[0x54]
    void* rax_3 = sub_142a4a210(&var_78)
    (*(*arg1 + 0x150))(arg1, arg2, zx.q((*(rbx_1 + 0x40))(arg1[0x54], rax_3)), arg4, var_c8, var_c0)
    rcx_4 = &var_78

sub_142a47ff0(rcx_4)
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
