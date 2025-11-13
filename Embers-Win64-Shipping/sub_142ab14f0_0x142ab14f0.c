// 函数: sub_142ab14f0
// 地址: 0x142ab14f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f0 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int32_t result_1 = 0
void var_1d8
memset(&var_1d8, 0, 0x55)
sub_142a8b250(*(arg1 + 0x28), &var_1d8, 0x55, 0, &result_1)
int32_t result = result_1

if (result s<= 0)
    void nameToResolve
    memset(&nameToResolve, 0, 0xaa)
    int32_t rcx_3 = 0
    
    for (int64_t i = 0; i s< 0x55; )
        char rax_2 = *(&var_1d8 + i)
        
        if (rax_2 == 0)
            break
        
        *(&nameToResolve + (i << 1)) = sx.w(rax_2)
        void var_1d7
        char rax_4 = *(&var_1d7 + i)
        
        if (rax_4 == 0)
            rcx_3 += 1
            break
        
        void var_176
        *(&var_176 + (i << 1)) = sx.w(rax_4)
        void var_1d6
        char rax_6 = *(&var_1d6 + i)
        
        if (rax_6 == 0)
            rcx_3 += 2
            break
        
        void var_174
        *(&var_174 + (i << 1)) = sx.w(rax_6)
        void var_1d5
        char rax_8 = *(&var_1d5 + i)
        
        if (rax_8 == 0)
            rcx_3 += 3
            break
        
        void var_172
        *(&var_172 + (i << 1)) = sx.w(rax_8)
        char var_1d4[0x5c]
        char rax_10 = var_1d4[i]
        
        if (rax_10 == 0)
            rcx_3 += 4
            break
        
        int16_t var_170[0x50]
        var_170[i] = sx.w(rax_10)
        i += 5
        rcx_3 += 5
    
    if (rcx_3 s>= 0x54)
        int16_t var_d0_1 = 0
    else
        int64_t rax_13 = sx.q(rcx_3) * 2
        
        if (rax_13 u>= 0xaa)
            __report_rangecheckfailure()
            noreturn
        
        *(&nameToResolve + rax_13) = 0
    
    wchar16 localeName[0x58]
    memset(&localeName, 0, 0xaa)
    
    if (ResolveLocaleName(&nameToResolve, &localeName, 0x55) s<= 0)
        result = 0x10
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_15 = j_sub_142a7dd00(0x40)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1 = rax_15
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_1e8_1 = rax_15
        
        if (rax_15 == 0)
            rbx_1 = nullptr
        else
            Concurrency::agent::agent(rax_15, &localeName)
            *rbx_1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        
        *arg2 = rbx_1
        result = result_1

__security_check_cookie(rax_1 ^ &var_228)
return result
