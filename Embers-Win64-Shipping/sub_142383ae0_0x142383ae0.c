// 函数: sub_142383ae0
// 地址: 0x142383ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143336930
int64_t* rcx = arg1[4]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

sub_140745b20(&arg1[2])
*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
