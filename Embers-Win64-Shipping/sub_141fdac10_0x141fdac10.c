// 函数: sub_141fdac10
// 地址: 0x141fdac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
int32_t rbp = *(rax + 0xa0)
int64_t rsi = sx.q(*(rax + 0xa0))
int32_t rax_1 = (rsi + 1).d
*(rax + 0xa0) = rax_1

if (rax_1 s> *(rax + 0xa4))
    sub_1407755b0(rax + 0x98)

int64_t rcx_1 = rsi * 0x58
int128_t* rcx_2 = rcx_1 + *(rax + 0x98)

if (rcx_1 != neg.q(*(rax + 0x98)))
    *rcx_2 = *arg2
    rcx_2[1] = arg2[1]
    rcx_2[2] = arg2[2]
    rcx_2[3] = arg2[3]
    rcx_2[4] = arg2[4]
    rcx_2[5].q = arg2[5].q

return zx.q(rbp)
