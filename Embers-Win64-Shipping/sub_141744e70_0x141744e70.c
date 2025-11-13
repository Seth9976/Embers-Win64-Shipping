// 函数: sub_141744e70
// 地址: 0x141744e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r15 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405c5060(arg3 + 8)

int64_t r14_2 = rbp * 0x50
sub_14077e140(rsi * 0x50 + *(arg3 + 8), r14_2 + r15)
sub_1405ae080(*(arg1 + 8) + r14_2)
int32_t rcx_6 = *(arg1 + 0x10)
int32_t rdx_4 = rcx_6 - rbp.d - 1

if (rdx_4 s>= 1)
    rdx_4 = 1

if (rdx_4 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r14_2, sx.q(rcx_6 - rdx_4) * 0x50 + r9_1, rdx_4 * 0x50)
    rcx_6 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_6 - 1
return sub_140976b40(arg1 + 8) __tailcall
