// 函数: sub_142b32f30
// 地址: 0x142b32f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r15 = arg2
int16_t rax_3 = *(arg1 + 0x18)
int32_t rsi_1

if (rax_3 s< 0)
    rsi_1 = *(arg1 + 0x1c)
else
    rsi_1 = sx.d(rax_3) s>> 5

int32_t rbp = 0
int32_t rdi = 0
int32_t result

if (*(arg1 + 0x68) != 0)
    int32_t rcx_1 = 0
    int16_t rax_7 = *(arg1 + 0x18)
    int32_t rdx_2
    
    if (rax_7 s< 0)
        rdx_2 = *(arg1 + 0x1c)
    else
        rdx_2 = sx.d(rax_7) s>> 5
    
    if (rdx_2 s< 0)
        if (rax_7 s< 0)
            rcx_1 = *(arg1 + 0x1c)
        else
            rcx_1 = sx.d(rax_7) s>> 5
    
    int32_t rdx_4
    
    if (rax_7 s< 0)
        rdx_4 = *(arg1 + 0x1c)
    else
        rdx_4 = sx.d(rax_7) s>> 5
    
    int32_t rax_8 = sub_142a4a330(arg1 + 0x10, &data_14366bff8, 0, 0xffffffff, rcx_1, rdx_4 - rcx_1)
    rsi_1 = rax_8
    
    if (rax_8 s>= 0)
        int16_t rcx_4 = *(arg1 + 0x18)
        int32_t rdx_7
        
        if (rcx_4 s< 0)
            rdx_7 = *(arg1 + 0x1c)
        else
            rdx_7 = sx.d(rcx_4) s>> 5
        
        if (rsi_1 s> rdx_7)
            if (rcx_4 s< 0)
                rax_8 = *(arg1 + 0x1c)
            else
                rax_8 = sx.d(rcx_4) s>> 5
    else
        rax_8 = 0
    
    int16_t rcx_5 = *(arg1 + 0x18)
    int32_t rcx_7
    
    if (rcx_5 s< 0)
        rcx_7 = *(arg1 + 0x1c)
    else
        rcx_7 = sx.d(rcx_5) s>> 5
    
    int32_t rax_10 =
        sub_142a4a330(arg1 + 0x10, &data_14366c000, 0, 0xffffffff, rax_8, rcx_7 - rax_8)
    int16_t rcx_10 = *(arg3 + 8)
    int32_t r15_2
    
    if (rcx_10 s< 0)
        r15_2 = *(arg3 + 0xc)
    else
        r15_2 = sx.d(rcx_10) s>> 5
    
    int16_t rax_11 = *(arg1 + 0x18)
    int32_t rax_13
    
    if (rax_11 s< 0)
        rax_13 = *(arg1 + 0x1c)
    else
        rax_13 = sx.d(rax_11) s>> 5
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    
    if (rax_10 s< rax_13 - 1)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_15 =
            sub_142a4ad20(arg1 + 0x10, &var_98, rax_10 + 2, 0x7fffffff)
        int16_t rcx_12 = rax_15[1].w
        int32_t rcx_14
        
        if (rcx_12 s< 0)
            rcx_14 = *(rax_15 + 0xc)
        else
            rcx_14 = sx.d(rcx_12) s>> 5
        
        sub_142a49310(arg3, arg4, 0, rax_15, 0, rcx_14)
        sub_142a47ff0(&var_98)
    
    uint32_t temp0_1 = (divu.dp.q(0:arg2, sub_142b36cd0(*(arg1 + 8), *(arg1 + 0xc)))).d
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_19 =
        sub_142b2e360(*(arg1 + 0x68), &var_98, temp0_1, arg5)
    int16_t rcx_20 = rax_19[1].w
    int32_t rcx_22
    
    if (rcx_20 s< 0)
        rcx_22 = *(rax_19 + 0xc)
    else
        rcx_22 = sx.d(rcx_20) s>> 5
    
    sub_142a49310(arg3, arg4, 0, rax_19, 0, rcx_22)
    sub_142a47ff0(&var_98)
    
    if (rsi_1 s> 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_20 =
            sub_142a4ad20(arg1 + 0x10, &var_98, 0, rsi_1)
        int16_t rcx_26 = rax_20[1].w
        int32_t rcx_28
        
        if (rcx_26 s< 0)
            rcx_28 = *(rax_20 + 0xc)
        else
            rcx_28 = sx.d(rcx_26) s>> 5
        
        sub_142a49310(arg3, arg4, 0, rax_20, 0, rcx_28)
        sub_142a47ff0(&var_98)
    
    int16_t rax_21 = *(arg1 + 0x18)
    int32_t rdi_2
    
    if (rax_21 s< 0)
        rdi_2 = *(arg1 + 0x1c)
    else
        rdi_2 = sx.d(rax_21) s>> 5
    
    int16_t rax_22 = *(arg3 + 8)
    
    if (rax_22 s< 0)
        result = *(arg3 + 0xc)
    else
        result = sx.d(rax_22) s>> 5
    
    rdi = rdi_2 - result + r15_2
    r15 = arg2
else
    int16_t rax_4 = *(arg1 + 0x18)
    int32_t rax_6
    
    if (rax_4 s< 0)
        rax_6 = *(arg1 + 0x1c)
    else
        rax_6 = sx.d(rax_4) s>> 5
    
    result = sub_142a49310(arg3, arg4, 0, arg1 + 0x10, 0, rax_6)

int64_t* rcx_31 = *(arg1 + 0x58)
int32_t var_c0

if (rcx_31 != 0)
    int32_t rax_24 = 0
    
    if (rcx_31[1].d s> rsi_1)
        rax_24 = rdi
    
    var_c0.q = arg7
    result = (*(*rcx_31 + 0x30))(rcx_31, r15, arg3, zx.q(arg4 - rax_24), arg6, var_c0, arg7, arg2, 
        var_a8)

int64_t* rcx_32 = *(arg1 + 0x50)

if (rcx_32 != 0)
    if (rcx_32[1].d s> rsi_1)
        rbp = rdi
    
    var_c0.q = arg7
    result =
        (*(*rcx_32 + 0x30))(rcx_32, r15, arg3, zx.q(arg4 - rbp), arg6, var_c0, arg7, arg2, var_a8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
