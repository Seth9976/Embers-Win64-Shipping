// 函数: sub_141f7eff0
// 地址: 0x141f7eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[0x36]

for (int64_t i = 3; i != 0; )
    int64_t rcx = *(rbx - 0x10)
    rbx -= 0x80
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *rbx = &data_142d6a040
    int64_t rcx_1 = *(rbx + 0x58)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_1405ae180(rbx + 8)

arg1[5] = &data_143282878
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
