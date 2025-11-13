// 函数: sub_14101f400
// 地址: 0x14101f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != -0x108)
    EnterCriticalSection(arg1 + 0x108)

**(arg2 + 0x50) = *(arg2 + 0x48)
int64_t result = *(arg2 + 0x50)
*(*(arg2 + 0x48) + 8) = result

if (*arg2 != 0)
    *(arg1 + 0xfc) -= 1
else
    *(arg1 + 0xf8) -= 1
    result = *(arg2 + 0x10)
    *(arg1 + 0x100) -= result

if (arg1 == -0x108)
    return result

return LeaveCriticalSection(arg1 + 0x108)
