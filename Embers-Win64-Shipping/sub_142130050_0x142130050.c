// 函数: sub_142130050
// 地址: 0x142130050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *arg1
int64_t r14_1 = sx.q(arg2)

if ((r10_1.b & 1) != 0)
    r10_1 = (r10_1 s>> 1) + arg1

int32_t i_1 = arg3
int64_t r15_1 = r14_1 * 0x28
void* rbx_2 = r15_1 + 0x10 + r10_1
int32_t i

do
    sub_140a1d5c0(rbx_2)
    rbx_2 += 0x28
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_3 = rax_1 - r14_1.d

if (rcx_3 != arg3)
    void* r9 = *arg1
    
    if ((r9.b & 1) != 0)
        r9 = (r9 s>> 1) + arg1
    
    memmove(r15_1 + r9, r9 + sx.q(r14_1.d + arg3) * 0x28, (rcx_3 - arg3) * 0x28)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_142130710(arg1)
