// 函数: sub_140e16180
// 地址: 0x140e16180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*(arg1 + 8) + 8))(arg1 + 8)
int64_t rsi = sx.q(arg2[1].d)
int32_t rax_1 = (rsi + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = arg1 + 0x280
int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_3 = (rsi_1 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_1 << 3)) = arg1 + 0x308
int64_t rsi_2 = sx.q(arg2[1].d)
int32_t rax_5 = (rsi_2 + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_2 << 3)) = arg1 + 0x390
int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_7 = (rsi_3 + 1).d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_3 << 3)) = arg1 + 0x418
int64_t rsi_4 = sx.q(arg2[1].d)
int32_t rax_9 = (rsi_4 + 1).d
arg2[1].d = rax_9

if (rax_9 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_4 << 3)) = arg1 + 0x4a0
int64_t rsi_5 = sx.q(arg2[1].d)
int32_t rax_11 = (rsi_5 + 1).d
arg2[1].d = rax_11

if (rax_11 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_5 << 3)) = arg1 + 0x528
int64_t rsi_6 = sx.q(arg2[1].d)
int32_t rax_13 = (rsi_6 + 1).d
arg2[1].d = rax_13

if (rax_13 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi_6 << 3)) = arg1 + 0x5b0
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_15 = (rdi_1 + 1).d
arg2[1].d = rax_15

if (rax_15 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_1 << 3)) = arg1 + 0x638
return result
