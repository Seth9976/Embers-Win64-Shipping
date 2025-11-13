// 函数: sub_140a692e0
// 地址: 0x140a692e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    jump(*(*arg2 + 8))

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x38)
EnterCriticalSection(lpCriticalSection)
int64_t rax_1 = sx.q(*(arg1 + 0x20))

if (rax_1.d == 0)
    int64_t rbp = sx.q(*(arg1 + 0x10))
    int32_t rax_2 = (rbp + 1).d
    *(arg1 + 0x10) = rax_2
    
    if (rax_2 s> *(arg1 + 0x14))
        sub_140a88850(arg1 + 8)
    
    int64_t result = *(arg1 + 8)
    *(result + (rbp << 3)) = arg2
    
    if (lpCriticalSection == 0)
        return result
    
    return LeaveCriticalSection(lpCriticalSection)

int64_t r9_1 = *(arg1 + 0x18)
int32_t r10_1 = (rax_1 - 1).d
int32_t rcx_5 = rax_1.d - r10_1
void* rbp_1 = *(r9_1 + (rax_1 << 3) - 8)

if (rcx_5 != 1)
    memmove(r9_1 + (sx.q(r10_1) << 3), r9_1 + (rax_1 << 3), (rcx_5 - 1) << 3)
    rax_1 = zx.q(*(arg1 + 0x20))

*(arg1 + 0x20) = rax_1.d - 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

*(rbp_1 + 0x18) = arg2
int64_t* rcx_9 = *(rbp_1 + 8)
return (*(*rcx_9 + 0x10))(rcx_9)
