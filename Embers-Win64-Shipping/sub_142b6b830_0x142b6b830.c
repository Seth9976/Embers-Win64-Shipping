// 函数: sub_142b6b830
// 地址: 0x142b6b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t r10 = arg2
int32_t i = arg2

if (arg2 s> 1)
    do
        if (i s<= 4)
            if (arg3 u> *(arg1 + (sx.q(r9) << 1)))
                r9 += 1
                
                if (r9 s>= r10 || arg3 u> *(arg1 + (sx.q(r9) << 1)))
                    r9 += 1
                    
                    if (r9 s>= r10 || arg3 u> *(arg1 + (sx.q(r9) << 1)))
                        r9 += 1
            
            break
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10 + r9)
        int64_t rcx = sx.q((temp1_1 - temp0_1) s>> 1)
        
        if (arg3 u>= *(arg1 + (rcx << 1)))
            r9 = rcx.d
        else
            r10 = rcx.d
        
        i = r10 - r9
    while (i s> 1)

if (r9 s< r10 && arg3 == *(arg1 + (sx.q(r9) << 1)))
    return zx.q(r9)

return 0xffffffff
