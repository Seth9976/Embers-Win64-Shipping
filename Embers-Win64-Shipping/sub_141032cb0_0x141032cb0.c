// 函数: sub_141032cb0
// 地址: 0x141032cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x30)
int64_t* result = j_sub_140a82f30(0x10)

if (result != 0)
    *result = 0
    result[1] = arg2
    int64_t** rdx = *(arg1 + 0x20)
    *(arg1 + 0x20) = result
    *rdx = result

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(arg1 + 0x30)
