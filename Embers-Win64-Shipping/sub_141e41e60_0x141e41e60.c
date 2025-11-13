// 函数: sub_141e41e60
// 地址: 0x141e41e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
sub_140d3a3a0(&arg_18, arg2)
int32_t arg_8
sub_1408506d0(arg1 + 0x308, &arg_8, arg_18)
int64_t rax = sx.q(arg_8)
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x308) + rax * 0x14

int32_t* rax_2 = rcx_2 + 8

if (rcx_2 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return zx.q(*rax_2)

return sub_141e3b870(arg1, arg2) __tailcall
