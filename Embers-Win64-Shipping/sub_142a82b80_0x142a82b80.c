// 函数: sub_142a82b80
// 地址: 0x142a82b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0xc8))
int32_t rax = 0

if (r10.d s> 0)
    int32_t* r8_1 = *(arg1 + 0xd0)
    int64_t r9_1 = 0
    
    while (arg2 s>= *r8_1)
        rax += 1
        r9_1 += 1
        r8_1 = &r8_1[2]
        
        if (r9_1 s>= r10)
            break

if (rax s>= r10.d)
    rax = (r10 - 1).d

return zx.q(*(*(arg1 + 0xd0) + (sx.q(rax) << 3) + 4))
