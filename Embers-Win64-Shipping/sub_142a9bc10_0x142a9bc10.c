// 函数: sub_142a9bc10
// 地址: 0x142a9bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*arg2)
uint64_t result

if (r10.d == arg3 || arg4 s> 0xf4)
label_142a9be45:
    
    if (arg5 s>= 0)
        result = zx.q(*((sx.q(r10.d - *arg2) << 2) + 0x14364ee00))
    else if (arg5 != 0xfd)
        result = 0xffffffff
    else
        result = 0xfffd
else
    int32_t result_1
    
    if (arg4 s< 0xf0)
        if (arg4 s< 0xe0)
            if (arg4 s>= 0xc2)
                char rcx_10 = *(r10 + arg1) - 0x80
                
                if (rcx_10 u<= 0x3f)
                    *arg2 = (r10 + 1).d
                    return zx.q((arg4 - 0xc0) << 6) | zx.q(rcx_10)
            
            goto label_142a9be45
        
        uint64_t r9_2 = zx.q(arg4) & 0xf
        
        if (arg5 == 0xfe)
            char rcx_9 = *(r10 + arg1) - 0x80
            
            if (rcx_9 u<= 0x3f && (r9_2.d != 0 || rcx_9 u>= 0x20))
                r10 = zx.q(r10.d + 1)
                
                if (r10.d != arg3)
                    char rdx_11 = *(sx.q(r10.d) + arg1) - 0x80
                    
                    if (rdx_11 u<= 0x3f)
                        *arg2 = (r10 + 1).d
                        return zx.q(rdx_11) | zx.q((r9_2.d << 6 | zx.d(rcx_9)) << 6)
            
            result = 0xffffffff
        else
            uint32_t rdx_7 = zx.d(*(r10 + arg1))
            
            if (not(test_bit(sx.d((*" 000000000000")[r9_2]), zx.d((rdx_7 u>> 5).b))))
                goto label_142a9be45
            
            r10 = zx.q(r10.d + 1)
            
            if (r10.d == arg3)
                goto label_142a9be45
            
            char rcx_6 = *(sx.q(r10.d) + arg1) - 0x80
            
            if (rcx_6 u> 0x3f)
                goto label_142a9be45
            
            r10 = zx.q(r10.d + 1)
            result_1 = ((rdx_7 & 0x3f) | r9_2.d << 6) << 6 | zx.d(rcx_6)
            
            if (arg5 s<= 0 || result_1 u< 0xfdd0)
                result = zx.q(result_1)
            else
                if (result_1 u<= 0xfdef || (result_1 & 0xfffe) == 0xfffe)
                    goto label_142a9be45
                
                result = zx.q(result_1)
    else
        uint32_t rdx = zx.d(*(r10 + arg1))
        int32_t r9 = arg4 & 7
        
        if (not(test_bit(sx.d(*((zx.q(rdx) u>> 4) + 0x14363c6e8)), r9 & 7)))
            goto label_142a9be45
        
        r10 = zx.q(r10.d + 1)
        
        if (r10.d == arg3)
            goto label_142a9be45
        
        char rsi_1 = *(sx.q(r10.d) + arg1) - 0x80
        
        if (rsi_1 u> 0x3f)
            goto label_142a9be45
        
        r10 = zx.q(r10.d + 1)
        
        if (r10.d == arg3)
            goto label_142a9be45
        
        char rcx_2 = *(sx.q(r10.d) + arg1) - 0x80
        
        if (rcx_2 u> 0x3f)
            goto label_142a9be45
        
        r10 = zx.q(r10.d + 1)
        result_1 = (((zx.d(rdx.b) & 0x3f) | r9 << 6) << 6 | zx.d(rsi_1)) << 6 | zx.d(rcx_2)
        
        if (arg5 s> 0 && result_1 u>= 0xfdd0
                && (result_1 u<= 0xfdef || (result_1 & 0xfffe) == 0xfffe) && result_1 u<= 0x10ffff)
            goto label_142a9be45
        
        result = zx.q(result_1)

*arg2 = r10.d
return result
