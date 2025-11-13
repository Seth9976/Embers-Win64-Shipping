// 函数: sub_142b7d290
// 地址: 0x142b7d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x50))
int32_t r10 = 0
int64_t r9 = 0

if (rsi.d s> 0)
    do
        int64_t rcx
        
        if (r9 s< 0 || r10 s>= *(arg1 + 0x50))
            rcx = 0
        else
            rcx = *(*(arg1 + 0x60) + (r9 << 3))
        
        if (arg2 == rcx)
            return zx.q(r10)
        
        r10 += 1
        r9 += 1
    while (r9 s< rsi)

int32_t rdx = *(arg1 + 0x50)
char rax_2

if (rdx + 1 s< 0 || *(arg1 + 0x54) s< rdx + 1)
    rax_2 = sub_142aeb240(arg1 + 0x48, rdx + 1, arg3)

if ((rdx + 1 s>= 0 && *(arg1 + 0x54) s>= rdx + 1) || rax_2 != 0)
    *(*(arg1 + 0x60) + (sx.q(*(arg1 + 0x50)) << 3)) = arg2
    *(arg1 + 0x50) += 1

return zx.q(rsi.d)
