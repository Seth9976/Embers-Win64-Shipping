// 函数: sub_142a6b1f0
// 地址: 0x142a6b1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_370 = -2
void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* result

if (*arg2 s<= 0)
    struct icu_64::UObject::icu_64::Locale::VTable* var_1a8
    sub_142a459c0(&var_1a8)
    int64_t* inptr
    
    if (data_1440158a8 == 0)
        inptr = sub_142a68c00(sub_142a69e60(*(arg1 + 0x28)), arg1, arg2)
    else
        inptr = sub_142a9b460(sub_142a69d80(arg2), arg1, 0xffffffff, &var_1a8, arg2)
    
    int64_t* rbx_1
    
    if (*arg2 s> 0)
        rbx_1 = nullptr
    else if (inptr == 0)
        *arg2 = 5
        rbx_1 = nullptr
    else
        rbx_1 = nullptr
        int32_t* var_388
        var_388.d = 0
        void* rax_5 = __RTDynamicCast(inptr, 0, &class icu_64::UObject `RTTI Type Descriptor', 
            &class icu_64::UnicodeString `RTTI Type Descriptor', var_388.d)
        
        if (rax_5 == 0)
            rbx_1 = inptr
        else
            struct icu_64::UObject::icu_64::Locale::VTable* var_368
            sub_142a45710(&var_368, &data_1434cce10, nullptr, nullptr, nullptr)
            sub_142aa7250(rax_5, &var_368)
            struct icu_64::UObject::icu_64::Locale::VTable* var_288
            sub_142a459c0(&var_288)
            (**inptr)(inptr, 1)
            int64_t* inptr_1 =
                sub_142a9b460(sub_142a69d80(arg2), &var_368, 0xffffffff, &var_288, arg2)
            
            if (*arg2 s> 0)
                sub_142a45a20(&var_288)
                sub_142a45a20(&var_368)
            else if (inptr_1 == 0)
                *arg2 = 5
                sub_142a45a20(&var_288)
                sub_142a45a20(&var_368)
            else
                int32_t* var_388_2
                var_388_2.d = 0
                
                if (__RTDynamicCast(inptr_1, 0, &class icu_64::Calendar `RTTI Type Descriptor', 
                        &class icu_64::UnicodeString `RTTI Type Descriptor', var_388_2.d) == 0)
                    sub_142a6c280(inptr_1, arg1, (*(*inptr_1 + 0xb0))(inptr_1), arg2)
                    int32_t var_378 = 0
                    int32_t* var_388_3 = &var_378
                    char var_c8[0xa0]
                    sub_142a46470(&var_368, "calendar", &var_c8, 0x9d)
                    
                    if (var_378 s<= 0)
                        while (true)
                            char rax_12 = *(&var_c8 + rbx_1)
                            rbx_1 += 1
                            
                            if (rax_12 != *(rbx_1 + 0x14363f58f))
                                break
                            
                            if (rbx_1 == 8)
                                if (inptr_1[0x20].d != 2)
                                    inptr_1[0x20].d = 2
                                    *(inptr_1 + 9) = 0
                                
                                if (*(inptr_1 + 0x104) != 4)
                                    *(inptr_1 + 0x104) = 4
                                    *(inptr_1 + 9) = 0
                                
                                break
                    
                    sub_142a45a20(&var_288)
                    sub_142a45a20(&var_368)
                    rbx_1 = inptr_1
                else
                    *arg2 = 2
                    (**inptr_1)(inptr_1, 1)
                    sub_142a45a20(&var_288)
                    sub_142a45a20(&var_368)
    
    sub_142a45a20(&var_1a8)
    result = rbx_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_3a8)
return result
