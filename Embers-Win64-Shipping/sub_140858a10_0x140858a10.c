// 函数: sub_140858a10
// 地址: 0x140858a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 << 5
void* rbx_2 = *arg1 + r14_2
int32_t i

do
    int64_t rcx = *(rbx_2 + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *rbx_2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    rbx_2 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rdx_1 = rax_1 - r15_1.d

if (rdx_1 != arg3)
    int64_t rcx_2 = *arg1
    memmove(rcx_2 + r14_2, (sx.q(r15_1.d + arg3) << 5) + rcx_2, (rdx_1 - arg3) << 5)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_1405dad20(arg1)
