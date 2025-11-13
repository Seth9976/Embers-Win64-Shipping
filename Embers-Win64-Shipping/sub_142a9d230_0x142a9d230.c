// 函数: sub_142a9d230
// 地址: 0x142a9d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t* result

if (*arg2 s<= 0)
    arg1[0x3f] = sub_142a64190("icudt64l-coll", sub_141a50850(&arg1[0x1e]), arg2)
    
    if (*arg2 != 2)
        struct icu_64::UObject::icu_64::Locale::VTable* var_1e8
        sub_142a456d0(&var_1e8, &arg1[0x1e])
        char* rax_4 = sub_142a637a0(arg1[0x3f], 0, arg2)
        int64_t* result_1 = nullptr
        
        if (*arg2 s<= 0)
            struct icu_64::UObject::icu_64::Locale::VTable* var_108
            sub_142a45c20(&arg1[0x1e], 
                sub_142a45b10(&arg1[2], sub_142a45710(&var_108, rax_4, nullptr, nullptr, nullptr)))
            sub_142a45a20(&var_108)
            
            if (arg1[0x3a].b != 0)
                sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg2)
            
            int64_t* result_2
            
            if (sub_142a45d30(&arg1[0x1e], &var_1e8) != 0)
                result_2 = sub_142a9c8c0(arg1, arg2)
            else
                result_2 = sub_142a9c6c0(arg1, arg2)
            
            result_1 = result_2
        
        sub_142a45a20(&var_1e8)
        result = result_1
    else
        *arg2 = 0xffffff81
        sub_142aa6d40(arg1[1])
        result = arg1[1]
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_228)
return result
