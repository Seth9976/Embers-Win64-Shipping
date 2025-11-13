// 函数: sub_140914770
// 地址: 0x140914770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0x18) = 0
int32_t rsi = *(arg2 + 0x20)
int64_t rbp = *(arg2 + 0x18)
*(arg1 + 0x20) = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[0x18], rsi, 0)
    memcpy(*(arg1 + 0x18), rbp, rsi * 2)
else
    *(arg1 + 0x24) = 0

return arg1
