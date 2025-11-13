// 函数: sub_141e43e20
// 地址: 0x141e43e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[9] == 0xa
arg1[8] = 0
int32_t rsi = 0

if (not(cond:0))
    sub_1405c5570(&arg1[6], 0xa)
    rsi = arg1[8]

arg1[8] = rsi + 0xa

if (rsi + 0xa s> arg1[9])
    sub_1405a4d70(&arg1[6])

int64_t result = memset(*(arg1 + 0x18) + (sx.q(rsi) << 3), 0, 0x50)
arg1[3] = arg2.d
arg1[1] = arg3
*(arg1 + 0x10) = 0
arg1[2] = 0
*arg1 = 0
return result
