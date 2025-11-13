// 函数: sub_142aec4c0
// 地址: 0x142aec4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_220 = -2
void var_278
int64_t rax_1 = __security_cookie ^ &var_278
bool r12 = arg3
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result

if (**(arg1 + 8) s<= 0)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_2 = nullptr
    int64_t var_228_1 = 0
    int32_t var_238 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1d0_1 = 2
    sub_142a48d70(&var_1d8, u"[\p{", 0, 0xffffffff)
    int16_t rax_3 = *(arg2 + 8)
    int32_t r9_2
    
    if (rax_3 s< 0)
        r9_2 = *(arg2 + 0xc)
    else
        r9_2 = sx.d(rax_3) s>> 5
    
    sub_142a48d00(&var_1d8, arg2, 0, r9_2)
    sub_142a48d70(&var_1d8, &data_14365c364, 0, 0xffffffff)
    int32_t r15_2 = *(arg1 + 0x124) & 2
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_6 = j_sub_142a7dd00(0xc8)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_1 = rax_6
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_8
    
    if (rax_6 == 0)
        result_8 = nullptr
    else
        result_8 = sub_142b67f50(rax_6, &var_1d8, sbb.d(2, 2, r15_2 != 0) & 2, nullptr, &var_238)
    
    int32_t rax_8 = var_238
    
    if (rax_8 s> 0)
        if (result_8 != 0)
            sub_142a9dbc0(result_8)
            sub_142a47920(result_8)
            rax_8 = var_238
        
        goto label_142aec614
    
    result_2 = result_8
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_3 = result_2
    
    if (result_8 != 0)
    label_142aec614:
        
        if (rax_8 s<= 0 || rax_8 == 7)
            sub_142a47ff0(&var_1d8)
        else
            var_238 = 0
            int16_t rax_9 = *(arg2 + 8)
            int32_t r8_2
            
            if (rax_9 s< 0)
                r8_2 = *(arg2 + 0xc)
            else
                r8_2 = sx.d(rax_9) s>> 5
            
            int32_t* var_258
            var_258.d = 0
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_10
            
            if (sub_142a8ee00(arg2, 0, r8_2, u"word", var_258.d, 0xffffffff, 0) == 0)
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_11 =
                    j_sub_142a7dd00(0xc8)
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_2 = rax_11
                
                if (rax_11 == 0)
                    result_10 = nullptr
                else
                    result_10 = sub_142a9d8c0(rax_11, *(*(*(arg1 + 0x10) + 0x90) + 8))
                
                goto label_142aec6a4
            
            int16_t rax_13 = *(arg2 + 8)
            int32_t r8_4
            
            if (rax_13 s< 0)
                r8_4 = *(arg2 + 0xc)
            else
                r8_4 = sx.d(rax_13) s>> 5
            
            var_258.d = 0
            
            if (sub_142a48fb0(arg2, 0, r8_4, &data_14365c380, var_258.d, 0xffffffff) != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218
                sub_142a479b0(&var_218, arg2)
                var_258.d = 0
                char rax_17 = sub_142a48fb0(&var_218, 0, 2, &data_14365c388, var_258.d, 2)
                int16_t var_210
                int32_t var_20c
                int32_t rax_20
                
                if (rax_17 == 0)
                    if (var_210 s< 0)
                        rax_20 = var_20c
                    else
                        rax_20 = sx.d(var_210) s>> 5
                
                if (rax_17 != 0 || rax_20 s< 3)
                    var_258.d = 0
                    char rax_24 = sub_142a48fb0(arg2, 0, 2, &data_14365c39c, var_258.d, 2)
                    int32_t rax_25
                    
                    if (rax_24 == 0)
                        rax_25 = sub_142a4a1f0(arg2)
                    
                    if (rax_24 != 0 || rax_25 s< 3)
                        int32_t rax_37 = std::_WChar_traits<wchar_t>::length(u"java")
                        var_258.d = 0
                        
                        if (sub_142a48fb0(arg2, 0, rax_37, u"java", var_258.d, rax_37) != 0)
                        label_142aec928:
                            var_238 = 0x10304
                            sub_142a47ff0(&var_218)
                            sub_142a47ff0(&var_1d8)
                        else
                            var_238 = 0
                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_39 =
                                j_sub_142a7dd00(0xc8)
                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_6 =
                                rax_39
                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_9
                            
                            if (rax_39 == 0)
                                result_9 = nullptr
                            else
                                result_9 = sub_142a9db60(rax_39)
                            
                            if (var_238 s> 0)
                                if (result_9 != 0)
                                    sub_142a9dbc0(result_9)
                                    sub_142a47920(result_9)
                                
                                goto label_142aecbe9
                            
                            if (result_2 != 0)
                                sub_142a9dbc0(result_2)
                                sub_142a47920(result_2)
                            
                            result_2 = result_9
                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_7 =
                                result_2
                            
                            if (result_9 != 0)
                            label_142aecbe9:
                                
                                if (var_238 s<= 0)
                                    if (sub_142a6f4f0(arg2, u"javaDefined", 0xffffffff) != 0)
                                        if (sub_142a6f4f0(arg2, u"javaDigit", 0xffffffff) != 0)
                                            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable
                                                * var_158
                                            
                                            if (sub_142a6f4f0(arg2, javaIdentifierIgnorable", 
                                                    0xffffffff) != 0)
                                                if (sub_142a6f4f0(arg2, javaISOControl", 0xffffffff)
                                                        != 0)
                                                    if (
                                                            sub_142a6f4f0(arg2, 
                                                                javaJavaIdentifierPart", 
                                                            0xffffffff) != 0)
                                                        if (
                                                                sub_142a6f4f0(arg2, 
                                                                    javaJavaIdentifierStart", 
                                                                0xffffffff) != 0)
                                                            if (sub_142a6f4f0(arg2, javaLetter", 
                                                                    0xffffffff) != 0)
                                                                if (
                                                                        sub_142a6f4f0(arg2, javaLetterOrDigit", 
                                                                        0xffffffff) != 0)
                                                                    if (sub_142a6f4f0(arg2, javaLowerCase", 
                                                                            0xffffffff) != 0)
                                                                        if (sub_142a6f4f0(arg2, javaMirrored", 
                                                                                0xffffffff) != 0)
                                                                            if (sub_142a6f4f0(arg2, javaSpaceChar", 
                                                                                    0xffffffff) != 0)
                                                                                if (
                                                                                        sub_142a6f4f0(arg2, 
                                                                                            javaSupplementaryCodePoint", 
                                                                                        0xffffffff) != 0)
                                                                                    if (sub_142a6f4f0(arg2, javaTitleCase", 
                                                                                            0xffffffff) != 0)
                                                                                        if (
                                                                                                sub_142a6f4f0(arg2, 
                                                                                                    javaUnicodeIdentifierStart", 
                                                                                                0xffffffff) != 0)
                                                                                            if (
                                                                                                    sub_142a6f4f0(arg2, 
                                                                                                        javaUnicodeIdentifierPart", 
                                                                                                    0xffffffff) != 0)
                                                                                                if (sub_142a6f4f0(arg2, javaUpperCase", 
                                                                                                        0xffffffff) != 0)
                                                                                                    if (
                                                                                                            sub_142a6f4f0(arg2, 
                                                                                                                javaValidCodePoint", 
                                                                                                            0xffffffff) != 0)
                                                                                                        if (
                                                                                                                sub_142a6f4f0(arg2, javaWhitespace", 
                                                                                                                0xffffffff) != 0)
                                                                                                            goto label_142aec928
                                                                                                        
                                                                                                        sub_142aeb6b0(result_2, 0x7000, 
                                                                                                            &var_238)
                                                                                                        sub_142aa00c0(result_2, 
                                                                                                            sub_142a9e7d0(
                                                                                                                sub_142a9e7d0(
                                                                                                                    sub_142a9e7d0(sub_142a9db60(&var_158), 
                                                                                                                        0xa0), 
                                                                                                                    0x2007), 
                                                                                                                0x202f))
                                                                                                        sub_142a9dbc0(&var_158)
                                                                                                        sub_142a9e9d0(
                                                                                                            sub_142a9e9d0(result_2, 9, 0xd), 0x1c, 
                                                                                                            0x1f)
                                                                                                    else
                                                                                                        sub_142a9e9d0(result_2, 0, 0x10ffff)
                                                                                                else
                                                                                                    sub_142aeb6b0(result_2, 2, &var_238)
                                                                                            else
                                                                                                sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                                                                sub_142aeb6b0(result_2, 0x400000, 
                                                                                                    &var_238)
                                                                                                sub_142aeb6b0(result_2, 0x200, &var_238)
                                                                                                sub_142aeb6b0(result_2, 0x400, &var_238)
                                                                                                sub_142aeb6b0(result_2, 0x100, &var_238)
                                                                                                sub_142aeb6b0(result_2, 0x40, &var_238)
                                                                                                sub_142a9e9d0(
                                                                                                    sub_142a9e9d0(
                                                                                                        sub_142a9e9d0(result_2, 0, 8), 0xe, 
                                                                                                        0x1b), 
                                                                                                    0x7f, 0x9f)
                                                                                                sub_142a9ebe0(result_2, 
                                                                                                    sub_142b66390(sub_142a9db60(&var_158), 
                                                                                                        0x2000, 0x10000, &var_238))
                                                                                                sub_142a9dbc0(&var_158)
                                                                                        else
                                                                                            sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                                                            sub_142aeb6b0(result_2, 0x400, &var_238)
                                                                                    else
                                                                                        sub_142aeb6b0(result_2, 8, &var_238)
                                                                                else
                                                                                    sub_142a9e9d0(result_2, 0x10000, 
                                                                                        0x10ffff)
                                                                            else
                                                                                sub_142aeb6b0(result_2, 0x7000, 
                                                                                    &var_238)
                                                                        else
                                                                            sub_142b66390(result_2, 3, 1, &var_238)
                                                                    else
                                                                        sub_142aeb6b0(result_2, 4, &var_238)
                                                                else
                                                                    sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                                    sub_142aeb6b0(result_2, 0x200, &var_238)
                                                            else
                                                                sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                        else
                                                            sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                            sub_142aeb6b0(result_2, 0x400, &var_238)
                                                            sub_142aeb6b0(result_2, 0x2000000, 
                                                                &var_238)
                                                            sub_142aeb6b0(result_2, 0x400000, 
                                                                &var_238)
                                                    else
                                                        sub_142aeb6b0(result_2, 0x3e, &var_238)
                                                        sub_142aeb6b0(result_2, 0x2000000, &var_238)
                                                        sub_142aeb6b0(result_2, 0x400000, &var_238)
                                                        sub_142aeb6b0(result_2, 0x200, &var_238)
                                                        sub_142aeb6b0(result_2, 0x400, &var_238)
                                                        sub_142aeb6b0(result_2, 0x100, &var_238)
                                                        sub_142aeb6b0(result_2, 0x40, &var_238)
                                                        sub_142a9e9d0(
                                                            sub_142a9e9d0(
                                                                sub_142a9e9d0(result_2, 0, 8), 0xe, 
                                                                0x1b), 
                                                            0x7f, 0x9f)
                                                        sub_142a9ebe0(result_2, 
                                                            sub_142b66390(sub_142a9db60(&var_158), 
                                                                0x2000, 0x10000, &var_238))
                                                        sub_142a9dbc0(&var_158)
                                                else
                                                    sub_142a9e9d0(sub_142a9e9d0(result_2, 0, 0x1f), 
                                                        0x7f, 0x9f)
                                            else
                                                sub_142a9e9d0(
                                                    sub_142a9e9d0(sub_142a9e9d0(result_2, 0, 8), 
                                                        0xe, 0x1b), 
                                                    0x7f, 0x9f)
                                                sub_142a9ebe0(result_2, 
                                                    sub_142b66390(sub_142a9db60(&var_158), 0x2000, 
                                                        0x10000, &var_238))
                                                sub_142a9dbc0(&var_158)
                                        else
                                            sub_142aeb6b0(result_2, 0x200, &var_238)
                                    else
                                        sub_142aeb6b0(result_2, 1, &var_238)
                                        sub_142a9f070(result_2)
                                    
                                    if (var_238 s> 0)
                                        sub_142a47ff0(&var_218)
                                        sub_142a47ff0(&var_1d8)
                                    else
                                        if (sub_142a9fb80(result_2) == 0 && r15_2 != 0)
                                            sub_142b682a0(result_2, 2)
                                        
                                        sub_142a47ff0(&var_218)
                                        sub_142a47ff0(&var_1d8)
                                else
                                    sub_142a47ff0(&var_218)
                                    sub_142a47ff0(&var_1d8)
                            else
                                var_238 = 7
                                sub_142a47ff0(&var_218)
                                sub_142a47ff0(&var_1d8)
                    else
                        var_258.d = 0
                        sub_142a49390(&var_218, 0, 2, 0, var_258.d, 0)
                        int32_t r9_5
                        
                        if (var_210 s< 0)
                            r9_5 = var_20c
                        else
                            r9_5 = sx.d(var_210) s>> 5
                        
                        if (sub_142a491f0(&var_218, 0x3d, 0, r9_5) s>= 0)
                            goto label_142aec928
                        
                        int32_t r8_7
                        
                        if (var_210 s< 0)
                            r8_7 = var_20c
                        else
                            r8_7 = sx.d(var_210) s>> 5
                        
                        var_258.d = 0
                        
                        if (sub_142a8ee00(&var_218, 0, r8_7, assigned", var_258.d, 0xffffffff, 0)
                                != 0)
                            int32_t r8_11
                            
                            if (var_210 s< 0)
                                r8_11 = var_20c
                            else
                                r8_11 = sx.d(var_210) s>> 5
                            
                            var_258.d = 0
                            
                            if (sub_142a8ee00(&var_218, 0, r8_11, TitleCase", var_258.d, 
                                    0xffffffff, 0) == 0)
                                sub_142a4afe0(&var_218)
                                int32_t r8_13
                                
                                if (var_210 s< 0)
                                    r8_13 = var_20c
                                else
                                    r8_13 = sx.d(var_210) s>> 5
                                
                                var_258.d = 0
                                sub_142a49390(&var_218, 0, r8_13, Titlecase_Letter", var_258.d, 
                                    0xffffffff)
                        else
                            sub_142a4afe0(&var_218)
                            int32_t r8_9
                            
                            if (var_210 s< 0)
                                r8_9 = var_20c
                            else
                                r8_9 = sx.d(var_210) s>> 5
                            
                            var_258.d = 0
                            sub_142a49390(&var_218, 0, r8_9, u"unassigned", var_258.d, 0xffffffff)
                            r12 = r12 == 0
                        
                        var_258.d = 0
                        sub_142a49390(&var_218, 0, 0, u"[\p{", var_258.d, 0xffffffff)
                        sub_142a48d70(&var_218, &data_14365c364, 0, 0xffffffff)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_34 =
                            j_sub_142a7dd00(0xc8)
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_5 =
                            rax_34
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_12
                        
                        if (rax_34 == 0)
                            result_12 = nullptr
                        else
                            result_12 = sub_142b661f0(rax_34, &var_218, *(arg1 + 8))
                        
                        if (var_238 s> 0)
                            if (result_12 != 0)
                                sub_142a9dbc0(result_12)
                                sub_142a47920(result_12)
                            
                            goto label_142aecb15
                        
                        if (result_2 != 0)
                            sub_142a9dbc0(result_2)
                            sub_142a47920(result_2)
                        
                        result_2 = result_12
                        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_6 =
                            result_2
                        
                        if (result_12 != 0)
                        label_142aecb15:
                            
                            if (var_238 s<= 0 && sub_142a9fb80(result_2) == 0 && r15_2 != 0)
                                sub_142b682a0(result_2, 2)
                        else
                            var_238 = 7
                        
                        sub_142a47ff0(&var_218)
                        sub_142a47ff0(&var_1d8)
                else
                    var_238 = 0
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_21 =
                        j_sub_142a7dd00(0xc8)
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_4 = rax_21
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_11
                    
                    if (rax_21 == 0)
                        result_11 = nullptr
                    else
                        result_11 = sub_142a9db60(rax_21)
                    
                    if (var_238 s> 0)
                        if (result_11 != 0)
                            sub_142a9dbc0(result_11)
                            sub_142a47920(result_11)
                        
                        goto label_142aec82b
                    
                    if (result_2 != 0)
                        sub_142a9dbc0(result_2)
                        sub_142a47920(result_2)
                    
                    result_2 = result_11
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_5 = result_2
                    
                    if (result_11 != 0)
                    label_142aec82b:
                        
                        if (var_238 s<= 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_198
                            Concurrency::details::_SyncOriginator<enum Concurrency::agent_status>::_SyncOriginator<enum Concurrency::agent_status>(
                                &var_198, &var_218, 2)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                            sub_142b671e0(result_2, Concurrency::agent::agent(&var_88, Block"), 
                                &var_198, &var_238)
                            sub_142a47ff0(&var_88)
                            sub_142a47ff0(&var_198)
                            sub_142a47ff0(&var_218)
                        else
                            sub_142a47ff0(&var_218)
                    else
                        var_238 = 7
                        sub_142a47ff0(&var_218)
                    
                    sub_142a47ff0(&var_1d8)
            else
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_15 =
                    j_sub_142a7dd00(0xc8)
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_230_3 = rax_15
                
                if (rax_15 == 0)
                    result_10 = nullptr
                else
                    result_10 = sub_142a9d940(rax_15, 0, 0x10ffff)
                
            label_142aec6a4:
                
                if (var_238 s> 0)
                    if (result_10 != 0)
                        sub_142a9dbc0(result_10)
                        sub_142a47920(result_10)
                    
                    sub_142a47ff0(&var_1d8)
                else
                    if (result_2 != 0)
                        sub_142a9dbc0(result_2)
                        sub_142a47920(result_2)
                    
                    result_2 = result_10
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_4 = result_2
                    
                    if (result_10 != 0)
                        sub_142a47ff0(&var_1d8)
                    else
                        var_238 = 7
                        sub_142a47ff0(&var_1d8)
    else
        var_238 = 7
        sub_142a47ff0(&var_1d8)
    
    int32_t rdx_14 = var_238
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** result_1
    
    if (rdx_14 s> 0)
        if (rdx_14 == 1)
            rdx_14 = 0x10304
        
        var_238 = rdx_14
        sub_142af0120(arg1, rdx_14)
        result_1 = nullptr
    else
        if (r12 != 0)
            sub_142a9f070(result_2)
        
        result_1 = result_2
        result_2 = nullptr
    
    if (result_2 != 0)
        sub_142a9dbc0(result_2)
        sub_142a47920(result_2)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_278)
return result
