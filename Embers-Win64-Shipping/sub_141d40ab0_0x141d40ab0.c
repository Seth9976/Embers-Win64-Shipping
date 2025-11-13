// 函数: sub_141d40ab0
// 地址: 0x141d40ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 * 0x60
void* rbx_3 = *arg1 + 0x50 + r14_2
int32_t i

do
    *(rbx_3 + 8) = 0
    int64_t rcx = *rbx_3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_1409aaf90(rbx_3 - 0x40)
    int64_t* rcx_2 = *(rbx_3 - 0x48)
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    rbx_3 += 0x60
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_2 = arg1[1].d
int32_t rcx_4 = rax_2 - r15_1.d

if (rcx_4 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r14_2, sx.q(r15_1.d + arg3) * 0x60 + r9, (rcx_4 - arg3) * 0x60)
    rax_2 = arg1[1].d

arg1[1].d = rax_2 - arg3

if (arg4 != 0)
    sub_140d3e820(arg1)
