// 函数: sub_1423a8380
// 地址: 0x1423a8380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433395a0

if (arg1[0x20] != 0)
    void* rax_1 = arg1[0x22]
    void* rcx = &arg1[0x24]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (*(*rcx + 0x10))(rcx)

sub_1423a6090(&arg1[0x12])
sub_1423a6160(&arg1[2])
*arg1 = &data_143339450

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
