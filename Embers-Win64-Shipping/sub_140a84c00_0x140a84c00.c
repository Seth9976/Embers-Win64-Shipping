// 函数: sub_140a84c00
// 地址: 0x140a84c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)
int64_t* rcx_1 = *(arg1 + 8)
int64_t result = (*(*rcx_1 + 0x20))(rcx_1, arg2, arg3, zx.q(arg4))

if (arg1 == -0x10)
    return result

LeaveCriticalSection(arg1 + 0x10)
return result
