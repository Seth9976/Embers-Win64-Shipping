// 函数: sub_140ca21a0
// 地址: 0x140ca21a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r12_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r15_2 = r12_1 * 0xa0
void* rbx_3 = *arg1 + 0x90 + r15_2
int32_t i

do
    *(rbx_3 + 8) = 0
    int64_t rcx = *rbx_3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_1405e1b50(rbx_3 - 0x40, 0)
    int64_t rcx_2 = *(rbx_3 - 0x20)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = *(rbx_3 - 0x40)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    rbx_3 += 0xa0
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_5 = rax_1 - r12_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r15_2, sx.q(r12_1.d + arg3) * 0xa0 + r9, (rcx_5 - arg3) * 0xa0)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140ca2bb0(arg1)
