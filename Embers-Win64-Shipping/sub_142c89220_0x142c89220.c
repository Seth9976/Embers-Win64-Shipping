// 函数: sub_142c89220
// 地址: 0x142c89220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 == 0x17)
    char rcx = *(arg1 + 8)
    
    if ((rcx & 0xfe) == 0xfc)
        return 3
    
    uint32_t r8_1 = zx.d(*(arg1 + 9))
    int32_t rcx_4 = (zx.d(rcx) << 8 | r8_1) & 0xffc0
    
    if (rcx_4 == 0)
        char rax_5 = *(arg1 + 0x16) | *(arg1 + 0x15) | *(arg1 + 0x14) | *(arg1 + 0x13)
            | *(arg1 + 0x12) | *(arg1 + 0x11) | *(arg1 + 0x10)
        rax_5 = rax_5 | *(arg1 + 0xf) | *(arg1 + 0xe) | *(arg1 + 0xd) | *(arg1 + 0xc)
            | *(arg1 + 0xb) | *(arg1 + 0xa) | r8_1.b
        
        if (rax_5 == 0 && *(arg1 + 0x17) == 1)
            return 4
    else
        if (rcx_4 == 0xfe80)
            return 1
        
        if (rcx_4 == 0xfec0)
            return zx.q(rcx_4 - 0xfebe)

return 0
