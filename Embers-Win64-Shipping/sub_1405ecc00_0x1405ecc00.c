// 函数: sub_1405ecc00
// 地址: 0x1405ecc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)
    *arg1 = 0
