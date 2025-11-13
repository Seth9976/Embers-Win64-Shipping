// 函数: sub_141d7ad10
// 地址: 0x141d7ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x60)
uint64_t result

if (rdi != 0)
    CRITICAL_SECTION* lpCriticalSection = rdi + 0x20
    EnterCriticalSection(lpCriticalSection)
    bool z_1
    
    if (0 == *(rdi + 0x60))
        *(rdi + 0x60) = 0
        z_1 = true
    else
        *(rdi + 0x60)
        z_1 = false
    
    if (not(z_1) || *(rdi + 0x18) != 0)
        rdi.b = 1
    else
        rdi.b = 0
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    if (rdi.b == 0)
        result.b = 1
        return result

result.b = 0
return result
