// 函数: sub_14105d230
// 地址: 0x14105d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg2 + 0x200))
*(arg1 + 0x200) = rsi.d

if (rsi.d != 0)
    sub_140ffca30(arg1, rsi.d, 0)
    memcpy(arg1, arg2, (rsi << 5).d)
else
    *(arg1 + 0x204) = 0x10

*(arg1 + 0x208) = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
*(arg1 + 0x21c) = *(arg2 + 0x21c)
return arg1
