// 函数: sub_142bcde30
// 地址: 0x142bcde30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x18)
uint32_t r10 = 0
uint64_t rax_1 = zx.q(*arg2 + 1)

if (rax_1.d u< r9)
    rax_1 = zx.q(r9)

while (rax_1.d u< *(arg1 + 0x1c) + r9)
    r10 = zx.d(*(*(arg1 + 0x20) + (rax_1 << 1)))
    
    if (r10 != 0)
        *arg2 = rax_1.d
        return zx.q(r10)
    
    rax_1 = zx.q(rax_1.d + 1)

*arg2 = 0
return zx.q(r10)
