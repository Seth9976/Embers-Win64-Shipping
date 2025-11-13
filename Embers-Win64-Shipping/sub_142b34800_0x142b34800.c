// 函数: sub_142b34800
// 地址: 0x142b34800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
uint128_t zmm7
uint128_t var_68 = zmm7
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t var_148 = 0
char result
int512_t zmm0
result, zmm0 = sub_142b32a70(arg1, arg5, &var_148)
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_140
struct icu_64::UObject::icu_64::Formattable::VTable* var_e8
int64_t var_e0
uint128_t zmm6

if (result != 0)
    if (arg7 == 0)
        zmm0.o = arg4
    else
        var_140 = &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
        int32_t var_138_2 = 0
        int32_t var_134_2 = 0xffffffff
        sub_142aa7770(&var_e8)
        int64_t* rcx_15 = *(arg1 + 0x60)
        
        if ((*(*arg7 + 0x48))(arg7, arg2, &var_140, arg4, arg9, (*(*rcx_15 + 0xc0))(rcx_15), arg8, 
                &var_e8) == 0 || var_138_2 == 0)
            *(arg6 + 0xc) = var_134_2
            zmm6 = zx.o(0)
        else
            *(arg6 + 8) = var_138_2
            zmm6 = zx.o(var_e0)
        
        sub_142aa7840(&var_e8)
        result = sub_142aa8450(&var_140)
        zmm0.o = zmm6
else if (var_148 s<= 0)
    var_140 = &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_138_1 = 0
    int32_t var_134_1 = 0xffffffff
    sub_142aa7770(&var_e8)
    int32_t rax_2 = sub_142b33da0(arg1, arg2, arg5, arg3, &var_148)
    int32_t rdi_1 = rax_2
    
    if (rax_2 s< 0)
    label_142b349ef:
        *(arg6 + 8) = 0
        zmm6 = zx.o(0)
    else
        while (true)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_120_1 = 2
            sub_142a4afe0(&var_128)
            int32_t var_11c
            int32_t r8_3
            
            if (var_120_1 s< 0)
                r8_3 = var_11c
            else
                r8_3 = sx.d(var_120_1) s>> 5
            
            char var_160
            var_160.d = rdi_1
            int32_t* var_168_1
            var_168_1.d = 0
            sub_142a49310(&var_128, 0, r8_3, arg2, var_168_1.d, var_160)
            int32_t rax_6
            
            if (var_120_1 s< 0)
                rax_6 = var_11c
            else
                rax_6 = sx.d(var_120_1) s>> 5
            
            if (rax_6 s> 0)
                int64_t* rcx_4 = *(arg1 + 0x60)
                int32_t rcx_7 = var_138_1
                
                if ((*(*arg7 + 0x48))(arg7, &var_128, &var_140, arg4, arg9, 
                        (*(*rcx_4 + 0xc0))(rcx_4), arg8, &var_e8) != 0 && rcx_7 == rdi_1)
                    *(arg6 + 8) = var_148 + rdi_1
                    zmm6 = zx.o(var_e0)
                    sub_142a47ff0(&var_128)
                    break
                
                if (var_134_1 s> 0)
                    rcx_7 = var_134_1
                
                *(arg6 + 0xc) = rcx_7
            
            var_138_1 = 0
            rdi_1 = sub_142b33da0(arg1, arg2, arg5, var_148 + rdi_1, &var_148)
            sub_142a47ff0(&var_128)
            
            if (rdi_1 s< 0)
                goto label_142b349ef
    
    sub_142aa7840(&var_e8)
    result = sub_142aa8450(&var_140)
    zmm0.o = zmm6
else
    zmm0.o = zx.o(0)
__security_check_cookie(rax_1 ^ &var_188)
return result
