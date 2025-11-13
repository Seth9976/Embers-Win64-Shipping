// 函数: sub_142a55690
// 地址: 0x142a55690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* rsi = arg3
struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result

if (*arg3 s> 0)
    result = nullptr
else
    char* rdx_3
    struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** result_1
    
    if (arg2 == 0)
        rdx_3 = "grapheme"
    label_142a55911:
        result_1 = sub_142a55050(arg1, rdx_3, arg3)
    label_142a55914:
        
        if (*rsi s<= 0)
            result = result_1
        else
            result = nullptr
    else
        if (arg2 == 1)
            rdx_3 = "word"
            goto label_142a55911
        
        int32_t var_68
        char _Str1
        
        if (arg2 == 2)
            int32_t var_40
            __builtin_strncpy(&var_40, "line", 5)
            int64_t k = 0
            int64_t var_5f_1
            __builtin_memset(&var_5f_1, 0, 0x1f)
            int32_t* var_78_2 = &var_68
            _Str1 = 0
            var_68 = 0
            int32_t rax_6 = sub_142a46470(arg1, "lb", &_Str1, 0x20)
            
            if (var_68 s<= 0 && rax_6 s> 0)
                for (int64_t i = 0; i != 7; )
                    char rax_7 = (&_Str1)[i]
                    i += 1
                    
                    if (rax_7 != *(i + 0x14363c3e3))
                        for (int64_t j = 0; j != 7; )
                            char rax_8 = (&_Str1)[j]
                            j += 1
                            
                            if (rax_8 != *(j + 0x14363c3eb))
                                do
                                    char rax_9 = (&_Str1)[k]
                                    k += 1
                                    
                                    if (rax_9 != *(k + 0x14363c3f3))
                                        goto label_142a558f0
                                while (k != 6)
                                
                                break
                        
                        break
                
                char var_41
                char* rcx_5 = &var_41
                bool cond:2_1
                
                do
                    cond:2_1 = rcx_5[1] != 0
                    rcx_5 = &rcx_5[1]
                while (cond:2_1)
                *rcx_5 = 0x5f
                char* rcx_6 = &var_41
                bool cond:3_1
                
                do
                    cond:3_1 = rcx_6[1] != 0
                    rcx_6 = &rcx_6[1]
                while (cond:3_1)
                int64_t rdx_6 = 0
                char i_1
                
                do
                    i_1 = (&_Str1)[rdx_6]
                    rcx_6[rdx_6] = i_1
                    rdx_6 += 1
                while (i_1 != 0)
            
        label_142a558f0:
            arg3 = rsi
            rdx_3 = &var_40
            goto label_142a55911
        
        if (arg2 == 3)
            result_1 = sub_142a55050(arg1, "sentence", arg3)
            _Str1 = 0
            int64_t var_5f
            __builtin_memset(&var_5f, 0, 0x1f)
            int32_t* var_78_1 = &var_68
            var_68 = 0
            int32_t rax_3 = sub_142a46470(arg1, "ss", &_Str1, 0x20)
            
            if (var_68 s<= 0 && rax_3 s> 0 && strcmp(&_Str1, "standard") == 0)
                struct icu_64::FilteredBreakIteratorBuilder::icu_64::SimpleFilteredBreakIteratorBuilder::VTable
                    ** rax_5 = sub_142a98ae0(arg1, &var_68)
                
                if (var_68 s<= 0)
                    struct icu_64::FilteredBreakIteratorBuilder::icu_64::SimpleFilteredBreakIteratorBuilder::VTable
                        * r9_1 = *rax_5
                    struct icu_64::BreakIterator::icu_64::RuleBasedBreakIterator::VTable** 
                        result_2 = r9_1->__offset(0x20).q(rax_5, result_1, rsi, r9_1, var_78_1)
                    struct icu_64::FilteredBreakIteratorBuilder::icu_64::SimpleFilteredBreakIteratorBuilder::VTable
                        * r8_2 = *rax_5
                    result_1 = result_2
                    r8_2->__offset(0x0).q(rax_5, 1, r8_2)
            
            goto label_142a55914
        
        if (arg2 == 4)
            rdx_3 = "title"
            goto label_142a55911
        
        *arg3 = 1
        result = nullptr

__security_check_cookie(rax_1 ^ &var_98)
return result
