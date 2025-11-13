// 函数: sub_141f22370
// 地址: 0x141f22370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 * 0x30
void* rbx_2 = *arg1 + r14_2
int32_t i

do
    int64_t rcx = *(rbx_2 + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *rbx_2
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    rbx_2 += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t r9 = arg1[1].d
int32_t rdx_2 = r9 - r15_1.d - arg3

if (arg3 s<= rdx_2)
    rdx_2 = arg3

if (rdx_2 != 0)
    int64_t rcx_2 = *arg1
    memcpy(rcx_2 + r14_2, sx.q(r9 - rdx_2) * 0x30 + rcx_2, rdx_2 * 0x30)
    r9 = arg1[1].d

arg1[1].d = r9 - arg3

if (arg4 != 0)
    sub_1407c4120(arg1)
