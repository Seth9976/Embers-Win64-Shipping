// 函数: sub_1417b1390
// 地址: 0x1417b1390
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
j_sub_140a74f90(*(r14 + *(arg1 + 8)))
int32_t rax_3 = *(arg1 + 0x10)
int32_t rcx_5 = rax_3 - rbp.d - 1

if (rcx_5 s>= 1)
    rcx_5 = 1

if (rcx_5 != 0)
    int64_t r9_1 = *(arg1 + 8)
    memcpy(r9_1 + r14, r9_1 + (sx.q(rax_3 - rcx_5) << 3), rcx_5 << 3)
    rax_3 = *(arg1 + 0x10)

*(arg1 + 0x10) = rax_3 - 1
return sub_1405c53d0(arg1 + 8) __tailcall
