// 函数: sub_1428a5be0
// 地址: 0x1428a5be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
CRITICAL_SECTION* lpCriticalSection = sub_1428a6a70(0x28)

if (lpCriticalSection != 0)
    if (InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x400) != 0)
        return lpCriticalSection
    
    sub_1428a6780(lpCriticalSection)

return 0
