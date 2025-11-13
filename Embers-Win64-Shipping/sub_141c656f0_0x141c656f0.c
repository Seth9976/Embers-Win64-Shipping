// 函数: sub_141c656f0
// 地址: 0x141c656f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result
result.b = TryEnterCriticalSection(arg1 + 0x90) != 0
void* lpCriticalSection = nullptr

if (result.b != 0)
    lpCriticalSection = arg1 + 0x90

if (lpCriticalSection == 0)
    return result

int64_t* rcx_1 = *(arg1 + 0x58)

if (rcx_1 != 0 && (*(arg1 + 0xe0) & 0x20) != 0)
    (*(*rcx_1 + 0x2f0))(rcx_1)

return LeaveCriticalSection(lpCriticalSection)
