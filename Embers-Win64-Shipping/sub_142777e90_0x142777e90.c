// 函数: sub_142777e90
// 地址: 0x142777e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_141d2d5a0(&arg1[1], &arg2[1])
arg1[0xd] = arg2[0xd]
arg1[0xe] = 0
int64_t rsi = sx.q(arg2[0xf].d)
int64_t rbp = arg2[0xe]
arg1[0xf].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[0xe], rsi.d, 0)
    memcpy(arg1[0xe], rbp, (rsi << 3).d)
else
    *(arg1 + 0x7c) = 0

arg1[0x10] = 0
int64_t rsi_1 = sx.q(arg2[0x11].d)
int64_t rbp_1 = arg2[0x10]
arg1[0x11].d = rsi_1.d

if (rsi_1.d != 0)
    sub_1405c4a00(&arg1[0x10], rsi_1.d, 0)
    memcpy(arg1[0x10], rbp_1, (rsi_1 << 3).d)
else
    *(arg1 + 0x8c) = 0

return arg1
