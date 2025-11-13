// 函数: sub_141744890
// 地址: 0x141744890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_140638870(arg3 + 8)

int64_t r10 = rbp << 3
*(*(arg3 + 8) + (rsi << 3)) = *(r10 + r14)
int32_t rax_2 = *(arg1 + 0x10)
int32_t rcx_4 = rax_2 - rbp.d - 1

if (rcx_4 s>= 1)
    rcx_4 = 1

if (rcx_4 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r10, r9_1 + (sx.q(rax_2 - rcx_4) << 3), rcx_4 << 3)
    rax_2 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_2 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
