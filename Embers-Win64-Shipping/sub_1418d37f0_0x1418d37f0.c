// 函数: sub_1418d37f0
// 地址: 0x1418d37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = arg1 + 8; i != &i[0x64]; i = &i[0xa])
    sub_1407ecd90(i, 0)

void* rbx = arg1 + 0x328
void* result

for (int64_t i_1 = 0xa; i_1 != 0; )
    rbx -= 0x50
    i_1 -= 1
    *(rbx + 0x48) = 0
    int64_t rcx_1 = *(rbx + 0x40)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(rbx + 8) = 0
    
    if (*(rbx + 0xc) != 0)
        sub_1405a5130(rbx, 0)
    
    *(rbx + 0x30) = 0xffffffff
    *(rbx + 0x34) = 0
    result = sub_14059a8e0(rbx + 0x10, 0)
    int64_t rcx_4 = *(rbx + 0x20)
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *rbx
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

return result
