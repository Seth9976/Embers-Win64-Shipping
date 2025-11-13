// 函数: sub_141d86a30
// 地址: 0x141d86a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0xc])
sub_140596eb0(&arg1[9])
sub_140596eb0(&arg1[6])
sub_140596eb0(&arg1[3])
int64_t* rcx_4 = arg1[2]

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

*arg1 = &data_143237330

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
