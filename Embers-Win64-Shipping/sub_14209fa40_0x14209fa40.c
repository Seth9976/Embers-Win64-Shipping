// 函数: sub_14209fa40
// 地址: 0x14209fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(*(arg1 + 0x240))
int32_t r8 = 0

if (rax_1.d s> 0)
    int64_t* r10_1 = *(arg1 + 0x238)
    int64_t* rax = r10_1
    int64_t rcx = 0
    
    while (*rax != arg2)
        r8 += 1
        rcx += 1
        rax = &rax[1]
        
        if (rcx s>= rax_1)
            return rax
    
    rax_1 = sx.q(r8)
    r10_1[rax_1] = 0

return rax_1
