// 函数: sub_142b1b140
// 地址: 0x142b1b140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = sub_142af42a0(arg1, arg2)

if (rax != 1)
    int16_t* rcx_2
    
    if (rax u>= *(arg1 + 0x10))
        int16_t rax_10 = *(arg1 + 0x1e)
        
        if (rax u>= rax_10 && 0xfc00 u> rax)
            rcx_2 = *(arg1 + 0x28) + (sx.q(zx.d(rax) - zx.d(rax_10)) s>> 1 << 1)
        label_142b1b226:
            
            if (arg3 u<= 0x10ffff)
                return zx.q(sub_142b1a210(rcx_2, arg3) s>> 1)
    else if (rax != 2)
        int16_t rdx = *(arg1 + 0xe)
        
        if (rax != rdx)
            rcx_2 = *(arg1 + 0x30) + (zx.q(rax) u>> 1 << 1)
            
            if (rax u> rdx)
                rcx_2 = &rcx_2[(zx.q(*rcx_2) & 0x1f) + 1]
            
            goto label_142b1b226
        
        if (arg3 - 0x11a8 u<= 0x1a)
            return zx.q(arg2 + arg3 - 0x11a7)
    else if (arg3 - 0x1161 u<= 0x14)
        return zx.q((arg2 * 0x15 + arg3 - 0x1161) * 0x1c - 0x266000)

return 0xffffffff
