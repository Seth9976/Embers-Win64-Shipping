// 函数: sub_140b09ee0
// 地址: 0x140b09ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
__builtin_memset(arg1 + 0x80, 0, 0x14)

if (arg2 == 0)
    return arg1

int32_t r14 = 0

if (arg3 s> 0 && *(arg2 + (rsi << 1) - 2) == 0)
    r14 = 1
    rsi = zx.q(rsi.d - 1)

int32_t arg_8 = 0
sub_14060af80(&arg_8, (rsi << 2).d, arg2, rsi.d)
int32_t rax = arg_8
*(arg1 + 0x90) = rax
int32_t rbx = rax + r14
sub_140ac0af0(arg1, 0, rbx, 1)
void* rax_1 = *(arg1 + 0x80)
void* rcx_2 = arg1

if (rax_1 != 0)
    rcx_2 = rax_1

*(arg1 + 0x88) = rcx_2
arg_8.q = rcx_2
sub_14060ac90(&arg_8, rbx, arg2, r14 + rsi.d)
return arg1
