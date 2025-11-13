// 函数: sub_141973240
// 地址: 0x141973240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14093f560(arg2, &arg_8, arg3)
int64_t rax = sx.q(arg_8)
int64_t rbx_2
void* rbx_3

if (rax.d != 0xffffffff)
    rbx_2 = rax * 0x30
    rbx_3 = rbx_2 + *arg2

int64_t var_28
int64_t var_18
int32_t rcx_3

if (rax.d == 0xffffffff || rbx_2 == neg.q(*arg2))
    rcx_3 = 0
    __builtin_memset(&var_28, 0, 0x20)
else
    sub_140596d10(&var_28, rbx_3 + 8)
    sub_140596d10(&var_18, rbx_3 + 0x18)
    int32_t var_10
    rcx_3 = var_10

int32_t rax_1 = rcx_3 - 1

if (rcx_3 == 0)
    rax_1 = 0

int64_t* rdx_3 = &var_28

if (rax_1 s> 0)
    rdx_3 = &var_18

sub_140596d10(arg1, rdx_3)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg1
