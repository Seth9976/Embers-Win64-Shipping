// 函数: sub_141744720
// 地址: 0x141744720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg3 + 0x10))
int64_t r14 = *(arg1 + 8)
int64_t rbp = sx.q(arg2)
int32_t rax = (rsi + 1).d
*(arg3 + 0x10) = rax

if (rax s> *(arg3 + 0x14))
    sub_1406105e0(arg3 + 8)

*(*(arg3 + 8) + (rsi << 2)) = *(r14 + (rbp << 2))
int32_t rax_2 = *(arg1 + 0x10)
int32_t rcx_4 = rax_2 - rbp.d - 1

if (rcx_4 s>= 1)
    rcx_4 = 1

if (rcx_4 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + (rbp << 2), r9_1 + (sx.q(rax_2 - rcx_4) << 2), rcx_4 << 2)
    rax_2 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_2 - 1
return sub_1405dac90(arg1 + 8) __tailcall
