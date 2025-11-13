// 函数: sub_142b43cd0
// 地址: 0x142b43cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_108 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int16_t var_ec
void* result_4 = &var_ec:1
int32_t var_f0 = 0x28
var_ec = 0
int32_t var_c0 = 0
int32_t result_1 = 0
void* result_6
void* result_2 = &result_6
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142b46920(arg1, &var_78)
char rcx = (rax_2[1].w).b
void* result_7

if ((rcx & 0x11) != 0)
    result_7 = nullptr
else if ((rcx & 2) == 0)
    result_7 = rax_2[3]
else
    result_7 = rax_2 + 0xa

result_6 = result_7
int32_t rax_3 = sub_142b467c0(arg1)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
sub_142a47a60(&var_b8, 0, result_6, rax_3)
sub_142a8cd50(&result_4, &var_b8, &result_1)
sub_142a47ff0(&var_b8)
sub_142a47ff0(&var_78)
uint64_t result = zx.q(result_1)

if (result.d == 0x1a)
    *arg3 = 0x10113
else if (result.d s<= 0)
    result = j_sub_142a7dd00(0x60)
    result_2 = result
    int64_t* result_3
    
    if (result == 0)
        result_3 = nullptr
    else
        result = sub_142ab5870(result)
        result_3 = result
    
    int64_t* result_5 = result_3
    result_6 = result_5
    
    if (result_3 == 0 && *arg3 s<= result_3.d)
        *arg3 = 7
    
    if (*arg3 s<= 0)
        result_2 = result_4
        int32_t var_120_1 = var_c0
        result_2.o = result_2.o
        result = sub_142ab5f40(result_3, &result_2, arg3)
        
        if (*arg3 s<= 0)
            result_5 = nullptr
            result_6 = nullptr
            sub_142ab6ad0(&result_2, 0, result_3)
            sub_142ab6bb0(arg2 + 0xa8, &result_2)
            result = sub_142ab6b80(&result_2)
        else
            *arg3 = 0x10113
    
    if (result_5 != 0)
        if (*(result_5 + 0xc) != 0)
            sub_142a7dcd0(*result_5)
        
        result = sub_142a47920(result_5)
else
    *arg3 = result.d

if (var_ec.b != 0)
    result = sub_142a7dcd0(result_4)

__security_check_cookie(rax_1 ^ &var_158)
return result
