// 函数: sub_142aa4b20
// 地址: 0x142aa4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_290 = -2
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
uint64_t result

if (*arg6 s> 0)
    result = 0
else if (arg2 == 0 || arg3 == 0)
    *arg6 = 1
    result = 0
else
    bool cond:1_1 = arg5 == 0
    
    if (arg5 s< 0)
        *arg6 = 1
        result = 0
    else
        if (arg5 s<= 0)
            goto label_142aa4ba1
        
        if (arg4 == 0)
            *arg6 = 1
            result = 0
        else
            cond:1_1 = arg5 == 0
        label_142aa4ba1:
            
            if (cond:1_1)
                result = 0
            else
                int64_t var_2c8_1 = arg4
                int32_t result_1 = 0
                int32_t var_2bc_1 = 0
                struct icu_64::SortKeyByteSink::icu_64::x4fca7e4c::FixedSortKeyByteSink::operator[]::FixedSortKeyByteSink::VTable
                    * const var_2d0 = &icu_64::x4fca7e4c::FixedSortKeyByteSink::operator[]::FixedSortKeyByteSink::`vftable'{for `icu_64::SortKeyByteSink'}
                int32_t rax_2 = arg3[1]
                (*(arg2 + 0x28))(arg2, 0, 0)
                int32_t r12_1 = *arg3
                
                if (r12_1 s> 5)
                label_142aa4db2:
                    
                    if (r12_1 != 6)
                        goto label_142aa4e77
                    
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_288 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_280_1 = 2
                    
                    for (int32_t i = (*(arg2 + 0x48))(arg2); i s>= 0; i = (*(arg2 + 0x48))(arg2))
                        int16_t var_2d8 = i.w
                        sub_142a48d70(&var_288, &var_2d8, 0, 1)
                    
                    char rax_13 = var_280_1.b
                    int16_t* rdx_5
                    
                    if ((rax_13 & 0x11) == 0)
                        void var_27e
                        rdx_5 = &var_27e
                        int16_t* var_270
                        
                        if ((rax_13 & 2) == 0)
                            rdx_5 = var_270
                    else
                        rdx_5 = nullptr
                    
                    int32_t rax_16
                    int32_t var_27c
                    
                    if (var_280_1 s< 0)
                        rax_16 = var_27c
                    else
                        rax_16 = sx.d(var_280_1) s>> 5
                    int32_t var_2f8
                    var_2f8.q = arg6
                    sub_142aa5d00(arg1, rdx_5, &rdx_5[sx.q(rax_16)], &var_2d0, var_2f8)
                    
                    if (*arg6 s> 0)
                        sub_142a47ff0(&var_288)
                    else if (var_2bc_1 s<= arg5)
                        sub_142a47ff0(&var_288)
                    label_142aa4e77:
                        *arg3 = 7
                        int64_t rdx_6 = sx.q(var_2bc_1)
                        
                        if (rdx_6.d s< arg5)
                            __builtin_memset(rdx_6 + arg4, 0, sx.q(arg5 - rdx_6.d))
                        
                        result_1 = rdx_6.d
                    else
                        *arg3 = 6
                        arg3[1] = rax_2 - var_2bc_1 + arg5
                        result_1 = arg5
                        sub_142a47ff0(&var_288)
                else
                    void* r8 = *(arg1 + 0x10)
                    uint8_t rcx_2 = (*(r8 + 0x18) u>> 1).b & 1
                    struct icu_64::CollationKeys::LevelCallback::VTable* var_2a8 = &icu_64::x4fca7e4c::PartLevelCallback::operator[]::PartLevelCallback::`vftable'{for `icu_64::CollationKeys::LevelCallback'}
                    struct icu_64::SortKeyByteSink::icu_64::x4fca7e4c::FixedSortKeyByteSink::operator[]::FixedSortKeyByteSink::VTable
                        * const* var_2a0_1 = &var_2d0
                    int32_t var_298_1 = 1
                    int64_t* rdx_1 = *(arg1 + 8)
                    bool cond:2_1 = (not.b(*(r8 + 0x18)) & 1) == 0
                    struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_248 =
                        &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                    int64_t var_240_1 = *rdx_1
                    int64_t* var_238_1 = rdx_1
                    int32_t var_230_1 = 0
                    int32_t var_220_1 = 0x28
                    char var_21c_1 = 0
                    int32_t var_d8_1 = 0
                    int64_t var_d0_1 = 0
                    int32_t var_c8_1 = 0xffffffff
                    uint8_t var_c4_1 = rcx_2
                    int64_t var_c0_1 = arg2
                    void var_218
                    void* var_228_1 = &var_218
                    
                    if (cond:2_1)
                        var_248 = &icu_64::FCDUIterCollationIterator::`vftable'{for `icu_64::UIterCollationIterator'}
                        int64_t var_b8_1 = 0
                        int64_t var_a8_1 = rdx_1[6]
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_a0_1 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_98_1 = 2
                        sub_142b242a0(&var_248, rdx_1[9], r8, &var_2d0, r12_1.b, &var_2a8, 0, arg6)
                        sub_142b27780(&var_248)
                    else
                        var_248 = &icu_64::UIterCollationIterator::`vftable'{for `icu_64::CollationIterator'}
                        sub_142b242a0(&var_248, rdx_1[9], r8, &var_2d0, r12_1.b, &var_2a8, 0, arg6)
                        sub_142b277c0(&var_248)
                    
                    if (*arg6 s> 0)
                        var_2a8 = &icu_64::x4fca7e4c::PartLevelCallback::operator[]::PartLevelCallback::`vftable'{for `icu_64::CollationKeys::LevelCallback'}
                        sub_142b23f00(&var_2a8)
                    else
                        if (var_2bc_1 s<= arg5)
                            if ((*(*(arg1 + 0x10) + 0x18) & 0xfffff000) == 0xf000)
                                r12_1 = 6
                                (*(arg2 + 0x28))(arg2, 0, 0)
                            
                            var_2a8 = &icu_64::x4fca7e4c::PartLevelCallback::operator[]::PartLevelCallback::`vftable'{for `icu_64::CollationKeys::LevelCallback'}
                            sub_142b23f00(&var_2a8)
                            goto label_142aa4db2
                        
                        *arg3 = var_298_1
                        arg3[1] = rax_2 - var_2bc_1 + arg5
                        result_1 = arg5
                        var_2a8 = &icu_64::x4fca7e4c::PartLevelCallback::operator[]::PartLevelCallback::`vftable'{for `icu_64::CollationKeys::LevelCallback'}
                        sub_142b23f00(&var_2a8)
                
                var_2d0 = &icu_64::x4fca7e4c::FixedSortKeyByteSink::operator[]::FixedSortKeyByteSink::`vftable'{for `icu_64::SortKeyByteSink'}
                sub_142b23f10(&var_2d0)
                result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_318)
return result
