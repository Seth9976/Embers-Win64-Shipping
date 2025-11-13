// 函数: sub_142a9f8f0
// 地址: 0x142a9f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg1 + 0x10)

if (arg2 s< *r10)
    return 0

int32_t r8 = 0
int32_t rdx_1 = *(arg1 + 0x1c) - 1

if (rdx_1 s> 0 && arg2 s< r10[sx.q(rdx_1 - 1)])
    int32_t rax_4 = rdx_1 s>> 1
    
    if (rax_4 != 0)
        do
            if (arg2 s>= r10[sx.q(rax_4)])
                r8 = rax_4
            else
                rdx_1 = rax_4
            
            rax_4 = (rdx_1 + r8) s>> 1
        while (rax_4 != r8)

return zx.q(rdx_1)
