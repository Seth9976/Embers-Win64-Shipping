// 函数: sub_141d33c20
// 地址: 0x141d33c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222828
void* rbx = &arg1[0x37]

for (int64_t i = 3; i != 0; )
    rbx -= 0x70
    i -= 1
    *(rbx + 8) = 0
    int64_t rcx = *rbx
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    sub_1408d6a20(rbx - 0x40)
    int64_t rcx_2 = *(rbx - 0x58)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

*arg1 = &data_142e85a30

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
