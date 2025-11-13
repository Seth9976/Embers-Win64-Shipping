// 函数: sub_142a9cb00
// 地址: 0x142a9cb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_218 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result

if (*arg2 s<= 0)
    char** rax_2 = sub_142a62230(arg1[0x40], &arg1[0x3a], nullptr, arg2)
    char** rbx_1 = rax_2
    char** var_220_1 = rax_2
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while (arg1[0x3a + rax_3] != 0)
    
    int32_t rcx_1 = *arg2
    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result_1
    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result_2
    
    if (rcx_1 != 2)
        result_1 = nullptr
        
        if (rcx_1 s<= 0)
            char** rcx_7 = rbx_1
            rbx_1 = nullptr
            int64_t var_220_2 = 0
            arg1[0x41] = rcx_7
            char* rax_8 = sub_142a637a0(rcx_7, 0, arg2)
            
            if (*arg2 s<= 0)
                struct icu_64::UObject::icu_64::Locale::VTable* var_208
                struct icu_64::UObject::icu_64::Locale::VTable** rax_10 =
                    sub_142a45710(&var_208, sub_141a50850(&arg1[2]), nullptr, nullptr, nullptr)
                struct icu_64::UObject::icu_64::Locale::VTable* var_128
                bool var_228_1 =
                    sub_142a45d30(sub_142a45710(&var_128, rax_8, nullptr, nullptr, nullptr), rax_10)
                    == 0
                sub_142a45a20(&var_128)
                sub_142a45a20(&var_208)
                char* rax_13 = &arg1[0x3a]
                uint32_t i
                uint32_t rdx_8
                
                do
                    rdx_8 = zx.d(*rax_13)
                    i = zx.d(rax_13[&arg1[0x3c] - &arg1[0x3a]])
                    
                    if (rdx_8 != i)
                        break
                    
                    rax_13 = &rax_13[1]
                while (i != 0)
                
                if (rdx_8 - i != 0)
                    sub_142a46d60(&arg1[2], "collation", &arg1[0x3a], arg2)
                
                if (rdx_8 - i == 0 || *arg2 s<= 0)
                    if (*rax_8 != 0)
                        int64_t rcx_15 = 0
                        
                        while (true)
                            char rax_14 = rax_8[rcx_15]
                            rcx_15 += 1
                            
                            if (rax_14 != *(rcx_15 + 0x143613e9b))
                                break
                            
                            if (rcx_15 == 5)
                                goto label_142a9cd7e
                        
                        goto label_142a9cdc9
                    
                label_142a9cd7e:
                    int32_t rax_15 = strcmp(&arg1[0x3a], "standard")
                    
                    if (rax_15 != 0)
                    label_142a9cdc9:
                        sub_142a45b10(&arg1[0x1e], 
                            sub_142a45710(&var_208, rax_8, nullptr, nullptr, nullptr))
                        sub_142a45a20(&var_208)
                        
                        if (var_228_1 == 0)
                            result_2 = sub_142a9ce60(arg1, arg2)
                        else
                            sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
                            result_2 = sub_142a9d610(&arg1[2], sub_142a9c6c0(arg1, arg2), arg2)
                        
                        result_1 = result_2
                    else
                        if (*(arg1 + 0x1f4) != rax_15.b)
                            *arg2 = 0xffffff81
                        
                        result_1 = sub_142a9d6c0(arg1, &arg1[2], arg2)
    else
        *arg2 = 0xffffff81
        *(arg1 + 0x1f4) = 1
        int32_t rax_4
        
        if ((arg1[0x3e].b & 1) == 0 && rax_3.d s> 6)
            rax_4 = strncmp(&arg1[0x3a], "search", zx.q(rcx_1 + 4))
        
        if ((arg1[0x3e].b & 1) != 0 || rax_3.d s<= 6 || rax_4 != 0)
            int32_t rax_5 = arg1[0x3e].d
            
            if ((rax_5.b & 2) == 0)
                arg1[0x3e].d = rax_5 | 2
                void* rcx_3 = &arg1[0x3c]
                char* rdx_2 = &arg1[0x3a] - rcx_3
                char i_1
                
                do
                    i_1 = *rcx_3
                    *(rdx_2 + rcx_3) = i_1
                    rcx_3 += 1
                while (i_1 != 0)
                sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
                result_2 = sub_142a9c6c0(arg1, arg2)
            else if ((rax_5.b & 4) != 0)
                result_2 = sub_142a9d6c0(arg1, &arg1[2], arg2)
            else
                arg1[0x3e].d = rax_5 | 4
                __builtin_strncpy(&arg1[0x3a], "standard", 9)
                sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
                result_2 = sub_142a9c6c0(arg1, arg2)
        else
            arg1[0x3e].d |= 1
            *(arg1 + 0x1d6) = rax_4.b
            sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
            result_2 = sub_142a9c6c0(arg1, arg2)
        
        result_1 = result_2
    
    if (rbx_1 != 0)
        sub_142a5f860(rbx_1)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_258)
return result
