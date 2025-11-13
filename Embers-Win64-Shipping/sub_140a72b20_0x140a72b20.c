// 函数: sub_140a72b20
// 地址: 0x140a72b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x10)
int64_t* rcx_1 = *(arg1 + 8)
char rax_1 = (*(*rcx_1 + 8))(rcx_1, arg2, arg3, arg4)

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rax_1)
