// 函数: sub_142b105d0
// 地址: 0x142b105d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdx = *(arg1 + 0x10)

if (rdx != 0)
    int32_t r8_1 = *(arg1 + 0x18)
    
    if (r8_1 s< 0)
        return sub_142b10910(arg1, rdx, arg2) __tailcall
    
    if (arg2 == zx.d(*rdx))
        *(arg1 + 0x10) = &rdx[1]
        *(arg1 + 0x18) = r8_1 - 1
        
        if (r8_1 - 1 s< 0)
            uint32_t rcx = zx.d(rdx[1])
            
            if (rcx u>= 0x40)
                return zx.q(3 - (rcx u>> 0xf))
        
        return 1
    
    *(arg1 + 0x10) = 0

return 0
