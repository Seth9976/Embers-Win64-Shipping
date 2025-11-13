// 函数: sub_142b7f200
// 地址: 0x142b7f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int64_t rsi = 0
int32_t r11 = 0
int64_t i = 0
int32_t r14 = *(arg1 + 0x30)
int64_t rbp = sx.q(arg3)

if (r14 - arg3 s>= 0)
    int64_t rdi_2 = neg.q(arg2)
    int64_t arg_20 = rdi_2
    
    do
        int32_t rcx
        
        if (i s< 0 || r14 s<= 0 || r14 - r11 s<= 0)
            rcx = 0
        else
            rcx = *(*(arg1 + 0x40) + (i << 2))
        
        if (*arg2 == rcx)
            if (i s> 0x7ffff)
                goto label_142b7f30d
            
            int64_t rdx = 1
            void* r8 = &arg2[1]
            int32_t r9 = 1
            
            while (true)
                if (rdx == rbp)
                    return zx.q((r11 << 5 | arg3) << 8) | 0xc5
                
                int32_t rax_10
                
                if (rdx + i s< 0 || r14 s<= 0 || r14 - r9 - r11 s<= 0)
                    rax_10 = 0
                else
                    rax_10 = *(*(arg1 + 0x40) + rdi_2 + (i << 2) + r8)
                
                if (rax_10 != *r8)
                    break
                
                r9 += 1
                rdx += 1
                r8 += 4
            
            rdi_2 = arg_20
        
        r11 += 1
        i += 1
    while (i s<= sx.q(r14 - arg3))

if (r14 s> 0x7ffff)
label_142b7f30d:
    *arg4 = 0xf
    return 0

if (rbp s> 0)
    do
        int32_t rdx_1 = *(arg1 + 0x30)
        int32_t rdi_4 = arg2[rsi]
        char rax_12
        
        if (rdx_1 + 1 s< 0 || *(arg1 + 0x34) s< rdx_1 + 1)
            rax_12 = sub_142ae7df0(arg1 + 0x28, rdx_1 + 1, arg4)
        
        if ((rdx_1 + 1 s>= 0 && *(arg1 + 0x34) s>= rdx_1 + 1) || rax_12 != 0)
            *(*(arg1 + 0x40) + (sx.q(*(arg1 + 0x30)) << 2)) = rdi_4
            *(arg1 + 0x30) += 1
        
        rsi += 1
    while (rsi s< rbp)

return zx.q((r14 << 5 | arg3) << 8) | 0xc5
