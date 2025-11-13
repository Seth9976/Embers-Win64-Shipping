// 函数: sub_1425f2090
// 地址: 0x1425f2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 8
int64_t* result = EnterCriticalSection(lpCriticalSection)
int64_t rdx = sx.q(*(arg1 + 0x38))

if (rdx.d != 0)
    int32_t rsi_1 = 0
    int32_t r12_1 = 0
    result = *(arg1 + 0x30)
    int64_t r15
    r15.b = *result != arg2
    int64_t rdi_1 = 0
    
    do
        int64_t r9_1 = sx.q(rsi_1)
        rdi_1 += 1
        rsi_1 += 1
        
        if (rdi_1 s< rdx)
            int64_t* rcx_1 = *(arg1 + 0x30) + (rdi_1 << 3)
            
            do
                result.b = *rcx_1 != arg2
                
                if (zx.d(r15.b) != result.d)
                    break
                
                rsi_1 += 1
                rdi_1 += 1
                rcx_1 = &rcx_1[1]
            while (rdi_1 s< rdx)
        
        int32_t r14_2 = rsi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_2 = *(arg1 + 0x30)
                result = memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r9_1 << 3), r14_2 << 3)
            
            r12_1 += r14_2
        
        r15.b ^= 1
    while (rdi_1 s< rdx)
    
    *(arg1 + 0x38) = r12_1

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
