// 函数: sub_140a000c0
// 地址: 0x140a000c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi << 2)) = arg2
int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax_2 = (rdi_1 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi_1 << 2)) = arg3
int64_t rdi_2 = sx.q(arg1[1].d)
int32_t rax_4 = (rdi_2 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi_2 << 2)) = arg5
int64_t rdi_3 = sx.q(arg1[1].d)
int32_t rax_6 = (rdi_3 + 1).d
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi_3 << 2)) = arg3
int64_t rdi_4 = sx.q(arg1[1].d)
int32_t rax_8 = (rdi_4 + 1).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi_4 << 2)) = arg4
int64_t rdi_5 = sx.q(arg1[1].d)
int32_t rax_10 = (rdi_5 + 1).d
arg1[1].d = rax_10

if (rax_10 s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

int64_t result = *arg1
*(result + (rdi_5 << 2)) = arg5
return result
