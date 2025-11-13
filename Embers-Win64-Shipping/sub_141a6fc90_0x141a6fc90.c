// 函数: sub_141a6fc90
// 地址: 0x141a6fc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(*(arg2 + 0x28))
    int32_t r8_1 = *(arg1 + 0x2c)
    int64_t r14_1 = arg2[2].q
    *(arg1 + 0x28) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1407c3650(&arg1[2], rbp_1.d, r8_1)
        memcpy(arg1[2].q, r14_1, (rbp_1 * 0xc).d)
    else
        *(arg1 + 0x2c) = rbp_1.d

if (&arg1[3] != &arg2[3])
    int64_t rsi_1 = sx.q(*(arg2 + 0x38))
    int64_t rbp_2 = arg2[3].q
    int32_t r8_5 = *(arg1 + 0x3c)
    *(arg1 + 0x38) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_5 != 0)
        sub_14083a1f0(&arg1[3], rsi_1.d, r8_5)
        memcpy(arg1[3].q, rbp_2, (rsi_1 << 5).d)
    else
        *(arg1 + 0x3c) = rsi_1.d

return arg1
