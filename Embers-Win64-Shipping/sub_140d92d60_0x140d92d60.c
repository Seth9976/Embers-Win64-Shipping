// 函数: sub_140d92d60
// 地址: 0x140d92d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
arg1[1].d = rsi.d

if (rsi.d != 0)
    sub_1409912e0(arg1, rsi.d, 0)
    memcpy(*arg1, rbp, (rsi * 0x24).d)
else
    *(arg1 + 0xc) = 0

*(arg1 + 0x34) = 0

if (*(arg2 + 0x34) != 0)
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg1 + 0x20) = *(arg2 + 0x20)
    arg1[6].d = arg2[6].d
    *(arg1 + 0x34) = 1

arg1[7].b = arg2[7].b
return arg1
