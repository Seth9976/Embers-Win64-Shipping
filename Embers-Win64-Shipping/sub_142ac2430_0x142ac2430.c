// 函数: sub_142ac2430
// 地址: 0x142ac2430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_210 = -2
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t rbx = 0
int32_t var_218 = 0
*(arg1 + 0x109) = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
sub_142abb780(&var_88, arg2 + 0x1e0)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
sub_142abb780(&var_c8, arg2 + 0x260)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
sub_142abb780(&var_108, arg2 + 0x80)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
sub_142abb780(&var_148, arg2 + 0x100)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_208

if ((*(arg2 + 0x1e8) & 1) == 0)
    sub_142a48100(arg1 + 8, &var_88)
else if ((*(arg2 + 0x228) & 1) != 0)
    Concurrency::agent::agent(&var_208, &data_143652e2c)
    sub_142a48050(arg1 + 8, &var_208)
    sub_142a47ff0(&var_208)
else
    sub_142a48100(arg1 + 8, arg2 + 0x220)

if ((*(arg2 + 0x268) & 1) == 0)
    sub_142a48100(arg1 + 0x48, &var_c8)
else if ((*(arg2 + 0x2a8) & 1) != 0)
    Concurrency::agent::agent(&var_208, &data_143652e2c)
    sub_142a48050(arg1 + 0x48, &var_208)
    sub_142a47ff0(&var_208)
else
    sub_142a48100(arg1 + 0x48, arg2 + 0x2a0)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1c8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_188

if ((*(arg2 + 0x88) & 1) == 0)
    sub_142a48100(arg1 + 0x88, &var_108)
else if ((*(arg2 + 0xc8) & 1) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2
    
    if ((*(arg2 + 0x228) & 1) == 0)
        Concurrency::agent::agent(&var_208, &(*U".,-+;E*#")[2])
        int32_t var_218_1 = 2
        rax_2 = sub_142a481a0(&var_1c8, &var_208, arg2 + 0x220)
        rbx = 6
    else
        rax_2 = Concurrency::agent::agent(&var_188, &(*U".,-+;E*#")[2])
        rbx = 1
    
    int32_t var_218_2 = rbx
    sub_142a48050(arg1 + 0x88, rax_2)
    
    if ((rbx.b & 4) != 0)
        rbx &= 0xfffffffb
        int32_t var_218_3 = rbx
        sub_142a47ff0(&var_1c8)
    
    if ((rbx.b & 2) != 0)
        rbx &= 0xfffffffd
        int32_t var_218_4 = rbx
        sub_142a47ff0(&var_208)
    
    if ((rbx.b & 1) != 0)
        rbx &= 0xfffffffe
        int32_t var_218_5 = rbx
        sub_142a47ff0(&var_188)
else
    sub_142a48100(arg1 + 0x88, arg2 + 0xc0)

if ((*(arg2 + 0x108) & 1) == 0)
    sub_142a48100(arg1 + 0xc8, &var_148)
else if ((*(arg2 + 0x148) & 1) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3
    int32_t rbx_1
    
    if ((*(arg2 + 0x2a8) & 1) == 0)
        rax_3 = sub_142a479b0(&var_188, arg2 + 0x2a0)
        rbx_1 = rbx | 0x10
    else
        rax_3 = Concurrency::agent::agent(&var_1c8, &data_143652e2c)
        rbx_1 = rbx | 8
    
    sub_142a48050(arg1 + 0xc8, rax_3)
    
    if ((rbx_1.b & 0x10) != 0)
        rbx_1 &= 0xffffffef
        sub_142a47ff0(&var_188)
    
    if ((rbx_1.b & 8) != 0)
        sub_142a47ff0(&var_1c8)
else
    sub_142a48100(arg1 + 0xc8, arg2 + 0x140)

char rax_8

if (sub_142abba70(arg2 + 0x220, arg3) != 0)
    rax_8 = 1
else if (sub_142abba70(arg2 + 0x2a0, arg3) != 0)
    rax_8 = 1
else if (sub_142abba70(arg2 + 0xc0, arg3) != 0)
    rax_8 = 1
else if (sub_142abba70(arg2 + 0x140, arg3) != 0)
    rax_8 = 1
else
    rax_8 = 0

*(arg1 + 0x108) = rax_8
sub_142a47ff0(&var_148)
sub_142a47ff0(&var_108)
sub_142a47ff0(&var_c8)
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_238)
return &icu_64::UObject::`vftable'
