// 函数: sub_142656a30
// 地址: 0x142656a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x3a8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x3a8) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 == 0)
    return 0xffffffff

return zx.q(*rax_2)
