// 函数: sub_141a8ff40
// 地址: 0x141a8ff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
arg1[1].d = rsi

if (rsi != 0)
    sub_14174fdd0(arg1, rsi, 0)
    memcpy(*arg1, rbp, rsi * 0x3c)
else
    *(arg1 + 0xc) = 0

arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = arg2[5]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x35) = *(arg2 + 0x35)
return arg1
