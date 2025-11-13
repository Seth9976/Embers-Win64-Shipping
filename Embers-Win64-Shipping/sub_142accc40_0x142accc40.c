// 函数: sub_142accc40
// 地址: 0x142accc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1c0 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable** result = arg1
struct icu_64::UObject::icu_64::TimeZone::VTable** var_1b8 = arg1
sub_142b4c080(arg1, arg4)
*result = &icu_64::OlsonTimeZone::`vftable'{for `icu_64::BasicTimeZone'}
result[0x10] = 0
__builtin_memset(&result[0x14], 0, 0x12)
__builtin_memset(&result[0x17], 0, 0x12)
result[0x1a] = 0
result[0x1b].d = 0

if (arg2 == 0 || arg3 == 0)
    if (*arg5 s> 0)
        goto label_142acd0e9
    
    *arg5 = 1
label_142acd0e9:
    result[0x13] = 0
    *(result + 0x4a) = 0
    result[9].w = 0
    __builtin_memset(&result[0xa], 0, 0x18)
    result[0xf] = 0
    result[0xd].w = 1
    result[0xe] = &data_143656608
    result[0x10] = 0
else
    if (*arg5 s> 0)
        goto label_142acd0e9
    
    char* var_1a8
    sub_142a5f830(&var_1a8)
    sub_142a625a0(arg3, "transPre32", &var_1a8, arg5)
    int32_t var_1d8
    result[0xa] = sub_142a63700(&var_1a8, &var_1d8, arg5)
    int32_t rcx_3 = var_1d8
    result[9].w = (rcx_3 s>> 1).w
    int32_t rax_5 = *arg5
    
    if (rax_5 == 2)
        result[0xa] = 0
        result[9].w = 0
        *arg5 = 0
    else if (rax_5 s<= 0 && (rcx_3 u> 0x7fff || (rcx_3.b & 1) != 0))
        *arg5 = 3
    
    sub_142a625a0(arg3, "trans", &var_1a8, arg5)
    result[0xb] = sub_142a63700(&var_1a8, &var_1d8, arg5)
    int32_t rcx_6 = var_1d8
    *(result + 0x4a) = rcx_6.w
    int32_t rax_7 = *arg5
    
    if (rax_7 == 2)
        result[0xb] = 0
        *(result + 0x4a) = 0
        *arg5 = 0
    else if (rax_7 s<= 0 && rcx_6 u> 0x7fff)
        *arg5 = 3
    
    sub_142a625a0(arg3, "transPost32", &var_1a8, arg5)
    result[0xc] = sub_142a63700(&var_1a8, &var_1d8, arg5)
    int32_t rcx_9 = var_1d8
    *(result + 0x4c) = (rcx_9 s>> 1).w
    int32_t rax_11 = *arg5
    
    if (rax_11 == 2)
        result[0xc] = 0
        *(result + 0x4c) = 0
        *arg5 = 0
    else if (rax_11 s<= 0 && (rcx_9 u> 0x7fff || (rcx_9.b & 1) != 0))
        *arg5 = 3
    
    sub_142a625a0(arg3, "typeOffsets", &var_1a8, arg5)
    result[0xe] = sub_142a63700(&var_1a8, &var_1d8, arg5)
    int32_t rcx_12 = var_1d8
    
    if (*arg5 s<= 0 && (rcx_12 - 2 u> 0x7ffc || (rcx_12.b & 1) != 0))
        *arg5 = 3
    
    rcx_12.w s>>= 1
    result[0xd].w = rcx_12.w
    result[0xf] = 0
    
    if (*(result + 0x4a) + result[9].w + *(result + 0x4c) s> 0)
        sub_142a625a0(arg3, "typeMap", &var_1a8, arg5)
        result[0xf] = sub_142a62070(&var_1a8, &var_1d8, arg5)
        int32_t rax_16 = *arg5
        
        if (rax_16 == 2)
            *arg5 = 3
        else if (rax_16 s<= 0 && var_1d8 != sx.d(*(result + 0x4a) + result[9].w + *(result + 0x4c)))
            *arg5 = 3
    
    void* rax_19 = sub_142a63dd0(arg3, "finalRule", &var_1d8, arg5)
    sub_142a625a0(arg3, "finalRaw", &var_1a8, arg5)
    int32_t rax_20 = sub_142a63750(&var_1a8, arg5)
    sub_142a625a0(arg3, "finalYear", &var_1a8, arg5)
    int32_t rax_21 = sub_142a63750(&var_1a8, arg5)
    int32_t rdx_8 = *arg5
    
    if (rdx_8 s<= 0)
        rdx_8.b = 1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142a47a60(&var_98, rdx_8.b, rax_19, var_1d8)
        char** rax_22 = sub_142a663f0(arg2, &var_98, nullptr, arg5)
        void* rax_23 = sub_142a63700(rax_22, &var_1d8, arg5)
        
        if (*arg5 s> 0 || var_1d8 != 0xb)
            *arg5 = 3
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_d0_1 = 2
            struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** rax_24 =
                j_sub_142a7dd00(0xa0)
            struct icu_64::BasicTimeZone::icu_64::SimpleTimeZone::VTable** var_1d0_1 = rax_24
            
            if (rax_24 != 0)
                rax_24 = sub_142ac3ff0(rax_24, rax_20 * 0x3e8, &var_d8, *rax_23, *(rax_23 + 4), 
                    *(rax_23 + 8), *(rax_23 + 0xc) * 0x3e8, *(rax_23 + 0x10), *(rax_23 + 0x14), 
                    *(rax_23 + 0x18), *(rax_23 + 0x1c), *(rax_23 + 0x20) * 0x3e8, *(rax_23 + 0x24), 
                    *(rax_23 + 0x28) * 0x3e8, arg5)
            
            result[0x10] = rax_24
            
            if (rax_24 != 0)
                result[0x12].d = rax_21
                result[0x11] = sub_142acc900(rax_21, 0, 1) f* 86400000.0
            else
                *arg5 = 7
            
            sub_142a47ff0(&var_d8)
        
        sub_142a5f860(rax_22)
        sub_142a47ff0(&var_98)
    else if (rdx_8 == 2)
        *arg5 = 0
    
    result[0x13] = sub_142acfa40(arg4, arg5)
    sub_142a5f860(&var_1a8)
    
    if (*arg5 s> 0)
        goto label_142acd0e9

__security_check_cookie(rax_1 ^ &var_258)
return result
