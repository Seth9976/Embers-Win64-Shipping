// 函数: sub_1419665c0
// 地址: 0x1419665c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdi_1 = (arg3 u>> 1).b & 1
char rax = arg2.b & 1
char rsi = arg3.b & 1
uint8_t rdx = (arg2 u>> 1).b & 1

if (rdx != 0 && (rdi_1 != 0 || rsi != 0))
    return 2

if (rax != 0 && rsi != 0 && rdi_1 == 0)
    return 1

if (rdx != 0)
    ReleaseSRWLockExclusive(arg1)
else if (rax != 0)
    ReleaseSRWLockShared(arg1)

if (rdi_1 != 0)
    AcquireSRWLockExclusive(arg1)
else if (rsi != 0)
    AcquireSRWLockShared(arg1)

return zx.q(arg3)
