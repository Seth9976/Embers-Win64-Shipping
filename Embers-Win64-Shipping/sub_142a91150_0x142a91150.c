// 函数: sub_142a91150
// 地址: 0x142a91150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1

if (arg1 != 4)
    int64_t var_20_1 = 0
    int64_t var_14_1 = 0
    int32_t var_c_1 = 0
    int32_t var_18_1 = arg7
    int64_t var_28 = arg6
    rax_1 = sub_142a8fff0(arg1, arg2, arg4, arg5, arg6, &var_28, arg7, arg8, arg9)
else
    int32_t var_48
    var_48.q = arg9
    rax_1 = sub_142a90420(arg2, arg4, arg5, arg6, arg7, arg8, var_48)

if (*arg9 s<= 0)
    if (rax_1 s> arg5)
        *arg9 = 0xf
    else if (arg8 != 0)
        sub_142afce40(arg8, arg9)

return zx.q(rax_1)
