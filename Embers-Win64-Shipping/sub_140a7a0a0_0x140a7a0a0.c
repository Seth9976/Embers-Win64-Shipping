// 函数: sub_140a7a0a0
// 地址: 0x140a7a0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14062d6e0(arg1 + 0x48, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0x48) + rax * 0x28

int64_t* rdx_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rdx_2 = nullptr

if (rdx_2 == 0)
    rax.b = 0
    return rax

sub_140597df0(arg3, rdx_2)
int64_t* rax_1
rax_1.b = 1
return rax_1
