// 函数: sub_140808570
// 地址: 0x140808570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_1 = r14_1 * 0x368
void* rbx_2 = *arg1 + r15_1
int32_t i

do
    sub_140846e80(rbx_2)
    rbx_2 += 0x368
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_2 = rax_1 - r14_1.d

if (rcx_2 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_1, sx.q(r14_1.d + arg3) * 0x368 + r9, (rcx_2 - arg3) * 0x368)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140809740(arg1)
