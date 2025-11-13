// 函数: sub_140f89820
// 地址: 0x140f89820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
    int64_t rdi_1 = 0
    int32_t rax_5
    
    do
        if (*arg2 == *(*(*(arg1 + 0x2b8) + rdi_1) + 0x10))
            if (*(arg1 + 0x2c8) == 0)
                int64_t rdi_2 = sx.q(rbx) << 3
                int64_t* rcx_3 = *(rdi_2 + *(arg1 + 0x2b8))
                
                if (rcx_3 != 0)
                    (**rcx_3)(rcx_3, 1)
                
                int32_t rdx_2 = *(arg1 + 0x2c0)
                int32_t rax_11 = rdx_2 - rbx
                
                if (rax_11 != 1)
                    int64_t r10_1 = *(arg1 + 0x2b8)
                    memmove(r10_1 + rdi_2, r10_1 + (sx.q(rbx + 1) << 3), (rax_11 - 1) << 3)
                    rdx_2 = *(arg1 + 0x2c0)
                
                *(arg1 + 0x2c0) = rdx_2 - 1
                sub_1405c53d0(arg1 + 0x2b8)
            
            return zx.q(rbx)
        
        rbx += 1
        rdi_1 += 8
        rax_5 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    while (rbx s< rax_5)

return 0xffffffff
