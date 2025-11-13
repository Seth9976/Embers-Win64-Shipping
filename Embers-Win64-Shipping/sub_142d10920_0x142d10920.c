// 函数: sub_142d10920
// 地址: 0x142d10920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&data_143f5d7d0)
sub_140b30c00(&data_143f5d428)
sub_1423ff220(&data_143f5d3e8)
int64_t* rcx = data_143f5d3d8:8

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

data_143f5d3d0 = &data_142d56fa0
return &data_142d56fa0
