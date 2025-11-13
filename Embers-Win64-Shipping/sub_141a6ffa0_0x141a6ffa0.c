// 函数: sub_141a6ffa0
// 地址: 0x141a6ffa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a6fc90(arg1, arg2)

if (&arg1[4] != &arg2[4])
    int64_t rbp_1 = sx.q(*(arg2 + 0x48))
    int32_t r8_1 = *(arg1 + 0x4c)
    int64_t r14_1 = arg2[4].q
    *(arg1 + 0x48) = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1407c3650(&arg1[4], rbp_1.d, r8_1)
        memcpy(arg1[4].q, r14_1, (rbp_1 * 0xc).d)
    else
        *(arg1 + 0x4c) = rbp_1.d

if (&arg1[5] != &arg2[5])
    int64_t rbp_2 = sx.q(*(arg2 + 0x58))
    int64_t rsi_3 = arg2[5].q
    int32_t r8_5 = *(arg1 + 0x5c)
    *(arg1 + 0x58) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_5 != 0)
        sub_1405c4a90(&arg1[5], rbp_2.d, r8_5)
        memcpy(arg1[5].q, rsi_3, (rbp_2 << 2).d)
    else
        *(arg1 + 0x5c) = rbp_2.d

return arg1
