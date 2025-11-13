// 函数: sub_141434020
// 地址: 0x141434020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t* rax_2 = *arg1
int64_t var_20
int64_t* rdi = &var_20
int128_t var_48
__builtin_memset(&var_48, 0, 0x30)
int64_t i = 3
*arg2 = *rax_2
__builtin_memset(&arg2[1], 0, 0x30)

do
    int64_t* rcx_1 = rdi[-1]
    rdi = &rdi[-1]
    i -= 1
    
    if (rcx_1 != 0)
        int64_t rdx = *rcx_1
        (*(rdx + 0x38))(rcx_1, rdx)
while (i != 0)

__security_check_cookie(rax_1 ^ &var_68)
return arg2
