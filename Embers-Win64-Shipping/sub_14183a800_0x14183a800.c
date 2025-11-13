// 函数: sub_14183a800
// 地址: 0x14183a800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int512_t zmm1 = sub_140910250(arg1 + 8, &arg_8, arg4)
int64_t rax = sx.q(arg_8)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 8) + rax * 0x28

void* const rdx_1 = rcx_1 + 0x10

if (rcx_1 == 0)
    rdx_1 = nullptr

if (rdx_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    sub_14183a8c0(arg2, *(rdx_1 + 8), arg3, arg4, zmm1, arg5)

return arg2
