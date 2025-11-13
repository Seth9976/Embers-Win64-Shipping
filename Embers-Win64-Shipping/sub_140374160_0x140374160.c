// 函数: sub_140374160
// 地址: 0x140374160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_78 = arg3
int32_t r9
int32_t var_70 = r9
int64_t var_68 = arg1
int32_t var_60 = *arg2
int128_t var_48
__builtin_memset(&var_48, 0, 0x18)
int32_t rax_3 = sub_14036ebd0(&var_78, arg4, "1.2.8", 0x58)
int32_t rdi = rax_3

if (rax_3 == 0)
    int32_t rax_4 = sub_14036f750(&var_78, 4)
    
    if (rax_4 != 1)
        sub_14036ef90(&var_78)
        rdi = -5
        
        if (rax_4 != 0)
            rdi = rax_4
    else
        int32_t var_5c
        *arg2 = var_5c
        rdi = sub_14036ef90(&var_78)

__security_check_cookie(rax_1 ^ &var_98)
return zx.q(rdi)
