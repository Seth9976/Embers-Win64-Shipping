// 函数: sub_141982eb0
// 地址: 0x141982eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rax_1 = *arg1
int64_t r15_1 = sx.q(arg2)

if ((rax_1.b & 1) != 0)
    rax_1 = (rax_1 s>> 1) + arg1

int32_t i_1 = arg3
int64_t r14_2 = r15_1 << 5
void* rbx_1 = r14_2 + rax_1
int32_t i

do
    sub_1405d1550(rbx_1)
    rbx_1 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = arg1[1].d
int32_t rdx_1 = rax_3 - r15_1.d

if (rdx_1 != arg3)
    void* rcx_1 = *arg1
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + arg1
    
    memmove(rcx_1 + r14_2, (sx.q(r15_1.d + arg3) << 5) + rcx_1, (rdx_1 - arg3) << 5)
    rax_3 = arg1[1].d

arg1[1].d = rax_3 - arg3

if (arg4 != 0)
    sub_1405e40b0(arg1)
