// 函数: sub_142a9ce60
// 地址: 0x142a9ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_218 = -2
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result

if (*arg2 s<= 0)
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rax_2 = j_sub_142a7dd00(0x190)
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** var_228_1 = rax_2
    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result_1 = nullptr
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** rbx_1
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_142b130e0(rax_2, *(*(*(arg1 + 8) + 0xf8) + 0x20))
    
    struct icu_64::SharedObject::icu_64::CollationTailoring::VTable** var_228_2 = rbx_1
    
    if (rbx_1 == 0 || rbx_1[4] == 0)
        *arg2 = 7
    else
        char** rax_4 = sub_142a625a0(*(arg1 + 0x208), "%%CollationBin", nullptr, arg2)
        char** var_210_1 = rax_4
        int32_t var_230
        void* rax_5 = sub_142a62070(rax_4, &var_230, arg2)
        sub_142b12800(*(*(arg1 + 8) + 0xf8), rax_5, var_230, rbx_1, arg2)
        
        if (*arg2 s<= 0)
            int32_t var_238 = 0
            int32_t var_234
            void* rax_6 = sub_142a63dd0(*(arg1 + 0x208), "Sequence", &var_234, &var_238)
            
            if (var_238 s<= 0)
                sub_142a4aa20(&rbx_1[5], 1, rax_6, var_234)
            
            char* rax_7 = sub_141a50850(arg1 + 0xf0)
            struct icu_64::UObject::icu_64::Locale::VTable* var_128
            struct icu_64::UObject::icu_64::Locale::VTable** rax_9 =
                sub_142a45710(&var_128, sub_141a50850(arg1 + 0x10), nullptr, nullptr, nullptr)
            struct icu_64::UObject::icu_64::Locale::VTable* var_208
            struct icu_64::UObject::icu_64::Locale::VTable** rdi_1
            rdi_1.b =
                sub_142a45d30(sub_142a45710(&var_208, rax_7, nullptr, nullptr, nullptr), rax_9) == 0
            sub_142a45a20(&var_208)
            sub_142a45a20(&var_128)
            
            if (rdi_1.b == 0)
            label_142a9d0dd:
                sub_142a45c20(&rbx_1[0xd], arg1 + 0xf0)
                char* r8_9 = arg1 + 0x1d0
                void* rax_15 = r8_9
                uint32_t i
                uint32_t r9_6
                
                do
                    r9_6 = zx.d(*rax_15)
                    i = zx.d(*(rax_15 + arg1 + 0x1e0 - r8_9))
                    
                    if (r9_6 != i)
                        break
                    
                    rax_15 += 1
                while (i != 0)
                
                if (r9_6 - i != 0)
                    sub_142a46d60(&rbx_1[0xd], "collation", r8_9, arg2)
                else
                    char* rdi_3 = *(arg1 + 0x118)
                    void* rax_17 = sub_141a50850(arg1 + 0xf0) - rdi_3
                    uint32_t i_1
                    uint32_t rdx_12
                    
                    do
                        rdx_12 = zx.d(*rdi_3)
                        i_1 = zx.d(*(rdi_3 + rax_17))
                        
                        if (rdx_12 != i_1)
                            break
                        
                        rdi_3 = &rdi_3[1]
                    while (i_1 != 0)
                    
                    if (rdx_12 - i_1 != 0)
                        sub_142a46d60(&rbx_1[0xd], "collation", nullptr, arg2)
                
                if (*arg2 s<= 0)
                    if (*(arg1 + 0x1f4) != 0)
                        *arg2 = 0xffffff81
                    
                    rbx_1[0x2d] = *(arg1 + 0x1f8)
                    *(arg1 + 0x1f8) = 0
                    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** rax_19 =
                        j_sub_142a7dd00(0x100)
                    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** var_220_1 =
                        rax_19
                    struct icu_64::SharedObject::icu_64::CollationCacheEntry::VTable** result_2
                    
                    if (rax_19 == 0)
                        result_2 = nullptr
                    else
                        result_2 = sub_142a9c1e0(rax_19, arg1 + 0x10, rbx_1)
                    
                    if (result_2 != 0)
                        rbx_1 = nullptr
                        int64_t var_228_3 = 0
                        sub_142aa6d40(result_2)
                        result_1 = result_2
                    else
                        *arg2 = 7
            else
                char** rax_12 = sub_142a641c0("icudt64l-coll", rax_7, arg2)
                
                if (*arg2 s<= 0)
                    var_238 = 0
                    char** rax_13 = sub_142a62230(rax_12, "collations/default", nullptr, &var_238)
                    void* rax_14 = sub_142a63f30(rax_13, &var_234, &var_238)
                    int32_t r8_7
                    
                    if (var_238 s<= 0)
                        r8_7 = var_234
                    
                    if (var_238 s> 0 || r8_7 s>= 0x10)
                        __builtin_strncpy(arg1 + 0x1e0, "standard", 9)
                    else
                        sub_142a8d6e0(rax_14, arg1 + 0x1e0, r8_7 + 1)
                    
                    if (rax_13 != 0)
                        sub_142a5f860(rax_13)
                    
                    if (rax_12 != 0)
                        sub_142a5f860(rax_12)
                    
                    goto label_142a9d0dd
                
                if (rax_12 != 0)
                    sub_142a5f860(rax_12)
        
        if (rax_4 != 0)
            sub_142a5f860(rax_4)
    
    if (rbx_1 != 0)
        struct icu_64::SharedObject::icu_64::CollationTailoring::VTable* r8_11 = *rbx_1
        r8_11->__offset(0x0).q(rbx_1, 1, r8_11)
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_268)
return result
