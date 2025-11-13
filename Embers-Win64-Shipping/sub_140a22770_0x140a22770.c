// 函数: sub_140a22770
// 地址: 0x140a22770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    return 

void* rbx_1 = *arg1

if ((rbx_1.b & 1) != 0)
    rbx_1 = (rbx_1 s>> 1) + arg1

int64_t r14_1 = *(arg3 + 0x28)
int32_t rdi_1 = 0
int32_t r15_1 = *(arg3 + 0x58)

if (arg4 s<= 0)
    return 

do
    uint64_t rax_2 = zx.q(rdi_1 * r15_1)
    r14_1(arg2, rax_2 + rbx_1, arg3, rax_2 + arg5)
    rdi_1 += 1
while (rdi_1 s< arg4)
