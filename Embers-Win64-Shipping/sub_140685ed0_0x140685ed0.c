// 函数: sub_140685ed0
// 地址: 0x140685ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 0x80, 0, 0x14)

if (arg2 == 0)
    return arg1

int64_t rbx = -1

do
    rbx += 1
while (*(arg2 + (rbx << 1)) != 0)

int32_t arg_8 = 0
sub_14060af80(&arg_8, (rbx << 2).d, arg2, rbx.d)
int32_t rax = arg_8
*(arg1 + 0x90) = rax

if (rax + 1 u> 0x80 && rax != 0xffffffff)
    *(arg1 + 0x80) = sub_140a84c80(0, sx.q(rax + 1), 0)

void* rax_2 = *(arg1 + 0x80)
void* rcx_1 = arg1

if (rax_2 != 0)
    rcx_1 = rax_2

*(arg1 + 0x88) = rcx_1
arg_8.q = rcx_1
sub_14060ac90(&arg_8, rax + 1, arg2, (rbx + 1).d)
return arg1
