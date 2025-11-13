// 函数: sub_141d83ba0
// 地址: 0x141d83ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_6c = 0x80
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x3c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_48 = 0
int64_t var_40 = 0
sub_141d830c0(&var_a8, arg2)
int64_t var_98
sub_1405af100(&var_98, arg3)
var_48.o = *arg4
(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f38418), &var_a8)
int32_t result = sub_1405ae080(&var_98)
int64_t* rbx_2 = var_a8:8.q

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t r14_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (r14_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, zx.q(r14_1))

__security_check_cookie(rax_1 ^ &var_c8)
return result
