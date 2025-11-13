// 函数: sub_141c63c20
// 地址: 0x141c63c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x90)

if (rcx != 0 && (*(*rcx + 0x40))(rcx) != 0)
    void* rdi = *(arg1 + 0x98)
    EnterCriticalSection(rdi + 0xb8)
    int64_t rdi_1 = *(rdi + 0x60)
    
    if (rdi != -0xb8)
        LeaveCriticalSection(rdi + 0xb8)
    
    if (rdi_1 != 0)
        return sub_141c63a10(*(arg1 + 0x98)) __tailcall
    
    int64_t* rcx_5 = *(arg1 + 0x10)
    uint64_t rax_2
    
    if (rcx_5 != 0)
        char rdx_2 = *(*rcx_5 + 0x16d)
        
        if ((rdx_2 & 4) == 0)
            int32_t rdi_2 = *(*(arg1 + 0x90) + 0x40)
            
            if (rdi_2 - 2 u<= 1)
                rax_2 = *rcx_5
                
                if (rax_2 != 0
                        && (0f f< *(rcx_5 + 0xfc) || (rdx_2 & 5) != 0 || *(rax_2 + 0x268) == 0))
                    bool rax_5
                    int512_t zmm1
                    rax_5, zmm1 = sub_141e64720(rcx_5)
                    
                    if (rax_5 != 0)
                        int64_t* rcx_6 = *(arg1 + 0x90)
                        zmm1.o = *(*(arg1 + 0x10) + 0xfc)
                        (*(*rcx_6 + 0x28))(rcx_6, zmm1)
                    
                    int64_t rbx_1 = *(*(arg1 + 0x90) + 0x38)
                    
                    if (rdi_2 == 3)
                        int64_t* rax_9 = sub_1405f7040(sub_141f88540())
                        int64_t r8_2 = *rax_9
                        (*(r8_2 + 0xa8))(rax_9, rbx_1, r8_2)
                    
                    sub_141c69e10(*(arg1 + 0x98), rbx_1, 0, 0)
                    uint64_t rax_10
                    rax_10.b = 0
                    return rax_10
    
    rax_2.b = 1
    return rax_2

return 0
