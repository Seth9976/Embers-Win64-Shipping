// 函数: sub_1427cb100
// 地址: 0x1427cb100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg2 | arg4) & 0x20) != 0)
    *arg1 = 0
    *arg6 = 0x414
    return arg1

if (*((zx.q(*arg3) << 5) + zx.q(*arg5) + &data_143b7ab10) == 0)
    *arg1 = 2
else
    int16_t var_20 = arg3[2].w
    int16_t var_1e_1 = *(arg3 + 0xa)
    int16_t var_1c_1 = arg3[3].w
    int16_t var_1a_1 = *(arg3 + 0xe)
    int16_t var_18 = arg5[2].w
    int16_t var_16_1 = *(arg5 + 0xa)
    int16_t var_14_1 = arg5[3].w
    int16_t var_12_1 = *(arg5 + 0xe)
    int64_t rax_9 = sx.q(data_143f89478)
    int64_t var_28 = 0
    (&data_1434cd040)[rax_9](&var_28, &var_20, &data_143f89488)
    int64_t rax_10 = sx.q(data_143f8947c)
    int64_t var_30 = 0
    (&data_1434cd040)[rax_10](&var_30, &var_18, &data_143f89490)
    int64_t rax_11 = sx.q(data_143f89480)
    int64_t var_38 = 0
    (&data_1434cd040)[rax_11](&var_38, &var_28, &var_30)
    char rax_12
    
    if (var_38.w != 0 || var_38:2.w != 0 || var_38:4.w != 0 || var_38:6.w != 0)
        rax_12 = 1
    else
        rax_12 = 0
    
    if (rax_12 == data_143f89484)
        *arg1 = 0
        *arg6 = 0x401
    else
        *arg1 = 2

return arg1
