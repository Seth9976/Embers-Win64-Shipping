// 函数: sub_142af2790
// 地址: 0x142af2790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t result

if (**(arg1 + 8) s> 0)
    result = 0
else
    int512_t zmm0 = sub_142af21f0(arg1, arg1 + 0x48, arg2)
    
    if (*(arg1 + 0x48) == 0x7b)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_c0_1 = 2
        sub_142af21f0(arg1, arg1 + 0x48, zmm0)
        int32_t i = *(arg1 + 0x48)
        int32_t result_1 = 0
        
        for (; i != 0x7d; i = *(arg1 + 0x48))
            if (i == 0xffffffff)
                goto label_142af2914
            
            sub_142af21f0(arg1, arg1 + 0x48, sub_142a48580(&var_c8, i))
        
        int32_t var_bc
        int32_t rdx_6
        
        if (var_c0_1 s< 0)
            rdx_6 = var_bc
        else
            rdx_6 = sx.d(var_c0_1) s>> 5
        
        char rax_4 = var_c0_1.b
        int16_t* rcx_4
        
        if ((rax_4 & 0x11) == 0)
            void var_be
            rcx_4 = &var_be
            int16_t* var_b0
            
            if ((rax_4 & 2) == 0)
                rcx_4 = var_b0
        else
            rcx_4 = nullptr
        
        char rax_5 = sub_142a8d900(rcx_4, rdx_6)
        int32_t rcx_6
        int32_t r8_1
        
        if (rax_5 != 0)
            r8_1 = var_bc
            
            if (var_c0_1 s< 0)
                rcx_6 = r8_1
            else
                rcx_6 = sx.d(var_c0_1) s>> 5
        
        if (rax_5 == 0 || rcx_6 u>= 0x64)
        label_142af2914:
            sub_142af0120(arg1, 0x10304)
        else
            if (var_c0_1 s>= 0)
                r8_1 = sx.d(var_c0_1) s>> 5
            
            int32_t var_e0_1 = 0
            char var_88[0x70]
            sub_142a49990(&var_c8, 0, r8_1, &var_88, 0x64)
            int32_t result_2
            int512_t zmm0_2
            result_2, zmm0_2 = sub_142b65ef0(0, &var_88, *(arg1 + 8))
            result_1 = result_2
            
            if (**(arg1 + 8) s> 0)
                zmm0_2 = sub_142af0120(arg1, 0x10304)
            
            sub_142af21f0(arg1, arg1 + 0x48, zmm0_2)
        
        sub_142a47ff0(&var_c8)
        result = zx.q(result_1)
    else
        sub_142af0120(arg1, 0x10304)
        result = 0

__security_check_cookie(rax_1 ^ &var_108)
return result
