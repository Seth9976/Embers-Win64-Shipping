// 函数: sub_1425cac80
// 地址: 0x1425cac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*arg1 = 1
arg1[6] = 2
arg1[0xc] = 3
int64_t rbp = sx.q(arg1[4])
int32_t rax = (rbp + 1).d
arg1[4] = rax

if (rax s> arg1[5])
    sub_1405daba0(&arg1[2])

*(rbp + *(arg1 + 8)) = 0
int64_t rbp_1 = sx.q(arg1[4])
int32_t rax_2 = (rbp_1 + 1).d
arg1[4] = rax_2

if (rax_2 s> arg1[5])
    sub_1405daba0(&arg1[2])

*(rbp_1 + *(arg1 + 8)) = 0x7f
int64_t rbp_2 = sx.q(arg1[4])
int32_t rax_4 = (rbp_2 + 1).d
arg1[4] = rax_4

if (rax_4 s> arg1[5])
    sub_1405daba0(&arg1[2])

*(rbp_2 + *(arg1 + 8)) = 0xff
int64_t rdi = sx.q(arg1[0xa])
int32_t rax_6 = (rdi + 1).d
arg1[0xa] = rax_6

if (rax_6 s> arg1[0xb])
    sub_1405daba0(&arg1[8])

*(rdi + *(arg1 + 0x20)) = 0x80
int64_t rdi_1 = sx.q(arg1[0xa])
int32_t rax_8 = (rdi_1 + 1).d
arg1[0xa] = rax_8

if (rax_8 s> arg1[0xb])
    sub_1405daba0(&arg1[8])

*(rdi_1 + *(arg1 + 0x20)) = 0
int64_t rdi_2 = sx.q(arg1[0xa])
int32_t rax_10 = (rdi_2 + 1).d
arg1[0xa] = rax_10

if (rax_10 s> arg1[0xb])
    sub_1405daba0(&arg1[8])

*(rdi_2 + *(arg1 + 0x20)) = 0x7f
return arg1
