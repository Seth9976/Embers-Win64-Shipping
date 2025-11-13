// 函数: sub_142b21dc0
// 地址: 0x142b21dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 - 0x400 u> 0x7ff)
    return zx.q(arg3)

if (arg3 u>= 0x800)
    uint64_t r8_1 = zx.q((arg3 & 0x3ff) + 0x1c0)
    return zx.q(zx.d(*(arg1 + (zx.q((r8_1 + 1).d) << 1))) << 0x10) | zx.q(*(arg1 + (r8_1 << 1)))

if (arg2 == 0 && *arg7 s< arg2)
    *arg7 = *arg6 - 1
    return zx.q(arg2 + 2)

int32_t rdi = *arg7
uint64_t r11_1 = zx.q((arg3 & 0x3ff) + 0x1c0)
int64_t rbp = sx.q(*arg6)

if (rbp.d == rdi)
label_142b21fb9:
    uint32_t rdx_5 = zx.d(*(arg1 + (sx.q(r11_1.d) << 1))) u>> 9
    
    if (rdx_5 != 1)
        uint32_t r8_5 = zx.d(*(arg1 + (sx.q((r11_1 + 1).d) << 1)))
        
        if (rdx_5 != 2)
            return zx.q(zx.d(*(arg1 + (sx.q((r11_1 + 2).d) << 1))) << 0x10) | zx.q(r8_5)
        
        return zx.q(r8_5)
else
    int32_t r9_1 = rbp.d + 1
    uint32_t rcx_2
    
    if (arg4 == 0)
        rcx_2 = zx.d(*(rbp + arg5))
        
        if (rcx_2 u<= 0x7f)
            goto label_142b21f7f
        
        char rbx_1
        
        if (rcx_2 - 0xc2 u<= 3 && r9_1 != rdi)
            rbx_1 = *(sx.q(r9_1) + arg5)
        
        if (rcx_2 - 0xc2 u<= 3 && r9_1 != rdi && rbx_1 - 0x80 u<= 0x3f)
            rcx_2 = ((rcx_2 - 0xc2) << 6) + zx.d(rbx_1)
            r9_1 += 1
            goto label_142b21f7f
        
        if (r9_1 + 1 s< rdi || rdi s< 0)
            char rbx_2
            
            if (rcx_2 == 0xe2 && *(sx.q(r9_1) + arg5) == 0x80)
                rbx_2 = *(sx.q(r9_1 + 1) + arg5)
            
            if (rcx_2 == 0xe2 && *(sx.q(r9_1) + arg5) == 0x80 && rbx_2 - 0x80 u<= 0x3f)
                rcx_2 = zx.d(rbx_2) + 0x100
            label_142b21f75:
                r9_1 += 2
                goto label_142b21f7f
            
            if (rcx_2 == 0xef && *(sx.q(r9_1) + arg5) == 0xbf
                    && *(sx.q(r9_1 + 1) + arg5) + 0x42 u<= 1)
                rcx_2 = -1
                goto label_142b21f75
    else
        rcx_2 = zx.d(*(arg4 + (rbp << 1)))
        
        if (rcx_2 u<= 0x17f)
            goto label_142b21f7f
        
        if (rcx_2 - 0x2000 u<= 0x3f)
            rcx_2 -= 0x1e80
        label_142b21f7f:
            
            if (rcx_2 == 0 && rdi s< 0)
                *arg7 = rbp.d
            label_142b21f83:
                rcx_2 = -1
            
            uint32_t rdx_2 = zx.d(*(arg1 + (r11_1 << 1)))
            int32_t r8_4 = r11_1.d
            int32_t rax_20
            
            do
                r8_4 += rdx_2 u>> 9
                rdx_2 = zx.d(*(arg1 + (sx.q(r8_4) << 1)))
                rax_20 = rdx_2 & 0x1ff
            while (rax_20 s< rcx_2)
            
            if (rax_20 == rcx_2)
                r11_1 = zx.q(r8_4)
                *arg6 = r9_1
            
            goto label_142b21fb9
        
        if (rcx_2 == 0xfffe || rcx_2 == 0xffff)
            goto label_142b21f83

return 1
