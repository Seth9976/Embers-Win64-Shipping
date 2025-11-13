// 函数: sub_140b27a70
// 地址: 0x140b27a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b1c650(arg1, 0)
EnterCriticalSection(arg1 + 0x2e0)
uint32_t result = GetCurrentThreadId()
*(arg1 + 0x2d0) = result

if (arg1 == -0x2e0)
    return result

return LeaveCriticalSection(arg1 + 0x2e0)
