// 函数: sub_14194bd00
// 地址: 0x14194bd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0x58
void* rbx_3 = *arg1 + 0x48 + r12_1
int32_t i

do
    *(rbx_3 + 8) = 0
    int64_t rcx = *rbx_3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(rbx_3 - 0x38) = 0
    
    if (*(rbx_3 - 0x34) != 0)
        sub_1405a5410(rbx_3 - 0x40, 0)
    
    *(rbx_3 - 0x10) = 0xffffffff
    *(rbx_3 - 0xc) = 0
    sub_14059a8e0(rbx_3 - 0x30, 0)
    int64_t rcx_3 = *(rbx_3 - 0x20)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(rbx_3 - 0x40)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rbx_3 += 0x58
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_6 = rax_1 - r14_1.d

if (rcx_6 != arg3)
    int64_t r9 = *arg1
    memmove(r9 + r12_1, sx.q(r14_1.d + arg3) * 0x58 + r9, (rcx_6 - arg3) * 0x58)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_14083ac10(arg1)
