// 函数: sub_1426412f0
// 地址: 0x1426412f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rsi = arg2[1].d
int64_t rbp = *arg2
arg1[1].d = rsi

if (rsi != 0)
    sub_140afef10(arg1, rsi, 0)
    memcpy(*arg1, rbp, rsi * 0x58)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rbp_1 = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1405c4a90(&arg1[2], rbp_1.d, 0)
    memcpy(arg1[2], r14, (rbp_1 << 2).d)
else
    *(arg1 + 0x1c) = 0

arg1[4].d = arg2[4].d
return arg1
