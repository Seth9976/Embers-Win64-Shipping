// 函数: sub_141704720
// 地址: 0x141704720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2.d
arg1[1] = (arg2 u>> 0x20).d
*(arg1 + 8) = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[1] * *arg1)
int64_t count = sx.q(((temp1 + (temp0 & 7)) s>> 3) + 1)
arg1[4] = ((temp1 + (temp0 & 7)) s>> 3) + 1
int64_t rax_6 = j_sub_140a82f30(count)
int64_t rbx = rax_6

if (rax_6 == 0)
    rbx = 0
else
    memset(rax_6, 0, count)

void arg_8

if (&arg1[2] != &arg_8)
    int64_t rcx_2 = *(arg1 + 8)
    *(arg1 + 8) = rbx
    rbx = 0
    j_sub_140a74f90(rcx_2)

j_sub_140a74f90(rbx)
memset(*(arg1 + 8), 0, sx.q(arg1[4]))
return arg1
