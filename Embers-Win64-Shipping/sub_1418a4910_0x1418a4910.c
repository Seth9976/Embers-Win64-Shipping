// 函数: sub_1418a4910
// 地址: 0x1418a4910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
void* rdi
rdi.b = ((*(arg1 + 0x30) - 5) & 0xfffffffd) == 0

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi.b)
