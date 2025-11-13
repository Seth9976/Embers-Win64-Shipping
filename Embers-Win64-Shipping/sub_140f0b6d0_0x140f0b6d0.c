// 函数: sub_140f0b6d0
// 地址: 0x140f0b6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
int64_t* rcx = data_143e29f28
int64_t r8 = *rcx

if ((*(r8 + 0xa0))(rcx, arg4, r8) == 0)
    int64_t r8_1 = *arg1
    void var_d8
    sub_1405979f0(arg2, (*(r8_1 + 0x250))(arg1, &var_d8, r8_1))
    sub_140597700(&var_d8)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
