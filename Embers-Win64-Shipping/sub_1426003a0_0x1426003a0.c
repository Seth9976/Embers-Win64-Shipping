// 函数: sub_1426003a0
// 地址: 0x1426003a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rcx = *(arg1 + 0x98)

if (rcx == 0)
    int64_t result
    result.b = 1
    return result

char rax = sub_142600270(rcx)

if (rax != 0)
    CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x98)
    
    if (lpCriticalSection != 0)
        int64_t* rcx_1 = lpCriticalSection->__offset(0x28).q
        
        if (rcx_1 != 0)
            int64_t r8_1 = *rcx_1
            (*(r8_1 + 0x10))(rcx_1, 1, r8_1)
        
        DeleteCriticalSection(lpCriticalSection)
        j_sub_140a74f90(lpCriticalSection)
    
    *(arg1 + 0x98) = 0

return zx.q(rax)
