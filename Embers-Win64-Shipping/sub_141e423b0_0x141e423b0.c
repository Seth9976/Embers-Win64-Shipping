// 函数: sub_141e423b0
// 地址: 0x141e423b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t rax = sx.q(*(arg1 + 0x18))

if (rax.d s> 0)
    int64_t rdx_1 = 0
    int32_t* rax_2 = *(arg1 + 0x10) + 8
    
    do
        if ((*rax_2 * 2) s>> 1 == *(*(arg3 + 0x60) + (sx.q(arg2) << 2)))
            return zx.q(r8)
        
        r8 += 1
        rdx_1 += 1
        rax_2 = &rax_2[5]
    while (rdx_1 s< rax)

return 0xffffffff
