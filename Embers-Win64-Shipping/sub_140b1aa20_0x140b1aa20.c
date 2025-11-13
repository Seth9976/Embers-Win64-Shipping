// 函数: sub_140b1aa20
// 地址: 0x140b1aa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = sub_140b17d90()
EnterCriticalSection(lpCriticalSection)
sub_140596d10(arg1, &lpCriticalSection[1])

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return arg1
