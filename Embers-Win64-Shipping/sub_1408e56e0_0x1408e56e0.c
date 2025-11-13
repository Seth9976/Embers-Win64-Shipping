// 函数: sub_1408e56e0
// 地址: 0x1408e56e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
arg2[1].d &= 0xfffffffb
arg2[1].d |= zx.d(rax) << 2
char rax_3 = sub_1422a69b0(arg1, arg3)
int32_t rax_6 = 0
int32_t rcx_4 = (arg2[1].d & 0xfffffff7) | zx.d(rax_3) << 3 | 2
arg2[1].d = rcx_4
int32_t rdx_6 = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rcx_4) & 0x20) ^ rcx_4
arg2[1].d = rdx_6

if (*(arg1 + 0x3f) != 1)
    rax_6 = 0x1000

arg2[1].d = rax_6 | (rdx_6 & 0xffffefff)
sub_142131b60(arg1 + 0x150, arg2)
int32_t rax_9

if (*(arg1 + 0x32) - 1 u<= 1 && (*(arg2 + 2) & 1) != 0)
    rax_9 = arg2[1].d

if (*(arg1 + 0x32) - 1 u> 1 || (*(arg2 + 2) & 1) == 0 || rax_9.b s>= 0)
    rax_9 = arg2[1].d
else
    rbp = 0x10

arg2[1].d = (rax_9 & 0xffffffef) | rbp
return arg2
