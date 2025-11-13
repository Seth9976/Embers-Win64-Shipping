// 函数: sub_141a76690
// 地址: 0x141a76690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143036978

if (arg1[2] != 0)
    void* rax_1 = arg1[4]
    void* rcx = &arg1[6]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
