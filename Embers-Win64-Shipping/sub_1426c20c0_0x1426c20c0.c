// 函数: sub_1426c20c0
// 地址: 0x1426c20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg3)

if (rax.d s< *(arg1 + 0x118))
    rax = zx.q(arg3)
    void* rbx_2 = rax * 0x58 + *(arg1 + 0x110)
    int32_t r9_1 = *(rbx_2 + 0x28)
    int32_t r9_2 = r9_1 - 1
    
    if (r9_1 - 1 s>= 0)
        int64_t r10_1 = *(rbx_2 + 0x20)
        int64_t rcx = sx.q(r9_2)
        int64_t* rax_3 = (rcx << 4) + r10_1
        
        while (*rax_3 != arg2)
            r9_2 -= 1
            rax_3 -= 0x10
            int64_t temp2_1 = rcx
            rcx -= 1
            
            if (temp2_1 - 1 s< 0)
                return rax_3
        
        int32_t rcx_1 = *(rbx_2 + 0x28)
        int32_t rax_5 = rcx_1 - r9_2
        
        if (rax_5 != 1)
            memmove((sx.q(r9_2) << 4) + r10_1, (sx.q(r9_2 + 1) << 4) + r10_1, (rax_5 - 1) << 4)
            rcx_1 = *(rbx_2 + 0x28)
        
        *(rbx_2 + 0x28) = rcx_1 - 1
        return sub_1426c2270(arg1)

return rax
