// 函数: sub_142aaddb0
// 地址: 0x142aaddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8

if (arg1 != arg2)
    sub_142a57fd0(arg1, arg2)
    int64_t rbp_1 = 0
    int32_t var_88 = 0
    sub_142aae3b0(arg1)
    sub_142a45c20(&arg1[0x32], &arg2[0x32])
    *(arg1 + 0x294) = *(arg2 + 0x294)
    (*(*arg1 + 0x188))(arg1, arg2[0x4f])
    int64_t* r8_1 = arg2[0x54]
    
    if (r8_1 == 0)
        r8_1 = nullptr
    else
        r8_1[1].d += 1
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    sub_142aaf8c0(arg1, &arg2[0x55], r8_1, &var_78, &var_88)
    int64_t rax_5 = (*(*arg2 + 0x178))(arg2, &var_78)
    int64_t r9_2 = *arg1
    (*(r9_2 + 0x170))(arg1, rax_5, &var_88, r9_2)
    sub_142a47ff0(&var_78)
    (*(*arg1 + 0x110))(arg1, zx.q((*(*arg2 + 0x108))(arg2)))
    arg1[0x5d].b = arg2[0x5d].b
    *(arg1 + 0x2e9) = *(arg2 + 0x2e9)
    *(arg1 + 0x2ea) = *(arg2 + 0x2ea)
    int64_t* rcx_9 = arg2[0x5e]
    
    if (rcx_9 != 0)
        rbp_1 = (*(*rcx_9 + 0x18))(rcx_9)
    
    arg1[0x5e] = rbp_1

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
