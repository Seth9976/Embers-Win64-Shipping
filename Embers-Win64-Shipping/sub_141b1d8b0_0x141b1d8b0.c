// 函数: sub_141b1d8b0
// 地址: 0x141b1d8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_18 = &data_1430560c8
int64_t rax = data_143f2c728
int64_t* var_10 = arg2

if (rax == 0)
    rax = sub_141a54240(&data_143f2c728, 0)

char rdx = *(arg2 + 0x2dc)

if (rdx != 0)
    int32_t var_20_1 = arg2[0x5b].d
    int64_t var_28 = arg2[0x5a]
    sub_141a590e0(&arg2[0x29], rdx, rax, &var_28, &var_18, &arg2[0x1f])

return sub_141b05150(arg1 + 8, arg2) __tailcall
