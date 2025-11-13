// 函数: sub_142400bb0
// 地址: 0x142400bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0x80])
sub_140b30c00(&arg1[0xb])
sub_1423ff220(&arg1[3])
int64_t* rcx_3 = arg1[2]

if (rcx_3 != 0)
    int32_t temp0_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
