// 函数: sub_141d17b20
// 地址: 0x141d17b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141d1d910(arg1, arg2, arg3) == 0)
    return 0

int64_t var_18 = arg2
int64_t var_10 = arg3
int32_t arg_20
sub_141d1ca50(arg1 + 8, &arg_20, &var_18)
int64_t rax_1 = sx.q(arg_20)

if (rax_1.d == 0xffffffff)
    return *0x20

return *(rax_1 * 0x30 + *(arg1 + 8) + 0x20)
