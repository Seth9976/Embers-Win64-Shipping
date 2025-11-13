// 函数: sub_141f6c460
// 地址: 0x141f6c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
int64_t r14 = sx.q(arg3)
arg1[1].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0xc))
    sub_140ac0cd0(arg1)

int64_t rbx = r14 * 0x2c
int64_t rdx_2 = *arg1 + rbx
memmove(rdx_2 + 0x2c, rdx_2, (rsi - r14.d) * 0x2c)
uint128_t* rcx_2 = *arg1 + rbx
*rcx_2 = *arg2
rcx_2[1] = arg2[1]
rcx_2[2].q = arg2[2].q
*(rcx_2 + 0x28) = *(arg2 + 0x28)
return zx.q(r14.d)
