// 函数: sub_141a58380
// 地址: 0x141a58380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_141a4af70(arg1 + 0x10, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x38 + *(arg1 + 0x10)

char* rdx_1 = rax_2 + 0x10

if (rax_2 == 0)
    rdx_1 = nullptr

if (rdx_1 == 0 || *rdx_1 == 0)
    *arg2 = nullptr
    arg2[1].d = 0
    return arg2

void* rax_3 = *(rdx_1 + 0x10)
void* rcx_1 = &rdx_1[8]

if (rax_3 != 0)
    rcx_1 = rax_3

arg2[1].d = *(rdx_1 + 0x18)
*arg2 = rcx_1
return arg2
