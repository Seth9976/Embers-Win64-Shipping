// 函数: sub_141f22450
// 地址: 0x141f22450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r15_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r13_1 = r15_1 * 0x70
void* rbx_3 = *arg1 + 0x50 + r13_1
int32_t i

do
    sub_140596d80(rbx_3 + 0x10)
    *(rbx_3 + 8) = 0
    int64_t rcx_1 = *rbx_3
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_141f10e50(rbx_3 - 0x40, 0)
    int64_t rcx_3 = *(rbx_3 - 0x20)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(rbx_3 - 0x40)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rbx_3 += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rdx = arg1[1].d
int32_t r9_2 = rdx - r15_1.d - arg3

if (arg3 s<= r9_2)
    r9_2 = arg3

if (r9_2 != 0)
    int64_t rcx_5 = *arg1
    memcpy(rcx_5 + r13_1, sx.q(rdx - r9_2) * 0x70 + rcx_5, r9_2 * 0x70)
    rdx = arg1[1].d

arg1[1].d = rdx - arg3

if (arg4 != 0)
    sub_140b26a50(arg1)
