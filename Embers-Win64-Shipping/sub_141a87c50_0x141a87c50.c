// 函数: sub_141a87c50
// 地址: 0x141a87c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = rsi.d

if (rsi.d != 0 || r8 != 0)
    sub_1405a4b40(arg1, rsi.d, r8)
    memcpy(*arg1, rbp, (rsi * 0x30).d)
else
    *(arg1 + 0xc) = rsi.d

arg1[2] = arg2[2]
return sub_14081d8c0(&arg1[3], &arg2[3]) __tailcall
