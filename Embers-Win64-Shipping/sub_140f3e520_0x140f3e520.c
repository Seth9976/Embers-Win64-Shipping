// 函数: sub_140f3e520
// 地址: 0x140f3e520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2a8) = *(arg2 + 0x1b0)
*(arg1 + 0x2ac) = *(arg2 + 0x1b4)
sub_140692f90(arg1 + 0x2b0, arg2 + 0x1b8)
int32_t i = 0
*(arg1 + 0x2e8) = *(arg2 + 0x1c8)
uint64_t result = zx.q(*(arg2 + 0x1d0))
*(arg1 + 0x2f0) = result.b

if (*(arg2 + 0x1a8) s> 0)
    void** r14_1 = nullptr
    
    do
        if (*(arg1 + 0x2e0) == 0)
            int64_t rbp_1 = sx.q(*(arg1 + 0x2d8))
            void* rdi_1 = *(r14_1 + *(arg2 + 0x1a0))
            int32_t rax_3 = (rbp_1 + 1).d
            *(arg1 + 0x2d8) = rax_3
            
            if (rax_3 s> *(arg1 + 0x2dc))
                sub_140638870(arg1 + 0x2d0)
            
            *(*(arg1 + 0x2d0) + (rbp_1 << 3)) = rdi_1
            result = *(arg1 + 0x2c8)
            
            if (result != 0 && *(rdi_1 + 8) != result)
                *(rdi_1 + 8) = result
                result = sub_140de7bf0(rdi_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg2 + 0x1a8))

return result
