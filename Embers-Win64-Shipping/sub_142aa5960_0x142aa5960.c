// 函数: sub_142aa5960
// 地址: 0x142aa5960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_258 = -2
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
uint64_t result

if (*arg4 s> 0)
    result = 0
else
    bool cond:0_1
    
    if (arg2 != 0)
        cond:0_1 = arg3 s>= 0
    label_142aa59bc:
        
        if (not(cond:0_1))
            arg3 = std::_WChar_traits<wchar_t>::length(arg2)
        
        if (arg3 != 0)
            void* rax_3 = arg1[2]
            uint8_t r9_1 = (*(rax_3 + 0x18) u>> 1).b & 1
            int64_t rsi_1
            int64_t r14_1
            struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_248
            void var_218
            
            if ((not.b(*(rax_3 + 0x18)) & 1) == 0)
                int64_t rcx_6 = arg2 + (sx.q(arg3) << 1)
                int64_t* rdx_2 = arg1[1]
                var_248 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_240_2 = *rdx_2
                int64_t* var_238_2 = rdx_2
                int32_t var_230_2 = 0
                void* var_228_2 = &var_218
                int32_t var_220_2 = 0x28
                char var_21c_2 = 0
                int32_t var_d8_2 = 0
                int64_t var_d0_2 = 0
                int32_t var_c8_2 = 0xffffffff
                uint8_t var_c4_2 = r9_1
                int64_t var_c0_2 = arg2
                int64_t var_b8_2 = arg2
                int64_t var_b0_2 = rcx_6
                var_248 = &icu_64::FCDUTF16CollationIterator::`vftable'{for `icu_64::UTF16CollationIterator'}
                int64_t var_a8_1 = arg2
                int64_t var_a0_1 = arg2
                int64_t var_98_1 = 0
                int64_t var_90_1 = rcx_6
                int64_t var_88_1 = rdx_2[6]
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* const var_80_1 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_78_1 = 2
                char var_40_1 = 1
                rsi_1 = sub_142aa4f90(&var_248, arg4)
                r14_1 = sub_142aa4f90(&var_248, arg4)
                sub_142b28d40(&var_248)
            else
                int64_t* rcx_1 = arg1[1]
                var_248 = &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
                int64_t var_240_1 = *rcx_1
                int64_t* var_238_1 = rcx_1
                int32_t var_230_1 = 0
                void* var_228_1 = &var_218
                int32_t var_220_1 = 0x28
                char var_21c_1 = 0
                int32_t var_d8_1 = 0
                int64_t var_d0_1 = 0
                int32_t var_c8_1 = 0xffffffff
                uint8_t var_c4_1 = r9_1
                var_248 =
                    &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
                int64_t var_c0_1 = arg2
                int64_t var_b8_1 = arg2
                int64_t var_b0_1 = arg2 + (sx.q(arg3) << 1)
                rsi_1 = sub_142aa4f90(&var_248, arg4)
                r14_1 = sub_142aa4f90(&var_248, arg4)
                sub_142b28d80(&var_248)
            
            if (rsi_1 == 0x101000100 || r14_1 != 0x101000100)
                *arg4 = 0x15
                result = 0
            else
                (*(*arg1 + 0xd0))(arg1, zx.q((rsi_1 s>> 0x20).d), arg4)
                result = zx.q(*(arg1[2] + 0x1c))
        else
            *arg4 = 1
            result = 0
    else
        cond:0_1 = arg3 s>= 0
        
        if (arg3 == 0)
            goto label_142aa59bc
        
        *arg4 = 1
        result = 0

__security_check_cookie(rax_1 ^ &var_278)
return result
