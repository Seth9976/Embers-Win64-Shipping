// 函数: sub_142b0e6e0
// 地址: 0x142b0e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f8 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* result_1 = nullptr
int32_t var_108 = 0
char** rax_2 = sub_142a641c0("icudt64l-brkitr", &data_1434cce10, &var_108)
char** rax_3 = sub_142a62230(rax_2, "dictionaries", rax_2, &var_108)
int32_t var_104 = 0
void* rax_5 = sub_142a63c50(rax_3, sub_142a950b0(arg2), &var_104, &var_108)
int64_t* result

if (var_108 s<= 0)
    int16_t var_9c
    void* var_a8 = &var_9c:1
    int32_t var_a0_1 = 0x28
    var_9c = 0
    int32_t var_70_1 = 0
    int16_t var_dc
    void* var_e8 = &var_dc:1
    int32_t var_e0_1 = 0x28
    var_dc = 0
    int32_t var_b0_1 = 0
    void* rax_6 = sub_142a8bd00(rax_5, 0x2e, var_104)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    int32_t rbx_3
    
    if (rax_6 == 0)
        rbx_3 = var_104
    else
        rbx_3 = ((rax_6 - rax_5) s>> 1).d
        sub_142a8cd50(&var_e8, sub_142a47a60(&var_68, 0, rax_6 + 2, var_104 - rbx_3 - 1), &var_108)
        sub_142a47ff0(&var_68)
        var_104 = rbx_3
    
    sub_142a8cd50(&var_a8, sub_142a47a60(&var_68, 0, rax_5, rbx_3), &var_108)
    sub_142a47ff0(&var_68)
    sub_142a5f860(rax_3)
    void* rax_9 = sub_142a7f8f0("icudt64l-brkitr", var_e8, var_a8, &var_108)
    
    if (var_108 s<= 0)
        int32_t* rax_10 = sub_142a95f50(rax_9)
        int64_t rdx_4 = sx.q(*rax_10)
        int32_t rcx_14 = rax_10[4] & 7
        int64_t* result_2
        struct icu_64::DictionaryMatcher::icu_64::BytesDictionaryMatcher::VTable* const rcx_15
        void* rsi_1
        
        if (rcx_14 != 0)
            if (rcx_14 == 1)
                rsi_1 = rax_10 + rdx_4
                result_2 = j_sub_142a7dd00(0x18)
                int64_t* result_4 = result_2
                
                if (result_2 == 0)
                    goto label_142b0e8f2
                
                rcx_15 =
                    &icu_64::UCharsDictionaryMatcher::`vftable'{for `icu_64::DictionaryMatcher'}
                result_2[2] = rax_9
                goto label_142b0e8e8
            
            sub_142a95ec0(rax_9)
        else
            int32_t r14_1 = rax_10[5]
            rsi_1 = rax_10 + rdx_4
            result_2 = j_sub_142a7dd00(0x20)
            int64_t* result_3 = result_2
            
            if (result_2 == 0)
                goto label_142b0e8f2
            
            rcx_15 = &icu_64::BytesDictionaryMatcher::`vftable'{for `icu_64::DictionaryMatcher'}
            result_2[2].d = r14_1
            result_2[3] = rax_9
        label_142b0e8e8:
            result_1 = result_2
            result_2[1] = rsi_1
            *result_2 = rcx_15
        label_142b0e8f2:
            
            if (result_1 == 0)
                sub_142a95ec0(rax_9)
    else if (rax_5 != 0)
        var_108 = 0
    
    if (var_dc.b != 0)
        sub_142a7dcd0(var_e8)
    
    if (var_9c.b != 0)
        sub_142a7dcd0(var_a8)
    
    result = result_1
else
    sub_142a5f860(rax_3)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_128)
return result
