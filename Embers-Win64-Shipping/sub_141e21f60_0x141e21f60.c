// 函数: sub_141e21f60
// 地址: 0x141e21f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_6 = sx.q(*(arg1 + 0x160))
int32_t r8 = 0

if (rax_6.d s> 0)
    int64_t* r10_1 = *(arg1 + 0x158)
    int64_t* rax = r10_1
    int64_t rcx = 0
    
    do
        if (*rax == arg2)
            return &r10_1[sx.q(r8) * 3 + 1]
        
        r8 += 1
        rcx += 1
        rax = &rax[3]
    while (rcx s< rax_6)

return 0
