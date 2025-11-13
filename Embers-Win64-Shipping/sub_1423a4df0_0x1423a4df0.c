// 函数: sub_1423a4df0
// 地址: 0x1423a4df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1].d = 0xffffffff
int32_t arg_8
sub_140865c40(arg2 + 0x30, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg2 + 0x30) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    arg1[1].d = *rax_2

return arg1
