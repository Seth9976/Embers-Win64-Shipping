// 函数: sub_141893460
// 地址: 0x141893460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 * 0x30
int64_t* rbx_3 = *arg1 + 0x20 + r14_2
int32_t i

do
    sub_1418221b0(rbx_3)
    rbx_3 = &rbx_3[6]
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_2 = rax_1 - r15_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r14_2, sx.q(r15_1.d + arg3) * 0x30 + r9, (rcx_2 - arg3) * 0x30)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1407c4120(arg1)
