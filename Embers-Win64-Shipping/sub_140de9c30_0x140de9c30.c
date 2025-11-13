// 函数: sub_140de9c30
// 地址: 0x140de9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg2 + 0x1a8))

if (r15 s<= 0)
    return 

int64_t rbx_1 = 0

do
    if (*(arg1 + 0x2c8) == 0)
        int64_t rbp_1 = sx.q(*(arg1 + 0x2c0))
        void* rdi_1 = *(*(arg2 + 0x1a0) + (rbx_1 << 3))
        int32_t rax_2 = (rbp_1 + 1).d
        *(arg1 + 0x2c0) = rax_2
        
        if (rax_2 s> *(arg1 + 0x2c4))
            sub_140638870(arg1 + 0x2b8)
        
        *(*(arg1 + 0x2b8) + (rbp_1 << 3)) = rdi_1
        int64_t rax = *(arg1 + 0x2b0)
        
        if (rax != 0 && *(rdi_1 + 8) != rax)
            *(rdi_1 + 8) = rax
            sub_140de7bf0(rdi_1)
    
    rbx_1 += 1
while (rbx_1 s< r15)
