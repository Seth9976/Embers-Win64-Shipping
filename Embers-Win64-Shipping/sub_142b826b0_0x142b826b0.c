// 函数: sub_142b826b0
// 地址: 0x142b826b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_138
int32_t* result = __security_cookie ^ &var_138
int32_t* result_1 = result

if (arg1[2] != 0)
    int32_t rbx_1 = arg4 + arg1[1].d
    int64_t rax_2 = (*(*arg1 + 0x40))()
    result = sub_142b36320(arg1[2], rax_2, arg3, rbx_1, arg6, arg7)
else if (arg1[3] != 0)
    int64_t rax_4 = *arg1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
    int32_t var_ec
    struct icu_64::UObject::icu_64::Formattable::VTable* var_b8
    
    if (arg2 s> 0x1fffffffffffff)
        int64_t rax_10 = (*(rax_4 + 0x40))()
        var_f8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_f0_2 = 2
        sub_142aa77d0(&var_b8, rax_10)
        sub_142aa8370(arg1[3], &var_b8, &var_f8, arg7)
        sub_142aa7840(&var_b8)
        int32_t rax_14
        
        if (var_f0_2 s< 0)
            rax_14 = var_ec
        else
            rax_14 = sx.d(var_f0_2) s>> 5
        
        sub_142a49310(arg3, arg4 + arg1[1].d, 0, &var_f8, 0, rax_14)
    else
        (*(rax_4 + 0x38))()
        zmm6 = arg5
        
        if (sub_142a59170(arg1[3]) == 0)
            zmm6 = sub_142a4b9b0(zmm6.q)
        
        var_f8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_f0_1 = 2
        sub_142aa7700(&var_b8, zmm6)
        sub_142aa8370(arg1[3], &var_b8, &var_f8, arg7)
        sub_142aa7840(&var_b8)
        int32_t rax_9
        
        if (var_f0_1 s< 0)
            rax_9 = var_ec
        else
            rax_9 = sx.d(var_f0_1) s>> 5
        
        sub_142a49310(arg3, arg4 + arg1[1].d, 0, &var_f8, 0, rax_9)
    result = sub_142a47ff0(&var_f8)

__security_check_cookie(result_1 ^ &var_138)
return result
