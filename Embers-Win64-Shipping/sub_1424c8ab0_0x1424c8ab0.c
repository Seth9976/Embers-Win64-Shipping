// 函数: sub_1424c8ab0
// 地址: 0x1424c8ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]

if (&arg1[3] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x3c)
    int64_t rbp_1 = arg2[3].q
    int64_t rsi_1 = sx.q(*(arg2 + 0x38))
    *(arg1 + 0x38) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&arg1[3], rsi_1.d, r8_1)
        memcpy(arg1[3].q, rbp_1, (rsi_1 << 4).d)
    else
        *(arg1 + 0x3c) = rsi_1.d

return arg1
