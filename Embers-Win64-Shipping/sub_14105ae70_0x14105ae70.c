// 函数: sub_14105ae70
// 地址: 0x14105ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int32_t result

if (*(arg1 + 0x60) == arg2)
    result = memcmp(arg1 + 0x64, arg3, rsi * 0x18)

if (*(arg1 + 0x60) != arg2 || result != 0)
    result = memcpy(arg1 + 0x64, arg3, (rsi * 0x18).d)
    *(arg1 + 0x60) = rsi.d
    *(arg1 + 0x34) = 1

return result
