// 函数: sub_142b4e530
// 地址: 0x142b4e530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* rsi = arg4
int64_t* result

if (*arg4 s> 0)
    result = nullptr
else
    int64_t rdi_1 = 0
    
    if (*arg2 != 0)
        goto label_142b4e622
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    sub_142b4ec00(arg3, &var_88)
    int32_t var_7c
    int32_t rax_4
    
    if (var_80_1 s< 0)
        rax_4 = var_7c
    else
        rax_4 = sx.d(var_80_1) s>> 5
    
    if (rax_4 s<= 0)
        goto label_142b4e61a
    
    void* rax_5 = sub_142a4a210(&var_88)
    uint64_t rax_8
    
    if (var_80_1 s< 0)
        rax_8 = zx.q(var_7c)
    else
        rax_8 = zx.q(sx.d(var_80_1) s>> 5)
    
    int64_t rbx_1 = sx.q(((rax_8 << 1) + 2).d)
    int64_t rax_10 = sub_142a7dd00(rbx_1)
    rdi_1 = rax_10
    
    if (rax_10 != 0)
        memcpy(rax_10, rax_5, rbx_1.d)
    label_142b4e61a:
        sub_142a47ff0(&var_88)
    label_142b4e622:
        void* rax_11 = j_sub_142a65150(arg3)
        int64_t* result_1 = j_sub_142a7dd00(0x40)
        int64_t* result_2 = result_1
        
        if (result_1 == 0)
            *rsi = 7
            result = nullptr
        else
            result_1[7].b = 0
            *result_1 = *arg2
            *(result_1 + 0x10) = *(arg2 + 0x10)
            *(result_1 + 0x20) = *(arg2 + 0x20)
            result_1[6] = arg2[6]
            
            if (rdi_1 == 0)
                *(result_1 + 0x39) = 0
            else
                *(result_1 + 0x39) = 1
                *result_1 = rdi_1
            
            sub_142a86f50(arg1, rax_11, result_1, rsi)
            result = result_1
    else
        *rsi = 7
        sub_142a47ff0(&var_88)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_b8)
return result
