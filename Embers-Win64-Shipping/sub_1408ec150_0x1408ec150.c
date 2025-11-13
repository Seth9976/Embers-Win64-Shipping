// 函数: sub_1408ec150
// 地址: 0x1408ec150
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
arg1[6] = 0
int32_t rsi = arg2[7].d
int64_t rbp = arg2[6]
arg1[7].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[6], rsi, 0)
    memcpy(arg1[6], rbp, rsi * 2)
else
    *(arg1 + 0x3c) = 0

return arg1
