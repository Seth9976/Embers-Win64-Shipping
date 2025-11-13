// 函数: sub_142c41490
// 地址: 0x142c41490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 3)
    return 2

if (arg2 == 6)
    int32_t r8_1 = arg1 & 0xffffff80
    
    if (r8_1 != 0x900)
        if (r8_1 == 0xa00)
            return 0xc
        
        if (r8_1 != 0xa80)
            if (r8_1 == 0xb00)
                return 5
            
            if (r8_1 != 0xb80)
                if (r8_1 == 0xc00)
                    return 7
                
                int32_t rdx_3 = 7
                
                if (r8_1 != 0xc80)
                    rdx_3 = 9
                
                return zx.q(rdx_3)
    
    return 9

if (arg2 == 8)
    int32_t r8 = arg1 & 0xffffff80
    
    if (r8 != 0x900 && r8 != 0x980)
        if (r8 == 0xa00 || r8 == 0xa80)
            return 0xc
        
        if (r8 != 0xb00)
            if (r8 == 0xb80)
                return 0xc
            
            if (r8 == 0xc00 || r8 == 0xc80)
                return 7
            
            if (r8 != 0xd00)
                return 9
            
            return 0xc
    
    return 9

if (arg2 != 0xb)
    return zx.q(arg2)

int32_t rdx_1 = arg1 & 0xffffff80

if (rdx_1 == 0x900)
    return 9

if (rdx_1 == 0x980 || rdx_1 == 0xa00 || rdx_1 == 0xa80 || rdx_1 == 0xb00 || rdx_1 == 0xb80)
    return 0xc

if (rdx_1 == 0xc00)
    int32_t rcx = 9
    
    if (arg1 u<= 0xc42)
        rcx = 7
    
    return zx.q(rcx)

if (rdx_1 != 0xc80)
    if (rdx_1 != 0xd00)
        return 9
    
    return 0xc

int32_t rdx_2 = 7

if (arg1 - 0xcc3 u<= 0x13)
    rdx_2 = 9

return zx.q(rdx_2)
