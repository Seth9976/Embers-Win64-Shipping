// 函数: sub_142383a60
// 地址: 0x142383a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433366e8
int64_t* rcx = arg1[7]

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140745b20(&arg1[2])
*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
