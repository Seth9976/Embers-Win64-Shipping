// 函数: sub_141d7ae60
// 地址: 0x141d7ae60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
bool z

if (0 == *(arg1 + 0x60))
    *(arg1 + 0x60) = 0
    z = true
else
    *(arg1 + 0x60)
    z = false

void* rdi

if (not(z) || *(arg1 + 0x18) != 0)
    rdi.b = 1
else
    rdi.b = 0

if (arg1 != -0x20)
    LeaveCriticalSection(arg1 + 0x20)

return zx.q(rdi.b)
