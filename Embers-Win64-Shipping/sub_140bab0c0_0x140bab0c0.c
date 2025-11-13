// 函数: sub_140bab0c0
// 地址: 0x140bab0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = EnterCriticalSection(arg1 + 8)
void* i = *(arg1 + 0x40)

for (void* r15_2 = (sx.q(*(arg1 + 0x48)) << 5) + i; i != r15_2; i += 0x20)
    CRITICAL_SECTION* lpCriticalSection = *(i + 0x10)
    EnterCriticalSection(lpCriticalSection)
    result = sub_1406daa50(lpCriticalSection + 0x40, arg2)
    
    if (result == 0xffffffff)
        int64_t r14_1 = sx.q(lpCriticalSection->__offset(0x48).d)
        int32_t rax = (r14_1 + 1).d
        lpCriticalSection->__offset(0x48).d = rax
        
        if (rax s> lpCriticalSection->__offset(0x4c).d)
            sub_1405a4f90(lpCriticalSection + 0x40)
        
        result = sub_140596d10((r14_1 << 4) + lpCriticalSection->__offset(0x40).q, arg2)
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)

*(arg1 + 0xb0) = 1

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8) __tailcall
