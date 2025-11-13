// 函数: sub_14089b2a0
// 地址: 0x14089b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0xe8)
*(arg1 + 0xcc) = 0

if (rdi != 0)
    WaitForSingleObject(*(rdi + 8), 0xffffffff)
    CloseHandle(*(rdi + 8))
    sub_14089ac10(rdi)
    free(*(rdi + 0x320))
    free(rdi)

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xe0)

if (lpCriticalSection != 0)
    DeleteCriticalSection(lpCriticalSection)
    free(lpCriticalSection)

free(*(arg1 + 0xd8))

if (*(arg1 + 0x20) != 0)
    free(*(arg1 + 0x30))

if (*(arg1 + 0xd4) != 0)
    data_143ceaad8(arg1)
    *(arg1 + 0xd4) = 0

return free(arg1) __tailcall
