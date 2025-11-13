// 函数: sub_141c698b0
// 地址: 0x141c698b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a54810()
char result

if (rax != 0)
    int64_t* rcx = *(arg1 + 0x78)
    result = (*(*rcx + 0x20))(rcx, 0, 0)

if (rax == 0 || result == 0)
    int32_t rax_2 = 0
    
    if (0 == *(arg1 + 0x70))
        *(arg1 + 0x70) = 0
    else
        rax_2 = *(arg1 + 0x70)
    
    int64_t r12_1 = sx.q(rax_2)
    int32_t i = 0
    void* rsi_3 = ((r12_1 + 5) << 4) + arg1
    
    if (*(rsi_3 + 8) s> 0)
        int64_t r14_1 = 0
        
        do
            void* rbx_1 = *rsi_3
            int64_t* rax_3 = *(rbx_1 + r14_1 + 0x10)
            int64_t* rcx_2 = rbx_1 + 0x20 + r14_1
            
            if (rax_3 != 0)
                rcx_2 = rax_3
            
            (*(rbx_1 + r14_1))((*(*rcx_2 + 8))(rcx_2))
            *(arg1 + 0x1bc) -= 1
            i += 1
            r14_1 += 0x40
        while (i s< *(rsi_3 + 8))
    
    sub_141c6ca20(rsi_3, 0)
    result = sub_140a54810()
    
    if (result != 0)
        jump(*(**(arg1 + 0x78) + 0x10))
    
    int32_t rbp_1
    rbp_1.b = r12_1.d == 0
    *(arg1 + 0x70) = rbp_1

return result
