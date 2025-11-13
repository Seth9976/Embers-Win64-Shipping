// 函数: sub_141cbfdb0
// 地址: 0x141cbfdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
__builtin_memset(&arg1[2], 0, 0x40)
void var_38
int64_t* rax = sub_140596d10(&var_38, arg3)
*arg1 = 0
sub_140597df0(&arg1[0xa], rax)
arg1[8] = 0

if (arg1[9] s<= 0x7f)
    sub_1405c5510(&arg1[6], 0x80)

int32_t rax_1 = arg1[5]
arg1[4] = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5570(&arg1[2], 0)

int64_t rbx = sx.q(arg1[8])
int32_t rax_2 = (rbx + 1).d
arg1[8] = rax_2

if (rax_2 s> arg1[9])
    sub_1405daba0(&arg1[6])

*(rbx + *(arg1 + 0x18)) = 0
int64_t rbx_1 = sx.q(arg1[8])
int32_t rax_4 = (rbx_1 + 1).d
arg1[8] = rax_4

if (rax_4 s> arg1[9])
    sub_1405daba0(&arg1[6])

*(rbx_1 + *(arg1 + 0x18)) = 1
sub_141cc1b90(arg2, &arg1[6], &arg1[2])
int64_t rcx_7 = *rax

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg3

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
