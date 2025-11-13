// 函数: sub_140a6f760
// 地址: 0x140a6f760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)
int64_t* rcx_1 = *(arg1 + 8)
int64_t result = (*(*rcx_1 + 0x78))(rcx_1, arg2)

if (arg1 == -0x10)
    return result

return LeaveCriticalSection(arg1 + 0x10)
