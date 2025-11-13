// 函数: sub_141193950
// 地址: 0x141193950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 << 5
int64_t* rbx_2 = *arg1 + r14_2
int32_t i

do
    sub_1408081b0(rbx_2)
    sub_1405ec8a0(&rbx_2[2])
    sub_1405d1550(&rbx_2[1])
    sub_1405d1550(rbx_2)
    rbx_2 = &rbx_2[4]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - r15_1.d

if (rdx_1 != arg3)
    int64_t rcx_4 = *arg1
    memmove(rcx_4 + r14_2, (sx.q(r15_1.d + arg3) << 5) + rcx_4, (rdx_1 - arg3) << 5)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405dad20(arg1)
