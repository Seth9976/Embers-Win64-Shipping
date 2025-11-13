// 函数: sub_141e739c0
// 地址: 0x141e739c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax = (rdi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1405c4e40(arg1 + 0x10)

int64_t rdx_2 = rsi << 5
__builtin_memset((rdi << 5) + *(arg1 + 0x10), 0, 0x1c)
*(rdx_2 + *(arg1 + 0x10) + 0x10) = arg2
*(*(arg1 + 0x10) + rdx_2 + 0x14) = arg3
return zx.q(rsi.d)
