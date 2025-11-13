// 函数: sub_142a59f50
// 地址: 0x142a59f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
struct icu_64::UObject::icu_64::Formattable::VTable* var_98
sub_142aa7770(&var_98)
int32_t rbp = *(arg3 + 8)
(*(*arg1 + 0xa0))(arg1, arg2, &var_98, arg3)
struct icu_64::UObject::icu_64::Measure::VTable** result

if (*(arg3 + 8) == rbp)
    result = nullptr
else
    int32_t var_b8[0x4]
    var_b8[0] = 0
    int16_t var_28
    (*(*arg1 + 0x118))(arg1, &var_28, &var_b8)
    
    if (var_b8[0] s> 0)
        result = nullptr
    else
        struct icu_64::UObject::icu_64::Measure::VTable** rax_4 = j_sub_142a7dd00(0x80)
        struct icu_64::UObject::icu_64::Measure::VTable** var_a0_1 = rax_4
        
        if (rax_4 == 0)
            result = nullptr
        else
            result = sub_142aab090(rax_4, &var_98, &var_28, &var_b8)
        
        if (result == 0)
            if (var_b8[0] s<= result.d)
                var_b8[0] = 7
            
            goto label_142a5a02e
        
        if (var_b8[0] s> 0)
        label_142a5a02e:
            *(arg3 + 8) = rbp
            
            if (result != 0)
                (*result)->__offset(0x0).q(result, 1)
            
            result = nullptr

sub_142aa7840(&var_98)
__security_check_cookie(rax_1 ^ &var_d8)
return result
