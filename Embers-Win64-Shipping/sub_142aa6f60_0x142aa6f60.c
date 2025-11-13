// 函数: sub_142aa6f60
// 地址: 0x142aa6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rsi = nullptr
int32_t var_d8 = 0
int32_t rax_2 = data_144015e00
char rax_3

if (rax_2 != 2)
    rax_3 = sub_142a85f00(&data_144015e00)

if (rax_2 == 2 || rax_3 == 0)
    int32_t rcx_1 = var_d8
    int32_t rax_5 = data_144015e04
    
    if (rax_5 s> 0)
        rcx_1 = rax_5
    
    var_d8 = rcx_1
else
    sub_142aa7490(&var_d8)
    data_144015e04 = var_d8
    sub_142a85e80(&data_144015e00)

int64_t* r15 = data_144015e08
void** result

if (r15 == 0)
    result = nullptr
else
    sub_142a860a0(nullptr)
    void** result_1 = sub_142a86c30(*r15, arg1)
    sub_142a860d0(nullptr)
    
    if (result_1 != 0)
        result = result_1
    else
        int64_t* result_2 = j_sub_142a7dd00(zx.q((&result_1[0xb]).d))
        result_1 = result_2
        int64_t* result_4 = result_2
        
        if (result_2 == 0)
            result_1 = nullptr
        else
            *result_2 = 0
            
            if (var_d8 s<= 0)
                sub_142a86da0(&result_2[1], sub_142a4b0a0, sub_142a4b070, 0, &var_d8)
                
                if (var_d8 s<= 0)
                    *result_1 = &result_2[1]
                    std::ios_base::precision(&result_2[1], sub_140a4f210)
        
        if (result_1 == 0 || var_d8 s> 0)
            result = result_1
        else
            int16_t var_ac
            void* var_b8 = &var_ac:1
            int32_t var_b0_1 = 0x28
            var_ac = 0
            int32_t var_80_1 = 0
            sub_142a8cd50(&var_b8, arg1, &var_d8)
            void* rcx_7 = var_b8
            
            if (var_80_1 == 0)
                rcx_7 = nullptr
            
            int128_t* rax_7 = sub_142a63ff0(rcx_7, &var_d8)
            int128_t* var_d0_1 = rax_7
            
            for (int64_t i = sub_142a92b30(rax_7, 0, &var_d8); i != 0; 
                    i = sub_142a92b30(rax_7, 0, &var_d8))
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_8 =
                    Concurrency::agent::agent(&var_78, i)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                    j_sub_142a7dd00(0x40)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_c8_1 = rax_9
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10
                
                if (rax_9 == 0)
                    rax_10 = nullptr
                else
                    rax_10 = sub_142a479b0(rax_9, rax_8)
                
                sub_142a86f50(*result_1, rax_10, result_1, &var_d8)
                sub_142a47ff0(&var_78)
            
            if (var_d8 s<= 0)
                sub_142a860a0(nullptr)
                void** result_3 = sub_142a86c30(*r15, arg1)
                
                if (result_3 == 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_11 =
                        j_sub_142a7dd00(0x40)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_c8_2 = rax_11
                    
                    if (rax_11 != 0)
                        rsi = sub_142a479b0(rax_11, arg1)
                    
                    sub_142a86f50(*r15, rsi, result_1, &var_d8)
                    sub_142a860d0(nullptr)
                else
                    sub_142a860d0(nullptr)
                    void* rcx_19 = *result_1
                    
                    if (rcx_19 != 0)
                        sub_142a869e0(rcx_19)
                    
                    sub_142a47920(result_1)
                    result_1 = result_3
                
                if (rax_7 != 0)
                    sub_142a92960(rax_7)
                
                if (var_ac.b != 0)
                    sub_142a7dcd0(var_b8)
                
                result = result_1
            else
                void* rcx_14 = *result_1
                
                if (rcx_14 != 0)
                    sub_142a869e0(rcx_14)
                
                sub_142a47920(result_1)
                
                if (rax_7 != 0)
                    sub_142a92960(rax_7)
                
                if (var_ac.b != 0)
                    sub_142a7dcd0(var_b8)
                
                result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
