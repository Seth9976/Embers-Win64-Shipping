// 函数: sub_141348920
// 地址: 0x141348920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x20] != 0)
    void* rax_1 = arg1[0x22]
    void* rcx = &arg1[0x24]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_1412fffd0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
