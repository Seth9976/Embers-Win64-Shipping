// 函数: sub_142b830d0
// 地址: 0x142b830d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

int16_t var_68 = (*(*arg1 + 0x60))()
sub_142a48d70(arg2, &var_68, 0, 1)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
void* rdx_1 = arg1[2]
int32_t r9

if (rdx_1 == 0)
    int64_t* rcx_2 = arg1[3]
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x218))(rcx_2, &var_58)
        goto label_142b83177
    
    r9 = sx.d(2) s>> 5
else
    sub_142a48aa0(&var_58, rdx_1, 0)
label_142b83177:
    int32_t var_4c
    
    if (var_50 s>= 0)
        r9 = sx.d(var_50) s>> 5
    else
        r9 = var_4c

sub_142a48d00(arg2, &var_58, 0, r9)
var_68 = (*(*arg1 + 0x60))(arg1)
sub_142a48d70(arg2, &var_68, 0, 1)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_88)
return &icu_64::UObject::`vftable'
