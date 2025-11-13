// 函数: sub_14217eb70
// 地址: 0x14217eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg2 + 0x80))
char arg_9 = *arg3
void* r14 = arg1
int32_t arg_a = 0x500004
int32_t rax_1 = (rsi + 1).d
int16_t arg_e = 0
*(arg2 + 0x80) = rax_1

if (rax_1 s> *(arg2 + 0x84))
    arg1 = arg2
    sub_14088f7f0(arg1)

*(arg2 + (rsi << 3)) = 0.q
*arg3 += 0x10
int64_t rsi_1 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x500103
int32_t rax_4 = (rsi_1 + 1).d
arg_e = 0
*(arg2 + 0x80) = rax_4

if (rax_4 s> *(arg2 + 0x84))
    arg1 = arg2
    sub_14088f7f0(arg1)

*(arg2 + (rsi_1 << 3)) = 0.q
*arg3 += 0x10
int64_t rsi_2 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x500204
int32_t rax_7 = (rsi_2 + 1).d
arg_e = 0
*(arg2 + 0x80) = rax_7

if (rax_7 s> *(arg2 + 0x84))
    arg1 = arg2
    sub_14088f7f0(arg1)

*(arg2 + (rsi_2 << 3)) = 0.q
*arg3 += 0x10
int64_t rsi_3 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x500404
int32_t rax_10 = (rsi_3 + 1).d
arg_e = 0
*(arg2 + 0x80) = rax_10

if (rax_10 s> *(arg2 + 0x84))
    arg1 = arg2
    sub_14088f7f0(arg1)

*(arg2 + (rsi_3 << 3)) = 0.q
*arg3 += 0x10
int64_t rsi_4 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x500304
int32_t rax_13 = (rsi_4 + 1).d
arg_e = 0
*(arg2 + 0x80) = rax_13

if (rax_13 s> *(arg2 + 0x84))
    arg1 = arg2
    sub_14088f7f0(arg1)

*(arg2 + (rsi_4 << 3)) = 0.q
*arg3 += 0x10
int64_t rdi_1 = sx.q(*(arg2 + 0x80))
char arg_8
arg_8.d = 0x5040001
arg1.w = sbb.w(arg1.w, arg1.w, *(r14 + 0x18) != 0)
arg_e = 0
arg1.w &= 0x10
int32_t rax_16 = (rdi_1 + 1).d
arg_a:2.w = arg1.w
*(arg2 + 0x80) = rax_16

if (rax_16 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

*(arg2 + (rdi_1 << 3)) = 0x5040001
return 0x5040001
