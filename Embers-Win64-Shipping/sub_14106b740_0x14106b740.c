// 函数: sub_14106b740
// 地址: 0x14106b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] != 0)
    void* rax_1 = arg1[4]
    void* rcx = &arg1[6]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

*arg1 = &data_142d5a090

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
