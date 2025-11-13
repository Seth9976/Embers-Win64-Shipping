// 函数: sub_141839f10
// 地址: 0x141839f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140cba0f0(arg1 + 0x250, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x250)

int64_t* rax_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return rax_1

void* rax_2
rax_2.b = 1
*arg3 = *(*rax_1 + 0x10)
return rax_2
