// 函数: sub_141c65670
// 地址: 0x141c65670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL rax
rax.b = TryEnterCriticalSection(arg1 + 0x90) != 0
void* lpCriticalSection = nullptr

if (rax.b != 0)
    lpCriticalSection = arg1 + 0x90

void* rbx

if (lpCriticalSection == 0 || *(arg1 + 0x58) == 0)
    rbx.b = 0
else
    sub_141c5bfe0(arg1)
    sub_141c5a7d0(arg1)
    *(arg1 + 0x58) = 0
    rbx.b = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rbx.b)
