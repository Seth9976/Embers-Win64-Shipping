// 函数: sub_1417cbb10
// 地址: 0x1417cbb10
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
int64_t* rdi_1 = *(r14 + *(arg1 + 8))

if (rdi_1 != 0)
    sub_1417a2540(rdi_1)
    j_sub_140a74f90(rdi_1)

int32_t rcx_6 = *(arg1 + 0x10)
int32_t rax_5 = rcx_6 - rbp.d - 1

if (rax_5 s>= 1)
    rax_5 = 1

if (rax_5 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r14, r9_1 + (sx.q(rcx_6 - rax_5) << 3), rax_5 << 3)
    rcx_6 = *(arg1 + 0x10)

*(arg1 + 0x10) = rcx_6 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
