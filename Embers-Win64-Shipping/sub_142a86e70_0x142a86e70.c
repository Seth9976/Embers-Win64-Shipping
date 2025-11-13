// 函数: sub_142a86e70
// 地址: 0x142a86e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x34))
int32_t rax_1 = *arg2 + 1

if (rax_1 s< rcx.d)
    int64_t r10_1 = sx.q(rax_1)
    int32_t* rdx = *arg1 + r10_1 * 0x18
    
    do
        if (*rdx s>= 0)
            *arg2 = rax_1
            return *arg1 + sx.q(rax_1) * 0x18
        
        rax_1 += 1
        r10_1 += 1
        rdx = &rdx[6]
    while (r10_1 s< rcx)

return 0
