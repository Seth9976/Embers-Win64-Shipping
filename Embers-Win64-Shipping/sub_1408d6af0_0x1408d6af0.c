// 函数: sub_1408d6af0
// 地址: 0x1408d6af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e0e3b0

if (arg1[0xe] != 0)
    void* rax_1 = arg1[0x10]
    void* rcx = &arg1[0x12]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[6] != 0)
    void* rax_3 = arg1[8]
    void* rcx_1 = &arg1[0xa]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
