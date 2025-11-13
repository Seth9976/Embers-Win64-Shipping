// 函数: sub_1417b12a0
// 地址: 0x1417b12a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405c4ec0(arg3 + 8)

int64_t rax_1 = *(arg3 + 8)
int64_t r10 = rbp * 0x28
int64_t rcx_3 = rsi * 5
*(rax_1 + (rcx_3 << 3)) = *(r10 + r14)
*(rax_1 + (rcx_3 << 3) + 0x10) = *(r10 + r14 + 0x10)
*(rax_1 + (rcx_3 << 3) + 0x20) = *(r10 + r14 + 0x20)
int32_t rcx_4 = *(arg1 + 0x10)
int32_t rdx_3 = rcx_4 - rbp.d - 1

if (rdx_3 s>= 1)
    rdx_3 = 1

if (rdx_3 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r10, r9_1 + sx.q(rcx_4 - rdx_3) * 0x28, rdx_3 * 0x28)
    rcx_4 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_4 - 1
return sub_1409da680(arg1 + 8) __tailcall
