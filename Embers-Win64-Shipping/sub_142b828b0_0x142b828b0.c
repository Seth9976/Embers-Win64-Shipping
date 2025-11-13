// 函数: sub_142b828b0
// 地址: 0x142b828b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_120 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t r14 = arg4
(*(*arg1 + 0x38))()
int64_t rax_3
uint128_t zmm6_1
rax_3, zmm6_1 = sub_142b36c50(arg5)
int64_t r13 = rax_3
void* rbp = arg1[2]
int32_t* var_140

if (arg1[6].b != 0 && rbp != 0)
    int16_t rcx = *(arg3 + 8)
    int32_t r15_2
    
    if (rcx s< 0)
        r15_2 = *(arg3 + 0xc)
    else
        r15_2 = sx.d(rcx) s>> 5
    
    int64_t rsi_3 = rax_3 * 0xa
    uint128_t zmm1_1
    zmm1_1.q = float.d(rsi_3)
    
    if (not(arg1[4] f<= zmm1_1.q))
        do
            int32_t rdx = arg1[1].d
            int16_t var_138 = 0x20
            var_140.d = 1
            sub_142a49390(arg3, rdx + r14, 0, &var_138, 0, var_140.d)
            zmm6_1 = sub_142b36320(rbp, 0, arg3, r14 + arg1[1].d, arg6, arg7)
            rsi_3 *= 0xa
            zmm1_1.q = float.d(rsi_3)
        while (arg1[4] f> zmm1_1.q)
        
        r13 = rax_3
    
    int16_t rax_5 = *(arg3 + 8)
    int32_t rax_7
    
    if (rax_5 s< 0)
        rax_7 = *(arg3 + 0xc)
    else
        rax_7 = sx.d(rax_5) s>> 5
    
    r14 += rax_7 - r15_2

double zmm0 = float.d(r13)
zmm6_1.q f- zmm0
int32_t* result

if (not(is_unordered.q(zmm6_1.q, zmm0)) && not(zmm6_1.q f!= zmm0))
    if (rbp == 0)
        goto label_142b82a6f
    
    result = sub_142b36320(rbp, r13, arg3, arg1[1].d + r14, arg6, arg7)
else if (rbp == 0)
label_142b82a6f:
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_110_1 = 2
    struct icu_64::UObject::icu_64::Formattable::VTable* var_d8
    sub_142aa7700(&var_d8, zmm6_1)
    sub_142aa8370(arg1[3], &var_d8, &var_118, arg7)
    sub_142aa7840(&var_d8)
    int32_t rax_13
    int32_t var_10c
    
    if (var_110_1 s< 0)
        rax_13 = var_10c
    else
        rax_13 = sx.d(var_110_1) s>> 5
    var_140.d = rax_13
    sub_142a49310(arg3, r14 + arg1[1].d, 0, &var_118, 0, var_140.d)
    result = sub_142a47ff0(&var_118)
else
    result = sub_142b362a0(rbp, zmm6_1, arg3, arg1[1].d + r14, arg6, arg7)

__security_check_cookie(rax_1 ^ &var_168)
return result
