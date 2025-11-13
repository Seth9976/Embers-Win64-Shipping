// 函数: sub_142b53fa0
// 地址: 0x142b53fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg5 s<= 0)
    if (arg3 - 1 u<= 0xb && arg4 - 1 u<= 0x1e)
        int64_t r10 = sx.q(*(arg1 + 0xc))
        int32_t r11 = arg1[1].d
        int64_t r14 = *arg1
        int32_t i = 0
        
        if (sub_142b53b30(*(r14 + (r10 << 2)), arg2, arg3, arg4) s<= 0)
            i = r10.d
        
        while (i s< r11 - 1)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i + r11)
            int64_t r9 = sx.q((temp1_1 - temp0_1) s>> 1)
            int32_t rdx_3 = *(r14 + (r9 << 2))
            
            if (arg2 s>= 0xffff8000)
                if (arg2 s> 0x7fff)
                    i = r9.d
                else
                    int32_t rax_14 = (arg2 << 8 | arg3) << 8 | arg4
                    
                    if (rdx_3 s< rax_14 || rdx_3 == rax_14)
                        i = r9.d
                    else
                        r11 = r9.d
            else if (rdx_3 != 0x80000101)
                r11 = r9.d
            else
                i = r9.d
        
        return zx.q(i)
    
    *arg5 = 1

return 0xffffffff
