// 函数: sub_140e9f1a0
// 地址: 0x140e9f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142eda190
sub_140596d80(&arg1[5])
*arg1 = &data_142eda150
int64_t* rcx_1 = arg1[2]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
