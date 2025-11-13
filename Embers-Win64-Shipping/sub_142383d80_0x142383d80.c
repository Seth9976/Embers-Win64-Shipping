// 函数: sub_142383d80
// 地址: 0x142383d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433367a0

if (arg1[0x7a] != 0)
    void* rax_1 = arg1[0x7c]
    void* rcx = &arg1[0x7e]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_142381990(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
