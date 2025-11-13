// 函数: sub_142ae5360
// 地址: 0x142ae5360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char r15 = 0
int32_t var_c0 = 0
char** rax_3 = sub_142a641c0(nullptr, sub_141a50850(arg1 + 0x1f8), arg2)
char** rax_4 = sub_142a62230(rax_3, "calendar/gregorian/DateTimePatterns", nullptr, arg2)
char** var_98 = rax_4

if (*arg2 s<= 0)
    int32_t rax_5 = sub_142a63b10(rax_4)
    
    if (rax_5 s> 8)
        int32_t var_c8 = 0
        int32_t rdx_1 = 8
        
        if (rax_5 s>= 0xd)
            int32_t rax_7 = *(arg1 + 0x1f0) & 0xffffff7f
            
            if (rax_7 u<= 0x83)
                rdx_1 = rax_7 + 9
        
        void* rax_8 = sub_142a63b20(rax_4, rdx_1, &var_c8, arg2)
        
        if (*arg2 s<= 0 && var_c8 s>= 3 && sub_142a8c300(rax_8, &data_14365aed8, 3) == 0)
            *(arg1 + 0x2e8) = 1
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 = j_sub_142a7dd00(0x40)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rsi_1 = rax_10
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_90_1 = rax_10
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        
        if (rax_10 == 0)
            rsi_1 = nullptr
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_11 =
                sub_142a47a60(&var_88, 1, rax_8, var_c8)
            r15 = 1
            int32_t var_c0_1 = 1
            *rsi_1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            rsi_1[1].w = 2
            sub_142b62570(rsi_1, rax_11, 2, 2, arg2)
        
        *(arg1 + 0x1e8) = rsi_1
        
        if ((r15 & 1) != 0)
            sub_142a47ff0(&var_88)

*(arg1 + 0x2d8) = 6
int64_t rax_12 = sub_142a7dd00(0x60)
*(arg1 + 0x2e0) = rax_12
int32_t rcx_8 = *(arg1 + 0x2d8)
struct icu_64::ResourceSink::icu_64::x74424add::RelDateFmtDataSink::operator[]::RelDateFmtDataSink::VTable
    * const var_b8 = &icu_64::x74424add::RelDateFmtDataSink::operator[]::RelDateFmtDataSink::`vftable'{for `icu_64::ResourceSink'}
int64_t var_b0 = rax_12
int32_t rdx_4 = 0

if (rcx_8 s> 0)
    int32_t* rcx_9 = nullptr
    
    while (true)
        *(rcx_9 + rax_12) = 0
        *(rcx_9 + var_b0 + 8) = 0
        *(rcx_9 + var_b0 + 4) = 0xffffffff
        rdx_4 += 1
        rcx_9 = &rcx_9[4]
        
        if (rdx_4 s>= rcx_8)
            break
        
        rax_12 = var_b0

sub_142a61e60(rax_3, "fields/day/relative", &var_b8, arg2)
sub_142a5f860(rax_3)

if (*arg2 s> 0)
    *(arg1 + 0x2d8) = 0

var_b8 = &icu_64::x74424add::RelDateFmtDataSink::operator[]::RelDateFmtDataSink::`vftable'{for `icu_64::ResourceSink'}
int64_t result = sub_142ac3f40(&var_b8)

if (rax_4 != 0)
    result = sub_142a5f860(rax_4)

__security_check_cookie(rax_1 ^ &var_f8)
return result
