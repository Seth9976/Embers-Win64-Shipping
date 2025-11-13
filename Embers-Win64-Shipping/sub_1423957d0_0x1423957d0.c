// 函数: sub_1423957d0
// 地址: 0x1423957d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 * 0x90
void* rbx_2 = *arg1 + r14_2
int32_t i

do
    sub_141f519f0(rbx_2)
    rbx_2 += 0x90
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_2 = rax_1 - r15_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r14_2, sx.q(r15_1.d + arg3) * 0x90 + r9, (rcx_2 - arg3) * 0x90)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_142396bd0(arg1)
