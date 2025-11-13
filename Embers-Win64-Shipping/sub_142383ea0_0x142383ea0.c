// 函数: sub_142383ea0
// 地址: 0x142383ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336590
sub_14239a380(&arg1[2])
int64_t rcx_1 = arg1[7]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[4]

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2, 1)

sub_142380e30(&arg1[1])
*arg1 = &data_142fe1158

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
