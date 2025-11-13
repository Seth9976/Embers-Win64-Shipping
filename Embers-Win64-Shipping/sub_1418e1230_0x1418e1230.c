// 函数: sub_1418e1230
// 地址: 0x1418e1230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t arg_10 = arg2
int32_t arg_8
sub_140865c40(arg1 + 0xa0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0xa0) + rax * 0x18

int64_t result = rcx_1 + 8

if (rcx_1 == 0)
    result = 0

if (result != 0)
    return result

return sub_1418ca3c0(arg1 + 0xa0, &arg_10, &arg_18)
