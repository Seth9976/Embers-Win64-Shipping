// 函数: sub_142a46220
// 地址: 0x142a46220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_138 = -2
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable** result_1 = nullptr
struct icu_64::StringEnumeration::icu_64::KeywordEnumeration::VTable** result

if (*arg2 s<= 0)
    char* rax_2 = strchr(*(arg1 + 0x28), 0x40)
    char* rax_3
    int64_t rdx
    rax_3, rdx = strchr(*(arg1 + 0x28), 0x3d)
    
    if (rax_2 != 0)
        if (rax_3 u<= rax_2)
            *arg2 = 3
        else
            int32_t* var_148_1 = arg2
            char var_150_1 = 0
            int64_t var_158_1 = 0
            int32_t var_160_1 = 0
            rdx.b = 0x40
            void var_128
            int32_t rax_4 = sub_142a4cc20(&rax_2[1], rdx, &var_128, 0x100, 0)
            
            if (*arg2 s<= 0 && rax_4 != 0)
                struct icu_64::UObject::icu_64::StringEnumeration::VTable** rax_5 =
                    j_sub_142a7dd00(0xd0)
                struct icu_64::UObject::icu_64::StringEnumeration::VTable** var_130_1 = rax_5
                
                if (rax_5 != 0)
                    result_1 = sub_142a455b0(rax_5, &var_128, rax_4, 0, arg2)
                
                if (result_1 == 0)
                    *arg2 = 7
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_188)
return result
