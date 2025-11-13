// 函数: sub_14279dd00
// 地址: 0x14279dd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xe] != 0)
    void* rax_1 = arg1[0x10]
    void* rcx = &arg1[0x12]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

*arg1 = &data_142e3e590

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
