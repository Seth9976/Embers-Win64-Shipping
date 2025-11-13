// 函数: sub_141a61c00
// 地址: 0x141a61c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_1 = r14_1 * 0x70
void* rbx_2 = *arg1 + r15_1
int32_t i

do
    sub_1405ae180(rbx_2 + 0x20)
    int64_t rcx_1 = *(rbx_2 + 0x10)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *rbx_2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    rbx_2 += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_4 = rax_1 - r14_1.d

if (rcx_4 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_1, sx.q(r14_1.d + arg3) * 0x70 + r9, (rcx_4 - arg3) * 0x70)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140b26a50(arg1)
