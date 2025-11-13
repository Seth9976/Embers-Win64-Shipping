// 函数: sub_141a69d90
// 地址: 0x141a69d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
sub_141a4c290(arg1, &var_58, arg2, arg4)
int64_t rax = sub_140d3c6e0(&var_58)

if (rax != 0)
    return rax

void* rax_1 = sub_141a4c210(arg3, arg2)

if (rax_1 != 0 && (sub_140d3e090(&var_58, 1, 0) == 0 || *(rax_1 + 0x40) != 0))
    void* rax_4 = (*(*arg1 + 8))(arg1, rax_1, arg4, arg5)
    
    if (rax_4 != 0)
        int128_t zmm0_1 = *arg2
        char rbx_2 = *(rax_1 + 0x80)
        int32_t var_40_1 = *arg4
        int128_t var_50 = zmm0_1
        int128_t var_38 = zmm0_1
        void var_28
        sub_140d3a3a0(&var_28, rax_4)
        char var_20_1 = rbx_2
        sub_141a29270(&arg1[3], &var_50, &var_38)
        sub_141a56940(arg5 + 8, arg2, arg4)
    
    return rax_4

return 0
