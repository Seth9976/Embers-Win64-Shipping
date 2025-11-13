// 函数: sub_140e166e0
// 地址: 0x140e166e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int32_t rax = (rsi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = arg1 + 8
int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_1 << 3)) = arg1 + 0x90
int64_t rsi_2 = sx.q(arg2[1].d)
int32_t rax_4 = (rsi_2 + 1).d
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_2 << 3)) = arg1 + 0x118
int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_6 = (rsi_3 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_3 << 3)) = arg1 + 0x1a0
int64_t rsi_4 = sx.q(arg2[1].d)
int32_t rax_8 = (rsi_4 + 1).d
arg2[1].d = rax_8

if (rax_8 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_4 << 3)) = arg1 + 0x228
int64_t rsi_5 = sx.q(arg2[1].d)
int32_t rax_10 = (rsi_5 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_5 << 3)) = arg1 + 0x2b0
int64_t rsi_6 = sx.q(arg2[1].d)
int32_t rax_12 = (rsi_6 + 1).d
arg2[1].d = rax_12

if (rax_12 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_6 << 3)) = arg1 + 0x338
int64_t rsi_7 = sx.q(arg2[1].d)
int32_t rax_14 = (rsi_7 + 1).d
arg2[1].d = rax_14

if (rax_14 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_7 << 3)) = arg1 + 0x3c0
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_16 = (rdi_1 + 1).d
arg2[1].d = rax_16

if (rax_16 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_1 << 3)) = arg1 + 0x448
return result
