// 函数: sub_142b533d0
// 地址: 0x142b533d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b8 = -2
void var_1f8
struct icu_64::TimeZoneNames::icu_64::TimeZoneNamesDelegate::VTable** result =
    __security_cookie ^ &var_1f8
struct icu_64::TimeZoneNames::icu_64::TimeZoneNamesDelegate::VTable** result_1 = result

if (*arg3 s<= 0)
    result = sub_142ac6460(arg2, arg3)
    *(arg1 + 0xe8) = result
    
    if (*arg3 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
        sub_142a47a60(&var_168, 1, &data_14366fae0, 0xffffffff)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
        sub_142a47a60(&var_1a8, 1, u"{1} ({0})", 0xffffffff)
        int32_t var_1c8[0x4]
        var_1c8[0] = 0
        char** rax_1 = sub_142a641c0("icudt64l-zone", *(arg2 + 0x28), &var_1c8)
        char** rax_2 = sub_142a62230(rax_1, "zoneStrings", rax_1, &var_1c8)
        
        if (var_1c8[0] s<= 0)
            void* rax_3 = sub_142a63c50(rax_2, "regionFormat", nullptr, &var_1c8)
            
            if (var_1c8[0] s<= 0 && std::_WChar_traits<wchar_t>::length(rax_3) s> 0)
                sub_142a4afe0(&var_168)
                int16_t var_160
                int32_t r8_3
                int32_t var_15c
                
                if (var_160 s< 0)
                    r8_3 = var_15c
                else
                    r8_3 = sx.d(var_160) s>> 5
                sub_142a49390(&var_168, 0, r8_3, rax_3, 0, 0xffffffff)
            
            var_1c8[0] = 0
            void* rax_5 = sub_142a63c50(rax_2, "fallbackFormat", nullptr, &var_1c8)
            
            if (var_1c8[0] s<= 0 && std::_WChar_traits<wchar_t>::length(rax_5) s> 0)
                sub_142a4afe0(&var_1a8)
                int16_t var_1a0
                int32_t r8_5
                int32_t var_19c
                
                if (var_1a0 s< 0)
                    r8_5 = var_19c
                else
                    r8_5 = sx.d(var_1a0) s>> 5
                sub_142a49390(&var_1a8, 0, r8_5, rax_5, 0, 0xffffffff)
        
        sub_142a5f860(rax_2)
        sub_142b62570(arg1 + 0x100, &var_168, 1, 1, arg3)
        sub_142b62570(arg1 + 0x140, &var_1a8, 2, 2, arg3)
        
        if (*arg3 s> 0)
            sub_142b518f0(arg1)
        else
            *(arg1 + 0x180) = sub_142b88870(arg2, 0)
            *(arg1 + 0xf0) = sub_142a86f30(sub_142a86d10, sub_142a86ba0, 0, arg3)
            
            if (*arg3 s> 0)
                sub_142b518f0(arg1)
            else
                int64_t* rax_9 = sub_142a86f30(sub_142b53a10, sub_142b539d0, 0, arg3)
                *(arg1 + 0xf8) = rax_9
                
                if (*arg3 s> 0)
                    sub_142b518f0(arg1)
                else
                    std::ios_base::precision(rax_9, sub_142a7dcd0)
                    void* rcx_19 = arg1 + 0x22
                    int64_t rax_10 = -1
                    
                    do
                        rax_10 += 1
                    while (*(rcx_19 + rax_10) != 0)
                    
                    if (rax_10.d != 0)
                        if (rax_10.d s>= 4)
                            *(arg1 + 0x1d1) = 0
                        else
                            void* rdx_8 = arg1 - rcx_19
                            char i
                            
                            do
                                i = *rcx_19
                                *(rdx_8 + rcx_19 + 0x1d1) = i
                                rcx_19 += 1
                            while (i != 0)
                        
                        goto label_142b536cb
                    
                    void var_e8
                    sub_142a4fc30(*(arg1 + 0x30), &var_e8, 0x9d, arg3)
                    int32_t rax_11 = sub_142a4cc70(&var_e8, arg1 + 0x1d1, 4, arg3)
                    
                    if (*arg3 s> 0)
                        sub_142b518f0(arg1)
                    else
                        *(sx.q(rax_11) + arg1 + 0x1d1) = 0
                    label_142b536cb:
                        int64_t* rax_13 = sub_142a64c40()
                        void* rax_14 = sub_142acf980(rax_13)
                        
                        if (rax_14 != 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
                            sub_142b53750(arg1, sub_142a47a60(&var_128, 1, rax_14, 0xffffffff))
                            sub_142a47ff0(&var_128)
                        
                        if (rax_13 != 0)
                            (**rax_13)(rax_13, 1)
        
        sub_142a47ff0(&var_1a8)
        result = sub_142a47ff0(&var_168)

__security_check_cookie(result_1 ^ &var_1f8)
return result
