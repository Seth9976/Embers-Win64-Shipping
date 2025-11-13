// 函数: sub_142a7c540
// 地址: 0x142a7c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* result_1 = arg3
void* result

if (*arg4 s> 0)
    result = result_1
else
    int32_t rax_2 = *(arg1 + 0x13c)
    
    if (rax_2 s<= 0)
        int64_t rax_3 = *(arg1 + 0x30)
        *(arg1 + 0x40) = 0
        *(arg1 + 0x70) = 0
        *(arg1 + 0x50) = 0
        *(arg1 + 0x60) = 0
        *(arg1 + 0x88) = 0
        *(arg1 + 0x90) = 0
        *(arg1 + 0xa0) = 0
        *(arg1 + 0x82) = 0
        *(arg1 + 0xa8) = 0
        *(arg1 + 0x10c) = 0
        int32_t var_128 = 0
        *(arg1 + 0x48) = rax_3
        *(arg1 + 0x78) = rax_3
        *(arg1 + 0x58) = rax_3
        *(arg1 + 0x68) = rax_3
        *(arg1 + 0x98) = -1
        *(arg1 + 0x110) = 0x2710
        char rax_4
        int512_t zmm1_1
        rax_4, zmm1_1 = sub_142a79bd0(arg1, &var_128, arg5)
        
        if (rax_4 != 0)
            if (result_1 == 0)
                int64_t var_118 = 0x345ad82c
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int32_t var_110_1 = 0
                int32_t var_10c_1 = 0x90
                int16_t var_80_1 = 2
                int64_t var_108
                __builtin_memset(&var_108, 0, 0x80)
                int64_t r8_2
                int512_t zmm1_2
                r8_2, zmm1_2 = sub_142aeabd0(&var_118, &var_88, arg4)
                r8_2.b = 1
                result_1 = sub_142aea410(0, &var_118, r8_2, 0, zmm1_2, arg4)
                sub_142aea470(&var_118)
                sub_142a47ff0(&var_88)
            
            sub_142a79130(arg1, result_1, arg2, arg4)
            sub_142a798d0(arg1, result_1, arg4)
            result = result_1
        else
            result = sub_142a7abd0(arg1, result_1, arg4, zmm1_1)
    else
        *arg4 = rax_2
        result = result_1

__security_check_cookie(rax_1 ^ &var_158)
return result
