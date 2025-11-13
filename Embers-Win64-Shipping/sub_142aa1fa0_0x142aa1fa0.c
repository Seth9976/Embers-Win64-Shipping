// 函数: sub_142aa1fa0
// 地址: 0x142aa1fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4d0 = -2
void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
uint64_t result

if (*arg4 s> 0 || arg2 == arg3)
label_142aa2589:
    result = 0
else
    uint8_t r12_2 = (*(*(arg1 + 0x10) + 0x18) u>> 1).b & 1
    int32_t rsi_1 = 0
    int32_t r14_1 = (*(arg2 + 0x48))(arg2)
    int32_t rax_4 = (*(arg3 + 0x48))(arg3)
    int32_t r15_1 = rax_4
    
    if (r14_1 == rax_4)
        int32_t rax_6
        
        do
            if (r14_1 s< 0)
                goto label_142aa2589
            
            rsi_1 += 1
            r14_1 = (*(arg2 + 0x48))(arg2)
            rax_6 = (*(arg3 + 0x48))(arg3)
            r15_1 = rax_6
        while (r14_1 == rax_6)
    
    if (r14_1 s>= 0)
        (*(arg2 + 0x50))(arg2)
    
    if (r15_1 s>= 0)
        (*(arg3 + 0x50))(arg3)
    
    if (rsi_1 s> 0)
        char rax_7
        
        if (r14_1 s>= 0)
            rax_7 = sub_142aa4ee0(*(arg1 + 8), r14_1, r12_2)
        
        if (r14_1 s>= 0 && rax_7 != 0)
        label_142aa20b7:
            char i
            
            do
                rsi_1 -= 1
                int32_t rax_9 = (*(arg2 + 0x50))(arg2)
                (*(arg3 + 0x50))(arg3)
                
                if (rsi_1 s<= 0)
                    break
                
                i = sub_142aa4ee0(*(arg1 + 8), rax_9, r12_2)
            while (i != 0)
        else if (r15_1 s>= 0 && sub_142aa4ee0(*(arg1 + 8), r15_1, r12_2) != 0)
            goto label_142aa20b7
    
    void* r8_3 = *(arg1 + 0x10)
    int64_t* rcx_11 = *(arg1 + 8)
    struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_478
    struct icu_64::UIterCollationIterator::icu_64::FCDUIterCollationIterator::VTable* var_458
    int32_t var_450_1
    int64_t* var_448
    int64_t var_2d8
    int16_t var_2c8
    struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_268
    struct icu_64::UIterCollationIterator::icu_64::FCDUIterCollationIterator::VTable* var_248
    int32_t var_240_1
    int64_t* var_238
    int64_t var_c8
    int16_t var_b8
    int32_t* r12_3
    int32_t result_3
    
    if ((not.b(*(r8_3 + 0x18)) & 1) == 0)
        var_478 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        int64_t var_470_2 = *rcx_11
        int64_t* var_468_2 = rcx_11
        int32_t var_460_2 = 0
        var_458 = &var_448
        var_450_1 = 0x28
        char var_44c_2 = 0
        int32_t var_308_2 = 0
        int64_t var_300_2 = 0
        int32_t var_2f8_2 = 0xffffffff
        uint8_t var_2f4_2 = r12_2
        int64_t var_2f0_2 = arg2
        var_478 =
            &icu_64::FCDUIterCollationIterator::`vftable'{for `icu_64::UIterCollationIterator'}
        int32_t var_2e8_1 = 0
        int32_t var_2e4_1 = rsi_1
        var_2d8 = rcx_11[6]
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_2d0_1 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        var_2c8 = 2
        var_268 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        int64_t var_260_2 = *rcx_11
        int64_t* var_258_2 = rcx_11
        int32_t var_250_2 = 0
        var_248 = &var_238
        var_240_1 = 0x28
        char var_23c_2 = 0
        int32_t var_f8_2 = 0
        int64_t var_f0_2 = 0
        int32_t var_e8_2 = 0xffffffff
        uint8_t var_e4_2 = r12_2
        int64_t var_e0_2 = arg3
        var_268 =
            &icu_64::FCDUIterCollationIterator::`vftable'{for `icu_64::UIterCollationIterator'}
        int32_t var_d8_1 = 0
        int32_t var_d4_1 = rsi_1
        var_c8 = rcx_11[6]
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_c0_1 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        var_b8 = 2
        r12_3 = arg4
        result_3 = sub_142b18ea0(&var_478, &var_268, r8_3, r12_3)
        sub_142b27780(&var_268)
        sub_142b27780(&var_478)
    else
        var_268 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        int64_t var_260_1 = *rcx_11
        int64_t* var_258_1 = rcx_11
        int32_t var_250_1 = 0
        var_248 = &var_238
        var_240_1 = 0x28
        char var_23c_1 = 0
        int32_t var_f8_1 = 0
        int64_t var_f0_1 = 0
        int32_t var_e8_1 = 0xffffffff
        uint8_t var_e4_1 = r12_2
        var_268 = &icu_64::UIterCollationIterator::`vftable'{for `icu_64::CollationIterator'}
        int64_t var_e0_1 = arg2
        var_478 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        int64_t var_470_1 = *rcx_11
        int64_t* var_468_1 = rcx_11
        int32_t var_460_1 = 0
        var_458 = &var_448
        var_450_1 = 0x28
        char var_44c_1 = 0
        int32_t var_308_1 = 0
        int64_t var_300_1 = 0
        int32_t var_2f8_1 = 0xffffffff
        uint8_t var_2f4_1 = r12_2
        var_478 = &icu_64::UIterCollationIterator::`vftable'{for `icu_64::CollationIterator'}
        int64_t var_2f0_1 = arg3
        r12_3 = arg4
        result_3 = sub_142b18ea0(&var_268, &var_478, r8_3, r12_3)
        sub_142b277c0(&var_478)
        sub_142b277c0(&var_268)
    
    if (result_3 != 0 || (*(*(arg1 + 0x10) + 0x18) & 0xfffff000) s< 0xf000 || *r12_3 s> result_3)
        result = zx.q(result_3)
    else
        (*(arg2 + 0x28))(arg2, zx.q(rsi_1), zx.q(result_3 + 3))
        (*(arg3 + 0x28))(arg3, zx.q(rsi_1), zx.q(result_3 + 3))
        int64_t* rdx_7 = *(arg1 + 8)
        void* r9_2 = rdx_7[6]
        
        if ((not.b(*(*(arg1 + 0x10) + 0x18)) & 1) == 0)
            int32_t var_460_3 = 0xffffffff
            int32_t var_45c_1 = 0
            var_478 = &icu_64::x4fca7e4c::FCDUIterNFDIterator::operator[]::FCDUIterNFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
            var_458 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
            var_450_1.q = *rdx_7
            var_448 = rdx_7
            int32_t var_440_1 = 0
            void var_428
            void* var_438_1 = &var_428
            int32_t var_430_1 = 0x28
            char var_42c_1 = 0
            int32_t var_2e8_2 = 0
            int64_t var_2e0_1 = 0
            var_2d8.d = 0xffffffff
            var_2d8:4.b = 0
            int64_t var_2d0_2 = arg2
            var_458 =
                &icu_64::FCDUIterCollationIterator::`vftable'{for `icu_64::UIterCollationIterator'}
            var_2c8.d = 0
            int32_t var_2c4_1 = rsi_1
            void* var_2b8_1 = r9_2
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_2b0_1 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_2a8_1 = 2
            int32_t var_250_3 = 0xffffffff
            int32_t var_24c_1 = 0
            var_268 = &icu_64::x4fca7e4c::FCDUIterNFDIterator::operator[]::FCDUIterNFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
            var_248 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
            var_240_1.q = *rdx_7
            var_238 = rdx_7
            int32_t var_230_1 = 0
            void var_218
            void* var_228_1 = &var_218
            int32_t var_220_1 = 0x28
            char var_21c_1 = 0
            int32_t var_d8_2 = 0
            int64_t var_d0_1 = 0
            var_c8.d = 0xffffffff
            var_c8:4.b = 0
            int64_t var_c0_2 = arg3
            var_248 =
                &icu_64::FCDUIterCollationIterator::`vftable'{for `icu_64::UIterCollationIterator'}
            var_b8.d = 0
            int32_t var_b4_1 = rsi_1
            void* var_a8_1 = r9_2
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_a0_1 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_98_1 = 2
            int32_t result_2 = sub_142aa27c0(r9_2, &var_478, &var_268)
            sub_142b27780(&var_248)
            var_268 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
            sub_142a47900(&var_268)
            sub_142b27780(&var_458)
            var_478 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
            sub_142a47900(&var_478)
            result = zx.q(result_2)
        else
            int32_t var_488_1 = 0xffffffff
            int32_t result_5 = result_3
            struct icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::icu_64::x4fca7e4c::UIterNFDIterator::operator[]::UIterNFDIterator::VTable
                * const var_4a0 = &icu_64::x4fca7e4c::UIterNFDIterator::operator[]::UIterNFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
            int64_t var_480_1 = arg2
            int32_t var_4b0_1 = 0xffffffff
            int32_t result_4 = result_3
            struct icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::icu_64::x4fca7e4c::UIterNFDIterator::operator[]::UIterNFDIterator::VTable
                * const var_4c8 = &icu_64::x4fca7e4c::UIterNFDIterator::operator[]::UIterNFDIterator::`vftable'{for `icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator'}
            int64_t var_4a8_1 = arg3
            int32_t result_1 = sub_142aa27c0(r9_2, &var_4a0, &var_4c8)
            var_4c8 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
            sub_142a47900(&var_4c8)
            var_4a0 = &icu_64::x4fca7e4c::NFDIterator::operator[]::NFDIterator::`vftable'{for `icu_64::UObject'}
            sub_142a47900(&var_4a0)
            result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_4f8)
return result
