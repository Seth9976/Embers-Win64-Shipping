// 函数: sub_140a8a2d0
// 地址: 0x140a8a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (*(arg1 + 0x10) == 0)
    int64_t* rcx = *(arg1 + 8)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
    int64_t* i = *(arg1 + 0x18)
    *(arg1 + 0x18) = 0
    
    if (i != 0)
        do
            (**i)(i)
            void* rdi_1 = *(arg1 + 0x20)
            i = nullptr
            CRITICAL_SECTION* lpCriticalSection = *(rdi_1 + 0x38)
            EnterCriticalSection(lpCriticalSection)
            
            if (*(rdi_1 + 0x10) s> 0)
                int32_t rax_4 = *(rdi_1 + 0x10)
                int64_t** rcx_3 = *(rdi_1 + 8)
                i = *rcx_3
                
                if (rax_4 != 1)
                    memmove(rcx_3, &rcx_3[1], (rax_4 - 1) << 3)
                    rax_4 = *(rdi_1 + 0x10)
                
                *(rdi_1 + 0x10) = rax_4 - 1
            
            if (*(rdi_1 + 0x10) s<= 0 || i == 0)
                int64_t rbp_1 = sx.q(*(rdi_1 + 0x20))
                int32_t rax_6 = (rbp_1 + 1).d
                *(rdi_1 + 0x20) = rax_6
                
                if (rax_6 s> *(rdi_1 + 0x24))
                    sub_140a88850(rdi_1 + 0x18)
                
                *(*(rdi_1 + 0x18) + (rbp_1 << 3)) = arg1
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        while (i != 0)

return 0
