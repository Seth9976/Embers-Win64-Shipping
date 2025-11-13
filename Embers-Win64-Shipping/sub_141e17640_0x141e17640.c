// 函数: sub_141e17640
// 地址: 0x141e17640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg2 + 0x10))
int64_t r14 = *(arg2 + 8)
int32_t r8 = *(arg1 + 0x1c)
*(arg1 + 0x18) = rsi.d

if (rsi.d != 0 || r8 != 0)
    sub_1405a4b40(arg1 + 0x10, rsi.d, r8)
    memcpy(*(arg1 + 0x10), r14, (rsi * 0x30).d)
else
    *(arg1 + 0x1c) = rsi.d

*(arg1 + 0x20) = *(arg2 + 0x18)
sub_141e451a0(arg1 + 0x10, arg3)
return sub_141a87a30(arg1 + 0x28, arg2 + 0x20) __tailcall
