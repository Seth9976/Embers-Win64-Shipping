// 函数: sub_141745350
// 地址: 0x141745350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t* r15 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax
int64_t r14 = rbp << 3

if (rax s> *(arg3 + 0x14))
    sub_1405a4d70(arg3 + 8)

*(*(arg3 + 8) + (rsi << 3)) = r15[rbp]
r15[rbp] = 0
int64_t* rcx_2 = *(r14 + *(arg1 + 8))

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int32_t rcx_5 = *(arg1 + 0x10)
int32_t rax_6 = rcx_5 - rbp.d - 1

if (rax_6 s>= 1)
    rax_6 = 1

if (rax_6 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r14, r9_1 + (sx.q(rcx_5 - rax_6) << 3), rax_6 << 3)
    rcx_5 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_5 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
