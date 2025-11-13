// 函数: sub_141744f50
// 地址: 0x141744f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405c4f50(arg3 + 8)

int64_t rax_1 = *(arg3 + 8)
int64_t rcx_2 = rsi * 6
int64_t r10_2 = rbp * 6
*(rax_1 + (rcx_2 << 3)) = *(r14 + (r10_2 << 3))
*(rax_1 + (rcx_2 << 3) + 0x10) = *(r14 + (r10_2 << 3) + 0x10)
*(rax_1 + (rcx_2 << 3) + 0x20) = *(r14 + (r10_2 << 3) + 0x20)
int32_t rcx_3 = *(arg1 + 0x10)
int32_t rdx_3 = rcx_3 - rbp.d - 1

if (rdx_3 s>= 1)
    rdx_3 = 1

if (rdx_3 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + (r10_2 << 3), sx.q(rcx_3 - rdx_3) * 0x30 + r9_1, rdx_3 * 0x30)
    rcx_3 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_3 - 1
return sub_1407c4120(arg1 + 8) __tailcall
