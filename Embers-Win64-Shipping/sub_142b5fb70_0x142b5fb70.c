// 函数: sub_142b5fb70
// 地址: 0x142b5fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int16_t r8 = *(arg1 + 8)
uint64_t result

if ((r8 & 0xffe0) != 0)
    int32_t rax_3
    
    if (r8 s< 0)
        rax_3 = *(arg1 + 0xc)
    else
        rax_3 = sx.d(r8) s>> 5
    
    int32_t var_168 = rax_3
    void* rcx
    
    if ((r8.b & 0x11) != 0)
        rcx = nullptr
    else if ((r8.b & 2) == 0)
        rcx = *(arg1 + 0x18)
    else
        rcx = arg1 + 0xa
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148
    sub_142a47a60(&var_148, 0, sub_142b13930(rcx, &var_168), var_168)
    struct icu_64::UObject::icu_64::Locale::VTable* var_108
    sub_142a45710(&var_108, &data_1434cce10, nullptr, nullptr, nullptr)
    sub_142a4b100(&var_148, &var_108)
    sub_142a45a20(&var_108)
    int32_t result_1 = 0
    
    if (*arg2 == 0)
    label_142b5fcae:
        result_1 = -1
    else
        int64_t rdi_1 = 0
        void* rax_5 = arg2
        
        while (true)
            int64_t rbx_1 = *rax_5
            int32_t rax_6 = std::_WChar_traits<wchar_t>::length(rbx_1)
            int16_t var_140
            int32_t r8_3
            int32_t var_13c
            
            if (var_140 s< 0)
                r8_3 = var_13c
            else
                r8_3 = sx.d(var_140) s>> 5
            char* var_178_1
            var_178_1.d = 0
            
            if (sub_142a48fb0(&var_148, 0, r8_3, rbx_1, var_178_1.d, rax_6) == 0)
                break
            
            result_1 += 1
            rdi_1 += 1
            rax_5 = &arg2[rdi_1]
            
            if (*rax_5 == 0)
                goto label_142b5fcae
    
    sub_142a47ff0(&var_148)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_198)
return result
