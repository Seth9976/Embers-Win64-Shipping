// 函数: sub_1405b1590
// 地址: 0x1405b1590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405aecf0(&arg1[6])
int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142d4ba40
int64_t* rcx_2 = arg1[2]

if (rcx_2 != 0)
    int32_t temp0_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_2 + 8))(rcx_2, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
