// 函数: sub_142a90920
// 地址: 0x142a90920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    *(arg1 + 0xc) = *(arg1 + 0x14)
    *(arg1 + 0x1c) = arg2
else if (arg2 s<= 0)
    arg2 = *(arg1 + 0x1c)
else
    *(arg1 + 0xc) = arg1[3].d
    *(arg1 + 0x1c) = arg2

if (arg2 s>= 0)
    int64_t r9_3 = sx.q(*(arg1 + 0xc))
    int32_t rcx_5 = arg1[2].d
    
    if (r9_3.d s< rcx_5)
        int64_t r10_2 = *arg1
        uint32_t rdx_1 = zx.d(*(r10_2 + (r9_3 << 1)))
        *(arg1 + 0xc) = r9_3.d + 1
        
        if ((rdx_1 & 0xfffffc00) == 0xd800 && r9_3.d + 1 != rcx_5)
            uint32_t r10_3 = zx.d(*(r10_2 + (sx.q(r9_3.d + 1) << 1)))
            
            if ((r10_3 & 0xfffffc00) == 0xdc00)
                rdx_1 = ((rdx_1 - 0xd7f7) << 0xa) + r10_3
                *(arg1 + 0xc) = r9_3.d + 2
        
        return zx.q(rdx_1)
else
    int32_t rcx = arg1[1].d
    int32_t rax_3 = *(arg1 + 0xc)
    
    if (rcx s< rax_3)
        int64_t r10 = *arg1
        *(arg1 + 0xc) = rax_3 - 1
        uint32_t rdx = zx.d(*(r10 + (sx.q(rax_3 - 1) << 1)))
        
        if ((rdx & 0xfffffc00) == 0xdc00 && rax_3 - 1 s> rcx)
            uint32_t r10_1 = zx.d(*(r10 + (sx.q(rax_3 - 2) << 1)))
            
            if ((r10_1 & 0xfffffc00) == 0xd800)
                *(arg1 + 0xc) = rax_3 - 2
                rdx += (r10_1 - 0xd7f7) << 0xa
        
        return zx.q(rdx)

return 0xffffffff
