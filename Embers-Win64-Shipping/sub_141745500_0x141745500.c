// 函数: sub_141745500
// 地址: 0x141745500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1405daba0(arg3 + 8)

*(rsi + *(arg3 + 8)) = *(rbp + r14)
int32_t rcx_2 = *(arg1 + 0x10)
uint32_t count = rcx_2 - rbp.d - 1

if (count s>= 1)
    count = 1

if (count != 0)
    int64_t rax_2 = *(arg1 + 8)
    memcpy(rax_2 + rbp, sx.q(rcx_2 - count) + rax_2, count)
    rcx_2 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_2 - 1
return sub_1405dac10(arg1 + 8) __tailcall
