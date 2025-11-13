// 函数: sub_141c65840
// 地址: 0x141c65840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c5bfe0(arg1)
BOOL result
result.b = TryEnterCriticalSection(arg1 + 0x90) != 0
CRITICAL_SECTION* lpCriticalSection = nullptr

if (result.b != 0)
    lpCriticalSection = arg1 + 0x90

if (lpCriticalSection == 0)
    return result

if (*(arg1 + 0x58) != 0)
    sub_141c5a7d0(arg1)
    *(arg1 + 0x58) = 0

return LeaveCriticalSection(lpCriticalSection)
