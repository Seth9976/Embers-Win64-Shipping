// 函数: sub_142b86a90
// 地址: 0x142b86a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_a4 = 0
char** rax_2 = sub_142a641c0("icudt64l-unit", *(arg2 + 0x28), arg4)
char** var_88 = rax_2

if (*arg4 s<= 0)
    int16_t var_6c
    char* var_78 = &var_6c:1
    int32_t var_70_1 = 0x28
    var_6c = 0
    int32_t var_40_1 = 0
    void var_a0
    uint128_t zmm1_1 = *sub_142a85330(&var_a0, "units")
    sub_142a8cbd0(&var_78, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
    int32_t rax_4 = *arg3
    
    if (rax_4 == 0)
        zmm1_1 = *sub_142a85330(&var_a0, "Narrow")
        sub_142a8cbd0(&var_78, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
    else if (rax_4 == 1)
        zmm1_1 = *sub_142a85330(&var_a0, "Short")
        sub_142a8cbd0(&var_78, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
    
    zmm1_1 = *sub_142a85330(&var_a0, "/compound/per")
    sub_142a8cbd0(&var_78, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
    int32_t var_a8 = 0
    sub_142a47f60(arg1, sub_142a63c50(rax_2, var_78, &var_a8, arg4), var_a8)
    
    if (var_6c.b != 0)
        sub_142a7dcd0(var_78)
else
    *arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    arg1[1].w = 2

if (rax_2 != 0)
    sub_142a5f860(rax_2)

__security_check_cookie(rax_1 ^ &var_c8)
return arg1
