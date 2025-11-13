// 函数: sub_141c45f80
// 地址: 0x141c45f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
arg1[2].d = arg2 + 1
*(arg1 + 0x14) = 0
arg1[3].d = 0
int32_t rax_1 = *(arg1 + 0xc)
arg1[1].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg1, 0)
    rdi = arg1[1].d

int64_t rsi = sx.q(arg1[2].d)
int32_t rax_2 = rdi + rsi.d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1406105e0(arg1)

return memset(*arg1 + (sx.q(rdi) << 2), 0, rsi << 2) __tailcall
