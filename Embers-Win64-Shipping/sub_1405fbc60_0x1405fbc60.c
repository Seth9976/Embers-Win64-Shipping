// 函数: sub_1405fbc60
// 地址: 0x1405fbc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t rsi = -0x3ff2c17b

if (*(arg1 + 0x40) != 0)
    rsi = 0

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rsi)
