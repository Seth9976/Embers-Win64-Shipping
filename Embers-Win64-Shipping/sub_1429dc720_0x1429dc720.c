// 函数: sub_1429dc720
// 地址: 0x1429dc720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x550)

if (*(arg1 + 0x1b8) == 0 || *(arg1 + 0x1ac) s< 0)
    return 

EnterCriticalSection(lpCriticalSection)
int64_t rax_1 = sx.q(*(arg1 + 0x1ac))

if (rax_1.d s>= 0)
    int64_t rcx_1 = rax_1 * 0xd0
    int32_t rax_2 = *(rcx_1 + lpCriticalSection + 0x40)
    
    if (rax_2 s> 0)
        *(rcx_1 + lpCriticalSection + 0x40) = rax_2 - 1
        
        if (rax_2 == 1 && *(rcx_1 + lpCriticalSection + 0x68) != 0)
            lpCriticalSection->__offset(0x38).q(lpCriticalSection->__offset(0x28).q, 
                lpCriticalSection + 0x58 + rcx_1)

LeaveCriticalSection(lpCriticalSection)
