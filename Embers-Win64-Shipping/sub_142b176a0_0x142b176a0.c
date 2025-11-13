// 函数: sub_142b176a0
// 地址: 0x142b176a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(*arg2)

if (r9.b s>= 0)
    int32_t rcx = -1
    
    if (sub_142a9f280(arg1, zx.q(r9.d), arg4, r9) != 0)
        rcx = 1
    
    return zx.q(rcx)

int32_t r8 = 1
int32_t rbx = 1

if (r9.b s< 0)
    uint32_t r10
    r10.b = 0
    
    if (arg3 == 1)
        r9 = 0xfffd
    else
        if (r9.d u>= 0xe0)
            int32_t rax_6
            
            if (r9.d u>= 0xf0)
                r9 = zx.q(r9.d - 0xf0)
                
                if (r9.d s> 4)
                    rax_6 = 0
                else
                    r10 = zx.d(arg2[1])
                    
                    if (not(test_bit(sx.d(*((zx.q(r10) u>> 4) + 0x14363c6e8)), r9.d)))
                        rax_6 = 0
                    else
                        rbx = 2
                        r9 = (zx.q(r10.b) & 0x3f) | zx.q(r9.d << 6)
                        
                        if (arg3 == 2)
                            rax_6 = 0
                        else
                            r10.b = arg2[2] - 0x80
                            
                            rax_6 = r10.b u> 0x3f ? 0 : 1
            else
                r10 = zx.d(arg2[1])
                r9 = zx.q(r9.d) & 0xf
                
                if (not(test_bit(sx.d((*" 000000000000")[r9]), zx.d((r10 u>> 5).b))))
                    rax_6 = 0
                else
                    r10.b &= 0x3f
                    rax_6 = 1
            
            if (rax_6 == 0)
                r8 = 0
            else
                rbx += 1
                r9 = zx.q(r9.d << 6) | zx.q(r10.b)
                
                if (rbx == arg3)
                    r8 = 0
        else if (r9.d u< 0xc2)
            r8 = 0
        else
            r9 = zx.q(r9.d) & 0x1f
        
        if (r8 == 0)
            r9 = 0xfffd
        else
            char rcx_4 = arg2[zx.q(rbx)] - 0x80
            
            if (rcx_4 u> 0x3f)
                r9 = 0xfffd
            else
                r9 = zx.q(r9.d << 6) | zx.q(rcx_4)
                rbx += 1

if (sub_142a9f280(arg1, zx.q(r9.d), r8) == 0)
    rbx = neg.d(rbx)

return zx.q(rbx)
