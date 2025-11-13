// 函数: sub_14177dac0
// 地址: 0x14177dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t i_1 = arg3
int64_t r15_1 = sx.q(arg2)
int64_t r14_2 = r15_1 * 0x50
void* rbx_2 = *arg1 + r14_2
int32_t i

do
    *(rbx_2 + 0x48) = 0
    int64_t rcx = *(rbx_2 + 0x40)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(rbx_2 + 8) = 0
    
    if (*(rbx_2 + 0xc) != 0)
        sub_1405a5410(rbx_2, 0)
    
    *(rbx_2 + 0x30) = 0xffffffff
    *(rbx_2 + 0x34) = 0
    sub_14059a8e0(rbx_2 + 0x10, 0)
    int64_t rcx_3 = *(rbx_2 + 0x20)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rbx_2
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rbx_2 += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_6 = rax_1 - r15_1.d

if (rcx_6 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r14_2, sx.q(r15_1.d + arg3) * 0x50 + r9, (rcx_6 - arg3) * 0x50)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_140976b40(arg1)
