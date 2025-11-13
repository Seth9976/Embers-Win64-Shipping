// 函数: sub_141745420
// 地址: 0x141745420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_14083a7e0(arg3 + 8)

int64_t rax_1 = *(arg3 + 8)
int64_t r10 = rbp * 0xc
int64_t rcx_3 = rsi * 3
*(rax_1 + (rcx_3 << 2)) = *(r10 + r14)
*(rax_1 + (rcx_3 << 2) + 8) = *(r10 + r14 + 8)
int32_t rcx_4 = *(arg1 + 0x10)
int32_t rdx_4 = rcx_4 - rbp.d - 1

if (rdx_4 s>= 1)
    rdx_4 = 1

if (rdx_4 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r10, r9_1 + sx.q(rcx_4 - rdx_4) * 0xc, rdx_4 * 0xc)
    rcx_4 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_4 - 1
return sub_140775970(arg1 + 8) __tailcall
