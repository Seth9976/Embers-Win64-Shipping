// 函数: sub_142aa5d00
// 地址: 0x142aa5d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int16_t* result = sub_142b1c660(*(*(arg1 + 8) + 0x30), arg2, arg3, nullptr, arg5)
int16_t* result_1 = result

if (*arg5 s<= 0)
    int32_t rcx_2 = arg4[3].d
    
    if (rcx_2 s<= 0)
        int32_t r8 = *(arg4 + 0x14)
        
        if (r8 s>= arg4[2].d)
            result = (*(*arg4 + 0x28))(arg4, 1, r8)
        
        if (r8 s< arg4[2].d || result.b != 0)
            result = arg4[1]
            *(sx.q(*(arg4 + 0x14)) + result) = 1
        
        *(arg4 + 0x14) += 1
    else
        arg4[3].d = rcx_2 - 1
    
    void* rdi_1 = nullptr
    uint32_t r15_1 = 0
    
    if (result_1 != arg2)
        result = sub_142b18d20(0, arg2, ((result_1 - arg2) s>> 1).d, arg4)
        r15_1 = result.d
    
    int32_t rdx_3
    
    if (arg3 == 0)
        if (*result_1 != 0)
            rdx_3 = -1
        label_142aa5dee:
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            int32_t* var_b8
            var_b8.d = rdx_3
            sub_142b1c950(*(*(arg1 + 8) + 0x30), result_1, arg3, &var_98, var_b8.d, arg5)
            int32_t r8_6
            int32_t var_8c
            
            if (var_90_1 s< 0)
                r8_6 = var_8c
            else
                r8_6 = sx.d(var_90_1) s>> 5
            char rax_4 = var_90_1.b
            
            if ((rax_4 & 0x11) == 0)
                void var_8e
                rdi_1 = &var_8e
                void* var_80
                
                if ((rax_4 & 2) == 0)
                    rdi_1 = var_80
            
            sub_142b18d20(r15_1, rdi_1, r8_6, arg4)
            result = sub_142a47ff0(&var_98)
    else if (result_1 != arg3)
        rdx_3 = ((arg3 - result_1) s>> 1).d
        goto label_142aa5dee

__security_check_cookie(rax_1 ^ &var_d8)
return result
