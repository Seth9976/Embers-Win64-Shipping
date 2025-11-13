// 函数: sub_141027ab0
// 地址: 0x141027ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x20)

if (lpCriticalSection != 0)
    EnterCriticalSection(lpCriticalSection)

int32_t rdi

if (arg1[6].b == 0)
    int64_t rdx_1 = *(arg1 + 0x20)
    rdi = 0
    int32_t rax_1 = 0
    
    while (true)
        uint64_t rcx_1 = zx.q(rax_1)
        
        if (*(rdx_1 + rcx_1 + 0x28) == 0)
            *arg1 = rax_1
            *(rcx_1 + rdx_1 + 0x28) = 1
            arg1[5] = 0
            arg1[6].w = 1
            break
        
        rax_1 += 1
        
        if (rax_1 u>= 0x20)
            rdi = -0x7ff8fff2
            break
else
    rdi = -0x7ff8ffa9

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi)
