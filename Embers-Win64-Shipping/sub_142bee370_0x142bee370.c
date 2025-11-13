// 函数: sub_142bee370
// 地址: 0x142bee370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg1

if (arg1 != 0)
    char rcx = *arg1
    
    if (rcx != 0)
        int16_t rax = 0
        int16_t r10 = 0
        
        if (rcx == 0x2d)
            r8 = &r8[1]
            r10 = 1
        
        uint32_t r9 = zx.d(*r8)
        
        while ((*((zx.q(r9) u>> 3) + 0x143699630) & (1 << (r9.b & 7)).b) != 0)
            if (rax s>= 0xccb)
                rax = 0x7fff
                break
            
            r8 = &r8[1]
            uint16_t rdx_1 = zx.w(*(sx.q(r9.b) + 0x1436995b0))
            r9 = zx.d(*r8)
            rax = rax * 0xa + rdx_1
        
        int32_t rcx_13 = sx.d(rax)
        
        if (r10 != 0)
            rcx_13 = neg.d(rcx_13)
        
        return zx.q(rcx_13.w)

return 0
