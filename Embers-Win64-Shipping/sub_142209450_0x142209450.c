// 函数: sub_142209450
// 地址: 0x142209450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg2 + 0x80))
int16_t r14 = 8

if (*(arg1 + 0x18) == 0)
    r14 = 0x48

char arg_9 = *arg3
int32_t rax_1 = (r15 + 1).d
int16_t arg_a = 0x402
int16_t arg_c = r14
uint16_t arg_e = 0
*(arg2 + 0x80) = rax_1

if (rax_1 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

*(arg2 + (r15 << 3)) = false.q
*arg3 += 8
char rax_3 = *(arg1 + 0x18)
char rcx_1 = (*arg3).b
bool cond:1 = rax_3 != 0

if (rax_3 != 0)
    *arg3 = 0
    rcx_1 = 0
    rax_3 = *(arg1 + 0x18)
    r14 = 0x40
    cond:1 = rax_3 != 0

int64_t r15_1 = sx.q(*(arg2 + 0x80))
arg_e = zx.w(rax_3)
arg_9 = rcx_1
int32_t rax_5 = (r15_1 + 1).d
arg_a = 4
arg_c = r14
*(arg2 + 0x80) = rax_5

if (rax_5 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

*(arg2 + (r15_1 << 3)) = cond:1.q
*arg3 += 0x10
uint16_t rcx_3 = zx.w(*(arg1 + 0x18))
int64_t r15_2 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x104
arg_c = r14
int32_t rax_8 = (r15_2 + 1).d
arg_e = rcx_3
*(arg2 + 0x80) = rax_8

if (rax_8 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

*(arg2 + (r15_2 << 3)) = (rcx_3.b != 0).q
*arg3 += 0x10
uint16_t rcx_5 = zx.w(*(arg1 + 0x18))
int64_t r15_3 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x204
arg_c = r14
int32_t rax_11 = (r15_3 + 1).d
arg_e = rcx_5
*(arg2 + 0x80) = rax_11

if (rax_11 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

*(arg2 + (r15_3 << 3)) = (rcx_5.b != 0).q
*arg3 += 0x10
uint64_t rcx_7 = zx.q(*(arg1 + 0x18))
bool cond:4 = rcx_7.b != 0
arg_c = r14
int64_t r14_1 = sx.q(*(arg2 + 0x80))
arg_9 = (*arg3).b
arg_a = 0x304
arg_e = rcx_7.w
int32_t rax_14 = (r14_1 + 1).d
*(arg2 + 0x80) = rax_14

if (rax_14 s> *(arg2 + 0x84))
    rcx_7 = arg2
    sub_14088f7f0(rcx_7)

*(arg2 + (r14_1 << 3)) = cond:4.q
*arg3 = 0
uint16_t rdx_5 = zx.w(*(arg1 + 0x18))
arg_9.w = 0x400
arg_a:1.b = 5
int64_t rax_15
rax_15.b = rdx_5.b != 0
arg_e = rdx_5
rax_15.b += 1
int64_t rsi_1 = sx.q(*(arg2 + 0x80))
rcx_7.w = sbb.w(rcx_7.w, rcx_7.w, *(arg1 + 0x19) != 0)
rcx_7.w &= 0x10
int32_t rax_17 = (rsi_1 + 1).d
arg_c = rcx_7.w
*(arg2 + 0x80) = rax_17

if (rax_17 s> *(arg2 + 0x84))
    sub_14088f7f0(arg2)

int64_t result = rax_15.b.q
*(arg2 + (rsi_1 << 3)) = result
*arg3 += 0x10
return result
