// 函数: sub_14183ae70
// 地址: 0x14183ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = EnterCriticalSection(arg1 + 0x60)

if (arg2 != 0)
    result = *(arg1 + 0x50)
    *arg2 = result

if (arg3 != 0)
    result = arg1 + 8
    *arg3 = result

return result
