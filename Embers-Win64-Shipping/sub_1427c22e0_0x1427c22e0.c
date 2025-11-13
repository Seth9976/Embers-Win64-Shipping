// 函数: sub_1427c22e0
// 地址: 0x1427c22e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa] != 0)
    void* rax_1 = arg1[0xc]
    void* rcx = &arg1[0xe]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_140596eb0(&arg1[6])
arg1[5] = &data_1434c6440
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
