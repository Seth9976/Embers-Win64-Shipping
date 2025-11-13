// 函数: sub_142bf7a00
// 地址: 0x142bf7a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int64_t rax
    rax.b = 0
    return rax

if (arg5 != 0 && arg3 == 0 && arg4 == 0)
    sub_142bf6d50(&arg1[1], arg2, arg1)
    int64_t rax_2
    rax_2.b = 1
    return rax_2

int64_t zmm1 = arg4
arg4.b = arg5 != 0
int64_t var_40 = arg3
int64_t var_18 = zmm1
int128_t var_28 = arg2.o
int128_t* rax_3
rax_3.b = sub_142bf6e50(&arg1[1], &var_28, arg1, arg4.b) != 0
return rax_3
