// 函数: sub_142ac84e0
// 地址: 0x142ac84e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b0 = -2
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
int16_t var_128[0x80]
sub_142a47d50(&var_1a8, &var_128, 0, 0x80)
void* rax_2 = sub_142acf980(arg2)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168

if (rax_2 != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
        sub_142a47a60(&var_168, 1, rax_2, 0xffffffff)
    int64_t* rcx_3 = *(arg1 + 0x230)
    (*(*rcx_3 + 0x50))(rcx_3, rax_3, &var_1a8)
    sub_142a47ff0(&var_168)

int16_t var_1a0
int32_t var_19c
int32_t rax_7

if (var_1a0 s< 0)
    rax_7 = var_19c
else
    rax_7 = sx.d(var_1a0) s>> 5

if (rax_7 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
        sub_142a47a60(&var_168, 1, Etc/Unknown", 0xffffffff)
    int64_t* rcx_7 = *(arg1 + 0x230)
    (*(*rcx_7 + 0x50))(rcx_7, rax_8, &var_1a8)
    sub_142a47ff0(&var_168)
    int32_t rax_12
    
    if (var_1a0 s< 0)
        rax_12 = var_19c
    else
        rax_12 = sx.d(var_1a0) s>> 5
    
    if (rax_12 s<= 0)
        sub_142a4afe0(arg3)
        int16_t rax_13 = *(arg3 + 8)
        int32_t r8_4
        
        if (rax_13 s< 0)
            r8_4 = *(arg3 + 0xc)
        else
            r8_4 = sx.d(rax_13) s>> 5
        
        sub_142a49390(arg3, 0, r8_4, u"Unknown", 0, 0xffffffff)
    else
        sub_142a48aa0(arg3, &var_1a8, 0)
else
    sub_142a48aa0(arg3, &var_1a8, 0)

sub_142a47ff0(&var_1a8)
__security_check_cookie(rax_1 ^ &var_1e8)
return arg3
