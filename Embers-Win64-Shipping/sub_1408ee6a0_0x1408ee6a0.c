// 函数: sub_1408ee6a0
// 地址: 0x1408ee6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d ^= (arg2[3].d ^ arg1[3].d) & 1
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = arg2[4].d
arg1[5] = arg2[5]

if (&arg1[6] != &arg2[6])
    int32_t r8_1 = *(arg1 + 0x3c)
    int64_t rbp_1 = arg2[6]
    int32_t rsi_1 = arg2[7].d
    arg1[7].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg1[6], rsi_1, r8_1)
        memcpy(arg1[6], rbp_1, rsi_1 * 2)
    else
        *(arg1 + 0x3c) = rsi_1

return arg1
