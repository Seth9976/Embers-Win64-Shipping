// 函数: sub_142355fd0
// 地址: 0x142355fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4] != 0)
    void* rax_1 = arg1[6]
    void* rcx = &arg1[8]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

*arg1 = &data_142d4cb20

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
