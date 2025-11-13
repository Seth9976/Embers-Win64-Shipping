// 函数: sub_141e10360
// 地址: 0x141e10360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int64_t rbp = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = rsi.d
int64_t result

if (rsi.d != 0 || r8 != 0)
    sub_141acb760(arg1, rsi.d, r8)
    memcpy(*arg1, rbp, (rsi * 0x30).d)
    result = arg2[2]
    arg1[2] = result
else
    *(arg1 + 0xc) = rsi.d
    result = arg2[2]
    arg1[2] = result

return result
