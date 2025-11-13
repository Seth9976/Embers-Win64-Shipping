// 函数: sub_1418de630
// 地址: 0x1418de630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x50)

if (rax != 0)
    void* rcx = *(arg1 + 0x308)
    
    if (arg2 == 0)
        sub_1418be030(rcx + 0x3b0, 5, rax)
    else
        data_143efb888(*(rcx + 8), rax, 0)
    
    *(arg1 + 0x50) = 0

CRITICAL_SECTION* lpCriticalSection = *(*(arg1 + 0x308) + 0x1b00) + 0x230
int64_t result = EnterCriticalSection(lpCriticalSection)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
