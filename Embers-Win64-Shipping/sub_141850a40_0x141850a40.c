// 函数: sub_141850a40
// 地址: 0x141850a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[0x10])
char result = (*(*arg1 + 0x60))(arg1)

if (result != arg2)
    result = (*(*arg1 + 0x50))(arg1)

if (arg1 == -0x80)
    return result

return LeaveCriticalSection(&arg1[0x10])
