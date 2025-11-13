// 函数: sub_141e7ac60
// 地址: 0x141e7ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
void* result = *(arg1 + 0x18)

if (result != 0)
    while (*(arg2 + 8) != *(result + 8) || *(arg2 + 0x10) != *(result + 0x10))
        result = *(result + 0x38)
        
        if (result == 0)
            break

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

return result
