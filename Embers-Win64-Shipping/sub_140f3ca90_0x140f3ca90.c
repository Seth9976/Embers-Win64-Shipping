// 函数: sub_140f3ca90
// 地址: 0x140f3ca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg2 + 0x1a8) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        if (*(arg1 + 0x2e0) == 0)
            int64_t r13_1 = sx.q(*(arg1 + 0x2d8))
            void* rdi_1 = *(r14_1 + *(arg2 + 0x1a0))
            int32_t rax_2 = (r13_1 + 1).d
            *(arg1 + 0x2d8) = rax_2
            
            if (rax_2 s> *(arg1 + 0x2dc))
                sub_140638870(arg1 + 0x2d0)
            
            *(*(arg1 + 0x2d0) + (r13_1 << 3)) = rdi_1
            int64_t rax_4 = *(arg1 + 0x2c8)
            
            if (rax_4 != 0 && *(rdi_1 + 8) != rax_4)
                *(rdi_1 + 8) = rax_4
                sub_140de7bf0(rdi_1)
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg2 + 0x1a8))

*(arg1 + 0x2a8) = *(arg2 + 0x1b0)
*(arg1 + 0x2ac) = *(arg2 + 0x1b4)
return sub_1407473e0(arg1 + 0x2b0, arg2 + 0x1b8) __tailcall
