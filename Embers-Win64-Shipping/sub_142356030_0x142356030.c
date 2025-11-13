// 函数: sub_142356030
// 地址: 0x142356030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f7baf0(&arg1[0xa])

if (arg1[2] != 0)
    void* rax_1 = arg1[4]
    void* rcx_1 = &arg1[6]
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    (*(*rcx_1 + 0x10))(rcx_1)

*arg1 = &data_142d4cb20

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
