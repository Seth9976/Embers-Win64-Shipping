// 函数: sub_140b7c480
// 地址: 0x140b7c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140926e00(arg1 + 8, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* const rdx_1

if (rax.d == 0xffffffff)
    rdx_1 = nullptr
else
    rdx_1 = *(arg1 + 8) + rax * 0x28

int64_t* rcx_1 = rdx_1 + 0x10

if (rdx_1 == 0)
    rcx_1 = nullptr

if (rcx_1 == 0)
    *arg2 = 0
    arg2[1] = 0
    return arg2

*arg2 = *rcx_1
void* rax_4 = rcx_1[1]
arg2[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg2
