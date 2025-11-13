// 函数: sub_141e2adb0
// 地址: 0x141e2adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x158)
int64_t result = sx.q(*(arg1 + 0x160))

for (void* rsi = i + result * 0x18; i != rsi; i += 0x18)
    result = sub_141ded0f0(i + 8, arg1)

return result
