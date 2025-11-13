// 函数: sub_141d948f0
// 地址: 0x141d948f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
uint32_t count = arg2[1].d
int64_t rsi = *arg2
arg1[1].d = count

if (count != 0)
    sub_1405da9e0(arg1, count, 0)
    memcpy(*arg1, rsi, count)
    arg1[2] = arg3.q
else
    *(arg1 + 0xc) = 0
    arg1[2] = arg3.q

return arg1
