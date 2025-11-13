// 函数: sub_141914b50
// 地址: 0x141914b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x15cf8)
int64_t* rcx_1 = *(arg1 + 0x15d20)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x30))(rcx_1)

if (arg1 != -0x15cf8)
    LeaveCriticalSection(arg1 + 0x15cf8)

*(arg1 + 0x8c1) = 0
return sub_141957f90() __tailcall
