// 函数: sub_1418f49f0
// 地址: 0x1418f49f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff18d8
sub_1418f8550(arg1)
int64_t rcx = arg1[0x13]

if (rcx != &arg1[0x10])
    j_sub_140a74f90(rcx)

sub_1405d1550(&arg1[0x14])
arg1[1] = &data_142ff18d0
sub_1418f81f0(&arg1[1])
int64_t* rcx_3 = arg1[0xd]

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1 && rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

*arg1 = &data_142dd6680
return &data_142dd6680
