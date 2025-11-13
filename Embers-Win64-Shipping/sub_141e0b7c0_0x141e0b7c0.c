// 函数: sub_141e0b7c0
// 地址: 0x141e0b7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 << 4
int64_t* rbx_2 = *arg1 + r14_2
int32_t i

do
    sub_140745b20(rbx_2)
    rbx_2 = &rbx_2[2]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - r15_1.d

if (rdx_1 != arg3)
    int64_t rcx_1 = *arg1
    memmove(rcx_1 + r14_2, (sx.q(r15_1.d + arg3) << 4) + rcx_1, (rdx_1 - arg3) << 4)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405a5010(arg1)
