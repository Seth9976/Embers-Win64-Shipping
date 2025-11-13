// 函数: sub_141df2430
// 地址: 0x141df2430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0b890
arg1[1] = *(arg2 + 8)
arg1[2].d = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].b = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].d = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = *(arg2 + 0x28)
*arg1 = &data_143242538
arg1[6] = *(arg2 + 0x30)
arg1[7].d = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
arg1[9] = 0
int64_t rsi = sx.q(*(arg2 + 0x50))
int64_t rbp = *(arg2 + 0x48)
arg1[0xa].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[9], rsi.d, 0)
    memcpy(arg1[9], rbp, (rsi << 3).d)
else
    *(arg1 + 0x54) = 0

return arg1
