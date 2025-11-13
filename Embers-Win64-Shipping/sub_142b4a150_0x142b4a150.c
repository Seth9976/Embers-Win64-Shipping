// 函数: sub_142b4a150
// 地址: 0x142b4a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_340 = -2
void var_368
int64_t rax_1 = __security_cookie ^ &var_368
int32_t var_348 = 0
char r14 = *(arg1 + 0x18) & 1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2b8
Concurrency::agent::agent(&var_2b8, &data_14366ee68)
void* rcx_1 = *(arg1 + 0x10)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
int32_t rbx
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** r15

if (rcx_1 == 0)
    r15 = Concurrency::agent::agent(&var_b8, u"null")
    rbx = 2
else
    r15 = sub_142b498a0(rcx_1, &var_78)
    rbx = 1

int32_t var_348_1 = rbx
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2f8
Concurrency::agent::agent(&var_2f8, &(*U".,-+;E*#")[7])
void* rcx_4 = *(arg1 + 8)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
int32_t rbx_1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi_1

if (rcx_4 == 0)
    rdi_1 = Concurrency::agent::agent(&var_138, u"null")
    rbx_1 = rbx | 8
else
    rdi_1 = sub_142b498a0(rcx_4, &var_f8)
    rbx_1 = rbx | 4

int32_t var_348_2 = rbx_1
void* const rdx_2 = &data_14366ee98

if (r14 != 0)
    rdx_2 = u":negative "

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_338
Concurrency::agent::agent(&var_338, rdx_2)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_278
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_238
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1f8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1b8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178
sub_142a481a0(arg2, 
    sub_142a481a0(&var_278, 
        sub_142a481a0(&var_238, 
            sub_142a481a0(&var_1f8, 
                sub_142a481a0(&var_1b8, Concurrency::agent::agent(&var_178, <Affix"), &var_338), 
            rdi_1), 
        &var_2f8), 
    r15), &var_2b8)
int32_t rbx_2 = rbx_1 | 0x10
sub_142a47ff0(&var_278)
sub_142a47ff0(&var_238)
sub_142a47ff0(&var_1f8)
sub_142a47ff0(&var_1b8)
sub_142a47ff0(&var_178)
sub_142a47ff0(&var_338)

if ((rbx_2.b & 8) != 0)
    rbx_2 &= 0xfffffff7
    sub_142a47ff0(&var_138)

if ((rbx_2.b & 4) != 0)
    rbx_2 &= 0xfffffffb
    sub_142a47ff0(&var_f8)

sub_142a47ff0(&var_2f8)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    sub_142a47ff0(&var_b8)

if ((rbx_2.b & 1) != 0)
    sub_142a47ff0(&var_78)

sub_142a47ff0(&var_2b8)
__security_check_cookie(rax_1 ^ &var_368)
return arg2
