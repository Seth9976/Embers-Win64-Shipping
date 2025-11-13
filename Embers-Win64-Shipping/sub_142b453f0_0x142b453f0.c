// 函数: sub_142b453f0
// 地址: 0x142b453f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
int128_t zmm1 = arg2[1]
arg1[2].d = arg3
*(arg1 + 0x24) = 0
arg1[1] = zmm1

if (*arg2 == 8)
    void var_28
    int128_t* rax_1 = sub_142b45e30(arg2, &var_28, arg4, arg5)
    *arg1 = *rax_1
    arg1[1] = rax_1[1]

return arg1
