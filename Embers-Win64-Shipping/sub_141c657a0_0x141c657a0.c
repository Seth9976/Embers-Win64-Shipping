// 函数: sub_141c657a0
// 地址: 0x141c657a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c5bfe0(arg1)
BOOL result
result.b = TryEnterCriticalSection(arg1 + 0x90) != 0
CRITICAL_SECTION* lpCriticalSection = nullptr

if (result.b != 0)
    lpCriticalSection = arg1 + 0x90

if (lpCriticalSection == 0)
    return result

int64_t* rcx_1 = *(arg1 + 0x58)

if (rcx_1 != 0 && ((*(arg1 + 0xe0)).b & 0x21) == 0x21)
    (*(*rcx_1 + 0x2f8))(rcx_1)

return LeaveCriticalSection(lpCriticalSection)
