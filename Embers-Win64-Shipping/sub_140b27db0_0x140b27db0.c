// 函数: sub_140b27db0
// 地址: 0x140b27db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = sub_140b17d90()
EnterCriticalSection(lpCriticalSection)
sub_140597df0(&lpCriticalSection[1], arg1)
uint64_t result = sub_140a306e0(&lpCriticalSection[1], &(*U"{}[\nt")[3], &data_142d5a024, 0)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
