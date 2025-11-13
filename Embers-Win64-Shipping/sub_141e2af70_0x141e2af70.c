// 函数: sub_141e2af70
// 地址: 0x141e2af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x160))
int32_t r8 = 0

if (rax.d s> 0)
    int64_t r10_1 = *(arg1 + 0x158)
    int64_t r9_1 = rax
    rax = r10_1
    int64_t rcx = 0
    
    do
        if (*rax == arg2)
            int64_t rax_1
            rax_1.b = *(r10_1 + sx.q(r8) * 0x18 + 0x10) s> 0
            return rax_1
        
        r8 += 1
        rcx += 1
        rax += 0x18
    while (rcx s< r9_1)

rax.b = 0
return rax
