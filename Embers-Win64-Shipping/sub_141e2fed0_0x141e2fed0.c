// 函数: sub_141e2fed0
// 地址: 0x141e2fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0xc8
void* rbx_3 = *arg1 + 0x58 + r12_1
int32_t i

do
    int64_t rcx = *(rbx_3 + 0x20)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_141a90330(rbx_3)
    int64_t rcx_2 = *(rbx_3 - 0x10)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = *(rbx_3 - 0x48)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    rbx_3 += 0xc8
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_5 = rax_1 - r14_1.d

if (rcx_5 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, sx.q(r14_1.d + arg3) * 0xc8 + r9, (rcx_5 - arg3) * 0xc8)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_141cac580(arg1)
