// 函数: sub_141e84cd0
// 地址: 0x141e84cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg2 + 0x10)

if (rdi == 0)
    return 

void* rcx = *rdi

if (rcx == 0 || sub_14236bfb0(rcx, nullptr).b == 0 || sub_1423779f0(*rdi).b != 0)
    return 

CRITICAL_SECTION* lpCriticalSection = arg1 + 0xf8
EnterCriticalSection(lpCriticalSection)
sub_141e7edb0(arg1, *rdi)
int64_t rcx_4 = sx.q(*(arg1 + 0x68))

if (rcx_4.d != 0)
    int32_t rsi_1 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = **(arg1 + 0x60) != arg2
    int64_t rdi_1 = 0
    
    do
        int64_t r9_1 = sx.q(rsi_1)
        rdi_1 += 1
        rsi_1 += 1
        
        if (rdi_1 s< rcx_4)
            int64_t* rcx_5 = *(arg1 + 0x60) + (rdi_1 << 3)
            
            do
                char* rax
                rax.b = *rcx_5 != arg2
                
                if (zx.d(r12.b) != rax.d)
                    break
                
                rsi_1 += 1
                rdi_1 += 1
                rcx_5 = &rcx_5[1]
            while (rdi_1 s< rcx_4)
        
        int32_t r14_2 = rsi_1 - r9_1.d
        
        if (r12.b != 0)
            if (r13_1 != r9_1.d)
                int64_t rcx_6 = *(arg1 + 0x60)
                memmove(rcx_6 + (sx.q(r13_1) << 3), rcx_6 + (r9_1 << 3), r14_2 << 3)
            
            r13_1 += r14_2
        
        r12.b ^= 1
    while (rdi_1 s< rcx_4)
    
    *(arg1 + 0x68) = r13_1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)
