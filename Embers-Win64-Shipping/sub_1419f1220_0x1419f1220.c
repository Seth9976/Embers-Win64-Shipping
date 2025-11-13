// 函数: sub_1419f1220
// 地址: 0x1419f1220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
int32_t rsi = rax + arg3

if (rsi u> *(arg1 + 0x10))
    return 0

memcpy(arg2, zx.q(rax) + *(arg1 + 8), arg3)
*(arg1 + 0x14) = rsi
return zx.q(arg3)
