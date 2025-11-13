// 函数: sub_142b21ce0
// 地址: 0x142b21ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 u> 0xffff)
    uint32_t rax_8 = zx.d(arg3.w)
    
    if (rax_8 u>= 0x1000)
        int32_t rax_9 = 0x70007
        
        if (arg2 != 0)
            rax_9 = 0x1f001f
        
        return zx.q((arg3 & rax_9) + 0x200020)
    
    if (rax_8 u> arg1)
        int32_t r8_10 = ((0x70007 & arg3) + 0x200020) | 0x80008
        
        if (arg2 == 0)
            r8_10 = (0x70007 & arg3) + 0x200020
        
        return zx.q(r8_10)
    
    arg3 = 0
else if (arg3 u< 0x1000)
    if (arg3 u> arg1)
        int32_t r8_6 = ((arg3 & 7) + 0x20) | 8
        
        if (arg2 == 0)
            r8_6 = (arg3 & 7) + 0x20
        
        return zx.q(r8_6)
    
    if (arg3 u>= 0xc00)
        arg3 = 0
else
    int32_t rax_2 = arg3 & 0x3e0
    
    if (arg2 != 0)
        int32_t r8_1 = ((arg3 & 0x1f) + 0x20) | 0x280000
        
        if (rax_2 u< 0x180)
            r8_1 = (arg3 & 0x1f) + 0x20
        
        return zx.q(r8_1)
    
    arg3 = (arg3 & 7) + 0x20
    
    if (rax_2 u>= 0x180)
        return zx.q(arg3) | 0x200000

return zx.q(arg3)
