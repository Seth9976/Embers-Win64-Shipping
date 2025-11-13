// 函数: sub_142b107e0
// 地址: 0x142b107e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> 0xffff)
    int16_t* rdx_3 = *(arg1 + 0x10)
    uint32_t r8_3 = zx.d((arg2 s>> 0xa).w - 0x2840)
    char rax_8
    
    if (rdx_3 != 0)
        int32_t rcx_6 = *(arg1 + 0x18)
        
        if (rcx_6 s< 0)
            rax_8 = sub_142b10910(arg1, rdx_3, r8_3)
        else if (r8_3 != zx.d(*rdx_3))
            *(arg1 + 0x10) = 0
            rax_8 = 0
        else
            *(arg1 + 0x10) = &rdx_3[1]
            *(arg1 + 0x18) = rcx_6 - 1
            uint32_t rcx_8
            
            if (rcx_6 - 1 s< 0)
                rcx_8 = zx.d(rdx_3[1])
            
            if (rcx_6 - 1 s>= 0 || rcx_8 u< 0x40)
                rax_8 = 1
            else
                rax_8 = 3 - (rcx_8 u>> 0xf).b
    else
        rax_8 = 0
    
    if ((rax_8 & 1) != 0)
        return sub_142b105d0(arg1, (arg2 & 0x3ff) | 0xdc00) __tailcall
else
    int16_t* rdx = *(arg1 + 0x10)
    
    if (rdx != 0)
        int32_t rcx = *(arg1 + 0x18)
        
        if (rcx s< 0)
            return sub_142b10910(arg1, rdx, arg2) __tailcall
        
        if (arg2 == zx.d(*rdx))
            *(arg1 + 0x10) = &rdx[1]
            *(arg1 + 0x18) = rcx - 1
            
            if (rcx - 1 s< 0)
                uint32_t rcx_2 = zx.d(rdx[1])
                
                if (rcx_2 u>= 0x40)
                    return zx.q(3 - (rcx_2 u>> 0xf))
            
            return 1
        
        *(arg1 + 0x10) = 0

return 0
