// 函数: sub_142b36880
// 地址: 0x142b36880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
int64_t rsi = sx.q(arg2)

if (arg4 != 0)
    int32_t rax_1 = *(arg1 + 0x94)
    
    if (*(arg1 + 0x90) == rax_1)
        *(arg1 + 0x94) = rax_1 + 0xa
        *(arg1 + 0x88) = sub_142a7dd30(*(arg1 + 0x88), zx.q(rax_1 + 0xa) << 3)
    
    int64_t rcx_1 = *(arg1 + 0x88)
    
    if (rcx_1 == 0)
        result = 0
        *(arg1 + 0x90) = 0
    else
        result = zx.q(*(arg1 + 0x90))
        *(rcx_1 + (result << 3)) = arg3
        *(arg1 + 0x90) += 1

int16_t rbx_1
int16_t rbp_1

if (*(arg1 + (rsi << 3) + 0x50) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 =
        sub_142aaf870(sub_142aaf0c0(*(arg1 + 0x80)), &var_68, 0)
    int16_t rdx_3 = rax_5[1].w
    int32_t rcx_5
    
    if (rdx_3 s< 0)
        rcx_5 = *(rax_5 + 0xc)
    else
        rcx_5 = sx.d(rdx_3) s>> 5
    
    if (rcx_5 == 0)
        rbp_1 = -1
    else if ((rdx_3.b & 2) == 0)
        rbp_1 = rax_5[3]->__offset(0x0).q
    else
        rbp_1 = *(rax_5 + 0xa)
    
    rbx_1 = *(arg3 + 0xe)
    result = sub_142a47ff0(&var_68)

if (*(arg1 + (rsi << 3) + 0x50) == 0 || rbp_1 == rbx_1)
    *(arg1 + (rsi << 3) + 0x50) = arg3

__security_check_cookie(result_1 ^ &var_88)
return result
