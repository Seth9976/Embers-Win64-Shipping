// 函数: sub_142ab8cf0
// 地址: 0x142ab8cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_150 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t* rsi = arg2
char var_b8[0x90]
sub_142b3f020(&var_b8)
char var_148[0x90]
sub_142b3f020(&var_148)
arg2.b = 1
sub_142ac08a0(*(arg1 + 0x20), arg2.b, *(arg1 + 0x58), *(arg1 + 0x2c), *(arg1 + 0x5c), 
    *(arg1 + 0x30), arg1 + 0x68)
void* r9_1 = arg1 + 0x10
struct icu_64::number::impl::ConstantMultiFieldModifier::icu_64::number::impl::CurrencySpacingEnabledModifier::VTable
    ** result = nullptr

if (arg1 == 0)
    r9_1 = nullptr

char var_170
var_170.q = rsi
int32_t var_178
var_178.b = *(arg1 + 0x28)
sub_142abc050(arg1 + 0x68, &var_b8, 0, r9_1, var_178.b, var_170)
sub_142ac08a0(*(arg1 + 0x20), 0, *(arg1 + 0x58), *(arg1 + 0x2c), *(arg1 + 0x5c), *(arg1 + 0x30), 
    arg1 + 0x68)
void* r9_3 = arg1 + 0x10

if (arg1 == 0)
    r9_3 = nullptr

char var_170_1
var_170_1.q = rsi
int32_t var_178_1
var_178_1.b = *(arg1 + 0x28)
sub_142abc050(arg1 + 0x68, &var_148, 0, r9_3, var_178_1.b, var_170_1)
int64_t* rcx_6 = *(arg1 + 0x20)

if ((*(*rcx_6 + 0x20))(rcx_6) == 0)
    struct icu_64::number::impl::ConstantMultiFieldModifier::icu_64::number::impl::CurrencySpacingEnabledModifier::VTable
        ** result_1 = j_sub_142a7dd00(0x130)
    struct icu_64::number::impl::ConstantMultiFieldModifier::icu_64::number::impl::CurrencySpacingEnabledModifier::VTable
        ** result_2 = result_1
    
    if (result_1 != 0)
        char rdi = *(arg1 + 0x18)
        int64_t* rcx_9 = *(arg1 + 0x20)
        int64_t rdx_4 = *rcx_9
        void* rbx
        rbx.b = (*(rdx_4 + 0x48))(rcx_9, rdx_4) == 0
        *result_1 = &icu_64::number::impl::ConstantMultiFieldModifier::`vftable'{for `icu_64::number::impl::Modifier'}
        sub_142b3eff0(&result_1[1], &var_b8)
        sub_142b3eff0(&result_1[0x12], &var_148)
        result_1[0x23].b = rbx.b
        *(result_1 + 0x119) = rdi
        RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
            &result_1[0x24])
        result = result_1
else
    struct icu_64::number::impl::Modifier::icu_64::number::impl::ConstantMultiFieldModifier::VTable*
        * rax_10 = j_sub_142a7dd00(0x340)
    struct icu_64::number::impl::Modifier::icu_64::number::impl::ConstantMultiFieldModifier::VTable*
        * var_158 = rax_10
    
    if (rax_10 != 0)
        int64_t* rcx_7 = *(arg1 + 0x20)
        int64_t rdx_2 = *rcx_7
        bool r9_4 = (*(rdx_2 + 0x48))(rcx_7, rdx_2) == 0
        var_170_1.q = *(arg1 + 0x38)
        var_178_1.b = *(arg1 + 0x18)
        result = sub_142b3c260(rax_10, &var_b8, &var_148, r9_4, var_178_1.b, var_170_1, rsi)

sub_142b3f040(&var_148)
sub_142b3f040(&var_b8)
__security_check_cookie(rax_1 ^ &var_198)
return result
