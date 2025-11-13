// 函数: sub_141e75b10
// 地址: 0x141e75b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)
void* rbp_2 = sx.q(*(arg1 + 0x18)) * 0x90 + rsi

if (rsi != rbp_2)
    CRITICAL_SECTION* lpCriticalSection = rsi + 0x48
    
    do
        EnterCriticalSection(lpCriticalSection)
        
        for (void* i = lpCriticalSection->__offset(0xffffffffffffffd0).q; i != 0; i = *(i + 0x38))
            int64_t* rcx_1 = *(i + 0x50)
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x28))(rcx_1)
                int64_t* rcx_2 = *(i + 0x50)
                int512_t zmm1
                zmm1.o = zx.o(0)
                (*(*rcx_2 + 0x10))(rcx_2, zmm1)
                int64_t* rcx_3 = *(i + 0x50)
                
                if (rcx_3 != 0)
                    *(i + 0x50) = 0
                    (**rcx_3)(rcx_3, 1)
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        rsi += 0x90
        lpCriticalSection += 0x90
    while (rsi != rbp_2)

return 0
