// 函数: sub_142a9bab0
// 地址: 0x142a9bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = *(sx.q(arg3) + arg1)

if (r10 s< 0xc0 && arg3 s> arg2)
    char r9_1 = *(sx.q(arg3 - 1) + arg1)
    
    if (r9_1 + 0x3e u<= 0x32)
        int32_t rax_4
        uint8_t rcx_1
        
        if (r9_1 u>= 0xe0)
            if (r9_1 u>= 0xf0)
                rcx_1 = r9_1 & 7
                rax_4 = sx.d(*((zx.q(r10) u>> 4) + 0x14363c6e8))
            else
                rcx_1 = r10 u>> 5
                rax_4 = sx.d(*((zx.q(r9_1) & 0xf) + " 000000000000"))
        
        if (r9_1 u< 0xe0 || (1 << rcx_1 & rax_4) != 0)
            return zx.q(arg3 - 1)
    else if (r9_1 s< 0xc0 && arg3 - 1 s> arg2)
        char r10_1 = *(sx.q(arg3 - 2) + arg1)
        
        if (r10_1 + 0x20 u<= 0x14)
            int32_t rax_12
            uint8_t rcx_4
            
            if (r10_1 u>= 0xf0)
                rcx_4 = r10_1 & 7
                rax_12 = sx.d(*((zx.q(r9_1) u>> 4) + 0x14363c6e8))
            else
                rcx_4 = r9_1 u>> 5
                rax_12 = sx.d(*((zx.q(r10_1) & 0xf) + " 000000000000"))
            
            if ((1 << rcx_4 & rax_12) != 0)
                return zx.q(arg3 - 2)
        else if (r10_1 s< 0xc0 && arg3 - 2 s> arg2)
            char rdx_4 = *(sx.q(arg3 - 3) + arg1)
            
            if (rdx_4 + 0x10 u<= 4
                    && test_bit(sx.d(*((zx.q(r10_1) u>> 4) + 0x14363c6e8)), zx.d(rdx_4) & 7))
                return zx.q(arg3 - 3)

return zx.q(arg3)
