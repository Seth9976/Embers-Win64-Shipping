// 函数: ??_GMRE@@IEAAPEAXI@Z
// 地址: 0x1405b27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d49cb8
arg1[0xc] = &data_142d49f48
arg1[0xf] = &data_142d49f58
sub_1405b5d50(arg1)
arg1[0xf] = &data_142d44dd8
arg1[0xc] = &data_142d45438
int64_t* rcx = arg1[8]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
