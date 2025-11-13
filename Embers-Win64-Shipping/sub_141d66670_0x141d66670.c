// 函数: sub_141d66670
// 地址: 0x141d66670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(&arg1[0xd])
*arg1 = &data_14302dca0
sub_141a32290(&arg1[3])
int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
