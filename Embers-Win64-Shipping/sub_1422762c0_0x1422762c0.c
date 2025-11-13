// 函数: sub_1422762c0
// 地址: 0x1422762c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if (arg2 != 0)
    rax = sx.q(*(arg1 + 0x2628))
    int32_t r9_1 = 0
    
    if (rax.d s> 0)
        int64_t r8_1 = rax
        int64_t rcx = *(arg1 + 0x2620)
        rax = 0
        
        do
            if (*(rcx + (rax << 3)) == arg2)
                int32_t rdx = *(arg1 + 0x2628)
                int32_t rax_2 = rdx - r9_1
                
                if (rax_2 != 1)
                    memmove(rcx + (sx.q(r9_1) << 3), rcx + (sx.q(r9_1 + 1) << 3), (rax_2 - 1) << 3)
                    rdx = *(arg1 + 0x2628)
                
                *(arg1 + 0x2628) = rdx - 1
                sub_1405c53d0(arg1 + 0x2620)
                int64_t rax_7
                rax_7.b = 1
                return rax_7
            
            r9_1 += 1
            rax += 1
        while (rax s< r8_1)

rax.b = 0
return rax
