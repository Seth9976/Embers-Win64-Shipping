// 函数: sub_141851ae0
// 地址: 0x141851ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x80)
void* rdi

if (*(arg1 + 0x70) != 0xb)
    *(arg1 + 0x70) = 0xb
    rdi.b = 1
else
    *(arg1 + 0x70) = 0xc
    sub_141851f90(arg1)
    rdi.b = 0

if (arg1 != -0x80)
    LeaveCriticalSection(arg1 + 0x80)

return zx.q(rdi.b)
