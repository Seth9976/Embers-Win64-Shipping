// 函数: sub_140954960
// 地址: 0x140954960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

_DeleteExceptionPtr(arg1)
int64_t result = EnterCriticalSection(&arg1[0xde])
void* rdx = arg1[0xdd]

if (rdx != 0)
    arg1[0xdd] = 0
    result = sub_14094ea30(&arg1[0xdd], rdx)

if (arg1 == -0x6f0)
    return result

return LeaveCriticalSection(&arg1[0xde])
