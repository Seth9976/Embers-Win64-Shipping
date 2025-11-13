// 函数: sub_1418035b0
// 地址: 0x1418035b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14062d6e0(arg1 + 0x90, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x90) + rax * 0x28

int64_t* rdx_1 = rcx_1 + 0x10

if (rcx_1 == 0)
    rdx_1 = nullptr

if (rdx_1 != 0)
    sub_140596d10(arg2, rdx_1)
    return arg2

*arg2 = 0
arg2[1] = 0
return arg2
