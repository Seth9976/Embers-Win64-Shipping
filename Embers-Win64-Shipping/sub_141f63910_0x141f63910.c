// 函数: sub_141f63910
// 地址: 0x141f63910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x410))
    r8 = sx.q(arg2)
else
    r8 = sx.q(arg2)
    int64_t rax_2 = *(*(arg1 + 0x408) + (r8 << 3))
    
    if (rax_2 != 0)
        return rax_2

void* rax_3 = *(arg1 + 0x430)

if (rax_3 != 0 && arg2 s>= 0 && arg2 s< *(rax_3 + 0xc0))
    int64_t rax_5 = *(*(rax_3 + 0xb8) + r8 * 0x28)
    
    if (rax_5 != 0)
        return rax_5

return 0
