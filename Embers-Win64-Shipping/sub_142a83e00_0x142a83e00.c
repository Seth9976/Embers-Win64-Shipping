// 函数: sub_142a83e00
// 地址: 0x142a83e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (arg1 != 0)
    int64_t* rax_1 = *arg1
    
    if (rax_1 == arg1)
    label_142a83e45:
        sub_142a83690(arg1)
        
        if (rdi.d s>= 0 && rdi.d s< arg1[0x25].d)
            int64_t r9 = rdi * 0xc
            int32_t r8 = *(r9 + arg1[0x26])
            
            if (arg3 != 0)
                *arg3 = r8 & 0x7fffffff
            
            if (arg4 != 0)
                if (rdi.d s> 0)
                    int64_t rdx = arg1[0x26]
                    *arg4 = *(rdx + r9 + 4) - *(rdx + sx.q((rdi - 1).d) * 0xc + 4)
                    return zx.q(r8 u>> 0x1f)
                
                *arg4 = *(arg1[0x26] + 4)
            
            return zx.q(r8 u>> 0x1f)
    else if (rax_1 != 0 && *rax_1 == rax_1)
        goto label_142a83e45

return 0
