// 函数: sub_142a27df0
// 地址: 0x142a27df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 != 0)
    int64_t rax_1 = sx.q(arg2)
    
    if ((arg1[(rax_1 << 2) + 0x50] & 1) != 0)
        int32_t rdx = sx.d(*(arg1 + (rax_1 << 3) + 0x10))
        
        if (arg1[3] != 1)
            rdx += arg3
        
        if (rdx s< 0)
            return 0
        
        if (rdx s> 0xff)
            rdx = 0xff
        
        return zx.q(rdx)

return zx.q(arg3)
