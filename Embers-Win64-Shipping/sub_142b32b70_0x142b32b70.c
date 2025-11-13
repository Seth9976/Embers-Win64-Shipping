// 函数: sub_142b32b70
// 地址: 0x142b32b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t zmm6 = arg2
int64_t r12 = arg6
int64_t var_b8 = r12
int16_t rax_2 = *(arg1 + 0x18)
int32_t rsi_1

if (rax_2 s< 0)
    rsi_1 = *(arg1 + 0x1c)
else
    rsi_1 = sx.d(rax_2) s>> 5

int32_t rbp = 0
int32_t rdi = 0
int32_t result

if (*(arg1 + 0x68) != 0)
    int32_t rcx_1 = 0
    int16_t rax_6 = *(arg1 + 0x18)
    int32_t rdx_2
    
    if (rax_6 s< 0)
        rdx_2 = *(arg1 + 0x1c)
    else
        rdx_2 = sx.d(rax_6) s>> 5
    
    if (rdx_2 s< 0)
        if (rax_6 s< 0)
            rcx_1 = *(arg1 + 0x1c)
        else
            rcx_1 = sx.d(rax_6) s>> 5
    
    int32_t rdx_4
    
    if (rax_6 s< 0)
        rdx_4 = *(arg1 + 0x1c)
    else
        rdx_4 = sx.d(rax_6) s>> 5
    
    int32_t rax_7 = sub_142a4a330(arg1 + 0x10, &data_14366bff8, 0, 0xffffffff, rcx_1, rdx_4 - rcx_1)
    rsi_1 = rax_7
    int32_t rcx_4 = rax_7
    
    if (rax_7 s>= 0)
        int16_t rax_8 = *(arg1 + 0x18)
        int32_t rdx_7
        
        if (rax_8 s< 0)
            rdx_7 = *(arg1 + 0x1c)
        else
            rdx_7 = sx.d(rax_8) s>> 5
        
        if (rsi_1 s> rdx_7)
            if (rax_8 s< 0)
                rcx_4 = *(arg1 + 0x1c)
            else
                rcx_4 = sx.d(rax_8) s>> 5
    else
        rcx_4 = 0
    
    int16_t rax_9 = *(arg1 + 0x18)
    int32_t rax_11
    
    if (rax_9 s< 0)
        rax_11 = *(arg1 + 0x1c)
    else
        rax_11 = sx.d(rax_9) s>> 5
    
    int32_t rax_13 =
        sub_142a4a330(arg1 + 0x10, &data_14366c000, 0, 0xffffffff, rcx_4, rax_11 - rcx_4)
    int16_t rcx_7 = *(arg3 + 8)
    int32_t r12_2
    
    if (rcx_7 s< 0)
        r12_2 = *(arg3 + 0xc)
    else
        r12_2 = sx.d(rcx_7) s>> 5
    
    int16_t rax_14 = *(arg1 + 0x18)
    int32_t rax_16
    
    if (rax_14 s< 0)
        rax_16 = *(arg1 + 0x1c)
    else
        rax_16 = sx.d(rax_14) s>> 5
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
    
    if (rax_13 s< rax_16 - 1)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_18 =
            sub_142a4ad20(arg1 + 0x10, &var_a8, rax_13 + 2, 0x7fffffff)
        int16_t rcx_9 = rax_18[1].w
        int32_t rcx_11
        
        if (rcx_9 s< 0)
            rcx_11 = *(rax_18 + 0xc)
        else
            rcx_11 = sx.d(rcx_9) s>> 5
        
        sub_142a49310(arg3, arg4, 0, rax_18, 0, rcx_11)
        sub_142a47ff0(&var_a8)
    
    int64_t zmm0_1
    
    if (zmm6.q f< (zx.o(0)).q || 0x3ff0000000000000 f<= zmm6.q)
        int64_t rax_20 = sub_142b36cd0(*(arg1 + 8), *(arg1 + 0xc))
        arg2.q = float.d(rax_20)
        
        if (rax_20 s< 0)
            arg2.q = arg2.q f+ 1.8446744073709552e+19
        
        zmm0_1 = zmm6.q f/ arg2.q
    else
        int64_t rax_19 = sub_142b36cd0(*(arg1 + 8), *(arg1 + 0xc))
        zmm0_1 = float.d(rax_19)
        
        if (rax_19 s< 0)
            zmm0_1 = zmm0_1 f+ 1.8446744073709552e+19
        
        zmm0_1 = sub_142a4bd50(zmm0_1 f* zmm6.q)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_21
    rax_21, zmm6 = sub_142b2e360(*(arg1 + 0x68), &var_a8, int.d(zmm0_1), arg2)
    int16_t rcx_17 = rax_21[1].w
    int32_t rcx_19
    
    if (rcx_17 s< 0)
        rcx_19 = *(rax_21 + 0xc)
    else
        rcx_19 = sx.d(rcx_17) s>> 5
    
    sub_142a49310(arg3, arg4, 0, rax_21, 0, rcx_19)
    sub_142a47ff0(&var_a8)
    
    if (rsi_1 s> 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_22 =
            sub_142a4ad20(arg1 + 0x10, &var_a8, 0, rsi_1)
        int16_t rcx_23 = rax_22[1].w
        int32_t rcx_25
        
        if (rcx_23 s< 0)
            rcx_25 = *(rax_22 + 0xc)
        else
            rcx_25 = sx.d(rcx_23) s>> 5
        
        sub_142a49310(arg3, arg4, 0, rax_22, 0, rcx_25)
        sub_142a47ff0(&var_a8)
    
    int16_t rax_23 = *(arg1 + 0x18)
    int32_t rdi_2
    
    if (rax_23 s< 0)
        rdi_2 = *(arg1 + 0x1c)
    else
        rdi_2 = sx.d(rax_23) s>> 5
    
    int16_t rax_24 = *(arg3 + 8)
    
    if (rax_24 s< 0)
        result = *(arg3 + 0xc)
    else
        result = sx.d(rax_24) s>> 5
    
    rdi = rdi_2 - result + r12_2
    r12 = var_b8
else
    int16_t rax_3 = *(arg1 + 0x18)
    int32_t rax_5
    
    if (rax_3 s< 0)
        rax_5 = *(arg1 + 0x1c)
    else
        rax_5 = sx.d(rax_3) s>> 5
    
    result = sub_142a49310(arg3, arg4, 0, arg1 + 0x10, 0, rax_5)

int64_t* rcx_28 = *(arg1 + 0x58)
int32_t var_c0

if (rcx_28 != 0)
    int32_t rax_26 = 0
    
    if (rcx_28[1].d s> rsi_1)
        rax_26 = rdi
    
    var_c0.q = r12
    result =
        (*(*rcx_28 + 0x28))(rcx_28, zmm6, arg3, zx.q(arg4 - rax_26), arg5, var_c0, var_b8, var_b0)

int64_t* rcx_29 = *(arg1 + 0x50)

if (rcx_29 != 0)
    if (rcx_29[1].d s> rsi_1)
        rbp = rdi
    
    var_c0.q = r12
    result = (*(*rcx_29 + 0x28))(rcx_29, zmm6, arg3, zx.q(arg4 - rbp), arg5, var_c0, var_b8, var_b0)

__security_check_cookie(rax_1 ^ &var_e8)
return result
