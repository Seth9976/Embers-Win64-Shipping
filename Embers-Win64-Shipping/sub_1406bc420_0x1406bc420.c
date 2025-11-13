// 函数: sub_1406bc420
// 地址: 0x1406bc420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x98)
int32_t rdi_3

if (arg2 == 0)
    rdi_3 = *(arg1 + 0x50)
else if (arg2 == 1)
    rdi_3 = *(arg1 + 0x90)
else if (arg2 == 2)
    rdi_3 = *(arg1 + 0x130)
else if (arg2 == 6)
    rdi_3 = *(arg1 + 0x190)
else
    rdi_3 = 0

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi_3)
