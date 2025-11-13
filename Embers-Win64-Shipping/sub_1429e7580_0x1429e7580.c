// 函数: sub_1429e7580
// 地址: 0x1429e7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x47e8)
int32_t r14 = 0
EnterCriticalSection(lpCriticalSection)
int32_t i = *(arg1 + 0x4814)

if (i != 0)
    void* rbx_1 = arg1 + 0x410
    
    do
        int64_t rdi_1 = sx.q(*rbx_1)
        
        if (rdi_1.d s>= 0)
            int64_t rcx_1 = rdi_1 * 0xd0
            int32_t rax_1 = *(rcx_1 + lpCriticalSection + 0x40)
            
            if (rax_1 s> 0)
                *(rcx_1 + lpCriticalSection + 0x40) = rax_1 - 1
                
                if (rax_1 == 1 && *(rcx_1 + lpCriticalSection + 0x68) != 0)
                    lpCriticalSection->__offset(0x38).q(lpCriticalSection->__offset(0x28).q, 
                        lpCriticalSection + 0x58 + rcx_1)
        
        if ((i.b & 1) != 0 && rdi_1.d s>= 0)
            int64_t rcx_3 = rdi_1 * 0xd0
            int32_t rax_3 = *(rcx_3 + lpCriticalSection + 0x40)
            
            if (rax_3 s> 0)
                *(rcx_3 + lpCriticalSection + 0x40) = rax_3 - 1
                
                if (rax_3 == 1 && *(rcx_3 + lpCriticalSection + 0x68) != 0)
                    lpCriticalSection->__offset(0x38).q(lpCriticalSection->__offset(0x28).q, 
                        lpCriticalSection + 0x58 + rcx_3)
        
        r14 += 1
        *rbx_1 = *(rbx_1 + 0x20)
        rbx_1 += 4
        i s>>= 1
    while (i != 0)

int64_t rdi_2 = sx.q(r14)

if (rdi_2 s< 8)
    void* rbx_3 = arg1 + 0x410 + (rdi_2 << 2)
    
    while (*(arg1 + 0x5b4) == 0)
        int64_t rax_6 = sx.q(*rbx_3)
        
        if (rax_6.d s>= 0)
            int64_t rcx_5 = rax_6 * 0xd0
            int32_t rax_7 = *(rcx_5 + lpCriticalSection + 0x40)
            
            if (rax_7 s> 0)
                *(rcx_5 + lpCriticalSection + 0x40) = rax_7 - 1
                
                if (rax_7 == 1 && *(rcx_5 + lpCriticalSection + 0x68) != 0)
                    lpCriticalSection->__offset(0x38).q(lpCriticalSection->__offset(0x28).q, 
                        lpCriticalSection + 0x58 + rcx_5)
        
        rdi_2 += 1
        *rbx_3 = *(rbx_3 + 0x20)
        rbx_3 += 4
        
        if (rdi_2 s>= 8)
            break

LeaveCriticalSection(lpCriticalSection)
*(arg1 + 0x4ec4) = 0
int64_t result = sx.q(*(arg1 + 0x5a0))
*(arg1 + 0x3f8) = *(arg1 + 0x47e8) + 0x70 + result * 0xd0

if (*(arg1 + 0x4818) == 0 || *(arg1 + 0x5ac) == 0)
    EnterCriticalSection(lpCriticalSection)
    int64_t rdx_10 = sx.q(*(arg1 + 0x5a0)) * 0xd0
    *(rdx_10 + lpCriticalSection + 0x40) -= 1
    result = LeaveCriticalSection(lpCriticalSection)

*(arg1 + 0x450) = 0xffffffff
*(arg1 + 0x4c0) = 0xffffffff
*(arg1 + 0x530) = 0xffffffff
return result
