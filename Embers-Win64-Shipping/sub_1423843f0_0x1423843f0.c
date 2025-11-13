// 函数: sub_1423843f0
// 地址: 0x1423843f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336548
sub_14239a450(&arg1[2])
int64_t* rcx_1 = arg1[4]

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1, 1)

sub_142380ea0(&arg1[1])
*arg1 = &data_142fe1158

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
