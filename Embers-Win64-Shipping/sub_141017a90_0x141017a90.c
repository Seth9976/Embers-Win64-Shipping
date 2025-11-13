// 函数: sub_141017a90
// 地址: 0x141017a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[6].b == 0)
    return 0x80070057

if (*(arg1 + 0x19) == 1)
    return 0x8007000e

int32_t i = 0

if (arg1[5] s> 0)
    int64_t r8_1 = 0
    
    do
        r8_1 += 8
        i += 1
        *(*(r8_1 + *(arg1 + 8) - 8) + zx.q(*arg1) + 0x28) = 0
    while (i s< arg1[5])

CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0x20)
CRITICAL_SECTION* lpCriticalSection = lpCriticalSection_1

if (lpCriticalSection_1 != 0)
    EnterCriticalSection(lpCriticalSection)
    lpCriticalSection = *(arg1 + 0x20)

*(zx.q(*arg1) + lpCriticalSection + 0x28) = 0
*arg1 = 0xffffffff
arg1[6].b = 0

if (lpCriticalSection_1 != 0)
    LeaveCriticalSection(lpCriticalSection_1)

arg1[6].b = 0
return 0
