// 函数: sub_141d7ad80
// 地址: 0x141d7ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x60)

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
        void* rcx_2 = *(arg1 + 0xc8)
        char rax
        
        if (rcx_2 != 0)
            int64_t* rcx_3 = *(rcx_2 + 0x70)
            rax = (*(*rcx_3 + 0x20))(rcx_3, 0, 0)
        
        if (rcx_2 == 0 || rax != 0)
            return 1

return 0
