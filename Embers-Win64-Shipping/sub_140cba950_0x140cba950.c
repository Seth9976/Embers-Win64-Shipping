// 函数: sub_140cba950
// 地址: 0x140cba950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg1
int64_t rax_4 = sx.q(arg3 s% 0xa)
int32_t arg_18
sub_140910250(rax_4 * 0x50 + &data_143e1aeb0, &arg_18, arg2)
int64_t rax_5 = sx.q(arg_18)
void* const rcx_1

if (rax_5.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(rax_4 * 0x50 + &data_143e1aeb0) + rax_5 * 0x28

int128_t* rax_7 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_7 = nullptr

if (rax_7 != 0)
    *arg2 = *rax_7

return arg2
