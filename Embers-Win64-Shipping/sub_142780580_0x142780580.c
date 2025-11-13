// 函数: sub_142780580
// 地址: 0x142780580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int64_t r8
int64_t var_10 = r8
int32_t arg_8
sub_141d1ca50(arg1 + 8, &arg_8, &var_18)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return *0x20

return *(rax * 0x30 + *(arg1 + 8) + 0x20)
