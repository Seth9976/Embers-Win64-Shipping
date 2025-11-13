// 函数: sub_142bd31b0
// 地址: 0x142bd31b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg4 - arg2
int32_t r10 = r9
int32_t rcx_1 = arg5 - arg3
int32_t r11 = rcx_1
uint64_t result = *arg1

if (*(result + 0x134) != 0)
    r10 = neg.d(r10)
    r11 = neg.d(r11)

*arg7 = 0
*arg6 = 0

if (*(arg1 + 0x48de) != 0)
    void* rax = arg1[1]
    *(rax + 0x20) += (rcx_1 s>> 0x10) * (arg2 s>> 0x10) - (r9 s>> 0x10) * (arg3 s>> 0x10)
    int32_t rax_3
    int32_t rcx_5
    
    if (r10 s< 0)
        int32_t rax_10 = neg.d(r10)
        int32_t rcx_7
        
        if (r11 s< 0)
            if (rax_10 s> neg.d(r11) * 2)
            label_142bd32d1:
                *arg6 = 0
                result = zx.q(*(arg1 + 0x490c) * 2)
                *arg7 = result.d
            else
                if (neg.d(r11) s<= neg.d(r10) * 2)
                    rcx_7 = -0xb332
                label_142bd3317:
                    rax_3 = sub_142b93e80(rcx_7, arg1[0x921].d)
                    rcx_5 = 0x1b333
                    goto label_142bd3321
                
            label_142bd329b:
                *arg6 = neg.d(arg1[0x921].d)
                result = zx.q(*(arg1 + 0x490c))
                *arg7 = result.d
        else
            if (rax_10 s> r11 * 2)
                goto label_142bd32d1
            
            if (r11 s<= neg.d(r10) * 2)
                rcx_7 = 0xb333
                goto label_142bd3317
            
        label_142bd324b:
            *arg6 = arg1[0x921].d
            result = zx.q(*(arg1 + 0x490c))
            *arg7 = result.d
    else if (r11 s< 0)
        result = zx.q(neg.d(r11) * 2)
        
        if (r10 s<= result.d)
            if (neg.d(r11) s> r10 * 2)
                goto label_142bd329b
            
            rax_3 = sub_142b93e80(0xffff4cce, arg1[0x921].d)
            rcx_5 = 0x4ccd
        label_142bd3321:
            *arg6 = rax_3
            result = sub_142b93e80(rcx_5, *(arg1 + 0x490c))
            *arg7 = result.d
        else
            *arg6 = 0
            *arg7 = 0
    else
        result = zx.q(r11 * 2)
        
        if (r10 s<= result.d)
            if (r11 s> r10 * 2)
                goto label_142bd324b
            
            rax_3 = sub_142b93e80(0xb333, arg1[0x921].d)
            rcx_5 = 0x4ccd
            goto label_142bd3321
        
        *arg6 = 0
        *arg7 = 0

return result
