// 函数: sub_141744ad0
// 地址: 0x141744ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405c4fe0(arg3 + 8)

int64_t rax_1 = *(arg3 + 8)
int64_t r9_1 = rbp << 6
int64_t rcx_2 = rsi << 6
*(rcx_2 + rax_1) = *(r9_1 + r14)
*(rcx_2 + rax_1 + 0x10) = *(r9_1 + r14 + 0x10)
*(rcx_2 + rax_1 + 0x20) = *(r9_1 + r14 + 0x20)
*(rcx_2 + rax_1 + 0x30) = *(r9_1 + r14 + 0x30)
int32_t rcx_3 = *(arg1 + 0x10)
int32_t rdx_3 = rcx_3 - rbp.d - 1

if (rdx_3 s>= 1)
    rdx_3 = 1

if (rdx_3 != 0)
    int64_t rax_2 = *(arg1 + 8)
    memcpy(rax_2 + r9_1, (sx.q(rcx_3 - rdx_3) << 6) + rax_2, rdx_3 << 6)
    rcx_3 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_3 - 1
return sub_1407c3fe0(arg1 + 8) __tailcall
