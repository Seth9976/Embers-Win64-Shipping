// 函数: sub_142a9be90
// 地址: 0x142a9be90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg3

if (arg4.b s< 0xc0 && r10 s> arg2)
    char r11_1 = *(sx.q(r10 - 1) + arg1)
    char rdx_2
    
    if (r11_1 + 0x3e u<= 0x32)
        if (r11_1 u< 0xe0)
            *arg3 = r10 - 1
            return zx.q((zx.d(r11_1) - 0xc0) << 6) | (zx.q(arg4) & 0x3f)
        
        int32_t rax_9
        uint8_t rcx_1
        
        if (r11_1 u>= 0xf0)
            rcx_1 = r11_1 & 7
            rax_9 = sx.d(*((zx.q(arg4.b) u>> 4) + 0x14363c6e8))
        else
            rcx_1 = arg4.b u>> 5
            rax_9 = sx.d(*((zx.q(r11_1) & 0xf) + " 000000000000"))
        
        if ((1 << rcx_1 & rax_9) != 0)
            rdx_2 = arg5
            *arg3 = r10 - 1
            
            if (rdx_2 s>= 0)
                return 0x9f
            
            goto label_142a9bf6d
    else if (r11_1 s< 0xc0 && r10 - 1 s> arg2)
        int32_t r9_1 = arg4 & 0x3f
        char rdx_3 = *(sx.q(r10 - 2) + arg1)
        int32_t r9_2
        
        if (rdx_3 + 0x20 u> 0x14)
            if (rdx_3 s< 0xc0 && r10 - 2 s> arg2)
                char rcx_7 = *(sx.q(r10 - 3) + arg1)
                
                if (rcx_7 + 0x10 u<= 4)
                    uint32_t rsi_1 = zx.d(rcx_7) & 7
                    
                    if (test_bit(sx.d(*((zx.q(rdx_3) u>> 4) + 0x14363c6e8)), rsi_1))
                        *arg3 = r10 - 3
                        r9_2 = r9_1
                            | (((zx.d(rdx_3) & 0x3f) | rsi_1 << 6) << 6 | (zx.d(r11_1) & 0x3f))
                            << 6
                        
                        if (arg5 s> 0 && r9_2 s>= 0xfdd0
                                && (r9_2 s<= 0xfdef || (r9_2 & 0xfffe) == 0xfffe)
                                && r9_2 s<= 0x10ffff)
                            return 0x10ffff
                        
                        return zx.q(r9_2)
        else if (rdx_3 u< 0xf0)
            rdx_3 &= 0xf
            
            if (arg5 == 0xfe)
                if (rdx_3 == 0 && r11_1 - 0x80 u< 0x20)
                    return 0xffffffff
                
                *arg3 = r10 - 2
                return zx.q((zx.d(rdx_3) << 6 | zx.d(r11_1 - 0x80)) << 6) | zx.q(r9_1)
            
            uint32_t r11_2 = zx.d(r11_1)
            
            if (test_bit(sx.d((*" 000000000000")[zx.q(rdx_3)]), zx.d((r11_2 u>> 5).b)))
                *arg3 = r10 - 2
                r9_2 = r9_1 | (zx.d(rdx_3) << 6 | (r11_2 & 0x3f)) << 6
                
                if (arg5 s<= 0 || r9_2 s< 0xfdd0 || (r9_2 s> 0xfdef && (r9_2 & 0xfffe) != 0xfffe)
                        || r9_2 s> 0x10ffff)
                    return zx.q(r9_2)
                
                return 0xffff
        else if (test_bit(sx.d(*((zx.q(r11_1) u>> 4) + 0x14363c6e8)), zx.d(rdx_3) & 7))
            rdx_2 = arg5
            *arg3 = r10 - 2
            
            if (rdx_2 s>= 0)
                return 0xffff
            
        label_142a9bf6d:
            
            if (rdx_2 == 0xfd)
                return 0xfffd
            
            return 0xffffffff

if (arg5 s>= 0)
    return 0x15

if (arg5 == 0xfd)
    return 0xfffd

return 0xffffffff
