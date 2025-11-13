// 函数: sub_141c3bdb0
// 地址: 0x141c3bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg2)

if (arg2 s>= 1)
    int32_t rbx_1 = 0
    
    if (arg2 s> arg1[0xd])
        sub_140a74f90(*(arg1 + 0x18))
        *(arg1 + 0x18) = 0
        *(arg1 + 0x18) = sub_140a82f30(sx.q((r14 << 2).d), zx.q(*arg1))
        arg1[0xd] = r14.d
    
    if (r14.d + arg3 s<= arg1[0xe])
        if (arg3 s>= 0)
            rbx_1 = arg3
        
        int32_t rdi_1 = arg1[0xc]
        int32_t rbx_2 = rbx_1 + arg1[0x10]
        int32_t rax_4 = rbx_2 + r14.d
        
        while (rbx_2 s> rdi_1)
            rbx_2 -= rdi_1
            rax_4 -= rdi_1
        
        if (rax_4 s< rdi_1)
            return *(arg1 + 0x10) + (sx.q(rbx_2) << 2)
        
        uint64_t rdi_2 = zx.q(rdi_1 - rbx_2)
        
        if (rdi_2.d s> 0)
            memcpy(*(arg1 + 0x18), *(arg1 + 0x10) + (sx.q(rbx_2) << 2), (rdi_2 << 2).d)
        
        uint64_t r14_1 = zx.q(r14.d - rdi_2.d)
        
        if (r14_1.d s> 0)
            memcpy(*(arg1 + 0x18) + (sx.q(rdi_2.d) << 2), *(arg1 + 0x10), (r14_1 << 2).d)
        
        return *(arg1 + 0x18)

return 0
