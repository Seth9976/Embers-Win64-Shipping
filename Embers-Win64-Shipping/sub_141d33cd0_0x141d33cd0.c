// 函数: sub_141d33cd0
// 地址: 0x141d33cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[0x25]
*arg1 = &data_1432226a0
void* rbx = rdi + 0x50

for (int64_t i = 3; i != 0; )
    rbx -= 0x60
    i -= 1
    *(rbx + 8) = 0
    rdi -= 0x60
    int64_t rcx = *rbx
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(rbx - 0x38) = 0
    
    if (*(rbx - 0x34) != 0)
        sub_1405a5410(rbx - 0x40, 0)
    
    *(rbx - 0x10) = 0xffffffff
    *(rbx - 0xc) = 0
    sub_14059a8e0(rbx - 0x30, 0)
    int64_t rcx_3 = *(rbx - 0x20)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *(rbx - 0x40)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *rdi
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
