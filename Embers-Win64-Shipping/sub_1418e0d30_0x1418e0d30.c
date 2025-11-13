// 函数: sub_1418e0d30
// 地址: 0x1418e0d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t arg_10 = arg2
int32_t arg_8
sub_140865c40(arg1 + 0xa0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0xa0) + rax * 0x18

int32_t* rax_2 = rcx_1 + 8

if (rcx_1 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return zx.q(*rax_2)

sub_1418ca3c0(arg1 + 0xa0, &arg_10, &arg_18)
return zx.q(arg_18)
