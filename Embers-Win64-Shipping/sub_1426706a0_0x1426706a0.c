// 函数: sub_1426706a0
// 地址: 0x1426706a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
int32_t rsi = arg2[3].d
int64_t rbp = arg2[2]
arg1[3].d = rsi

if (rsi != 0)
    sub_1405c4b20(&arg1[2], rsi, 0)
    memcpy(arg1[2], rbp, rsi * 0x1c)
else
    *(arg1 + 0x1c) = 0

return arg1
