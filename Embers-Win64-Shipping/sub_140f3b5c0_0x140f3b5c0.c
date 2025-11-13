// 函数: sub_140f3b5c0
// 地址: 0x140f3b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407473e0(arg1 + 0x2e0, arg2 + 0x1d0)
*(arg1 + 0x2dc) = *(arg2 + 0x1bc)
int32_t i = 0
*(arg1 + 0x304) = *(arg2 + 0x1c0)
*(arg1 + 0x308) = *(arg2 + 0x1c4)
*(arg1 + 0x2d8) = *(arg2 + 0x1b8)
*(arg1 + 0x2d0) = 0xffffffff
*(arg1 + 0x2d4) = 0
*(arg1 + 0x310) = *(arg2 + 0x1b0)

if (arg2 + 0x1e0 != arg1 + 0x2f0)
    int64_t* rcx_2
    
    if (*(arg2 + 0x1e8) != 0)
        rcx_2 = *(arg2 + 0x1e0)
    
    if (*(arg2 + 0x1e8) != 0 && rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, arg1 + 0x2f0)
    else if (*(arg1 + 0x2f8) != 0)
        int64_t* rcx_3 = *(arg1 + 0x2f0)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *(arg1 + 0x2f0)
            
            if (rcx_4 != 0)
                *(arg1 + 0x2f0) = sub_140a84c80(rcx_4, 0, 0)
            
            *(arg1 + 0x2f8) = 0

uint64_t result = zx.q(*(arg2 + 0x1c8))
*(arg1 + 0x300) = result.d

if (*(arg2 + 0x1a8) s> 0)
    void** r14_1 = nullptr
    
    do
        if (*(arg1 + 0x2c8) == 0)
            int64_t r15_1 = sx.q(*(arg1 + 0x2c0))
            void* rbx_1 = *(r14_1 + *(arg2 + 0x1a0))
            int32_t rax_9 = (r15_1 + 1).d
            *(arg1 + 0x2c0) = rax_9
            
            if (rax_9 s> *(arg1 + 0x2c4))
                sub_140638870(arg1 + 0x2b8)
            
            *(*(arg1 + 0x2b8) + (r15_1 << 3)) = rbx_1
            result = *(arg1 + 0x2b0)
            
            if (result != 0 && *(rbx_1 + 8) != result)
                *(rbx_1 + 8) = result
                result = sub_140de7bf0(rbx_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg2 + 0x1a8))

return result
