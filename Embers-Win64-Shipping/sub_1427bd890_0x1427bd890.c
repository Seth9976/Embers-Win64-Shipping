// 函数: sub_1427bd890
// 地址: 0x1427bd890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x48] != 0)
    void* rax_1 = arg1[0x4a]
    void* rcx = &arg1[0x4c]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x40] != 0)
    void* rax_3 = arg1[0x42]
    void* rcx_1 = &arg1[0x44]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

if (arg1[0x38] != 0)
    void* rax_5 = arg1[0x3a]
    void* rcx_2 = &arg1[0x3c]
    
    if (rax_5 != 0)
        rcx_2 = rax_5
    
    (*(*rcx_2 + 0x10))(rcx_2)

if (arg1[0x30] != 0)
    void* rax_7 = arg1[0x32]
    void* rcx_3 = &arg1[0x34]
    
    if (rax_7 != 0)
        rcx_3 = rax_7
    
    (*(*rcx_3 + 0x10))(rcx_3)

if (arg1[0x28] != 0)
    void* rax_9 = arg1[0x2a]
    void* rcx_4 = &arg1[0x2c]
    
    if (rax_9 != 0)
        rcx_4 = rax_9
    
    (*(*rcx_4 + 0x10))(rcx_4)

arg1[0x27] = &data_142d5a090
sub_14279d400(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
