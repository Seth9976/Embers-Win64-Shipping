// 函数: sub_141eaa890
// 地址: 0x141eaa890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r14_2 = r15_1 * 0xa0
void* rbx_3 = *arg1 + 0x58 + r14_2
int32_t i

do
    *(rbx_3 - 8) = &data_143258940
    sub_140596d80(rbx_3 + 0x10)
    sub_140596d80(rbx_3)
    rbx_3 += 0xa0
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_3 = rax_1 - r15_1.d

if (rcx_3 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r14_2, sx.q(r15_1.d + arg3) * 0xa0 + r9, (rcx_3 - arg3) * 0xa0)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140ca2bb0(arg1)
