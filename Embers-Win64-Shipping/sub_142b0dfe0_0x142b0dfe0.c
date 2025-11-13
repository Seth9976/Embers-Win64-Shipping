// 函数: sub_142b0dfe0
// 地址: 0x142b0dfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *(arg1 + 0x10)

if (rdx != 0)
    int32_t r8_1 = *(arg1 + 0x18)
    int32_t r9_1 = arg2 + 0x100
    
    if (arg2 s>= 0)
        r9_1 = arg2
    
    if (r8_1 s< 0)
        return sub_142b0e050(arg1, rdx, r9_1) __tailcall
    
    if (r9_1 == zx.d(*rdx))
        *(arg1 + 0x10) = &rdx[1]
        *(arg1 + 0x18) = r8_1 - 1
        
        if (r8_1 - 1 s< 0)
            uint32_t rcx = zx.d(rdx[1])
            
            if (rcx u>= 0x20)
                return zx.q(3 - (rcx & 1))
        
        return 1
    
    *(arg1 + 0x10) = 0

return 0
