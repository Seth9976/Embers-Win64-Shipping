// 函数: sub_142b7f3c0
// 地址: 0x142b7f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int64_t rdi = 0
int32_t r11 = 0
int64_t r10 = 0
int32_t r14 = *(arg1 + 0x50)
int64_t rbp = sx.q(arg3)

if (r14 - arg3 s>= 0)
    int64_t rax_4 = neg.q(arg2)
    int64_t arg_20 = rax_4
    
    while (true)
        int64_t rcx
        
        if (r10 s< 0 || r11 s>= r14)
            rcx = 0
        else
            rcx = *(*(arg1 + 0x60) + (r10 << 3))
            rax_4 = arg_20
        
        if (*arg2 == rcx)
            if (r10 s> 0x7ffff)
                goto label_142b7f4db
            
            int64_t rdx = 1
            int32_t r9 = r11 + 1
            void* r8 = &arg2[1]
            
            while (true)
                if (rdx == rbp)
                    return zx.q((r11 << 5 | arg3) << 8) | 0xc6
                
                int64_t rax_7
                
                if (rdx + r10 s< 0 || r9 s>= r14)
                    rax_7 = 0
                else
                    rax_7 = *(*(arg1 + 0x60) + rax_4 + (r10 << 3) + r8)
                
                if (rax_7 != *r8)
                    break
                
                r9 += 1
                rdx += 1
                r8 += 8
        
        r11 += 1
        r10 += 1
        
        if (r10 s> sx.q(r14 - arg3))
            break
        
        rax_4 = arg_20

if (r14 s> 0x7ffff)
label_142b7f4db:
    *arg4 = 0xf
    return 0

if (rbp s> 0)
    do
        int32_t rdx_1 = *(arg1 + 0x50)
        int64_t rsi_2 = arg2[rdi]
        char rax_9
        
        if (rdx_1 + 1 s< 0 || *(arg1 + 0x54) s< rdx_1 + 1)
            rax_9 = sub_142aeb240(arg1 + 0x48, rdx_1 + 1, arg4)
        
        if ((rdx_1 + 1 s>= 0 && *(arg1 + 0x54) s>= rdx_1 + 1) || rax_9 != 0)
            *(*(arg1 + 0x60) + (sx.q(*(arg1 + 0x50)) << 3)) = rsi_2
            *(arg1 + 0x50) += 1
        
        rdi += 1
    while (rdi s< rbp)

return zx.q((r14 << 5 | arg3) << 8) | 0xc6
