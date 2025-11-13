// 函数: sub_1420b1160
// 地址: 0x1420b1160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
sub_1420b1200(arg3, &arg_10)
*arg1 = 0
int64_t rsi = sx.q(arg3[1].d)
int64_t rbp = *arg3
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_140638750(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi << 2).d)
else
    *(arg1 + 0xc) = 0

arg1[2].d = arg3[2].d
*(arg1 + 0x14) = *(arg3 + 0x14)
arg1[3].d = arg3[3].d
*(arg1 + 0x1c) = *(arg3 + 0x1c)
return arg1
