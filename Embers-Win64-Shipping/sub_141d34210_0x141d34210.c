// 函数: sub_141d34210
// 地址: 0x141d34210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x42] != 0)
    void* rax_1 = arg1[0x44]
    void* rcx = &arg1[0x46]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

if (arg1[0x3a] != 0)
    void* rax_3 = arg1[0x3c]
    void* rcx_1 = &arg1[0x3e]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (*(*rcx_1 + 0x10))(rcx_1)

sub_141d2fba0(&arg1[4])
void* rcx_3 = arg1[1]
*arg1 = &data_143222250

if (rcx_3 != 0)
    sub_1409740e0(rcx_3 + 8, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
