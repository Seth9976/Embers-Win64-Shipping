// 函数: sub_142b3ee30
// 地址: 0x142b3ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t var_d8 = 0
uint64_t result
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8

if ((*(*arg2 + 0x18))(arg2) == 0)
    if ((*(*arg2 + 0x10))(arg2) == 0)
        int32_t rsi_1 = sub_142b3ec80(arg1, arg2, arg3, arg4, arg5)
        
        if (sub_142ab3840(arg2) s< 0 || *(arg1 + 0x58) == 1)
            void* rcx_10 = *(arg1 + 0x68)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10
            int32_t rbx_3
            
            if (*(arg1 + 0x5c) == 0)
                rax_10 = sub_142aaf870(rcx_10, &var_c8, 0)
                rbx_3 = 2
            else
                rax_10 = sub_142aaf870(rcx_10, &var_88, 0xa)
                rbx_3 = 1
            
            int32_t var_d8_1 = rbx_3
            rsi_1 += sub_142b3fb40(arg3, arg4 + rsi_1, rax_10, 2, arg5)
            
            if ((rbx_3.b & 2) != 0)
                rbx_3 &= 0xfffffffd
                sub_142a47ff0(&var_c8)
            
            if ((rbx_3.b & 1) != 0)
                sub_142a47ff0(&var_88)
        
        result = zx.q(sub_142b3eb90(arg1, arg2, arg3, arg4 + rsi_1, arg5) + rsi_1)
    else
        int32_t result_2 =
            sub_142b3fb40(arg3, arg4, sub_142aaf870(*(arg1 + 0x68), &var_c8, 0xf), 0, arg5)
        sub_142a47ff0(&var_c8)
        result = zx.q(result_2)
else
    int32_t result_1 =
        sub_142b3fb40(arg3, arg4, sub_142aaf870(*(arg1 + 0x68), &var_c8, 0xe), 0, arg5)
    sub_142a47ff0(&var_c8)
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_108)
return result
