// 函数: sub_142b7ce30
// 地址: 0x142b7ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x30))
int32_t r10 = 0
int64_t r9 = 0

if (rsi.d s> 0)
    do
        int32_t rcx
        
        if (r9 s< 0 || rsi.d s<= 0 || rsi.d - r10 s<= 0)
            rcx = 0
        else
            rcx = *(*(arg1 + 0x40) + (r9 << 2))
        
        if (arg2 == rcx)
            return zx.q(r10)
        
        r10 += 1
        r9 += 1
    while (r9 s< rsi)

int32_t rdx = *(arg1 + 0x30)
char rax_4

if (rdx + 1 s< 0 || *(arg1 + 0x34) s< rdx + 1)
    rax_4 = sub_142ae7df0(arg1 + 0x28, rdx + 1, arg3)

if ((rdx + 1 s>= 0 && *(arg1 + 0x34) s>= rdx + 1) || rax_4 != 0)
    *(*(arg1 + 0x40) + (sx.q(*(arg1 + 0x30)) << 2)) = arg2
    *(arg1 + 0x30) += 1

return zx.q(rsi.d)
