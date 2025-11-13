// 函数: sub_142aa5e90
// 地址: 0x142aa5e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_260 = -2
void var_2a8
int64_t result = __security_cookie ^ &var_2a8
int64_t result_1 = result

if (*arg5 s<= 0)
    int16_t* r14_1
    
    if (arg3 s< 0)
        r14_1 = nullptr
    else
        r14_1 = &arg2[sx.q(arg3)]
    
    void* r8 = *(arg1 + 0x10)
    uint8_t rcx_1 = (*(r8 + 0x18) u>> 1).b & 1
    struct icu_64::CollationKeys::LevelCallback::VTable* var_268 =
        &icu_64::CollationKeys::LevelCallback::`vftable'
    int64_t* rdx = *(arg1 + 8)
    bool cond:0_1 = (not.b(*(r8 + 0x18)) & 1) == 0
    struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_258 =
        &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
    int64_t var_250_1 = *rdx
    int64_t* var_248_1 = rdx
    int32_t var_240_1 = 0
    int32_t var_230_1 = 0x28
    char var_22c_1 = 0
    int32_t var_e8_1 = 0
    int64_t var_e0_1 = 0
    int32_t var_d8_1 = 0xffffffff
    uint8_t var_d4_1 = rcx_1
    int16_t* var_d0_1 = arg2
    int16_t* var_c8_1 = arg2
    int16_t* var_c0_1 = r14_1
    void var_228
    void* var_238_1 = &var_228
    
    if (cond:0_1)
        var_258 =
            &icu_64::FCDUTF16CollationIterator::`vftable'{for `icu_64::UTF16CollationIterator'}
        int16_t* var_b8_1 = arg2
        int16_t* var_b0_1 = arg2
        int64_t var_a8_1 = 0
        int16_t* var_a0_1 = r14_1
        int64_t var_98_1 = rdx[6]
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_90_1 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_88_1 = 2
        char var_50_1 = 1
        sub_142b242a0(&var_258, rdx[9], r8, arg4, 1.b, &var_268, 1, arg5)
        sub_142b28d40(&var_258)
    else
        var_258 = &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
        sub_142b242a0(&var_258, rdx[9], r8, arg4, 1.b, &var_268, 1, arg5)
        sub_142b28d80(&var_258)
    
    if ((*(*(arg1 + 0x10) + 0x18) & 0xfffff000) == 0xf000)
        int32_t var_288_1
        var_288_1.q = arg5
        sub_142aa5d00(arg1, arg2, r14_1, arg4, var_288_1)
    
    (*(*arg4 + 8))(arg4, &data_14364ff18, 1)
    result = sub_142b23f00(&var_268)

__security_check_cookie(result_1 ^ &var_2a8)
return result
