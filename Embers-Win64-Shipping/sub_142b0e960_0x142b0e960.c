// 函数: sub_142b0e960
// 地址: 0x142b0e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t arg_18 = 0
int32_t rax_1 = sub_142a54c10(arg2, &arg_18)

if (arg_18 s<= 0)
    int64_t r8_1 = *arg1
    int64_t* rax_2 = (*(r8_1 + 0x18))(arg1, zx.q(rax_1), r8_1)
    
    if (rax_2 != 0)
        struct icu_64::LanguageBreakEngine::icu_64::DictionaryBreakEngine::VTable** result = nullptr
        struct icu_64::LanguageBreakEngine::VTable** arg_20
        
        if (rax_1 - 0x11 u> 0x15)
            (**rax_2)(rax_2, 1)
        else
            switch (rax_1)
                case 0x11, 0x14, 0x16
                    struct icu_64::LanguageBreakEngine::VTable** rax_14 = j_sub_142a7dd00(0x400)
                    arg_20 = rax_14
                    
                    if (rax_14 == 0)
                        result = nullptr
                    else
                        result = sub_142b6cf70(rax_14, rax_2, 1, &arg_18)
                    
                    goto label_142b0eb01
                case 0x12
                    struct icu_64::LanguageBreakEngine::VTable** rax_12 = j_sub_142a7dd00(0x400)
                    arg_20 = rax_12
                    
                    if (rax_12 == 0)
                        result = nullptr
                    else
                        result = sub_142b6cf70(rax_12, rax_2, 0, &arg_18)
                    
                    goto label_142b0eb01
                case 0x13, 0x15, 0x19, 0x1a, 0x1b, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 
                        0x25
                    (**rax_2)(rax_2, 1)
                case 0x17
                    struct icu_64::LanguageBreakEngine::VTable** rax_10 = j_sub_142a7dd00(0x3f8)
                    arg_20 = rax_10
                    
                    if (rax_10 == 0)
                        result = nullptr
                    else
                        result = sub_142b6d1f0(rax_10, rax_2, &arg_18)
                    
                    goto label_142b0eb01
                case 0x18
                    struct icu_64::LanguageBreakEngine::VTable** rax_6 = j_sub_142a7dd00(0x3f8)
                    arg_20 = rax_6
                    
                    if (rax_6 == 0)
                        result = nullptr
                    else
                        result = sub_142b6d3c0(rax_6, rax_2, &arg_18)
                    
                    goto label_142b0eb01
                case 0x1c
                    struct icu_64::LanguageBreakEngine::VTable** rax_8 = j_sub_142a7dd00(0x3f8)
                    arg_20 = rax_8
                    
                    if (rax_8 == 0)
                        result = nullptr
                    else
                        result = sub_142b6cdb0(rax_8, rax_2, &arg_18)
                    
                    goto label_142b0eb01
                case 0x26
                    struct icu_64::LanguageBreakEngine::VTable** rax_4 = j_sub_142a7dd00(0x4c0)
                    arg_20 = rax_4
                    
                    if (rax_4 == 0)
                        result = nullptr
                    else
                        result = sub_142b6d5e0(rax_4, rax_2, &arg_18)
                    
                label_142b0eb01:
                    
                    if (result == 0)
                        (**rax_2)(rax_2, 1)
                    else if (arg_18 s> 0)
                        (*result)->__offset(0x0).q(result, 1)
                        return nullptr
        return result

return nullptr
