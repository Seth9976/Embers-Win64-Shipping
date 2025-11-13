// 函数: sub_14089a890
// 地址: 0x14089a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (*(arg1 + 0xe8) != 0)
    rax = GetCurrentThreadId()

if (*(arg1 + 0xe8) != 0 && rax == *(arg1 + 0xf0))
    return 

CRITICAL_SECTION* rcx = *(arg1 + 0xe0)

if (rcx != 0)
    return LeaveCriticalSection(rcx) __tailcall
