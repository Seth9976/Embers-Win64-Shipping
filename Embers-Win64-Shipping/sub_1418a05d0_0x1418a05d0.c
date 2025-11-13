// 函数: sub_1418a05d0
// 地址: 0x1418a05d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
void* rdi
rdi.b = ((*(arg1 + 0x30) - 2) & 0xfffffffd) == 0

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return zx.q(rdi.b)
